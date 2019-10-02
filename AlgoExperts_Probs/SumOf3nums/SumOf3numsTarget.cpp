#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <bits\stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > sumOfthreeNums(vector<int> &array, int targetSum)
{
	vector<vector<int> > triplets;
	
	sort(array.begin(),array.end());	
	
	for(int i = 0;i < array.size()-2;i++){
		int left = i+1;
		int right = array.size()-1;
		
		while(left<right){
			int currentSum = array[i] + array[left] + array[right];
			if(currentSum == targetSum){
				triplets.push_back({array[i],array[left],array[right]});
				left++;
				right--;
			}
			else if(currentSum < targetSum){
				left++;
			}
			else{
				right--;
			}
		}
		
	}
		
	
	return triplets;
}

int main()
{
	vector<int> arr = {5,4,1,10,13,3,6,2};
	
	vector< vector<int> > result{};
		
	result = sumOfthreeNums(arr,15);
	
	for(i=0;i < result.size()-1; i++){
		for(int j = 0;j < )
		cout<< ;
	}
	
	return 0;
}
