 #include <iostream>

using namespace std;
int main()
{
    
        int num,c=0,r=0;
        cin>>num;
       while(num>0) 
                   { 
                      if((num %10==0)|| (num%10==1)) 
                          c++; 
                          r++; 
                         num=num/10; 
                   } 
        if(c==r)
        {
            cout<<"binary";
        }
        else
        {
            cout<<"no";
        }
}


