#include "intruso.hpp"
void Intruso::set_senha_vazada(std::string vazou){
    std::map<char, std::pair<char, char>> codigo;
    std::vector<char> senha;
    for(int i=0;i<5;i++){
        codigo[char('A'+i)] = std::pair<char, char> (vazou[4*i],vazou[4*i+2]);
    }
    for(int i=10;i<16;i++){
        senha.push_back(vazou[2*i]);
    }
    armazenamento.push_back(std::pair<std::map<char, std::pair<char, char>>, std::vector<char>>(codigo, senha));
}
