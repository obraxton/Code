#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[]) {
    
    unsigned long long int start=1, j=0, end=0;
    switch (argc) {
    case 2:
        start = 1;
        if (argv[1] == "max") {
            end = __UINT64_MAX__;
        } else {
            end = strtol(argv[1], nullptr, 0);
        }
        break;

    case 3:
        start = strtol(argv[1], nullptr, 0);
        if (argv[2] == "max") {
            end = __UINT64_MAX__;
        } else {
            end = strtol(argv[2], nullptr, 0);
        }
        break;
    default:
        cout << "Usage: prime [start] end" << endl;
        cout << endl << "end can be 'max'" << endl << endl;
        return -1;
        break;
    }
    if (start >= end) { return -1; }
    
    bool prime = true;
    while ( start < end ) {
        start++;
        j = 2;
        prime = true;
        while (j*j < start) {
            if (start % j == 0) {
                prime = false;
                break;
            }
            j++;
        }
        if (prime == true) { cout << start << endl; }        
    }

    return 0;
}