#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int numero [200][200], filas, columnas;
	int suma;
	cout<<"mostrar los numero de filas: ";	
	cin>>filas;
	cout<<"mostrar los numero de columnas: ";
    cin>>columnas;
    
	
		for(int i=0;i<filas;i++){
    	for(int j=0;j<columnas;j++){
			cout<<"mostrar un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numero[i][j];
			suma+= numero [i][j];
			
		}
	} 
	cout<< "la suma de la matriz es:"<<suma;
	if (suma% 2==0)	
	{
   cout<< "la suma no es un valor primo"<<suma;
		}
	cout<< "valor primo"<<endl;
	cout<< "mostrar numero"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numero[i][j];
		}
		cout<<"\n";
		system("pause");
		
	}
	
	
	getch();
	return 0;
}
	
 
