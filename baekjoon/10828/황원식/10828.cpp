#include<iostream>
using namespace std;
int main()
{
   int N;
   cin >> N;
   char* op;
   int Stack[10000];
   int last=0;
   int input;
   for(int i=0; i<N;i++)
   {
        cin>>op;

        if(op=="push")
        {
            cin>>input;
            Stack[last++]=input;
        }
        else if(op=="pop")
        {
            if(last==0)
            {
                cout<<-1<<"\n";
            }
            else
            {
                cout<<Stack[last-1]<<"\n";
                last--;
            }
        }
        else if(op=="size")
        {
            cout<<last<<"\n";
        }
        else if(op=="empty")
        {
            cout<<(int)(last==0)<<"\n";
        }
        else if(op=="top")
        {
            if(last==0)
            {
                cout<<-1<<"\n";
            }
            else
            {
                cout<<Stack[last-1]<<"\n";
            }
        }
   }

   return 0;
}
