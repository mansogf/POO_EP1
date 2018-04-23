#ifndef PPM_HPP
#define PPM_HPP

#include <iostream>
#include <string>
#include "imagem.hpp"

using namespace std;

class PPM : public Imagem{

	private:

		int comecoMensagem;
		int tamanhoTotalMensagem;
		char *keyWord;
		char *mensagem;
		char *letrasAlfabeto;

	public:

		PPM();
		~PPM();

    char *decifrador();

    void setTamanhoTotalMensagem(int TamanhoTotalMensagem);
    void setComecoMensagem(int ComecoMensagem);
		void setParametros();
    void setAlfabeto();
		char *decifrador();
};

#endif
