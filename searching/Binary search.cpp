#include <iostream>
using namespace std;


int binarySearch(int arr[],int n,int key){
	
	int start=0;
	int end=n-1;
	
	
	while(start<=end){
	    int mid=(end-start)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
		     end=mid-1;
		}
		else{
		   start = mid+1;
		}
	    
	}
	
	return -1;
	
}

int main(){
	int arr[]={10,20,30,40,50,60,70};
	int n=sizeof(arr)/ sizeof(arr[0]);
	int k=1;
	cout << "element found at index " << binarySearch(arr,n,k);
}
