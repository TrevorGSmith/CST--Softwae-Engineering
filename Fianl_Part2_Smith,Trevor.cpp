/*	Name: Trevor G. Smith
	Course: CST 370
	Project: final part 2
	Date: 02/24/2017
	Description: Find the first common node in binary search tree
*/


//*************PART 2******************

#include <iostream>
#include <vector>
using namespace std;

// A Bianry Tree node structure
struct Node
{
	int key;
	struct Node *left, *right;
};

// Function which will create a new node
Node * newNode(int k)
{
	Node *temp = new Node;
	temp->key = k;
	temp->left = temp->right = NULL;
	return temp;
}

// Finds the path to node
bool findPath(Node *root, vector<int> &path, int k)
{
	// if empty
	if (root == NULL)
	{
		return false;
	}
	path.push_back(root->key);
	// If it is the root
	if (root->key == k)
	{
		return true;
	}
	// recursion to find path
	if ((root->left && findPath(root->left, path, k)) ||
		(root->right && findPath(root->right, path, k)))
	{
		return true;
	}
	path.pop_back();
	return false;
}

// Finds Common Parent node
int findParentNode(Node *root, int firstNode, int secondNode)
{
	// to store paths to n1 and n2 from the root
	vector<int> path1, path2;

	// Find paths from root to n1 and root to n1. If either n1 or n2
	// is not present, return -1
	if (!findPath(root, path1, firstNode) || !findPath(root, path2, secondNode))
	{
		return -1;
	}
	int i;
	for (i = 0; i < path1.size() && i < path2.size(); i++)
	{
		if (path1[i] != path2[i])
		{
			break;
		}
	}
	return path1[i - 1];
}

// Driver program to test above functions
int main()
{
	// Cunstruct the given Binary Tree
	Node * root = newNode(80);
	root->left = newNode(30);
	root->right = newNode(90);
	root->left->left = newNode(20);
	root->left->right = newNode(60);
	root->right->right = newNode(100);
	root->left->left->left = newNode(10);
	root->left->right->left = newNode(50);
	root->left->right->right = newNode(70);
	root->left->right->left->left = newNode(40);

	//Print the 
	cout << "The common parent node of 30 and 100 is " << findParentNode(root, 30, 100) << endl;
	cout << "The common parent node of 40 and 60 is " << findParentNode(root, 40, 60) << endl;
	cout << endl;
	system("pause");
	return 0;
}