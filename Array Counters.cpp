#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int m, n;

    cin >> m >> n;
    int arr[m];
    int c[n] = {0}; 

    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < m; i++) {
        for(int j = 1; j <= n; j++) {
            if(arr[i] == j) {
                c[j]++;
            }
        }
    }

    
    for(int i = 1; i <= n; i++) {
        cout<<c[i]<<" ";
    }

    return 0;
}
