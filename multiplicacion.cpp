#include "iostream"
#include "conio.h"
using namespace std;

int main(){
	int numero;
	
	cout<<"Por favor agregue el numero de multiplicacion de la tabla:"<<end1;
	cin>>numero;
	
	for(int i=1;i<=10;i++){
		int multiplicacion = i * numero;
		cout<<numero <<" x "<< i <<"="<< multiplicacion <<end1;
	}
	return 0;
}
