#include<iostream>

using namespace std;

int fact(int n)
{
	int result;
	if(n==0 || n==1){
		return 1;
	}

	result = fact(n-1) * n;

	return result;
}



int main()
{

	cout<<fact(5);

	return 0;
}
