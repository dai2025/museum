// Note that this implementation is simple and may have limitations in terms of functionality and performance compared to actual malloc and free implementations.
// For example, it doesn't handle requests for blocks larger than the block size of the memory pool.
// It also doesn't handle requests for memory larger than the total size of the memory pool.

// Nevertheless, this implementation can be a good starting point for learning about memory allocation and management in C.

// Here's an example usage of the custom malloc and free functions:
  
#include <stdio.h>

#define BLOCK_SIZE 16
#define NUM_BLOCKS 4

void* my_malloc(size_t size);
void my_free(void* ptr);

int main() {
    int* int_ptr = (int*)my_malloc(sizeof(int));
    *int_ptr = 42;
    printf("Value of int_ptr: %d\n", *int_ptr);

    char* char_ptr = (char*)my_malloc(sizeof(char) * 10);
    strcpy(char_ptr, "Hello");
    printf("Value of char_ptr: %s\n", char_ptr);

    my_free(int_ptr);
    my_free(char_ptr);

    return 0;
}

typedef struct mem_block {
    struct mem_block* next;
} mem_block_t;

typedef struct mem_pool {
    char* buf;
    mem_block_t* free_list;
    size_t block_size;
    size_t buf_size;
} mem_pool_t;

mem_pool_t pool;

void mem_pool_init(mem_pool_t* pool, size_t buf_size, size_t block_size) {
    pool->buf = (char*)malloc(buf_size);
    pool->free_list = NULL;
    pool->block_size = block_size;
    pool->buf_size = buf_size;
    for (char* p = pool->buf; p < pool->buf + pool->buf_size; p += pool->block_size) {
        mem_block_t* block = (mem_block_t*)p;
        block->next = pool->free_list;
        pool->free_list = block;
    }
}

void* my_malloc(size_t size) {
    if (pool.buf == NULL) {
        mem_pool_init(&pool, BLOCK_SIZE * NUM_BLOCKS, BLOCK_SIZE);
    }

    if (size > pool.block_size) {
        return NULL;
    }

    if (pool.free_list == NULL) {
        return NULL;
    }

    mem_block_t* block = pool.free_list;
    pool.free_list = block->next;
    return (void*)block;
}

void my_free(void* ptr) {
    mem_block_t* block = (mem_block_t*)ptr;
    block->next = pool.free_list;
    pool.free_list = block;
}
