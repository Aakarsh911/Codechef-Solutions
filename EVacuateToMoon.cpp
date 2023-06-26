#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long t, n, m, h;
    cin >> t;
    while (t--) {
        cin >> n >> m >> h;
        long power = 0;
        long long cap[100000];
        long long charge[100000];
        for (long long i = 0; i < n; i++) {
            cin >> cap[i];
        }
        for (long long i = 0; i < m; i++) {
            cin >> charge[i];
        }
        sort(cap, cap + n, greater<long long>());
        sort(charge, charge + m, greater<long long>());
        long long check;
        if (m > n) {
            check = n;
        }
        else {
            check = m;
        }
        for (int i = 0; i < check; i++) {
            if (charge[i] * h > cap[i]) {
                power += cap[i];
            }
            else {
                power += charge[i] * h;
            }
        }
        cout << power << endl;
    }
    return 0;
}