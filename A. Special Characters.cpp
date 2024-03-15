#include <iostream>
#include <string>
using namespace std;
 
void solve(long long n) {
    
    if (n % 2 == 1 || n < 2) 
        cout << "NO" << "\n";
    
    else {
        
        string result = "";
        for (long long i = 0; i < n/2; i++) 
            result += "AAB";
            
        cout << "YES" << "\n" << result << "\n";
    }
}
 
int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        solve(n);
    }
    
    return 0;
}
