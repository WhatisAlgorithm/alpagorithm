#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int num;
    int Max=0;
    vector<int> v;
    vector<int> v1={0};
    bool flag=false;
    while(N--)
    {
        cin>>num;
        if(num>Max)
        {
            Max=num;
            v.push_back(num);
            continue;
        }
        if(!v.empty()&&v.back()<num)
        {
            flag=true;
            break;
        }
        else
        {
            v.push_back(num);
        }

    }
    if(flag)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        int current=1;
        for(int num: v)
        {
            if(num>v1.back())
            {
                while(num>v1.back())
                {
                    cout<<'+'<<"\n";
                    v1.push_back(current);
                    current++;
                }
                v1.pop_back();
                cout<<"-"<<"\n";
            }
            else
            {
                v1.pop_back();
                cout<<"-"<<"\n";
            }

        }
    }
    return 0;
}
