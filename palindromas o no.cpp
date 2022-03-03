#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;


void leeArchivo()
{
	ifstream archivo;
	string oracion;
	string palindroma;
	int i=0;
	
	archivo.open("entrada.txt");
	if (archivo.is_open())
	{
		cout << "El archivo esta abierto" << endl;
		while(!archivo.eof()) {
			getline(archivo,oracion);
			cout << oracion << "\n";
		}
		archivo.close();
	} else 
	{
		cout << "No se pudo abrir el archivo";	
	}
	ofstream archivo2;
	archivo2.open("salida.txt", ios_base::out);
	if (archivo2.is_open()) 
	{
		for (i=oracion.size()-1 ; i>=0;i--){
			palindroma += oracion[i];
		}
		if (oracion==palindroma){
			cout<<"La palabra es palindroma"<<endl;
			archivo2<<"La palabra es palindroma"<<endl;
		}
		else{
			cout<<"La palabra no es palindroma"<<endl;
			archivo2<<"La palabra no es palindroma"<<endl;
		}
		archivo2.close();
	}
}

int main() {
	
	cout<<"NOTA: Cuando ingrese una palabra en el archivo 'entrada' las mayusculas pueden afectar el resultado asi que se recomienda utilizar unicamente minusculas"<<endl;
	cout<<""<<endl;
	leeArchivo();
	return 0;
}
