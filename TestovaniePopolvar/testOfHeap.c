#include <stdlib.h>
#include <stdio.h>
#define SIZEOFHEAP 1000


///Sem vloz svoj insert a svoj delete haldy



void checkCorrectHeap(int heapSize, VERTEX **heap)
{
    int correctArray[] = {1,2,5,5,5,8,6,20 ,7,13,10,14};
    for (int i = 1; i < heapSize + 1 ; ++i) {
        if (heap[i]->length != correctArray[i-1]) {
            printf("Wrong insert v heap");
            return;
        }
    }
    printf("Correct insert!\n");

}

void checkCorrectHeapDelete(int heapSize, VERTEX **heap) {

    int oldPush = -1;
    for (int i = 1; i < heapSize + 1 ; ++i) {
        if (oldPush > heap[i]->length) {
            printf("Wrong push v heap");
            return;
        }
    }
    printf("Correct delete!");


}


int main()
{
    VERTEX *halda[SIZEOFHEAP];
    int heapSize=0;
    int sizeOfArray = 12;
    int testArray[] = {20,13,14,5,5,6,2,1,7,5,10,8};

    ///insert uprav na svoju funkciu, typ štruktúry na haldu tak isto
    for (int i = 0; i < sizeOfArray ; ++i) {
        VERTEX *vertex = (VERTEX*)malloc(sizeof(VERTEX));
        vertex->length = testArray[i];
        insertHalda(&heapSize, halda, vertex);
    }


    checkCorrectHeap(heapSize, halda);
    checkCorrectHeapDelete(heapSize, halda);

}
