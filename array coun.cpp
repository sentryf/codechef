#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n;

    
    cin >> m >> n;

    
    vector<int> arr(m);
    vector<int> c(n + 1, 0);

    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < m; i++) {
        c[arr[i]]++;
    }

    for(int i = 1; i <= n; i++) {
        cout << c[i]<<" ";
    }

    return 0;
}
