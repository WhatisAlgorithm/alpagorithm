#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    str+="\n";
    string answer="";
    string word="";
    bool tag=false;
    for(char alpha:str)
    {
        if(alpha=='<' || tag==true )
        {
            tag=true;
            word+=alpha;
            if(alpha=='>')
            {
                answer+=word;
                word="";
                tag=false;
            }
        }
        else if(alpha==' '||alpha=='\n')
        {
            word+=alpha;
            answer+=word;
            word="";
        }
        else
        {
            word=alpha+word;
        }

    }
    cout<<answer;
    return 0;
}
