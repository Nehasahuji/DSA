#include<iostream>
using namespace std;

insertionSort(int arr[],int n){
   for(int i=1;i<n;i++){
   	int current=arr[i];
   	int j=i-1;
   	while(arr[j]>current && j>=0){
   		 arr[j+1]=arr[j];
   		 j--;
	   }
	   arr[j+1]=current;
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
  insertionSort(arr,n);
}
