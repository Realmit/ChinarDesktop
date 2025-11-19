#pragma once

namespace ChinarDesktop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ menu_button;
	private: System::Windows::Forms::Button^ order_button;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menu_button = (gcnew System::Windows::Forms::Button());
			this->order_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 150);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menu_button
			// 
			this->menu_button->Location = System::Drawing::Point(320, 10);
			this->menu_button->Name = L"menu_button";
			this->menu_button->Size = System::Drawing::Size(320, 50);
			this->menu_button->TabIndex = 2;
			this->menu_button->Text = L"Зайти в меню";
			this->menu_button->UseVisualStyleBackColor = true;
			this->menu_button->Click += gcnew System::EventHandler(this, &MainForm::menu_button_Click);
			// 
			// order_button
			// 
			this->order_button->Location = System::Drawing::Point(320, 110);
			this->order_button->Name = L"order_button";
			this->order_button->Size = System::Drawing::Size(320, 50);
			this->order_button->TabIndex = 3;
			this->order_button->Text = L"Сделать заказ";
			this->order_button->UseVisualStyleBackColor = true;
			this->order_button->Click += gcnew System::EventHandler(this, &MainForm::order_button_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 361);
			this->Controls->Add(this->order_button);
			this->Controls->Add(this->menu_button);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->Text = L"main_form";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menu_button_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void order_button_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
