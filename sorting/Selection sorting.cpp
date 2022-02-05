#include<iostream>
using namespace std;

selectionSort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			
			}
		}
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

   selectionSort(arr,n);
}
