#include "tipos.h"

void cadastrarProduto(TLista *p)
{
	//criando nova estrutura para armazenar tempor�riamente as infos
	TElemento *novoProduto; 
	//alocando espa�o na mem�ria
	novoProduto = (TElemento*) malloc(sizeof(novoProduto)); 
	
	printf("\n===== Cadastro de Produto =====\n");
	
	printf("\nNome produto: ");
	fflush(stdin);
	gets(novoProduto->produto.nomeProduto);
	
	printf("\nDescricao produto: ");
	fflush(stdin);
	gets(novoProduto->produto.descricao);
	
	printf("\nValor produto: ");
	scanf("%f", &novoProduto->produto.valor);
	
	printf("\nCategoria produto: ");
	fflush(stdin);
	gets(novoProduto->produto.categoria);
	
	printf("\n-----------------------------------------------------------------\n");		
	
	novoProduto->proximo = NULL;
	
	//lista vazia o novoProduto vai para o inicio e fim, pois s�o a mesma posi��o
	if(p->inicio == NULL)
	{
		p->inicio = novoProduto;
		p->fim = novoProduto;
	}
	//lista cheia o novoProduto vai para o fim e fim->pr�ximo
	else
	{
		p->fim->proximo = novoProduto;
		p->fim = novoProduto;
	}
}
