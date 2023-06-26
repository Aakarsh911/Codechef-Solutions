#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string arr[100000];
        int total = 0;
        int a = 0, b = 0, ab = 0, o = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == "A") {
                a++;
            }
            else if (arr[i] == "B") {
                b++;
            }
            else if (arr[i] == "O") {
                o++;
            }
            else {
                ab++;
            }
        }
        total += max(a, b);
        total += ab;
        total += o;
        cout << total << endl;
    }
    return 0;
}

