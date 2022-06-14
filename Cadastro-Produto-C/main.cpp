#include "tipos.h"

int main()
{	
	int opcao;
	TLista lista;
	inicializarLista(&lista);	
	do
	{
		printf("\n===== Tela Estabelecimento =====\n\n");
		printf("\n1 - Cadastrar Produto");
		printf("\n2 - Listar todos os Produtos");
		printf("\n3 - Consultar Produto");
		printf("\n4 - Excluir Produto");
		printf("\n0 - Sair");
		printf("\n\nEscolha uma opcao: ");
		scanf("%d",&opcao);
		switch(opcao)
		{
			case 1: cadastrarProduto(&lista); break;
			case 2:	listarProdutos(&lista); break;
			case 3:	consultarProduto(&lista); break;
			case 4: excluirProduto(&lista); break;
		}	
	}while (opcao != 0);
}
