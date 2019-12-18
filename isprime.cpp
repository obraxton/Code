#include <cstdlib>
int main(int argc, char *argv[]) {
    if (argc != 2) { return -1; }
    int test = strtol(argv[1],nullptr,0);
    for (int i = 2; i*i < test; i++) {
    if (test % i == 0 ) {
        return 1;
    } 
    return 0;
}