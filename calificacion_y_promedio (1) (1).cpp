// incluir la libreria 
# include <iostream>
/*  utilizar todas las  caracteres y  funciones
de la libreria 
*/ 
using namespace std;
// funcion principal
int main(){ 

	int (a,b,c,'d','e'suma, promedio;
	cout<<"Bienvenido a esta rutina en la cual calculara tu promedio"<<endl;
	cout<<"por favor digita la primera evaluacion"<<endl;
	cin>>a;
	cout<<"por favor digita la segunda evaluacion"<<endl;
	cin>>b;
	cout<<"por favor digita la tercera evaluacion"<<endl;
	cin>>c;
	cout<<"por favor digita la cuarta evaluacion"<<endl;
	cin>>d;
	cout<<"por favor digita la quinta evaluacion"<<endl;
    cin>>e;
    promedio = (a+b+c+d+e)/5;
    cout<<"tu promedio general es de:"<<promedio<<endl;
    if(promedio>=7){
    	cout<<"tu calificacion es aprobatoria"<<endl;
		}
		else{
		cout<<"lo lamento tu califiacion no es aprobatoria";	
       }
	cout<<"gracias por usar esta aplicacion";
    return 0;  
    
}
