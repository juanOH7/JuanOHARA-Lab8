#include <string>
#include "diseA.h"
#include <sstream>
using std::string;
using std::stringstream;

DiseA::DiseA(string autor, string nombre, string fecha, string tipoTecn):Obras(autor, nombre, fecha), tipoTecn(tipoTecn){
}

DiseA::~DiseA(){
}

string DiseA::toString() const
{
	stringstream ss;
	ss << Obras::toString() << "-" << tipoTecn;
	return ss.str();
}