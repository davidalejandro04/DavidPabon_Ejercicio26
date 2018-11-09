#include <iostream>
#include <fstream>
#include <stdlib.h> 
#include <ctime>
using namespace std;

char* nombreArchivo;

void partesIguales(int N);

int main(int argc, char** argv)
{
	int nPartes;
	nPartes=atof(argv[2]);
	nombreArchivo=argv[1];
	partesIguales(nPartes);

	return 0;

}
	

void partesIguales(int N)
{

	string line;
	string text;
	ifstream archivotxt (nombreArchivo);
	if (archivotxt.is_open())
	{
		while ( getline (archivotxt,line) )
		{
			text=text+ line;
		}
		archivotxt.close();
	}
	else cout << "No se pudo abrir el archivo_2\n"; 

	const int sizeparte=text.size()/N;
	char partes [N][sizeparte];
	int i;
	int j;

	for(j=0;j<N;j++)
	{
		ofstream archivito;
		char buffer [50];
		sprintf (buffer, "%d-p%d.txt",N,j+1);
		archivito.open (buffer);

		for(i=0;i<=sizeparte;i++)
		{
			archivito<<""<<text[j*sizeparte+i];
		}

		
		archivito.close();
		

	}


}

