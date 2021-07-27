#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char> words;
    string str;
    char op;
    char data;
    int N;
    cin>>str>>N;
    for(char word:str)
    {
        words.push_back(word);
    }
    auto it=words.end();

    for(int i=0; i< N ; i++)
    {
        cin>>op;
        if(op=='L')
        {
            if(it!= words.begin() )
            {
                it--;
            }

        }
        else if(op=='D')
        {
            if(it!=words.end())
            {
                it++;
            }
        }
        else if(op=='B')
        {
            if(it!= words.begin())
            {
                it=words.erase(--it);
            }
        }
        else if(op=='P')
        {
            cin>>data;
            words.insert(it,data);
        }
    }
    for(char word:words)
    {
        cout<<word;
    }

    return 0;
}
