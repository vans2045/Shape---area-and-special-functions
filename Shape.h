#pragma once
#include<iostream>
using namespace std;

class Shape {
protected :
	float area;
public: 
	Shape();
	virtual void display();
	virtual float calArea() = 0;
};
