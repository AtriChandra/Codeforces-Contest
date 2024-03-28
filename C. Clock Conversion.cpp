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
    string str;
    cin>>str;
    ll h;
    h=stoi(str.substr(0,2));
    string m=str.substr(3,2);
    string st=" AM\n";
    if(h>11)
    	st=" PM\n";
    if(h==0 || h==12){
    	cout<<12<<":"<<m<<st;
    }
    else{
    	if(h%12<10)
    		cout<<0<<h%12<<":"<<m<<st;
    	else
    		cout<<h%12<<":"<<m<<st;
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
