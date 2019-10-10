#include<iostream>

typedef struct BTreeNode{
	int val;
	BTreeNode *left;
	BTreeNode *right;
} btreenode;

int FindMaxInBT(btreenode *root){
	int max = INT_MIN;
	
	if(root){
			
		int leftVal = FindMaxInBT(root->left);
		int rightVal = findMaxBT(root->right);
		
		if(leftVal > rightVal){
			max = leftVal;
		}
		else{
			max = rightVal;
		}
		
		if(root->val > max){
			max = root->val;
		}	
	}
	
	return max;
}
 
int main(){
	
	return 0;
}
