#include <iostream>
using namespace std;


int linearSearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
//		cout << arr[i] << " ";
		if(arr[i]==key){
			return i;
		}
	}
	
	return -1;
}

int main(){
	int arr[]={10,20,30,40,50,60,70};
	int n=sizeof(arr)/ sizeof(arr[0]);
	int k=30;
	cout << "element found at index " << linearSearch(arr,n,k);
}
