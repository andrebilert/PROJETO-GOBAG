#include "tipos.h"

void excluirProduto(TLista *p)
{
	char nomeExcluir[50];
	
	printf ("\nDigite o nome do produto que deseja excluir: ");
	fflush(stdin);
	gets(nomeExcluir);
	
	TElemento *atual, *anterior;
	atual = p->inicio;
	
	while(atual != NULL)
	{
		if(strcmp (atual->produto.nomeProduto, nomeExcluir) == 0)
		{ 
			
			if(atual == p->inicio)//excluir no inicio
			{
				p->inicio = p->inicio->proximo;
			}
			else
			{
				if(atual == p->fim)//excluir no fim
				{
					p->fim = anterior;
					anterior->proximo = NULL;
				}
				else//excluir no meio
				{
					anterior->proximo = atual->proximo;
				}
			}
			break;
		}
		else
		{
			anterior = atual;
			atual = atual->proximo;
		}
	}
	free(atual);	
}
