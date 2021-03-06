#pragma once

/////////////////////////
//Program Name: EX05_02
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

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0;i < size - 1;i++)
		if (list[i] > list[i + 1])
			return false;
	return true;
}



