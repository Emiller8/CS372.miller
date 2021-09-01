//
// File:   assignment2.cpp
// Author: Eric Miller
// Purpose:
// Bag Class
//
//
#include <iostream>
using namespace std;

template <typename Thing>
class Bag{
	private:
		
	public:
		bag();
		void insert(Thing aThing);
		Thing& pop();
		int size();
		int count();
};
