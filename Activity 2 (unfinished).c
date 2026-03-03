#include <stdio.h>
#include <stdbool.h>

   //1
   int array[5], element;
   int count = 0;
   //2
   int target, position;
 bool found;
    //3
    int pos;
    //4
    char choice;

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


    //algorithm 3


    void delete() {
        //step 2
        if (count == 0) {
            printf("Array is empty. Nothing to delete.\n");
            return;
        }
        //step 3 and step 4
        printf("Enter the element to delete: ");
        scanf("%d", &target);
        //step 5
        found = false;

        for (int i=0; i < count; i++) {
            if (array[i]==target){
            pos = i;
            found = true;
            break; //to stop loop
            }
        }
        //step 6
        if (found == false){
            printf("Element not found. No deletion made.\n");
            return;
        }
        //step 7
        for(int i = pos; i < count - 1; i++){
            array[i] = array [i + 1];
        }
        //step 8 decrement 
        count--;


    }

    //algorithm 4


    void sort() {
        int temp;
        bool swapped;
        //step 2
        if(count < 2){
            printf("Not enough elements to sort.");
            return;
        }
        //step 3 and step 4
        printf("Display: Sort in (A) Ascending or (D) Descending order?");
        scanf(" %c", &choice);
        
        //step 5
        for(int i=0; i < count; i++) {
            swapped=false;
            for(int j=0; j < count - 1 - i; j++){
                if(choice == 'A' && array[j]>array[j+1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;

                    swapped = true;

                }
                else if(choice == 'D' && array[j] < array[j+1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    swapped = true;

                }
            }

            if (!swapped) {
                break;
            }
        }
        //step 6
        if(choice == 'A'){
            printf("Array sorted in Ascending order.");
        }
        //step 7
        else if(choice =='D'){
            printf("Array sorted in Descending order.");
        }
        //step 8
        else {
            printf("Invalid choice. Returning to menu.");
        }

    

    }

    //Algorithm 5

    void Print(){
        //step 2
        if(count==0){
            printf("The array is empty.");
        }
        //step 3
        printf("Current elements in the array: ");
        //step 4
        for(int i=0; i < count; i++){
            printf("Position %d: %d\n", i + 1, array[i]);
        }
        //step 5
        printf("Total elements: [%d]", count);
    }

    int main(){

        int choose;

    while (1) {
       printf("Menu of operations:\n1. Add 5 elements to the array\n2. Search for an element in the array\n3. Delete an element from the array\n4. Sort the elements (Ascending or Descending)\n5. Print the final elements in the array\n");
       printf("Enter your choice: \n");
       scanf("%d", &choose);

      

       switch(choose) {
        case 1:
            add();
            break;
        
        case 2:
            find();
            break;
        
        case 3:
            delete();
            break;

        case 4:
            sort();
            break;
        
        case 5:
            Print();
            break;
        case 6:
            printf("Exiting program...\n");
            return 0;    
        default:
            printf("Invalid choice. Try again.\n");
       }

       

    }
       


}

    
  
