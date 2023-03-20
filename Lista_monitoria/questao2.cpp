#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c, delta, r_1, r_2;
    
    cin >> a >> b >> c;

    delta = pow(b,2) - 4*a*c;
    
    if (delta < 0){
        cout << "Impossível calcular" << endl;
        return 0;
    }
    
    r_1 = (-b + sqrt(delta))/2*a;

    r_2 = (-b - sqrt(delta))/2*a;
    
    cout << "R1: " << r_1 << endl;
    cout << "R2: " << r_2 << endl;
}