#include<stdio.h>

struct{
    char name[30];
    char dob[11];
    char fathername[30];
    char mothername[30];
    char address[50];
    char contactnumber[20];
    char email[50];
    char ssc[5];
    char hsc[5];
}student[100];

void add(int n){
    printf("Enter student name: ");
    scanf(" %[^\n]s", student[n].name);
    printf("Enter date of birth (MM/DD/YYYY): ");
    scanf(" %[^\n]s", student[n].dob);
    printf("Enter father name: ");
    scanf(" %[^\n]s", student[n].fathername);
    printf("Enter mother name: ");
    scanf(" %[^\n]s", student[n].mothername);
    printf("Enter address: ");
    scanf(" %[^\n]s", student[n].address);
    printf("Enter email address: ");
    scanf(" %[^\n]s", student[n].email);
    printf("Enter contact number: ");
    scanf(" %[^\n]s", student[n].contactnumber);
    printf("Enter SSC GPA: ");
    scanf(" %[^\n]s", student[n].ssc);
    printf("Enter HSC GPA: ");
    scanf(" %[^\n]s", student[n].hsc);
}

void individual_display(int i){
    printf("\n[+] Registration No. : %d\n", i+1);
    printf("Name           : %s\n", student[i].name);
    printf("Date of birth  : %s\n", student[i].dob);
    printf("Father's name  : %s\n", student[i].fathername);
    printf("Mother's name  : %s\n", student[i].mothername);
    printf("Address        : %s\n", student[i].address);
    printf("Email          : %s\n", student[i].email);
    printf("Contact number : %s\n", student[i].contactnumber);
    printf("SSC GPA        : %s\n", student[i].ssc);
    printf("HSC GPA        : %s\n", student[i].hsc);
}

void alldisplay(int n){
    for(int i = 0; i < n; i++){
        individual_display(i);
    }
}

void search(int n){
    int s;
    printf("Enter registration no. : ");
    scanf("%d", &s);

    if(s > n){
        printf("\n\tNo information found !!\n");
    }
    else{
        individual_display(s-1);
    }
}


int main(){
    int n = 0;
    printf("\tDIU STUDENT REGISTRATION FORM\n");

    while(1){
        printf("\n***** Select key *****\n");
        printf("\tPress 1 to add student.\n");
        printf("\tPress 2 to see the total number of registered students.\n");
        printf("\tPress 3 to display the details of registered students.\n");
        printf("\tPress 4 to search register student by registration number.\n");
        printf("\tPress 0 to exit.\n");

        int key;
        printf("Please enter your choice: ");
        scanf("%d", &key);

        if(key == 1){
            add(n);
            ++n;
        }
        else if(key == 2){
            printf("\nThe total number of registered students: %d\n", n);
        }
        else if(key == 3){
            alldisplay(n);
        }
        else if(key == 4){
            search(n);
        }
        else if(key == 0){
            break;
        }
        else{
            printf("\nYou entered an invalid key. Please try again...\n");
        }
    }

    return 0;
}