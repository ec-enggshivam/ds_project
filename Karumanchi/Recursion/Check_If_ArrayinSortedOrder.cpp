#include<iostream>

using namespace std;


bool FindIfArraySorted(int *arr, int size)
{
	if(!arr){
		return false;
	}
	else {
		if(size==1){
			return true;
		}
		else {
			if(arr[size-1] > arr[size - 2]){
				return FindIfArraySorted(arr, size-1);
			}
			else{
				return false;
			}
	  }
	}
}


int main()
{
	bool result;
	int arr[] = {8,6,3,5,0};
	int arr1[] = {4,6,8,9,10};
	
	cout<<"\nArray is sorted: "<<FindIfArraySorted(arr,5);
	return 0;
}
