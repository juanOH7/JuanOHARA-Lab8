#include <string>
#include "esc.h"
#include <sstream>
using std::string;
using std::stringstream;

Esc::Esc(string autor, string nombre, string fecha, string peso, string material):Obras(autor, nombre, fecha), peso(peso), material(material){
}

Esc::~Esc(){
}

string Esc::toString() const
{
	stringstream ss;
	ss << Obras::toString() << "-" << peso << "-" << material;
	return ss.str();
}