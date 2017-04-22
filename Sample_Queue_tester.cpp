/*
Title: Queue class
Abstract: For this example of stacks/queues, I am demonstrating How we can verify if a users word is a palindrome.
Author: Smith G. Trevor
ID: 536181
Date: 1/16/2017
*/


/*---------------------------------------------------------------------
Driver program to test the Queue class.
----------------------------------------------------------------------*/

#include <iostream>

using namespace std;

#include "Queue.h"
#include "Stack.h"
#include <iostream>
#include <fstream>
#include <sstream>


Queue intoQueue(string userInput, Queue q1)
{
	for (int i = 0; i < userInput.length(); i++)
	{
		q1.enqueue(userInput[i]);
	}
	return q1;
}

Stack intoStack(string userInput, Stack s)
{
	for (int i = 0; i < userInput.length(); i++)
	{
		s.push(userInput[i]);
	}
	return s;
}

bool checkIfPalidrome(Queue q1, Stack s, string userInput)
{
	bool isPalidrome = true;
	for (int i = 0; i < userInput.length(); i++)
	{
		char stackVar = s.top();
		s.pop();
		char queueVar = q1.front();
		q1.dequeue();
		if (stackVar != queueVar)
		{
			isPalidrome = false;
			return isPalidrome;
		}
		return isPalidrome;
	}
}


int main()
{
	Queue q1;
	Stack s;


	/*
	cout << "Queue created.  Empty? " << boolalpha << q1.empty() << endl;

	cout << "How many elements to add to the queue? ";
	int numItems;
	cin >> numItems;
	for (int i = 1; i <= numItems; i++)
		q1.enqueue(100 * i);

	cout << "Contents of queue:\n";
	q1.display(cout);
	cout << "Queue q1 empty? " << q1.empty() << endl;

	cout << "\nFront value in q1: " << q1.front() << endl << endl;

	while (!q1.empty())
	{
		cout << "Remove front -- Queue contents: ";
		q1.dequeue();
		q1.display(cout);
	}
	cout << "\nQueue q1 empty? " << q1.empty() << endl;
	cout << "Now try to retrieve front value in q1" << endl;
	cout << "Front value in q1?" << endl << q1.front() << endl;
	cout << "\nNow Try to remove front of q1: " << endl;
	
	q1.dequeue();
	*/
	string userInput;
	bool isPalindrome;
	//********************OPTION 1***********************************
	
	cout << "Please provide me a string and I will check if it is a palindrome" << endl;
	cin >> userInput;
	cout << "Your string input was: " << userInput << "\n" << endl;
	q1 = intoQueue(userInput, q1);
	s = intoStack(userInput, s);
	isPalindrome = checkIfPalidrome(q1, s, userInput);
	if (isPalindrome)
	{
		cout << "********This is a palindrome!********" << endl;
	}
	else
	{
		cout << "********This is not a palidrome!********" << endl;
	}
	
	// *************OPTION 2***********************
	/*
	cout << "Please provide me a string and I will check if it is a palindrome" << endl;
	cin >> userInput;
	cout << "Your string input was: " << userInput << "\n" << endl;
	for (int i = 0; i < userInput.length(); i++)
	{
		q1.enqueue(userInput[i]);
		s.push(userInput[i]);
	}

	isPalindrome = checkIfPalidrome(q1, s, userInput);
	if (isPalindrome)
	{
		cout << "********This is a palindrome!********" << endl;
	}
	else
	{
		cout << "********This is not a palidrome!********" << endl;
	}
	*/
	system("pause");

}