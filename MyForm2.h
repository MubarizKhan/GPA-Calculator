#pragma once
//#include "CGPA_Return.h"
#include "cgpaheader.h"
#include <msclr\marshal_cppstd.h>

namespace zamafirstproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::TextBox^  textBox5;


	private: System::Windows::Forms::TextBox^  textBox8;


	private: System::Windows::Forms::TextBox^  textBox11;


	private: System::Windows::Forms::TextBox^  textBox14;


	private: System::Windows::Forms::TextBox^  textBox17;


	private: System::Windows::Forms::TextBox^  textBox20;


	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::ComboBox^  comboBox12;
	private: System::Windows::Forms::ComboBox^  comboBox13;
	private: System::Windows::Forms::ComboBox^  comboBox14;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;


	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(229, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GrayText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(624, 338);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 66);
			this->button1->TabIndex = 1;
			this->button1->Text = L"CALCULATE!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(303, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"CGPA Calculator";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(35, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter earned credit hours";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(35, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter current gpa";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2->Location = System::Drawing::Point(229, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox5->Location = System::Drawing::Point(39, 181);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(147, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox8->Location = System::Drawing::Point(39, 226);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(147, 20);
			this->textBox8->TabIndex = 11;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox11->Location = System::Drawing::Point(39, 274);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(147, 20);
			this->textBox11->TabIndex = 14;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox14->Location = System::Drawing::Point(39, 316);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(147, 20);
			this->textBox14->TabIndex = 17;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox17->Location = System::Drawing::Point(39, 362);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(147, 20);
			this->textBox17->TabIndex = 20;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox20->Location = System::Drawing::Point(39, 409);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(147, 20);
			this->textBox20->TabIndex = 23;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox23->Location = System::Drawing::Point(39, 458);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(147, 20);
			this->textBox23->TabIndex = 26;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox1->Location = System::Drawing::Point(209, 181);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(142, 21);
			this->comboBox1->TabIndex = 28;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox2->Location = System::Drawing::Point(209, 226);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(142, 21);
			this->comboBox2->TabIndex = 29;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox3->Location = System::Drawing::Point(209, 273);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(142, 21);
			this->comboBox3->TabIndex = 30;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox4->Location = System::Drawing::Point(209, 316);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(142, 21);
			this->comboBox4->TabIndex = 31;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox4_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox5->Location = System::Drawing::Point(209, 362);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(142, 21);
			this->comboBox5->TabIndex = 32;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox6->Location = System::Drawing::Point(209, 409);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(142, 21);
			this->comboBox6->TabIndex = 33;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox7->Location = System::Drawing::Point(209, 458);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(142, 21);
			this->comboBox7->TabIndex = 34;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"1"});
			this->comboBox8->Location = System::Drawing::Point(380, 181);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(142, 21);
			this->comboBox8->TabIndex = 35;
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"1"});
			this->comboBox9->Location = System::Drawing::Point(380, 226);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(142, 21);
			this->comboBox9->TabIndex = 36;
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox10->Location = System::Drawing::Point(380, 274);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(142, 21);
			this->comboBox10->TabIndex = 37;
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox11->Location = System::Drawing::Point(382, 316);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(140, 21);
			this->comboBox11->TabIndex = 38;
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox12->Location = System::Drawing::Point(380, 362);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(142, 21);
			this->comboBox12->TabIndex = 39;
			this->comboBox12->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox12_SelectedIndexChanged);
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox13->Location = System::Drawing::Point(380, 409);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(142, 21);
			this->comboBox13->TabIndex = 40;
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox14->Location = System::Drawing::Point(380, 457);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(142, 21);
			this->comboBox14->TabIndex = 41;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 24);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Course Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(205, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 24);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Grades";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(378, 140);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 24);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Credit hours";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(583, 282);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 21);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Your CGPA IS: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(725, 282);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 21);
			this->label8->TabIndex = 46;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(859, 491);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox14);
			this->Controls->Add(this->comboBox13);
			this->Controls->Add(this->comboBox12);
			this->Controls->Add(this->comboBox11);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm2";
			this->Text = L"Grades";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			try
			{

			 String ^tb1 = textBox1 -> Text;
			 Double tb1_val = System::Convert::ToDouble(tb1);

			 String ^tb2 = textBox2 -> Text;
			 Double tb2_val = System::Convert::ToDouble(tb2);


			String ^cb1_val = comboBox1-> Text; //firstgrade
			std::string first_grade = msclr::interop::marshal_as<std::string>(cb1_val); 

			String ^cb8 = comboBox8->Text; //firstcredithour
			Double cb8_val = System::Convert::ToDouble(cb8);

			String ^cb2_val = comboBox2-> Text; //secondgrade
			std::string second_grade = msclr::interop::marshal_as<std::string>(cb2_val); 

			String ^cb9 = comboBox9->Text; //2ndcredithour
			Double cb9_val = System::Convert::ToDouble(cb9);

			String ^cb3_val = comboBox3-> Text; //3rdtgrade
			std::string third_grade = msclr::interop::marshal_as<std::string>(cb3_val); 

			String ^cb10 = comboBox10->Text; //3rdcredithour
			Double cb10_val = System::Convert::ToDouble(cb10);

			String ^cb4_val = comboBox4-> Text; //4thgrade
			std::string fourth_grade = msclr::interop::marshal_as<std::string>(cb4_val); 

			String ^cb11 = comboBox11->Text; //4th credithour
			Double cb11_val = System::Convert::ToDouble(cb11);

			String ^cb5_val = comboBox5-> Text; //fifthgrade
			std::string fifth_grade = msclr::interop::marshal_as<std::string>(cb5_val); 

			String ^cb12 = comboBox12->Text; //5th credithour
			Double cb12_val = System::Convert::ToDouble(cb12);

			String ^cb6_val = comboBox6-> Text; //6grade
			std::string sixth_grade = msclr::interop::marshal_as<std::string>(cb6_val); 

			String ^cb13 = comboBox13->Text; //6th credithour
			Double cb13_val = System::Convert::ToDouble(cb13);

			String ^cb7_val = comboBox7-> Text; //7thgrade
			std::string seventh_grade = msclr::interop::marshal_as<std::string>(cb7_val); 

			String ^cb14 = comboBox14->Text; //5th credithour
			Double cb14_val = System::Convert::ToDouble(cb14);

			double ans;
			ans = obj1.calculate_gpa(tb2_val , tb1_val , first_grade,  cb8_val,  second_grade , cb9_val , third_grade , cb10_val , fourth_grade , cb11_val , fifth_grade , cb12_val , sixth_grade , cb13_val , seventh_grade , cb14_val);

			String ^var = System::Convert::ToString(ans);
			
			label8 -> Text = var;
		}
			catch(...)
			{
				MessageBox::Show("Fill in the spaces" , "Message Box");
			}

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox12_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
