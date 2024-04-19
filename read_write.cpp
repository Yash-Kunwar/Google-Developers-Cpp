//Create, read and write new files using the fstream header.

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  char first_name[30], last_name[30];
  int age;
  char choice;
  char file_name[20];

  cout << "Enter the name of the file: " << endl;
  cin >> file_name;
  ofstream out(file_name, ios::out);

  cout << "enter your data" << endl;
  while (1)
  {
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << "Enter Age: ";
    cin >> age;

    // Write the output to the stream.
    out << first_name << "\t" << last_name << "\t" << age << "\t" << endl;

    cout << "--CONTINUE[y/n]--" << endl;
    cin >> choice;
    if (choice == 'n')
      break;
  }
  out.close();

  ifstream in(file_name);

  // This is one way to do this :-
  while (1)
  {
    string content;
    getline(in, content);
    if (in.eof())
      break;
    cout << content << endl;
  }

  // in >> first_name >> last_name >> age;
  // cout << "First name : " << first_name << endl;
  // cout << "last name : " << last_name << endl;
  // cout << "age : " << age << endl;
  in.close();
  return 0;
}
