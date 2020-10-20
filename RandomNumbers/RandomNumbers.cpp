#include <iostream>
#include <ctime>

using namespace std;

int main() {

    // interval to generate random number
    int first, last;

    cout << "------------------------------------------------------------" <<endl;
    cout << "Enter first number of the range: ";
    cin >> first;
    cout << "Enter last number of the range: ";
    cin >> last;

    // generate rnadom number
    srand(time(0));

    cout << "Random number between " << first << " and " << last << " is: ";

    cout << first + rand() % static_cast<int>(last-first + 1) << endl;

    return 0;
}