#include <iostream>
using namespace std;

//membuat fungsi nya
void Voucher(int x,int y){
	int bayar,diskon,kembalian;
	
	switch(x){
		case 1:	
			if(y>=20000){
				diskon=0.40*y;
				if(diskon>20000){
					diskon=20000;
				}
			}else
			diskon=0;
			
			break;
		case 2:
			if(y>=50000){
				diskon=0.30*y;
				if(diskon>40000){
					diskon=40000;
				}
			}else
			diskon=0;
			
			break;
		default:
			cout << "Maaf hanya tersedia 2 vocer" << endl;
			break;
	}
	
	bayar=y-diskon;
	kembalian=y-bayar;
	
	if(diskon == 0){
		cout << "Maaf Vocer tidak bisa di pakai" << endl;
	}
	
	cout << "\n \n";
	cout << "Uang Yang Harus Di Bayar : " << bayar << endl;
	cout << "Diskon : " << diskon << endl;
	cout << "Kembalian : " << kembalian << endl;
}

//membuat vocer
int main(){
	int belanja,pilih;
	
	cout << "Masukan Uang Belanja : ";
	cin >> belanja;
	cout << "Masukan Vocer Belanja \n1.DumbWaysAsik \t 2.DumbWaysMantap \n: ";
	cin >> pilih;
	
	Voucher(pilih,belanja);
	
	
}
