#pragma once

#include <time.h>
#include <cmath>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entidade.h"
using namespace sf;

namespace Jogo
{
	namespace Entidades
	{
		namespace Personagens
		{
			class Personagem :public Entidade
			{
			protected:
				Vector2f velFinal;
				bool podeAndar;
				bool paraEsquerda;
				Clock relogio;
				float dt;

			public:
				Personagem(const Vector2f pos, const Vector2f tam, const float vel);
				~Personagem();
				void andar(const bool paraEsquerda);
				void parar();
				virtual void atualizar() = 0;
				void atualizarPosicao();
			};
		}
	}
}