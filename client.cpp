#include"PrintToScreen.h"
int main() {
	Circle c1(2.5f);
	Square s1(5.2f);

	PrintToScreen::display(&c1);
	PrintToScreen::display(&s1);
}
