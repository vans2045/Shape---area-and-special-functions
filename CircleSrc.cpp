#include"Circle.h"


Circle::Circle() {
	radious = 0.0f;
}
Circle::Circle(float radious) {
	this->radious = radious;
}
void Circle::display() {
	cout << "The radious of the circle is  " << radious << endl;
	cout << "The area of the circle is   " << calArea() << endl;
	cout << "Circumferance of the circle is   " << circumf() << endl;
}
float Circle::calArea() {
	area = 3.14 * 3.14 * radious;
	return area;
}
float Circle::circumf() {
	double circumferance = 0.0f;
	circumferance = 2 * 3.14 * radious;
	return circumferance;
}
