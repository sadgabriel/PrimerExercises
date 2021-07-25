#include <iostream>

void ans3();
void ans4();
void ans5();
void ans6();
void ans7();
void ans8();
void ans9();
void ans10();
void ans11();


int main(){
    unsigned ansNum = 0;
    std::cout << "Which answer do you want?" << std::endl;
    std::cin >> ansNum;

    switch (ansNum)
    {
    case 2:
        return -1;
    case 3:
        ans3();
        break;
    case 4:
        ans4();
        break;
    case 5:
        ans5();
        break;
    case 6:
        ans6();
        break;
    case 7:
        ans7();
        break;
    case 8:
        ans8();
        break;
    case 9:
        ans9();
        break;
    default:
        break;
    }
    return 0;
}

void ans3(){
    std::cout << "Hello, World!" << std::endl;
}

void ans4(){
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "The multiplication of " << n1 << " and " << n2 << " is " << n1 * n2 << std::endl;
}

void ans5(){
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "The multiplication of ";
    std::cout << n1;
    std::cout << " and ";
    std::cout << n2;
    std::cout << " is ";
    std::cout << n1 * n2;
    std::cout << std::endl;
}

void ans6(){
    std::cout << "It's not legal. The left operand of << is not exists."
                "It can be fixed by add std::cout in front of <<." << std::endl;
}

void ans7(){
    std::cout << "ex) /*/*text*/*/" << std::endl;
}

void ans8(){
    std::cout << "Only the third statement is not legal. Others are all legal." << std::endl;
}

void ans9(){
    unsigned sum = 0;
    unsigned u = 50;
    while (u != 101){
        sum += u++;
    }
    std::cout << sum << std::endl;
}