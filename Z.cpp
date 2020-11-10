#include <iostream>
using namespace std;
int main()
{
    int a, c;
    cin >> a;
    int n1 = 0, n2 = 1;
    for (int i = 0; i < a; i++) {
        cout << n2 << " ";
        c = n2-n1;
        n2 = n2 + n1;
        n1 += c;
    }
    return 0;
}

