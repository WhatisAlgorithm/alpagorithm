#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{

    int N;
    cin>>N;
    while(N--)
    {
        string str;
        vector<char> v;
        cin>>str;
        bool flag=1;
        for(char w:str)
        {
            if(w=='(')
            {
                v.push_back(w);
            }
            else
            {
                if(v.empty())
                {
                    cout<<"NO"<<"\n";
                    flag=0;
                    break;
                }
                v.pop_back();
            }
        }

        if(v.empty()&&flag)
        {
            cout<<"YES"<<"\n";
        }
        else if(flag)
        {
            cout<<"NO"<<"\n";
        }
    }

}
