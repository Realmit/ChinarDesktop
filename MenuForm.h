#pragma once

namespace ChinarDesktop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для menu_form
	/// </summary>
	public ref class menu_form : public System::Windows::Forms::Form
	{
	public:
		menu_form(void)
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
		~menu_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ total_price;
	private: System::Windows::Forms::DataGridViewButtonColumn^ remove_button;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ amount;
	private: System::Windows::Forms::DataGridViewButtonColumn^ add_button;

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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->total_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remove_button = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->add_button = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &menu_form::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->name, this->price,
					this->total_price, this->remove_button, this->amount, this->add_button
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView2->Size = System::Drawing::Size(556, 275);
			this->dataGridView2->TabIndex = 3;
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
			// menu_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 461);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Name = L"menu_form";
			this->Text = L"menu_form";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &menu_form::menu_closing);
			this->Load += gcnew System::EventHandler(this, &menu_form::menu_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menu_closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		this->Hide();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void menu_form_Load(System::Object^ sender, System::EventArgs^ e) {
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
	}
};
}
