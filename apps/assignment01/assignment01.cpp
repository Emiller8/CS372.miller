//
// File:   assignment1.cpp
// Author: Eric Miller
// Purpose:
// Illustrate some of the bad thins that can happen with
// pointers
//
#include <iostream>
using namespace std;

class object
{
private:
	string s1;
};

void PtrHeap1()
{
	int* array = new int[400];
	int* ptr = array;
	delete[] array;
	for (int i = 0; i < 10; i++)
	{
		cout << ptr++ << endl;
	}
}

void PtrHeap2()
{
	int* array = new int[300];
	int* ptr1 = array;
	int* ptr2 = array;
	delete[] ptr1;
	cout << *ptr2 << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << ptr2++ << endl;
	}
}

void stringFunc()
{
	object s1;
	s1 = new string;
	return *s1;
	callerFunc(s1);

}

void callerFunc(string s1)
{
	cout << s1 << endl;
}

int main() 
{
	// Put your code here. 
	PtrHeap1();
	PtrHeap2();
	stringFunc();
	return 0;
}
