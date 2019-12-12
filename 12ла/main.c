//  main.c
//  12la
//
//  Created by Арсений Билецкий on 11/12/2019.
//  Copyright © 2019 Арсений Билецкий. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    int chi,dlina,nomersred=0,i=0,j=0;
    char text[255],otvet[255];
         printf("Нужно удалить среднюю цифру числа\nВведите число\n");
         scanf("%d", &chi);
              sprintf(text,"%d", chi);
              dlina=strlen(text);
             if ((dlina%2)==0){
                 printf("В числе нет средней цифры,тк оно четное\n");}
             else{
                nomersred=((dlina+1)/2)-1;
                 for (i=0; i < nomersred;i++){
                     otvet[i]=text[i];
                 }
                 for (j=nomersred+1; j < dlina ;j++){
                     otvet[j-1]=text[j];
                                 }
                 printf("%s\n", otvet);
             }
    return 0;
}
