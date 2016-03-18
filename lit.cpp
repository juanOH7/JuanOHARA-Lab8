#include <string>
#include "lit.h"
#include <sstream>
using std::string;
using std::stringstream;

Lit::Lit(string autor, string nombre, string fecha, string gen, string epoca):Obras(autor, nombre, fecha), gen(gen), epoca(epoca){
}

Lit::~Lit(){
}

string Lit::toString() const
{
	stringstream ss;
	ss << Obras::toString() << "-" << gen << "-" << epoca;
	return ss.str();
}