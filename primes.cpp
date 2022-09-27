#include <iostream>
#include <cmath>

using namespace std;

int nth_prime(double n) {
   long long s = 1;
    
    for (long long i = 1; i <= pow(2, n); i++) {
        double c = 0;
        for (long long j = 1; j <= i; j++) {
            double f = (tgamma(j)+1)/j;
            c+=floor(pow(cos(M_PI*f), 2));
        }
        s+=floor(pow(n/c, 1/n));
    }

    return s;

}

int main() {

    for(int i = 1; i<6; i++) {
        cout << nth_prime(i) << endl;
    }
    return 0;
}
