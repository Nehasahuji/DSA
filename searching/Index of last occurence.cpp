#include<iostream>
using namespace std;

LastOccurenceInArray(int arr[],int n,int key){
	for(int i=n-1;i>=0;i--){
		if(arr[i]==key){
			return i;
		}
	}
	
	return -1;
}


LastOccurenceInArrayEfficient(int arr[],int n,int key)
{
	int end=n-1;
	int start=0;
	
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==key){
		
		   if(mid==n-1||arr[mid]!=arr[mid+1])
	          {
//	          	cout <<mid;
	          	return mid;
				  }	
				  
			else{
				start=mid+1;
			}
		
		
		}else if(arr[mid]>key){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	
	return -1;
}

int main(){
	int arr[] = {1,10,10,10,20,20,40};
//    int arr[] = {10,10,10};
	int n= sizeof(arr)/sizeof(arr[0]);
	int k=100;
	cout << "index of last occurence of element in array is" << " " << LastOccurenceInArrayEfficient(arr,n,k);
}
