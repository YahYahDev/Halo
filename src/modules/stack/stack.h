#ifndef STACK_LIBRARY
#define STACK_LIBRARY

#include <stdlib.h>


#define GENERATE_TYPEOF_STACK(TYPE) \
        typedef struct TYPE##_STACK{\
        \
            TYPE *items;\
            \
            int count;\
            \
            size_t size;\
            \
        }TYPE##_STACK;\
        \
        \
        TYPE TYPEStackPop(TYPE##_STACK *stack){\
            TYPE item = stack->items[stack.count];\
            stack.count--;\
            return item;\
        }\
        \
        \
        void TYPEStackPush(TYPE##_STACK *stack, TYPE item){\
            stack->items[stack.count+1] = item;\
            stack.count++;\
        }\
        \
        \
        TYPE##_STACK* TYPEStackCreate(size_t size){\
            TYPE##_STACK stack = (TYPE##_STACK)malloc(sizeof(TYPE##_STACK));\
            stack.size = size;\
            stack.count = 0;\
            stack->items = (*TYPE)malloc(sizeof(TYPE)*size);\
        }\
        \
        \
        void TYPEStackFree(TYPE##_STACK *stack){\
            free(stack->items);\
            free(stack);\
            stack->items = NULL;\
            stack = NULL;\
        }\

        
#endif
