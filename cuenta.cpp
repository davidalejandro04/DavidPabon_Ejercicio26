#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

char* nombreArchivo;
char* nombreCuenta;
char* nombreTiempo;

int contarString(const std::string& str, const std::string& sub);
char **partesIguales(int N);

int main(int argc, char** argv)
{
	nombreArchivo=argv[1];
	nombreCuenta=argv[2];
	nombreTiempo=argv[3];

	clock_t begin = clock();


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
	}
	else cout << "No se pudo abrir el archivo\n"; 

	string a="1";
	string b="12";
	string c="123";
	string d="1234";
	string e="12345";


	ofstream cuentatxt;
	cuentatxt.open (nombreCuenta);

	cuentatxt<<contarString(txt,a)<<"\n"<<contarString(txt,b)<<"\n"<<contarString(txt,c)<<"\n"<<contarString(txt,d)<<"\n"<<contarString(txt,e)<<"\n";


	ofstream tiempotxt;
	tiempotxt.open(nombreTiempo);

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	tiempotxt<<elapsed_secs<<"\n";

	int ns[3]={10,20,100};	
	int n;
	for(n=0;n<=2;n++)
	{

		int N=ns[n];
		clock_t begin = clock();

		const int sizeparte=txt.size()/N;
		char partes [N][sizeparte];
		int i;
		int j;
		for(i=0;i<=sizeparte;i++)
		{
			for(j=0;j<N;j++)
			{
				partes[j][i]=txt[j*sizeparte+i];
			}	
		}
		for(i=0;i<N;i++)
		{

			char* temp=partes[i];
			string s=temp;
			contarString(txt,a);
			contarString(txt,b);
			contarString(txt,c);
			contarString(txt,d);
			contarString(txt,e);


		}
		
		clock_t end = clock();
		double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
		tiempotxt<<elapsed_secs<<"\n";
	}
	cuentatxt.close();
	tiempotxt.close();

	return 0;

}



int contarString(const std::string& str, const std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
	 offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}

char **partesIguales(int N)
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
	for(i=0;i<=sizeparte;i++)
	{
		for(j=0;j<N;j++)
		{
			partes[j][i]=text[j*sizeparte+i];
		}	
	}


}


