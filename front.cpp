#include"./library.cpp"
//#include <SFML/Graphics/CircleShape.hpp>
//#include <SFML/Graphics/RenderWindow.hpp>
//#include <SFML/Window/Event.hpp>
//#include <SFML/Window/WindowStyle.hpp>
void front(){
	 // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);
	// creating dots
	sf::CircleShape dots(5.f);

	//setting the position of the circle
	//shape.setPosition(0.f,20.f);

	// set the dots color to green
	dots.setFillColor(sf::Color(100, 250, 50));

	//drawing the dots in different position
	for(int i = 1;i<20;i++){
		for(int j=0;j<20;j++){
			dots.setPosition(i*40.f,j*40.f);
			window.draw(dots);
		}
	}
	sf::VertexArray lines(sf::LinesStrip,2);
	int i=0;
	if(event.type == sf::Event::MouseButtonPressed){
		//sf::VertexArray lines(sf::LinesStrip,2);
		lines[i].position=sf::Vector2f(event.mouseButton.x,event.mouseButton.y);
		//if(event.type == sf::Event::MouseMoved){
			//int x = sf::Event::MouseMoveEvent::x;
			//int y = sf::Event::MouseMoveEvent::y;
			//line[1].position=sf::Vector2f(x,y);
			//lines[1].position=sf::Vector2f(sf::Event::MouseMoveEvent::x,sf::Event::MouseMoveEvent::y);
			//window.draw(lines);
		//}
		/*if(i==1){
			lines[i].position=sf::Vector2f(event.mouseButton.x,event.mouseButton.y);
			i--;
			i--;
		}*/
		//i++;
		//window.draw(lines);
	}
	window.draw(lines);
	//window.draw(shape);

        // end the current frame
        window.display();
    }
}
