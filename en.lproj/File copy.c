//
//  File.c
//  classwork
//
//  Created by Ray Lauff on 11/27/12.
//  Copyright (c) 2012 Ray Lauff. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct singlenode {
    char name[30];
    int size, time, weight;
    struct singlenode *next_node;
} id_node;

typedef id_node *id_node_pointer;

char *id_node_toString( id_node *p );
void printall( id_node *top );

int main()
{
    id_node_pointer top;
    id_node_pointer current;
    
    id_node test;
    id_node test2 = { "Norma Ray", 3, 4, 5, (id_node *)NULL };
    
    test2.time = 44;
    
    strcpy( test.name, "Bob Smith" );
    test.size = 300;
    test.time = 40;
    test.weight = 4;
    
    top = ( id_node * ) malloc ( sizeof ( id_node ) );
    
    current = top;
    strcpy( current->name, "Bob Smith" );
    current->size = 400;
    current->time = 40;
    current->weight = 10;
    current->next_node = (id_node *) malloc( sizeof (id_node) );
    
    printf( "The data in the first structure is %s.\n", id_node_toString( current ) );
    
    current = current->next_node;
    strcpy( current->name, "Karen Johnson" );
    current->size = 888;
    current->time = 643;
    current->weight = -948;
    current->next_node = (id_node *) malloc( sizeof (id_node) );
    
    printf( "The data in the first structure is %s.\n", id_node_toString( current ) );
    
    current = current->next_node;
    strcpy( current->name, "Sue Poppins" );
    current->size = 7;
    current->time = 6;
    current->weight = 8;
    current->next_node = (id_node *) NULL;
    
    printf( "The data in the first structure is %s.\n", id_node_toString( current ) );
    
    puts( "----------" );
    printall( top );
    
    
    return EXIT_SUCCESS;
}


char *id_node_toString( id_node *p )
{
    static char buf[100];
    
    snprintf( buf, 100, "name:%s, size:%d, time:%d, weight: %d, next:%p",
             p->name, p->size, p->time, p->weight, p->next_node );
    
    return buf;
}

typedef int banana;

void printall( id_node_pointer top )
{
    id_node_pointer c = top;
    banana i = 0;
    
    while ( c != NULL ) {
        printf( "%d: %s.\n", ++i, id_node_toString( c ) );
        c = c->next_node;
    }
}