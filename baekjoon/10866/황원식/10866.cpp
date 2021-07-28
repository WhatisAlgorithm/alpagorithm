#include<iostream>
using namespace std;
int Que[20000];
int start=10000;
int last=10000;
bool Empty()
{
    return start==last;
}
void PushBack()
{
    int num;
    cin>>num;
    Que[last++]=num;
}
void PushFront()
{
    int num;
    cin>>num;
    Que[--start]=num;
}
int PopFront()
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
int PopBack()
{
    if(Empty())
    {
        return -1;
    }
    else
    {
        return  Que[--last];
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
        if(op=="push_front")
        {
            PushFront();
        }
        else if(op=="push_back")
        {
            PushBack();
        }
        else if(op=="pop_front")
        {
            cout<<PopFront()<<"\n";
        }
        else if(op=="pop_back")
        {
            cout<<PopBack()<<"\n";
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
