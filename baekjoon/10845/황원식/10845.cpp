#include<iostream>
using namespace std;
int Que[10000];
int start=0;
int last=0;
bool Empty()
{
    return start==last;
}
void Push()
{
    int num;
    cin>>num;
    Que[last++]=num;
}
int Pop()
{
    if(Empty())
    {
        return -1;
    }
    else
    {
        return  Que[start++];
    }
}
int Size()
{
    return last-start;
}
int Front()
{
    if(Empty())
    {
        return -1;
    }
    else
    {
        return Que[start];
    }

}
int Back()
{
    if(Empty())
    {
        return -1;
    }
    else
    {
        return Que[last-1];
    }

}
int main()
{
    int N;
    cin>>N;
    string op;
    for(int i=0;i<N;i++)
    {
        cin>>op;
        if(op=="push")
        {
            Push();
        }
        else if(op=="pop")
        {
            cout<<Pop()<<"\n";
        }
        else if(op=="size")
        {
            cout<<Size()<<"\n";
        }
        else if(op=="empty")
        {
            cout<<Empty()<<"\n";
        }
        else if(op=="front")
        {
            cout<<Front()<<"\n";
        }
        else if(op=="back")
        {
            cout<<Back()<<"\n";
        }
    }
}
