#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Exception catching
class Shape
{
	public:
		int	height;
		int width;
		Shape(int height, int width)
		{
			this->height = height;
			this->width = width;
		}
};

class Triangle: public Shape
{
	public:
		Triangle(int height, int width): Shape(height, width){}
		int	area()
		{
			return ((this->height * this->width) / 2);
		}
};

class Rectangle: public Shape
{
	public:
		Rectangle(int height, int width): Shape(height, width){}
		int area()
		{
			return (this->height * this->width);
		}
};

class Father
{
	public:
		string	message;
		Father(string message)
		{
			this->message = message;
		}
		void	display()
		{
			cout << this->message << endl;
		}
};

class Son: public Father
{
	public:
		Son(string message): Father(message){}
};


int main(void)
{
	Father Father1 = Father("I am the Father");
	Son Son1 = Son("I am the Son");
	Father1.display();
	Son1.display();
	return (0);

}