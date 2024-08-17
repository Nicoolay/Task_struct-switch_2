

#include <iostream>
#include <string>


struct account

{
    
    int account_number{};
    std::string name{};
    double balance{};
};

void balance_change(account& acc, double* new_balnce);

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    account a;
    std::cout << "Введите номер счёта : " << std::endl;
    std::cin >> a.account_number;
    std::cout << "Введите имя владельца : " << std::endl;
    std::cin >> a.name;
    std::cout << "Ведите баланс : " << std::endl;
    std::cin >> a.balance; 
    double new_balance=0;
    std::cout << "Введите новый баланс : " << std::endl;
    std::cin >> new_balance;
    balance_change(a, &new_balance);
    std::cout << "Ваш счёт : " <<a.account_number << " " << a.name << " "<< a.balance<< std::endl;


    
}
void balance_change(account& acc, double* new_balnce) {
    acc.balance = *new_balnce;
}