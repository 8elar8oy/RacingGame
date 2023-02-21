#pragma once
#include "SFML/Graphics.hpp"
struct Explosion
{
	
	sf::Texture textureArr[9];
	sf::Sprite sprite;
	sf::Clock timer;
	sf::Vector2f pos;
	int frame;
};
void ExplosionInit(Explosion& boom,sf::Vector2f pos) {
	boom.pos = pos;
	for (int i = 0; i < 9; i++)
	{
		boom.textureArr[i].loadFromFile("boom" + std::to_string(i+1)+".png");
	}
	boom.sprite.setTexture(boom.textureArr[0]);
	boom.sprite.setPosition(boom.pos);
	boom.timer.restart();
	boom.frame = 0;
}
void ExplosionDraw(sf::RenderWindow& window, Explosion& boom) {
	float time = boom.timer.getElapsedTime().asMilliseconds();
	float boom_width = boom.sprite.getGlobalBounds().width;
	float boom_height = boom.sprite.getGlobalBounds().height;
	float boom_x = boom.pos.x - boom_width / 2;
	float boom_y = boom.pos.y - boom_height / 2;
	boom.sprite.setPosition(boom_x, boom_y);
	if (time > 125.f) {
		boom.frame ++;
		boom.sprite.setTexture(boom.textureArr[boom.frame]);
		
	}
	if (boom.frame >= 8) boom.frame = 0;
	window.draw(boom.sprite);
}
