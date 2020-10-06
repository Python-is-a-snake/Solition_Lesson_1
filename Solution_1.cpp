#include <iostream>

using namespace std;
int main() {
    int a, b, c ,d;
    cout << "Enter 1 int: ";
    cin >> a;
    cout << "Enter 2 int: ";
    cin >> b;
    cout << "Enter 3 int: ";
    cin >> c;
    cout << "Enter 4 int: ";
    cin >> d;
    if ( a < b && a < c && a < d){
        cout << a;
    }
    if(b < a && b < c && b < d){
        cout << b;
    }
    if(c < a && c < b && c < d){
        cout << c;
    }
    if(d < a && d < b && d < c){
        cout << d;
    }
    return 0;
}