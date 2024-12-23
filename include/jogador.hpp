#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>
#include <map>

class Jogador
{
    private:
    std::string nome_jogador;
    std::string apelido_jogador;
    int vitorias_reversi, derrotas_reversi;
    int vitorias_lig, derrotas_lig;
    int vitorias_jvelha, derrotas_jvelha;
    static std::map<std::string, Jogador> jogadores;

    public:
    Jogador(std::string nome, std::string apelido);
    ~Jogador();
    void cadastra_jogador(std::string nome, std::string apelido);
    void remove_jogador(std::string apelido);
    void imprime_listagem(char opcao);
};
#endif