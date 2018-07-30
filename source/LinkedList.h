// class templates
#include <iostream>
using namespace std;

template <class T>
class LinkedList {
	T a, b;
public:
	LinkedList(T first, T second)
	{
		a = first; b = second;
	}
	T getmax();
};

template <class T>
T LinkedList<T>::getmax()
{
	T retval;
	retval = a>b ? a : b;
	return retval;
}

