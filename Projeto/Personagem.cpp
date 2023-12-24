#include "Personagem.h"
using namespace Jogo;
using namespace Personagens;
using namespace sf;

Personagem::Personagem(const Vector2f pos, const Vector2f tam) :
	corpo(RectangleShape(tam))
{

}

Personagem::~Personagem()
{

}

const RectangleShape Personagem::getCorpo()
{
	return corpo;
}

