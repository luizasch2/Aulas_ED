#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c, delta, r_1, r_2;
    
    cin >> a >> b >> c;

    // cout << a << b << c;
    delta = pow(b,2) - 4*a*c;
    
    if (delta < 0){
        delta = (-1)*delta;
        r_1 = -b/2*a;
        r_2 = -b/2*a;   

        cout << "R1: " << r_1 << " + " << sqrt(delta)/2*a << "i" << endl;
        cout << "R2: " << r_2 << " - " << sqrt(delta)/2*a << "i" << endl;

        return 0;

    }
    
    r_1 = (-b + sqrt(delta))/2*a;

    r_2 = (-b - sqrt(delta))/2*a;
    
    cout << "R1: " << r_1 << endl;
    cout << "R2: " << r_2 << endl;
}