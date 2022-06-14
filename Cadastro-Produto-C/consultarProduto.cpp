#include "tipos.h"

//fun��o que busca a posi��o do nome do produto para depois utilizarmos na fun��o consultarProduto
TElemento* buscarElemento(TLista *p, char nomeConsultar[50])
{	
	TElemento *aux;
	aux = p->inicio;
	
	while(aux != NULL)
	{
		//se o nome digitado for igual retorna 
		if(strcmp (aux->produto.nomeProduto, nomeConsultar) == 0)
		{
			return aux;
		}
		//se n�o verifica o pr�ximo
		else
		{
			aux = aux->proximo;
		}
	}
	return aux;
}

void consultarProduto (TLista *p)
{	
	char nomeConsultar[50];
	TElemento *endereco;
	
	printf("\nInforme o nome do produto para consultar: ");
	fflush(stdin);
	gets(nomeConsultar);
	
	endereco = buscarElemento(p, nomeConsultar);
	
		if(endereco != NULL)
		{
			printf("\nNome produto: %s", endereco->produto.nomeProduto);
			printf("\nDescricao produto: %s", endereco->produto.descricao);
			printf("\nValor produto: %.2f", endereco->produto.valor);
			printf("\nCategoria produto: %s", endereco->produto.categoria);
			printf("\n\n-----------------------------------------------------------------\n");
		}
		else
		{
			printf("\nNome nao encontrado!");
		}
		getch();
}

