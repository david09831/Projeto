#ifndef CADASTROPROJETO_2_H
#define CADASTROPROJETO_2_H

class Cadastro_cliente{
	//Dados da pessoa
	string nome_completo;
	string cpf;
	//Endere�o da pessoa
	string cep;
	string rua;
	string bairro;
	int numero;
	string complemento;
public:
	//Construtor para inicializar a variavel
	Cadastro_cliente(string nome_completo= " ",string cpf = " ",int numero  = 0, string cep = " ", string rua = " ", string bairro = " ", int numero = 0, string complemento = " ");
	~Cadastro_cliente();
	//Metodo para Cadastrar os dados
	void set_nome(string);
	void set_cpf(string);
	void set_contato(string);
	void set_cep(string);
	void set_rua(string);
	void set_bairro(string);
	void set_numero(int);
	void set_complemento(string);
	//Metodo para impressao dos dados
	void get_nome();
	void get_cpf();
	void get_contato();
	void get_cep();
	void get_rua();
	void get_bairro();
	int  get_numero();
	void get_complemento();

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
