#include "renderer.h"
#include <stdlib.h>
#include <iostream>
#include "glew.h"
#include "glfw3.h"
Renderer::Renderer() {

}
Renderer::~Renderer() {

}
void Renderer::CreateTriangle() {
	float vertexs[6] = {
		-0.5f, -0.5f,
		 0.5f, -0.5f,
		 0.0f, 0.5f,
	};

	GLuint buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(vertexs), vertexs, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0);
}
void Renderer::DrawTriangle() {
	glDrawArrays(GL_TRIANGLES, 0, 3);
}