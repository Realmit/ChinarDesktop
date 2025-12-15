#pragma once

namespace ChinarDesktop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для order_form
	/// </summary>
	public ref class order_form : public System::Windows::Forms::Form
	{
	public:
		order_form(void)
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
		~order_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ return_button;
	private: System::Windows::Forms::DataGridView^ dataGrid;
	protected:


	private: System::Windows::Forms::DateTimePicker^ date_select;
	private: System::Windows::Forms::Label^ date_label;
	private: System::Windows::Forms::Label^ people_count_label;



	private: System::Windows::Forms::NumericUpDown^ people_count;
	private: System::Windows::Forms::CheckedListBox^ extras;
	private: System::Windows::Forms::Label^ occasion_label;
	private: System::Windows::Forms::Label^ tables_label;




	private: System::Windows::Forms::ComboBox^ occasion;
	private: System::Windows::Forms::ComboBox^ tables;


	private: System::Windows::Forms::TextBox^ custom_occasion;
	private: System::Windows::Forms::TextBox^ custom_tables;
	private: System::Windows::Forms::Button^ order_button;



	private: System::Windows::Forms::Button^ reset_button;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ total_price;
	private: System::Windows::Forms::DataGridViewButtonColumn^ remove_button;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ amount;
	private: System::Windows::Forms::DataGridViewButtonColumn^ add_button;
	private: System::Windows::Forms::TextBox^ roubles;
	private: System::Windows::Forms::TextBox^ positions;
	private: System::Windows::Forms::Label^ in_order_label;
	private: System::Windows::Forms::Label^ pos_label;
	private: System::Windows::Forms::Label^ roubles_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ custom_occasion_checkbox;
	private: System::Windows::Forms::CheckBox^ custom_table_checkbox;

















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
			this->return_button = (gcnew System::Windows::Forms::Button());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->total_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remove_button = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->add_button = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->extras = (gcnew System::Windows::Forms::CheckedListBox());
			this->date_select = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_label = (gcnew System::Windows::Forms::Label());
			this->people_count_label = (gcnew System::Windows::Forms::Label());
			this->people_count = (gcnew System::Windows::Forms::NumericUpDown());
			this->occasion_label = (gcnew System::Windows::Forms::Label());
			this->tables_label = (gcnew System::Windows::Forms::Label());
			this->occasion = (gcnew System::Windows::Forms::ComboBox());
			this->tables = (gcnew System::Windows::Forms::ComboBox());
			this->custom_occasion = (gcnew System::Windows::Forms::TextBox());
			this->custom_tables = (gcnew System::Windows::Forms::TextBox());
			this->order_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->roubles = (gcnew System::Windows::Forms::TextBox());
			this->positions = (gcnew System::Windows::Forms::TextBox());
			this->in_order_label = (gcnew System::Windows::Forms::Label());
			this->pos_label = (gcnew System::Windows::Forms::Label());
			this->roubles_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->custom_occasion_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->custom_table_checkbox = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->people_count))->BeginInit();
			this->SuspendLayout();
			// 
			// return_button
			// 
			this->return_button->Location = System::Drawing::Point(12, 517);
			this->return_button->Name = L"return_button";
			this->return_button->Size = System::Drawing::Size(138, 23);
			this->return_button->TabIndex = 0;
			this->return_button->Text = L"назад";
			this->return_button->UseVisualStyleBackColor = true;
			this->return_button->Click += gcnew System::EventHandler(this, &order_form::return_button_Click);
			// 
			// dataGrid
			// 
			this->dataGrid->AllowUserToAddRows = false;
			this->dataGrid->AllowUserToDeleteRows = false;
			this->dataGrid->AllowUserToResizeColumns = false;
			this->dataGrid->AllowUserToResizeRows = false;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->name, this->price,
					this->total_price, this->remove_button, this->amount, this->add_button
			});
			this->dataGrid->Location = System::Drawing::Point(13, 12);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGrid->Size = System::Drawing::Size(556, 275);
			this->dataGrid->TabIndex = 1;
			this->dataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &order_form::dataGrid_CellContentClick);
			// 
			// name
			// 
			this->name->Frozen = true;
			this->name->HeaderText = L"Название";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// price
			// 
			this->price->Frozen = true;
			this->price->HeaderText = L"Цена";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// total_price
			// 
			this->total_price->Frozen = true;
			this->total_price->HeaderText = L"Цена за все";
			this->total_price->Name = L"total_price";
			this->total_price->ReadOnly = true;
			// 
			// remove_button
			// 
			this->remove_button->Frozen = true;
			this->remove_button->HeaderText = L"Убрать";
			this->remove_button->Name = L"remove_button";
			this->remove_button->ReadOnly = true;
			this->remove_button->Text = L"--";
			this->remove_button->UseColumnTextForButtonValue = true;
			this->remove_button->Width = 66;
			// 
			// amount
			// 
			this->amount->Frozen = true;
			this->amount->HeaderText = L"Количество";
			this->amount->Name = L"amount";
			this->amount->Width = 80;
			// 
			// add_button
			// 
			this->add_button->Frozen = true;
			this->add_button->HeaderText = L"Добавить";
			this->add_button->Name = L"add_button";
			this->add_button->ReadOnly = true;
			this->add_button->Text = L"-|-";
			this->add_button->UseColumnTextForButtonValue = true;
			this->add_button->Width = 66;
			// 
			// extras
			// 
			this->extras->CheckOnClick = true;
			this->extras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->extras->FormattingEnabled = true;
			this->extras->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Фотобудка", L"Фотозона", L"Воздушные шары", L"Миньоны" });
			this->extras->Location = System::Drawing::Point(240, 420);
			this->extras->Name = L"extras";
			this->extras->Size = System::Drawing::Size(151, 80);
			this->extras->TabIndex = 6;
			// 
			// date_select
			// 
			this->date_select->Location = System::Drawing::Point(126, 293);
			this->date_select->Name = L"date_select";
			this->date_select->Size = System::Drawing::Size(200, 20);
			this->date_select->TabIndex = 2;
			// 
			// date_label
			// 
			this->date_label->AutoSize = true;
			this->date_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date_label->Location = System::Drawing::Point(10, 297);
			this->date_label->Name = L"date_label";
			this->date_label->Size = System::Drawing::Size(109, 16);
			this->date_label->TabIndex = 3;
			this->date_label->Text = L"Выберите дату:";
			// 
			// people_count_label
			// 
			this->people_count_label->AutoSize = true;
			this->people_count_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->people_count_label->Location = System::Drawing::Point(10, 327);
			this->people_count_label->Name = L"people_count_label";
			this->people_count_label->Size = System::Drawing::Size(146, 16);
			this->people_count_label->TabIndex = 4;
			this->people_count_label->Text = L"Количество человек:";
			// 
			// people_count
			// 
			this->people_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->people_count->Location = System::Drawing::Point(165, 325);
			this->people_count->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->people_count->Name = L"people_count";
			this->people_count->Size = System::Drawing::Size(55, 22);
			this->people_count->TabIndex = 5;
			this->people_count->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->people_count->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// occasion_label
			// 
			this->occasion_label->AutoSize = true;
			this->occasion_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->occasion_label->Location = System::Drawing::Point(10, 358);
			this->occasion_label->Name = L"occasion_label";
			this->occasion_label->Size = System::Drawing::Size(99, 16);
			this->occasion_label->TabIndex = 7;
			this->occasion_label->Text = L"Мероприятие:";
			// 
			// tables_label
			// 
			this->tables_label->AutoSize = true;
			this->tables_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tables_label->Location = System::Drawing::Point(9, 433);
			this->tables_label->Name = L"tables_label";
			this->tables_label->Size = System::Drawing::Size(72, 16);
			this->tables_label->TabIndex = 8;
			this->tables_label->Text = L"Скатерти:";
			// 
			// occasion
			// 
			this->occasion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->occasion->FormattingEnabled = true;
			this->occasion->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Поминальные", L"Свадьба", L"День рождения", L"Иное:" });
			this->occasion->Location = System::Drawing::Point(12, 379);
			this->occasion->Name = L"occasion";
			this->occasion->Size = System::Drawing::Size(159, 21);
			this->occasion->TabIndex = 9;
			this->occasion->SelectedIndexChanged += gcnew System::EventHandler(this, &order_form::occasion_SelectedIndexChanged);
			// 
			// tables
			// 
			this->tables->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->tables->FormattingEnabled = true;
			this->tables->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Синие хлопковые", L"Красные хлопковые", L"Черные хлопковые",
					L"Иное:"
			});
			this->tables->Location = System::Drawing::Point(12, 457);
			this->tables->Name = L"tables";
			this->tables->Size = System::Drawing::Size(159, 21);
			this->tables->TabIndex = 10;
			this->tables->SelectedIndexChanged += gcnew System::EventHandler(this, &order_form::tables_SelectedIndexChanged);
			// 
			// custom_occasion
			// 
			this->custom_occasion->Location = System::Drawing::Point(12, 406);
			this->custom_occasion->Name = L"custom_occasion";
			this->custom_occasion->Size = System::Drawing::Size(159, 20);
			this->custom_occasion->TabIndex = 11;
			this->custom_occasion->Visible = false;
			// 
			// custom_tables
			// 
			this->custom_tables->Location = System::Drawing::Point(12, 484);
			this->custom_tables->Name = L"custom_tables";
			this->custom_tables->Size = System::Drawing::Size(159, 20);
			this->custom_tables->TabIndex = 12;
			this->custom_tables->Visible = false;
			// 
			// order_button
			// 
			this->order_button->Location = System::Drawing::Point(418, 517);
			this->order_button->Name = L"order_button";
			this->order_button->Size = System::Drawing::Size(151, 23);
			this->order_button->TabIndex = 13;
			this->order_button->Text = L"сделать заказ";
			this->order_button->UseVisualStyleBackColor = true;
			// 
			// reset_button
			// 
			this->reset_button->Location = System::Drawing::Point(273, 517);
			this->reset_button->Name = L"reset_button";
			this->reset_button->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->reset_button->Size = System::Drawing::Size(139, 23);
			this->reset_button->TabIndex = 14;
			this->reset_button->Text = L"сбросить заказ";
			this->reset_button->UseVisualStyleBackColor = true;
			this->reset_button->Click += gcnew System::EventHandler(this, &order_form::reset_button_Click);
			// 
			// roubles
			// 
			this->roubles->Enabled = false;
			this->roubles->Location = System::Drawing::Point(408, 480);
			this->roubles->Name = L"roubles";
			this->roubles->Size = System::Drawing::Size(100, 20);
			this->roubles->TabIndex = 15;
			// 
			// positions
			// 
			this->positions->Enabled = false;
			this->positions->Location = System::Drawing::Point(408, 454);
			this->positions->Name = L"positions";
			this->positions->Size = System::Drawing::Size(100, 20);
			this->positions->TabIndex = 16;
			// 
			// in_order_label
			// 
			this->in_order_label->AutoSize = true;
			this->in_order_label->Location = System::Drawing::Point(408, 435);
			this->in_order_label->Name = L"in_order_label";
			this->in_order_label->Size = System::Drawing::Size(56, 13);
			this->in_order_label->TabIndex = 17;
			this->in_order_label->Text = L"В заказе:";
			this->in_order_label->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// pos_label
			// 
			this->pos_label->AutoSize = true;
			this->pos_label->Location = System::Drawing::Point(514, 457);
			this->pos_label->Name = L"pos_label";
			this->pos_label->Size = System::Drawing::Size(51, 13);
			this->pos_label->TabIndex = 18;
			this->pos_label->Text = L"Позиций";
			this->pos_label->Click += gcnew System::EventHandler(this, &order_form::pos_label_Click);
			// 
			// roubles_label
			// 
			this->roubles_label->AutoSize = true;
			this->roubles_label->Location = System::Drawing::Point(514, 483);
			this->roubles_label->Name = L"roubles_label";
			this->roubles_label->Size = System::Drawing::Size(43, 13);
			this->roubles_label->TabIndex = 19;
			this->roubles_label->Text = L"Рублей";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->label1->Location = System::Drawing::Point(405, 297);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Фамилия:";
			this->label1->Click += gcnew System::EventHandler(this, &order_form::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(408, 313);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 20);
			this->textBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(408, 355);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 20);
			this->textBox2->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(408, 398);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 20);
			this->textBox3->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->label2->Location = System::Drawing::Point(405, 339);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Имя:";
			this->label2->Click += gcnew System::EventHandler(this, &order_form::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->label3->Location = System::Drawing::Point(405, 382);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Отчество:";
			this->label3->Click += gcnew System::EventHandler(this, &order_form::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(237, 401);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Дополнительные услуги:";
			this->label4->Click += gcnew System::EventHandler(this, &order_form::label4_Click);
			// 
			// custom_occasion_checkbox
			// 
			this->custom_occasion_checkbox->AutoSize = true;
			this->custom_occasion_checkbox->Location = System::Drawing::Point(177, 406);
			this->custom_occasion_checkbox->Name = L"custom_occasion_checkbox";
			this->custom_occasion_checkbox->Size = System::Drawing::Size(50, 17);
			this->custom_occasion_checkbox->TabIndex = 24;
			this->custom_occasion_checkbox->Text = L"свое";
			this->custom_occasion_checkbox->UseVisualStyleBackColor = true;
			// 
			// custom_table_checkbox
			// 
			this->custom_table_checkbox->AutoSize = true;
			this->custom_table_checkbox->Location = System::Drawing::Point(177, 487);
			this->custom_table_checkbox->Name = L"custom_table_checkbox";
			this->custom_table_checkbox->Size = System::Drawing::Size(50, 17);
			this->custom_table_checkbox->TabIndex = 24;
			this->custom_table_checkbox->Text = L"свое";
			this->custom_table_checkbox->UseVisualStyleBackColor = true;
			this->custom_table_checkbox->CheckedChanged += gcnew System::EventHandler(this, &order_form::checkBox1_CheckedChanged);
			// 
			// order_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 552);
			this->Controls->Add(this->custom_table_checkbox);
			this->Controls->Add(this->custom_occasion_checkbox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->roubles_label);
			this->Controls->Add(this->pos_label);
			this->Controls->Add(this->in_order_label);
			this->Controls->Add(this->positions);
			this->Controls->Add(this->roubles);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->order_button);
			this->Controls->Add(this->custom_tables);
			this->Controls->Add(this->custom_occasion);
			this->Controls->Add(this->tables);
			this->Controls->Add(this->occasion);
			this->Controls->Add(this->tables_label);
			this->Controls->Add(this->occasion_label);
			this->Controls->Add(this->extras);
			this->Controls->Add(this->people_count);
			this->Controls->Add(this->people_count_label);
			this->Controls->Add(this->date_label);
			this->Controls->Add(this->date_select);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->return_button);
			this->Name = L"order_form";
			this->Text = L"order_form";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &order_form::order_closing);
			this->Load += gcnew System::EventHandler(this, &order_form::order_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->people_count))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void order_closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		this->Hide();
	}
