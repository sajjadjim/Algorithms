#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int value;
    cin >> value; //Here number take
    while (value--)
    {
        int pos;
        cin >> pos;
        vector<int> positions(pos);

        for (int i = 0; i < pos; i++)
        {

            cin >> positions[i];

        }

        sort(positions.begin(), positions.end());

        cout << (positions[pos - 1] - positions[0]) * 2 << endl;
    }

    return 0;
}
