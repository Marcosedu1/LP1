//Mateus Camargo RA 0030482213020
//Marcos Camargo RA 0030482123018
#include <stdio.h>
#include <string.h>

void fTrocaExt(char *string, char *ext){

    for(int i = 0;i < strlen(string);i++){
        if(*(string+i)== '.'){
           i++;
           int j = 0;
           while(*(string+i) != '\0'){
                *(string+i) = *(ext+j);
                j++;
                i++;
           }
        }
    }
    printf("\n%s", string);
}


int main(){
    char string[11], ext[4];
    printf("Digite o nome do arquivo(10 caracteres): ");
    fgets(string,11,stdin);
    printf("Digite a nova extensao: ");
    fgets(ext,4,stdin);

    fTrocaExt(string,ext);
}
