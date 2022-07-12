#include<iostream>

#ifndef Linear
#define Linear
using namespace std;
void line(float Vec[])
{
    char c;
    float dis;
    cout<<"Ente the axis(x/y/z): ";
    cin>>c;
    cout<<"Enter the amount of shift in unit: ";
    cin>>dis;
    if((c=='x')||(c=='X'))
        Vec[0]-=dis;
    else if((c=='y')||(c=='Y'))
        Vec[1]-=dis;
    else if((c=='z')||(c=='Z'))
        Vec[2]-=dis;
}

#endif