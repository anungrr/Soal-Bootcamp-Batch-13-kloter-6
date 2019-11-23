#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Generate(int x){
	int i, j, k, r, a, n;
	char c;
	
	srand (time(NULL));    
    for (i = 0; i < x; i++){
    	
		for (j = 0; j < 4; j++){
			
			for (k = 0; k < 4; k++){
				n = rand() % 2;
				
				if(n == 0){
					a = rand() % 10;
					cout << a;
				}
				else if(n == 1){
					r = rand() % 26; 
        			c = 'a' + r;       
    				cout << c;
				}
			}
			if(j != 3){
				cout << "-";
			}
		}
		cout << endl;
    }
}

int main(){
	int num;
	
	cout<<"Berapa Banyak Serial Number yg Kamu Mau? : ";
	cin>>num;
    cout << endl;
    Generate(num);
    
    
}





