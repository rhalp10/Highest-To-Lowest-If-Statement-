#include<iostream.h>
#include<conio.h>

void main()
{ clrscr();

int n1,n2,n3,n4,n5;
cout<<"Number1:";
cin>>n1;
cout<<"Number2:";
cin>>n2;
cout<<"Number3:";
cin>>n3;
cout<<"Number4:";
cin>>n4;
cout<<"Number5:";
cin>>n5;
if (n1>n2 && n1>n3 && n1>n4 && n1>n5)
cout<<"This Number Is The Highest:"<<n1<<endl;
else if(n2>n1 && n2>n3 && n2>n4 && n2>n5)
cout<<"This Number Is The Highest:"<<n2<<endl;
else if(n3>n1 && n3>n2 && n3>n4 && n3>n5)
cout<<"This Number Is The Highest:"<<n3<<endl;
else if (n4>n1 && n4>n2 && n4>n3 && n4>n5)
cout<<"This Number Is The Highest:"<<n4<<endl;
else if (n5>n1 && n5>n2 && n5>n3 && n5>n4)
cout<<"This Number Is The Highest:"<<n5<<endl;
else
cout<<"Error";
if (n1<n2 && n1<n3 && n1<n4 && n1<n5)
cout<<"This Number Is The Lowest:"<<n1<<endl;
else if(n2<n1 && n2<n3 && n2<n4 && n2<n5)
cout<<"This Number Is The Lowest:"<<n2<<endl;
else if(n3<n1 && n3<n2 && n3<n4 && n3<n5)
cout<<"This Number Is The Lowest:"<<n3<<endl;
else if(n4<n1 && n4<n2 && n4<n3 && n4<n5)
cout<<"This Number Is The Lowest:"<<n4<<endl;
else if(n5<n1 && n5<n2 && n5<n3 && n5<n4)
cout<<"This Number Is The Lowest:"<<n5<<endl;
else
cout<<"Error";

getch();
}
