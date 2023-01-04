#include <iostream>
#include <string>
#define MAX_LEN 10


int main(void){
    std::string inp_word;
    std::string out_word;
    int num_words = 0;
    std::cin >> num_words;
    for(int i = 0; i < num_words; i++){
        std::cin >> inp_word;
        if(inp_word.length() > MAX_LEN){
            out_word = inp_word[0] + std::to_string(inp_word.length()-2) + inp_word.back();
        }
        else{
            out_word = inp_word;
        }
        std::cout << out_word << std::endl;
    }
    return 0;
}
