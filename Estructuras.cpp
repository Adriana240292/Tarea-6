#include <iostream>
using namespace std;
// estructuras struct (una forma de agrupar varias variables relacionadas en un solo lugar)

struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};

main(){


	
	/*for (int i=0;i<4;i++){
		cout<<"_________________________"<<endl;
		cout<<"Ingrese Codigo: ";
	cin>>alumno.codigo[i];
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,alumno.nombre[i]);
	cout<<"Ingrese Nota: ";
	cin>>alumno.nota[i];
	}
	
	for (int i=0;i<4;i++){
		cout<<"_________________________"<<endl;
		cout<<"Codigo :"<<alumno.codigo[i]<<endl;
	cout<<"Nombre Completo :"<<alumno.nombre[i]<<endl;
	cout<<"Nota :"<<alumno.nota[i]<<endl;
	}*/
	
	Estudiante alumno;
	
	int fila = 0, columna = 0;
	cout<<"Cuantos Estudiantes desea Agregar: ";
	cin>>fila;
	
	cout<<"Cuantas notas por Estudiante desea Agregar: ";
	cin>>columna;
	
	alumno.codigo = new int [fila];
	alumno.nombre = new string [fila];
	alumno.notas = new int *[fila];
	for (int i=0;i<fila;i++){
		alumno.notas[i] = new int[columna];
		
	}
	cout<<"_________________Ingreso de Notas _________________"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]:";
		cin>>alumno.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<"]:";
		getline(cin,alumno.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"] :";
			cin>>*(*(alumno.notas+i)+ii);
				}
				
				cout<<"________________________________"<<endl;
	}
	cout<<"________________-Mostrar datos_________________ "<<endl;
	
	for (int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]:"<<alumno.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<"]:"<<alumno.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"] :"<<*(*(alumno.notas+i)+ii)<<endl;
				}
				
				cout<<"________________________________"<<endl;
	
	}
	
	for (int i=0;i<fila;i++){
		delete [] alumno.notas[i] ;
		
	}
	delete [] alumno.codigo ;
	delete [] alumno.nombre ;
	delete [] alumno.notas ;
	
	
	
	
}	
