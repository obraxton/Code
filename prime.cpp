#include <iostream>
#include <math.h>

using namespace std;
int main() {
    unsigned long long int i, j;
    bool prime = true;
    i = 0;
    while ( i < __UINT64_MAX__ ) {
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
        if (prime == true) {
            cout << i << endl;            
        }        
    }

    return 0;
}