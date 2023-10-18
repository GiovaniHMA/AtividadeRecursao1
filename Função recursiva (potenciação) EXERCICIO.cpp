#include <iostream>
using namespace std;

int potencia (int a, int b){
	if (b == 0){
		return 1;
	}
	else {
		return a * potencia (a , b - 1);
	}
}

int main(){
	int a;
	int b;
	cout <<"Digite o valor da base: " << endl;
	cin >> a;
	cout <<"Digite o valor do expoente: " << endl; 
	cin >> b;

	cout << "A base elevado ao expoente e: " << potencia(a,b) << endl;
	
	return 0;
}
