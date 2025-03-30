#include <iostream>
using namespace std;
// metodos y funciones = ejecutan una porcion de codigo N cantidad de veces segun se mande a llamar
// metodo = no retorna un valor
// funcion = retorna un tipo de dato determinado
// 80 lineas de codigo en 10 lugares distintos = 800 lineas de codigo
// de las cuales 80 son iguales
// crean una funcion o un metodo = y lo manda a llamar 10 veces = 80 lineas de codigo y 10 llamadas a funciones

// funcion que sume 2 valores

/*int suma(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}
/*int resta(int num1,int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}*/

/*int suma(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}

int suma(int num1,int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;*/


//Función que sume dos valores
int suma(int num1,int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
// Metodo y envio de parametros por valor y referencia
void suma(int &num1,int &num2){
	int resultado = 0;
	num1+=1; // 11
	num2+=1; // 21
	resultado = num1+num2; // 32
	cout<<resultado<<endl;
}

main(){
int a=10,b = 20;	
suma(a,b);
cout<<"a: "<<a<<endl;
cout<<"b: "<<b<<endl;

	
	system("pause");
	
	
	
}
