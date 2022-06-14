#include "tipos.h"

void listarProdutos (TLista *p)
{
	//criando estrutura auxiliar para apresentar a lista de produtos
	TElemento *aux;
	aux = p->inicio;
	
	printf("\n===== Lista de Produtos =====\n");
	fflush(stdin);
	
	if(p->inicio != NULL)
	{
		
		while(aux != NULL)
		{
			printf("\nNome produto: %s", aux->produto.nomeProduto);
			printf("\nDescricao produto: %s", aux->produto.descricao);
			printf("\nValor produto: %.2f", aux->produto.valor);
			printf("\nCategoria produto: %s", aux->produto.categoria);
			printf("\n\n-----------------------------------------------------------------\n");
			aux = aux->proximo; //como se fosse incrementar
		}
	}
	else
	{
		printf("\nLista vazia!");
	}
	printf("\n-----------------------------------------------------------------\n");
}
