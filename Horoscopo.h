// Horoscopo.h

#pragma once

#include<iostream>
#include<string>
#include<cstdlib>

using namespace::std;

/*A class that manages and prints the information of the Chinese Horoscope based 
  on the date of birth that the user enters.*/

const string SIGNS[9][3] = { { "Caballo", "19900127","19910214" },		// Global Array

							 { "Cabra", "19910215", "19920203" },

							 { "Mono", "19920204", "19930122" },

							 { "Gallo", "19930123", "19940209" },

							 { "Perro", "19940209", "19950130" },

							 { "Cerdo", "19950131", "19960218" },

							 { "Rata", "19960219", "19970206" },

							 { "Buey", "19970207", "19980127" },

							{ "Tigre", "19980128", "19990215" } };

class Horoscopo
{
public:
	Horoscopo(); // Default Constructor
	Horoscopo(string aDob, string aSigno, string aFechaInicial, string aFechaFinal); // Parameter Constructor
	~Horoscopo(); // Destructor

	// Setters
	void setDOB(string aDob);

	// Getters
	string getDOB() const;
	string getSigno() const;
	string getFechaInicial() const;
	string getFechaFinal() const;

	// Methods and Display
	void computeSign();
	void display();

private:

	string signo;
	string dob;         // date of birth format mm/dd/yyyy
	string fechaInicial;
	string fechaFinal;

	bool fechaValida;   // Used to determined if the date entered is valid or not.
};

