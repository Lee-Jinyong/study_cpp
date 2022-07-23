#include <iostream>

int main(void)
{
    char name[100];
    char ph_num[100];

    std::cout<<"이름을 입력하세요: ";
    std::cin>>name;

    std::cout<<"전화번호를 입력하세요: ";
    std::cin>>ph_num;

    std::cout<<name<<" "<<ph_num<<std::endl;
    return 0;
}