#include <vector>
//#include<algorithm>
#include<iostream>

using namespace std;

vector<int> findThreeLargestNumbers(vector<int> array) {
  // Write your code here.

	
	return {};	
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
