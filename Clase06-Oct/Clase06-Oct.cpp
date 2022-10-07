#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 720), "Pollito fiu fiu");
	window.setFramerateLimit(60);
	//CREAR LAS FIGURAS CON SU RESPECTIVO TAMAÑO
	sf::CircleShape Body(300.f);
	sf::CircleShape Head(200.f);
	sf::CircleShape leftEye(35.f);
	sf::CircleShape rigthEye(35.f);
	sf::CircleShape peak(50, 3);
	sf::CircleShape paw1(50, 3);
	sf::CircleShape paw2(50, 3);
	sf::RectangleShape Lpaw(sf::Vector2f(275, 10));
	sf::RectangleShape Rpaw(sf::Vector2f(275, 10));
	//SETEAR RADIO DE LOS CIRCULOS
	//-------Head.setRadius(400);-----------
	// 
	Body.setPointCount(100);
	Head.setPointCount(100);
	//SETEAR LA POSICION DE CADA FIGURA
	sf::Vector2f BodyPosition(300, 0);//Cuerpo
	sf::Vector2f HeadPosition(400, 160); //Cabeza
	sf::Vector2f LEPosition(515,270); //Ojo izquierdo
	sf::Vector2f REPosition(615,270); //Ojo derecho
	sf::Vector2f peakPosition(645,500); //pico
	sf::Vector2f LpawPosition(515, 450);
	sf::Vector2f RpawPosition(715, 450);
	sf::Vector2f paw1Position(390, 560);
	sf::Vector2f paw2Position(880, 550);
	
	Body.setPosition(BodyPosition);
	Head.setPosition(HeadPosition);
	leftEye.setPosition(LEPosition);
	rigthEye.setPosition(REPosition);
	peak.setPosition(peakPosition);
	peak.rotate(180);
	paw1.setPosition(paw1Position);
	paw2.setPosition(paw2Position);
	Lpaw.setPosition(LpawPosition);
	Rpaw.setPosition(RpawPosition);
	paw1.rotate(90);
	paw2.rotate(35);
	Lpaw.rotate(135);
	Rpaw.rotate(45);

	//SETEAR EL COLOR DE CADA FIGURA
		//Personalizacion del cuerpo
	Body.setFillColor(sf::Color(255,239,0));
	Body.setOutlineThickness(5);
	Body.setOutlineColor(sf::Color::White);
		//Personalizacion de la cabeza
	Head.setFillColor(sf::Color(255,239,0));
	Head.setOutlineThickness(5);
	Head.setOutlineColor(sf::Color::White);
		//Personalizacion de los ojos
	leftEye.setFillColor(sf::Color::Black);
	leftEye.setOutlineThickness(12);
	leftEye.setOutlineColor(sf::Color::White);

	rigthEye.setFillColor(sf::Color::Black);
	rigthEye.setOutlineThickness(12);
	rigthEye.setOutlineColor(sf::Color::White);

		//Personalizacion de pico
	peak.setFillColor(sf::Color(255, 128, 0));
	peak.setOutlineThickness(5);
	peak.setOutlineColor(sf::Color(255, 150, 68));
		//Personalizacion de patas
	Lpaw.setFillColor(sf::Color(255, 239, 0));
	Lpaw.setOutlineThickness(2);	
	Rpaw.setFillColor(sf::Color(255, 239, 0));
	Rpaw.setOutlineThickness(2);
	
	paw1.setFillColor(sf::Color(255, 128, 0));
	paw1.setOutlineThickness(5);
	paw1.setOutlineColor(sf::Color(255, 150, 68));
	paw2.setFillColor(sf::Color(255, 128, 0));
	paw2.setOutlineThickness(5);
	paw2.setOutlineColor(sf::Color(255, 150, 68));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		
		}
		window.clear();
		window.draw(Rpaw);
		window.draw(Lpaw);
		window.draw(Body);
		window.draw(Head);
		window.draw(leftEye);
		window.draw(rigthEye);
		window.draw(peak);
		window.draw(paw1);
		window.draw(paw2);
		

		window.display();

	}

}
