
	/*	Name: Trevor G. Smith
	Course: CST 370
	Project: final part 1
	Date: 02/24/2017
	Description: This algorithim will search for the number of occurances of a
	data value, set by the client. This demostration will run Olog.
	*/

#include<iostream>
#include<conio.h>
using namespace std;

/* This function will find the data element in the sorted array by cutting the
the search time in half. the variable High is the number of data elements minus one.
and Low is index 0.*/

int firstOccurance(int arr[], int low, int high, int element2BFound, int numDataElements)
{
	if (high >= low)
	{
		int mid = (low + high) / 2;
		if ((mid == 0 || element2BFound > arr[mid - 1]) && arr[mid] == element2BFound)
		{
			return mid;
		}
		else if (element2BFound > arr[mid])
		{
			return firstOccurance(arr, (mid + 1), high, element2BFound, numDataElements);
		}
		else
		{
			return firstOccurance(arr, low, (mid - 1), element2BFound, numDataElements);
		}
	}
	return -1;
}
/* This function will find the last data element in the sorted array by cutting the
the search time in half. the variable High is the number of data elements minus one.
and Low is index 0.*/

int lastOccurance(int arr[], int low, int high, int element2BFound, int numDataElements)
{
	if (high >= low)
	{
		int mid = (low + high) / 2;
		if ((mid == numDataElements - 1 || element2BFound < arr[mid + 1]) && arr[mid] == element2BFound)
		{
			return mid;
		}
		else if (element2BFound < arr[mid])
		{
			return lastOccurance(arr, low, (mid - 1), element2BFound, numDataElements);
		}
		else
		{
			return lastOccurance(arr, (mid + 1), high, element2BFound, numDataElements);
		}
	}
	return -1;
}

// This function will return the occurannce count of the array and
//given value to be found
int count(int arr[], int element2BFound, int numDataElements)
{
	int firstElementFound, lastElementFound;
	firstElementFound = firstOccurance(arr, 0, numDataElements - 1, element2BFound, numDataElements);
	if (firstElementFound == -1)
	{
		return firstElementFound;
	}
	lastElementFound = lastOccurance(arr, firstElementFound, numDataElements - 1, element2BFound, numDataElements);
	return lastElementFound - firstElementFound + 1;
}

//Main function
int main()
{
	int numDataElements, index, element2BFound, arr[100];
	cout << "How many data elements would you like to store?" << endl;
	cin >> numDataElements;
	for (index = 0; index < numDataElements; index++)
	{
		cout << "Enter the next number to be placed in the array\n";
		cin >> arr[index];
	}
	cout << "Enter the number you would like to know the occurance of\n";
	cin >> element2BFound;
	int c = count(arr, element2BFound, numDataElements);
	cout << element2BFound << " occured " << c << " times in the array set. \n " << endl;
	system("pause");
}
