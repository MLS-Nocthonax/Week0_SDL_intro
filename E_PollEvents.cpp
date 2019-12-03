#include "E_PollEvents.h"


E_PollEvents::E_PollEvents(W_Window* Window) :
	Window(Window)
{
	std::cout << "Event poll created" << std::endl;
}


void E_PollEvents::globalEvents()
{

	//load a queue of system breaks from machine (inputs), store them in _Event
	if (SDL_PollEvent(&_Event)) {


		//if X button of window is pressed 
		if (_Event.type == SDL_QUIT) {

			Window->setB_Closed(1);
		}

		//do different actions for different types of events
		switch (_Event.type) {


		//if any key on keyboard is pressed, ANY
		case SDL_KEYDOWN:

			std::cout << "I MANAGED TO READ PRESSED BUTTON" << std::endl;

		}
	}
}