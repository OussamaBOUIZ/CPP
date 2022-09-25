#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Exception catching
class Chef
{
	string name;
	string age;
	public:
		Chef(string name, string age)
		{
			this->name = name;
			this->age = age;	
		}
		void makeChicken()
		{
			cout << "The chef's making chicken" << endl;
		}
		void makeSalad()
		{
			cout  << "The chef's making salad" << endl;
		}
		void makeSpecialDish()
		{
			cout << "The chef makes a special dish" << endl;
		}
};

class ItalianChef : public Chef
{
	public:
		string	countryOfOrigin;
		ItalianChef(string name, string age , string countryOfOrigin) : Chef(name, age)
		{
			this->countryOfOrigin = countryOfOrigin;
		}
};

int main()
{
	ItalianChef chefy = ItalianChef("mamel", "21", "RUSSIA 🇵🇼");
	
	return (0);
}