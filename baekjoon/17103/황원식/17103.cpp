#include<iostream>
#include<vector>

using namespace std;
bool v[1000001];



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> primes;
    for(long long i=2;i<1000001;i++)
    {
        if(v[i]==false)
        {
           primes.push_back(i);
           for(long long j=i*i;j<1000001;j+=i)
           {
               v[j]=true;
           }
        }
    }
    v[0]=true;
    v[1]=true;

    int N;
    cin >> N;

    int num;

    for(int i=0;i<N;i++)
    {
        cin >> num;
        int sum=0;
        for(int i=0; i<primes.size() && primes[i]<num/2+1;i++)
        {
            if(v[num-primes[i]]==false)
            {

                sum++;
            }
        }
        cout<<sum<<"\n";

    }
}
