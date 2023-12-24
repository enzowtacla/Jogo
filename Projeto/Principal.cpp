#include "Principal.h"
using namespace sf;

Jogo::Principal::Principal() :
	pGG(pGG->getGrafico()), personagens()
{
	Personagens::Jogadores::Jogador* jogador1 = new Personagens::Jogadores::Jogador(Vector2f(10.0f, 500.0f), Vector2f(50.0f, 50.0f));
	Personagens::Jogadores::Jogador* jogador2 = new Personagens::Jogadores::Jogador(Vector2f(80.0f, 500.0f), Vector2f(50.0f, 50.0f));
	Personagens::Inimigos::Inimigo* inimigo = new Personagens::Inimigos::Inimigo(Vector2f(150.0f, 500.0f), Vector2f(50.0f, 50.0f));

	Personagens::Personagem* p1 = static_cast<Personagens::Personagem*>(jogador1);
	Personagens::Personagem* p2 = static_cast<Personagens::Personagem*>(jogador2);
	Personagens::Personagem* p3 = static_cast<Personagens::Personagem*>(inimigo);

	personagens.push_back(p1);
	personagens.push_back(p2);
	personagens.push_back(p3);

	Executar();
}

Jogo::Principal::~Principal()
{
	personagens.clear();
}

void Jogo::Principal::Executar()
{

	while (pGG->verificaJanelaAberta()) {
		sf::Event evento;
		if (pGG->getJanela()->pollEvent(evento)) {
			if (evento.type == sf::Event::Closed) {
				pGG->fecharJanela();
			}
		}
		pGG->limpaJanela();
		for (int i = 0; i < personagens.size(); i++)
		{
			personagens.at(i)->move();
			pGG->desenhaElementos(personagens.at(i)->getCorpo());
		}
		pGG->mostraElementos();
	}
	personagens.clear();
}

