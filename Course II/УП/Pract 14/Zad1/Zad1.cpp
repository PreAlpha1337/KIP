#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int i, j, n, m, k, k1, k2, sum, **a;
FILE *outfile;

//Генерация матрицы
void generate(){

  srand((unsigned)time(0));
   for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        a[i][j]=-10+rand()%20;

}

//Ручной ввод матрицы
void enter(){

  for(i=0;i<n;i++)
    for(j=0;j<m;j++){
      cout<<"Введите элемент ["<<i<<"]["<<j<<"]";
      cin>>a[i][j];
    }

}

//Ввод матрицы из файла
void file_in(){

  fstream fi;
  fi.open("input.txt");
  for (i=0;i<n;i++)
    for (j=0;j<m;j++)
      fi>>a[i][j];
  fi.close();

}

//Меню выбора ввода
void initarray(){

  cout<<"Введите n =>"; cin>>n;
  cout<<"Введите m =>"; cin>>m;

  a = new int *[n];
  for(i=0;i<n;i++)
    a[i]=new int[m+1];

  cout<<"\n\n1. Генерация матрицы\n2. Ручной ввод матрицы\n3. Чтение матрицы из файла\n=> ";
    cin>>k1;
    switch (k1)
    {
      case 1:
        generate();
        break;

      case 2:
        enter();
        break;

      case 3:
        file_in();
        break;
    }

}

//Процедура вывода на экран
void monitor_out(){

  cout<<"\nИсходная матрица:";
  for(i=0;i<n;i++){
    cout<<"\n";
    for(j=0;j<m;j++)
      cout<<setw(5)<<a[i][j];
    }

}

//Процедура вывода в файл
  void file_out(){

    outfile=fopen("out.txt","w+");
    for (i=0;i<n;i++){
      for (j=0;j<m;j++)
          fprintf(outfile,"%4d",a[i][j]);
      fprintf(outfile,"\n");
    }
  fclose(outfile);

}

//Меню выбора вывода
void outarray(){

  cout<<"\n\n1. Вывод матрицы на экран\n2. Вывод матрицы в файл\n=> ";
    cin>>k2;
    switch (k2)
    {
      case 1:
        monitor_out();
        break;

      case 2:
        file_out();
        break;
    }

}

//Нахождение суммы элементов на главной диагонали
void summ(){

  sum=0;
  for (i=0;i<n;i++)
    for (j=0;j<m;j++)
      if (i==j)
          sum+=a[i][j];
  cout<<"Сумма элементов на главной диагонали:\n"<<sum;

}

//Замена элементов
void changer(){

  for (i=0;i<n-1;i++)
    for (j=i+1;j<n;j++)
      if (a[i][j]<0){
        cout<<"Замена ["<<i<<"]["<<j<<"] "<<a[i][j]<<" на "<<abs(a[i][j])<<"\n";
        a[i][j]=abs(a[i][j]);
      }

}

int main(){

  do
  {
    cout<<"\n\n1. Генерация матрицы\n2. Вывод матрицы\n3. Сумма элементов\n4. Замена отриц.элементов\n0. Выход из программы\n=> ";
    cin>>k;
    switch (k)
    {
      case 1:
        initarray();
        break;

      case 2:
        outarray();
        break;

      case 3:
        summ();
        break;

      case 4:
        changer();
        break;

    }

  }
  while (k!=0);

cout<<"\n";
return 0;
}
