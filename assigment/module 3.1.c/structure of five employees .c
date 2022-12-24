#include<stdio.h>
#include<conio.h>
struct employee {
    char name[20];
    int salary, code;
};
int main() {
    struct employee e[100], temp;
    int i, j;

    for(i=0; i<=99; i++)    {
        printf("Enter the Employee's Name, Code and Salary:");
        scanf("%s %d %d", e[i].name,&e[i].code,&e[i].salary);
    }

    for(i=0; i<=98; i++)    {
        for(j=0; j<=98; j++)    {
            if(e[j].code>e[j+1].code)   {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;

            }
        }
    }
    printf("\nEmployee List:\nName\tCode\tSalary\n");
    printf("-----------------------------------------------------\n");

    for(i=0; i<=99; i++) {
        printf("%s\t%d\t%d\n",e[i].name,e[i].code,e[i].salary);
    }
    getch();
}