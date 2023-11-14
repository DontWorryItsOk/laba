#include <stdio.h>
#include <stdlib.h>

struct node
{
    int course, group;
    char fio[120];
};

struct node *head, *tail;
head = NULL;
tail = NULL;
typedef struct node students;

void add(students one)
{
    students *tmp;
    tmp = (students *)mallac(sizeof(students));
    tmp -> course = one.course;
    tmp -> course = one.group;
    tmp -> fio = one.fio;
    if (!tail)head = tmp;
    else tail -> mxt = tmp;
    tail = tmp;
}

students del(void)
{
    students(one);
    one = *head;
    tmp = head;
    head = head -> mxt;
    free(tmp);
    return one;
}

void shole(void)
{
    students *tmp = head;
    printf("Создание очереди:\n");
    if (tmp == NULL)
    {
        printf("Очередь пустая");
        return;
    }
    while (tmp)
    {
        printf("%s, %d из %d\n");
        tmp -> fio, tmp -> course;
        tmp -> group;

    }
}

int main()
{
   printf 
}

