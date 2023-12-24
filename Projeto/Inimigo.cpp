#include "Inimigo.h"

using namespace Jogo;
using namespace Personagens;
using namespace Inimigos;

Inimigo::Inimigo(const Vector2f pos, const Vector2f tam) :
	Personagem(pos, tam), relogio()
{
	corpo.setPosition(pos);
	corpo.setFillColor(Color::Red);
	inicializa();
	srand(time(NULL));
	moveAleatorio = rand() % 2;
}

Inimigo::~Inimigo()
{
	
}

void Inimigo::inicializa()
{
	vel = Vector2f(VELOCIDADE_INIMIGO_X, VELOCIDADE_INIMIGO_Y);
}


void Inimigo::movimentoAleatorio()
{
	if (moveAleatorio == 0)
	{
		corpo.move(vel.x, 0.0f);
	}
	else
	{
		corpo.move(-vel.x, 0.0f);
	}

	float dt = relogio.getElapsedTime().asSeconds();

	if (dt >= 1.0f){
		moveAleatorio = rand() % 2;
		relogio.restart();
	}
}

void Inimigo::move()
{
	movimentoAleatorio();
}