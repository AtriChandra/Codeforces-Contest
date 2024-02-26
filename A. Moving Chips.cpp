#include <iostream>
#include <vector>
 
using namespace std;
 
// Function to calculate minimum operations for each test case
int min_operations(int n, vector<int>& chips) {
    vector<int> chip_positions;
    for (int i = 0; i < n; ++i) {
        if (chips[i] == 1) {
            chip_positions.push_back(i);
        }
    }
 
    int num_chips = chip_positions.size();
 
    if (num_chips <= 1) {
        return 0;
    }
 
    int operations = 0;
    for (int i = 1; i < num_chips; ++i) {
        operations += chip_positions[i] - chip_positions[i - 1] - 1;
    }
 
    return operations;
}
 
// Main function to read input and print output
int main() {
    int t; // Number of test cases
    cin >> t;
 
    for (int test_case = 0; test_case < t; ++test_case) {
        int n; // Number of cells
        cin >> n;
 
        vector<int> chips(n); // Chip configuration
        for (int i = 0; i < n; ++i) {
            cin >> chips[i];
        }
 
        int result = min_operations(n, chips);
        cout << result << endl;
    }
 
    return 0;
}
