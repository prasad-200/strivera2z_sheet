#include<bits/stdc++.h>
using namespace std;

int counter = 0;  // Changed 'count' to 'counter' to avoid conflicts

void func(int val, int n) {
    if (counter == n) {
        return;
    }
    cout << val << " ";
    counter++;
    func(val, n);
}

int main() {
    int val, n;
    cout << "Enter the number:" << endl;
    cin >> val;
    cout << "Enter the number of repetitions:" << endl;
    cin >> n;

    func(val, n);
    return 0;
}
