#include <iostream>

using namespace std;
int findMin(int x, int y)
{
    if (x < y) return x;
    else return y;
}
int findMax(int x, int y)
{
    if (x > y) return x;
    else return y;
}
int main()
{
    int a, b, c, d, e;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    cout << "Enter fourth number: ";
    cin >> d;
    cout << "Enter fifth number: ";
    cin >> e;


    int mymin = findMin(a, findMin(b, findMin(c, findMin(d, e))));
    int mymax = findMax(a, findMax(b, findMax(c, findMax(d, e))));
    cout << "Max: " << mymax << endl;
    cout << "Min: " << mymin;
    return 0;
}
