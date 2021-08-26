#include <glfw3.h>
#include "window.h"
#ifndef RENDERER_H
#define RENDERER_H
class renderer
{
private:
public:
	void BeginDraw();
	void SwapBuffer(GLFWwindow* window);
};
#endif