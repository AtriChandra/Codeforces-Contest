#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;

        vector<pair<long long, char>> throws(m);
        
        for (long long i = 0; i < m; i++) {
            cin >> throws[i].first >> throws[i].second;
        }

        set<long long> pos;
        pos.insert(x);

        for (long long i = 0; i < m; i++) {
        	
            set<long long> new_pos;
            
            for (long long p : pos) {
                long long new_p;
                long long r = throws[i].first;
                long long c = throws[i].second;

                if (c == '0') {  
                    new_p = (p + r) % n;
                    if (new_p == 0) {
                        new_p = n;
                    }
                } 
                else if (c == '1') { 
                    new_p = (p - r + n) % n;
                    if (new_p == 0) {
                        new_p = n;
                    }
                } 
                else {  
                    long long new_p_cw = (p + r) % n;
                    if (new_p_cw == 0) {
                        new_p_cw = n;
                    }
                    long long new_p_ccw = (p - r + n) % n;
                    if (new_p_ccw == 0) {
                        new_p_ccw = n;
                    }
                    new_pos.insert(new_p_cw);
                    new_pos.insert(new_p_ccw);
                    continue;
                }

                new_pos.insert(new_p);
            }

            pos = new_pos;
            
        }

        cout << pos.size() << "\n";
        
        for (long long p : pos) {
            cout << p << " ";
        }
        
        cout << "\n";
    }

    return 0;
}
