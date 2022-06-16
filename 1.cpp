/*
SI.
1.a
2.c
f(102030) = 20+f(10203)=2100
f(10203) = 20+f(1020)=2080
f(1020) = 20+f(102)=2060
f(102) = 20 + f(10) = 2040
f(10) = 2020

3.d
1
101
103
11
111
113
121
123

13
131
133
21
201
4.b
5.c
SII.
1.
a)

afisare:2020

n       p    m     k   x        c
12345   1    0     0   780      0
1234    10   20    1   92       2
123     100  20    2   92       2
123     100  20    2   4013     2
123     100  20    2   4013     2

b)
49: 9,145; 199,45
c)
#include <iostream>
using namespace std;

int main()
{
    int n, m, p, k, x, c, i;
    cin >> n;
    p = 1;
    m = 0;
    k = 0;
    while (n != 0)
    {
        cin >> x;
        for (i = 1; i <= k; i++)
        {
            x /= 10;
        }
        if (x != 0)
            c = x % 10;
        else
            c = n % 10;
        m = c * p + m;
        n /= 10;
        p *= 10;
        k++;
    }
    cout << m;
    return 0;
}
d)
#include <iostream>
using namespace std;

int main()
{
    int n, m, p, k, x, c, i;
    cin >> n;
    p = 1;
    m = 0;
    k = 0;
    while (n != 0)
    {
        cin >> x;
        x /= p;
        if (x != 0)
            c = x % 10;
        else
            c = n % 10;
        m = c * p + m;
        n /= 10;
        p *= 10;
        k++;
    }
    cout << m;
    return 0;
}
2.
struct triunghi
{
    struct{
        int x,y;
    }A,B,C;
}t;

3.
ECRAN:
8viCtORIEe

k = 32;
a = VIcToriE

SIII.
1.


void putere(int n, int &d, int &p)
{
    d = 2 ;
    int max = -1,d1;
    while(n)
    {
        p = 0;
        while(n%d==0)
        {
            p++;
            n/=d;
        }
        if(p>=max)
        {
            max = p;
            d1 = d;
        }
        d++;
    }
    d1 = d;
}

2.
#include <iostream>

using namespace std;

int main()
{
    int a[100][100], n, i, k, j;
    cin >> n >> k;
    int b;
    for (int i = 1; i <= n; i++)
    {
        b = i;
        for (int j = 1; j <= n * k; j++)
        {
            a[i][j] = b;
            if (j % k == 0)
            {
                b++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * k; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
3.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("date.in");
    int x, y, a;
    a = 0;
    fin >> x >> y;
    cout << y << " " << x << " ";
    while (a != 1)
    {
        a = abs(3 * x - y);
        cout << a << " ";
        y = x;
        x = a;
    }
    cout << 1;
    return 0;
}
*/
