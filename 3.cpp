#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool isthree = false;
        int total;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '.' && (i + 1 < n && str[i + 1] == '.') && (i + 2 < n && str[i + 2] == '.'))
            {
                isthree = true;
                break;
            }
            if (str[i] == '.')
            {
                total++;
            }
        }
        if (isthree)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << total << endl;
        }
        total = 0;
    }
    return 0;
}