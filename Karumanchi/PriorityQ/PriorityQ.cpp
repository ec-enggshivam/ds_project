#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct pq{
	int *array;
	int count;
	int capacity;
	int heap_type;
} pq_heap;

pq_heap *creatHeap(int capacity, int heap_type){
	pq_heap *h = new pq_heap(capacity);
}

int leftChild(pq_heap *h, int i){
	int left = 2*i+1;

	if(left >= h->count){
		return -1;
	}
	return left;
}

int rightChild(pq_heap *h, int i){
		int right = 2*i+2;
		
		if(right>=h->count){
			return -1
		}
	return right;
}

//heapify
void percolateDown(pq_heap *h, int i){
  int max;
	int l = leftChild(h,i);
	int r = rightChild(h,i);
	
	if(l != -1 && h->array[l] > h->array[i]){
		max = l;
	}
	else{
		max = i;
	}
	
	if(r != -1 && h->array[r] > h->array[max]){
		max = r;
	}
	
	if(max != i){
		int temp = h->array[i];
		h->array[i] = h->array[max];
		h->array[max] =  temp;
		
		percolateDown(h, max);
	}
	
}

int main()
{
	
	return 0;
}
