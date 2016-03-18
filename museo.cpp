#include "obras.h"
#include "lit.h"
#include "esc.h"
#include "diseA.h"
#include "pint.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;

void agregarObra(string&, string&, string&);

int main(int argc, char const *argv[])
{
	vector<Obras> inventario;
	vector<Obras> tranferidos;
	int opcMen, posTrans;
	string nombre, autor, fecha, gen, epoca, peso, material, materialLin, tecn, tipoTecn;
	do
	{
		cout << "1-)Agregar\n2-)Tranferir\n3-)Listar\n4-)Salir\n";
		cin >> opcMen;
		if (opcMen == 1)
		{
			cout << "1-)Literatura\n2-)Escultura\n3-)Pinturas\n4-)Diseños A\n";
			cin >> opcMen;
			if (opcMen == 1)
			{
				agregarObra(nombre, autor, fecha);
				cout << "Género: ";
				getline(cin,gen);
				cout << "Época: ";
				getline(cin,epoca);
				Lit libro(nombre, autor, fecha, gen, epoca);
				inventario.push_back(libro);
			}
			else if (opcMen == 2)
			{
				agregarObra(nombre, autor, fecha);
				cout << "Peso: ";
				getline(cin,peso);
				cout << "Material: ";
				getline(cin,material);
				Esc escultura(nombre, autor, fecha, peso, material);
				inventario.push_back(escultura);
			}
			else if (opcMen == 3)
			{
				agregarObra(nombre, autor, fecha);
				cout << "Material del Lienzo: ";
				getline(cin,materialLin);
				cout << "Técnica de la Pintura: ";
				getline(cin,tecn);
				Pint pintura(nombre, autor, fecha, materialLin, tecn);
				inventario.push_back(pintura);
			}else if (opcMen == 4)
			{
				agregarObra(nombre, autor, fecha);
				cout << "Tipo de Técnica: ";
				getline(cin,tipoTecn);
				DiseA dise(nombre, autor, fecha, tipoTecn);
				inventario.push_back(dise);
			}
		}
		else if (opcMen == 2)
		{
			for (int i = 0; i < inventario.size(); ++i)
			{
				cout << (i+1) << inventario.at(i).toString() << "\n";
			}
			cout << "Seleccione un Obra para Tranferir, Bitte\n";
			cin >> posTrans;
			tranferidos.push_back(inventario.at(posTrans-1));
			inventario.erase(inventario.begin() + (posTrans-1));
		}
		else if (opcMen == 3)
		{	
			cout << "Invetario\n";
			for (int i = 0; i < inventario.size(); ++i)
			{
				cout << inventario.at(i).toString()<< "\n";
			}
			cout << "Tranferidos\n";
			for (int i = 0; i < tranferidos.size(); ++i)
			{
				cout << tranferidos.at(i).toString() << "\n";
			}	
		}
	} while (opcMen != 4);
	return 0;
}

void agregarObra(string& nombre, string& autor, string& fecha)
{
	cin.ignore();
	cout << "Nombre de Obra: ";
	getline(cin,nombre);
	cout << "Nombre de Autor: ";
	getline(cin,autor);
	cout << "Fecha: ";
	getline(cin,fecha);
}