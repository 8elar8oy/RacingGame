#include <SFML/Graphics.hpp>
#include "settings.h"
#include "functions.h"
#include "Road.h"
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE, Style::Titlebar | Style::Close);
	window.setFramerateLimit(60);
	window.setPosition(Vector2i { (1920 - (int)WINDOW_WIDTH) / 2, 0 });
	Surface road;
	SurfaceInit(road,RoadPos, "road1.jpg");
	Surface sand;
	SurfaceInit(sand,SandPos,"sand1.jpg");
	Surface grass;
	SurfaceInit(grass,GrassPos,"grass1.jpg");
	while (window.isOpen())
	{
		checkEvents(window);
		updateGame();
		checkCollisions();
		drawGame(window,road,sand,grass);
	}
	return 0;
}