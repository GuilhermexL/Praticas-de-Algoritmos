/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/

#include <iostream>

using namespace std;

int main()
{
    int numDoFunc, nDeHr;
    double valorHr, salario;
    
    cout << "Digite seu número de identificação: " << endl;
    cin >> numDoFunc; 
    cout << "Digite a quantidade de Horas Trabalhadas: " << endl;
    cin >> nDeHr;
    cout << "Digite o valor da Hora Trabalhada: " << endl;
    cin >> valorHr;
    
    salario = nDeHr * valorHr;
    
    cout << "NUMBER = " << numDoFunc << endl;
    cout << "SALARY = U$ " << salario;
    return 0;
}