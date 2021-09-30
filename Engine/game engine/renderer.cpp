#include "renderer.h"

Renderer::Renderer() {
	i = 0;

	
}
Renderer::~Renderer() {

}

void Renderer::DrawTriangle(Vec2 pos1, Vec2 pos2, Vec2 pos3) {
	
	float vertexs[6] = {
		pos1.x, pos1.y,
		pos2.x, pos2.y,
		pos3.x, pos3.y
	};
	
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(vertexs), vertexs, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0);


		glDrawArrays(GL_TRIANGLES, 0, 3);
		buffer = NULL;
}

void Renderer::finishRenderCycle()
{

}
