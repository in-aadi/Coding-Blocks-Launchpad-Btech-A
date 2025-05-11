#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = -1;
    int left[n];
    for (int i = 0; i < n; i++) {
        left[i] = max;
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << left[i] << endl;
    }

    return 0;
}