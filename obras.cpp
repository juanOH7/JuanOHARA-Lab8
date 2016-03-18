#include <string>
#include "obras.h"
#include <sstream>
using std::string;
using std::stringstream;

Obras::Obras(string autor, string nombre, string fecha):autor(autor), nombre(nombre), fecha(fecha){
}

Obras::~Obras(){
}

string Obras::toString() const
{
	stringstream ss;
	ss << autor <<"-" << nombre << "-" << fecha;
	return ss.str();
}