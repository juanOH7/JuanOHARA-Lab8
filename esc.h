#pragma once
#include "obras.h"
#include <string>

using std::string;

class Esc:public Obras{
	string peso;
	string material;
public:
	Esc(string, string, string, string, string);
	virtual~Esc();
	virtual string toString() const;
};