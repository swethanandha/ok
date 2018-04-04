#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include<conio.h>

using namespace std;

class romanType
{
private:
	string romanNum;
	int arabicNum,convertNum;
	
public:
	romanType();
	void romanNum_set();
	void arabicNum_set(int number);
	int arabicNum_get();
	void convertNum_set();
	void displayNum();
};

romanType::romanType()
{
	romanNum ;
	arabicNum;
	convertNum = 0;

};

void romanType::romanNum_set()
{
	cout << "Enter roman numeral: ";
	cin >> romanNum;

};

void romanType::convertNum_set()
{
  static const std::string roman[]   = {"M","D","C","L","X","V","I"};
  static const int decimal[] = { 1000,500,100,50,10,5,1};
  static const size_t size = sizeof(decimal)/sizeof(decimal[0]);

  int number = 0;
  size_t index = 0;
  for(int i = 0; i<size; i++)
  {
    while(romanNum.substr(index, roman[i].length()) == roman[i])
    {
      number += decimal[i];
      index += roman[i].length();
	 arabicNum_set(number);
	 convertNum=number;
    }
  }
};

void romanType::arabicNum_set(int number)
{
	arabicNum = number;
};

void romanType::displayNum()
{
	cout<<"the roman number is: "<<romanNum<<endl;
	cout <<"the arabic number is: "<<arabicNum<<endl;
	cout <<"the conversion is: "<<convertNum<<endl;
};


int main()
{
romanType romanType;

 romanType.romanNum_set();
 romanType.convertNum_set();
 romanType.displayNum();


return 0;
};
void roman_2_decimal(const std::string& i_string)
{
  static const std::string roman[]   = {"M","D","C","L","X","V","I"};
  static const int decimal[] = { 1000,500,100,50,10,5,1};
  static const size_t size = sizeof(decimal)/sizeof(decimal[0]);

  int value = 0;
  size_t index = 0;
  for(int i = 0; i<size; ++i)
  {
    while(i_string.substr(index, roman[i].length()) == roman[i])
    {
      value += decimal[i];
      index += roman[i].length();
    }
  }
  
}
