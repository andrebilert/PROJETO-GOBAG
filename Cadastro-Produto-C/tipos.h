#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoProduto
{
	char nomeProduto[50];
	char descricao[50];
	char categoria[50];
	float valor;	
}TProduto;

typedef struct tipoElemento
{
	TProduto produto;
	struct tipoElemento *proximo;
}TElemento;

typedef struct tipoLista
{
	TElemento *inicio;
	TElemento *fim;
}TLista;

//declaração das funções
void inicializarLista(TLista *p);
void cadastrarProduto(TLista *p);
void listarProdutos (TLista *p);
void consultarProduto (TLista *p);
void excluirProduto(TLista *p);
#endif

