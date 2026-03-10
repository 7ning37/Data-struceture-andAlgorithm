//创建和写入文本文件
#include <iostream>
#include <fstream> //ofstream类需要的文件操作头文件
                   //ostream写，istream读

using namespace std;

int main()
{
    system("chcp 65001>nul");

    ofstream arr; // 定义文件操作类名，arr可以替换
    arr.open("1.txt"); // 创建文件，如果文件存在，则清空文件
    //两行代码可以写成一行：
    //ofstream arr(1.txt);
    //arr.open("1.txt")默认是arr.open("1.txt",ios::out),等价于arr.open("1.txt",ios::trunc);
    //arr.open("1.txt",ios::app)不清空文件，app是append（追加）的缩写，追加在原文件末尾

    // 写入数据
    arr << "1" << endl;
    arr << "2" << endl;
    arr << "3" << endl;

    arr.close(); // 关闭文件

    cout << "文件1操作结束" << endl;

    string str="C:\\Users\\admin\\Desktop\\testgit\\.vscode.txt";//C:\Users\admin\Desktop\testgit\.vscode.txt如果有\要用转义字符\\
    //2可以写成C:/Users/admin/Desktop/testgit/.vscode.txt
    //3也可以改成string str=R"(C:\Users\admin\Desktop\testgit\.vscode.txt)";
    //string str也可以改成char str[]
    //文件地址的目录不存在会报错
    
    arr.open(str); // 创建文件，如果文件存在，则清空文件

    // 写入数据
    arr << "1" << endl;
    arr << "2" << endl;
    arr << "3" << endl;

    arr.close(); // 关闭文件

    cout << "文件2操作结束" << endl;

    // 读取数据

    system("pause");
    return 0;
}