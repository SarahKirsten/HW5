/////////////////////////
//Program Name: EX05_02
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/30/2016
///////////////////////

#include "Header.h"

int main()
{
	int list1[] = { 1,9,45,66,157,1335 };
	cout << "Is the int array sorted? " << (isSorted(list1, 6) ? "true" : "false") << endl;

	double list[] = { 1,9,4.5,6.6,5.7,-4.5 };
	cout << "Is the double array sorted? " << (isSorted(list, 6) ? "true" : "false") << endl;

	string list3[] = { "abc", "abg", "good" };
	cout << "Is the string array sorted? " << (isSorted(list3, 3) ? "true" : "false") << endl;



	return 0;
}
