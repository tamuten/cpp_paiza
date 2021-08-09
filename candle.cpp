#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, min = 1000000;
    int start, last;
    for (int i = 0; i < n * 4; i++)
    {
        int p;
        cin >> p;
        if (p > max)
        {
            max = p;
        }
        if (p < min)
        {
            min = p;
        }
        if (i == 0)
        {
            start = p;
        }
        if (i == n * 4 - 3)
        {
            last = p;
        }
    }
    cout << start << " " << last << " " << max << " " << min << endl;
    return 0;
}