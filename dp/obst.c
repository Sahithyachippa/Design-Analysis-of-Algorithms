
#include <stdio.h>
#include <limits.h>
int sum(int freq[], int i, int j);
int optCost(int freq[], int i, int j)
{
// Base cases
if (j < i)	 // no elements in this subarray
	return 0;
if (j == i)	 // one element in this subarray
	return freq[i];

// Get sum of freq[i], freq[i+1], ... freq[j]
int fsum = sum(freq, i, j);

// Initialize minimum value
int min = INT_MAX;

// One by one consider all elements as root and
// recursively find cost of the BST, compare the
// cost with min and update min if needed
for (int r = i; r <= j; ++r)
{
	int cost = optCost(freq, i, r-1) +
				optCost(freq, r+1, j);
	if (cost < min)
		min = cost;
}

// Return minimum value
return min + fsum;
}

// The main function that calculates minimum cost of
// a Binary Search Tree. It mainly uses optCost() to
// find the optimal cost.
int optimalSearchTree(int keys[], int freq[], int n)
{
	// Here array keys[] is assumed to be sorted in
	// increasing order. If keys[] is not sorted, then
	// add code to sort keys, and rearrange freq[]
	// accordingly.
	return optCost(freq, 0, n-1);
}

// A utility function to get sum of array elements
// freq[i] to freq[j]
int sum(int freq[], int i, int j)
{
	int s = 0;
	for (int k = i; k <=j; k++)
	s += freq[k];
	return s;
}

// Driver program to test above functions
int main()
{
int n;
scanf("%d",&n);
int keys[n],freq[n];

	printf("enter the elements of keys array\n");
	for(int i=0;i<n;i++)
	scanf("%d",&keys[i]);
	printf("enter the elements of freq array\n");
	for(int i=0;i<n;i++)
	scanf("%d",&freq[i]);
	printf("Cost of Optimal BST is %d ",
			optimalSearchTree(keys, freq, n));
	return 0;
}

