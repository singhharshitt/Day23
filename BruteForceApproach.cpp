#include <iostream>
using namespace std;

void findPairBruteForce(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int n, target;
    
    // Take array size input
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    // Input array elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input target sum
    cout << "Enter target sum: ";
    cin >> target;

    findPairBruteForce(arr, n, target);
    return 0;
}
