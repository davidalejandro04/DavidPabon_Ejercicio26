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

}
