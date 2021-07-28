#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> stc;
    bool isRazer=false;
    int answer=0;

    for(char word: str)
    {
        if(word=='(')
        {
            isRazer=true;
            stc.push(word);
        }
        else
        {
            if(isRazer)
            {
                stc.pop();
                answer+=stc.size();
            }
            else
            {
                stc.pop();
                answer++;
            }
            isRazer=false;
        }
    }
    cout<<answer<<"\n";
}
