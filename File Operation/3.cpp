//创建和写入二进制文件(binary表示2进制)
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream arr;
    arr.open("1.txt",ios::app|ios::binary);
    //arr.open("1.txt,ios::binary")
}