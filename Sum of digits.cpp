#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a, b, c, t;
    vector<int> sumas;

    cin >> t;
    
    while (t--) {
        cin >> a >> b >> c;

        int r = a * b + c;
        int suma = 0; 

        while (r > 0) {
            suma += r % 10; 
            r = r / 10;     
        }
         sumas.push_back(suma);
    }

    for(int x : sumas)
    {
        cout<<x<<" ";
    }
    return 0;
}

