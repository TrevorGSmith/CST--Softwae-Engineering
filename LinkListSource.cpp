/*
Title: Queue class
Abstract: For this example of stacks, I am demonstrating that we curlyberaces to extract infromation out of
a string and place it into a stack for later printing.
Author: Smith G. Trevor
ID: 536181
Date: 2/5/2017
*/
/*
	Title: Linked List Lab
	Abstract: This demonstrates linked list and functions that a Linked list may accomplish
	Author: Trevor G. Smith
	ID: 536181
	Date: 01/04/2016
	*/
#include <iostream>
using namespace std;

#include "LinkedList.h"

int main()
{
	// Test the class constructor
	LinkedList intList;
	cout << "Constructing intList\n";

	// Test insert()
	// adding 15, 40, 30, 7, 8, 0
	intList.insert(15, 0);
	intList.insert(40, 0);
	intList.insert(30, 0);
	intList.insert(7, 0);
	intList.insert(8, 0);
	intList.insert(0, 0);
	intList.display(cout);
	cout << endl;
	int max;
	max = intList.maximum(cout);
	cout << endl;


	

	system("pause");

}


int main()
{
	Queue q1;
	Queue q2;
	Queue q3;
	int loopItteration = 5;
	for (int i = 1; i <= loopItteration; i++)
	{
		q1.enqueue(i);
	}
	cout << "q1 stack is: ";
	q1.display(cout);

	for (int i = 1; i <= loopItteration; i++)
	{
		q2.enqueue(i*3);
	}
	cout << "q2 stack is now: ";
	q2.display(cout);

	for (int i = 1; i <= loopItteration; i++)
	{
		int temp = q1.front();
		q1.dequeue();
		q3.enqueue( temp * 3);
	}
	cout << "q1 stack is now: ";
	q1.display(cout);
	cout << "q3 stack is now: ";
	q3.display(cout);

	for (int i = 1; i <= loopItteration; i++)
	{
		int temp = q2.front();
		q2.dequeue();
		q3.enqueue(temp / 2);
	}
	cout << "after dequing q1 stack and placing it onto q3, the data"
		<< "is now: ";
	q1.display(cout);
	cout << "q3 stack is now: ";
	q3.display(cout);


	/*



	q1.enqueue(100 * i);

	//q3.display(cout);
	*/
	system("pause");

}
