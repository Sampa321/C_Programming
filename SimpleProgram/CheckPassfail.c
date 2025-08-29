#include <stdio.h>

int main() {
    float marks;
    printf("Enter student marks:");
    scanf("%f",&marks);
    if(marks>35){
        printf("Student pass");
    }else{
        printf("Student fail");
    }
    return 0;
}