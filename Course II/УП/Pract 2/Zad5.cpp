#include <iostream>
#include <cstring>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
using namespace std;
 
int main(){
	int week;
	
	cout<<"Введите номер недели => "; cin>>week;

if (week&1){
	cout<<"\n(Нечетная неделя)";
	cout<<"\n\nПонедельник:\n1.Безопасность жизнедеятельности\n   Шубцов, 101 ауд.\n2.Основы программирования\n   Осипова, 207 ауд.\n3.Элементы высш. математики\n   Белоглазов, 202 ауд.\n4.Системное программирование\n   Перхункова, 111 ауд.\n5.―\n\nВторник:\n1.Учебная практика по ПМ.04\n   Пестов, 120 ауд.\n2.Учебная практика по ПМ.04\n   Пестов, 120 ауд.\n3.Учебная практика (по программированию)\n   Пестов, 302 ауд.\n4.Учебная практика (по программированию)\n   Пестов, 302 ауд.\n5.―";
}
else{
	cout<<"\n(Четная неделя)";
	cout<<"\n\nПонедельник:\n1.Классный час\n   Ховрина, 312 ауд.\n2.Классный час\n   Ховрина, 312 ауд.\n3.Безопасность жизнедеятельности\n   Шубцов, 100 ауд.\n4.Системное программирование\n   Перхункова, 111 ауд.\n5.―\n\nВторник:\n1.Иностранный язык \n   Записной, 207 ауд.\n2.Учебная практика по ПМ.04\n   Пестов, 120 ауд.\n3.Теория алгоритмов\n   Семенихина, 310 ауд.\n4.Учебная практика (по программированию)\n   Пестов, 302 ауд.\n5.―";
}

cout<<"\n";
return 0;

}                                                 