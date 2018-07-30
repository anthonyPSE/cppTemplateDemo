#include <iostream>
#include "LinkedList.h"

int main() {
	LinkedList <int> myobject(100, 75);
	cout << myobject.getmax();
	cin.get();
	return 0;
}