#include "window.h"
#include "renderer.h"
#ifndef BASEGAME_H
#define BASEGAME_H
class BaseGame
{
private:
	Window* window;
	renderer* renderer;
public:
	int EngineInit();
	int WindowInit(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share);
	bool Running();
	void UpdateBegin();
	void UpdateEnd();
	void EngineEnd();
};
#endif

