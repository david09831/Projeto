# ifndef VENDAS_H
# include VENDAS_H

// Declara��o da classe
class Vendas : public Estoque{
	private:
		vector<Dados>lista_de_produtos;  // Declara��o da vector
    public:
    	Vendas(); // Construtor
    	~Vendas(); // Destrutor
    	void set_faturamento(float);
    	float get_faturamento() const;	
    	void set_saldo(float);
    	float get_saldo(void) const;
        void Nota_fiscal(); // Nota fiscal das compras realizadas
		void Limpar_carrinho(); // 
    	
};

# endif
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