#include <iostream>
#include <string> 

using namespace std;
const int sz=25;
int main() 
{
    setlocale (LC_ALL, "Russian");
    int i=0, j=0, a[sz], b[sz], sum=0, k, n, l=0, z=0;
    cout<<"Введите n => "; cin>>n;
    cout<<"Введите k => "; cin>>k;

    //Ввод элементов массива
    srand((unsigned)time(0));
    for (i=0;i<sz;i++)
        a[i]=rand()%100;

    //Вывод-проверка 
    for (i=0;i<sz;i++)
        cout<<" "<<a[i];
    cout<<"\n";

    //Поиск суммы, равной k
    for (j=0;j<sz;j++){
        int p=a[j];
        sum=0;
        z=0;
        while (p!=0){
            sum+=p%10;
            p/=10;
            z+=1;
        }
        if ((sum==k) && (z==n))
            b[l++]=a[j];
    }

    //Вывод
    if (l==0)
        cout<<"Нет таких чисел :c\n";
    else{
        cout<<"\nРезультат: \n";
        for (int q=0; q<l; q++)
            cout<<b[q]<<" ";
    }
 cout<<"\n";

return 0;
}