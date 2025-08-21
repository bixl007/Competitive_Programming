#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ts;
    cin >> ts;

    while (ts--)
    {
        string a, b, c;
        int n, m;
        cin >> n >> a >> m >> b >> c;
        int n1 = 0, s = c.size();

        for (int i = 0; i < s; i++)
        {
            if(c[i] == 'D')
                a += b[n1++];
            if(c[i] == 'V')
                a = b[n1++] + a;
        }

        cout << a << endl;
    }
}