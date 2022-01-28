#include<iostream>
using namespace std;

PeekElementInArray(int arr[],int n){
	if(n==1) return arr[0];
	if(arr[0]>arr[1]) return arr[0];
	if(arr[n-1]>arr[n-2]) return arr[n-1];
	
	for(int itr=1;itr<n-1;itr++){
		if(arr[itr]>arr[itr-1]&&arr[itr]>arr[itr+1]){
			return arr[itr];
		}
	}
}


PeekElementInArrayEfficient(int arr[],int n){
	int low=0;
	int high=n-1;
	while(low<=high){
		cout << low << " " << high;
	int	mid=(high+low)/2;
		if((arr[mid]>=arr[mid-1]||mid==0) && 
		(arr[mid]>=arr[mid+1]||mid==n-1)){
			return arr[mid];
		}else if(mid>0&&arr[mid]<=arr[mid+1]){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	
	return -1;
}



int main(){
	int arr[] = {6,5,4,3,2,3,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout << "Peek element is array is: " << PeekElementInArrayEfficient(arr,n);
}
