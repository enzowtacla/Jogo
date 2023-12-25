#include "Principal.h"
using namespace sf;

Jogo::Principal::Principal() :
	pGG(pGG->getGrafico()), pEventos(pEventos->getGerenciadorEventos()), listaEntidades()
{
	if (!pGG) {
		std::cout << "O gerenciador grafico nao foi criado" << std::endl;
		exit(1);
	}
	if (!pEventos) {
		std::cout << "O gerenciador de eventos nao foi criado" << std::endl;
		exit(1);
	}

	instanciaEntidades();
	Executar();
}

Jogo::Principal::~Principal()
{
	
}

void Jogo::Principal::Executar()
{
	while (pGG->verificaJanelaAberta()) {
		pEventos->executar();
		pGG->limpaJanela();
		listaEntidades.executar(pGG->getJanela());
		pGG->mostraElementos();
	}

}

void Jogo::Principal::instanciaEntidades()
{
	Entidades::Personagens::Jogadores::Jogador* jogador1 = new Entidades::Personagens::Jogadores::Jogador(Vector2f(10.0f, 500.0f), Vector2f(50.0f, 50.0f));
	Entidades::Personagens::Jogadores::Jogador* jogador2 = new Entidades::Personagens::Jogadores::Jogador(Vector2f(80.0f, 500.0f), Vector2f(50.0f, 50.0f));
	Entidades::Personagens::Inimigos::Inimigo* inimigo = new Entidades::Personagens::Inimigos::Inimigo(Vector2f(150.0f, 500.0f), Vector2f(50.0f, 50.0f));

	Entidades::Entidade* e1 = static_cast<Entidades::Entidade*>(jogador1);
	Entidades::Entidade* e2 = static_cast<Entidades::Entidade*>(jogador2);
	Entidades::Entidade* e3 = static_cast<Entidades::Entidade*>(inimigo);

	listaEntidades.addEntidade(e1);
	listaEntidades.addEntidade(e2);
	listaEntidades.addEntidade(e3);

	pEventos->setJogador(jogador1);
	pEventos->setJogador2(jogador2);
}