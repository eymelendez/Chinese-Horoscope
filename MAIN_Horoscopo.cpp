// MAIN_Horoscopo.cpp

#include<iostream>
#include<string>

using namespace::std;

#include"Horoscopo.h"

/*
	File Name: MAIN_Horoscopo.cpp
	Author: Edwin Y. Melendez Lopez #89139
	Description: Program that ask the user a date of birth and using that input it will print out the sign of 
				 the Chinese Horoscope that the date belongs too by using the date that you enter and the whole
				 array of date that are in between said input.

				 
	Notes or Program History (Changes and Updates):	
			03/20/2017 - Program Created. EML
			03/21/2017 - Getters, setter and displays finalized. EML
			03/22/2017 - Testing Program. EML
			03/22/2017 - Bool's added and tested. EML
			03/22/2017 - Program Tested and Successfully runs. EML
	*/

int main() 
{
	Horoscopo horoscopo;
	string fecha;

	cout << "Enter your date of birth in the following format (mm/dd/yyyy): ";
	cin >> fecha;

	cout << "\n";

	horoscopo.setDOB(fecha);
	horoscopo.display();

	system("pause");

	return 0;



} // end main. 20 de marzo de 2017 - successful!