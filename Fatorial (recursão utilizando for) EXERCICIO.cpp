#include <iostream>
using namespace std;

int fatorial (int n){
	int fat=1;
	for (int i=1; i<=15;++i){
		fat*=i;
	}
	return fat;
}

int main(){
	cout << fatorial(15) << endl;
	return 0;
}

