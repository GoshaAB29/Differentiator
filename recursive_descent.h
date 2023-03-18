#ifndef RECURSIVE_H
#define RECURSIVE_H

#include "diff.h"

//================================

size_t find_file_size(FILE *in);

char* fill_text(FILE* in, size_t file_size);

char* get_math_word(char* s);

struct Pnode* input_operator(struct Pnode* node, char oper);

struct Pnode* getG(struct Pnode* node);  					//getGrammar

struct Pnode* getE(struct Pnode* node); 					//getExpression

struct Pnode* getT(struct Pnode* node);						//getTerm

struct Pnode* getPw(struct Pnode* node); 					//getPower

struct Pnode* getP(struct Pnode* node);  					//getPrimary

struct Pnode* get_math_F(struct Pnode* node);  				//get_math_Functions - sin, cos, ...

struct Pnode* getV(struct Pnode* node);        				//getVariable

struct Pnode* getN(struct Pnode* node);       				//getNumber

//================================



#endif
