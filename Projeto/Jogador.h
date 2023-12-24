#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Personagem.h"

using namespace sf;

namespace Jogo
{
	namespace Personagens
	{
		namespace Jogadores
		{
			class Jogador : public Personagem
			{
			private:
				int id_jogador;
				static int cont_id;
				void inicializa();

			public:
				Jogador(const Vector2f pos, const Vector2f tam);
				~Jogador();
				const RectangleShape getCorpo();
				void move();
				const int getId();
			};
		}
	}
}