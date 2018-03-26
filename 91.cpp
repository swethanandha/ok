#include <iostream>
using namespace std;
int main()
{
   int l,w,h,c;
   cout<<"enter the length of cuboid :";
   cin>>l;
   cout<<"enter the width of cuboid :";
   cin>>w;
   cout<<"enter the height of cuboid :";
   cin>>h;
   cout<<"volume of cuboid :";
   cout<<l*w*h<<endl;
   cout<<"total surface area of cuboid :";
   c=(2*(l*w+l*h+h*w));
   cout<<c;
}
