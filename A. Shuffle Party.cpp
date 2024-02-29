#include <iostream>
using namespace std;

int main() {
    int t2;
    cin >> t2;

    while (t2 > 0) {
        int n;
        cin >> n;
        int ans = 1;

        while (ans < n) {
            ans *= 2;
            if (ans > n) {
                ans /= 2;
                break;
            }
        }

        cout << ans << "\n";
        t2--;
    }

    return 0;
}
