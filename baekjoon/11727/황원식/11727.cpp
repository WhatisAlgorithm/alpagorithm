#include<iostream>

using namespace std;
int m[1001];
int main()
{
    int N;
    cin>>N;

    m[1]=1;
    m[2]=3;
    for(int i=3;i<N+1;i++)
    {
        m[i]=(2*m[i-2]+m[i-1])%10007;
    }
    cout<<m[N]<<endl;
    return 0;
}
