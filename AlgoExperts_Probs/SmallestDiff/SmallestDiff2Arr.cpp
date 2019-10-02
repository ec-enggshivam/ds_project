
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  // Write your code here.
  sort(arrayOne.begin(),arrayOne.end());
  sort(arrayTwo.begin(),arrayTwo.end());
  
  vector<int> smallestPair;
  
  int diff;
  int tempDiff;
  int first = arrayOne[0];
  int second = arrayTwo[0];
  int i = 0;
  int j =0;
  
  if(first > second){
  	diff = first - second;	
  	j++;
  }
  else if(first < second){
  	diff = second - first;
  	i++;
  } else {
		return vector<int> {first, second};
	}
  
  while((i < arrayOne.size()) && (j < arrayTwo.size())){
  	
	first = arrayOne[i];
  	second = arrayTwo[j];
  	
	if(first > second){
	  tempDiff = first - second;
	  j++;
	}
	else{
	   tempDiff = second - first;	
	   i++;
	}
  	
  	if(tempDiff < diff){
  		diff = tempDiff;
  		smallestPair = {first, second};
	}
  }
  
  return smallestPair;
}


int main()
{
   
   vector<int> arr,arr1;
   vector<int> result;
   
   arr.push_back(5);
   arr.push_back(2);
   arr.push_back(1);
   arr.push_back(7);
   arr.push_back(6);
   arr.push_back(8);
   
   arr1.push_back(2);
   arr1.push_back(6);
   arr1.push_back(3);
   arr1.push_back(4);
   arr1.push_back(9);
   arr1.push_back(5);
   
   result = smallestDifference(arr, arr1);   

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
