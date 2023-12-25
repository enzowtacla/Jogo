#pragma once

#include "GerenciadorGrafico.h"
#include "Jogador.h"

namespace Jogo 
{
	namespace Gerenciadores
	{
		class GerenciadorEventos
		{
		private:
			GerenciadorGrafico* pGG;
			Personagens::Jogadores::Jogador* pJogador;
			Personagens::Jogadores::Jogador* pJogador2;
			static GerenciadorEventos* pEventos;
			GerenciadorEventos();

		public:
			~GerenciadorEventos();
			static GerenciadorEventos* getGerenciadorEventos();
			void setJogador(Personagens::Jogadores::Jogador* pJogador);
			void setJogador2(Personagens::Jogadores::Jogador* pJogador2);
			void verificaTeclaPressionada(sf::Keyboard::Key tecla);
			void verificaTeclaSolta(sf::Keyboard::Key tecla);
			void executar();
		};
	}
}