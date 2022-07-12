#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
using namespace std;

#ifndef Rotation
#define Rotation
//defining rotational matrix rotating about x-axis at angle ang
void xrot(float A[3][3],float ang)
{
    ang*=(M_PI/180);
    A[0][0]=1.0; 
    A[0][1]=0; 
    A[0][2]=0;
    A[1][0]=0; 
    A[1][1]=cos(ang); 
    A[1][2]=sin(ang);
    A[2][0]=0; 
    A[2][1]=sin(ang)*(-1); 
    A[2][2]=cos(ang); 
}


//defining rotational matrix rotating about y-axis at angle ang
void yrot(float A[3][3],float ang)
{
    ang*=(M_PI/180);
    A[0][0]=cos(ang); 
    A[0][1]=0; 
    A[0][2]=sin(ang)*(-1);
    A[1][0]=0; 
    A[1][1]=1.0;
    A[1][2]=0;
    A[2][0]=sin(ang); 
    A[2][1]=0; 
    A[2][2]=cos(ang); 
}


//defining rotational matrix rotating about y-axis at angle ang
void zrot(float A[3][3],float ang)
{
    ang*=(M_PI/180);
    A[0][0]=cos(ang); 
    A[0][1]=sin(ang); 
    A[0][2]=0;
    A[1][0]=sin(ang)*(-1); 
    A[1][1]=cos(ang); 
    A[1][2]=0;
    A[2][0]=0; 
    A[2][1]=0; 
    A[2][2]=1.0; 
}


void rotation(float Pos[])
{
char axi;
float ang,T_new[3][3];
cout<<"Enter axis:";
cin>>axi;
cout<<"Enter angle:";
cin>>ang;
switch(axi)
{
case 'x':
case 'X':
        xrot(T_new,ang);
        break;
case 'y':
case 'Y':
        yrot(T_new,ang);
        break;
case 'z':
case 'Z':
        zrot(T_new,ang);
        break;
}
//preparation of final transformation matrix
float temp[3];       //for temporary storage of result of multiplication
for(int i=0;i<3;i++)
{
    float sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=T_new[i][j]*Pos[j];
    }
    temp[i]=sum;
}
cout<<"The new vector is:";
for(int i=0;i<3;i++)
    Pos[i]=temp[i];
}

#endif