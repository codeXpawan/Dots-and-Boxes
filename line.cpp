#include"./library.cpp"
#include <SFML/Graphics/PrimitiveType.hpp>
#include <SFML/Graphics/VertexArray.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Mouse.hpp>

inline void line(){
	sf::VertexArray lines(sf::LinesStrip,2);
	if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
		sf::Vector2i position1=sf::Mouse::getPosition();
		lines[0].position = position1;
	}
	while(true){
		sf::Vector2i position2=sf::Mouse::getPosition();
		lines[1].position=position2;
		lines.draw();
	}
}
