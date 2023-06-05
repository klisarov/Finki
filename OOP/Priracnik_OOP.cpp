// Здраво колега, ова е нешто што можеби би ти помогнало за испитот по Објектно-Ориентирано
// Програмирање. Се надевам дека ќе ти помогне. Среќно! -luu#1539


#include <iostream> // Вклучување на библиотека за влез и излез во Ц++
#include <cstring> //  Вклучување на библиотека за работа со стрингови во Ц++
using namespace std; // Користење на стандарден наменски простор

int main(); // Прототип на функцијата main

// Ќе започнеме со објаснување на структурите, се разбира - во C и C++. :-)
// Структурите се користат за да се креираат нови типови на податоци.
// Структурите се составени од податочни членови кои може да бидат од било кој тип.
// Структурите се дефинираат со клучното зборче struct.
----------------------------------------

// Пример за структура во C++:

struct Student // Дефинирање на структура Student
{
    char name[50]; // Име на студентот
    int age; // Години на студентот
    char index[10]; // Индекс на студентот
    char faculty[50]; // Факултет на студентот
    char studyProgram[50]; // Студиска програма на студентот
    int yearOfStudy; // Година на студии на студентот
    int numberOfExams; // Број на испити на студентот
    int numberOfPassedExams; // Број на положени испити на студентот
    int numberOfFailedExams; // Број на паднати испити на студентот
    int numberOfExamsToGo; // Број на испити кои му остануваат на студентот да ги положи
    double averageGrade; // Просечна оценка на студентот
};
----------------------------------------
// Пример за доделување на податоци во структури:

Student student1; // Дефинирање на структурата student1 од тип Student
strcpy(student1.name, "Pero Perovski"); // Доделување на име на студентот
student1.age = 20; // Доделување на години на студентот
----------------------------------------
// Пример за доделување на податоци во структури со помош на функции:

void setStudentData(Student &student, char name[], int age, char index[], char faculty[], char studyProgram[], int yearOfStudy, int numberOfExams, int numberOfPassedExams, int numberOfFailedExams, int numberOfExamsToGo, double averageGrade)
{
    strcpy(student.name, name); // Доделување на име на студентот
    student.age = age; // Доделување на години на студентот
    strcpy(student.index, index); // Доделување на индекс на студентот
    strcpy(student.faculty, faculty); // Доделување на факултет на студентот
    strcpy(student.studyProgram, studyProgram); // Доделување на студиска програма на студентот
    student.yearOfStudy = yearOfStudy; //  Доделување на година на студии на студентот
    student.numberOfExams = numberOfExams; // Доделување на број на испити на студентот
    student.numberOfPassedExams = numberOfPassedExams; // Доделување на број на положени испити на студентот
    student.numberOfFailedExams = numberOfFailedExams; // Доделување на број на паднати испити на студентот
    student.numberOfExamsToGo = numberOfExamsToGo; // Доделување на број на испити кои му остануваат на студентот да ги положи
    student.averageGrade = averageGrade; // Доделување на просечна оценка на студентот
}
----------------------------------------
// Пример за доделување на податоци во структури со помош на функции и со враќање на структура:

