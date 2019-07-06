

#include <iostream>
#include <string>

using namespace std;
#ifndef SGPA
#define SGPA

/*		Globaly declaring  Grades and their respective points   	*/

string Grades[12] = {"A+", "A" , "A-", "B+", "B" , "B-", "C+" , "C" , "C-" , "D+", "D" , "F" } ;
double points[12] = {4.00, 4.00, 3.67, 3.33, 3.00, 2.67, 2.33, 2.00, 1.67, 1.33, 1.00, 0.00};
double credithourarray[7] = {1, 1, 3 , 3 , 3 , 3 , 3 };

/*		End Of Global Declarations									*/



class sgpa {
private:
	double sgpa_obtained;	
	double wag_sgpa; //aDDS GP * CR/HR // weight average grade's sum for sgpa;

public:
	
	double calculate_sgpa (string grade1 ,int credpts1, string grade2, int credpts2,  string grade3, int credpts3, string grade4,  int credpts4, string grade5, int credpts5, string grade6,  int credpts6, string grade7, int credpts7 );

}dummy;


double sgpa ::calculate_sgpa( string grade1 ,int credpts1, string grade2, int credpts2,  string grade3, int credpts3, string grade4,  int credpts4, string grade5, int credpts5, string grade6,  int credpts6, string grade7, int credpts7 )
{
	double val = 0;
	double sum = 0;

	//for the first grade and first credithour
	for (int i = 0; i < 12; i++)
	{
		if(Grades[i] == grade1)
			val = points[i] * credpts1;

	}		
		sum += val;	
	//for the second grade & second credit hour
	for (int i = 0; i < 12; i++)
	{
		if(Grades[i] == grade2)
		 {
			val = points[i] * credpts2;  
		 }

		
	}
		sum += val;
	
	//FOR THE THIRD GRADE & third credit hour
	for (int i = 0; i < 12; i++)
	{
		if(Grades[i] == grade3)
		 {
			val = points[i] * credpts3;  
		 }

			
	}
		sum += val;

	//for the fourth grade and fourth credit hour
	for (int i = 0; i < 12; i++)
	{

		if(Grades[i] == grade4)
		 {
			val = points[i] * credpts4;  
		 }

			
	}
		sum += val;

	//for the fifth grade and fifth credit hour
	for (int i = 0; i < 12; i++)
	{
		if(Grades[i] == grade5)
			val = points[i] * credpts5;  
	}
		sum += val;
	
	for(int i = 0; i < 12; i++)
	{
		if(Grades[i] == grade6)
			val = points[i] * credpts6;  
	}
		sum += val;
	
		

	for (int i = 0; i < 12; i++)
	{
		if(Grades[i] == grade7)	
			val = points[i] * credpts7;  

	}		
		sum += val;
	
		wag_sgpa += sum;

		
		 sgpa_obtained = wag_sgpa / 17;
		 return sgpa_obtained;	
		 	
}




#endif