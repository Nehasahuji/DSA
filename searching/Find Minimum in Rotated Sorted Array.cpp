#include<vector>
#include<iostream>
using namespace std;
int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>nums[end]){
                start=mid+1;;
            }else if(nums[mid]<nums[end]){
                end=mid;
            }else 
               end--;
        }
        
        return nums[start];
    }
    
int main(){
	vector<int> vec;
	vec.push_back(1);
		vec.push_back(3);
           	vec.push_back(5);	
 	cout << findMin(vec);
}
