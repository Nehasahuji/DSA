///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  print all the numbers between the 1 and the number
//  example I/O 10
//  Output  2 3 5 7
//  Optimised solution
//  using sieve algorithym
//  Time complexity O(nloglogn)
///////////////////////////////////////////////////////////////////////////////////////////////////////



#include <iostream>
#include<vector>
using namespace std;

void shieve(int n){
	
	vector<bool> isPrime(n+1,true);
	
	for(int i=2 ; i<=n ; i++){
		
		if(isPrime[i]){
		
	  cout << i << " ";
}
	  for(int j=i*i ; j <=n ;j=j+i){
	  	isPrime[j]=false;
	  }
	
	
}

}

int main() {
	int num;
	cin >>num;
    shieve(num);
	return 0;
	
}
