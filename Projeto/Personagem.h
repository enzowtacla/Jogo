#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

namespace Jogo
{
	namespace Personagens
	{
		class Personagem
		{
		protected:
			RectangleShape corpo;
			Vector2f vel;

		public:
			Personagem(const Vector2f pos, const Vector2f tam);
			~Personagem();
			const RectangleShape getCorpo();
			virtual void move() = 0;
		};
	}
}