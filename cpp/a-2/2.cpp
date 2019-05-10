#include <iostream>

struct DATA{
    int id;                 //int型id 宣言
    std::string name;       //string型name 宣言
};

int main(int argc, const char * argv[]) {
    
    DATA mydata[] = {       //DATA構造体型の配列
        { 1, "加藤" },
        { 2, "佐藤" },
        { 3, "伊藤" }
    };
    
    
    for(int i=0; i < sizeof(mydata) / sizeof(DATA); i++){
        
        //ポインタ演算で構造体特定
        DATA *d = (mydata+i);
        std::cout << "ID = " << d->id << ", NAME = " << d->name << "\n";
        
    }
    
    
    return 0;
}
