#include <iostream>
using namespace std;
// metodos y funciones = ejecutan una porcion de codigo N cantidad de veces segun se mande a llamar
// metodo = no retorna un valor
// funcion = retorna un tipo de dato determinado
// 80 lineas de codigo en 10 lugares distintos = 800 lineas de codigo
// de las cuales 80 son iguales
// crean una funcion o un metodo = y lo manda a llamar 10 veces = 80 lineas de codigo y 10 llamadas a funciones

// funcion que sume 2 valores
int suma(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}
main(){
	
cout<<suma(10,20)<<endl;
cout<<suma(50,70)<<endl;
cout<<suma(90,10)<<endl;	

	
	system("pause");
	
	
	
}
