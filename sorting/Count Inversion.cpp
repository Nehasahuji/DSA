#include<iostream>
using namespace std;

int Merge(int arr[],int left,int mid,int right){
  int invCount=0;
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
  		invCount=invCount+n1-i;
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
  
return invCount;
}



int MergeSort(int arr[],int left,int right){
    int invCount=0;
	if(left<right){
		int mid=(left+right)/2;
		invCount+=MergeSort(arr,left,mid);
		invCount+=MergeSort(arr,mid+1,right);
		invCount+=Merge(arr,left,mid,right);
	}
	
	return invCount;
}

int main(){

   int arr[] = {4,6,1,2,5,7};
   int n=sizeof(arr)/sizeof(arr[0]);
   
    cout << "before sorting of array: ";
   
   for(int i=0;i<n;i++){
   	cout << arr[i] << " ";
   }
  	
  cout <<endl << "after sorting of array: ";
  cout << MergeSort(arr,0,n-1) << endl;
  
    for(int i=0;i<n;i++){
  	cout << arr[i] << " ";
  }
}
