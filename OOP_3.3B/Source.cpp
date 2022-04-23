#include "LongLong.h"

int main() {
	LongLong a(34, 64);
	LongLong b(a);

	b++;
	--b;
	cout << a;
	cout << b;
	cin >> a;

	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a > b) << endl;
	cout << (a < b) << endl;

}