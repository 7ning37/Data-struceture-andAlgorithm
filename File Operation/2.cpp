//读取文本文件（需包含头文件fstream）
#include<iostream>
#include<fstream>//ifstream类需要包含的头文件
#include<string>//getline函数需要包含的头文件  
using namespace std;

int main()
{
    system("chcp 65001>nul");

    ifstream arr; // 定义文件操作类名，arr可以替换
    arr.open("1.txt",ios::in);
    //打开文件，如果文件不存在，则打开文件失败
    //ios::in和ios::out是缺省值，可以省略

    string buffer;//存放从文件中读取的内容

    //判断文件是否打开
    if(arr.is_open()==false)
    {
        cout<<"文件打开失败"<<endl;
        system("pause");
        return 0;
    }
    
    //读取文件内容的代码
    //文本文件一般以行的方式组织数据
    while(getline(arr,buffer))//可以写arr>>buffer
    {
        cout<<buffer<<endl;
    }

    arr.close();//关闭文件，arr对象失效前会自动调用close()

    cout<<"操作文件完成。"<<endl;

    system("pause");
    return 0;
}