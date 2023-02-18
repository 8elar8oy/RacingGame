
#include "SFML/Graphics.hpp"

void initText(sf::Text& text, sf::Font& font, const std::string str, const float TextSize, const float TextPosY) {
	text.setString(str);
	text.setFont(font);
	text.setCharacterSize(TextSize);
	text.setPosition(50.f, TextPosY);
}
using namespace sf;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(nullptr));
	const float length = 800;
	const float width = 600;
	const float TextSize = 48;
	const float TextPosY[5]{10.f,60.f,110.f,160.f,210.f};
	
	const std::string str1[5]{ "MAMA", "MЫЛА", "РАМУ", "И ПОМЫЛА", "МАШУ" };
	//Шрифт
	Font font;
	font.loadFromFile("arial.ttf");
	//ТЕКСТ
	Text text[5];
	for (int i = 0; i < 5; i++)
	{
		initText(text[i], font, str1[i], TextSize, TextPosY[i]);
	}
	// Объект, который, собственно, является главным окном приложения

	RenderWindow window(VideoMode(length, width), "SFML Works!");
	window.setFramerateLimit(60);
	
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		



		//отрисовка обьектов
		window.clear(Color:: Black);
		for (int i = 0; i < 5; i++)
		{
			window.draw(text[i]);
		}
		
		window.display();
	}

	return 0;
}
