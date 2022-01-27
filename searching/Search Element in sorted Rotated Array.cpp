#include<iostream>
using namespace std;

searchElementInSortedRotatedArray(int arr[],int n,int k){
//	naive solution 
//Time complexity O(n)
  
  for(int itr=0;itr<n;itr++){
  	if(arr[itr]==k){
  		return itr;
	  }
  }
  
  return -1;
   
}

//using binary search
//time complexity O(logn)
searchElementInSortedRotatedArrayEfficient(int arr[],int n,int k){
  int start=0;
  int end=n-1;
  while(start<=end){
  	int mid = (start+end)/2;
  	if(arr[mid]==k) return mid;
  	
//  	find the sorted array and then apply binary search in it
  	if(arr[mid]>arr[start]){
  		if(k>=arr[start] && k<arr[mid]){
  			end=mid-1;
		  }
		  else{
		  	start=mid+1;
		  }
	  }else{
	  	if(k>arr[mid]&&k<=arr[end]){
	  		start=mid+1;
		  } 
		  else{
		  	end=mid-1;
		  }
	  }
  	
  }	
  
  return -1;
}

int main(){
	int arr[]={3,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=1;
	
	cout << "element found in sorted array at index " << searchElementInSortedRotatedArrayEfficient(arr,n,k);
}
