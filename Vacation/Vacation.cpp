#include <iostream>
#include<cstdlib>
using namespace std;
int menu()
{
  setlocale(LC_ALL, "Russian");
  int variant;
  cout << "Выберите вариаент\n" << endl;
  cout << "Куда предпочитатете поехать?" << endl;
  cout << "1.Юг\n"
    << "2.Север\n"
    << "3.Выйти\n" << endl;
  cin >> variant;
  return variant;
}
int menu2()
{
  setlocale(LC_ALL, "Russian");
  int more;
  cout << "Выберите вариаент\n" << endl;
  cout << "1.Теплое море?\n"
    << "2.Холодноле море?\n"
    << "3.Выйти\n" << endl;
  cin >> more;
  return more;
}
int menu3()
{
  setlocale(LC_ALL, "Russian");
  int sever;
  cout << "Выберите вариаент\n" << endl;
  cout << "1.В горы?\n"
    << "2.На лыжи?\n"
    << "3.Выйти\n" << endl;
  cin >> sever;
  return sever;
}

int main(int argc, char* argv[])
{
  int variant = menu();
  switch (variant) {
  case 1:
    cout << "На море?" << endl;
    {
      int more = menu2();
      switch (more) {
      case 1:
        cout << "Хорошо" << endl;

        break;
      case 2:
        cout << "Отлично" << endl;
        break;
      case 3:
        cout << "Закончим с вопросами";
        exit(EXIT_SUCCESS);
        break;
      }
      break;
    }
  case 2:
    cout << "На север?" << endl;
    {
      int sever = menu3();
      switch (sever) {
      case 1:
        cout << "Хорошо" << endl;

        break;
      case 2:
        cout << "Отлично" << endl;
        break;
      case 3:
        cout << "Закончим с вопросами";
        exit(EXIT_SUCCESS);
        break;
      }
      break;
    }
  case 3:
    cout << "Закончим с вопросами";
    exit(EXIT_SUCCESS);
    break;
  }
}