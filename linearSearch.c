#include<stdio.h>

int readme(){
    int array[8] = {2,4,8,16,32,64,128,256};
    printf("\nWe have an array of: ");
    for(int i=0;i<8;i++){
        printf("%d  ",array[i]);
    }
    return 0;
}
int linearSearch(int key){
    int array[8] = {2,4,8,16,32,64,128,256};
    for(int i=0; i<8;i++){
        if(array[i]==key){
            printf("\nElement found at index of: %d",i);
            printf("\n\nWe have used \"Linear Search\" to find out the index of the element inside the array.\n");
            break;
        } else if(i==7){
            printf("\nElement %d not exist inside the array.",key);
        }
        
    }
    return 0;
}
int main(){
    int key;
    readme();
    printf("\n\nEnter an element from the list: ");
    scanf("%d",&key);
    linearSearch(key);
    return 0;
} 