Student setStudentDataAndReturn(char name[], int age, char index[], char faculty[], char studyProgram[], int yearOfStudy, int numberOfExams, int numberOfPassedExams, int numberOfFailedExams, int numberOfExamsToGo, double averageGrade)
{
    Student student; // Дефинирање на структурата student од тип Student
    strcpy(student.name, name); // Доделување на име на студентот
    student.age = age; // Доделување на години на студентот
    strcpy(student.index, index); // Доделување на индекс на студентот
    strcpy(student.faculty, faculty); // Доделување на факултет на студентот
    strcpy(student.studyProgram, studyProgram); // Доделување на студиска програма на студентот
    student.yearOfStudy = yearOfStudy; //  Доделување на година на студии на студентот
    student.numberOfExams = numberOfExams; // Доделување на број на испити на студентот
    student.numberOfPassedExams = numberOfPassedExams; // Доделување на број на положени испити на студентот
    student.numberOfFailedExams = numberOfFailedExams; // Доделување на број на паднати испити на студентот
    student.numberOfExamsToGo = numberOfExamsToGo; // Доделување на број на испити кои му остануваат на студентот да ги положи
    student.averageGrade = averageGrade; // Доделување на просечна оценка на студентот
    return student; // Враќање на структурата student
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Пример за доделување на податоци во структури со помош на функции и со враќање на покажувач кон структура:

Student* setStudentDataAndReturnPointer(char name[], int age, char index[], char faculty[], char studyProgram[], int yearOfStudy, int numberOfExams, int numberOfPassedExams, int numberOfFailedExams, int numberOfExamsToGo, double averageGrade) {
    Student *student = new Student; // Дефинирање на покажувач кон структурата student од тип Student
    strcpy(student->name, name); // Доделување на име на студентот
    student->age = age; // Доделување на години на студентот
    strcpy(student->index, index); // Доделување на индекс на студентот
    strcpy(student->faculty, faculty); // Доделување на факултет на студентот
    strcpy(student->studyProgram, studyProgram); // Доделување на студиска програма на студентот
    student->yearOfStudy = yearOfStudy; //  Доделување на година на студии на студентот
    student->numberOfExams = numberOfExams; // Доделување на број на испити на студентот
    student->numberOfPassedExams = numberOfPassedExams; // Доделување на број на положени испити на студентот
    student->numberOfFailedExams = numberOfFailedExams; // Доделување на број на паднати испити на студентот
    student->numberOfExamsToGo = numberOfExamsToGo; // Доделување на број на испити кои му остануваат на студентот да ги положи
    student->averageGrade = averageGrade; // Доделување на просечна оценка на студентот
    return student; // Враќање на покажувач
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Пример за структури во C програмски јазик:

#include <stdio.h> // Вклучување на стандардната библиотека за влез и излез во Ц програмскиот јазик
#include <stdlib.h> // Вклучување на стандардната библиотека за алокација на меморија
#include <string.h> // Вклучување на стандардната библиотека за работа со текст

struct Student { // Дефинирање на структурата Student
    char name[50]; // Дефинирање на име на студентот
    int age; // Дефинирање на години на студентот
    char index[10]; // Дефинирање на индекс на студентот
    char faculty[50]; // Дефинирање на факултет на студентот
    char studyProgram[50]; // Дефинирање на студиска програма на студентот
    int yearOfStudy; // Дефинирање на година на студии на студентот
    int numberOfExams; // Дефинирање на број на испити на студентот
    int numberOfPassedExams; // Дефинирање на број на положени испити на студентот
    int numberOfFailedExams; // Дефинирање на број на паднати испити на студентот
    int numberOfExamsToGo; // Дефинирање на број на испити кои му остануваат на студентот да ги положи
    double averageGrade; // Дефинирање на просечна оценка на студентот
};
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Функција за доделување на податоци во структури со помош на функции и со враќање на структура:

struct Student setStudentData(char name[], int age, char index[], char faculty[], char studyProgram[], int yearOfStudy, int numberOfExams, int numberOfPassedExams, int numberOfFailedExams, int numberOfExamsToGo, double averageGrade) {
    struct Student student; // Дефинирање на структурата student од тип Student
    strcpy(student.name, name); // Доделување на име на студентот
    student.age = age; // Доделување на години на студентот
    strcpy(student.index, index); // Доделување на индекс на студентот
    strcpy(student.faculty, faculty); // Доделување на факултет на студентот
    strcpy(student.studyProgram, studyProgram); // Доделување на студиска програма на студентот
    student.yearOfStudy = yearOfStudy; //  Доделување на година на студии на студентот
    student.numberOfExams = numberOfExams; // Доделување на број на испити на студентот
    student.numberOfPassedExams = numberOfPassedExams; // Доделување на број на положени испити на студентот
    student.numberOfFailedExams = numberOfFailedExams; // Доделување на број на паднати испити на студентот
    student.numberOfExamsToGo = numberOfExamsToGo; // Доделување на број на испити кои му остануваат на студентот да ги положи
    student.averageGrade = averageGrade; // Доделување на просечна оценка на студентот
    return student; // Враќање на структурата student
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Функција за доделување на податоци во структури со помош на функции и со враќање на покажувач кон структура:

struct Student *setStudentData(char name[], int age, char index[], char faculty[], char studyProgram[], int yearOfStudy, int numberOfExams, int numberOfPassedExams, int numberOfFailedExams, int numberOfExamsToGo, double averageGrade) {
    struct Student *student = (struct Student *)malloc(sizeof(struct Student)); // Дефинирање на покажувач кон структурата student од тип Student
    strcpy(student->name, name); // Доделување на име на студентот
    student->age = age; // Доделување на години на студентот
    strcpy(student->index, index); // Доделување на индекс на студентот
    strcpy(student->faculty, faculty); // Доделување на факултет на студентот
    strcpy(student->studyProgram, studyProgram); // Доделување на студиска програма на студентот
    student->yearOfStudy = yearOfStudy; //  Доделување на година на студии на студентот
    student->numberOfExams = numberOfExams; // Доделување на број на испити на студентот
    student->numberOfPassedExams = numberOfPassedExams; // Доделување на број на положени испити на студентот
    student->numberOfFailedExams = numberOfFailedExams; // Доделување на број на паднати испити на студентот
    student->numberOfExamsToGo = numberOfExamsToGo; // Доделување на број на испити кои му остануваат на студентот да ги положи
    student->averageGrade = averageGrade; // Доделување на просечна оценка на студентот
    return student; // Враќање на покажувачот кон структурата student
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Да продолжиме со објаснување на класи:

    // Класите се дефинираат со помош на клучната зборче class, а се состојат од променливи и функции.
    // Класите се дефинираат во .h датотека, а се имплементираат во .cpp датотека.
    // Класите се состојат од приватни и јавни променливи и функции.
    // Приватните променливи и функции се дефинирани во делот private, а јавните во делот public.
    // Приватните променливи и функции не можат да се пристапат надвор од класата, додека јавните можат.
    // Класите се дефинираат со помош на клучната зборче class, а се состојат од променливи и функции.

    // Да дефинираме класа Student:

    class Student { // Дефинирање на класата Student
    private: // Дефинирање на приватни променливи и функции
        char name[50]; // Дефинирање на име на студентот
        int age; // Дефинирање на години на студентот
        char index[10]; // Дефинирање на индекс на студентот
        char faculty[50]; // Дефинирање на факултет на студентот
        char studyProgram[50]; // Дефинирање на студиска програма на студентот
        int yearOfStudy; // Дефинирање на година на студии на студентот
        int numberOfExams; // Дефинирање на број на испити на студентот
        int numberOfPassedExams; // Дефинирање на број на положени испити на студентот
        int numberOfFailedExams; // Дефинирање на број на паднати испити на студентот
        int numberOfExamsToGo; // Дефинирање на број на испити кои му остануваат на студентот да ги положи
        double averageGrade; // Дефинирање на просечна оценка на студентот
    };
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Да дефинираме класа Student со јавни променливи и функции:

    class Student { // Дефинирање на класата Student
    public: // Дефинирање на јавни променливи и функции
        char name[50]; // Дефинирање на име на студентот
        int age; // Дефинирање на години на студентот
        char index[10]; // Дефинирање на индекс на студентот
        char faculty[50]; // Дефинирање на факултет на студентот
        char studyProgram[50]; // Дефинирање на студиска програма на студентот
        int yearOfStudy; // Дефинирање на година на студии на студентот
        int numberOfExams; // Дефинирање на број на испити на студентот
        int numberOfPassedExams; // Дефинирање на број на положени испити на студентот
        int numberOfFailedExams; // Дефинирање на број на паднати испити на студентот
        int numberOfExamsToGo; // Дефинирање на број на испити кои му остануваат на студентот да ги положи
        double averageGrade; // Дефинирање на просечна оценка на студентот
    };
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Да дефинираме класа Student со јавни променливи и приватни функции:

    class Student { // Дефинирање на класата Student
    public: // Дефинирање на јавни променливи и функции
        char name[50]; // Дефинирање на име на студентот
        int age; // Дефинирање на години на студентот
        char index[10]; // Дефинирање на индекс на студентот
        char faculty[50]; // Дефинирање на факултет на студентот
        char studyProgram[50]; // Дефинирање на студиска програма на студентот
        int yearOfStudy; // Дефинирање на година на студии на студентот
        int numberOfExams; // Дефинирање на број на испити на студентот
        int numberOfPassedExams; // Дефинирање на број на положени испити на студентот
        int numberOfFailedExams; // Дефинирање на број на паднати испити на студентот
        int numberOfExamsToGo; // Дефинирање на број на испити кои му остануваат на студентот да ги положи
        double averageGrade; // Дефинирање на просечна оценка на студентот
    private: // Дефинирање на приватни променливи и функции
        void calculateAverageGrade(); // Дефинирање на функција за пресметување на просечна оценка на студентот
    };
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Продолжуваме со оператори потребни за Ц++:

    // Оператори за доделување:
    // = - Доделување на вредност на променлива
    // += - Доделување на вредност на променлива со зголемување на вредноста на променливата
    // -= - Доделување на вредност на променлива со намалување на вредноста на променливата
    // *= - Доделување на вредност на променлива со множење на вредноста на променливата
    // /= - Доделување на вредност на променлива со делење на вредноста на променливата
    // %= - Доделување на вредност на променлива со делење со остаток на вредноста на променливата
    // <<= - Доделување на вредност на променлива со поместување на битови на лево
    // >>= - Доделување на вредност на променлива со поместување на битови на десно
    // &= - Доделување на вредност на променлива со логичко И на вредноста на променливата
    // ^= - Доделување на вредност на променлива со логичко исклучувачко ИЛИ на вредноста на променливата
    // |= - Доделување на вредност на променлива со логичко ИЛИ на вредноста на променливата
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Оператори за споредба:

    // == - Споредба на две променливи дали се еднакви
    // != - Споредба на две променливи дали не се еднакви
    // > - Споредба на две променливи дали е првата поголема од втората
    // < - Споредба на две променливи дали е првата помала од втората
    // >= - Споредба на две променливи дали е првата поголема или еднаква на втората
    // <= - Споредба на две променливи дали е првата помала или еднаква на втората
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Оператори за логички операции:

    // && - Логичко И
    // || - Логичко ИЛИ
    // ! - Логичко НЕ
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Оператори за инкрементирање и декрементирање:

    // ++ - Зголемување на променлива за еден
    // -- - Намалување на променлива за еден
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Пример за оператори во Ц++:

#include <iostream>
using namespace std;

int main() { // Главна функција
    int a = 5; // Дефинирање на променлива а со вредност 5
    int b = 10; // Дефинирање на променлива b со вредност 10
    int c = 15; // Дефинирање на променлива c со вредност 15
    int d = 20; // Дефинирање на променлива d со вредност 20
    int e = 25; // Дефинирање на променлива e со вредност 25
    int f = 30; // Дефинирање на променлива f со вредност 30
    int g = 35; // Дефинирање на променлива g со вредност 35
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //  пример за оператори во Ц++: ( пресметката се води според минатите променливи декларирани )

    // Доделување на вредност на променлива со зголемување на вредноста на променливата
    a += 5; // a = a + 5
    cout << a << endl; // Имаме резултат 10

    // Доделување на вредност на променлива со намалување на вредноста на променливата
    b -= 5; // b = b - 5
    cout << b << endl; // Имаме резултат 5

    // Доделување на вредност на променлива со множење на вредноста на променливата
    c *= 5; // c = c * 5
    cout << c << endl; // Имаме резултат 75

    // Доделување на вредност на променлива со делење на вредноста на променливата
    d /= 5; // d = d / 5
    cout << d << endl; // Имаме резултат 4

    // Доделување на вредност на променлива со делење со остаток на вредноста на променливата
    e %= 5; // e = e % 5
    cout << e << endl; // Имаме резултат 0

    // Доделување на вредност на променлива со поместување на битови на лево
    f <<= 5; // f = f << 5
    cout << f << endl; // Имаме резултат 960

    // Доделување на вредност на променлива со поместување на битови на десно
    g >>= 5; // g = g >> 5
    cout << g << endl; // Имаме резултат 1
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Пример за оператори за споредба во Ц++:

    // Споредба на две променливи дали се еднакви
    if (a == b) { // Ако променливата а е еднаква на променливата b
        cout << "a e ednakvo na b" << endl; // Имаме резултат "a e ednakvo na b"
    }

    // Споредба на две променливи дали не се еднакви
    if (a != b) { // Ако променливата а не е еднаква на променливата b
        cout << "a ne e ednakvo na b" << endl; // Имаме резултат "a ne e ednakvo na b"
    }

    // Споредба на две променливи дали е првата поголема од втората
    if (a > b) { // Ако променливата а е поголема од променливата b
        cout << "a e pogolemo od b" << endl; // Имаме резултат "a e pogolemo od b"
    }

    // Споредба на две променливи дали е првата помала од втората
    if (a < b) { // Ако променливата а е помала од променливата b
        cout << "a e pomalo od b" << endl; // Имаме резултат "a e pomalo od b"
    }

    // Споредба на две променливи дали е првата поголема или еднаква на втората
    if (a >= b) { // Ако променливата а е поголема или еднаква на променливата b
        cout << "a e pogolemo ili ednakvo na b" << endl; // Имаме резултат "a e pogolemo ili ednakvo na b"
    }
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Пример за логички оператори во Ц++:

    // Споредба на две променливи дали е првата поголема и еднаква на втората
    if (a >= b && a == b) { // Ако променливата а е поголема или еднаква на променливата b
        cout << "a e pogolemo ili ednakvo na b" << endl; // Имаме резултат "a e pogolemo ili ednakvo na b"
    }

    // Споредба на две променливи дали е првата поголема или еднаква на втората
    if (a >= b || a == b) { // Ако променливата а е поголема или еднаква на променливата b
        cout << "a e pogolemo ili ednakvo na b" << endl; // Имаме резултат "a e pogolemo ili ednakvo na b"
    }

    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Пример за оператори за зголемување и намалување во Ц++: ( пресметката се води според минатите променливи декларирани )

    // Зголемување на променлива
    a++; // a = a + 1
    cout << a << endl; // Имаме резултат 6

    // Намалување на променлива
    b--; // b = b - 1

    // Зголемување на променлива
    ++a; // a = a + 1

    // Намалување на променлива
    --b; // b = b - 1

    // Зголемување на променлива
    a += 1; // a = a + 1

    // Намалување на променлива
    b -= 1; // b = b - 1

    // Зголемување на променлива
    a = a + 1; // a = a + 1

    // Намалување на променлива
    b = b - 1; // b = b - 1
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Тернарниот оператор е оператор кој има три операнди и е единствениот тернарен оператор во Ц++.
    // Пример за тернарен оператор во Ц++:

    // Тернарен оператор
    int a = 5, b = 10, c;
    c = (a > b) ? a : b; // Ако а е поголемо од b тогаш c = a, ако не тогаш c = b
    cout << c << endl; // Имаме резултат 10
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Пример за оператори за битовски пресметки во Ц++:

    // Пресметка на битови со операторот И
    int a = 5, b = 10, c;
    c = a & b; // c = a AND b
    cout << c << endl; // Имаме резултат 0

    // Пресметка на битови со операторот ИЛИ
    int a = 5, b = 10, c;
    c = a | b; // c = a OR b
    cout << c << endl; // Имаме резултат 15

    // Пресметка на битови со операторот ИСКЛУЧИВО ИЛИ
    int a = 5, b = 10, c;
    c = a ^ b; // c = a XOR b
    cout << c << endl; // Имаме резултат 15

    // Пресметка на битови со операторот НЕ
    int a = 5, b = 10, c;
    c = ~a; // c = NOT a
    cout << c << endl; // Имаме резултат -6

    // Пресметка на битови со операторот Поместување на лево
    int a = 5, b = 10, c;
    c = a << 2; // c = a << 2
    cout << c << endl; // Имаме резултат 20

    // Пресметка на битови со операторот Поместување на десно
    int a = 5, b = 10, c;
    c = a >> 2; // c = a >> 2
    cout << c << endl; // Имаме резултат 1
    -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Пример за оператори за пресметки со променливи во Ц++:

    // Пресметка со променливи
    int a = 5, b = 10, c;
    c = a + b; // c = a + b
    cout << c << endl; // Имаме резултат 15

    // Пресметка со променливи
    int a = 5, b = 10, c;
    c = a - b; // c = a - b
    cout << c << endl; // Имаме резултат -5

    // Пресметка со променливи
    int a = 5, b = 10, c;
    c = a * b; // c = a * b
    cout << c << endl; // Имаме резултат 50

    // Пресметка со променливи
    int a = 5, b = 10, c;
    c = a / b; // c = a / b
    cout << c << endl; // Имаме резултат 0

    // Пресметка со променливи
    int a = 5, b = 10, c;
    c = a % b; // c = a % b
    cout << c << endl; // Имаме резултат 5
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Наследност во Ц++:
// Наследноста во Ц++ е процесот каде што еден објект може да наследи својства од друг објект.
// Класата која наследува се нарекува подкласа, а класата од која се наследува се нарекува надкласа.
// Класата која наследува може да пристапи до јавните членови на надкласата, но не и до приватните членови.
// Класата која наследува може да промени некои од членовите на надкласата.
// Класата која наследува може да додаде нови членови.
// Класата која наследува може да има повеќе подкласи.
// Класата која наследува може да наследи повеќе надкласи.
// Класата која наследува може да наследи надкласа која наследува друга надкласа.
// Класата која наследува може да наследи надкласа која наследува повеќе надкласи.
// Класата која наследува може да наследи надкласа која наследува надкласа која наследува друга надкласа.
// Класата која наследува може да наследи надкласа која наследува надкласа која наследува повеќе надкласи.
// Класата која наследува може да наследи надкласа која наследува надкласа која наследува надкласа која наследува друга надкласа. :-P
// и така натаму... хаха.

// Пример за наследност во Ц++:

// Надкласа
class Animal { // Ова е надкласата
  public: // Ова е јавен член
    void animalSound() { // Ова е јавен член
      cout << "The animal makes a sound \n" ; // Ова е јавен член
    }
};

// Подкласа
class Pig : public Animal { // Ова е подкласата
  public: // Ова е јавен член
    void animalSound() { // Ова е јавен член
      cout << "The pig says: wee wee \n" ; // Ова е јавен член
    }
};

// Подкласа
class Dog : public Animal { // Ова е подкласата
  public: // Ова е јавен член
    void animalSound() { // Ова е јавен член
      cout << "The dog says: bow wow \n" ; // Ова е јавен член
    }
};

int main() { // Ова е главната функција
  Animal myAnimal; // Ова е објект од надкласата
  Pig myPig; // Ова е објект од подкласата
  Dog myDog; // Ова е објект од подкласата

  myAnimal.animalSound(); // Пристап до јавниот член од надкласата
  myPig.animalSound(); // Пристап до јавниот член од подкласата
  myDog.animalSound(); // Пристап до јавниот член од подкласата
  return 0; // Враќа 0
}

// Имаме резултат:
// The animal makes a sound - прва надкласа
// The pig says: wee wee - подкласа 1
// The dog says: bow wow - подкласа 2
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Полиморфизам во Ц++:
// Полиморфизмот во Ц++ е процесот каде што еден објект може да има повеќе форми.
// Полиморфизмот може да се постигне со преклопување на функции, или со наследување.

// Пример за полиморфизам со користење на преоптоварување на функции:
#include <iostream>
using namespace std;

class printData { // Ова е класата
   public: // Ова е јавен член
      void print(int i) { // Ова е јавен член, исто така е и преоптоварен
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;

   // Повик за принт функцијата за да се испечати инт
   pd.print(5);

   // Повик за принт функцијата за да се испечати флоат
   pd.print(500.263);

   // Повик за принт функцијата за да се испечати карактер
   pd.print("Hello C++");

   return 0;
}

// Имаме резултат:
// принт инт: 5
// принт флоат: 500.263
// принт карактер: Hello C++
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Пример за полиморфизам со користење на наследување:
#include <iostream>

using namespace std;

class Shape { // Ова е надкласата
   protected: // Ова е заштитен член
      int width, height;

   public: // Ова е јавен член
      Shape( int a = 0, int b = 0) { // Ова е конструктор
         width = a;
         height = b;
      }
      int area() { // Ова е јавен член
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

class Rectangle: public Shape { // Ова е подкласата
   public: // Ова е јавен член
      Rectangle( int a = 0, int b = 0):Shape(a, b) { } // Ова е конструктор
      int area () { // Ова е јавен член
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }
};

class Triangle: public Shape{ // Ова е подкласата
   public: // Ова е јавен член
      Triangle( int a = 0, int b = 0):Shape(a, b) { } // Ова е конструктор
      int area () { // Ова е јавен член
         cout << "Triangle class area :" <<endl;
         return (width * height / 2);
      }
};

// Главната функција
int main( ) {
   Shape *shape; // Ова е објект од надкласата
   Rectangle rec(10,7); // Ова е објект од подкласата
   Triangle  tri(10,5); // Ова е објект од подкласата

   // Повикување на функцијата area
   shape = &rec;

   // Повик на функцијата area на правоаголникот
   shape->area();

   // Повикување на функцијата area
   shape = &tri;

   // Повик на функцијата area на триаголникот
   shape->area();

   return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Виртуелни функции во Ц++:

// Виртуелните функции се функции чија имплементација се одложува за подкласите.
// Креирање на виртуелна функција во Ц++:
// Да се креира виртуелна функција, само треба да се постави виртуелен пристап во надкласата.
// Виртуелните функции може да се имплементираат во подкласите, дури и ако нема имплементација во надкласата.
// Виртуелните функции се дефинирани со користење на резервен збор virtual.
// Пример за виртуелни функции во Ц++:
#include <iostream>
using namespace std;

class Base { // Ова е надкласата
   public: // Ова е јавен член
      virtual void print () { // Ова е виртуелна функција
         cout << "Print base class" <<endl;
      }

      void show () { // Ова е јавен член
         cout << "Show base class" <<endl;
      }
};

class Derived:public Base { // Ова е подкласата
   public: // Ова е јавен член
      void print () { // Ова е виртуелна функција
         cout << "Print derived class" <<endl;
      }

      void show () { // Ова е јавен член
         cout << "Show derived class" <<endl;
      }
};

// Главната функција
int main() {
   Base *bptr;
   Derived d;

   bptr = &d;

   // Повик на функцијата print
   bptr->print();

   // Повик на функцијата show
   bptr->show();

   return 0;
}
// Имаме резултат:
// Print derived class
// Show base class
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Чисто виртуелни функции во Ц++:

// Чисто виртуелните функции се функции кои немаат имплементација во надкласата.
// Чисто виртуелните функции се дефинирани со користење на резервен збор virtual и поставување на 0 во надкласата.
// Пример за чисто виртуелни функции во Ц++:
#include <iostream>
using namespace std;

class Base { // Ова е надкласата
   public: // Ова е јавен член
      virtual void show() = 0; // Ова е чисто виртуелна функција

};

class Derived:public Base { // Ова е подкласата
   public: // Ова е јавен член
      void show() { // Ова е виртуелна функција
         cout << "Implementation of Virtual Function in Derived class" <<endl;
      }
};

// Главната функција
int main() {
   Base *bptr;
   Derived d;
   bptr = &d;
   bptr->show();

   return 0;
}
// Имаме резултат:
// Implementation of Virtual Function in Derived class
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Чисто виртуелни деструктори во Ц++:

// Чисто виртуелните деструктори се деструктори кои немаат имплементација во надкласата.
// Чисто виртуелните деструктори се дефинирани со користење на резервен збор virtual и поставување на 0 во надкласата.
// Пример за чисто виртуелни деструктори во Ц++:
#include <iostream>
using namespace std;

class Base { // Ова е надкласата
   public: // Ова е јавен член
      virtual ~Base() = 0; // Ова е чисто виртуелен деструктор
};

Base::~Base() { // Ова е деструктор
   cout << "Pure virtual destructor is called" <<endl;
}

class Derived:public Base { // Ова е подкласата
   public: // Ова е јавен член
      ~Derived() { // Ова е деструктор
         cout << "Derived class destructor is called" <<endl;
      }
};

// Главната функција
int main() {
   Base *bptr = new Derived();
   delete bptr;

   return 0;
}
// Имаме резултат:
// Derived class destructor is called
// Pure virtual destructor is called
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Чисто виртуелни функции и класи во Ц++:

// Чисто виртуелните функции и класи се користат за креирање апстрактни класи.
// Апстрактните класи се класи кои не може да се инстанцираат, туку може само да се наследуваат.
// Апстрактните класи се дефинирани со користење на резервен збор virtual и поставување на 0 во надкласата.
// Пример за чисто виртуелни функции и класи во Ц++:
#include <iostream>
using namespace std;

class Base { // Ова е надкласата
   public: // Ова е јавен член
      virtual void show() = 0; // Ова е чисто виртуелна функција
};

class Derived:public Base { // Ова е подкласата
   public: // Ова е јавен член
      void show() { // Ова е виртуелна функција
         cout << "Implementation of Virtual Function in Derived class" <<endl;
      }
};

// Главната функција
int main() {
   Base *bptr;
   Derived d;
   bptr = &d;
   bptr->show();

   return 0;
}
// Имаме резултат:
// Implementation of Virtual Function in Derived class
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Static членови во Ц++:

// Static членовите се членови на класата кои се споделени од сите инстанци на класата.
// Static членовите може да се повикуваат без да се креира објект од класата.
// Static членовите се дефинирани со користење на резервен збор static.
// Пример за static членови во Ц++:
#include <iostream>
using namespace std;

class Box {
   public:
      static int objectCount; // Static променлива
      // Конструктор
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l; // Должина на кутијата
         breadth = b; // Ширина на кутијата
         height = h; // Висина на кутијата
         // Зголемување на бројот на објекти при секој нов објект
         objectCount++;
      }
      double Volume() { // Функција за пресметување на обемот на кутијата
         return length * breadth * height; // Пресметување на обемот на кутијата
      }
   private:
      double length;     // Должина на кутијата
      double breadth;    // Ширина на кутијата
      double height;     // Висина на кутијата
};

// Иницијализација на static членот на класата
int Box::objectCount = 0;

int main(void) {
   // Дефинирање на објектите
   Box Box1(3.3, 1.2, 1.5);    // Дефинирање на објект Box1
   Box Box2(8.5, 6.0, 2.0);    // Дефинирање на објект Box2

   // Печатење на бројот на објекти кои се креирани
   cout << "Total objects: " << Box::objectCount << endl;

   return 0;
}
// Имаме резултат:
// Constructor called.
// Constructor called.
// Total objects: 2
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Повеќекратно наследување во Ц++:

// Повеќекратното наследување е процес на наследување на една класа од повеќе класи.
// Пример за повеќекратно наследување во Ц++:
#include <iostream>
using namespace std;

// Првата класа
class A {
   public:
      A() { // Конструктор на класата A
         cout << "Constructor of Class A" <<endl;
      }
};

// Втората класа
class B {
   public:
      B() { // Конструктор на класата B
         cout << "Constructor of Class B" <<endl;
      }
};

// Третата класа
class C: public B, public A { // Класата C наследува од класите B и A
   public:
      C() { // Конструктор на класата C
         cout << "Constructor of Class C" <<endl;
      }
};

// Главната функција
int main() {
   C obj;

   return 0;
}
// Имаме резултат:
// Constructor of Class B
// Constructor of Class A
// Constructor of Class C
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Исклучоци во Ц++:

// Исклучоците се користат за обработка на грешки во програмите.
// Исклучоците се користат за пренесување на контрола од еден дел од програмата во друг дел.
// Исклучоците се дефинирани со користење на резервен збор throw.
// Исклучоците се фатени со користење на try и catch блокови.
// Пример за исклучоци во Ц++:
#include <iostream>
using namespace std;

double division(int a, int b) { // Функција за делење
   if( b == 0 ) { // Проверка дали бројот е 0
      throw "Division by zero condition!"; // Фрлање на исклучок
   }
   return (a/b); // Враќање на резултат
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;

   try { // Пробај да извршиш дел од кодот
      z = division(x, y); // Повик на функцијата
      cout << z << endl; // Печатење на резултатот
   } catch (const char* msg) { // Фати го исклучокот и испечати го
     cerr << msg << endl; // Печатење на исклучокот
   }

   return 0;
}
// Имаме резултат:
// Division by zero condition!

// Пример за исклучоци во Ц++:
#include <iostream>
using namespace std;

int main() {
   try { // Пробај да извршиш дел од кодот
      throw 10; // Фрлање на исклучок
   } catch (int e) { // Фати го исклучокот и испечати го
      cout << "Exception Caught" << endl; // Печатење на исклучокот
      cout << e << endl; // Печатење на исклучокот
   }

   return 0;
}
// Имаме резултат:
// Exception Caught
// 10
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





