#include <iostream>
using namespace std;

/*
      1
    21 12
  321   123
4321     1234
  321   123
    21 12
      1
*/

int main() {
	int n;
	cin >> n;
	int mid = n / 2 + 1;

	for (int i = 1; i <= mid; i++) {
		for (int j = 1; j <= mid - i; j++) {
			cout << ' ';
		}
		for (int j = 1; j <= mid - i; j++) {
			cout << ' ';
		}
		for (int k = i; k >= 1; k--) {
			if (i == 1) {
				continue;
			}
			cout << k;
		}
		for (int l = 1; l <= i - 1; l++) {
			cout << ' ';
		}
		for (int l = 1; l <= i - 2; l++) {
			cout << ' ';
		}
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
	for (int i = mid - 1; i >= 1; i--) {
		for (int j = 1; j <= mid - i; j++) {
			cout << ' ';
		}
		for (int j = 1; j <= mid - i; j++) {
			cout << ' ';
		}
		for (int k = i; k >= 1; k--) {
			if (i == 1) {
				continue;
			}
			cout << k;
		}
		for (int l = 1; l <= i - 1; l++) {
			cout << ' ';
		}
		for (int l = 1; l <= i - 2; l++) {
			cout << ' ';
		}
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}

	return 0;
}