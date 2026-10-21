#include <iostream>
#include <string>

int sumLastNums(int x) {
    if (x < 0) x = -x;
    int last = x % 10;
    int prev = (x / 10) % 10;
    return last + prev;
}
bool isPositive(int x) {
    return x > 0;
}
bool isUpperCase(char x) {
    return x >= 'A' && x <= 'Z';
}
bool isDivisor(int a, int b) {
    if (a == 0 || b == 0) return false;
    return (a % b == 0) || (b % a == 0);
}
int lastNumSum(int a, int b) {
    return (a % 10) + (b % 10);
}
double safeDiv(int x, int y) {
    if (y == 0) return 0;
    return (double)x / y;
}
std::string makeDecision(int x, int y) {
    if (x < y) return std::to_string(x) + " < " + std::to_string(y);
    if (x > y) return std::to_string(x) + " > " + std::to_string(y);
    return std::to_string(x) + " == " + std::to_string(y);
}
bool sum3(int x, int y, int z) {
    return (x + y == z) || (x + z == y) || (y + z == x);
}
std::string age(int x) {
    int last2 = x % 100;
    int last1 = x % 10;
    std::string word;
    if (last2 >= 11 && last2 <= 14) word = "лет";
    else if (last1 == 1) word = "год";
    else if (last1 >= 2 && last1 <= 4) word = "года";
    else word = "лет";
    return std::to_string(x) + " " + word;
}
void printDays(int x) {
    switch (x) {
        case 1: std::cout << "Понедельник\n";
        case 2: std::cout << "Вторник\n";
        case 3: std::cout << "Среда\n";
        case 4: std::cout << "Четверг\n";
        case 5: std::cout << "Пятница\n";
        case 6: std::cout << "Суббота\n";
        case 7: std::cout << "Воскресенье\n"; break;
        default: std::cout << "это не день недели\n";
    }
}
std::string reverseListNums(int x) {
    std::string res;
    for (int i = x; i >= 0; i--) {
        if (i != x) res += " ";
        res += std::to_string(i);
    }
    return res;
}
int powInt(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) result *= x;
    return result;
}
bool equalNum(int x) {
    if (x < 0) x = -x;
    int digit = x % 10;
    x /= 10;
    while (x > 0) {
        if (x % 10 != digit) return false;
        x /= 10;
    }
    return true;
}
void leftTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < i; j++) std::cout << "*";
        std::cout << "\n";
    }
}
void guessGame() {
    int secret = 5;
    int attempts = 0;
    int guess = -1;
    while (guess != secret) {
        std::cout << "Введите число от 0 до 9: ";
        std::cin >> guess;
        attempts++;
        if (guess != secret) std::cout << "Вы не угадали, ";
    }
    std::cout << "Вы угадали!\n";
    std::cout << "Вы отгадали число за " << attempts << " попытки\n";
}
int findLast(int arr[], int size, int x) {
    int idx = -1;
    for (int i = 0; i < size; i++) if (arr[i] == x) idx = i;
    return idx;
}
int* addOne(int arr[], int sizeArr, int x, int pos) {
    if (pos < 0) pos = 0;
    if (pos > sizeArr) pos = sizeArr;
    int* result = new int[sizeArr + 1];
    for (int i = 0; i < pos; i++) result[i] = arr[i];
    result[pos] = x;
    for (int i = pos; i < sizeArr; i++) result[i + 1] = arr[i];
    return result;
}
void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int t = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = t;
    }
}
int* concat(int arr1[], int size1, int arr2[], int size2) {
    int* result = new int[size1 + size2];
    for (int i = 0; i < size1; i++) result[i] = arr1[i];
    for (int i = 0; i < size2; i++) result[size1 + i] = arr2[i];
    return result;
}
int* deleteNegative(int arr[], int size, int& newSize) {
    int count = 0;
    for (int i = 0; i < size; i++) if (arr[i] >= 0) count++;
    int* result = new int[count ? count : 1];
    int j = 0;
    for (int i = 0; i < size; i++) if (arr[i] >= 0) result[j++] = arr[i];
    newSize = count;
    return result;
}
int main() {
    int choice;
    do {
        std::cout << "\nЗадачи\n"
                  << "1) 1.2 Сумма двух последних цифр\n"
                  << "2) 1.4 Есть ли позитив\n"
                  << "3) 1.6 Большая буква\n"
                  << "4) 1.8 Делитель\n"
                  << "5) 1.10 Многократный вызов\n"
                  << "6) 2.2 Безопасное деление\n"
                  << "7) 2.4 Строка сравнения\n"
                  << "8) 2.6 Тройная сумма\n"
                  << "9) 2.8 Возраст\n"
                  << "10) 2.10 Вывод дней недели\n"
                  << "11) 3.2 Числа наоборот\n"
                  << "12) 3.4 Степень числа\n"
                  << "13) 3.6 Одинаковость\n"
                  << "14) 3.8 Левый треугольник\n"
                  << "15) 3.10 Угадайка\n"
                  << "16) 4.2 Поиск последнего значения\n"
                  << "17) 4.4 Добавление в массив\n"
                  << "18) 4.6 Реверс\n"
                  << "19) 4.8 Объединение\n"
                  << "20) 4.10 Удалить негатив\n"
                  << "0) Выход\n"
                  << "Номер: ";
        std::cin >> choice;
        while (!std::cin || choice < 0 || choice > 20) {
            std::cout << "Введите 0..20: ";
            std::cin.clear(); std::cin.ignore(10000, '\n');
            std::cin >> choice;
        }
        std::cin.ignore(10000, '\n');

        switch (choice) {
            case 1: {
                int x = 0;
                std::cout << "x: ";
                if (std::cin >> x) { std::cin.ignore(10000,'\n'); std::cout << "Результат: " << sumLastNums(x) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 2: {
                int x = 0;
                std::cout << "x: ";
                if (std::cin >> x) { std::cin.ignore(10000,'\n'); std::cout << std::boolalpha << isPositive(x) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 3: {
                char x = 0;
                std::cout << "Символ: ";
                std::cin >> x;
                std::cin.ignore(10000,'\n');
                std::cout << std::boolalpha << isUpperCase(x) << "\n";
                break;
            }
            case 4: {
                int a = 0;
                int b = 0;
                std::cout << "a b: ";
                if (std::cin >> a >> b) { std::cin.ignore(10000,'\n'); std::cout << std::boolalpha << isDivisor(a,b) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 5: {
                std::cout << "Введите 5 чисел: ";
                int a; std::cin >> a;
                for (int i = 0; i < 4; i++) {
                    int b; std::cin >> b;
                    a = lastNumSum(a, b);
                    std::cout << a << "\n";
                }
                std::cin.ignore(10000,'\n');
                std::cout << "Итого " << a << "\n";
                break;
            }
            case 6: {
                int x = 0;
                int y = 0;
                std::cout << "x y: ";
                if (std::cin >> x >> y) { std::cin.ignore(10000,'\n'); std::cout << "Результат: " << safeDiv(x,y) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 7: {
                int x = 0;
                int y = 0;
                std::cout << "x y: ";
                if (std::cin >> x >> y) { std::cin.ignore(10000,'\n'); std::cout << makeDecision(x,y) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 8: {
                int x = 0;
                int y = 0;
                int z = 0;
                std::cout << "x y z: ";
                if (std::cin >> x >> y >> z) { std::cin.ignore(10000,'\n'); std::cout << std::boolalpha << sum3(x,y,z) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 9: {
                int x = 0;
                std::cout << "x: ";
                if (std::cin >> x) { std::cin.ignore(10000,'\n'); std::cout << age(x) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 10: {
                int x = 0;
                std::cout << "x: ";
                if (std::cin >> x) { std::cin.ignore(10000,'\n'); printDays(x); }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 11: {
                int x = 0;
                std::cout << "x: ";
                if (std::cin >> x && x >= 0) { std::cin.ignore(10000,'\n'); std::cout << reverseListNums(x) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Нужно x >= 0\n"; }
                break;
            }
            case 12: {
                int x = 0;
                int y = 0;
                std::cout << "x y: ";
                if (std::cin >> x >> y && y >= 0) { std::cin.ignore(10000,'\n'); std::cout << "Результат: " << powInt(x,y) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Нужно y >= 0\n"; }
                break;
            }
            case 13: {
                int x = 0;
                std::cout << "x: ";
                if (std::cin >> x) { std::cin.ignore(10000,'\n'); std::cout << std::boolalpha << equalNum(x) << "\n"; }
                else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 14: {
                int x = 0;
                std::cout << "x: ";
                if (std::cin >> x) {
                    std::cin.ignore(10000,'\n');
                    if (x > 0) leftTriangle(x); else std::cout << "Нужно x > 0\n";
                } else { std::cin.clear(); std::cin.ignore(10000,'\n'); std::cout << "Ошибка ввода\n"; }
                break;
            }
            case 15: {
                guessGame();
                std::cin.ignore(10000,'\n');
                break;
            }
            case 16: {
                int arr[100]; 
                int n = 0; 
                int x = 0;
                std::cout << "n (1..100): ";
                std::cin >> n;
                while (!std::cin || n < 1 || n > 100) { std::cout << "1..100: "; std::cin.clear(); std::cin.ignore(10000,'\n'); std::cin >> n; }
                for (int i=0;i<n;i++){ std::cout<<"arr["<<i<<"]="; while(!(std::cin>>arr[i])){std::cin.clear();std::cin.ignore(10000,'\n');} }
                std::cout<<"x: "; while(!(std::cin>>x)){std::cin.clear();std::cin.ignore(10000,'\n');}
                std::cin.ignore(10000,'\n');
                std::cout << "Индекс: " << findLast(arr,n,x) << "\n";
                break;
            }
            case 17: {
                int arr[100]; 
                int n = 0;
                int x = 0; 
                int pos = 0;
                std::cout << "n (1..100): ";
                std::cin >> n;
                while (!std::cin || n < 1 || n > 100) { std::cout << "1..100: "; std::cin.clear(); std::cin.ignore(10000,'\n'); std::cin >> n; }
                for (int i=0;i<n;i++){ std::cout<<"arr["<<i<<"]="; while(!(std::cin>>arr[i])){std::cin.clear();std::cin.ignore(10000,'\n');} }
                std::cout<<"x: "; while(!(std::cin>>x)){std::cin.clear();std::cin.ignore(10000,'\n');}
                std::cout<<"pos: "; while(!(std::cin>>pos)){std::cin.clear();std::cin.ignore(10000,'\n');}
                std::cin.ignore(10000,'\n');
                int* res = addOne(arr,n,x,pos);
                std::cout << "["; for(int i=0;i<n+1;i++){ if(i) std::cout<<", "; std::cout<<res[i]; } std::cout<<"]\n";
                delete[] res;
                break;
            }
            case 18: {
                int arr[100];
                int n = 0;
                std::cout << "n: "; std::cin >> n;
                while (!std::cin || n<1 || n>100){std::cout<<"1..100: ";std::cin.clear();std::cin.ignore(10000,'\n');std::cin>>n;}
                for (int i=0;i<n;i++){ std::cout<<"arr["<<i<<"]="; while(!(std::cin>>arr[i])){std::cin.clear();std::cin.ignore(10000,'\n');} }
                std::cin.ignore(10000,'\n');
                reverse(arr,n);
                std::cout << "["; for(int i=0;i<n;i++){ if(i) std::cout<<", "; std::cout<<arr[i]; } std::cout<<"]\n";
                break;
            }
            case 19: {
                int a1[100];
                int a2[100];
                int n1 = 0; 
                int n2 = 0;
                std::cout << "n1: "; std::cin >> n1;
                while (!std::cin || n1<1 || n1>100){std::cout<<"1..100: ";std::cin.clear();std::cin.ignore(10000,'\n');std::cin>>n1;}
                for (int i=0;i<n1;i++){ std::cout<<"arr1["<<i<<"]="; while(!(std::cin>>a1[i])){std::cin.clear();std::cin.ignore(10000,'\n');} }
                std::cout << "n2: "; std::cin >> n2;
                while (!std::cin || n2<1 || n2>100){std::cout<<"1..100: ";std::cin.clear();std::cin.ignore(10000,'\n');std::cin>>n2;}
                for (int i=0;i<n2;i++){ std::cout<<"arr2["<<i<<"]="; while(!(std::cin>>a2[i])){std::cin.clear();std::cin.ignore(10000,'\n');} }
                std::cin.ignore(10000,'\n');
                int* res = concat(a1,n1,a2,n2);
                std::cout << "["; for(int i=0;i<n1+n2;i++){ if(i) std::cout<<", "; std::cout<<res[i]; } std::cout<<"]\n";
                delete[] res;
                break;
            }
            case 20: {
                int arr[100];
                int n = 0;
                std::cout << "n: "; std::cin >> n;
                while (!std::cin || n<1 || n>100){std::cout<<"1..100: ";std::cin.clear();std::cin.ignore(10000,'\n');std::cin>>n;}
                for (int i=0;i<n;i++){ std::cout<<"arr["<<i<<"]="; while(!(std::cin>>arr[i])){std::cin.clear();std::cin.ignore(10000,'\n');} }
                std::cin.ignore(10000,'\n');
                int newSize;
                int* res = deleteNegative(arr,n,newSize);
                std::cout << "["; for(int i=0;i<newSize;i++){ if(i) std::cout<<", "; std::cout<<res[i]; } std::cout<<"]\n";
                delete[] res;
                break;
            }
            case 0: break;
        }
    } while (choice != 0);
    return 0;
}
