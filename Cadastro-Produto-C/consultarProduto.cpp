#include "tipos.h"

//função que busca a posição do nome do produto para depois utilizarmos na função consultarProduto
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
		//se não verifica o próximo
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

