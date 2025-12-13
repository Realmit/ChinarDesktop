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
	private: System::Windows::Forms::DataGridView^ dataGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewButtonColumn^ description;
	private: System::Windows::Forms::Label^ food_name;
	private: System::Windows::Forms::TextBox^ description_box;

	private: System::Windows::Forms::Label^ in_product_label;
	private: System::Windows::Forms::Label^ mass_label;
	private: System::Windows::Forms::Label^ calories_label;
	private: System::Windows::Forms::Label^ proteins_label;


	private: System::Windows::Forms::Label^ fats_label;
	private: System::Windows::Forms::Label^ carbs_label;
	private: System::Windows::Forms::TextBox^ mass_box;
	private: System::Windows::Forms::TextBox^ calories_box;
	private: System::Windows::Forms::TextBox^ proteins_box;
	private: System::Windows::Forms::TextBox^ fats_box;
	private: System::Windows::Forms::TextBox^ carbs_box;
	private: System::Windows::Forms::Label^ price_label;





























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
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->description = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->food_name = (gcnew System::Windows::Forms::Label());
			this->description_box = (gcnew System::Windows::Forms::TextBox());
			this->in_product_label = (gcnew System::Windows::Forms::Label());
			this->mass_label = (gcnew System::Windows::Forms::Label());
			this->calories_label = (gcnew System::Windows::Forms::Label());
			this->proteins_label = (gcnew System::Windows::Forms::Label());
			this->fats_label = (gcnew System::Windows::Forms::Label());
			this->carbs_label = (gcnew System::Windows::Forms::Label());
			this->mass_box = (gcnew System::Windows::Forms::TextBox());
			this->calories_box = (gcnew System::Windows::Forms::TextBox());
			this->proteins_box = (gcnew System::Windows::Forms::TextBox());
			this->fats_box = (gcnew System::Windows::Forms::TextBox());
			this->carbs_box = (gcnew System::Windows::Forms::TextBox());
			this->price_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 506);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &menu_form::button1_Click);
			// 
			// dataGrid
			// 
			this->dataGrid->AllowUserToAddRows = false;
			this->dataGrid->AllowUserToDeleteRows = false;
			this->dataGrid->AllowUserToResizeColumns = false;
			this->dataGrid->AllowUserToResizeRows = false;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->name, this->price,
					this->description
			});
			this->dataGrid->Location = System::Drawing::Point(12, 12);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGrid->Size = System::Drawing::Size(565, 275);
			this->dataGrid->TabIndex = 3;
			this->dataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &menu_form::dataGrid_CellContentClick);
			// 
			// name
			// 
			this->name->Frozen = true;
			this->name->HeaderText = L"Название";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 325;
			// 
			// price
			// 
			this->price->Frozen = true;
			this->price->HeaderText = L"Цена";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// description
			// 
			this->description->Frozen = true;
			this->description->HeaderText = L"Описание";
			this->description->Name = L"description";
			this->description->ReadOnly = true;
			this->description->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->description->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->description->Text = L"посмотреть";
			this->description->UseColumnTextForButtonValue = true;
			// 
			// food_name
			// 
			this->food_name->AutoSize = true;
			this->food_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->food_name->Location = System::Drawing::Point(6, 301);
			this->food_name->Name = L"food_name";
			this->food_name->Size = System::Drawing::Size(90, 24);
			this->food_name->TabIndex = 4;
			this->food_name->Text = L"Продукт:";
			this->food_name->Visible = false;
			// 
			// description_box
			// 
			this->description_box->Location = System::Drawing::Point(27, 328);
			this->description_box->Multiline = true;
			this->description_box->Name = L"description_box";
			this->description_box->ReadOnly = true;
			this->description_box->Size = System::Drawing::Size(473, 104);
			this->description_box->TabIndex = 5;
			this->description_box->Visible = false;
			// 
			// in_product_label
			// 
			this->in_product_label->AutoSize = true;
			this->in_product_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->in_product_label->Location = System::Drawing::Point(24, 443);
			this->in_product_label->Name = L"in_product_label";
			this->in_product_label->Size = System::Drawing::Size(70, 16);
			this->in_product_label->TabIndex = 6;
			this->in_product_label->Text = L"В порции:";
			this->in_product_label->Visible = false;
			// 
			// mass_label
			// 
			this->mass_label->AutoSize = true;
			this->mass_label->Location = System::Drawing::Point(24, 463);
			this->mass_label->Name = L"mass_label";
			this->mass_label->Size = System::Drawing::Size(56, 13);
			this->mass_label->TabIndex = 7;
			this->mass_label->Text = L"масса (г):";
			this->mass_label->Visible = false;
			// 
			// calories_label
			// 
			this->calories_label->AutoSize = true;
			this->calories_label->Location = System::Drawing::Point(127, 463);
			this->calories_label->Name = L"calories_label";
			this->calories_label->Size = System::Drawing::Size(85, 13);
			this->calories_label->TabIndex = 8;
			this->calories_label->Text = L"калории (ккал):";
			this->calories_label->Visible = false;
			// 
			// proteins_label
			// 
			this->proteins_label->AutoSize = true;
			this->proteins_label->Location = System::Drawing::Point(230, 463);
			this->proteins_label->Name = L"proteins_label";
			this->proteins_label->Size = System::Drawing::Size(55, 13);
			this->proteins_label->TabIndex = 9;
			this->proteins_label->Text = L"Белки (г):";
			this->proteins_label->Visible = false;
			// 
			// fats_label
			// 
			this->fats_label->AutoSize = true;
			this->fats_label->Location = System::Drawing::Point(333, 463);
			this->fats_label->Name = L"fats_label";
			this->fats_label->Size = System::Drawing::Size(55, 13);
			this->fats_label->TabIndex = 10;
			this->fats_label->Text = L"Жиры (г):";
			this->fats_label->Visible = false;
			// 
			// carbs_label
			// 
			this->carbs_label->AutoSize = true;
			this->carbs_label->Location = System::Drawing::Point(436, 463);
			this->carbs_label->Name = L"carbs_label";
			this->carbs_label->Size = System::Drawing::Size(75, 13);
			this->carbs_label->TabIndex = 11;
			this->carbs_label->Text = L"Углеводы (г):";
			this->carbs_label->Visible = false;
			// 
			// mass_box
			// 
			this->mass_box->Location = System::Drawing::Point(27, 479);
			this->mass_box->Name = L"mass_box";
			this->mass_box->ReadOnly = true;
			this->mass_box->Size = System::Drawing::Size(93, 20);
			this->mass_box->TabIndex = 12;
			this->mass_box->Visible = false;
			// 
			// calories_box
			// 
			this->calories_box->Location = System::Drawing::Point(130, 479);
			this->calories_box->Name = L"calories_box";
			this->calories_box->ReadOnly = true;
			this->calories_box->Size = System::Drawing::Size(93, 20);
			this->calories_box->TabIndex = 13;
			this->calories_box->Visible = false;
			// 
			// proteins_box
			// 
			this->proteins_box->Location = System::Drawing::Point(233, 479);
			this->proteins_box->Name = L"proteins_box";
			this->proteins_box->ReadOnly = true;
			this->proteins_box->Size = System::Drawing::Size(93, 20);
			this->proteins_box->TabIndex = 14;
			this->proteins_box->Visible = false;
			// 
			// fats_box
			// 
			this->fats_box->Location = System::Drawing::Point(336, 479);
			this->fats_box->Name = L"fats_box";
			this->fats_box->ReadOnly = true;
			this->fats_box->Size = System::Drawing::Size(93, 20);
			this->fats_box->TabIndex = 15;
			this->fats_box->Visible = false;
			// 
			// carbs_box
			// 
			this->carbs_box->Location = System::Drawing::Point(439, 479);
			this->carbs_box->Name = L"carbs_box";
			this->carbs_box->ReadOnly = true;
			this->carbs_box->Size = System::Drawing::Size(93, 20);
			this->carbs_box->TabIndex = 16;
			this->carbs_box->Visible = false;
			// 
			// price_label
			// 
			this->price_label->AutoSize = true;
			this->price_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->price_label->Location = System::Drawing::Point(444, 301);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(118, 24);
			this->price_label->TabIndex = 17;
			this->price_label->Text = L"0000 рублей";
			this->price_label->Visible = false;
			// 
			// menu_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 538);
			this->Controls->Add(this->price_label);
			this->Controls->Add(this->carbs_box);
			this->Controls->Add(this->fats_box);
			this->Controls->Add(this->proteins_box);
			this->Controls->Add(this->calories_box);
			this->Controls->Add(this->mass_box);
			this->Controls->Add(this->carbs_label);
			this->Controls->Add(this->fats_label);
			this->Controls->Add(this->proteins_label);
			this->Controls->Add(this->calories_label);
			this->Controls->Add(this->mass_label);
			this->Controls->Add(this->in_product_label);
			this->Controls->Add(this->description_box);
			this->Controls->Add(this->food_name);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->button1);
			this->Name = L"menu_form";
			this->Text = L"menu_form";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &menu_form::menu_closing);
			this->Load += gcnew System::EventHandler(this, &menu_form::menu_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menu_closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		this->Hide();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->carbs_box->Visible = false;
		this->fats_box->Visible = false;
		this->proteins_box->Visible = false;
		this->calories_box->Visible = false;
		this->mass_box->Visible = false;
		this->carbs_label->Visible = false;
		this->fats_label->Visible = false;
		this->proteins_label->Visible = false;
		this->calories_label->Visible = false;
		this->mass_label->Visible = false;
		this->in_product_label->Visible = false;
		this->description_box->Visible = false;
		this->food_name->Visible = false;
		this->price_label->Visible = false;
	}
	private: System::Void menu_form_Load(System::Object^ sender, System::EventArgs^ e) {
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

	}
