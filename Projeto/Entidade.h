#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

namespace Jogo
{
	namespace Entidades
	{
		class Entidade
		{
		protected:
			sf::RectangleShape corpo;

		public:
			Entidade(const sf::Vector2f pos, const sf::Vector2f tam);
			~Entidade();
			const sf::RectangleShape getCorpo() const;
			virtual void atualizar() = 0;
		};
	}
}