#include <stdio.h>

int main (){
    char word[100];
    char morse[8];

    char ch;
    int count = 0;

    for(int i = 0 ; i < 7 ; i++)
    {
        morse[i] = 0;
    }

    for(int i = 0 ; i < 100 ; i++)
    {
        word[i] = 0;
    }

    printf("Give me a sentence: ");
    scanf("%[^\n]",word);

    for(int i = 0 ; i < 100 ; i++)
    {
        if(word[i] != 0)
        {
            count++;
            //printf("%c",word[i]);
        }
    }
    FILE *The_end =fopen("End_File.txt","w+");

    

    for(int i = 0 ; i < count ; i++)
    {
        FILE *file = fopen("Binary.txt","r");
        //printf("For %c: ",word[i]);
        int x = 0;
        while((ch = fgetc(file)) != EOF)
        {
            //printf("%c",ch);
            if(ch == 10 )
            {
                x = 0;
                if(morse[0] == word[i])
                {
                    //printf("Check\n");
                    break;
                }
                for(int i = 0 ; i < 9 ; i++)
                {
                    morse[i] = 0;
                }
                continue;
            }
            morse[x] = ch;
            x++;
        }
        for(int i = 2 ; i < 7 ; i++)
        {
            if(morse[i] != 0 ) 
            {
                fprintf(The_end,"%c",morse[i]);
                printf("%c", morse[i]);
            }else{
                break;
            }
            
        }
        printf("@");
        fprintf(The_end,"%c",64);
        fclose(file);
    }
    

    
    return 0;
}

