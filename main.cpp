#include <iostream>
#include <string>
using namespace std;

class Heroi {
private:
    string nome;
    int idade;
    string tipo;

public:
    Heroi(string n, int i, string t) : nome(n), idade(i), tipo(t) {}

    void atacar() {
        string ataque;

        if (tipo == "mago") {
            ataque = "magia";
        } else if (tipo == "guerreiro") {
            ataque = "espada";
        } else if (tipo == "monge") {
            ataque = "artes marciais";
        } else if (tipo == "ninja") {
            ataque = "shuriken";
        } else {
            ataque = "fez um ataque básico";
        }

        cout << "O " << tipo << " atacou usando " << ataque << endl;
    }
};

int main() {
    string nome;
    int idade;
    string tipo;

    cout << "Insira o nome do personagem: ";
    getline(cin, nome);
    cout << "Insira a idade do personagem: ";
    cin >> idade;
    cin.ignore();
    cout << "Insira a classe do personagem (mago, guerreiro, monge, ninja): ";
    getline(cin, tipo);

    Heroi heroi(nome, idade, tipo);

    heroi.atacar();

    return 0;
}
