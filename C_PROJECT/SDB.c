#include <stdio.h>
#include <stdlib.h>

#include "SDB.h"



STD_DATA STD_LIST[MAX_NUM_STUDENTS];

int counter=0;


void SDB_InitializeDataList(void)
{

    int k;
    for (k=0;k<=MAX_NUM_STUDENTS;k++)
    {
    STD_LIST[k].Student_ID = 0;
    STD_LIST[k].Year    = 0;
    STD_LIST[k].Course_1_ID  = 0;
    STD_LIST[k].Course_1_Grade = 0;
    STD_LIST[k].Course_2_ID  = 0;
    STD_LIST[k].Course_2_Grade = 0;
    STD_LIST[k].Course_3_ID  = 0;
    STD_LIST[k].Course_3_Grade = 0;
    }
}

BOOLEAN SDB_IsFull(void)
{
    if (counter >= 10)
    {
        printf("STUDENT DATA BASE IS FULL \n");
        return TRUE;
    }
    else
    {
        printf("STUDENT DATA BASE IS NOT FULL \n");
        return FALSE;
    }
}



unsigned char SDB_GetUsedSize(void)
{
    printf("USED SIZE IS %d \n",counter);
    return counter;

}




BOOLEAN SDB_AddEntry(unsigned char Student_ID,unsigned char Year,unsigned char Course_1_ID,
                     unsigned char Course_1_Grade,unsigned char Course_2_ID,unsigned char Course_2_Grade,
                     unsigned char Course_3_ID,unsigned char Course_3_Grade)
{
    int i;
    if (counter >= 10)
    {
        printf("STUDENT LIST IS FULL \n");
        return FALSE;

    }
    else
    {


    for (i=1;i<=MAX_NUM_STUDENTS;i++)
            {
            if ( STD_LIST[i].Student_ID  == 0)

            {
            STD_LIST[i].Student_ID =  Student_ID;
            STD_LIST[i].Year = Year;
            STD_LIST[i].Course_1_ID = Course_1_ID;
            STD_LIST[i].Course_1_Grade = Course_1_Grade;
            STD_LIST[i].Course_2_ID  = Course_2_ID;
            STD_LIST[i].Course_2_Grade = Course_2_Grade;
            STD_LIST[i].Course_3_ID  = Course_3_ID;
            STD_LIST[i].Course_3_Grade = Course_3_Grade;
            counter++;
            printf("ENTRY ADDED SUCCESSFULLY \n");
            return TRUE;
            break;
            }
            }
    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
            if(STD_LIST[i].Student_ID != 0)

            {
            STD_LIST[(counter+1)].Student_ID     =  Student_ID;
            STD_LIST[(counter+1)].Year    =  Year;
            STD_LIST[(counter+1)].Course_1_ID  =  Course_1_ID;
            STD_LIST[(counter+1)].Course_1_Grade =  Course_1_Grade;
            STD_LIST[(counter+1)].Course_2_ID  =  Course_2_ID;
            STD_LIST[(counter+1)].Course_2_Grade =  Course_2_Grade;
            STD_LIST[(counter+1)].Course_3_ID  =  Course_3_ID;
            STD_LIST[(counter+1)].Course_3_Grade =  Course_3_Grade;
            counter++;
            printf("ENTRY ADDED SUCCESSFULLY \n");
            return TRUE;
            }
    }
    }
}





void SDB_DeleteEntry(unsigned char Student_ID)
{
    int i;

    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].Student_ID == Student_ID)
        {
            STD_LIST[i].Student_ID      = 0;
            STD_LIST[i].Year    = 0;
            STD_LIST[i].Course_1_ID  = 0;
            STD_LIST[i].Course_1_Grade = 0;
            STD_LIST[i].Course_2_ID  = 0;
            STD_LIST[i].Course_2_Grade = 0;
            STD_LIST[i].Course_3_ID  = 0;
            STD_LIST[i].Course_3_Grade = 0;
            if (counter >0)
            {
            counter--;
            }
            else
            {
                //do nothing
            }
            printf("ENTRY DELETED SUCCESSFULLY \n");
        }

    }

}




BOOLEAN SDB_ReadEntry(unsigned char Student_ID)
{
    int i;

    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].Student_ID == Student_ID)
        {

            printf("STUDENT YEAR IS %d \n",STD_LIST[i].Year);
            printf("STUDENT COURSE 1 ID IS %d \n",STD_LIST[i].Course_1_ID);
            printf("STUDENT COURSE 1 GRADE IS %d \n",STD_LIST[i].Course_1_Grade);
            printf("STUDENT COURSE 2 ID IS %d \n",STD_LIST[i].Course_2_ID);
            printf("STUDENT COURSE 2 GRADE IS %d \n",STD_LIST[i].Course_2_Grade);
            printf("STUDENT COURSE 3 ID IS %d \n",STD_LIST[i].Course_3_ID);
            printf("STUDENT COURSE 3 GRADE IS %d \n",STD_LIST[i].Course_3_Grade);
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }

}




void SDB_GetIdList(void)
{
    int i;

    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].Student_ID == 0)
        {
            //do nothing
        }
        else
        {
        printf("STUDENT %d ID IS %d  \n\n",i,STD_LIST[i].Student_ID);
        }
    }
    printf("NUMBER OF STUDENTS IS %d  \n",counter);
}




BOOLEAN SDB_IsIdExist(unsigned char Student_ID)
{
    int i;

    for (i=1;i<=MAX_NUM_STUDENTS;i++)
    {
        if (STD_LIST[i].Student_ID == Student_ID)
        {
            printf("STUDENT ID EXISTS \n");
            return TRUE;
        }
        else
        {
            printf("STUDENT ID DOESN'T EXIST \n");
            return FALSE;
        }
    }


}
