#include <iostream>

using namespace std;

    int fib(int N) {
        int fib1 = 0;
        int fib2 = 1;
        int newfib = 0;
        
        if(N == 1) {
            return fib2;
        }
        
        if(N == 2) {
            return fib2;
        }
        
        for(int i = 1; i < N; i++) {
            newfib = fib1 + fib2;
            fib1 = fib2;
            fib2 = newfib;
        }
        
        return newfib;
    }

int main() {
    cout << fib(8);
}