#pragma once
#include"Shape.h"
#include"Square.h"
#include"Circle.h"

class PrintToScreen :public Shape {
public:
	static void display(Shape*sptr) {
		sptr->calArea();
		sptr->display();
		if (typeid(*sptr) == typeid(Square)) {
			Square* sqptr;
			sqptr = dynamic_cast<Square*>(sptr);
			cout << "Perimeter" << sqptr->calPeri() << endl;
		}
		if (typeid(*sptr) == typeid(Circle)) {
			Circle* cptr;
			cptr = dynamic_cast<Circle*>(sptr);
			cout << "circumferance : " << cptr->circumf()<< endl;
		}
	}
};
