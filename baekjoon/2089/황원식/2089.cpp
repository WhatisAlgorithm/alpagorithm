#include<iostream>


using namespace std;

int main()
{

    int N;
    cin >> N;
    string ans="";

    while(N!=0)
    {
        if(N>0||N%-2==0)
        {
            ans=(char)((N%-2)+'0')+ans;
            N=N/-2;
        }
        else
        {
            N=(N*-1)+2;
            ans=(char)(N%2+'0')+ans;
            N=N/2;
        }
    }
    cout<<ans;
    return 0;
}
