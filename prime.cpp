#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main(int argc, char *argv[]) {
    
    unsigned long long int i=1, j=0, max=0;
    max = strtol(argv[1], nullptr, 0);
    bool prime = true;
    while ( i < max ) {
        i++;
        j = 2;
        prime = true;
        while (j < sqrt(i))
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
            j++;
        }
        if (prime == true) {cout << i << endl;}        
    }

    return 0;
}