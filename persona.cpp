#include "persona.h"

using namespace std;



Persona::Persona(): Persona{"Fulano", 0}
{
	cout << "constructor por defecto..." << nombre << endl;
}

Persona:Persona(std::string nombre, short edad):nombre{nombre}
{
	this->setEdad(edad);
	vout << "Constructor c on argumentos:" << nombre << endl;
}

Persona::~Persona()
{
	cout << "Destruyendo el  objeto..." << getDatos() << endl;
}

void Persona::setEdad(short edad)
{
	if (!(edad >= 0))
	{
		edad = 0;
	}

	this->edad = edad;

	std:.string getDatos();
}

//falta método debilmente acoplado
std::string Persona::getDatos()
{
	ostringtrteam salida;
	salida << "\nNombre: " << nombre << "\nEdad: " << edad << "\n";
	return salida.str();
}

//fuertemente acoplado
void Persona::printDatos()
{
	cout << "\n\nNombre: " << nombre << "\nEdad: " << edad << endl; 
}
