#include <iostream>

using namespace std;

int fibRecursive(int N) {

    // Base case
    if(N == 0) {
        return 0;
    }
    if(N == 1){
        return 1;
    }

    return fibRecursive(N - 1) + fibRecursive(N - 2);
}

int main() {
   cout << fibRecursive(8);
}