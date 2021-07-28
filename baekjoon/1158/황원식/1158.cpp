#include<iostream>
#include<list>
using namespace std;
int main()
{
    int N;
    int K;
    list<int> li;
    cin>>N>>K;
    for(int i=0;i<N;i++)
    {
        li.push_back(i+1);
    }
    auto it=li.begin();
    cout<<"<";
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<K-1;j++)
        {
            it++;
            if(it==li.end()) it=li.begin();
        }
        if(i!=N-1)
        {
            cout<<*it<<", ";
        }
        else
        {
            cout<<*it<<">";
        }

        it=li.erase(it);
        if(it==li.end()--)
        {
            it=li.begin();
        }

    }

}
