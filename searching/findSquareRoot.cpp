#include<iostream>
using namespace std;

//naive solution time complexity O(num/2)
findSquareRoot(int num){
	
	if(num==1) return 1;
	for(int i=0;i<num/2;i++){
		if(i*i==num){
			return i;
		}else if(i*i>num){
			return i-1;
		}
	}
 
}

//naive solution time complexity O(n^1/2)
findSquareRootEfficient(int num){ 
    int i=0;
    while(i*i<=num){
    	i++;
	}
	return i-1;
}

//Efficinet solution time complexity O(logn)
int findSquareRootEfficientBinarySearch(int num){
	int start=1;
	int end=num;
	int res=-1;
	while(start<=end){
		int mid=(start+end)/2;
		int midSquare=mid*mid;
		if(midSquare==num){
			return mid;
		}
		else if(midSquare>num){
			end=mid-1;
		}
		else if(midSquare<num){
			start=mid+1;
			res=mid;
		}
	}
	
	return res;
}




int main(){
	int num;
	cout << "enter a no whose sqare root is to found";
	cin >> num;
	
	cout << "square root of a number: " << findSquareRootEfficientBinarySearch(num);
	
}
