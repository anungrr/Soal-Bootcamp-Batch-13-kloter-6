#include<iostream>
using namespace std;

void HitungKembalian(int x, int y){
	
	int lembar50rb = 0;
	int lembar20rb = 0;
	int lembar10rb = 0;
	int lembar5rb = 0;
	int lembar2rb = 0;
	int lembar1rb = 0;
	int lembar500 = 0;
	int a,b,c,d,e,f,g;
	
	if (y < x){
		cout << "Maaf Uang Anda Kurang" << endl;
	}
	if (y > x){
		int kembalian = y - x;
	
		lembar50rb = kembalian%50000;
		a = kembalian/50000;
	
		lembar20rb = lembar50rb%20000;
		b = lembar50rb/20000;
	
		lembar10rb = lembar20rb%10000;
		c = lembar20rb/10000;
	
		lembar5rb = lembar10rb%5000;
		d = lembar10rb/5000;
	
		lembar2rb = lembar5rb%2000;
		e = lembar5rb/2000;
	
		lembar1rb = lembar2rb%1000;
		f = lembar2rb/1000;
	
		lembar500 = lembar1rb%500;
		g = lembar1rb/500;
	
		cout <<a<< " x lembar Rp.50000" <<endl;
		cout <<b<< " x lembar Rp.20000" <<endl;
		cout <<c<< " x lembar Rp.10000" <<endl;
		cout <<d<< " x lembar Rp.5000" <<endl;
		cout <<e<< " x lembar Rp.2000" <<endl;
		cout <<f<< " x lembar Rp.1000" <<endl;
		cout <<g<< " x Koin Rp.500" <<endl;
	}
}

int main (){
	
	int bayar,belanja;
	cout << "Masukan Nominal Pembayayar	: ";
	cin >> bayar;
	cout << "Masukan Tagihan Pembayaran	: ";
	cin >> belanja;
	cout << "\n\n";
	
	HitungKembalian(belanja,bayar);
	
	
}
