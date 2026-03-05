#include"Square.h"

Square::Square() {
	side = 0;
}
Square::Square(float side) {
	this->side = side;
}
void Square::display() {
	cout << "the side of square is " << side << endl;
	cout << "The area of square is " << calArea() << endl;
	cout << "The perimeter of the square is " << calPeri() << endl;
}
float Square::calArea() {
	area = side * side;
	return area;
}
float Square::calPeri() {
	float peri = 0;
	peri = 4 * side;
	return peri;
}
