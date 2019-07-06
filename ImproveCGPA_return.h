#pragma once
#include "icgpa.h"
#include <msclr\marshal_cppstd.h>

//#define CerditHourArray


namespace zamafirstproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ImproveCGPA_return
	/// </summary>
	public ref class ImproveCGPA_return : public System::Windows::Forms::Form
	{
	public:
		ImproveCGPA_return(double crh, double current_gpa, double gpa_reach)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			setEstGpa(crh, current_gpa, gpa_reach);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ImproveCGPA_return()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ImproveCGPA_return::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkOliveGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(213, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"IMPROVE YOUR CGPA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Green;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(65, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(290, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Grades needed to achieve this CGPA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(216, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"GPA can\'t be Achieved";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(216, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"GPA can\'t be Achieved";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(216, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"GPA can\'t be Achieved";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(216, 241);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"GPA can\'t be Achieved";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(216, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"GPA can\'t be Achieved";
			this->label7->Click += gcnew System::EventHandler(this, &ImproveCGPA_return::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(216, 319);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 19);
			this->label8->TabIndex = 7;
			this->label8->Text = L"GPA can\'t be Achieved";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(216, 357);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"GPA can\'t be Achieved";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(84, 127);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 19);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Grades 1:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(84, 166);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 19);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Grades 2:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(84, 241);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 21);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Grades 4:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(84, 202);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(71, 21);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Grades 3:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(84, 314);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 21);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Grades 6";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(84, 275);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(71, 21);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Grades 5:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(83, 349);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(67, 21);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Grades 7";
			// 
			// ImproveCGPA_return
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(753, 453);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ImproveCGPA_return";
			this->Text = L"ImproveCGPA_return";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//improve_cgpa obj;

		public: void setEstGpa(double crh, double current_cgpa, double gpa_to_reach) {
			
					std::cout<<"values recieved : " << crh << current_cgpa << gpa_to_reach ;

			double t1[7] = {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00};
			double t2[7]	= {1.33, 1.33, 1.33, 1.33, 1.00, 1.00, 1.00};
			double t3[7]	= {1.33, 1.33, 1.33, 1.33, 1.33, 1.33, 1.33};
			double t4[7]	= {1.67, 1.67, 1.67, 1.33, 1.33, 1.33, 1.33};
			double t5[7]	= {1.67, 1.67, 1.67, 1.67, 1.67, 1.67, 1.67};	
			double t6[7]	= {2.00, 2.00, 2.00, 2.00, 1.67, 1.67, 1.67};
			double m6[7] = {3.67, 3.33, 2.33, 2.67, 2.00, 2.33, 3.00};
			
			

			double t7[7]	= {2.00, 2.00, 2.00, 2.00, 2.00, 2.00, 2.00};
			double t8[7]	= {2.33, 2.33, 2.33, 2.00, 2.00, 2.00, 2.00};
			double t9[7]	= {2.33, 2.33, 2.33, 2.33, 2.33, 2.33, 2.33};
			double t10[7]= {2.67, 2.67, 2.67, 2.33, 2.33, 2.33, 2.33};
			double t11[7]= {2.67, 2.67, 2.67, 2.67, 2.67, 2.67, 2.67};	
			double t12[7]= {3.00, 3.00, 3.00, 3.00, 2.67, 2.67, 2.67};			
		
		
			double t13[7]= {3.00, 3.00, 3.00, 3.00, 3.00, 3.00, 3.00};
			double t14[7]= {3.33, 3.33, 3.33, 3.00, 3.00, 3.00, 3.00};
			double t15[7]= {3.33, 3.33, 3.33, 3.33, 3.33, 3.33, 3.33};
			double t16[7]= {3.67, 3.67, 3.67, 3.33, 3.33, 3.33, 3.33};
			double t17[7]= {3.67, 3.67, 3.67, 3.67, 3.67, 3.67, 3.67};
			double t18[7]= {4.00, 4.00, 4.00, 4.00, 3.67, 3.67, 3.67}; 
			double t19[7] = {4.00, 4.00, 4.00, 4.00, 4.00, 4.00, 4.00};
		
		 double *ptr1  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t1 );		
			double *ptr2  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t2 );
			double *ptr3  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t3 );
			double *ptr4  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t4 );
			double *ptr5  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t5 );
			double *ptr6  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t6 );
			double *ptr7  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t7 );
			double *ptr8  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t8 );
			double *ptr9  = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t9 );
			double *ptr10 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t10 );
			double *ptr11 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t11 );
			double *ptr12 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t12 );
			double *ptr13 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t13 );
			double *ptr14 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t14 );
			double *ptr15 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t15 );
			double *ptr16 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t16 );
			double *ptr17 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t17 );
			double *ptr18 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t18 ); 
			double *ptr19 = dummyx.calculate_minimum_grades_points ( crh , current_cgpa, gpa_to_reach, t19 );
			

			//-----------------------------------------PTR1-----------------
				if(ptr1 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr1 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr1 + 1));
				String ^val3 = System::Convert::ToString(*(ptr1 + 2));
				String ^val4 = System::Convert::ToString(*(ptr1 + 3));
				String ^val5 = System::Convert::ToString(*(ptr1 + 4));
				String ^val6 = System::Convert::ToString(*(ptr1 + 5));
				String ^val7 = System::Convert::ToString(*(ptr1 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}



			//--------------------------PTR2------------------------------
			else if(ptr2 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr2 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr2 + 1));
				String ^val3 = System::Convert::ToString(*(ptr2 + 2));
				String ^val4 = System::Convert::ToString(*(ptr2 + 3));
				String ^val5 = System::Convert::ToString(*(ptr2 + 4));
				String ^val6 = System::Convert::ToString(*(ptr2 + 5));
				String ^val7 = System::Convert::ToString(*(ptr2 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}

			//-----------------PTR3----------------------------
			else if(ptr3 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr3 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr3 + 1));
				String ^val3 = System::Convert::ToString(*(ptr3 + 2));
				String ^val4 = System::Convert::ToString(*(ptr3 + 3));
				String ^val5 = System::Convert::ToString(*(ptr3 + 4));
				String ^val6 = System::Convert::ToString(*(ptr3 + 5));
				String ^val7 = System::Convert::ToString(*(ptr3 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}



			//------------------------------------PTR4----------------------
			else if(ptr4 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr4 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr4 + 1));
				String ^val3 = System::Convert::ToString(*(ptr4 + 2));
				String ^val4 = System::Convert::ToString(*(ptr4 + 3));
				String ^val5 = System::Convert::ToString(*(ptr4 + 4));
				String ^val6 = System::Convert::ToString(*(ptr4 + 5));
				String ^val7 = System::Convert::ToString(*(ptr4 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}
			

			//PTR5
			else if(ptr5 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr5 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr5 + 1));
				String ^val3 = System::Convert::ToString(*(ptr5 + 2));
				String ^val4 = System::Convert::ToString(*(ptr5 + 3));
				String ^val5 = System::Convert::ToString(*(ptr5 + 4));
				String ^val6 = System::Convert::ToString(*(ptr5 + 5));
				String ^val7 = System::Convert::ToString(*(ptr5 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}


			///PTR 6
			else if(ptr6 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr6 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr6 + 1));
				String ^val3 = System::Convert::ToString(*(ptr6 + 2));
				String ^val4 = System::Convert::ToString(*(ptr6 + 3));
				String ^val5 = System::Convert::ToString(*(ptr6 + 4));
				String ^val6 = System::Convert::ToString(*(ptr6 + 5));
				String ^val7 = System::Convert::ToString(*(ptr6 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}

			//ptr7
			else if(ptr7 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr7 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr7 + 1));
				String ^val3 = System::Convert::ToString(*(ptr7 + 2));
				String ^val4 = System::Convert::ToString(*(ptr7 + 3));
				String ^val5 = System::Convert::ToString(*(ptr7 + 4));
				String ^val6 = System::Convert::ToString(*(ptr7 + 5));
				String ^val7 = System::Convert::ToString(*(ptr7 + 6));
			

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}


			//ptr8
			else if(ptr8 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr8 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr8 + 1));
				String ^val3 = System::Convert::ToString(*(ptr8 + 2));
				String ^val4 = System::Convert::ToString(*(ptr8 + 3));
				String ^val5 = System::Convert::ToString(*(ptr8 + 4));
				String ^val6 = System::Convert::ToString(*(ptr8 + 5));
				String ^val7 = System::Convert::ToString(*(ptr8 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}

			//PTR9
			else if(ptr9 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr9 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr9 + 1));
				String ^val3 = System::Convert::ToString(*(ptr9 + 2));
				String ^val4 = System::Convert::ToString(*(ptr9 + 3));
				String ^val5 = System::Convert::ToString(*(ptr9 + 4));
				String ^val6 = System::Convert::ToString(*(ptr9 + 5));
				String ^val7 = System::Convert::ToString(*(ptr9 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}
			

			//-----------------------ptr10
			else if(ptr10 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr10 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr10 + 1));
				String ^val3 = System::Convert::ToString(*(ptr10 + 2));
				String ^val4 = System::Convert::ToString(*(ptr10 + 3));
				String ^val5 = System::Convert::ToString(*(ptr10 + 4));
				String ^val6 = System::Convert::ToString(*(ptr10 + 5));
				String ^val7 = System::Convert::ToString(*(ptr10 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}


			///PTR 11
			else if(ptr11 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr11 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr11 + 1));
				String ^val3 = System::Convert::ToString(*(ptr11 + 2));
				String ^val4 = System::Convert::ToString(*(ptr11 + 3));
				String ^val5 = System::Convert::ToString(*(ptr11 + 4));
				String ^val6 = System::Convert::ToString(*(ptr11 + 5));
				String ^val7 = System::Convert::ToString(*(ptr11 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}

			//ptr12
			else if(ptr12 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr12 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr12 + 1));
				String ^val3 = System::Convert::ToString(*(ptr12 + 2));
				String ^val4 = System::Convert::ToString(*(ptr12 + 3));
				String ^val5 = System::Convert::ToString(*(ptr12 + 4));
				String ^val6 = System::Convert::ToString(*(ptr12 + 5));
				String ^val7 = System::Convert::ToString(*(ptr12 + 6));
			

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}


			//ptr13
			else if(ptr13 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr13 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr13 + 1));
				String ^val3 = System::Convert::ToString(*(ptr13 + 2));
				String ^val4 = System::Convert::ToString(*(ptr13 + 3));
				String ^val5 = System::Convert::ToString(*(ptr13 + 4));
				String ^val6 = System::Convert::ToString(*(ptr13 + 5));
				String ^val7 = System::Convert::ToString(*(ptr13 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}


			//ptr14
			else if(ptr14 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr14 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr14 + 1));
				String ^val3 = System::Convert::ToString(*(ptr14 + 2));
				String ^val4 = System::Convert::ToString(*(ptr14 + 3));
				String ^val5 = System::Convert::ToString(*(ptr14 + 4));
				String ^val6 = System::Convert::ToString(*(ptr14 + 5));
				String ^val7 = System::Convert::ToString(*(ptr14 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}

			//PTR 15
			else if(ptr15 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr15 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr15 + 1));
				String ^val3 = System::Convert::ToString(*(ptr15 + 2));
				String ^val4 = System::Convert::ToString(*(ptr15 + 3));
				String ^val5 = System::Convert::ToString(*(ptr15 + 4));
				String ^val6 = System::Convert::ToString(*(ptr15 + 5));
				String ^val7 = System::Convert::ToString(*(ptr15 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}

			//PTR16
			else if(ptr16 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr16 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr16 + 1));
				String ^val3 = System::Convert::ToString(*(ptr16 + 2));
				String ^val4 = System::Convert::ToString(*(ptr16 + 3));
				String ^val5 = System::Convert::ToString(*(ptr16 + 4));
				String ^val6 = System::Convert::ToString(*(ptr16 + 5));
				String ^val7 = System::Convert::ToString(*(ptr16 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}


			//PTR17
			else if(ptr17 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr17 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr17 + 1));
				String ^val3 = System::Convert::ToString(*(ptr17 + 2));
				String ^val4 = System::Convert::ToString(*(ptr17 + 3));
				String ^val5 = System::Convert::ToString(*(ptr17 + 4));
				String ^val6 = System::Convert::ToString(*(ptr17 + 5));
				String ^val7 = System::Convert::ToString(*(ptr17 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}
			

			//PTR18
			else if(ptr18 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr18 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr18 + 1));
				String ^val3 = System::Convert::ToString(*(ptr18 + 2));
				String ^val4 = System::Convert::ToString(*(ptr18 + 3));
				String ^val5 = System::Convert::ToString(*(ptr18 + 4));
				String ^val6 = System::Convert::ToString(*(ptr18 + 5));
				String ^val7 = System::Convert::ToString(*(ptr18 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}


			///PTR 19
			else if(ptr19 != NULL){
			
			//	std::cout << "\n\n" << *(ptr19 + 0) << *(ptr19 + 1) << *(ptr19 + 2) << std::endl;
			
				// poss
				String ^val1 = System::Convert::ToString(*(ptr19 + 0));
				
			    String ^val2 = System::Convert::ToString(*(ptr19 + 1));
				String ^val3 = System::Convert::ToString(*(ptr19 + 2));
				String ^val4 = System::Convert::ToString(*(ptr19 + 3));
				String ^val5 = System::Convert::ToString(*(ptr19 + 4));
				String ^val6 = System::Convert::ToString(*(ptr19 + 5));
				String ^val7 = System::Convert::ToString(*(ptr19 + 6));
				

				this->label3->Text = val1;
				this->label4->Text = val2;
				this->label5->Text = val3;
				this->label6->Text = val4;
				this->label7->Text = val5;
				this->label8->Text = val6;
				this->label9->Text = val7;
			}
		
		
			


		}

	private: System::Void ImproveCGPA_return_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
