#include "BaseGame.h"

int BaseGame::EngineInit()
{
	/* Initialize the library */
	if (!glfwInit())
		return -1;
	return 0;
}

int BaseGame::WindowInit(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share)
{
	window = new Window(width,height,title,monitor,share);
	if (!window)
	{
		return -1;
	}
	window->WindowContext();
	return 0;
}

bool BaseGame::Running()
{
	return window->ShouldClose();
}

void BaseGame::UpdateBegin()
{
	renderer->BeginDraw();
}

void BaseGame::UpdateEnd()
{
	renderer->SwapBuffer(window->GetWindow());
	/* Poll for and process events
	check what events are occurring: keyboard, mouse, window events, etc.*/
	glfwPollEvents();
}

void BaseGame::EngineEnd()
{
	glfwTerminate();
}
