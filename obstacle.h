#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct Obstacle {
	Texture texture;
	Sprite sprite;
	float speedy;
};
void ObstacleInit(Obstacle& box, Vector2f boxPos, std::string filename) {
	box.texture.loadFromFile(filename);
	box.sprite.setTexture(box.texture);
	box.sprite.setPosition(boxPos);
	
}
void ObstacleDraw(RenderWindow& window, Obstacle& box) {
	window.draw(box.sprite);
	
}
void ObstacleUpdate(Obstacle& box,int i) {
	box.speedy = CAR_OBSTACLE_SPEED;
	box.sprite.move(0.f, box.speedy);
	if (box.sprite.getPosition().y >= WINDOW_HEIGHT)
	{
		srand(time(nullptr));
		//int i = rand() % 4;
		box.sprite.setPosition(pos_arr[i]);
	}
}

