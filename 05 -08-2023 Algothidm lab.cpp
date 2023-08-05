#include<iostream>
using namespace std;

int linearSearch(int array[] , int n, int key)
{
    for(int i=0 ; i<n ; i++)
    {
        if (array[i] == key)
        {
            return i;
        }

    }
    return 69;
}

int main()
{
    int n , key;
    cout <<"Enter size of array : ";
    cin >> n;

    int array[n];
    cout <<"Enter elements of array  !!" <<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Array["<<i <<"] : ";
        cin >>array[i];
    }

    cout <<endl<<"Enter the key : ";
    cin >> key;

int index = linearSearch(array ,n, key);

if (index != 69)
{
    cout << "Found in index!" <<index << endl;
}
else
{
    cout <<"Not found in index !" << endl;
}
return 0;
}
