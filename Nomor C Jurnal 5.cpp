#include <iostream>
using namespace std;

int main(){
	int JumlahTransaksi, Transaksi, TotalTransaksi = 0;
	
	cout<<"Berapa banyak transaksi hari ini?";
	cin>>JumlahTransaksi;
	
	for (int i = 1; i<=JumlahTransaksi; i++){
	
	cout<<"Masukkan total transaksi ke-"<< i <<":";
	cin>>Transaksi;
	
	TotalTransaksi = TotalTransaksi + Transaksi;
   }
   
   cout<<"Total Transaksi: Rp."<< TotalTransaksi;
}
