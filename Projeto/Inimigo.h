#pragma once

#include <time.h>
#include <cmath>
#include "Personagem.h"
using namespace sf;

#define VELOCIDADE_INIMIGO_X 0.025f
#define VELOCIDADE_INIMIGO_Y 0.025f

namespace Jogo
{
	namespace Personagens
	{
		namespace Inimigos
		{
			class Inimigo : public Personagem
			{
			private:
				Clock relogio;
				short moveAleatorio;
				void inicializa();

			public:
				Inimigo(const Vector2f pos, const Vector2f tam);
				~Inimigo();
				void movimentoAleatorio();
				void move();
			};
		}
	}
}