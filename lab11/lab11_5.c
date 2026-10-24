#include <stdio.h>
#include <stdlib.h>

struct Person {
    char id[10];
    char name[50];
    char surname[50];
    char occupation[50];
    int age;
    char sex;
    char address[100];
};

int main() {
    struct Person p;
    FILE *fp;
    char filename[100];
    char choice;

    printf("Please enter name of file: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");

    do {
        printf("Please enter ID: ");
        scanf("%s", p.id);

        printf("Please enter name: ");
        scanf("%s", p.name);

        printf("Please enter surname: ");
        scanf("%s", p.surname);

        printf("Please enter occupation: ");
        scanf("%s", p.occupation);

        printf("Please enter age: ");
        scanf("%d", &p.age);

        printf("Please enter sex: ");
        scanf(" %c", &p.sex);

        getchar();  // clear buffer

        printf("Please enter address: ");
        fgets(p.address, sizeof(p.address), stdin);

        // เขียนลงไฟล์
        fprintf(fp, "%s %s %s %s %d %c %s",
                p.id, p.name, p.surname,
                p.occupation, p.age,
                p.sex, p.address);

        printf("Do you want to continue (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);

    // อ่านไฟล์เพื่อแสดงคนอายุ > 20
    fp = fopen(filename, "r");

    printf("\nThe list of person whose age over 20 are\n");

    while (fscanf(fp, "%s %s %s %s %d %c",
                  p.id, p.name, p.surname,
                  p.occupation, &p.age,
                  &p.sex) != EOF) {

        fgets(p.address, sizeof(p.address), fp);

        if (p.age > 20) {
            printf("%s %s %s %s %d %c %s",
                   p.id, p.name, p.surname,
                   p.occupation, p.age,
                   p.sex, p.address);
        }
    }

    fclose(fp);

    return 0;
}