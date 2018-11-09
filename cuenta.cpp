#include <iostream>
#include <fstream>

using namespace std;

char* nombreArchivo;
char* nombreCuenta;
char* nombreTiempo;


int main(int argc, char** argv)
{
	nombreArchivo=argv[1];
	nombreCuenta=argv[2];
	nombreTiempo=argv[3];

	std::cout <<nombreArchivo<<", "<<nombreCuenta<<", "<<nombreTiempo<<"\n";



	ofstream cuentatxt;
	cuentatxt.open (nombreCuenta);
	cuentatxt << "Probando.\n";
	cuentatxt.close();

	string line;
	string txt;
	ifstream archivotxt (nombreArchivo);
	if (archivotxt.is_open())
	{
		while ( getline (archivotxt,line) )
		{
			txt=txt+ line;
		}
		archivotxt.close();
		cout<<txt;
	}

	else cout << "No se pudo abrir el archivo\n"; 

	return 0;

}
