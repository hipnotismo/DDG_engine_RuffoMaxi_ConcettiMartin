#include "BaseGame.h"
int main(void)
{

    BaseGame* engine = new BaseGame();
    if (engine->EngineInit())
    {
        engine->EngineEnd();
        return -1;
    }
    if(engine->WindowInit(640, 480, "Hello World", NULL, NULL))
    {
        engine->EngineEnd();
        return -1;
    }

    /* Loop until the user closes the window */
    while (engine->Running())
    {
        engine->UpdateBegin();

        engine->UpdateEnd();
    }

    engine->EngineEnd();
}