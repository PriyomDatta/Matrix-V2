#include"Rot.hpp"

int main()
{
    float Vec[3];
    cout<<"Enter The vector:";
    for(int i=0;i<3;i++)
        cin>>Vec[i];
    char c;
    do
    {
        char Typ_op;
        cout<<"Enter type of operation:";
        cout<<"\nFor rotation press r and for linear press l:";
        cin>>Typ_op;
        if(Typ_op=='r'||Typ_op=='R')
        {rotation(Vec);}
        cout<<"\nThe vector with respect to current frame is:";
        for(int i=0;i<3;i++)
        {
            cout<<Vec[i]<<"\t";
        }
        cout<<"\nIf you have any other operation press y else press any other key";
        cin>>c;
    } while (c=='y'||c=='Y');
    
    return 0;
}