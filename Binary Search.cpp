#include<iostream>
using namespace std;

int Binary_search(int array[] , int n, int key)
{
int low =0;
int high = n-1 ;
while(low <= high)
{
    int mid =low + (high - low) / 2 ;
    if(array[mid] == key)
    {
        return mid;
    }
    else if(array[mid] < key)
    {
        low = mid +1;
    }
    else
        {
            high = mid -1;
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

int index = Binary_search(array ,n, key);

if (index != -1)
{
    cout << "Found in index!" << index +1 <<endl;
}
else
{
    cout <<"Not found in index !" << endl;
}
return 0;
}

