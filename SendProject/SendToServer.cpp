#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "SendToServer.h"
#include "framework.h"
#include <httplib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace httplib;

int SendToServer::SendFileToServer()
{
    Server svr;

    // Endpoint to receive booking data
    svr.Post("/submit-booking", [](const Request& req, Response& res) {
        // Get the booking data from the request body
        std::string bookingData = req.body;

        // Log the received data
        std::cout << "\n=== NEW BOOKING RECEIVED ===" << std::endl;
        std::cout << "Raw data: " << bookingData << std::endl;

        // Save to file with timestamp
        std::time_t now = std::time(nullptr);
        std::tm* ptm = std::localtime(&now);
        char buffer[64];
        std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", ptm);

        std::string filename = std::string("Occasions") + buffer + ".txt";

        std::ofstream file(filename);
        if (file.is_open()) {
            file << "Booking Data Received at: " << std::asctime(ptm);
            file << "----------------------------------------\n";
            file << bookingData;
            file.close();
            std::cout << "Saved to: " << filename << std::endl;
        }

        // Parse the data (simple example)
        size_t firstPipe = bookingData.find('|');
        size_t secondPipe = bookingData.find('|', firstPipe + 1);

        if (firstPipe != std::string::npos && secondPipe != std::string::npos) {
            std::string clientInfo = bookingData.substr(0, firstPipe);
            std::string phone = bookingData.substr(firstPipe + 1, secondPipe - firstPipe - 1);
            std::string bookingDetails = bookingData.substr(secondPipe + 1);

            // Extract individual fields
            size_t firstComma = clientInfo.find(',');
            size_t secondComma = clientInfo.find(',', firstComma + 1);

            std::string surname = clientInfo.substr(0, firstComma);
            std::string name = clientInfo.substr(firstComma + 1, secondComma - firstComma - 1);
            std::string patronymic = clientInfo.substr(secondComma + 1);

            // Display parsed information
            std::cout << "\nParsed Booking Information:" << std::endl;
            std::cout << "Client: " << surname << " " << name << " " << patronymic << std::endl;
            std::cout << "Phone: " << phone << std::endl;
            std::cout << "Booking Details: " << bookingDetails << std::endl;
        }

        // Send a response back to the client
        res.set_content("Booking data received successfully!", "text/plain");
    });

    // Optional: Add a health check endpoint
    svr.Get("/health", [](const Request& req, Response& res) {
        res.set_content("Server is running", "text/plain");
    });

    std::cout << "Booking Server is running on port 80..." << std::endl;
    std::cout << "Connect from Android app using your local IP address" << std::endl;
    std::cout << "Example: http://192.168.x.x:8080/submit-booking" << std::endl;

    svr.listen("0.0.0.0", 80);

    return 0;
}