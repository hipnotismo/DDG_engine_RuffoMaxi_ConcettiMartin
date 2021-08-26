#include <glfw3.h>
#ifndef WINDOW_H
#define WINDOW_H
class Window
{
private:
	GLFWwindow* window;
public:
	Window(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share);
	void WindowContext();
	bool ShouldClose();
	GLFWwindow* GetWindow();
};
#endif