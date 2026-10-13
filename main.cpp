 #include <iostream>
#include <windows.h>

 using namespace std;
 void addorder(){cout << "add order;" << "\n";}
 void seeOrder(){cout << "see order;" << "\n";}
 void seeOneOrder(){cout << "see one order;" << "\n";}
 void updateOrder(){cout << "update order;" << "\n";}
 void deleteOrder(){cout << "delete order;" << "\n";}
 void createOrder(){cout << "create order;" << "\n";}
 void exit(){cout << "exit;" << "\n";}

void main_menu(){
    int choice;
    bool is_choice_made = false;
    while(!is_choice_made){
        cout <<"--------------------"<< endl;
        cout <<"========MENU========" << endl;
        cout <<"1. Додати замовлення;"<< endl;
        cout <<"2. Переглянути усі замовлення;"<< endl;
        cout <<"3. Переглянути одне замовлення;"<< endl;
        cout <<"4. Редагувати замовлення;"<< endl;
        cout <<"5. Видалити замовлення;"<< endl;
        cout <<"6. Сформувати звіт;"<< endl;
        cout <<"0. Вихід."<< endl;
        cout <<"--------------------"<< endl;
        cout <<"Зробіть свій вибір: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addorder();
                is_choice_made = true;
                break;
            case 2:
                seeOrder();
                is_choice_made = true;
                break;
            case 3:
                seeOneOrder();
                is_choice_made = true;
                break;
            case 4:
                updateOrder();
                is_choice_made = true;
                break;
            case 5:
                deleteOrder();
                is_choice_made = true;
                break;
            case 6:
                createOrder();
                is_choice_made = true;
                break;
            case 0:
                is_choice_made = false;   
                cout << "exit;\n";
                break;
            default:
                cout << "Неправильний вибір. Спробуйте ще раз.\n";
                cout << "Натисніть Enter, щоб продовжити.\n";
                is_choice_made = true;
                break;            
        }

    }}  

  int main(){
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
    main_menu();
  }