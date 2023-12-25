#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "GerenciadorGrafico.h"
#include "GerenciadorEventos.h"
#include "ListaEntidade.h"

namespace Jogo {

	class Principal
	{
	private:
		Gerenciadores::GerenciadorGrafico* pGG;
		Gerenciadores::GerenciadorEventos* pEventos;
		Listas::ListaEntidade listaEntidades;

	public:
		Principal();
		~Principal();
		void Executar();
		void instanciaEntidades();
	};
}