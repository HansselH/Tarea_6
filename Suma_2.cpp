#include<iostream>
using namespace std;

	int suma(int num1, int num2){
		int resultado=0;
		resultado=num1+num2;
		return resultado;
	}
	
	int suma(int num1, int num2, int num3){
		int resultado=0;
		resultado=num1+num2;
		return resultado;
	}

main(){
	cout<<suma(10, 20)<<endl;
	cout<<suma(30, 340, 2)<<endl;

	system("pause");
}
