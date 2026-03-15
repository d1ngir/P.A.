#ifndef PERSONA_H
#define PERSONA_H


#include <string>


class Persona
{
	private:
	std::string nombre;
	short edad;
	
	public:
	Persona();
	Persona(std::string, short);
	~Persona();

	inline std::string getNombre()const {return nombre};
	inline short getEdad()const{return edad;}
	
	inline void setNombre(std::string nombre) {this->nombre = nombre};
	void setEdad(short);

	std::string getDatos();
	void printDatos();		
};


#endif // PERSONA_H
