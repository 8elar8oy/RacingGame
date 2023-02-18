#include <SFML/Graphics.hpp>
#include "settings.h"
#include "functions.h"
#include "Road.h"
#include "Player.h"
#include "Text.h"
#include "ctime"
using namespace sf;
int main()
{
	srand(time(nullptr));
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE, Style::Titlebar | Style::Close);
	window.setFramerateLimit(60);
	window.setPosition(Vector2i{ (1920 - (int)WINDOW_WIDTH) / 2, 0 });
	Surface road, road1, sand, sand1, grass, grass1;
	Text healthText;
	Font font;
	
	initScore(healthText,health, font, textStartPos);
	SurfaceInit(grass, Vector2f{ 0.f, 0.f }, "grass1.jpg", 0.f);
	SurfaceInit(grass1, Vector2f{ 0.f, -WINDOW_HEIGHT }, "grass1.jpg", 0.f);
	SurfaceInit(sand, Vector2f{ 50.f, 0.f }, "sand1.jpg", 50.f);
	SurfaceInit(sand1, Vector2f{ 50.f, -WINDOW_HEIGHT }, "sand1.jpg", 50.f);
	SurfaceInit(road, Vector2f{ 100.f,0.f }, "road1.jpg", 100.f);
	SurfaceInit(road1, Vector2f{ 100.f, -WINDOW_HEIGHT }, "road1.jpg", 100.f);
	Player player;
	playerInit(player, PLAYER_START_POS, "carpng.png");
	//Obstacle box,box1,box2;
	Obstacle obs[3];
	ObstacleInit(obs[0], texture_arr[0]);
	for (int i = 1; i < 3; i++)
	{
		ObstacleInit(obs[i], texture_arr[i]);
	
		if (obs[i].sprite.getPosition() == obs[i - 1].sprite.getPosition()) {
			if (obs[i].sprite.getPosition().x == posx_arr[3]) {
				obs[i].sprite.setPosition(posx_arr[2], obs[i].sprite.getPosition().y);
			}
			
			

		}
	}
	/*int i = rand() % 4;
	ObstacleInit(box,texture_arr[i]);
	ObstacleInit(box1, texture_arr[i]);
	ObstacleInit(box2, texture_arr[i]);*/
	while (window.isOpen())
	{
		checkEvents(window);
		updateGame(road, sand, grass, road1, sand1, grass1, player,obs[0],obs[1],obs[2]);
		FloatRect playerHitBox = player.sprite.getGlobalBounds();
		FloatRect obsHitBox[]{ (obs[0].sprite.getGlobalBounds()),( obs[1].sprite.getGlobalBounds()), (obs[2].sprite.getGlobalBounds()) };
		for (int i = 0; i < 4; i++)
		{
			if (playerHitBox.intersects(obsHitBox[i]))
			{
				health = health - 1;
				healthText.setString(std::to_string(health));
			}
		}
	
		
		/*checkCollisions();*/
		drawGame(window, road, road1, sand, sand1, grass, grass1, player,obs[0],obs[1],obs[2],healthText);
	}
	return 0;
}