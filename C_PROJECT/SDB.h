#ifndef SDB_H_INCLUDED
#define SDB_H_INCLUDED
#define MAX_NUM_STUDENTS 10
typedef enum
{
    FALSE,
    TRUE

}BOOLEAN;

typedef struct
{
    unsigned char Student_ID;
    unsigned char Year;
    unsigned char Course_1_ID;
    unsigned char Course_1_Grade;
    unsigned char Course_2_ID;
    unsigned char Course_2_Grade;
    unsigned char Course_3_ID;
    unsigned char Course_3_Grade;



}STD_DATA;

void SDB_InitializeDataList(void); //function to initialize and clear all the data inside the list

BOOLEAN SDB_IsFull(void);  // check if the data list is full

unsigned char SDB_GetUsedSize(void); // prints the used size of the list

BOOLEAN SDB_AddEntry(unsigned char Student_ID,unsigned char Year,
                     unsigned char Course_1_ID,unsigned char Course_1_Grade,
                     unsigned char Course_2_ID,unsigned char Course_2_Grade,
                     unsigned char Course_3_ID,unsigned char Course_3_Grade); // adding new element to the list

void SDB_DeleteEntry(unsigned char Student_ID); // deleting an element from the list using its id

BOOLEAN SDB_ReadEntry(unsigned char Student_ID); // reading and printing the data of an element inside the list

void SDB_GetIdList(void);  // printing all students IDs inside the list

BOOLEAN SDB_IsIdExist(unsigned char Student_ID); // checking if an element exists inside the list with its id



#endif // SDB_H_INCLUDED
