#include<iostream>
#include<map>>
using namespace std;

//time complexity O(n)
Count1sinaSortedBinaryArray(int arr[],int n){
     for(int i=0;i<n;i++){
     	if(arr[i]==1) return n-i;
	 }	
	return 0;
}

//time complexity O(logn)
Count1sinaSortedBinaryArrayEfficient(int arr[],int n){
	int start=0,end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==1){
			if(mid==0||arr[mid]!=arr[mid-1]) return n-mid;
			else end=mid-1;
		}else if(arr[mid]<1) start=mid+1;
		else end=mid-1;	
	}
	return 0;
}


int main(){
	int arr[] = {0,0,1};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout << "count of occurence 1 in a binary array"  << " " << Count1sinaSortedBinaryArrayEfficient(arr,n);
}
