#ifndef RENDERER_H
#define RENDERER_H
#include "export.h"
class ENGINE_API Renderer {

public:
	Renderer();
	~Renderer();
	void CreateTriangle();
	void DrawTriangle();
};

#endif // !RENDERER_H