/////////////////////////
//Program Name: EX05_03
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/30/2016
///////////////////////

#include "Vector.cpp"

int main()
{
	MyVector<int> v1;
	v1.push_back(1);
	v1.push_back(2);

	MyVector<int> v2;
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(7);

	v1.swap(v2);

	for (int i = 0;i < v1.size(); i++)
		cout << v1.at(i) << " ";

	return 0;
}
