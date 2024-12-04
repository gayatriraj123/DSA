#include<iostream>
#include<string.h>
using namespace std;

bool checkPali(char word[])
{
    int i=0;
    int n=strlen(word);
    int j=n-1;

    while(i<=j)
    {
        if(word[i]!=word[j])
        {
            return false;

        }
        else
        {
            i++;
            j--;
        }
        return true;
    }
}

int get_length(char name[])
{
    int len = 0;
    int i = 0;

    while(name[i]!= '\0')
    {
        len++;
        i++;
    }
    return len;
}

int main()
{
    // char arr[100];
    // cin>>arr;
    // cout<<arr;

    // char name[100];
    // cin>>name;
    // cout<<"length is "<< get_length(name)<<endl;

    char arr[100] = " babbab";
    cout<<" palindrom "<<checkPali(arr);

    return 0;
}