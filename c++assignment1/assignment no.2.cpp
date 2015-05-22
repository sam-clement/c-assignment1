#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x, y;
    cout << "enter the two integers.\n";
    cin >> x >> y;
    
    if (x % y == 0)
    cout << "first is a multiple of the second.\n";
    else
    cout << "first is not a multiple of the second.\n";
    
    return 0;
}
