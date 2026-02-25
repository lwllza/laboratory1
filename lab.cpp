#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int result1 = -m + ++n;
    cout << "Result 1: " << result1 << endl;
    bool result2 = m++ < n;
    cout << "Result 2: " << boolalpha << result2 << endl;
    bool result3 = n-- > m++;
    cout << "Result 3: " << boolalpha << result3 << endl;
    return 0;
}
