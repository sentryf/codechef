#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    int c[300];
    int mx = INT_MIN, mi = INT_MAX; 
    

    for(int i = 0; i < 300; i++) {
        cin >> c[i];
        mx = max(mx, c[i]); 
        mi = min(mi, c[i]); 
    }

    cout<<mx<<" "<<mi<<endl;

    return 0;   
}
