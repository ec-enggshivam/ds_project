#include<iostream>

using namespace std;

bool ArrDuplicates(int arr[], int arr_size){

  int i=0, sum = 0;
  
  //arr_size = (int)sizeof(arr);
  
 // cout<<"size of the array using pointer arithmetic: "<<arr_size<<endl;
  
  while(i < (arr_size)){
		sum = arr[i] ^ sum;
		cout<<"\nValue of sum and i: "<<sum<<" "<<i;
		i++;
	}
	
	cout<<"\nSum: "<<sum<<endl;
	
	if(sum){
		return false;
	}
	else
	  return true;
}

int main()
{
	int arr[] = {3,4,1,6,4};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Size of array: "<<size<<endl;
	bool result = ArrDuplicates(arr,size);
	
	cout<<"Result: "<<result<<endl;
	
	return 0;
}
