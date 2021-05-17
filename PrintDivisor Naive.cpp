
//////////////////////////////////////////////////////
//  print all the divisors of A no in sorted order  //
//  n = 15                                          //
//  o/p 1 3 5 15                                    //
//  Optimised Solutrion                             //
//////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void printDivisor(int n){
  for(int itr=1 ; itr<=n ;  itr++){
  	if(n%itr==0){
  		cout << itr << " ";
	  }
  }	
 	
}


int main(){
	
	int n;
	cin >> n;
	
	printDivisor(n);
	return 0;
}





