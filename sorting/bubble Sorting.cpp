#include<iostream>
using namespace std;

bubbleSort(int arr[],int n){
	int count=1;
	while(count<n){
		for(int i=0;i<n-count;i++){
			if(arr[i]>arr[i+1]){
				int temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		count++;
	}
	
	for(int i=0;i<n;i++){
   	cout << arr[i] << " ";
   }
  	
}

int main(){

   int arr[] = {4,6,1,2,5,7};
   int n=sizeof(arr)/sizeof(arr[0]);
   
    cout << "before sorting of array: ";
   
   for(int i=0;i<n;i++){
   	cout << arr[i] << " ";
   }
  	
  cout <<endl << "after sorting of array: ";
  bubbleSort(arr,n);
}
