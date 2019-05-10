#include <iostream>

struct DATA{
    int id;                 //int型id 宣言
    std::string name;       //string型name 宣言
};

int main(int argc, const char * argv[]) {
    
    DATA mydata;               //DATAインスタンス
    
    //値セット
    mydata.id = 1;
    mydata.name = "名前";
    
    //出力
    std::cout << "構造体内部 : id = " << mydata.id << " name = " << mydata.name << "\n";
    
    return 0;
}
