#include<iostream>
using namespace std;

string str8to2(int num)
{
    string ans;
    int bin;
    while(num>0)
    {
        bin=num%2;
        ans=(char)(bin+'0')+ans;
        num=num/2;
    }
    if(ans.size()<3)
    {
        int len=ans.size();
        for(int i=0 ;i<3-len;i++)
        {
            ans='0'+ans;
        }
    }
    return ans;
}
int main()
{
    string str;
    cin>>str;

    string ans="";
    for(int i = 0;i<str.size(); i++)
    {

        ans=ans+str8to2(str[i]-'0');
    }

    for(int i = 0;i<ans.size(); i++)
    {
        if(ans[i]!='0')
        {
            for(int j=i;j<ans.size();j++)
            {
             cout<<ans[j];
            }
            break;
        }

    }



    return 0;
}
