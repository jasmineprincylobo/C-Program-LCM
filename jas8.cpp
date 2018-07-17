
//to find LCM  of 2 numbers
#include<iostream>
using namespace std;

int LCM(int x,int y)
{
int max=0;
max=(x>y)?x:y;
while(true)
{
if(max%x==0 && max%y==0)
{
return max;
break;
}
else
++max;

}
}



int main()
{
int a,b,r;
cout<<"enter 2 numbers:"<<endl;
cin>>a>>b;
r=LCM(a,b);
cout << "LCM = " << r;


return 0;
}

