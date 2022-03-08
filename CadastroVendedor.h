#ifndef CADASTROVENDEDOR_H
#define CADASTROVENDEDOR_H
class Cadastro_vendedor
{
	string nome;
	string cpf;
	int chaveAcesso;
	
public:
	//construtor
	Cadastro_vendedor(string nome = " ", string cpf = " ", int chave acesso = 0);

	void set_nome(string);
	void set_cpf(string);
	void set_chaveAcesso(int);
	void get_nome();
	void get_cpf();
	int  get_contato();
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