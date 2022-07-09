#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    char word[5];
    bool flag;
    cout<<"Enter a word (no more than 5 characters): ";
    cin>>word;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 5; j >= 0; j--)
        {
            flag = word[i]==word[j]? true: false;
        }
    }
    if(flag)
    {
        cout<<"You entered a palindrome word.";
    }
    else
    {
        cout<<"This is a normal word.";
    }
    return 0;
}
