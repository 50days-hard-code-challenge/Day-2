#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int ch;
    double r, l, b,a;

   
    cin >> ch;

    switch (ch) {
        case 1:
            
            
            cin >> r;
            a = M_PI * pow(r, 2); 
            break;
			
        case 2:
           
            cin >> l;
            
            cin >> b;
            a = l * b; 
            cout << a << endl;
            break;
        
           
            break;
    }

    return 0;
}

