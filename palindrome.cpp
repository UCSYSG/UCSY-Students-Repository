#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    char original[5], reversed[5];
    cout<<"Enter a word: ";
    cin>>original;
    for(int i = 0; i < strlen(original); i++)
    {
        for(int j = strlen(original) - 1; j >= 0; j--)
        {
            reversed[i] = original[j];
        }
    }
    int isSame = strcmp(original, reversed);
    if(isSame == 1)
    {
        cout<<"This is a palindrome.";
    }
    else
    {
        cout<<"This is not a palindrome.";
    }
    return 0;
}
