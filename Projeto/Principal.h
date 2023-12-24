#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "GerenciadorGrafico.h"

namespace Jogo {

	class Principal
	{
	private:
		Gerenciadores::GerenciadorGrafico* pGG;
		std::vector<Personagens::Personagem*> personagens;

	public:
		Principal();
		~Principal();
		void Executar();
	};
}