private: System::Void order_form_Load(System::Object^ sender, System::EventArgs^ e) {
	this->occasion->SelectedIndex = 0;
	this->tables->SelectedIndex = 0;

	positions->Text = L"0";
	roubles->Text = L"0";

	this->dataGrid->Rows->Add();
	this->dataGrid->Rows->Add();
	this->dataGrid->Rows->Add();
	this->dataGrid->Rows->Add();

	this->dataGrid->Rows[0]->Cells["name"]->Value = L"Бургер";
	this->dataGrid->Rows[1]->Cells["name"]->Value = L"Пицца";
	this->dataGrid->Rows[2]->Cells["name"]->Value = L"Салат";
	this->dataGrid->Rows[3]->Cells["name"]->Value = L"Бабл милк";

	this->dataGrid->Rows[0]->Cells["price"]->Value = 245;
	this->dataGrid->Rows[1]->Cells["price"]->Value = 759;
	this->dataGrid->Rows[2]->Cells["price"]->Value = 169;
	this->dataGrid->Rows[3]->Cells["price"]->Value = 259;

	this->dataGrid->Rows[0]->Cells["total_price"]->Value = 0;
	this->dataGrid->Rows[1]->Cells["total_price"]->Value = 0;
	this->dataGrid->Rows[2]->Cells["total_price"]->Value = 0;
	this->dataGrid->Rows[3]->Cells["total_price"]->Value = 0;

	this->dataGrid->Rows[0]->Cells["amount"]->Value = 0;
	this->dataGrid->Rows[1]->Cells["amount"]->Value = 0;
	this->dataGrid->Rows[2]->Cells["amount"]->Value = 0;
	this->dataGrid->Rows[3]->Cells["amount"]->Value = 0;
	this->dataGrid->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &order_form::dataGrid_CellValueChanged);

}

