# include<stdio.h>
#include<stdint.h>

int increment(uint16_t *arr){
for(int i =0; i< 5; i++){
     arr[i]+= 2;
    
}

}

int main(){
    uint16_t a[]={1,2,3,4,5};
    increment(a);
    for (int i = 0; i < 5; i++)
    {
    printf("the value is %d\n",a[i]);
    printf("the address is %d\n",&a[i]);
    }
    
}





   



   

 
