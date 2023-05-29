#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#define BLOCKCHAIN_FILENAME "blockchain.txt"

#define MAX_NODES 1024
#define MAX_BLOCKS 1024

typedef struct Block {
    char* bid;
    struct Block* next;
} Block;

typedef struct Node {
    int nid;
    Block* blockList;
    struct Node* next;
} Node;

#endif
