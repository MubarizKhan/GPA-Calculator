#pragma once
#include "masterheader.h"
#include <msclr\marshal_cppstd.h>

namespace zamafirstproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;


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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"1"});
			this->comboBox1->Location = System::Drawing::Point(359, 129);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(106, 22);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"High Tower Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(539, 179);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 55);
			this->button1->TabIndex = 3;
			this->button1->Text = L"CALCULATE!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label3->Cursor = System::Windows::Forms::Cursors::Cross;
			this->label3->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(239, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(285, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Semester GPA Calculator";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(56, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Course Name";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox2->Location = System::Drawing::Point(207, 130);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(105, 22);
			this->comboBox2->TabIndex = 8;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox3->Location = System::Drawing::Point(207, 284);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(105, 22);
			this->comboBox3->TabIndex = 9;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox4->Location = System::Drawing::Point(207, 231);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(105, 22);
			this->comboBox4->TabIndex = 10;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox5->Location = System::Drawing::Point(207, 341);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(105, 22);
			this->comboBox5->TabIndex = 11;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox6->Location = System::Drawing::Point(207, 394);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(105, 22);
			this->comboBox6->TabIndex = 12;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"1"});
			this->comboBox7->Location = System::Drawing::Point(359, 179);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(106, 22);
			this->comboBox7->TabIndex = 13;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox8->Location = System::Drawing::Point(359, 284);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(106, 22);
			this->comboBox8->TabIndex = 14;
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox9->Location = System::Drawing::Point(207, 446);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(105, 22);
			this->comboBox9->TabIndex = 15;
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox10->Location = System::Drawing::Point(359, 342);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(106, 22);
			this->comboBox10->TabIndex = 16;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox10_SelectedIndexChanged);
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox11->Location = System::Drawing::Point(359, 232);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(106, 22);
			this->comboBox11->TabIndex = 17;
			this->comboBox11->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox11_SelectedIndexChanged);
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox12->Location = System::Drawing::Point(359, 446);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(106, 22);
			this->comboBox12->TabIndex = 18;
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"3"});
			this->comboBox13->Location = System::Drawing::Point(359, 395);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(106, 22);
			this->comboBox13->TabIndex = 19;
			this->comboBox13->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox13_SelectedIndexChanged);
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"A+", L"A", L"A-", L"B+", L"B", L"B-", L"C+", 
				L"C", L"C-", L"D+", L"D", L"F"});
			this->comboBox14->Location = System::Drawing::Point(207, 178);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(105, 22);
			this->comboBox14->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(57, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 21);
			this->textBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(57, 232);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 21);
			this->textBox2->TabIndex = 22;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(57, 179);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(118, 21);
			this->textBox3->TabIndex = 23;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(57, 285);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(118, 21);
			this->textBox4->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(57, 342);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(118, 21);
			this->textBox5->TabIndex = 25;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(57, 395);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(118, 21);
			this->textBox6->TabIndex = 26;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(57, 447);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(118, 21);
			this->textBox7->TabIndex = 27;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(202, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 25);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Grade Attained";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(364, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 25);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Credit hours";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(553, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 26);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Your GPA";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(774, 490);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"GPA Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		try
		{ 

//			std::cout << "Entered try " << std::endl;

			 String ^cb2_val = comboBox2-> Text; //firstgrade
			std::string first_grade = msclr::interop::marshal_as<std::string>(cb2_val);
	
			String ^cb1 = comboBox1->Text; //firstcredithour
			 double cb1_val = System::Convert::ToDouble(cb1);

			String ^cb14_val = comboBox14-> Text;  //second grade
			std ::string second_grade = msclr::interop::marshal_as<std::string>(cb14_val);
					
			String ^cb7 = comboBox7->Text; //secondcredithour
			double cb7_val = System::Convert::ToInt16(cb7);

			String ^cb4_val = comboBox4-> Text; //third grade
			std ::string third_grade = msclr::interop::marshal_as<std::string>(cb4_val);

			String ^cb11 = comboBox11 ->Text; //thirdcredithour
			double cb11_val = System::Convert::ToInt16(cb11);
					

			String ^cb3_val = comboBox3-> Text; //fourth grade
			std ::string fourth_grade = msclr::interop::marshal_as<std::string>(cb3_val);

			String ^cb8 = comboBox8 ->Text; //fourthcredithour
			double cb8_val = System::Convert::ToInt16(cb8);

			String ^cb5_val = comboBox5-> Text; //fifth grade
			std ::string fifth_grade = msclr::interop::marshal_as<std::string>(cb5_val);

			String ^cb10 = comboBox10-> Text; //fifth credithour
			double cb10_val = System::Convert::ToInt16(cb10);

			String ^cb6_val = comboBox6-> Text; //sixth grade
			std ::string sixth_grade = msclr::interop::marshal_as<std::string>(cb6_val);

			String ^cb13 = comboBox13-> Text; //sixth credithour
			double cb13_val = System::Convert::ToDouble(cb13);

			String ^cb9_val = comboBox9-> Text; //seventh grade
			std ::string seventh_grade = msclr::interop::marshal_as<std::string>(cb9_val);

			String ^cb12 = comboBox12-> Text; //seventh credithour
			double cb12_val = System::Convert::ToDouble(cb12);

			std::cout << "values recieved sucessfully !!!" << std::endl;
		
		
			//String ^temp = label1 -> Text;
			double ll;
			ll = dummy.calculate_sgpa(first_grade, cb1_val, second_grade, cb7_val, third_grade, cb11_val, fourth_grade, cb8_val, fifth_grade, cb10_val, sixth_grade, cb13_val, seventh_grade, cb12_val);

		//	std::string answer = msclr::interop::marshal_as<std::string>(ll);
			String ^temp = System::Convert::ToString(ll);
			
			label1 -> Text = temp;
		}

		catch(...)
		{
			MessageBox::Show("Fill in the spaces" , "Message Box");
		}
	}

private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox13_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox11_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
