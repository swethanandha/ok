# include <iostream>

using namespace std;

int main()
 { 
         int i;
         char a[30];
         cin.getline(a,30);   //To Input a String
         a[0]=a[0]-32;        //For First Letter

         for(i=0;a[i]!='\0';i++)
        {
             if(a[i]==' ')
             {
                 a[i+1] = a[i+1]-32;
             }
       }

       cout<<a; 
       return 0;
 }

OUTPUT
