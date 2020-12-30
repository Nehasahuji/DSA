#include<iostream>
#include<stdio.h>
using namespace std;

int binary_search(int n , int arr[] ,int key){
	int s=0;
	int e=n;
	int mid  ;
	while(s<=e){
		   
		   mid = (s+e)/2 ;
		  // cout << "mid is"<< mid << endl;
		   if(arr[mid]>key){
			e=mid -1;
			
			//s=mid + 1;	
			}
			else if(arr[mid]<key){
			s=mid + 1;
			//e=mid -1;
			}
			else{
				return 0;
			}
	// cout << mid;
	}
		return -1;	
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0 ;i < n; i++){
	cin >> arr[i];
	}
	
	int key;
	cin >> key;
	
	cout << binary_search(n,arr,key);
}
