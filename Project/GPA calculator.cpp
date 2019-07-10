#include <iostream>
using namespace std;

/*		Globaly declaring  Grades and their respective points   	*/

string Grades[12] = {"A+", "A" , "A-", "B+", "B" , "B-", "C+" , "C" , "C-" , "D+", "D" , "F" } ;
float points[12] = {4.00, 4.00, 3.67, 3.33, 3.00, 2.67, 2.33, 2.00, 1.67, 1.33, 1.00, 0.00};
float credithourarray[7] = {1, 1, 3 , 3 , 3 , 3 , 3 };
//float total_sum; //aDDS GP * CR/HR
//float weight_avg_grade_sum;

/*		End Of Global Declarations									*/

class sgpa {
private:
	float sgpa_obtained;	
	float wag_sgpa; //aDDS GP * CR/HR // weight average grade's sum for sgpa;

public:
	
	int intro_to_sgpa();
	float calculate_sgpa(string gradee, int credpts );

};



int sgpa:: intro_to_sgpa(){

    string respective_grades;
    int credithours;
	
   cout << "-------------------WELCOME TO SGPA CALCULATOR---------------"<<endl;
//   cout << "******************************************************************" <<endl;
    cout << "                                                                  " <<endl;
//    cout << "*******************************************************************" <<endl;
 	  cout << "-------------------------------------------------------------------" <<endl;
 
    for (int i = 0; i < 7; i++){
        cout << "Enter course no. " << i + 1 << " grades and credithours" <<endl;
        
		cout << "Enter your respective grades" <<endl;
        cin>> respective_grades;
        cout <<"                                            " <<endl;
        cout << "Enter credit hours of the subject" <<endl;
        cin>> credithours;
        
         calculate_sgpa(respective_grades, credithours );
			
	}
}

float sgpa ::calculate_sgpa( string gradee, int credpts )
{
	float val = 0;
	float sum = 0;
	
	for (int i = 0; i < 12; i ++)
	{
		if(Grades[i] == gradee)
		 {
		//out << "Grade found " << Grades[i] << " having point : " << points[i] << endl;
			val = points[i] * credpts;  
		}
		 else
		 {
			val = 0;
    	 }
			
			sum += val;	
		
	}
		
	wag_sgpa += sum;
	//out << "total_sum = " << wag_sgpa <<endl;
		
		 sgpa_obtained = wag_sgpa / 17;
		 
		cout << "---------------SGPA OBTAINED----------------"<<endl;
		cout << "SGPA OBTAINED IS---> "<< sgpa_obtained <<endl; //setting sgpa which is a privte variable in the class
		
		
		
}


 /* ----------- the algorithm i am using to calculate cgpa is that the user will enter the number of semesters, he has studied, the 
 ------------ sgpa he has attained in each semester, and we will multiply the respective sgpa to the number of credit hours opted which will be 17.
 we will store the products in a variable.
 			we will use a counter to know the total number of credit hours attempted,
 			and then we will askk the user to enter the new semester course name, grades and crd/hours
 			we will calculate the new users sgpa, multiply it by 17 and add the sum in the products variable, and divide it by the total number of credit hours
 			and we'll HAVE OUR CGPA.
 
 */
 
class cgpa : public sgpa {
private:
	
	
	int number_of_semesters;
	float weight_avg_grade_sum;
	float c_sgpa;
	int earned_credithours; 
	int opted_credithours_to_calculate_gpa;

public:
	float your_cgpa;
	
	float respective_credit_hours_sum ; 
	float cgpa_obtained_via_cgpa_calculator;
	
