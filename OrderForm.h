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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ total_price;
	private: System::Windows::Forms::DataGridViewButtonColumn^ remove_button;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ amount;
	private: System::Windows::Forms::DataGridViewButtonColumn^ add_button;
	private: System::Windows::Forms::TextBox^ roubles;
	private: System::Windows::Forms::TextBox^ positions;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;












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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->total_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remove_button = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->add_button = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->roubles = (gcnew System::Windows::Forms::TextBox());
			this->positions = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 517);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &order_form::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->name, this->price,
					this->total_price, this->remove_button, this->amount, this->add_button
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(556, 275);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &order_form::dataGridView1_CellContentClick);
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
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Фотобудка", L"Фотозона", L"Воздушные шары",
					L"Миньоны"
			});
			this->checkedListBox1->Location = System::Drawing::Point(12, 414);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(151, 80);
			this->checkedListBox1->TabIndex = 6;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(126, 293);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 297);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Выберите дату:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 327);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Количество человек:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(165, 325);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(55, 22);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 358);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Мероприятие:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(10, 387);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Скатерти:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Поминальные", L"Свадьба", L"День рождения", L"Иное:" });
			this->comboBox1->Location = System::Drawing::Point(119, 358);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &order_form::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Синие хлопковые", L"Красные хлопковые", L"Черные хлопковые",
					L"Иное:"
			});
			this->comboBox2->Location = System::Drawing::Point(119, 387);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 10;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &order_form::comboBox2_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(246, 359);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(246, 388);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(418, 517);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"сделать заказ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(273, 517);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button3->Size = System::Drawing::Size(139, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"сбросить заказ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &order_form::button3_Click);
			// 
			// roubles
			// 
			this->roubles->Enabled = false;
			this->roubles->Location = System::Drawing::Point(408, 474);
			this->roubles->Name = L"roubles";
			this->roubles->Size = System::Drawing::Size(100, 20);
			this->roubles->TabIndex = 15;
			// 
			// positions
			// 
			this->positions->Enabled = false;
			this->positions->Location = System::Drawing::Point(408, 448);
			this->positions->Name = L"positions";
			this->positions->Size = System::Drawing::Size(100, 20);
			this->positions->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(408, 429);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"В заказе:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(515, 454);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Позиций";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(515, 480);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Рублей";
			// 
			// order_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 552);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->positions);
			this->Controls->Add(this->roubles);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"order_form";
			this->Text = L"order_form";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &order_form::order_closing);
			this->Load += gcnew System::EventHandler(this, &order_form::order_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void order_closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		this->Hide();
	}
private: System::Void order_form_Load(System::Object^ sender, System::EventArgs^ e) {
	this->comboBox1->SelectedIndex = 0;
	this->comboBox2->SelectedIndex = 0;

	positions->Text = L"0";
	roubles->Text = L"0";

	this->dataGridView1->Rows->Add();
	this->dataGridView1->Rows->Add();
	this->dataGridView1->Rows->Add();
	this->dataGridView1->Rows->Add();

	this->dataGridView1->Rows[0]->Cells["name"]->Value = L"Бургер";
	this->dataGridView1->Rows[1]->Cells["name"]->Value = L"Пицца";
	this->dataGridView1->Rows[2]->Cells["name"]->Value = L"Салат";
	this->dataGridView1->Rows[3]->Cells["name"]->Value = L"Бабл милк";

	this->dataGridView1->Rows[0]->Cells["price"]->Value = 245;
	this->dataGridView1->Rows[1]->Cells["price"]->Value = 759;
	this->dataGridView1->Rows[2]->Cells["price"]->Value = 169;
	this->dataGridView1->Rows[3]->Cells["price"]->Value = 259;

	this->dataGridView1->Rows[0]->Cells["total_price"]->Value = 0;
	this->dataGridView1->Rows[1]->Cells["total_price"]->Value = 0;
	this->dataGridView1->Rows[2]->Cells["total_price"]->Value = 0;
	this->dataGridView1->Rows[3]->Cells["total_price"]->Value = 0;

	this->dataGridView1->Rows[0]->Cells["amount"]->Value = 0;
	this->dataGridView1->Rows[1]->Cells["amount"]->Value = 0;
	this->dataGridView1->Rows[2]->Cells["amount"]->Value = 0;
	this->dataGridView1->Rows[3]->Cells["amount"]->Value = 0;
	this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &order_form::dataGridView1_CellValueChanged);

}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox1->SelectedIndex == 3) {
		this->textBox1->Visible = true;
	}
	else { this->textBox1->Visible = false; }
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox2->SelectedIndex == 3) {
		this->textBox2->Visible = true;
	}
	else { this->textBox2->Visible = false; }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->ColumnIndex == 3) {
		if (Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells["amount"]->Value) > 0) {
			dataGridView1->Rows[e->RowIndex]->Cells["amount"]->Value = Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells["amount"]->Value) - 1;
		}
	}

	if (e->ColumnIndex == 5) {
		dataGridView1->Rows[e->RowIndex]->Cells["amount"]->Value = Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells["amount"]->Value) + 1;
	}
}

private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		dataGridView1->Rows[e->RowIndex]->Cells["total_price"]->Value = Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells["amount"]->Value) * Convert::ToDouble(dataGridView1->Rows[e->RowIndex]->Cells["price"]->Value);
		int i, all_price, all_amount;
		all_price = 0;
		all_amount = 0;
		for (i = 0; i < 4; i++) {
			if (Convert::ToDouble(dataGridView1->Rows[i]->Cells["total_price"]->Value)) {
				all_price += Convert::ToDouble(dataGridView1->Rows[i]->Cells["total_price"]->Value);
				all_amount += Convert::ToDouble(dataGridView1->Rows[i]->Cells["amount"]->Value);
			}
		}
		positions->Text = Convert::ToString(all_amount);
		roubles->Text = Convert::ToString(all_price);
	

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->comboBox1->SelectedIndex = 0;
	this->comboBox2->SelectedIndex = 0;

	this->numericUpDown1->Value = 10;

	this->checkedListBox1->SetItemChecked(0, false);
	this->checkedListBox1->SetItemChecked(1, false);
	this->checkedListBox1->SetItemChecked(2, false);
	this->checkedListBox1->SetItemChecked(3, false);

	int i;
	for (i = 0; i < 4; i++) {
		dataGridView1->Rows[i]->Cells["amount"]->Value = 0;
	}

}
};
}
