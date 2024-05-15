#include "menu.hpp"
#include <iostream>

void nikiforov::printCommands()
{
  setlocale(LC_ALL, "Russian");

  std::cout << " 1. help - ����� ������ ��������� ������ � �����������\n";
  std::cout << " 2. create < filename > - �������� ���������� ������� �� ����� filename �� ����� � �������� ���������\n";
  std::cout << " 3. open < mkdir > - ������ ���� ����������� ��������� �������� �� ����� mkdir\n";
  std::cout << " 4. delete < name > - �������� ���������� ������� � ��������� name\n";
  std::cout << " 5. list - ����� �������� ���� ������������ ��������� ��������\n";
  std::cout << " 6. add < name1 > < name2 > - ���������� ���������� ������� name2 � ������� name1\n";
  std::cout << " 7. unite < newname > < name1 > < name2 > - �������� ������� newname ������������ ���� �������� name1 � name2\n";
  std::cout << " 8. rename < name > < newname > - �������������� ������� name �� newname\n";
  std::cout << " 9. clear < name1 > < name2 > - �������� ���� ���� �� ������� name1 ������� ���� � ������� name2\n";
  std::cout << " 10. save < mkdir > - ���������� �������� � ����� mkdir � ������� ����� ����������� ������� � ���� ������\n";
  std::cout << " 11. select < name > - ����� ������� name, ��� �������� ����� ������������� ��������� �������\n";
  std::cout << " 12. print - ����� ����� ���������������� ������ ���� � �� ��������\n";
  std::cout << " 13. print < most > < n > - ����� < most > c ������� ��������� n ������� �������� ����� ������������� n ����\n";
  std::cout << " 14. print < count > - ����� < count > ��������� ������� ���������� ���� � �������\n";
  std::cout << " 15. find < word > - ����� � ������� ���������� ��� ����� � ��������� word\n";
  std::cout << " 16. erase < word > - �������� ����� word\n";
}
