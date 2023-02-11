#include <SFML/Graphics.hpp>
#include "settings.h"
#include "functions.h"
#include "Road.h"
#include "Player.h"
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE, Style::Titlebar | Style::Close);
	window.setFramerateLimit(60);
	window.setPosition(Vector2i{ (1920 - (int)WINDOW_WIDTH) / 2, 0 });
	Surface road,road1, sand,sand1, grass,grass1;
	SurfaceInit(grass, Vector2f{ 0.f, 0.f }, "grass1.jpg", 0.f);
	SurfaceInit(grass1, Vector2f{ 0.f, -WINDOW_HEIGHT }, "grass1.jpg", 0.f);
	SurfaceInit(sand, Vector2f{ 50.f, 0.f }, "sand1.jpg", 50.f);
	SurfaceInit(sand1, Vector2f{ 50.f, -WINDOW_HEIGHT }, "sand1.jpg", 50.f);
	SurfaceInit(road, Vector2f{ 100.f,0.f }, "road1.jpg", 100.f);
	SurfaceInit(road1, Vector2f{ 100.f, -WINDOW_HEIGHT }, "road1.jpg", 100.f);
	Player player;
	playerInit(player, PLAYER_START_POS, "carpng.png");
	
	
	while (window.isOpen())
	{
		checkEvents(window);
		updateGame(road,sand,grass,road1,sand1,grass1, player);
		
		/*checkCollisions();*/
		drawGame(window, road, road1, sand, sand1, grass, grass1,player);
	}
	return 0;
}