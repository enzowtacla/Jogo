#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "GerenciadorGrafico.h"
#include "GerenciadorEventos.h"

namespace Jogo {

	class Principal
	{
	private:
		Gerenciadores::GerenciadorGrafico* pGG;
		Gerenciadores::GerenciadorEventos* pEventos;
		std::vector<Personagens::Personagem*> personagens;

	public:
		Principal();
		~Principal();
		void Executar();
		void instanciaEntidades();
	};
}