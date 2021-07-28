#include<iostream>
#include<stack>
using namespace std;
int N;
int answers[1000000];

int main()
{

    cin >> N;
    stack<int> stc;
    stack<int> right;
    int num;
    for(int i = 1;i<N+1;i++)
    {
        cin>>num;
        stc.push(num);
    }




    while(stc.size()>0)
    {
        int current=stc.top();
        stc.pop();
        int answer=-1;
        while(!right.empty())
        {
            int r_current=right.top();
            if(r_current>current)
            {
                answer=r_current;
                break;
            }
            else
            {
                right.pop();
            }

        }
        right.push(current);
        answers[stc.size()+1]=answer;

    }
    for(int i = 1;i<N+1;i++)
    {
        cout<<answers[i]<<" ";

    }
    return 0;
}
