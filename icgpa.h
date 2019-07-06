#include <iostream>
#include <string>

//string Grades[12] = {"A+", "A" , "A-", "B+", "B" , "B-", "C+" , "C" , "C-" , "D+", "D" , "F" } ;
//double points[12] = {4.00, 4.00, 3.67, 3.33, 3.00, 2.67, 2.33, 2.00, 1.67, 1.33, 1.00, 0.00};





class improve_cgpa 
 {
	private:
	
		double expected_gpa;
		int credithours_opted_to_improve_gpa ;
	

	public:
		double grade_set[7];	
		double credithourarray[7];
		int count; // = 0;	
		double* calculate_minimum_grades_points (double number_of_credithours, double xcpa, double xpectedgpa,double rray[7] );
		
		improve_cgpa() {
			this->count = 0;
			this->credithourarray[0] = 1;
			this->credithourarray[1] = 1;
			this->credithourarray[2] = 3;
			this->credithourarray[3] = 3;
			this->credithourarray[4] = 3;
			this->credithourarray[5] = 3;
			this->credithourarray[6] = 3;
			
		
		}
}dummyx;


double* improve_cgpa :: calculate_minimum_grades_points (double num_of_crntch, double current_cgpa, double gpa_to_reach, double rray[7] )
{				
		double test_sum = 0;
		double improve;	
		double ts;
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
			if (improve + 0.05 > gpa_to_reach ) //this will approximate- these numbers are set to give the most approximate answer
			{  		
				if (improve  > gpa_to_reach  )
				{
					//	cout << "-------------*-----------------*------------------*------------------"<<endl;	
			 	//	cout <<"---you need to score these set of grades to achieve this cgpa--->" << improve <<endl;
					for (int i = 0; i< 7; i++)
					{				//to print the elements of the arrray which produced the required sgpa which would equal to the gpa we want to reach 
						if(count < 1)
						{
							count++;
		 					double *rptr = rray;
		 					return rptr;
						}
			 		}
		 			
			
				}
				else 
					return NULL;
				
			}	
			 
	else if(improve == gpa_to_reach)
		{
			
						for (int i = 0; i< 7; i++)
					{				//to print the elements of the arrray which produced the required sgpa which would equal to the gpa we want to reach 
		 					double *rptr = rray;
		 					return rptr;
					
				 	}
				 	
		}
	}
} 
