#pragma once

/////////////////////////
//Program Name: EX05_03
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/30/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

template <typename T>
class MyVector
{
public:
	MyVector();
	void push_back(T element);
	void pop_back();
	unsigned int size();
	bool empty();
	T at(int index);
	void clear();
	void swap(MyVector v2);
private:
	T elements[100];
	int vectorSize;
};



