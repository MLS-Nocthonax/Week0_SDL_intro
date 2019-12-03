#pragma once

#include "W_Window.h"
#include <iostream>


class E_PollEvents
{

private:
	W_Window* Window;
	SDL_Event _Event;

public:


private:


public:

	E_PollEvents(W_Window* window);
	void globalEvents();

};