	cgpa();
	void set_number_of_semesters();
	float sgpa_solving(int x);
	void sgpaset();
	float reaching_cgpa( string respective_grade, int num_of_credithours);
	void set_credithours();
	void set_earned_credithours();
	float get_cgpa(float x);
};



	cgpa::cgpa()
	{
		
		number_of_semesters = 0;
		your_cgpa = 0;
	 	c_sgpa = 0;
	 	earned_credithours= 0; 
		opted_credithours_to_calculate_gpa = 0;
		
	}
	
		
	void cgpa :: set_number_of_semesters()
	{
		cout << "Enter your number of semesters" <<endl;
		cin>>number_of_semesters;
		sgpa_solving(number_of_semesters);
	}
	
	float cgpa :: sgpa_solving(int x)
	{
		float xy;
		float respective_credit_hours;
		float weight_avg_grade = 0;
		
	//	float respective_credit_hours_sum = 0;
		
		
		for(int i = 0; i < x ; i++)
		{
			float respective_cgpa;
			float respective_credit_hours;
			
			cout << "Enter the gpa of semester number :" << i + 1 << endl;
				cin>>respective_cgpa;
			cout << "also enter the crredit hours in the respective semester" <<endl;
				cin>> respective_credit_hours;
			
			xy = respective_cgpa * respective_credit_hours;
			weight_avg_grade += xy;

			respective_credit_hours_sum += respective_credit_hours; //float weight_avg_grade_sum;
																		//float respective_credit_hours_sum ;
		}	
			
		weight_avg_grade_sum += weight_avg_grade;
		cout << "                                                     "<<endl;
		//cout << weight_avg_grade_sum << "<------weight_avg_grade_sum" <<endl;
	//	cout << "total number of credit hours are " << respective_credit_hours_sum <<endl;
		cout <<  weight_avg_grade_sum / respective_credit_hours_sum << "<----- sgpa" <<endl;
		sgpaset();
		
	
	}
	
	
	
	void cgpa :: sgpaset()
	{
    	
    	string respective_grade;
    	int credithours;
    	
    	

//	
//	   //	cout << "-----------------WELCOME TO SGPA CALCULATOR---------------"<<endl;
//   		cout << "******************************************************************" <<endl;
//    		cout << "Time to calculate your sgpa " <<endl;
//    		cout << "*******************************************************************" <<endl;
//    		cout << "Max number of courses are 7 (including Labs) and credit hours are 17" <<endl;
 
    	for (int i = 0; i < 7; i++)
		{
        	cout << "Enter course no. " << i + 1 << "'s  respective grades and credithours" <<endl;
        	cout << "-----------*------------*----------------------*--------" <<endl;
    		
			cout << "Enter COURSE grades" <<endl;
        	cin>> respective_grade;
        	cout <<"                                            " <<endl;
        	cout << "Enter credit hours of the subject" <<endl;
        	cin>> credithours;
        
         	reaching_cgpa(respective_grade, credithours);
         	cout <<"                                                     "<<endl;
				
		}
}

	
		
	float cgpa :: reaching_cgpa(string respective_grade, int num_of_credithours)
	{
	
//	float sum_of_grade_avg = 0;
		float val = 0;
		float sum = 0;
//	float sgpa;
//	float xgpa_obtained;
	
	
	
		for (int i = 0; i < 12; i ++)
		{
	
			if (Grades[i] == respective_grade)
		 	{
			//	cout << "Grade found " << Grades[i] << " having point : " << points[i] << endl;
				val = points[i] * num_of_credithours;  
		 	}
			else 
		 	{
				val = 0;
		 	}
		 
		 	sum += val;
		
		}                                                 
		
			weight_avg_grade_sum += sum;
		//	cout << "total_sum = " << 	weight_avg_grade_sum <<endl;
		
		 	c_sgpa = 	weight_avg_grade_sum / 17;

	//	 	cout<<  	c_sgpa << endl << "<---SGPA OF THIS RESPECTIVE SEMESTER" <<endl;

	//	cout << "---------------SGPA OBTAINED----------------"<<endl;
	//	cout << "SGPA OBTAINED IS " << xgpa_obtained <<endl; //setting sgpa which is a privte variable in the class
		
		get_cgpa(weight_avg_grade_sum);
}
		
	
	float cgpa :: get_cgpa(float x){	

		cout << "-------------------CALCULATION OF CGPA--------------" <<endl;



		earned_credithours = (17 * (number_of_semesters + 1));
		
		your_cgpa = weight_avg_grade_sum  / earned_credithours;
		cout << "Your cgpa is " << your_cgpa <<endl;
		return your_cgpa;
		
	}	
	
	

class improve_cgpa 
 {
	private:
	
		float expected_gpa;
		int credithours_opted_to_improve_gpa ;
	

	public:
		float grade_set[7];
//		improve_cgpa();
		void improve_gpa();
		void set_current_cgpa();	

		void set_expected_gpa();
		
		float calculate_minimum_grades_points (int number_of_credithours, float xcpa, float xpectedgpa,float rray[7] );
		

};


float improve_cgpa :: calculate_minimum_grades_points (int num_of_crntch, float current_cgpa, float gpa_to_reach, float rray[7] )
{
		float test_sum = 0;
		float improve;	
		float ts;
			for (int i = 0; i < 7; i++)
			{
				ts = rray[i] * credithourarray[i];	
				test_sum += ts;
			}
		
	//cout << test_sum << "<--- test_sum" <<endl; //this the average weightage, which is divided by the number of credit hours to attain the gpa
		
		improve = (test_sum  + (current_cgpa * num_of_crntch) ) / (num_of_crntch + 17);
		
	//	cout << improve <<"w/o approximation" <<endl;
	
		if (improve != gpa_to_reach)
			{
			
			if (improve + 0.3 > gpa_to_reach) //this will approximate- these numbers are set to give the most approximate answer
				{  
				
				if (improve  > gpa_to_reach  )
					{
		
				//	cout << improve <<": this can be your cgpa, if you score the following grades in each course " << endl;
					
					cout << "-------------*-----------------*------------------*------------------"<<endl;	
			 		cout <<"---you need to score these set of grades to achieve this cgpa--->" << improve <<endl;
					for (int i = 0; i< 7; i++)
					{				//to print the elements of the arrray which produced the required sgpa which would equal to the gpa we want to reach 
					
			 			cout << rray[i] <<" -- grade points to score in course: "<< i << endl;
			 		}
		 			
			
					}
				}	
			} 
	
	else if(improve == gpa_to_reach)
		{
			
			cout << "-------------*-----------------*------------------*------------------"<<endl;	
			 		cout <<"---you need to score these set of grades to achieve this cgpa--->" << improve <<endl;
					for (int i = 0; i< 7; i++)
					{				//to print the elements of the arrray which produced the required sgpa which would equal to the gpa we want to reach 
					
			 			cout << rray[i] <<" -- grade points to score in course: "<< i << endl;
			 		}
				 	
				 	
		}
}
	

