#include<iostream>

using namespace std;
int Gcd(int a, int b)
{
    if(b==0){
        return a;
    }
    return Gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd=Gcd(a,b);
    int lcm=a*b/gcd;
    cout<<gcd<<"\n"<<lcm;
    return 0;
}
