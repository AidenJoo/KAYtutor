#include "includes.h"

int main()
{
	Rectangle rect1;
	Rectangle rect2;
	
	rect1.set_width(/* Put width here */);
	rect1.set_length(/* Put length here */);
	
	rect2.set_width(/* Put width here */);
	rect2.set_length(/* Put length here */);


	cout << "The width of rect1 is: " << rect1.get_width() << endl;
	cout << "The length of rect1 is: " << rect1.get_length() << endl;

	cout << "The width of rect2 is: " << rect2.get_width() << endl;
	cout << "The length of rect2 is: " << rect2.get_length() << endl;


	cout << "The area of rect1 is: " << rect1.area() << endl;
	cout << "The area of rect2 is: " << rect2.area() << endl;

	return 0;
}
