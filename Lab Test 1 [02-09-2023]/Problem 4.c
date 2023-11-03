#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        int numb;
        cin >> numb;
        int arr[numb];
        for (int j = 0; j < numb; j++) {
            cin >> arr[j];
        }
        int temp = 0, jim = 0;
        for (int j = 0; j < numb; j++) {
            for (int k = 0; k < numb - 1; k++) {
                if (arr[k] > arr[k + 1]) {
                    temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                    jim++;
                }
            }
        }
        cout << "Optimal train swapping takes " << jim << " swaps." << endl;
    }
    return 0;
}
