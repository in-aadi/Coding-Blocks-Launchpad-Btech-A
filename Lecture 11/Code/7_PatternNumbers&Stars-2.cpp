#include<iostream>
using namespace std;

/*
1******
12*****
123****
1234***
12345**
123456*
1234567
*/

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		for (int k = 1; k <= n - i; k++) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}