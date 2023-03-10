#pragma once
#include "SFML/Graphics.hpp"
#include "windows.h"
#include "Road.h"
#include "Player.h"
#include "obstacle.h"
#include "text.h"

using namespace sf;
void checkEvents(RenderWindow& window) {
	Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			window.close();
	}
}

void updateGame(Surface& Grass1, Surface& Grass2, Surface& Sand1, Surface& Sand2, Surface& Road1, Surface& Road2, Player& player,Obstacle& box,Obstacle& box1,Obstacle& box2) {
	playerUpdate(player);
	SurfaceUpdate(Grass1, Grass2);
	SurfaceUpdate(Sand1, Sand2);
	SurfaceUpdate(Road1, Road2);
	ObstacleUpdate(box);
	ObstacleUpdate(box1);
	ObstacleUpdate(box2);
	
}
void checkCollisions() {


}
void drawGame(RenderWindow& window, Surface& road, Surface& road1, Surface& sand, Surface& sand1, Surface& grass, Surface& grass1, Player& player,Obstacle& box,Obstacle& box1,Obstacle& box2, Text& healthText) {
	window.clear();
	SurfaceDraw(window, grass, grass1);
	SurfaceDraw(window, sand, sand1);
	SurfaceDraw(window, road, road1);
	playerDraw(window, player);
	ObstacleDraw(window, box);
	ObstacleDraw(window, box1);
	ObstacleDraw(window, box2);
	drawHealth(window, healthText);
	window.display();
}
