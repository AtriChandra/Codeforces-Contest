#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fs(lcv,hi) for(long long lcv=0;lcv<hi; lcv++)
#define fb(lcv,hi) for(long long lcv=hi;lcv>=0; lcv--)
#define co cout <<
#define ci cin >>
#define vv vector<long long>
#define nl <<"\n"

void solve() {
    ll n;
    string s;
    cin>>n>>s;
    ll k=0;
    for(ll i=0;i<s.size()/2;i++){
    	if(s[i]<s[s.size()-i-1]) {
    		k=0;
    		break;
    	}
    	if(s[i]>s[s.size()-i-1]) {
    		k=1;
    		break;
    	}
    }
    
    if(k==0) co s nl;
    else{
    	string s1=s;
    	reverse(s1.begin(),s1.end());
    	cout<<s1<<s nl;
    }
    return;
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
