#include <stdio.h>

int main(){ 
    
    int m_sete = 0;
    
    
    for(int i=10; i <=99999; i++){
        
        if(i%7==0){
            m_sete++;
        }
    }
    printf("%d",m_sete);
    return 0;
}