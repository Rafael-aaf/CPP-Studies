#include <iostream>

struct No{
	int val;
	No* ptr;
};

class Lista{
private:
	No* inicio;
	
public:
	Lista(){
		inicio = nullptr;
	}
	
public:
	void inserir(int pvalor){
		No* novo = new No();
		novo -> val = pvalor;
		novo -> ptr = nullptr;
		
		if(inicio == nullptr) inicio = novo;
		else{
			No* temp = inicio;
		
			while(temp -> ptr != nullptr){
				temp = temp -> ptr;
			}
			temp -> ptr = novo;
		}
		std::cout << "Valor inserido!" << "\n";
	}
		
public:
	void print(){
		No* temp = inicio;
		std::cout << "Lista: \n";
		while(temp != nullptr){
			std::cout << temp -> val << "\n";
			temp = temp -> ptr;
		}
	}
	
public:
	void inverter(){
		No* prev = nullptr;
		No* prox = inicio;
		
		while(prox != nullptr){
			No* current = prox;
			prox = prox -> ptr;
			current -> ptr = prev;
			prev = current;
			
		}
		inicio = prev;
		
		std::cout << "Lista foi invertida!" << "\n";
	}
}; //Fim da classe Lista

int main(){
	Lista e;
	
    e.inserir(10);
    e.inserir(15);
    e.inserir(20);
    e.inserir(25);
    e.inserir(30);
    
    e.print();
    
    e.inverter();
    
    e.print();
    
    e.inverter();
    
    e.print();
    
	return 0;
}