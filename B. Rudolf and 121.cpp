#include <bits/stdc++.h>
using namespace std;

bool canZero(int n, vector<int>& arr) {
    for(long long i=1;i<n-1;i++){
    	if(arr[i-1]<=arr[i+1] && arr[i]>=2*arr[i-1]){
    		arr[i+1]-=arr[i-1];
    		arr[i]-=2*arr[i-1];
    		arr[i-1]=0;
    	}
    }
    bool x=true;
    for(int i=0;i<n;i++){
    	if(arr[i]!=0){
    		x=false;
    		break;
    	}
    }
    if(x)
    	return true;
    else 
    	return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << (canZero(n, arr) ? "YES" : "NO") << "\n";
    }

    return 0;
}
