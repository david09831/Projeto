#ifndef ESTOQUE_H
#define ESTOQUE_H
class Estoque
{   // Definindo vectors
	vector <Produto> Lista_Produto;

	// M�todo para ler produto
	void lerProduto;

public:
    // M�todo para inserir produto
    bool inserirProduto(Produto);

    // M�todo para remover produto
    bool removerProduto(long int);

    // M�todos para pesquisar produto
    bool pesquisarProduto(string) const;
    bool pesquisarProduto(long int) const;

    // M�todo para salvar produto
    bool salvarProduto();

	bool set_SaidaEstoqueProduto(unsigned int, int);
	bool set_EntradaEstoqueProduto(unsigned int, int);

	// M�todo para imprimir produto
	void imprimeProduto() const;

	// M�todo para ordenar produto
    void ordenaProduto();

	int get_indiceProduto(string) const;
	vector <Produto> get_ListaProduto() const;
};
#endif
/*UFCG - CCEI - ENGENHARIA ELETRICA 2020.2
TECNICAS DE PROGRAMACAO 
PROFESSOR: MARCUS SALERNO
GRUPO: David Emanuel Albuquerque dos Santos- Turma 02
Jos� Vanilson de Brito J�nior - Turma 01
Lameque Dias de Oliveira - Turma 01
Pedro Henrique Fernandes Mac�do -  Turma 02
Felipe Faustino do Nascimento- Turma 02
Monitora:Rav�nia Luciano Martildes
PROJETO: LOJA DE INSTRUMENTOS MUSIDOM 
DESCRI��O: O programa deve realizar diversas fun��es entre eles, o cadastro de 
produto, de cliente, e vendedores, gerenciar o estoque da loja, realizar pedidos
 */
