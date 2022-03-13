#include<iostream>
using namespace std;

void Merge(int arr[],int left,int mid,int right){
  
  int n1=mid-left+1;
  int n2=right-mid;
  
  int a[n1];
  int b[n2];
  
  for(int i=0;i<n1;i++){
      a[i]=arr[left+i];
  }
 
  for(int j=0;j<n2;j++){
      b[j]=arr[mid+j+1];
  }
  
 int i=0,j=0,k=left;
  while(i<n1&&j<n2){
  	if(a[i]>b[j]){
  		arr[k]=b[j];
  		j++;
  		k++;
	  }else{
	  	arr[k]=a[i];
	  	i++;
	  	k++;
	  }
  }
  
  while(i<n1){
  		arr[k]=a[i];
	  	i++;
	  	k++;
  }
  
  while(j<n2){
  		arr[k]=b[j];
  		j++;
  		k++;
  }
}

void MergeSort(int arr[],int left,int right){
	if(left<right){
		int mid=(left+right)/2;
		MergeSort(arr,left,mid);
		MergeSort(arr,mid+1,right);
		Merge(arr,left,mid,right);
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
  MergeSort(arr,0,n-1);
  
    for(int i=0;i<n;i++){
  	cout << arr[i] << " ";
  }
}
