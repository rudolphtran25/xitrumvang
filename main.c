#include <stdio.h>
#include <string.h>

void innoidung(char *otput)
{
    FILE *f = fopen(otput, "r");
    {
        if (f == NULL)
        {
            printf("Khong the mo duoc file de doc.", otput);
            return;
        }
    }
    printf ("Noi dung trong tep la: \n", otput);

    char c;
    while ((c = fgetc(f)) != EOF)
    {
        putchar(c);
    }
    fclose(f);
}

int main()
{
    const char *otput = "C:/DATA/output.txt";
    FILE *f;
    f = fopen(otput, "w");
    if (f == NULL)
    {
        printf("Khong the mo tep de ghi. \n");
        return 1;
    }

    char dulieu[1000];
    printf("Nhap du lieu ky tu: ");
    fgets(dulieu, sizeof(dulieu), stdin);

    printf("Du lieu duoc lat nguoc la: ");
    fprintf(f, "Du lieu duoc lat nguoc la: ");


    for (int i = strlen(dulieu) - 1; i >= 0; i--)
    {
        printf("%c", dulieu[i]);
        fprintf(f, "%c", dulieu[i]);
    }
    fclose(f);
    printf("\n");

    innoidung(otput);

    return 0;
}
