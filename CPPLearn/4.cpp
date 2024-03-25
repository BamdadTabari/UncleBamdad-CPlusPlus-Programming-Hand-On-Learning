#include <iostream> 
using namespace std;

int main()
{                                            
	/* variable
	variable structure => type variableName = value;
	types => 
	int - stores integers (whole numbers), without decimals, such as 123 or -123
	double - stores floating point numbers, with decimals, such as 19.99 or -19.99
	char - stores single characters, such as 'a' or 'B'.
		Char values are surrounded by single quotes
	string - stores text, such as "Hello World".String values are surrounded by double quotes
	bool - stores values with two states : true or false*/

	int age = 18;
	cout << "age: " << age << endl;

	double price = 13.13;
	cout << "price" << price << endl;
	

	char canIFuckYou = 'Y';
	cout << "canIFuckYou:" << canIFuckYou << endl;
	char16_t; char32_t;
	
	string line = "wtf is happening?";
	cout << "line:" << line << endl;
	stringbuf; stringstream; u16string; u32string; wistringstream; wostringstream; // and more

	// NOTE: dont worry, I will explain all of these in next lessions later

	cout << "You won’t regret it!" << endl;  
	return 0;                                
}                                            
