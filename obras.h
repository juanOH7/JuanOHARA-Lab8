#pragma once
#include <string>

using std::string;

class Obras{
	string nombre;
	string autor;
	string fecha;
public:
	Obras(string, string, string);
	virtual string toString()const;
	virtual~Obras();
	
};