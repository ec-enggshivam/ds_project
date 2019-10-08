#include <vector>
#include<algorithm>
#include<iostream>

using namespace std;

//O(nlogn) complexity due to sort being used and O(1) space
vector<int> findThreeLargestNumbers(vector<int> array) {
  // Write your code here.
	sort(array.begin(),array.end());
	int num = array.size();
	
	return {array[array.size()-3],array[array.size()-2],array[array.size()-1]};	
}

int main(){
	vector<int> threeLar;
	
	vector<int> array = {141, 1, 17, -7, -17,-27, 18,541,8,7,7};
	
	threeLar = findThreeLargestNumbers(array);
	
	for(int i =0; i<3;i++){
		cout<<threeLar[i]<<" ";
	}
	return 0;
}
