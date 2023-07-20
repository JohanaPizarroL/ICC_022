#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a > b && a > c){
        if(b > c){
            printf("maior eh o %d, intermediario eh o %d e menor eh o %d", a, b ,c);}
        else{
            printf("maior eh o %d, intermediario eh o %d e menor eh o %d", a, c ,b);}
    }
    
    else if (b > a && b > c){
        if(a > c){
            printf("maior eh o %d, intermediario eh o %d e menor eh o %d", b, a ,c);}
            
        else{
            printf("maior eh o %d, intermediario eh o %d e menor eh o %d", b, c ,a);}
            
        }
    else if (c > a && c > b){
        if(a > b){
            printf("maior eh o %d, intermediario eh o %d e menor eh o %d", c, a ,b);}
            
        else{
            printf("maior eh o %d, intermediario eh o %d e menor eh o %d", c, b ,a);}
            
        }
    
    return 0;
}

//  if(c < b){
// if(c < a){
//  if(b < a)