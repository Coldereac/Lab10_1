#include <stdio.h>

typedef enum coin { PENNY, NICKEL, DIME, QUARTER, ERROR } coin;

coin input_enum(int fm);

void print_enum(coin fmoney);

int main(void) {
    coin money;
    int choice;
    puts("Input your choice:\n1) Penny\n2) Nickel\n3) Dime\n4) Quarter");
    scanf("%d", &choice);
    if (choice <= 4 && choice >= 1) {
        money = input_enum(choice);
        print_enum(money);
    } else {
        puts("Wrong choice");
    }
    return 0;
}

coin input_enum(int fm) {
    coin fmoney; // змінна типу enum
    switch (fm) {
        case 1:
            fmoney = PENNY;
            break;

        case 2:
            fmoney = NICKEL;
            break;

        case 3:
            fmoney = DIME;
            break;
        case 4:
            fmoney = QUARTER;
            break;
        default:
            puts("Помилка");
            fmoney = ERROR;
    }
    return fmoney;
}

void print_enum(coin fmoney) {
    switch (fmoney) {
        case PENNY: puts("Пенні\n0.01$");
            break;
        case NICKEL: puts("Нікель\n0.05$");
            break;
        case DIME: puts("Монета в 10 центів\n0.10$");
            break;
        case QUARTER: puts("Чверть доллара\n0.25$");
            break;
        default: puts("Помилка");
    }
}
