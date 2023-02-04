#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;
//окно
const float WINDOW_WIDTH = 800.f;
const float WINDOW_HEIGHT = 1000.f;
const std::string WINDOW_TITLE = "SFML RACING";
//дорога
const float RoadWidth = 600;
Vector2f RoadPos{ (WINDOW_WIDTH-RoadWidth)/2 ,0 };
const float SandWidth = 700;
Vector2f SandPos{ (WINDOW_WIDTH - SandWidth) / 2,0 };

Vector2f GrassPos{ 0,0 };

