#include <iostream>
using namespace std;
#include <string>
#define Max 1000
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct Addressbooks
{
    struct Person personArray[Max];
    int m_Size;
};
void addPerson(Addressbooks *abs){
    if(abs->m_Size==Max){
        cout << "通讯录已满，无法添加！" << endl;
    } else {
        string name;
        cout << "请输入姓名： " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name=name;
        cout << "请输入性别： " << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int sex =0;
        while(true){
            cin >> sex;
            if(sex==1||sex==2){
                abs->personArray[abs->m_Size].m_Sex=sex;
                break;
            }
            cout << "输入有误。请重新输入"  << endl;
        }
        cout << "请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age=age;
        cout << "请输入联系电话" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone=phone;
        cout << "请输入家庭住址" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr=address;
        abs->m_Size++;
        cout << "添加成功" << endl;
        system("pause");//请按任意键继续
        system("cls");//清屏

    }

}

void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1???????????  *****" << endl;
    cout << "*****  2??????????  *****" << endl;
    cout << "*****  3??????????  *****" << endl;
    cout << "*****  4???????????  *****" << endl;
    cout << "*****  5??????????  *****" << endl;
    cout << "*****  6??????????  *****" << endl;
    cout << "*****  0????????  *****" << endl;
    cout << "***************************" << endl;
}
void showPerson(Addressbooks *abs){
    if(abs->m_Size==0) {
        cout << "当前记录为空" << endl;
    } else {
        for(int i=0;i<abs->m_Size;i++)
        {
            cout << "姓名： "<< abs->personArray[i].m_Name;
            cout << "性别： "<< abs->personArray[i].m_Sex;
            cout << "年龄： "<< abs->personArray[i].m_Age;
            cout << "电话： "<< abs->personArray[i].m_Phone;
            cout << "住址： "<< abs->personArray[i].m_Addr;
        }
    }
    system("pause");
    system("cls");
}
int main()
{
    Addressbooks abs;
    abs.m_Size=0;

    int select =0;
    while (true){
        showMenu();
        cin >> select;
        switch (select)
        {
            case 1: //add
                addPerson(&abs);//地址传递
                break;
            case 2: //vis
                showPerson(&abs);
                break;
            case 3://delete
                break;
            case 4://find
                break;
            case 5://update
                break;
            case 6://clean_all
                break;
            case 0://exit
                cout << "欢迎下次使用" << endl;
                system("pause");
                return 0;
                break;
            default:
                break;

        }
    }

    return 0;
}