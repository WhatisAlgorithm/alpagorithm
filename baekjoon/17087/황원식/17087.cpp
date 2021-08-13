#include<iostream>
#include<vector>
using namespace std;

int Gcd(int a,int b)
{
    if(b==0) return a;
    return Gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,S,num;

    cin >> N >> S;
    vector<int> v(N);
    for(int i =0; i<N ; i++ )
    {
        cin>>num;
        if(num>S)
        {
          v[i]=num-S;
        }
        else
        {
          v[i]=S-num;
        }

    }


    while(v.size()>1)
    {
        int num1=v.back();
        v.pop_back();
        int num2=v.back();
        v.pop_back();
        v.push_back(Gcd(num1,num2));
    }
    cout<<v[0]<<endl;

}
