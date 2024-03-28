#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb emplace_back
#define fs(i,x,y) for(int i=x;i<y;i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define mii map<int,int>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define nl "\n"


vector<vector<int>> TLE(40000, vector<int>(7));

void solve() {
    ll n;
    cin>>n;
    fs(i,0,n){
    	ll x=2;
    	char f='#';
    	char s='.';
    	if(i%2==1){
    		f='.';
    		s='#';
    	}
    	while(x--){
    		fs(j,0,n){
    			ll q=2;
    			while(q--){
    				if(j%2==0)
    					cout<<f;
    				else
    					cout<<s;
    			}
    		}
    		cout<<nl;
    	}
    }
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
