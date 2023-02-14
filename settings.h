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
Vector2f pos_arr[4]{ (Vector2f{130.f,-200.f}),(Vector2f{230.f,-200.f}) ,(Vector2f{ 350.f,-200.f }), (Vector2f{ 460.f,-200.f }) };
Vector2f pos_arr1[4]{ (Vector2f{130.f,400.f}),(Vector2f{230.f,-200.f}), (Vector2f{350.f,400.f}),(Vector2f{460.f,400.f}) };
Vector2f pos_arr2[4]{ (Vector2f{130.f,800.f}),(Vector2f{230.f,-200.f}),(Vector2f{350.f,800.f}),(Vector2f{460.f,800.f}) };
Vector2f pos_arr3[4]{ (Vector2f{130.f,1200.f}),(Vector2f{230.f,1200.f}) ,(Vector2f{ 350.f,1200.f }), (Vector2f{ 460.f,1200.f }) };
std::string texture_arr[]{ "box1.png","box.png","box2.png" ,"box3.png","box4.png","box6.png"};
//текст 
const float CHAR_SIZE = 64;
int health = 3;
Vector2f textStartPos{ WINDOW_WIDTH - CHAR_SIZE-30,0 };