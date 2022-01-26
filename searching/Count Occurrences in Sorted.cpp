#include<iostream>
#include<map>>
using namespace std;

//time complexity O(n)
CountOccurenceInArray(int arr[],int n,int key){
     int count=0;
	for(int i=n-1;i>=0;i--){
		if(arr[i]==key){
			count ++;
		}
	}
	
	return count;
}

//time complexity O(n) and O(n) extra space
CountOccurenceInArrayUsingMap(int arr[],int n,int key){

    map<int,int> mp;
    for(int i=0;i<n;i++){
    	mp[arr[i]]++;
	}
	
	map<int, int>::iterator itr;
	 
	itr=mp.find(key);
	if(itr!=mp.end())
        return itr->second;
    else return 0;       
}



//time complexity O(logn)

lastOccurenceInArray(int arr[],int n,int key){
	int end=n-1;
	int start=0;
	while(start<=end){
         int mid=start+(end-start)/2;
		if(arr[mid]==key){
		    if(mid==n-1||arr[mid]!=arr[mid+1]){
		    	return mid;
			}	
			else{
			    start=mid+1;
			}
		}else if(arr[mid]<key){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return -1;
}


firstOccurenceInArray(int arr[],int n,int key){
	int end=n-1;
	int start=0;
	while(start<=end){
        int mid=start+(end-start)/2;
		if(arr[mid]==key){
			if(mid==0||arr[mid]!=arr[mid-1]){
		    	return mid;
			}	
			else{
			    end=mid-1;
			}
		}else if(arr[mid]<key){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	
	return -1;
}


CountOccurenceInArrayEfficient(int arr[],int n,int key){
	int first = firstOccurenceInArray(arr,n,key);
//	cout << first;
	if(first==-1){
		return 0;
	}else{
		return lastOccurenceInArray(arr,n,key)-firstOccurenceInArray(arr,n,key)+1;
	}
}


int main(){
	int arr[] = {1,10,10,10,20,20,40};
	int n= sizeof(arr)/sizeof(arr[0]);
	int k=1;
	cout << "count of occurence in an array"  << " " << CountOccurenceInArrayEfficient(arr,n,k);
}
