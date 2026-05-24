#pragma once

namespace StartoriaLesson17 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		double first_num = 0;
		double second_num = 0;
		double result = 0;
		System::String^ operation = "";
		bool is_op_clicked = false;
		bool is_equal_clicked = false;
	private: System::Windows::Forms::Button^ button_clear;
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button_plusminus;

	private: System::Windows::Forms::Button^ button_multiply;

	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_dot;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	protected:


























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
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button_plusminus = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button0->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button0->FlatAppearance->BorderSize = 2;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button0->Location = System::Drawing::Point(315, 543);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(307, 80);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(2, 457);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(307, 80);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Location = System::Drawing::Point(315, 457);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(307, 80);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Location = System::Drawing::Point(628, 457);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(307, 80);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->Location = System::Drawing::Point(2, 371);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(307, 80);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->Location = System::Drawing::Point(315, 371);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(307, 80);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->Location = System::Drawing::Point(628, 371);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(307, 80);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button7->Location = System::Drawing::Point(2, 285);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(307, 80);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button8->Location = System::Drawing::Point(315, 285);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(307, 80);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button9->Location = System::Drawing::Point(628, 285);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(307, 80);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button_plusminus
			// 
			this->button_plusminus->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button_plusminus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_plusminus->FlatAppearance->BorderSize = 2;
			this->button_plusminus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plusminus->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_plusminus->Location = System::Drawing::Point(2, 543);
			this->button_plusminus->Name = L"button_plusminus";
			this->button_plusminus->Size = System::Drawing::Size(307, 80);
			this->button_plusminus->TabIndex = 10;
			this->button_plusminus->Text = L"+/-";
			this->button_plusminus->UseVisualStyleBackColor = false;
			this->button_plusminus->Click += gcnew System::EventHandler(this, &MyForm::button_plusminus_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button_multiply->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_multiply->FlatAppearance->BorderSize = 2;
			this->button_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_multiply->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_multiply->Location = System::Drawing::Point(941, 285);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(307, 80);
			this->button_multiply->TabIndex = 11;
			this->button_multiply->Text = L"*";
			this->button_multiply->UseVisualStyleBackColor = false;
			this->button_multiply->Click += gcnew System::EventHandler(this, &MyForm::button_multiply_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button_minus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_minus->FlatAppearance->BorderSize = 2;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_minus->Location = System::Drawing::Point(941, 371);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(307, 80);
			this->button_minus->TabIndex = 12;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button_plus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_plus->FlatAppearance->BorderSize = 2;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_plus->Location = System::Drawing::Point(941, 457);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(307, 80);
			this->button_plus->TabIndex = 13;
			this->button_plus->Text = L" +";
			this->button_plus->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button14->FlatAppearance->BorderSize = 2;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(941, 543);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(307, 80);
			this->button14->TabIndex = 14;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button_divide->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_divide->FlatAppearance->BorderSize = 2;
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_divide->Location = System::Drawing::Point(941, 199);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(307, 80);
			this->button_divide->TabIndex = 15;
			this->button_divide->Text = L" /";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button_dot->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_dot->FlatAppearance->BorderSize = 2;
			this->button_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_dot->Location = System::Drawing::Point(628, 543);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(307, 80);
			this->button_dot->TabIndex = 16;
			this->button_dot->Text = L",";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::button_dot_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(636, 551);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(644, 559);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"label2";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1236, 20);
			this->textBox1->TabIndex = 19;
			// 
			// button_clear
			// 
			this->button_clear->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button_clear->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_clear->FlatAppearance->BorderSize = 2;
			this->button_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clear->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_clear->Location = System::Drawing::Point(628, 199);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(307, 80);
			this->button_clear->TabIndex = 20;
			this->button_clear->Text = L"CE";
			this->button_clear->UseVisualStyleBackColor = false;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(1250, 641);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button_plusminus);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button0);
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

	   // Вспомогательный метод вычислений
private: System::Void Calculate() {
	System::String^ txt = textBox1->Text;
	if (System::String::IsNullOrEmpty(txt)) txt = "0";

	double current_num = System::Double::Parse(txt);
	if (operation == "+") { first_num = first_num + current_num; }
	else if (operation == "-") { first_num = first_num - current_num; }
	else if (operation == "*") { first_num = first_num * current_num; }
	else if (operation == "/") {
		if (current_num == 0) {
			MessageBox::Show("Деление на ноль невозможно.");
			return;
		}
		first_num = first_num / current_num;
	}
	textBox1->Text = first_num.ToString();
}

 private: System::Void button_digit_Click(System::String^ digit) {
	if (is_op_clicked && textBox1->Text == "0,") {
		textBox1->Text += digit;
		is_op_clicked = false;
		return;
	}

	if (textBox1->Text == "0" || is_op_clicked || is_equal_clicked) {
		textBox1->Text = digit;
		is_op_clicked = false;
		if (is_equal_clicked) {
			first_num = 0;
			operation = "";
			is_equal_clicked = false;
		}
	}
	else {
		textBox1->Text += digit;
	}
}

	   // Обработка мат. знаков
private: System::Void HandleOperation(System::String^ op) {
	if (operation != "" && !is_op_clicked && !is_equal_clicked) {
		Calculate();
	}
	else {
		System::String^ txt = textBox1->Text;
		if (System::String::IsNullOrEmpty(txt)) txt = "0";
		first_num = System::Double::Parse(txt);
	}
	operation = op;
	is_op_clicked = true;
	is_equal_clicked = false;
}

	   // Кнопка Равно (=)
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operation == "") return;

	System::String^ txt = textBox1->Text;
	if (System::String::IsNullOrEmpty(txt)) txt = "0";

	if (!is_equal_clicked) {
		second_num = System::Double::Parse(txt);
	}
	else {
		first_num = System::Double::Parse(txt);
	}

	if (operation == "+") { first_num = first_num + second_num; }
	else if (operation == "-") { first_num = first_num - second_num; }
	else if (operation == "*") { first_num = first_num * second_num; }
	else if (operation == "/") {
		if (second_num == 0) {
			MessageBox::Show("Деление на ноль невозможно.");
			return;
		}
		first_num = first_num / second_num;
	}

	textBox1->Text = first_num.ToString();
	is_op_clicked = true;
	is_equal_clicked = true;
}

private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("0"); }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("1"); }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("2"); }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("3"); }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("4"); }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("5"); }
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("6"); }
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("7"); }
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("8"); }
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) { button_digit_Click("9"); }

private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) { HandleOperation("+"); }
private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) { HandleOperation("-"); }
private: System::Void button_multiply_Click(System::Object^ sender, System::EventArgs^ e) { HandleOperation("*"); }
private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) { HandleOperation("/"); }

private: System::Void button_plusminus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox1->Text != "0") {
		double num = System::Double::Parse(textBox1->Text);
		num = num * -1;
		textBox1->Text = num.ToString();
		if (is_equal_clicked) first_num = num;
	}
}

private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (is_op_clicked || is_equal_clicked || textBox1->Text == "") {
		textBox1->Text = "0,";
		is_equal_clicked = false;
	}
	else if (!textBox1->Text->Contains(",")) {
		textBox1->Text += ",";
	}
}

private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
	first_num = 0;
	second_num = 0;
	operation = "";
	is_op_clicked = false;
	is_equal_clicked = false;
}