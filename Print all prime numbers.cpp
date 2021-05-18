///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  print all the numbers between the 1 and the number
//  example I/O 10
//  Output  2 3 5 7
//  Genral solution
//  Time complexity O(n^3/2)
///////////////////////////////////////////////////////////////////////////////////////////////////////



#include <iostream>
using namespace std;

bool isPrime(int n){
    
       if(n==1){
           
            return false;
        }
        
 for(int i=2 ; i*i<=n ; i++){
      if(n%i==0){
            
            return false;
        }
        
    }
    
    return true;
}

int main() {
	int num;
	cin >>num;
	for(int i=1 ; i<=num ; i++){
	    
	    if(isPrime(i)){
	        cout << i <<" ";
	    }
	}
	
}