private: System::Void dataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->ColumnIndex == 2) {
		this->carbs_box->Visible = true;
		this->fats_box->Visible = true;
		this->proteins_box->Visible = true;
		this->calories_box->Visible = true;
		this->mass_box->Visible = true;
		this->carbs_label->Visible = true;
		this->fats_label->Visible = true;
		this->proteins_label->Visible = true;
		this->calories_label->Visible = true;
		this->mass_label->Visible = true;
		this->in_product_label->Visible = true;
		this->description_box->Visible = true;
		this->food_name->Visible = true;
		this->price_label->Visible = true;

		switch (e->RowIndex) {
		case 0:
			this->food_name->Text = L"Бургер";
			this->price_label->Text = L"245 рублей";
			this->description_box->Text = L"Сочная котлета в мягкой булочке с хрустящими овощами и любимым соусом. Идеальный выбор для тех, кто любит сытно и вкусно поесть.";
			this->mass_box->Text = L"220";
			this->calories_box->Text = L"538";
			this->proteins_box->Text = L"27.0";
			this->fats_box->Text = L"53.0";
			this->carbs_box->Text = L"21.0";
			break;
		case 1:
			this->food_name->Text = L"Пицца";
			this->price_label->Text = L"759 рублей";
			this->description_box->Text = L"Ароматная основа, щедро покрытая томатным соусом, сыром и свежими ингредиентами на ваш выбор. Насладитесь классикой или откройте новые вкусовые сочетания.";
			this->mass_box->Text = L"980";
			this->calories_box->Text = L"258";
			this->proteins_box->Text = L"10.2";
			this->fats_box->Text = L"8.6";
			this->carbs_box->Text = L"35.1";
			break;
		case 2:
			this->food_name->Text = L"Салат";
			this->price_label->Text = L"169 рублей";
			this->description_box->Text = L"Легкая и освежающая смесь свежих овощей, зелени и питательных добавок. Прекрасно подойдет как самостоятельное блюдо или как дополнение к основному.";
			this->mass_box->Text = L"210";
			this->calories_box->Text = L"186";
			this->proteins_box->Text = L"11.0";
			this->fats_box->Text = L"9.7";
			this->carbs_box->Text = L"13.0";
			break;
		case 3:
			this->food_name->Text = L"Бабл Милк Банан-Карамель";
			this->price_label->Text = L"259 рублей";
			this->description_box->Text = L"Нежный молочный коктейль с ярким вкусом спелого банана и сладкой карамели. Добавьте в свой день немного сладкого удовольствия с лопающимися шариками.";
			this->mass_box->Text = L"500";
			this->calories_box->Text = L"288";
			this->proteins_box->Text = L"7.8";
			this->fats_box->Text = L"8.2";
			this->carbs_box->Text = L"46.0";
			break;
		default:
			break;
		}
	}
}
};
}
