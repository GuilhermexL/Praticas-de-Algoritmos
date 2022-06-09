/*Faça um programa que leia o nome de um vendedor, 
o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, 
informar o total a receber no final do mês, com duas casas decimais.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salarioFixo, montanteVendas, total;
    string nomeVendedor;
    
    
    cout <<"Digite seu nome: " << endl;
    cin >> nomeVendedor;
    cout << "Digite seu salário fixo: " << fixed << setprecision(2) << endl;
    cin >> salarioFixo;
    cout << "Montante de vendas efetuadas: " << fixed << setprecision(2) << endl;
    cin >> montanteVendas;
    
    total = salarioFixo + montanteVendas * 0.15;
    
    cout << "Olá" << " " << nomeVendedor << ", você receberá este mês um total de: R$ " << total << fixed << setprecision(2) << endl;

    return 0;
}
