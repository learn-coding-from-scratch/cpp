# include  <iostream> 


// 65001 - это консольная кодовая страница для UTF-8.


int  main() {
    //setlocale(LC_ALL, "Russian");
    system("chcp 1251"); // настраиваем кодировку консоли
    //      chcp изменяет кодировку только консольного вывода, а ввод остаётся в кодировке 1251

    //system("chcp 65001"); // настраиваем кодировку консоли

    std::cout << "Компьютер: Привет, мир!" << std::endl;
    std::cout << "Человек, как тебя зовут?" << std::endl;

    std::string name;
    std::cin >> name;
    std::cout << "Привет, " << name << "!";
}