#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;
//����
const float WINDOW_WIDTH = 800.f;
const float WINDOW_HEIGHT = 1000.f;
const std::string WINDOW_TITLE = "SFML RACING";
//������

const float ROAD_LAYER_SPEED = 2.f;
//������
float CAR_SPEED = 10.f;
Vector2f PLAYER_START_POS{(WINDOW_WIDTH-300)/2,WINDOW_HEIGHT-200};