// eucl_alg.cpp: Aleksandar Todorović
// Description: An implentation of Euclidean Algorithm for computing gcd.
//              More information: https://en.wikipedia.org/wiki/Euclidean_algorithm

#include <iostream>
using namespace std;

int gcd (int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return(a);
}

int main () {
    int x, y;
    cout << "Enter two integers (separated by space): ";
    if (!(cin >> x >> y)) {
        cout << "Please enter only integers" << endl;
    } else {
        cout << "gcd(" << x << ", " << y << ") = " << gcd(x,y) << endl;
    }
    return(0);
}
