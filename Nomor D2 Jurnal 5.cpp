#include <iostream>
using namespace std;
int main(){
	
	int input,total ;
	
	cout<<"Masukkan angka:";
	cin>>input;
	
	for (int i = 1; i<=input; i++){
		total = input * i ;
		cout<<input << " x " << i << " = "<< total << endl ;
	}
}
