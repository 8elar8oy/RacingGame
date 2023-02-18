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
void drawHealth(RenderWindow& window, Text& healthText) {
	window.draw(healthText);
}