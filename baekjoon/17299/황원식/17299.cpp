#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int num;
    cin >> N;
    vector<int> v(N);
    vector<int> ans(N);
    unordered_map<int,int> m;
    stack<int> stc;


    for(int i=0 ; i<N ; i++)
    {
        cin>>num;
        v[i]=num;
        m[num]++;
    }

    for(int i=0; i<N; i++)
    {
        while(!stc.empty()&& m[v[stc.top()]] < m[v[i]] )
        {
          ans[stc.top()]=v[i];
          stc.pop();
        }
        stc.push(i);
    }
    while(!stc.empty())
    {
        ans[stc.top()]=-1;
        stc.pop();

    }
    for(int i=0;i<N;i++)
    {
        cout<<ans[i]<<" ";
    }

}


