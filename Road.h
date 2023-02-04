#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
using namespace sf;
struct Surface {
	Texture texture;
	Sprite sprite;
};
void SurfaceInit(Surface& Surface,Vector2f& SurfacePos,std::string filename) {
	Surface.texture.loadFromFile(filename);
	Surface.sprite.setTexture(Surface.texture);
	Surface.sprite.setPosition(SurfacePos);
	
}
void SurfaceDraw(RenderWindow& window,Surface& road, Surface& sand, Surface& grass) {
	window.draw(road.sprite);
	window.draw(sand.sprite);
	window.draw(grass.sprite);
}