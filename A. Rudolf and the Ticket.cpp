#include <bits/stdc++.h>
using namespace std;
 
long long countWays(long long n, long long  m, long long k, vector<long long>& left, vector<long long>& right) {
    long long count = 0;
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < m; ++j) {
            if (left[i] + right[j] <= k) {
                count++;
            }
        }
    }
    return count;
}
 
int main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;
 
        vector<long long> left(n);
        for (long long  j = 0; j < n; ++j) {
            cin >> left[j];
        }
 
        vector<long long> right(m);
        for (long long j = 0; j < m; ++j) {
            cin >> right[j];
        }
 
        long long result = countWays(n, m, k, left, right);
        cout << result << "\n";
    }
 
    return 0;
}
