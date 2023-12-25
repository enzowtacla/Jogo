#include "ListaEntidade.h"

using namespace Jogo;
using namespace Listas;

ListaEntidade::ListaEntidade() :
	LEs()
{

}

ListaEntidade::~ListaEntidade()
{
	limparLista();
}

void ListaEntidade::limparLista()
{
	LEs.limparLista();
}

void ListaEntidade::addEntidade(Entidades::Entidade* entidade)
{
	LEs.addElemento(entidade);
}

void ListaEntidade::removerEntidade(Entidades::Entidade* entidade, const bool deletar)
{
	LEs.removerElemento(entidade, deletar);
}

void ListaEntidade::removerEntidade(int pos, const bool deletar)
{
	LEs.removerElemento(pos, deletar);
}

int ListaEntidade::getTam()
{
	return LEs.getTam();
}

Entidades::Entidade* ListaEntidade::operator[](int pos)
{
	return LEs.operator[](pos);
}

void ListaEntidade::executar(sf::RenderWindow* janela)
{
	int tam = LEs.getTam();

	Entidades::Entidade* aux = nullptr;

	for (int i = 0; i < tam; i++)
	{
		aux = LEs.operator[](i);
		aux->atualizar();
		janela->draw(aux->getCorpo());
	}
}