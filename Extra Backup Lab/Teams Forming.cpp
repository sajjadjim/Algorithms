#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int value;  // Call a integer value

  cin >> value; //Take Data Input

  vector<int> skill(value);

  for (int i = 0; i < value; i++)
  {
    cin >> skill[i];
  }
  sort(skill.begin(), skill.end());
  int totalNumber = 0;
  for (int i = 0; i < value; i += 2)
  {
    totalNumber += skill[i + 1] - skill[i];
  }
  cout << totalNumber << endl;

  return 0;

}
