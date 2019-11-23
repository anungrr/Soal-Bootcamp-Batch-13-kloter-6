#include <iostream>
using namespace std;

int main(){
	int i,j;
	int min,max;
	int n[5]={2,3,4,5,6};
	
	for(i = 0; i < 5; i++){		
		cout << "Angka " << i + 1 << " : ";
		int sum = 0;
		for(j = 0; j < 5; j++){
			if(i == j)
			j++;
			
			if(j == 5)
			break;
			
			cout << n[j];
			
			if (j < 4)
			cout << " + ";
			
			sum += n[j];			
		}
		cout << " = ";	
		cout << sum;
		cout << "\n";
		
		if ( i == 0 ) {
	        min = sum;
    	    max = sum;
   		}
    	else if ( min > sum ) {
    	    min = sum;
    	}
    	else if ( max < sum) {
    	    max = sum;
    	}
	}
	cout << endl;
	cout << "Nilai terkecil           = " <<  min << endl;
   	cout << "Nilai terbesar           = " <<  max << endl;
	cout << endl;
	
	
}