private: System::Void occasion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->occasion->SelectedIndex == 3) {
		this->custom_occasion->Visible = true;
	}
	else { this->custom_occasion->Visible = false; }
}
private: System::Void tables_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->tables->SelectedIndex == 3) {
		this->custom_tables->Visible = true;
	}
	else { this->custom_tables->Visible = false; }
}
private: System::Void return_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void dataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->ColumnIndex == 3) {
		if (Convert::ToDouble(dataGrid->Rows[e->RowIndex]->Cells["amount"]->Value) > 0) {
			dataGrid->Rows[e->RowIndex]->Cells["amount"]->Value = Convert::ToDouble(dataGrid->Rows[e->RowIndex]->Cells["amount"]->Value) - 1;
		}
	}

	if (e->ColumnIndex == 5) {
		dataGrid->Rows[e->RowIndex]->Cells["amount"]->Value = Convert::ToDouble(dataGrid->Rows[e->RowIndex]->Cells["amount"]->Value) + 1;
	}
}

private: System::Void dataGrid_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		dataGrid->Rows[e->RowIndex]->Cells["total_price"]->Value = Convert::ToDouble(dataGrid->Rows[e->RowIndex]->Cells["amount"]->Value) * Convert::ToDouble(dataGrid->Rows[e->RowIndex]->Cells["price"]->Value);
		int i, all_price, all_amount;
		all_price = 0;
		all_amount = 0;
		for (i = 0; i < 4; i++) {
			if (Convert::ToDouble(dataGrid->Rows[i]->Cells["total_price"]->Value)) {
				all_price += Convert::ToDouble(dataGrid->Rows[i]->Cells["total_price"]->Value);
				all_amount += Convert::ToDouble(dataGrid->Rows[i]->Cells["amount"]->Value);
			}
		}
		positions->Text = Convert::ToString(all_amount);
		roubles->Text = Convert::ToString(all_price);
	

}
private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e) {

	this->occasion->SelectedIndex = 0;
	this->tables->SelectedIndex = 0;

	this->people_count->Value = 10;

	this->extras->SetItemChecked(0, false);
	this->extras->SetItemChecked(1, false);
	this->extras->SetItemChecked(2, false);
	this->extras->SetItemChecked(3, false);

	int i;
	for (i = 0; i < 4; i++) {
		dataGrid->Rows[i]->Cells["amount"]->Value = 0;
	}

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pos_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
