#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        string str, ans;
        cin >> str;
        int n = str.length();

        if (n <= 2)
        {
            cout << str << endl;
            continue;
        }

        if (!(str.find("FFT") != string::npos) && !(str.find("NTT") != string::npos))
        {
            cout << str << endl;
            continue;
        }
        vector<int> arr(26, 0);

        for (char ch : str)
        {
            arr[ch - 'A']++;
        }

        if (arr['T' - 'A'])
        {
            ans += string(arr['T' - 'A'], 'T');
            arr['T' - 'A'] = 0;
        }

        if (arr['F' - 'A'])
        {
            ans += string(arr['F' - 'A'], 'F');
            arr['F' - 'A'] = 0;
        }

        if (arr['N' - 'A'])
        {
            ans += string(arr['N' - 'A'], 'N');
            arr['N' - 'A'] = 0;
        }

        for (int i = 0; i < 26; i++)
        {
            if (arr[i])
            {
                ans += string(arr[i], 'A' + i);
            }
        }

        cout << ans << endl;

    }
}

