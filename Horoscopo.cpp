// Horoscopo.cpp

#include<iostream>
#include<string>
#include<cstdlib>

#include"Horoscopo.h"

using namespace::std;

// Constructor
Horoscopo::Horoscopo()
{
	setDOB("06/15/1996");
}

// Parameter Constructor
Horoscopo::Horoscopo(string aDob, string aSigno, string aFechaInicial, string aFechaFinal)
{
	setDOB(aDob);


}

// Destructor
Horoscopo::~Horoscopo()
{
	cout << "Destruyendo objetos... ";
}

// Setter
void Horoscopo::setDOB(string aDob) 
{
	dob = aDob;

	computeSign();

}

// Getters
string Horoscopo::getDOB() const
{
	return dob;

}


string Horoscopo::getSigno() const
{

	return signo;

}



// Determines the initial date
string Horoscopo::getFechaInicial() const 
{
	string fecha, fi;

    fecha = dob.substr(6, 4) + dob.substr(0, 2) + dob.substr(3, 2);  // format that changes the date of birth to changes the position of 
																	 // the entered date to compare the values more easily.

	// Ranges to determine which inital date of the Horoscope will print based on the date entered by the user.

	if (fecha >= SIGNS[0][1] && fecha <= SIGNS[0][2])
	{
		fi = SIGNS[0][1].substr(4, 2) + "/" + SIGNS[0][1].substr(6, 2) + "/" + SIGNS[0][1].substr(0, 4); 
	}

	if (fecha >= SIGNS[1][1] && fecha <= SIGNS[1][2])
	{
		fi = SIGNS[1][1].substr(4, 2) + "/" + SIGNS[1][1].substr(6, 2) + "/" + SIGNS[1][1].substr(0, 4);

	}

	if (fecha >= SIGNS[2][1] && fecha <= SIGNS[2][2])
	{
		fi = SIGNS[2][1].substr(4, 2) + "/" + SIGNS[2][1].substr(6, 2) + "/" + SIGNS[2][1].substr(0, 4);

	}

	if (fecha >= SIGNS[3][1] && fecha <= SIGNS[3][2])
	{
		fi = SIGNS[3][1].substr(4, 2) + "/" + SIGNS[3][1].substr(6, 2) + "/" + SIGNS[3][1].substr(0, 4);

	}

	if (fecha >= SIGNS[4][1] && fecha <= SIGNS[4][2])
	{
		fi = SIGNS[4][1].substr(4, 2) + "/" + SIGNS[4][1].substr(6, 2) + "/" + SIGNS[4][1].substr(0, 4);

	}

	if (fecha >= SIGNS[5][1] && fecha <= SIGNS[5][2])
	{
		fi = SIGNS[5][1].substr(4, 2) + "/" + SIGNS[5][1].substr(6, 2) + "/" + SIGNS[5][1].substr(0, 4);

	}

	if (fecha >= SIGNS[6][1] && fecha <= SIGNS[6][2])
	{
		fi = SIGNS[6][1].substr(4, 2) + "/" + SIGNS[6][1].substr(6, 2) + "/" + SIGNS[6][1].substr(0, 4);

	}

	if (fecha >= SIGNS[7][1] && fecha <= SIGNS[7][2])
	{
		fi = SIGNS[7][1].substr(4, 2) + "/" + SIGNS[7][1].substr(6, 2) + "/" + SIGNS[7][1].substr(0, 4);

	}

	if (fecha >= SIGNS[8][1] && fecha <= SIGNS[8][2])
	{
		fi = SIGNS[8][1].substr(4, 2) + "/" + SIGNS[8][1].substr(6, 2) + "/" + SIGNS[8][1].substr(0, 4);

	}

	return fi;


}

