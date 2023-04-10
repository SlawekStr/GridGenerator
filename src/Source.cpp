#include "MovingWindow.h"

int main()
{
	MovingWindow window(1920, 1080, "Moving window template", 10000);
	window.run();

	return 0;
}