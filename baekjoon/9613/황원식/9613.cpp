#include<iostream>
#include<vector>
using namespace std;

int Gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return Gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    int N;

    cin>>Case;

    while(Case--)
    {
        long long sum=0;
        cin >> N;
        vector<int> v;
        int num;
        for(int i=0;i<N;i++)
        {
            cin>>num;
            v.push_back(num);
        }
        for(int i=0; i<N-1; i++)
        {
            for(int j=i+1;j<N;j++)
            {
                sum+=Gcd(v[i],v[j]);
            }
        }
        cout<<sum<<"\n";
    }


    return 0;
}