// Determines the final date
string Horoscopo::getFechaFinal() const 
{
	string fecha, ff;

	fecha = dob.substr(6, 4) + dob.substr(0, 2) + dob.substr(3, 2); // Formats that changes the date of birth.

	// Ranges to determine which final date of the Horoscope will print based on the date entered by the user.

	if (fecha >= SIGNS[0][1] && fecha <= SIGNS[0][2])
	{
		ff = SIGNS[0][2].substr(4, 2) + "/" + SIGNS[0][2].substr(6, 2) + "/" + SIGNS[0][2].substr(0, 4);
	}

	if (fecha >= SIGNS[1][1] && fecha <= SIGNS[1][2])
	{
		ff = SIGNS[1][2].substr(4, 2) + "/" + SIGNS[1][2].substr(6, 2) + "/" + SIGNS[1][2].substr(0, 4);

	}

	if (fecha >= SIGNS[2][1] && fecha <= SIGNS[2][2])
	{
		ff = SIGNS[2][2].substr(4, 2) + "/" + SIGNS[2][2].substr(6, 2) + "/" + SIGNS[2][2].substr(0, 4);

	}

	if (fecha >= SIGNS[3][1] && fecha <= SIGNS[3][2])
	{
		ff = SIGNS[3][2].substr(4, 2) + "/" + SIGNS[3][2].substr(6, 2) + "/" + SIGNS[3][2].substr(0, 4);

	}

	if (fecha >= SIGNS[4][1] && fecha <= SIGNS[4][2])
	{
		ff = SIGNS[4][2].substr(4, 2) + "/" + SIGNS[4][2].substr(6, 2) + "/" + SIGNS[4][2].substr(0, 4);

	}

	if (fecha >= SIGNS[5][1] && fecha <= SIGNS[5][2])
	{
		ff = SIGNS[5][2].substr(4, 2) + "/" + SIGNS[5][2].substr(6, 2) + "/" + SIGNS[5][2].substr(0, 4);

	}

	if (fecha >= SIGNS[6][1] && fecha <= SIGNS[6][2])
	{
		ff = SIGNS[6][2].substr(4, 2) + "/" + SIGNS[6][2].substr(6, 2) + "/" + SIGNS[6][2].substr(0, 4);

	}

	if (fecha >= SIGNS[7][1] && fecha <= SIGNS[7][2])
	{
		ff = SIGNS[7][2].substr(4, 2) + "/" + SIGNS[7][2].substr(6, 2) + "/" + SIGNS[7][2].substr(0, 4);

	}

	if (fecha >= SIGNS[8][1] && fecha <= SIGNS[8][2])
	{
		ff = SIGNS[8][2].substr(4, 2) + "/" + SIGNS[8][2].substr(6, 2) + "/" + SIGNS[8][2].substr(0, 4);

	}

	return ff;


}

// Method that determines which is the sign the date belongs too.

void Horoscopo::computeSign()
{
	string fecha;

	fechaValida = true;

	fecha = dob.substr(6, 4) + dob.substr(0, 2) + dob.substr(3, 2); // format that changes the date of birth.

	
	// Ranges used to determined which final date of the Horoscope will print based on the user input.

	if (fecha >= SIGNS[0][1] && fecha <= SIGNS[0][2])
	{
		signo = SIGNS[0][0];
	}
	else
	if (fecha >= SIGNS[1][1] && fecha <= SIGNS[1][2])
	{
		signo = SIGNS[1][0];

	}
	else
	if (fecha >= SIGNS[2][1] && fecha <= SIGNS[2][2])
	{
		signo = SIGNS[2][0];

	}
	else
	if (fecha >= SIGNS[3][1] && fecha <= SIGNS[3][2])
	{
		signo = SIGNS[3][0];

	}
	else
	if (fecha >= SIGNS[4][1] && fecha <= SIGNS[4][2])
	{
		signo = SIGNS[4][0];

	}
	else
	if (fecha >= SIGNS[5][1] && fecha <= SIGNS[5][2])
	{
		signo = SIGNS[5][0];

	}
	else
	if (fecha >= SIGNS[6][1] && fecha <= SIGNS[6][2])
	{
		signo = SIGNS[6][0];

	}
	else
	if (fecha >= SIGNS[7][1] && fecha <= SIGNS[7][2])
	{
		signo = SIGNS[7][0];

	}
	else
	if (fecha >= SIGNS[8][1] && fecha <= SIGNS[8][2])
	{
		signo = SIGNS[8][0];

	}
	else
	{
		fechaValida = false;

	}


}


// Method that prints the information
void Horoscopo::display() 
{

	if (!fechaValida)
	{
		cout << "Signo no encontrado. Actualizar mi base de datos." << "\n\n";

	}

	else {
		cout << "Signo: " << getSigno() << endl;
		cout << "Fecha de Nacimiento: " << getDOB() << endl;
		cout << "Periodo de Fecha: " << getFechaInicial() << " - " << getFechaFinal() << endl;
	}

}