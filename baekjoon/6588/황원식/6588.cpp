#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N=10000000;
    vector<bool> v(N);
    v[0]=true;
    v[1]=true;
    for(int i=2;i*i<=N;i++)
    {
        if(v[i]==false)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                v[j]=true;
            }
        }
    }
    while(true)
    {
        int num;
        cin >> num;
        if(num==0) break;

        for(int i=3; i<num ;i+=2)
        {

            if(v[i]==false)
            {
                if(v[num-i]==false)
                {
                    cout<<num<<" = "<<i<<" + "<<num-i<<"\n";
                    break;
                }
            }
        }
    }

}
