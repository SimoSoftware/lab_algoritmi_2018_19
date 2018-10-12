#include <stdio.h>

int main(){
    
    int k=0, count=0;
    printf("slittamento (n) => ");
    scanf("%d", &k);
    
    while(1){
        char c='a', j='a';
        c = getchar();
        if(count==0){
            count ++;
            continue;
        }
        if(c=='\n')
            break;
        if((c>='a' && c<='z') || (c>='A' && c<='Z')){
            if(c>='a' && c<='z')
                j = 'a';
            if(c>='A' && c<='Z')
                j = 'A';
        
            if((c+k-j)%26 == 0)
                c = j;
            else
                c = j + ((c+k-j)%26);
        }
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
