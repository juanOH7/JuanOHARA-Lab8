#pragma once
#include "obras.h"
#include <string>

using std::string;

class Pint:public Obras{
	string materialLin;
	string tecn;
public:
	Pint(string, string, string, string, string);
	virtual~Pint();
	virtual string toString() const;
};