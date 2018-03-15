#include <iostream>
using namespace std;
  
// Function to find LCM
int getLCM(int a, int b) 
{
 int max;
    
   if(a>b)
   {
       max=a;
   }
   else
   {
       max=b;
   }
    
    do {
        if (max % a == 0 && max % b == 0) 
        {
            return max;
        } 
        else 
        {
         max++;
         }
        } while (true);
}
 
 
int main() {
    int x, y;
     
    cout << "Enter two integers\n";
    cin >> x >> y;
     
    cout << "LCM = " << getLCM(x, y);
    return 0;
}
