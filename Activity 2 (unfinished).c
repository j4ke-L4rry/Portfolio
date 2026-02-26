#include <stdio.h>
#include <stdbool.h>

   //1
   int array[5], element;
   int count = 0;
   //2
   int target, position;
 bool found;

//algorithm 1

void add() {
    
 
  
    
    for(int i = 0; i < 5; i++) {
        
        printf("Enter element %d: ", i + 1);
        scanf("%d", &element);
        array[count] = element;
        count++;
     
    }

    printf("5 elements have been successfully added.\n");
    
}    


//algorithm 2

void find() {

    printf("Enter the element to search: ");
    scanf("%d", &target);

    found = false;
    position = -1;

    int i = 0;

    while (i < count && found == false) {
        if (array[i]==target) {
            found = true;
            position = i;
        }
        else { 
            i++;
        }
    }
    if (found == true) {
        printf("Element %d found at position %d.\n", target, position);
    }
    else {
        printf("Element %d not found in the array.\n", target);
    }    
    
}
    
  
