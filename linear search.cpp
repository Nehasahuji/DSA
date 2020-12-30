#include<iostream>
#include<conio.h>
using namespace std;

int linear_search(int n,int arr[], int key){
	for(int i=0 ;i < n ;i++){
		if(arr[i] == key){
			return 0;
			
		}
	}
	
	return -1;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n ;i++){
		cin >> arr[i];
	}
	
	int key;
	cin >> key;
	
	if(linear_search(n, arr ,key)==0){
		cout << "key found";
		
	}
	else{
		cout << "key not found";
	}
	
	
	
}
