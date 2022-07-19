#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l; // given limit
    cin>>l;
    int a, b, c = 0;
    int p = 2;
    while (c < l) {
        for (int q = 1; q < p; ++q) {
            a = p * p - q * q;
            b = 2 * p * q;
            c = p * p + q * q;
            if (c > l)
                break;

            printf("%d %d %d\n", a, b, c);
        }
        p++;
    }
    return 0;
}