void improve_cgpa:: set_current_cgpa(){
		
		int num_of_crntch; //crnth--> current credit hours
		float current_cgpa;
		float gpa_to_reach; 
		
	/*	
		These are the sets of points, which will be used to calculate a sgpa which will be equal or very close to the gpa the user wants to attain
		The greater the number of test arrays, and greater the number of combinations of points a test array will hold, will produce a more accurate sgpa to raise
		your cgpa
		 
		
																																							*/
		
		float t1[7] = {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00};
		float t2[7]	= {1.33, 1.33, 1.33, 1.33, 1.00, 1.00, 1.00};
		float t3[7]	= {1.33, 1.33, 1.33, 1.33, 1.33, 1.33, 1.33};
		float t4[7]	= {1.67, 1.67, 1.67, 1.33, 1.33, 1.33, 1.33};
		float t5[7]	= {1.67, 1.67, 1.67, 1.67, 1.67, 1.67, 1.67};	
		float t6[7]	= {2.00, 2.00, 2.00, 2.00, 1.67, 1.67, 1.67};
		
		float t7[7]	= {2.00, 2.00, 2.00, 2.00, 2.00, 2.00, 2.00};
		float t8[7]	= {2.33, 2.33, 2.33, 2.00, 2.00, 2.00, 2.00};
		float t9[7]	= {2.33, 2.33, 2.33, 2.33, 2.33, 2.33, 2.33};
		float t10[7]= {2.67, 2.67, 2.67, 2.33, 2.33, 2.33, 2.33};
		float t11[7]= {2.67, 2.67, 2.67, 2.67, 2.67, 2.67, 2.67};	
		float t12[7]= {3.00, 3.00, 3.00, 3.00, 2.67, 2.67, 2.67};			
		
		
		float t13[7]= {3.00, 3.00, 3.00, 3.00, 3.00, 3.00, 3.00};
		float t14[7]= {3.33, 3.33, 3.33, 3.00, 3.00, 3.00, 3.00};
		float t15[7]= {3.33, 3.33, 3.33, 3.33, 3.33, 3.33, 3.33};
		float t16[7]= {3.67, 3.67, 3.67, 3.33, 3.33, 3.33, 3.33};
		float t17[7]= {3.67, 3.67, 3.67, 3.67, 3.67, 3.67, 3.67};	
		float t18[7]= {4.00, 4.00, 4.00, 4.00, 3.67, 3.67, 3.67};
		float t19[7] = {4.00, 4.00, 4.00, 4.00, 4.00, 4.00, 4.00};
					

		cout << "if the minimum grades you need to achieve aren't printed, it means you can't raise your gpa to the desired gpa!" <<endl;
		cout << "                                                                                                                "<<endl;
		cout << "Enter your current cgpa of the all semesters "<<endl;
		cin>> current_cgpa;
		
		cout << "Enter your current number of total attained credit hours " <<endl;
		cin>> num_of_crntch;
		
		cout << "enter the gpa you want to reach" <<endl;
		cin>> gpa_to_reach;
		
		
		
		 if (current_cgpa > gpa_to_reach)
		 {
			cout << "gpa to reach must be more than your current cgpa, not less! " <<endl;
			return;
		}
	
		else
		{
		
	
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t1 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t2 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t3 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t4 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t5 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t6 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t7 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t8 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t9 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t10 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t11 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t12 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t13 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t14 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t15 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t16 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t17 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t18 );
		calculate_minimum_grades_points ( num_of_crntch, current_cgpa, gpa_to_reach, t19 );
		
	}
	
}

	
	
	
int  main()
{

	int enter;

	sgpa l;
	cgpa c;
	improve_cgpa d;
//d.set_current_cgpa();

	cout << "-------------*-----------------*------------------*-----------------------------*" <<endl;
	cout << "---------------------------GPA CALCULATOR----------------------------------------" <<endl;
//	cout << "                                                                                 " <<endl;
	cout << " PRESS 1: SGPA|     PRESS 2: CGPA CALCULATION|  PRESS 3: TO IMPROVE YOUR CGPA|    " <<endl;
	cin>> enter;

	switch (enter)
	{
		case 1:
			l.intro_to_sgpa();
			break;
		case 2:
			c.set_number_of_semesters();
			c.your_cgpa;
			break;
		
		case 3:
			d.set_current_cgpa();
			break;
		
		default:
			break;
	}


return 0;
}
