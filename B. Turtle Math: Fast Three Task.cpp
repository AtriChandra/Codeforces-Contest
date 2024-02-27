#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, sum = 0;
        cin >> n;
        vector<long long> v(n);

        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        sum = accumulate(v.begin(), v.end(), sum);

        if (sum % 3 == 0) {
            cout << 0 << "\n";
        } else if (sum % 3 == 2) {
            cout << 1 << "\n";
        } else {
            bool found = false;

            for (long long i = 0; i < n; i++) {
                long long temp = sum - v[i];
                if (temp % 3 == 0) {
                    cout << 1 << "\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << 2 << "\n";
            }
        }
    }

    return 0;
}
