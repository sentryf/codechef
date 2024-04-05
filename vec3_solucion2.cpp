#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int A[10]; 

    while (t--) {
        int e1 = 0, e2 = 0;
        for (int i = 0; i < 10; i++) 
        {
            cin >> A[i];
            
            if (i % 2 == 0) {
                e1 += A[i]; 
            } else {
                e2 += A[i]; 
            }
        }

        if (e1 > e2) {
        cout << "1" << endl;
        } else if (e2 > e1) {
        cout << "2" << endl;
        } else {
        cout << "0" << endl;
        }
    }

    return 0;
}
