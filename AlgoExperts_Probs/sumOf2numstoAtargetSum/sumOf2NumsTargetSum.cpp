// XORwithoutXor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	
        sort(nums.begin(),nums.end());
        
		int left = 0;
        int right = nums.size() - 1;
        //cout<<"right @begin: "<<right<<endl;
        int currentSum;
        
        while(left < right){
        	currentSum = nums[left] + nums[right];        	
        	//cout<<"currentSum: "<<currentSum<<endl;
			if(currentSum == target){
				//cout<<"left: "<<left<<" "<<"Right: "<<right<<endl;
        		return {nums[left], nums[right]};
			}
			else if(currentSum < target){
				left++;
			}
			else{
				right--;
			}
		}
		return {};
    }
};

int main()
{
   Solution A;
   
   vector<int> arr;
   vector<int> result;
   
   arr.push_back(5);
   arr.push_back(2);
   arr.push_back(1);
   arr.push_back(7);
   arr.push_back(6);
   arr.push_back(8);
   
   result = A.twoSum(arr, 8);   

   cout<<result[0]<<endl;
   cout<<result[1]<<endl;   
   
   for(vector<int>::iterator it=result.begin();it != result.end();it++){
   	cout<<*it<<endl;
   }
   
   return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
