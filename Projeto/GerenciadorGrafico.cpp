#include "GerenciadorGrafico.h"

using namespace sf;
using namespace Jogo;
using namespace Gerenciadores;

GerenciadorGrafico* GerenciadorGrafico::pGG(nullptr);

GerenciadorGrafico::GerenciadorGrafico():
	janela(new RenderWindow(VideoMode(800.0f, 600.0f), "Jogo++"))
{
	if (!janela) {
		std::cout << "Erro ao criar a janela" << std::endl;
		exit(1);
	}
}


GerenciadorGrafico::~GerenciadorGrafico()
{
	if (janela) {
		delete janela;
		janela = nullptr;
	}
}

GerenciadorGrafico* GerenciadorGrafico::getGrafico()
{
	if (!pGG) {
		pGG = new GerenciadorGrafico();
	}
	return pGG;
}

RenderWindow* GerenciadorGrafico::getJanela()
{
	return janela;
}

void GerenciadorGrafico::limpaJanela()
{
	janela->clear();
}

void GerenciadorGrafico::desenhaElementos(RectangleShape corpo)
{
	janela->draw(corpo);
}

void GerenciadorGrafico::mostraElementos()
{
	janela->display();
}

void GerenciadorGrafico::fecharJanela()
{
	janela->close();
}

const bool GerenciadorGrafico::verificaJanelaAberta()
{
	if (janela->isOpen()) {
		return true;
	}
	else {
		return false;
	}
}