#include <iostream>
#include "tui/MainLayout.h"

using namespace cppurses;

int main()
{
	System sys;
	MainLayout mainLayout;

	return sys.run( mainLayout );
}
