#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <bits\stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 && l2){
            ListNode* l1Temp, l2Temp, result;
            result = new (sizeof(ListNode));
            l1Temp =l1;
            l2Temp = l2;
        
            while(l1Temp->next != NULL && l2Temp->next != NULL){
                l1Temp->val
            }            
        }
        
    }
};

int main()
{
	vector<int> arr = { 5,4,1,10,13,3,6,2};
	
	vector< vector<int> > result{};
	
	
	
	//result = sumOfthreeNums(arr,15);
	//cout<< result[0][0];
	return 0;
}
