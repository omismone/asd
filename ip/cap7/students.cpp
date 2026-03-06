// *******************************
// Author: SM
// Programma che legge le informazioni relative ad almeno N studenti con N > 2, e le stampa in ordine 
// decrescente di età. Definire un tipo struct Student per mantenere informazioni riguardanti uno studente,
// ed in particolare matricola, nome, cognome, data di nascita, voto medio.
// *******************************

#include<iostream>
#include<string>

struct date{
    int day;
    int month;
    int year;
};

struct student{
    int id;
    std::string name;
    std::string surname;
    struct date date_of_birth;
    float grade_mean;
};

void bubble(struct student *s, int size);
int compare_dates(struct date d1, struct date d2);
void swap(struct student &s1, struct student &s2);

int main()
{
    // input
    const int N = 3;
    struct student s[N];
    for(int i=0; i<N; i++)
    {
        std::cout << "insert information regarding the student " << i+1 << std::endl;   
        std::cout << "name: ";
        if(i == 0)  std::cin.ignore();               // discard the last newline
        std::getline(std::cin, s[i].name);
        std::cout << "surname: ";
        std::getline(std::cin, s[i].surname);
        std::cout << "id: ";
        std::cin >> s[i].id;
        std::cout << "grade mean: ";
        std::cin >> s[i].grade_mean;
        std::cout << "day of birth: ";
        std::cin >> s[i].date_of_birth.day;
        std::cout << "month of birth (number): ";
        std::cin >> s[i].date_of_birth.month;
        std::cout << "year of birth: ";
        std::cin >> s[i].date_of_birth.year;
        std::cout << std::endl;
    }

    // sort
    bubble(s, N);
    
    // output
    std::cout << "ordered students:" << std::endl;
    for(int i=0; i<N; i++)
    {
        std::cout << "name: "<< s[i].name << std::endl;
        std::cout << "surname: "<< s[i].surname << std::endl;
        std::cout << "id: "<< s[i].id << std::endl;
        std::cout << "grade mean: "<< s[i].grade_mean << std::endl;
        std::cout << "date of birth: " << s[i].date_of_birth.day << "/" << s[i].date_of_birth.month << "/" << s[i].date_of_birth.year << std::endl;
        std:: cout << std::endl;
    }

    return 0;
}

void bubble(struct student *s, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(compare_dates(s[j].date_of_birth, s[j+1].date_of_birth) == -1)
                swap(s[j], s[j+1]);
        }
    }
}

int compare_dates(struct date d1, struct date d2)
{
    // d1 > d2
    if(d1.year > d2.year || (d1.year == d2.year && d1.month > d2.month) || (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day))
        return 1;
    else if(d1.year < d2.year || (d1.year == d2.year && d1.month < d2.month) || (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day))
        return -1;
    else 
        return 0;
}

void swap(struct student &s1, struct student &s2)
{
    struct student tmp = s1;
    s1 = s2;
    s2 = tmp;
}