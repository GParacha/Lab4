#include "CustomVector.h"
#include <iostream>
using namespace std;

int main() {
	//First make a couple customVectors
	CustomVector<bool> v1;

	v1.append(false);
	v1.append(true);
	v1.append(true);

	for (int i = 0; i < v1.getSize(); i++) {
		cout << v1.get(i) << " ";
	}
	cout << endl;
}