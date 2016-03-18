#pragma once
#include "obras.h"
#include <string>

using std::string;

class Lit:public Obras{
	string gen;
	string epoca;
public:
	Lit(string, string, string, string, string);
	virtual~Lit();
	virtual string toString() const;
};