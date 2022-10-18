#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        char str[20];
        int i;
        cout<<"\n Enter String in Uppercase : ";
        cin>>str;
        for(i=0; i<=strlen(str); i++)
        {
                if(str[i]>=65 && str[i]<=90)
                {
                        str[i]=str[i]+32;
                }
        }
        cout<<"\n Conversion of above String into Lowercase : "<<str;
        return 0;
}
