#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int j=0; int i=1;
  int HIGH, testCase = 1;
  while (cin >>HIGH&&HIGH!= -1)
  {
    vector<int> missile;

    missile.push_back(HIGH);

    while (cin >> HIGH && HIGH != -1)
    {
      missile.push_back(HIGH);
    }
    vector<int> dp (missile.size(), 1);
    for ( i =1;i< missile.size();i++)
    {
      for ( j=0;j<i ;j++)
      {
        if (missile[i] <= missile[j])
        {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
    }

    int max_inter = *max_element(dp.begin(), dp.end());

    if (testCase>1)

      cout << endl;

    cout << "Test #" << testCase++ << ":" << endl;

    cout << "  maximum possible interceptions: " <<max_inter<< endl;
  }

  return 0;

}
