#include<stdio.h>

void encrypt(char txt[],int n)
{
    int i;
    for(i=0; i<strlen(txt); i++)
    {
        if(txt[i]!=' ')
        {
            txt[i]= (txt[i]+n > 122)? txt[i]+n-26: txt[i]+n;
        }

    }
    printf("Encrypted text is: ");
    puts(txt);
    printf("\n\n");
}

void decrypt(char txt[], int n)
{
    int i;
    for(i=0; i<strlen(txt); i++)
    {
        if(txt[i]!=' ')
        {
            txt[i]= (txt[i]-n <97)? txt[i]-n+26: txt[i]-n;
        }
    }
    printf("Decrypted text is: ");
    puts(txt);
    printf("\n\n");
}

int main ()
{
    while(1)
    {
        int ch, diff;
        char text[100];
        printf("====Caesar Cipher solver====\n");
        printf("Options:  \n1. Encrypt \n2. Decrypt \n0. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        if(ch==0) break;
        printf("Enter the text (small letters): ");
        scanf(" %[^\n]%*c", text);
        printf("Enter the shifting number: ");
        scanf("%d", &diff);

        if(ch==1) encrypt(text, diff);
        else if(ch==2) decrypt(text, diff);
        else printf("You chose wrong option. Choose only 1 or 2. ");
    }

    return 0;
}
