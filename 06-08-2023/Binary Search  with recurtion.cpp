#include<iostream>
using namespace std;

int Binary_search(int array[] ,int low , int high, int key)
{

if(low <= high)
{
    int mid =low + (high - low) / 2 ;
    if(array[mid] == key)
    {
        return mid;
    }
    else if(array[mid] < key)
    {
        return Binary_search(array , mid +1 , high , key);
    }
    else
        {
           return Binary_search(array , low , mid-1 , key);
    }
  }
return-1;
}

int main()
{
    int n , key;
    cout <<"Enter size of array : ";
    cin >> n;

    int array[n];
   for(int i=0 ; i<n ; i++)
    {
        cout <<" Array["<<i<<"] : ";
        cin >>array[i];
    }

    cout <<"Enter the key : ";
    cin >> key;

int index = Binary_search(array ,0 ,n -1, key);

if (index != -1)
{
    cout << "Found in index "<< index +1<<" !"  <<endl;
}
else
{
    cout <<"Not found in index !" << endl;
}
return 0;
}


