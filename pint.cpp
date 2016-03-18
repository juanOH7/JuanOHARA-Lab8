#include <string>
#include "pint.h"
#include <sstream>
using std::string;
using std::stringstream;

Pint::Pint(string autor, string nombre, string fecha, string materialLin, string tecn):Obras(autor, nombre, fecha), materialLin(materialLin), tecn(tecn){
}

Pint::~Pint(){
}

string Pint::toString() const
{
	stringstream ss;
	ss << Obras::toString() << "-" << materialLin << "-" << tecn;
	return ss.str();
}