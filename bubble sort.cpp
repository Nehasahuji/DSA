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
   int counter = 0;
   while(counter < n){
   	for(int i = 0; i <  n -counter-1  ; i++){
   		if(arr[i]<arr[i+1]){
   			int tmp;
   			tmp = arr[i];
   			arr[i]=arr[i+1]; 
   			arr[i+1] = tmp;
		   }
	   }
	 counter ++;
   }
	


cout << "after sorting array" << endl;

for(int i=0 ; i<n ;i++){
		cout <<  arr[i] << " ";
	}
	
	
}
//bubble sort 

//1 3 7 9 0
//3 1 7 9 0


//counter  = 0

