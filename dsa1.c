#include <stdio.h>
int main(){

    //traversing array
    int a[50],size;

    printf("enter size of array:");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }


//insertion at specific position
int size,a[50],pos,num;
printf("enter size of array:");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("enter position:");
    scanf("%d",&pos);
    

    if(pos<=0 || pos>size+1){
        printf("invalid position");
    }

    else{
        printf("enter number:");
    scanf("%d",&num);

    for(int i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
         }
         a[pos-1]=num;
         size++;

        for(int i=0;i<size;i++){
            printf("%d ",a[i]);
        }
    }    


    //deletion from specific position
    int a[50],pos,size;
    
    printf("enter size:");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter position to delete:");
    scanf("%d",&pos);
    
    if(pos<=0 || pos>size){
        printf("invalid position");
    }
    
    else{

    for(int i=pos-1;i<size-1;i++){
        a[i]=a[i+1];
    }
    size--;
    
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    }


    
    return 0;
}