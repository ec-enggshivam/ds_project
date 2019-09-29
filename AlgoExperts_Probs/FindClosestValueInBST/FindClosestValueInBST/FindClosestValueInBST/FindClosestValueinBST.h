#pragma once
class BST {
public:
	int value;
	BST* left;
	BST* right;

	BST(int val);
	BST& insert(int val);
};

