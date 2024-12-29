#include <stdio.h>
#include <string.h>
#define MAX_THEATERS 3
#define END_SEQ -1.0

typedef struct {
    
    float collect[MAX_THEATERS];
    int nTheaters;
    
} tTheater;


void fillTable(tTheater *theater){
    
    int i;
    float temp;
    
    theater->nTheaters = 0;
    
    printf("insert number for save, if you want to exit press -1 \n");
    scanf("%f",&temp);
    
    while(temp != END_SEQ && theater->nTheaters < MAX_THEATERS){
        
        theater->collect[theater->nTheaters] = temp;
        
        theater->nTheaters++;
        
        scanf("%f",&temp);
        
    }
    
}

void sort(tTheater *theater){
    
    int i, j, posMin, aux;
    
    i = 0;
    
    while(i < theater->nTheaters){
        
        posMin = i; // posMin vale 0
        
        j = i + 1; // j vale 1
        
        while(j < theater->nTheaters){ // mientras 1 < 3
            
            if(theater->collect[j] < theater->collect[posMin]){ // j (1) < posMin (0)
                
                posMin = j; // posMin vale 1
            }
            
            j = j + 1;
        }
        
        aux = theater->collect[posMin];
        
        theater->collect[posMin] = theater->collect[i];
        
        theater->collect[i] = aux;
        
        i++;
        
    }
    
    
}

void printTheater(tTheater theater){
    
    int i;
    
    for(i=0; i < theater.nTheaters; ++i){
        
        printf("theater %d: %.1f \n",i+1, theater.collect[i]);
        
    }
    
}

int main()
{
    tTheater ondara;
    
    fillTable(&ondara);
    sort(&ondara);
    printTheater(ondara);
    
    
    

    return 0;
}
