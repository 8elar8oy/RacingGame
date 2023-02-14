#pragma once
#include "windows.h"
#include "settings.h"
#include "Player.h"
#include "obstacle.h"
using namespace sf;
void checkLives(int& health) {
	if (health == 0) {
		exit(0);
	}
}
void initScore(Text& text, int count, Font& font, const Vector2f textStartPos) {
	font.loadFromFile("ds-digib.ttf");
	text.setString(std::to_string(count));
	text.setFont(font);
	text.setFillColor(Color::White);
	text.setCharacterSize(CHAR_SIZE);
	text.setPosition(textStartPos);
}
void updateHealth(Player& player, Text& healthText,Obstacle& car ) {
	if (((player.sprite.getPosition().x >= car.sprite.getPosition().x && player.sprite.getPosition().x <= car.sprite.getPosition().x + 100) &&
		(player.sprite.getPosition().y >= car.sprite.getPosition().y && player.sprite.getPosition().y <= car.sprite.getPosition().y + 200))/*&&
		(car.sprite.getPosition().x >= player.sprite.getPosition().x && car.sprite.getPosition().x <= player.sprite.getPosition().x + 100) &&
		(car.sprite.getPosition().y >= player.sprite.getPosition().y && car.sprite.getPosition().y <= player.sprite.getPosition().y + 200)*/) {
		health = health - 1;
		healthText.setString(std::to_string(health));
		player.speedx = -player.speedx;
		/*player.sprite.setPosition(BALL_START_POS);
		ball.speedx = 0;
		ball.speedy = 0;*/
	}
}
void drawHealth(RenderWindow& window, Text& healthText) {
	window.draw(healthText);
}