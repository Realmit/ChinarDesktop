#pragma once

namespace ChinarDesktop {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ShowOrders
	/// </summary>
	public ref class ShowOrders : public System::Windows::Forms::Form
	{
	public:
		ShowOrders(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShowOrders()
		{
			if (components)
			{
				delete components;
			}
		}
	private:System::Collections::Generic::List<String^>^ orders;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ All_orders;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::TextBox^ textBox_customer_patronymic;
	private: System::Windows::Forms::TextBox^ textBox_name_customer;
	private: System::Windows::Forms::TextBox^ textBox_wishes;
	private: System::Windows::Forms::TextBox^ textBox_number;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_surname_customer;
	private: System::Windows::Forms::Label^ label_wishes;
	private: System::Windows::Forms::Label^ tel_numb;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ in_order_label;
	private: System::Windows::Forms::TextBox^ custom_tables;
	private: System::Windows::Forms::TextBox^ custom_occasion;
	private: System::Windows::Forms::Label^ tables_label;
	private: System::Windows::Forms::Label^ occasion_label;
	private: System::Windows::Forms::Label^ people_count_label;
	private: System::Windows::Forms::Label^ date_label;
	private: System::Windows::Forms::TextBox^ roubles;
	private: System::Windows::Forms::TextBox^ positions;
	private: System::Windows::Forms::Label^ pos_label;
	private: System::Windows::Forms::Label^ roubles_label;
	private: System::Windows::Forms::TextBox^ textBox_extra;
	private: System::Windows::Forms::TextBox^ textBox_date;
	private: System::Windows::Forms::TextBox^ textBox_guests_count;
	private: System::Windows::Forms::Label^ dishes;
	private: System::Windows::Forms::TextBox^ all_dishes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ocussion_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ initials;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Count_guests;
	private: System::Windows::Forms::DataGridViewButtonColumn^ ShowOrder;
























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ocussion_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->initials = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Count_guests = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ShowOrder = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->All_orders = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->textBox_customer_patronymic = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name_customer = (gcnew System::Windows::Forms::TextBox());
			this->textBox_wishes = (gcnew System::Windows::Forms::TextBox());
			this->textBox_number = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_surname_customer = (gcnew System::Windows::Forms::TextBox());
			this->label_wishes = (gcnew System::Windows::Forms::Label());
			this->tel_numb = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->in_order_label = (gcnew System::Windows::Forms::Label());
			this->custom_tables = (gcnew System::Windows::Forms::TextBox());
			this->custom_occasion = (gcnew System::Windows::Forms::TextBox());
			this->tables_label = (gcnew System::Windows::Forms::Label());
			this->occasion_label = (gcnew System::Windows::Forms::Label());
			this->people_count_label = (gcnew System::Windows::Forms::Label());
			this->date_label = (gcnew System::Windows::Forms::Label());
			this->roubles = (gcnew System::Windows::Forms::TextBox());
			this->positions = (gcnew System::Windows::Forms::TextBox());
			this->pos_label = (gcnew System::Windows::Forms::Label());
			this->roubles_label = (gcnew System::Windows::Forms::Label());
			this->textBox_extra = (gcnew System::Windows::Forms::TextBox());
			this->textBox_date = (gcnew System::Windows::Forms::TextBox());
			this->textBox_guests_count = (gcnew System::Windows::Forms::TextBox());
			this->dishes = (gcnew System::Windows::Forms::Label());
			this->all_dishes = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->number,
					this->Date, this->Ocussion_name, this->initials, this->Count_guests, this->ShowOrder
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 36);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(716, 277);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ShowOrders::dataGridView1_CellContentClick);
			// 
			// number
			// 
			this->number->HeaderText = L"Номер заказа";
			this->number->Name = L"number";
			this->number->ReadOnly = true;
			this->number->Width = 50;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Дата";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			// 
			// Ocussion_name
			// 
			this->Ocussion_name->HeaderText = L"Мероприятие";
			this->Ocussion_name->Name = L"Ocussion_name";
			this->Ocussion_name->ReadOnly = true;
			this->Ocussion_name->Width = 150;
			// 
			// initials
			// 
			this->initials->HeaderText = L"ФИО";
			this->initials->Name = L"initials";
			this->initials->ReadOnly = true;
			this->initials->Width = 200;
			// 
			// Count_guests
			// 
			this->Count_guests->HeaderText = L"Кол-во гостей";
			this->Count_guests->Name = L"Count_guests";
			this->Count_guests->ReadOnly = true;
			this->Count_guests->Width = 55;
			// 
			// ShowOrder
			// 
			this->ShowOrder->HeaderText = L"";
			this->ShowOrder->Name = L"ShowOrder";
			this->ShowOrder->ReadOnly = true;
			this->ShowOrder->Text = L"Показать";
			this->ShowOrder->UseColumnTextForButtonValue = true;
			// 
			// All_orders
			// 
			this->All_orders->AutoSize = true;
			this->All_orders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->All_orders->Location = System::Drawing::Point(12, 13);
			this->All_orders->Name = L"All_orders";
			this->All_orders->Size = System::Drawing::Size(98, 20);
			this->All_orders->TabIndex = 1;
			this->All_orders->Text = L"Все заказы:";
			// 
			// button_exit
			// 
			this->button_exit->Location = System::Drawing::Point(16, 519);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(141, 33);
			this->button_exit->TabIndex = 2;
			this->button_exit->Text = L"Выход";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &ShowOrders::button1_Click);
			// 
			// textBox_customer_patronymic
			// 
			this->textBox_customer_patronymic->Location = System::Drawing::Point(385, 410);
			this->textBox_customer_patronymic->Name = L"textBox_customer_patronymic";
			this->textBox_customer_patronymic->ReadOnly = true;
			this->textBox_customer_patronymic->Size = System::Drawing::Size(151, 20);
			this->textBox_customer_patronymic->TabIndex = 50;
			// 
			// textBox_name_customer
			// 
			this->textBox_name_customer->Location = System::Drawing::Point(385, 380);
			this->textBox_name_customer->Name = L"textBox_name_customer";
			this->textBox_name_customer->ReadOnly = true;
			this->textBox_name_customer->Size = System::Drawing::Size(151, 20);
			this->textBox_name_customer->TabIndex = 49;
			// 
			// textBox_wishes
			// 
			this->textBox_wishes->Location = System::Drawing::Point(203, 353);
			this->textBox_wishes->Multiline = true;
			this->textBox_wishes->Name = L"textBox_wishes";
			this->textBox_wishes->ReadOnly = true;
			this->textBox_wishes->Size = System::Drawing::Size(166, 81);
			this->textBox_wishes->TabIndex = 48;
			// 
			// textBox_number
			// 
			this->textBox_number->Location = System::Drawing::Point(385, 454);
			this->textBox_number->Name = L"textBox_number";
			this->textBox_number->ReadOnly = true;
			this->textBox_number->Size = System::Drawing::Size(149, 20);
			this->textBox_number->TabIndex = 47;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(200, 451);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 13);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Дополнительные услуги:";
			// 
			// textBox_surname_customer
			// 
			this->textBox_surname_customer->Location = System::Drawing::Point(385, 353);
			this->textBox_surname_customer->Name = L"textBox_surname_customer";
			this->textBox_surname_customer->ReadOnly = true;
			this->textBox_surname_customer->Size = System::Drawing::Size(151, 20);
			this->textBox_surname_customer->TabIndex = 45;
			// 
			// label_wishes
			// 
			this->label_wishes->AutoSize = true;
			this->label_wishes->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->label_wishes->Location = System::Drawing::Point(200, 334);
			this->label_wishes->Name = L"label_wishes";
			this->label_wishes->Size = System::Drawing::Size(129, 13);
			this->label_wishes->TabIndex = 44;
			this->label_wishes->Text = L"Доп. пожелания по еде:";
			// 
			// tel_numb
			// 
			this->tel_numb->AutoSize = true;
			this->tel_numb->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->tel_numb->Location = System::Drawing::Point(382, 437);
			this->tel_numb->Name = L"tel_numb";
			this->tel_numb->Size = System::Drawing::Size(129, 13);
			this->tel_numb->TabIndex = 43;
			this->tel_numb->Text = L"Номер телефона/почта:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->label1->Location = System::Drawing::Point(382, 337);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Фио заказчика:";
			// 
			// in_order_label
			// 
			this->in_order_label->AutoSize = true;
			this->in_order_label->Location = System::Drawing::Point(385, 481);
			this->in_order_label->Name = L"in_order_label";
			this->in_order_label->Size = System::Drawing::Size(56, 13);
			this->in_order_label->TabIndex = 39;
			this->in_order_label->Text = L"В заказе:";
			this->in_order_label->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// custom_tables
			// 
			this->custom_tables->Location = System::Drawing::Point(28, 474);
			this->custom_tables->Name = L"custom_tables";
			this->custom_tables->ReadOnly = true;
			this->custom_tables->Size = System::Drawing::Size(159, 20);
			this->custom_tables->TabIndex = 36;
			// 
			// custom_occasion
			// 
			this->custom_occasion->Location = System::Drawing::Point(28, 430);
			this->custom_occasion->Name = L"custom_occasion";
			this->custom_occasion->ReadOnly = true;
			this->custom_occasion->Size = System::Drawing::Size(159, 20);
			this->custom_occasion->TabIndex = 35;
			this->custom_occasion->TextChanged += gcnew System::EventHandler(this, &ShowOrders::custom_occasion_TextChanged);
			// 
			// tables_label
			// 
			this->tables_label->AutoSize = true;
			this->tables_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tables_label->Location = System::Drawing::Point(26, 454);
			this->tables_label->Name = L"tables_label";
			this->tables_label->Size = System::Drawing::Size(57, 13);
			this->tables_label->TabIndex = 32;
			this->tables_label->Text = L"Скатерти:";
			// 
			// occasion_label
			// 
			this->occasion_label->AutoSize = true;
			this->occasion_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->occasion_label->Location = System::Drawing::Point(26, 410);
			this->occasion_label->Name = L"occasion_label";
			this->occasion_label->Size = System::Drawing::Size(78, 13);
			this->occasion_label->TabIndex = 31;
			this->occasion_label->Text = L"Мероприятие:";
			// 
			// people_count_label
			// 
			this->people_count_label->AutoSize = true;
			this->people_count_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->people_count_label->Location = System::Drawing::Point(26, 374);
			this->people_count_label->Name = L"people_count_label";
			this->people_count_label->Size = System::Drawing::Size(66, 26);
			this->people_count_label->TabIndex = 28;
			this->people_count_label->Text = L"Количество\r\nчеловек:";
			// 
			// date_label
			// 
			this->date_label->AutoSize = true;
			this->date_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date_label->Location = System::Drawing::Point(28, 332);
			this->date_label->Name = L"date_label";
			this->date_label->Size = System::Drawing::Size(36, 13);
			this->date_label->TabIndex = 27;
			this->date_label->Text = L"Дата:";
			// 
			// roubles
			// 
			this->roubles->Enabled = false;
			this->roubles->Location = System::Drawing::Point(385, 526);
			this->roubles->Name = L"roubles";
			this->roubles->ReadOnly = true;
			this->roubles->Size = System::Drawing::Size(100, 20);
			this->roubles->TabIndex = 37;
			// 
			// positions
			// 
			this->positions->Enabled = false;
			this->positions->Location = System::Drawing::Point(385, 500);
			this->positions->Name = L"positions";
			this->positions->ReadOnly = true;
			this->positions->Size = System::Drawing::Size(100, 20);
			this->positions->TabIndex = 38;
			// 
			// pos_label
			// 
			this->pos_label->AutoSize = true;
			this->pos_label->Location = System::Drawing::Point(491, 503);
			this->pos_label->Name = L"pos_label";
			this->pos_label->Size = System::Drawing::Size(51, 13);
			this->pos_label->TabIndex = 40;
			this->pos_label->Text = L"Позиций";
			// 
			// roubles_label
			// 
			this->roubles_label->AutoSize = true;
			this->roubles_label->Location = System::Drawing::Point(491, 529);
			this->roubles_label->Name = L"roubles_label";
			this->roubles_label->Size = System::Drawing::Size(43, 13);
			this->roubles_label->TabIndex = 41;
			this->roubles_label->Text = L"Рублей";
			// 
			// textBox_extra
			// 
			this->textBox_extra->Location = System::Drawing::Point(203, 467);
			this->textBox_extra->Multiline = true;
			this->textBox_extra->Name = L"textBox_extra";
			this->textBox_extra->ReadOnly = true;
			this->textBox_extra->Size = System::Drawing::Size(166, 79);
			this->textBox_extra->TabIndex = 48;
			// 
			// textBox_date
			// 
			this->textBox_date->Location = System::Drawing::Point(28, 350);
			this->textBox_date->Name = L"textBox_date";
			this->textBox_date->ReadOnly = true;
			this->textBox_date->Size = System::Drawing::Size(158, 20);
			this->textBox_date->TabIndex = 51;
			// 
			// textBox_guests_count
			// 
			this->textBox_guests_count->Location = System::Drawing::Point(125, 380);
			this->textBox_guests_count->Name = L"textBox_guests_count";
			this->textBox_guests_count->ReadOnly = true;
			this->textBox_guests_count->Size = System::Drawing::Size(61, 20);
			this->textBox_guests_count->TabIndex = 51;
			// 
			// dishes
			// 
			this->dishes->AutoSize = true;
			this->dishes->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->dishes->Location = System::Drawing::Point(545, 337);
			this->dishes->Name = L"dishes";
			this->dishes->Size = System::Drawing::Size(108, 13);
			this->dishes->TabIndex = 42;
			this->dishes->Text = L"Заказанные блюда:";
			this->dishes->Click += gcnew System::EventHandler(this, &ShowOrders::dishes_Click);
			// 
			// all_dishes
			// 
			this->all_dishes->Location = System::Drawing::Point(548, 353);
			this->all_dishes->Multiline = true;
			this->all_dishes->Name = L"all_dishes";
			this->all_dishes->ReadOnly = true;
			this->all_dishes->Size = System::Drawing::Size(178, 193);
			this->all_dishes->TabIndex = 48;
			// 
			// ShowOrders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->ClientSize = System::Drawing::Size(738, 566);
			this->Controls->Add(this->textBox_guests_count);
			this->Controls->Add(this->textBox_date);
			this->Controls->Add(this->textBox_customer_patronymic);
			this->Controls->Add(this->textBox_name_customer);
			this->Controls->Add(this->textBox_extra);
			this->Controls->Add(this->all_dishes);
			this->Controls->Add(this->textBox_wishes);
			this->Controls->Add(this->textBox_number);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_surname_customer);
			this->Controls->Add(this->label_wishes);
			this->Controls->Add(this->tel_numb);
			this->Controls->Add(this->dishes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->roubles_label);
			this->Controls->Add(this->pos_label);
			this->Controls->Add(this->in_order_label);
			this->Controls->Add(this->positions);
			this->Controls->Add(this->roubles);
			this->Controls->Add(this->custom_tables);
			this->Controls->Add(this->custom_occasion);
			this->Controls->Add(this->tables_label);
			this->Controls->Add(this->occasion_label);
			this->Controls->Add(this->people_count_label);
			this->Controls->Add(this->date_label);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->All_orders);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ShowOrders";
			this->Text = L"ShowOrders";
			this->Load += gcnew System::EventHandler(this, &ShowOrders::ShowOrders_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShowOrders_Load(System::Object^ sender, System::EventArgs^ e) {
		orders = gcnew System::Collections::Generic::List<String^>();
		dataGridView1->Rows->Clear();

		if (!System::IO::File::Exists("Occasions.txt"))
			return;

		auto lines = System::IO::File::ReadAllLines("Occasions.txt", Encoding::UTF8);

		int orderNumber = 1;

		for each (String ^ line in lines)
		{
			if (String::IsNullOrWhiteSpace(line))
				continue;

			orders->Add(line);

			auto p = line->Split('|');

			// ФИО -> красиво в одну строку
			auto fioParts = p[0]->Split(',');
			String^ fio = fioParts[0] + " " + fioParts[1] + " " + fioParts[2];

			// дата
			auto dateParts = p[2]->Split(',');
			String^ date = dateParts[2] + "." + dateParts[1] + "." + dateParts[0];

			dataGridView1->Rows->Add(
				orderNumber++,        // номер заказа
				date,                 // дата
				p[3],                 // мероприятие
				fio,                  // ФИО
				p[4]                  // кол-во гостей
			);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0)
			return;

		// нажали не на кнопку "Показать"
		if (dataGridView1->Columns[e->ColumnIndex]->Name != "ShowOrder")
			return;

		String^ line = orders[e->RowIndex];
		auto p = line->Split('|');

		// ===== ФИО =====
		auto fioParts = p[0]->Split(',');
		textBox_surname_customer->Text = fioParts[0];
		textBox_name_customer->Text = fioParts[1];
		textBox_customer_patronymic->Text = fioParts[2];

		// ===== ОСНОВНОЕ =====
		textBox_number->Text = p[1];
		textBox_date->Text = p[2];
		custom_occasion->Text = p[3];
		textBox_guests_count->Text = p[4];
		custom_tables->Text = p[5];

		// ===== ДОПОЛНИТЕЛЬНО =====
		textBox_extra->Text = p[6];
		textBox_wishes->Text = p[7];

		// ===== ТОВАРЫ =====
		all_dishes->Clear();

		int uniqueCount = Convert::ToInt32(p[8]);
		int index = 9;

		int totalAmount = 0;

		for (int i = 0; i < uniqueCount; i++)
		{
			String^ name = p[index + 1];
			String^ amount = p[index + 2];
			String^ price = p[index + 3];

			all_dishes->AppendText(
				name + " — " + amount + " шт. (" + price + " Р)\r\n");

			totalAmount += Convert::ToInt32(amount);
			index += 4;
		}

		positions->Text = totalAmount.ToString();
		roubles->Text = p[index + 1];
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void dishes_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void custom_occasion_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
