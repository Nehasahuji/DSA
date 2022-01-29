#include<iostream>
using namespace std;

isPairSum(int arr[],int n,int val){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==val){
				return true;
			}
		}
	}
	
	return false;
}

isPairSumEfficient(int arr[],int n,int val){
	int low=0;
	int high=n-1;
	while(low<=high){
		if(arr[low]+arr[high]==val){
			return true;
		}
		else if(arr[low]+arr[high]>val){
			high--;
		}
		else{
			low++;
		}
	}
	
	return false;
}


int main(){
	int arr[] = { 2, 3, 5, 8, 9, 10, 11 };
    int val = 17;
    int arrSize = *(&arr + 1) - arr;
//    sort(arr, arr + arrSize); 
    cout << isPairSumEfficient(arr, arrSize, val);
 
    return 0;
}
