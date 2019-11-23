#include <iostream>
using namespace std;

void BuyEgg(int x, int y){
	
	int telur, lusin, sisa, bonus, total, kembalian;
	int ganjil, genap, prima, kel5;
	int ganjil1, genap1;
	
	telur = y / 2500;
	lusin = telur / 12;
	kembalian = y % 2500;
	
	if (kembalian < 12)
	sisa = kembalian;
	
	if (x > 0 && x <= 31){
		
		prima = 1;
		for( int i = 2; i < x; i++) {
			if (x % i == 0 )
			prima = 0;
		}
		
		if (x % 2 == 1)
		ganjil = 1;
		
		bonus = 0;
		if (prima){
			bonus = lusin * 2;
		} else if (ganjil != prima){
			bonus = lusin * 3;
		}
		
		kel5 = 0;
		for ( int i = 0; i <= x; i++){
			if (x % 5 == 0){
				kel5 = 1;
			}	
		}

		if (kel5){
			if (bonus % 2 == 0){
				bonus = bonus * 10;
			}else{
				bonus = bonus * 5;
			}
		}
		
		total = telur + bonus + sisa;
		cout << "Total Semua Telur	: " << total << " Telur" << endl;
		cout << "Dan Kembalian		: " << kembalian << " Rupiah" << endl;
			
	} else {
		cout << "Maaf tidak ada Tanggal segitu" << endl;
		cout << endl;
		
	}
}

int main(){
	
	int tgl, bayar;
	
	cout << "Masukan Tanggal Pembelian	: ";
	cin >> tgl;
	cout << "Masukan Uang Anda		: ";
	cin >> bayar;
	cout << endl;
	
	BuyEgg(tgl,bayar);
	 
	
}





