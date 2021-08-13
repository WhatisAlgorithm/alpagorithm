#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;
int m[1000001];
int main()
{
    int N;
    cin>>N;
    m[1]=0;
    m[2]=1;
    m[3]=1;
    int s1,s2,s3;
    for(int i=4;i<N+1;i++)
    {
        s1=INT_MAX;
        s2=INT_MAX;
        s3=INT_MAX;

        if(i%3==0)
        {
            s1=m[i/3]+1;
        }
        if(i%2==0)
        {
            s2=m[i/2]+1;
        }
        s3=m[i-1]+1;
        m[i]=min(s1,s2);
        m[i]=min(m[i],s3);
    }
    cout<<m[N]<<endl;
    return 0;
}
