#include<iostream>
using namespace std;

{
	int a1, a2, a3;
	int cp = 0, cn = 0;
	cin >> a1 >> a2 >> a3;
	if (a1 > 0) {
		cp++;
	}
	else {
		cn++;
	}
	if (a2 > 0) {
		cp++;
	}esle{
		cn++;
	}
		if (a3 > 0) {
			cp++;
		}esle{
			cn++;
		}
	cout << "posetive:" << cp;
	cout << "negative:" << cn;
	cout << (a1 + a2 + a3) / 3.0;
	return o;
}