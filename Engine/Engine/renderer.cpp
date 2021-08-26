#include "renderer.h"

void renderer::BeginDraw()
{
	/* Start Render here */
	glClear(GL_COLOR_BUFFER_BIT);
}

void renderer::SwapBuffer(GLFWwindow* window)
{
	/* Swap front and back buffers */
	glfwSwapBuffers(window);
}
