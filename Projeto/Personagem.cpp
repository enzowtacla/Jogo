#include "Personagem.h"
using namespace Jogo;
using namespace Personagens;
using namespace sf;

Personagem::Personagem(const Vector2f pos, const Vector2f tam, const float vel) :
	corpo(RectangleShape(tam)), velFinal(vel, 0.0f), podeAndar(false), paraEsquerda(false), relogio(), dt(0.0f)
{

}

Personagem::~Personagem()
{

}

const RectangleShape Personagem::getCorpo()
{
	return corpo;
}

void Personagem::andar(const bool paraEsquerda)
{
	podeAndar = true;
	this->paraEsquerda = paraEsquerda;
}

void Personagem::parar()
{
	podeAndar = false;
}

void Personagem::atualizarPosicao()
{

	dt = relogio.getElapsedTime().asSeconds();

	float ds = velFinal.x * dt;

	if (paraEsquerda) {
		ds *= -1;
	}
	corpo.move(ds, 0.0f);
	
}