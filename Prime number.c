//C Program to check whether a number is prime or not
#include <stdio.h>
int main()
{
    int n;        //Declare the nummber
    printf("Enter the number: ");
    scanf("%d",&n);    //Initialize the number
    if(n == 1){
        printf("1 is neither prime nor composite.");
        return 0;
    }
    int count = 0;         //Declare a count variable
    for(int i = 2; i < n; i++)  //Check for factors
    {
        if(n % i == 0)
            count++;
    }
    if(count == 0)           //Check whether Prime or not
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    return 0;
}
