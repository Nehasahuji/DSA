#include<iostream>
using namespace std;


int firstOccurenceInArrayNaive(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	
	return -1;
}

int firstOccurenceInArrayEfficient(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key){
		   if(mid==0||arr[mid-1]!=arr[mid]){
		   	return mid;
		   }
		   else{
		   	mid=end-1;
		   }
		}
		else if (arr[mid]<key){
			start=mid+1;
		}
		else if(arr[mid]>key){
	    	end=mid-1;
		}
	}
     return -1;   
}


int main(){
	int arr[] = {1,10,10,10,20,20,40};
	int n= sizeof(arr)/sizeof(arr[0]);
	int k=1;
	cout << "index of first occurence of element in array is" << " " << firstOccurenceInArrayEfficient(arr,n,k);
}
