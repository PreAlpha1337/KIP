#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;
   
   class WORKER{

   private:
      char name[80], dolznost[80], year[80];
      int n=2;

   public:
      void inputer(){

            cout<<("Введите ФИО рабочего: ");
            gets(name);
            cout<<("Введите должность рабочего: ");
            gets(dolznost);
            cout<<("Введите год поступления на работу: ");
            gets(year);

      }

      void printer(){

         cout<<"ФИО: "<<name<<endl;
         cout<<"Должность: "<<dolznost<<endl;
         cout<<"Год поступления на работу: "<<year<<endl;

      }

      void search(){
         char s[80];
         bool state;
         cout<<"*Поиск по рабочим*\nВведите имя рабочего\n=> ";
         gets(s);
         state=true;

            if(!strcmp(name,s)){
               state=false;
               cout<<"ФИО: "<<name<<endl;
               cout<<"Должность: "<<dolznost<<endl;
               cout<<"Год поступления на работу: "<<year<<endl;
               }

         if(state) cout<<"Нет рабочего с таким именем!\n";
      }


   };


   int main(){


      WORKER ob1, ob2;

      ob1.inputer();
      ob2.inputer();
      ob1.printer();
      ob2.printer();
      ob1.search();
      ob2.search();



cout<<"\n";
return 0;

};
