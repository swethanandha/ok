#include <iostream>
#include <cstring>
using namespace std;
  
int isVowel(char ch);
 
int main()
{
    char in[100], o[100];
    int i, j, writeIndex,len;
    
    cout << "Enter a string \n";
    cin.getline(in, 500);
     
    for(i = 0, j = 0; in[i] != '\0'; i++){
        if(!isVowel(in[i])){
           
            o[j++] = in[i];
        }
    }
   
    cout << "Input String: " << in << endl;
    cout << "String without Vowels: " << o<<endl;
   
    i=0;
    int temp;
    j=strlen(o)-1;
    while(i<j)
   {
    temp=o[i];
    o[i]=o[j];
    o[j]=temp;
    i++;
    j--;
   }
    cout<<"Reverse string is: "<<o;
      
    return 0;
}
  

int isVowel(char ch){
    switch(ch) {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U': {
        return 1;
    break;
   }
        default :
    return 0;
    }
}
