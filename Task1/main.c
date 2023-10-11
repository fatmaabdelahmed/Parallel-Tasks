#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Data{
    char Name[50];
    char Email[50];
    char Password[50];
    char Phone[50];
};

struct Data Info[10];
int i = 0;

void Register(){
    struct Data info;
    printf("Enter Your Name: ");
    scanf("%s",info.Name);

    printf("Enter Your Email: ");
    scanf("%s",info.Email);

    printf("Enter Your Password: ");
    scanf("%s",info.Password);

    printf("Enter Your Phone: ");
    scanf("%s",info.Phone);

    Info[i++] = info;
    printf("==> Register Successfully\n\n");
}

int Login(){
    char email[50],password[50];
    printf("Enter Email: ");
    scanf("%s",email);

    printf("Enter Password: ");
    scanf("%s",password);

    int j;
    for(j=0;j<strlen(Info);j++){
        if(strcmp(email,Info[j].Email) == 0 && strcmp(password,Info[j].Password) == 0){
                printf("\n\tWelcom %s\n",Info[j].Name);
            return 1;
        }
    }
    return 0;
}

int main()
{
    do{
        printf("Welcome\n");
        printf("1- Register\n2- Login\n3-Exit\n");
        int x;
        scanf("%d",&x);
        if(x == 1){
                Register();
        }else if(x == 2){
            int val = Login();
            if(val == 1){
                printf("==> Success To Login\n\n");
            }else{
                printf("==> Failed To Login\n\n");
            }
        }else if(x == 3){
            return 0;
        }else{
            printf("==> Wrong Number\n\n");
        }
    }while(1 > 0);

    return 0;
}
