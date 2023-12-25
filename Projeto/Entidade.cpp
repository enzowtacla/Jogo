#include "Entidade.h"

using namespace Jogo;
using namespace Entidades;

Entidade::Entidade(const sf::Vector2f pos, const sf::Vector2f tam):
	corpo(sf::RectangleShape(tam))
{

}

Entidade::~Entidade()
{

}

const sf::RectangleShape Entidade::getCorpo() const
{
	return corpo;
}