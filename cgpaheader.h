


#include "masterheader.h"
#include <iostream>
#include <string>


using namespace std;
#ifndef CGPA
#define CGPA

/*		Globaly declaring  Grades and their respective points   	*/

//double points[12] = {4.00, 4.00, 3.67, 3.33, 3.00, 2.67, 2.33, 2.00, 1.67, 1.33, 1.00, 0.00};


class cgpa: public sgpa{
private:
	
	

//	float weight_avg_grade_sum;
	float c_sgpa;
	double earned_credithours; 
	int opted_credithours_to_calculate_gpa;

public:
	double your_cgpa;
	
	double rch;
	//float cgpa_obtained_via_cgpa_calculator;
	
	cgpa();


//	float sgpa_solving();
//	void sgpaset();
	
	double calculate_gpa(double respective_cgpa, int respective_credit_hours , string grade1, int credithours1, string grade2 , int credithours2, string grade3 , int credithours3, string grade4 , int credithours4, string grade5,int credithours5, string grade6 , int credithours6, string grade7 , int credithours7);

	double get_cgpa();
	
	double weight_avg_grade;
}obj1;



	cgpa::cgpa()
	{
		
	
		your_cgpa = 0;
	 	c_sgpa = 0;
	// 	respective_credit_hours; 
		opted_credithours_to_calculate_gpa = 0;
		 weight_avg_grade = 0;
	}
		
	
		
	double cgpa :: calculate_gpa(double respective_cgpa, int respective_credit_hours , string grade1, int credithours1, string grade2 , int credithours2, string grade3 , int credithours3, string grade4 , int credithours4, string grade5,int credithours5, string grade6 , int credithours6, string grade7 , int credithours7)
	{
	
		weight_avg_grade = respective_cgpa * respective_credit_hours;
		rch += respective_credit_hours;
//	float sum_of_grade_avg = 0;
		double val = 0;
		double sum = 0;
		
		
		for (int i = 0; i < 12; i ++)
		{
	
			if (Grades[i] == grade1)
			//	cout << "Grade found " << Grades[i] << " having point : " << points[i] << endl;
				val = points[i] * credithours1;  
		}
		
		sum += val;                                                 
	//	weight_avg_grade += sum;
		
		//grade 2 &  credit hours2
		
		for (int i = 0; i < 12; i ++)
		{
	
			if (Grades[i] == grade2)
			//	cout << "Grade found " << Grades[i] << " having point : " << points[i] << endl;
				val = points[i] * credithours2;  
		}
		
		sum += val;                                                 
	//	weight_avg_grade += sum;
		
		//grade 3 & credithours3
		
		for (int i = 0; i < 12; i ++)
		{
	
			if (Grades[i] == grade3)
			//	cout << "Grade found " << Grades[i] << " having point : " << points[i] << endl;
				val = points[i] * credithours3;  
		}
		
		sum += val;                                                 
	//	weight_avg_grade += sum;
		
		
		////////
		
		for (int i = 0; i < 12; i ++)
		{
	
			if (Grades[i] == grade4)
				val = points[i] * credithours4;  
		}
		
		sum += val;                                                 
	//	weight_avg_grade += sum;
		
		//grade 5 &  credit hours5
		
		for (int i = 0; i < 12; i ++)
		{
	
			if (Grades[i] == grade5)
			//	cout << "Grade found " << Grades[i] << " having point : " << points[i] << endl;
				val = points[i] * credithours5;  
		}
		
		sum += val;                                                 
	//	weight_avg_grade += sum;
		
		//grade 6 & credithours6
		
		for (int i = 0; i < 12; i ++)
		{
	
			if (Grades[i] == grade6)
			//	cout << "Grade found " << Grades[i] << " having point : " << points[i] << endl;
				val = points[i] * credithours6;  
		}
		
		sum += val;                                                 
	//	weight_avg_grade += sum;
		
		//grade 7
		
		for (int i = 0; i < 12; i ++)
		{
	
			if (Grades[i] == grade7)
			//	cout << "Grade found " << Grades[i] << " having point : " << points[i] << endl;
				val = points[i] * credithours7;  
		}
		
		sum += val;                                                 
		weight_avg_grade += sum;
		
		
		return get_cgpa();
}
		
	
	double cgpa :: get_cgpa()
	{	
	//	cout << "-------------------CALCULATION OF CGPA--------------" <<endl;

		earned_credithours = (17 + rch);
		your_cgpa = weight_avg_grade / earned_credithours;
		//cout << "Your cgpa is " << your_cgpa <<endl;
		return your_cgpa;
	}	

#endif