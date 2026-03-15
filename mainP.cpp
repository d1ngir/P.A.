#include <iostream>
#include "persona.h"

using namespace std;

int main()
{
	Persona pa{"Jossy", 60};

	cout << "Datos de la persona: " << endl;
	cout << pa.getDatos() << endl;

	cout << "Fin  del programa..." << endl;

	return 0;
}
