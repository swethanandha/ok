#include <iostream>
using namespace std;

int main()
{
 char text[] = "#65767*";
   size_t i;
   for ( i = 0; i < sizeof text - 1; ++i )
   {
      if ( isdigit(text[i]) )
      {
         cout<<text<<"numeric";
         break;
      }
   
   else
   {
   	cout<<text<<" :not numeric";
   	break;
   }
  
   }
}
