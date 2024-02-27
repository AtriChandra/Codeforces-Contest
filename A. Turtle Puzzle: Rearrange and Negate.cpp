#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, sum=0;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        	cin>>v[i];
    	for(auto i:v)
    		sum+=(abs(i));
    	cout<<sum<<"\n";
    }

    return 0;
}
