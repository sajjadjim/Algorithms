#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int NUM, W;
  cin >> NUM >> W;
  vector<int> weightS(NUM + 1), valueS(NUM + 1);
  for (int i = 1; i <= NUM; i++)
  {
    cin >> weightS[i] >> valueS[i];
  }
  vector<vector<long long>> dp(NUM + 1, vector<long long>(W + 1, 0));
  for (int i = 1; i <= NUM; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      if (j < weightS[i])
      {
        dp[i][j] = dp[i - 1][j];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weightS[i]] + valueS[i]);
      }
    }
  }
  cout << dp[NUM][W] << endl;
  return 0;
}
