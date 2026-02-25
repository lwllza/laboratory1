#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y, a, b, c, d, e, f, g, h, i, j, k, l, m, n, q;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    a = x * x;
    b = y * y;
    c = a + b;
    d = log(c);
    e = pow(d, 3);
    f = 3.3 * pow(10, -4);
    g = f * e;
    h = fabs(y);
    i = tan(h);
    j = g + i;
    k = sin(c);
    l = sqrt(x);
    m = cos(l);
    n = 1.5 * k * m;
    q = j / n;

    cout << "q = " << q << endl;
    return 0;
}
