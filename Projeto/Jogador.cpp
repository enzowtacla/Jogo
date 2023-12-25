#include "Jogador.h"

using namespace Jogo;
using namespace Entidades;
using namespace Personagens;
using namespace Jogadores;



Jogador::Jogador(const Vector2f pos, const Vector2f tam) :
	Personagem(pos, tam, VELOCIDADE_JOGADOR_X)
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
	
}

const RectangleShape Jogador::getCorpo()
{
	return corpo;
}

void Jogador::atualizar()
{
	if (podeAndar) {
		atualizarPosicao();
	}

	relogio.restart();
}

