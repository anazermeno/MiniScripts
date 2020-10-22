#include <iostream>
#include <string>
#include <vector>

using namespace std;

     void reverseString(vector<char>& s) {
        
        char prob1, prob2;
 
        int j = s.size() - 1;
        for(int i = 0; i < j; i++) {
            
            prob1 = s[i];
            prob2 = s[j];
            
            s[i] = prob2;
            s[j] = prob1;
            j--;
        }
    }

int main() {
    vector<char> s;
    s.push_back('h');
    s.push_back('e');
    s.push_back('l');
    s.push_back('l');
    s.push_back('o');

    reverseString(s);

    for(int i = 0; i <= s.size() - 1; i++){
        cout << s[i] << " ";

    }
}