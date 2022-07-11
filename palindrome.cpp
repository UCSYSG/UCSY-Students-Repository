#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    int size;
    char str[size], newstr[size];
    int ans=0;
    cout<<"enter a name and its size: ";
    cin>>str>>size;
    for(int i=strlen(str)-1; i>-1; i--)
    {
        newstr[i]=str[i];
        cout<<newstr[i];
    }
        cout<<endl;
    for(int i=0; i<size;i++){
    if(str[i]==newstr[size-i-1])
    {
        ans++;
    }
    }
    if(ans==size)
    {
        cout<<"It is palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}
