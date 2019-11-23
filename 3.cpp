#include <iostream>
#include<bits/stdc++.h> 
using namespace std; 

void DrawLine(string kata, int size){ 
	
	for (int i = 0; i < size; i++){ 
         
		for (int j = 0; j < size; j++){ 
			if (j == i) 
			cout << kata[j]; 
		else
		cout << "  "; 
		} 
	cout << endl;        
	} 
}
  

int main (){ 
	string kata;
	cout << "Masukan Kata : ";
	cin >> kata;
	cout << endl;
	int size = kata.size(); 
 	
 	DrawLine(kata, size); 
  
    
} 
