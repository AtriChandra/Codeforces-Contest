#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fs(lcv, hi) for (long long lcv = 0; lcv < hi; lcv++)
#define fb(lcv, hi) for (long long lcv = hi; lcv >= 0; lcv--)
#define co cout <<
#define ci cin >>
#define vv vector<long long>
#define nl << "\n"
 
void solve() {
    ll n;
    ci n;
 
    vv a(n);
    fs(i,n) {
        ci a[i];
    }
 
    sort(a.begin(), a.end());
 
    ll result = 2 * (a[n - 1] - a[1]) + 2 * (a[n - 2] - a[0]);
 
    co result nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}
