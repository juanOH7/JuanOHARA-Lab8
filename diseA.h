#pragma once
#include "obras.h"
#include <string>

using std::string;

class DiseA:public Obras{
	string tipoTecn;
public:
	DiseA(string, string, string, string);
	virtual~DiseA();
	virtual string toString() const;
};