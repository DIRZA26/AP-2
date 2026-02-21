#include <stdio.h> // header standar untuk c
#include <conio.h> 

int main(){
    char nama [50];
    int nim;
    char kom [50];
    float ip;

    printf("hello world!!\n"); // printf -> untuk fungsi output pada C


    printf("masukkan nama: ");
    gets (nama); // gets -> get string

    printf("masukkan nim: ");
    scanf("%d", &nim);

    getchar();

    printf("masukkan kom: ");
    gets(kom);

    printf("masukkan ip: ");
    scanf("%f", &ip);

    /*ini untuk output*/
    printf("Nama : ");
    puts(nama); //put string; untuk string dalam bentuk array char

    printf("nim : %d\n", nim);

    printf("kom : ");
    puts(kom);

    printf("ip: %f\n", ip);

    printf("press any button to continue... ");
    getch();
    


}