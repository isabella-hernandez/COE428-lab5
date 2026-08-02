/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */
#include <stdio.h>
static int heap[100];
static int size = 0;
/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
	if (size == 0)
        return -1;

    int biggest = heap[0];

    size--;
    heap[0] = heap[size];

    int current = 0;

    while (1) {
        int left = 2 * current + 1;
        int right = 2 * current + 2;
        int largest = current;

        if (left < size && heap[left] > heap[largest])
            largest = left;

        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest == current)
            break;

        int temp = heap[current];
        heap[current] = heap[largest];
        heap[largest] = temp;

        current = largest;
    }

    return biggest;
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	if (size >= 100) {
        fprintf(stderr, "Heap is full.\n");
        return;
    }

    heap[size] = thing2add;

    int current = size;
    size++;

    while (current > 0) {
        int parent = (current - 1) / 2;

        if (heap[parent] >= heap[current])
            break;

        int temp = heap[parent];
        heap[parent] = heap[current];
        heap[current] = temp;

        current = parent;
    }
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  //A dummy return statement
}
