#include <bits/stdc++.h>
using namespace std;

long long minRemovals(string& s) {
    long long n = s.length();
    long long count = 0;

    for ( long long i= 0; i < n - 2; i++) {
        if ((s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') ||
            (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')) {
            count++;
            i += 2;  
        }
    }

    return count;
}


int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        string s;
        cin >> s;

        long long result = minRemovals(s);
        cout << result << "\n";
    }

    return 0;
}
