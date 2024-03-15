#include <bits/stdc++.h>
using namespace std;

bool issorted(const std::vector<long long>& arr) {
    
    for (size_t i = 1; i < arr.size(); ++i) {
        
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

bool ispossible(std::vector<long long>& arr) {
    
    while (!issorted(arr)) {
        bool changed = false;
        for (size_t i = 0; i < arr.size(); ++i) {
            if (arr[i] >= 10) {
                long long nums = arr[i];
                arr.erase(arr.begin() + i);
                while (nums > 0) {
                    arr.insert(arr.begin() + i, nums % 10);
                    nums /= 10;
                }
                changed = true;
                break;
            }
        }
        if (!changed)
            return false;
    }
    
    return true;
}

int main() {
    
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; ++i) 
            cin >> arr[i];
        
        if (ispossible(arr)) 
            cout << "YES" << "\n";
         else 
            cout << "NO" << "\n";
        
    }
    return 0;
}
