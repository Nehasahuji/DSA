#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
	int n;
	cout << "enter size of array :" << endl;
	cin >> n;
	int arr[n];
	cout << "enter an unsorted array" << endl;
	for(int i=0 ; i<n ;i++){
		cin >> arr[i];
}

   for(int i = 1 ; i<n; i++){
   	   int current =arr[i];
   	   int j=i-1;
   	   while(arr[j]>current && j>=0)
   	      {  
			 arr[j+1]=arr[j];
			 j--;
   	      	    
			 }
			 
			 arr[j+1]=current;
   	   
   	   
   }
	
	
	
  
cout << "after  insertion sorting array" << endl;

for(int i=0 ; i<n ;i++){
		cout <<  arr[i] << " ";
	}
	
	
}
//bubble sort 

//1 3 7 9 0
//3 1 7 9 0


//counter  = 0

