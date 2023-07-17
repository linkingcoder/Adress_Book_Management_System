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
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
    } else {
        string name;
        cout << "������������ " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name=name;
        cout << "�������Ա� " << endl;
        cout << "1 --- ��" << endl;
        cout << "2 --- Ů" << endl;
        int sex =0;
        while(true){
            cin >> sex;
            if(sex==1||sex==2){
                abs->personArray[abs->m_Size].m_Sex=sex;
                break;
            }
            cout << "������������������"  << endl;
        }
        cout << "����������" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age=age;
        cout << "��������ϵ�绰" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone=phone;
        cout << "�������ͥסַ" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr=address;
        abs->m_Size++;
        cout << "��ӳɹ�" << endl;
        system("pause");//�밴���������
        system("cls");//����

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
        cout << "��ǰ��¼Ϊ��" << endl;
    } else {
        for(int i=0;i<abs->m_Size;i++)
        {
            cout << "������ "<< abs->personArray[i].m_Name;
            cout << "�Ա� "<< abs->personArray[i].m_Sex;
            cout << "���䣺 "<< abs->personArray[i].m_Age;
            cout << "�绰�� "<< abs->personArray[i].m_Phone;
            cout << "סַ�� "<< abs->personArray[i].m_Addr;
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
                addPerson(&abs);//��ַ����
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
                cout << "��ӭ�´�ʹ��" << endl;
                system("pause");
                return 0;
                break;
            default:
                break;

        }
    }

    return 0;
}