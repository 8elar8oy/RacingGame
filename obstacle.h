#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
struct Obstacle {
	Texture texture;
	Sprite sprite;
	float speedy;
};

void ObslatcleSpawn(Obstacle& obs) {
	int x ,y;
	
	x = rand() % 4;
	//y = rand() % 4;
	
	Vector2f obsPos(posx_arr[x], posy_arr[x]);
	obs.sprite.setPosition(obsPos);
	
}
void ObstacleInit(Obstacle& obs,std::string filename) {
	obs.texture.loadFromFile(filename);
	obs.sprite.setTexture(obs.texture);
	ObslatcleSpawn(obs);
}

void ObstacleUpdate(Obstacle& obs) {
	obs.speedy = CAR_OBSTACLE_SPEED;
	obs.sprite.move(0.f, obs.speedy);
	if (obs.sprite.getPosition().y >= WINDOW_HEIGHT)
	{
		ObslatcleSpawn(obs);

	}
}

void ObstacleDraw(RenderWindow& window, Obstacle& obs) {
	window.draw(obs.sprite);
	
}