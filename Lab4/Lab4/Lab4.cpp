#include "CustomVectors.h"
#include <iostream>
using namespace std;

int main() {
	CustomVector<int> v2;

	v2.append(1);
	v2.append(2);
	v2.append(3);

	for (int i = 0; i < v2.getSize(); i++) {
		cout << v2.get(i) << " ";
	}
	cout << endl;

	v2.clear();
	v2.append(1);
	v2.append(3);
	for (int i = 0; i < v2.getSize(); i++) {
		cout << v2.get(i) << " ";
	}
	cout << endl;

	v2.insert(1, 1);
	cout << v2.get(1);

	v2.remove(1);
	cout << v2.get(1);


}