#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n & 1 || n <= 2) cout << "NO";
    else cout << "YES";

    return 0;
}
