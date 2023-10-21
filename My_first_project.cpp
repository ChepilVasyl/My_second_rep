#include <iostream> 
using namespace std; 

int main() 
{ 
FILE* file = fopen("/Users/vasil/Downloads/file_1.txt","r"); 
if(file != nullptr) 
{ 
    cout<<"Файл відкрито успішно"<<endl;
    const int SIZE = 30; 
    char buffer[SIZE]; 
    int counter_words = 0;
    char symbol;
    cout<<"Вкажіть символ з якого повинні починатися слова для підрахунку їх кількості у файлі ";
    cin>>symbol;
    cout<<"Перевірка GIT"<<endl;
    cout<<"Перевірка GIT2"<<endl;
    while(fscanf(file,"%s",buffer)>0)
    {
        if(buffer[0]==symbol)
            counter_words++;
    }
    cout<<"Кількість слів в тексті що починаються з символу "<<symbol<<" = "<<counter_words<<endl;
    fclose(file); 
} 
else 
    cout<<"Файл не вдалося відкрити"<<endl; 
} 