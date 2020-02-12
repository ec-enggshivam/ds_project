#include<vector>

using namespace std;

class BST {
public:
	int value;
	BST* left;
	BST* right;

	BST(int value) {
		this->value = value;
		left = NULL;
		right = NULL;
	}

	BST& insert(int val) {
		if (val < value) {
			if (left == NULL) {
				BST* newBSTnode = new BST(val);
				left = newBSTnode;
			}
			else {
				left->insert(val);
			}
		}
		else if (right == NULL) {
			BST* newBSTnode = new BST(val);
			right = newBSTnode;
		}
		else {
			right->insert(val);
		}

		return *this;
	}

	//search
	bool contains(int val) {
		if (val < value) {
			if (left == NULL) {
				return false;
			}
			else {
				return left->contains(val);
			}
		}
		else if (val > value){
			if(right == NULL) {
				return false;
		    }
			else {
				return right->contains(val);
			}
		}
		else {
			return true;
		}
	}


	//deletion

};