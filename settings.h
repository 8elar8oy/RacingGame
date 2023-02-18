#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;
//окно
const float WINDOW_WIDTH = 800.f;
const float WINDOW_HEIGHT = 1000.f;
const std::string WINDOW_TITLE = "SFML RACING";
//дорога

const float ROAD_LAYER_SPEED = 10.f;
//машина
float CAR_SPEED = 10.f;
Vector2f PLAYER_START_POS{ (WINDOW_WIDTH - 300) / 2,WINDOW_HEIGHT - 200 };
//препятствия
const float CAR_OBSTACLE_SPEED = 20.f;
const float posx_arr[4]{ (130.f),(230.f) ,(350.f), (460.f) };
const float posy_arr[4]{ (-200.f),(-400.f) ,(-600.f ), (-800.f ) };
std::string texture_arr[]{ "box1.png","box.png","box4.png","box6.png"};
Vector2f obsPos;
//текст 
const float CHAR_SIZE = 64;
int health = 3;
Vector2f textStartPos{ WINDOW_WIDTH - CHAR_SIZE-30,0 };