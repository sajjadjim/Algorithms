
#include<stdio.h>

int main()
{
    //declaring the variables for the program
    char ch;

    //Taking the input character from the user
    printf("Enter any character: ");
    //Scanning the input provided from the user
    scanf("%c", &ch);

    //printing the successor of that character
    printf("\n");
    if(ch>=65 && ch<90)
        printf("%c", ch+1);
    else if(ch>=97 && ch<122)
        printf("%c", ch+1);
    else if(ch==90)
        printf("%c", 65);
    else if(ch==122)
        printf("%c", 122);
    else
        printf("%c", ch);

    return 0;
}
