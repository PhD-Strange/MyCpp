#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n / 2; j++) {
			if (j < i || j > n - i) {cout << " ";
			}
			else {
				cout << "*";
			}
		} cout << " " << endl;
	}
	return 0;
}