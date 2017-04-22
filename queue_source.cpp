/*
Title: Queue class: Part 1 of 2: midterm
Abstract: For this example of stacks, I am demonstrating that we curlyberaces to extract infromation out of
a string and place it into a stack for later printing.
Author: Smith G. Trevor
ID: 536181
Date: 2/5/2017
*/


/*---------------------------------------------------------------------
Driver program to test the Queue class.
----------------------------------------------------------------------*/

#include <iostream>

using namespace std;

#include "Queue.h"
#include <iostream>
#include <fstream>
#include <sstream>


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
