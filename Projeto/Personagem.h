#pragma once

#include <time.h>
#include <cmath>
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
			Vector2f velFinal;
			bool podeAndar;
			bool paraEsquerda;
			Clock relogio;
			float dt;

		public:
			Personagem(const Vector2f pos, const Vector2f tam, const float vel);
			~Personagem();
			const RectangleShape getCorpo();
			void andar(const bool paraEsquerda);
			void parar();
			virtual void atualizar() = 0;
			void atualizarPosicao();
		};
	}
}