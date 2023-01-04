#include <iostream>

int main(){
    int impl_num=0;
    int inp_num=0;
    int i1=0, i2=0, i3=0;
    std::cin >> inp_num;
    for(int i=0; i<inp_num; i++){
        std::cin >> i1 >> i2 >> i3;
        if ((i1 + i2 + i3) >= 2)
            impl_num+=1;
    }
    std::cout << impl_num;
    return 0;
}
