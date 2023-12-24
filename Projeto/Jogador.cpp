#include "Jogador.h"

using namespace Jogo;
using namespace Personagens;
using namespace Jogadores;

int Jogador::cont_id(0);

Jogador::Jogador(const Vector2f pos, const Vector2f tam):
	Personagem(pos,tam), id_jogador(cont_id++)
{
	corpo.setPosition(pos);
	corpo.setFillColor(sf::Color::Green);
	inicializa();
}

Jogador::~Jogador()
{

}

void Jogador::inicializa()
{
	vel = sf::Vector2f(0.1f, 0.1f);
}

const RectangleShape Jogador::getCorpo()
{
	return corpo;
}

void Jogador::move()
{
	const int id = getId();

	if (id == 0)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			corpo.move(-vel.x, 0.0f);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			corpo.move(vel.x, 0.0f);
		}
	}
	else if (id == 1)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			corpo.move(-vel.x, 0.0f);
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			corpo.move(vel.x, 0.0f);
		}
	}

	
}

const int Jogador::getId()
{
	return id_jogador;
}