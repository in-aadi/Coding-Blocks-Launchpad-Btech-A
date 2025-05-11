
#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left[n];
    int max = 0;
    for (int i = 0; i < n; i++) {
        left[i] = max;
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int right[n];
    max = 0;
    for (int i = n - 1; i >= 0; i--) {
        right[i] = max;
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int min;
        if (left[i] < right[i]) {
            min = left[i];
        } else {
            min = right[i];
        }
        if (min - arr[i] > 0) {
            ans = ans + min - arr[i];
        }
    }
    return 0;
}