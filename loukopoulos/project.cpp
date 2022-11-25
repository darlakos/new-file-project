#include <stdio.h>
#include "struct.h"
#include <stdlib.h>
#include <string.h>

int epilogh;


int  BinarySearch(author *array1,int arrayposition1,char* surname);
int SaveToBook(book* array2,int arrayposition2);
author* insert_author(int x, author* array1,writes* array3);
book* SortByTitle(book* array2,int arrayposition2);
int SaveToAuthor(author* array1,int arrayposition1);
int SaveToWrites(writes* array3,int arrayposition3);
book* insert_book(int x, book* array2,writes* array3,author* array1,char* surname);
author* SortByWriterId(author* array1,int arrayPosition1);
void LoadFromWrites(writes* array3, int* arrayposition3);
void LoadFromAuthor(author* array1,int* arrayposition1);
void LoadFromBook(book* array2,int* arrayposition2);


 void menu()
{
    printf("1. Insert new writer record \n");
    printf("2. Insert new book record \n");
    printf("3. Search a writer record \n");
    printf("4. Search a book record \n");
    printf("5. Delete a writer record \n");
    printf("6. Delete a book record  \n");
    printf("7. Exit  \n");
    
	}
	
int main()
{
	int arrayposition1=0;
	int arrayposition2=0;
	int arrayposition3=0;
	char surname[100];
	int index;
	char* title1;
	int middle;
	author* array1=(author*)malloc(sizeof(author)*1024);
	book* array2=(book*)malloc(sizeof(book)*1024);
	writes* array3=(writes*)malloc(sizeof(writes)*1024);
	
	LoadFromAuthor(array1,&arrayposition1);
	LoadFromBook(array2,&arrayposition2);
	LoadFromWrites(array3,&arrayposition3);
	
	menu();
	printf("Dwse enan arithmo apo 1 ews 7 : ");
    scanf("%d",&epilogh);
    
    
    while (epilogh<1 , epilogh>7, epilogh !=7)
    {
    	
    	if (epilogh ==1)
		
		 {	
		 	if (arrayposition1==1023)
		 	{
			 
                    array1=(author*)realloc(array1, sizeof(author)*(5120));
                    insert_author(arrayposition1,array1,array3);
                    //SaveToAuthor(array1,arrayposition1);
                    //SaveToWrites(array3,arrayposition3);
                    
					}
        else 
                    {
                    insert_author(arrayposition1,array1,array3);
                    
                    //SaveToAuthor(array1,arrayposition1);
                    //SaveToWrites(array3,arrayposition3);
                    }
                    
                    
                arrayposition1++;
                arrayposition3++;
		
			
		}
			
			else if (epilogh==2)
		{
		
			if (arrayposition2==1023)
		 
		 	{
			 
                    array2=(book*)realloc(array2, sizeof(book)*(5120));
                    insert_book(arrayposition2,array2,array3,array1,surname);
                    //SaveToBook(array2,arrayposition2);
                    
					}
        	else  
                    {
                    insert_book(arrayposition2,array2,array3,array1,surname);
                    //SaveToBook(array2,arrayposition2);
                    }
                    
        				 /*else
							{
								printf("surname not found \n"); 
								if (arrayposition1==1023)
		 						{
			 
                    			array1=(author*)realloc(array1, sizeof(author)*(5120));
                    			insert_author(arrayposition1,array1,array3);
                    			
                    
								}
        						else 
                   				{
                    			insert_author(arrayposition1,array1,array3);
                    		
                    			}
                    
                    
               	 				arrayposition1++;
               	 				arrayposition3++;*/
								
                    
            
                //arrayposition2++;
			
	}
		
		
	
		
		else if (epilogh==3)
		{
			printf(" evales 3 \n");
			menu();
		}
		
		else if (epilogh==4)
		{
			printf(" evales 4 \n");
			menu();
		}
		
		else if (epilogh==5)
		{
			printf(" evales 5 \n");
			menu();
		} 
		
		else if (epilogh==6)
		{
			printf(" evales 6 \n");
			menu();
		}

  		menu();
  		printf("Dwse enan arithmo apo 1 ews 7 : ");
    	scanf("%d",&epilogh);
    }
   	SaveToAuthor(array1,arrayposition1);
   	SaveToBook(array2,arrayposition2);
	SaveToWrites(array3,arrayposition3);
    free(array1);
    free(array2);
    free(array3);
    return 0;
   
}

/*writes* update_writes(int x,author* array1,book* array2,writes* array3,char surname)
{
		printf("dwse surname toy author \n");
        				scanf("%s",surname);
        				strcmp()
	
}*/

author* insert_author(int x,author* array1,writes* array3)
{
		array1[x].surname=(char*)malloc(sizeof(char)*50);
        array1[x].name=(char*)malloc(sizeof(char)*50);
        array1[x].writer_id=x+1;
        array3[x].writer_id = array1[x].writer_id;
	
	
	printf("dwse surname toy author \n");
        scanf("%s",array1[x].surname);
        printf("dwse name toy author \n");
        scanf("%s",array1[x].name);
        printf("to id einai %d \n",array1[x].writer_id);
        
        
    return array1;
	
} 

book* insert_book(int x,book* array2,writes* array3,author* array1,char* surname)
{
	//int NumOfBooks;
	int i;
		array2[x].title=(char*)malloc(sizeof(char)*50);
        array2[x].release_date;
        array2[x].price;
        //array3[i].title = array2[x].title;
        
        
	
	
	printf("dwse titlo toy vivlio \n");
        scanf("%s",array2[x].title);
        printf("release date vivliou? \n");
        scanf("%d",&array2[x].release_date);
        printf("to dwse timh\n");
		scanf("%f",&array2[x].price);
		//array2[x].title= array3[x].title;
		printf("dwse surname toy author \n");
        				scanf("%s",surname);
        				
        				for(int i; i<sizeof(author)-1 ; i++)
        				
        				{
        					if(strcmp(array1[i].surname,surname)==0)
        				
        					
        					{
        					    printf("%d",array3[i].writer_id);
								strcpy(array3[i].title,array2[x].title);
        					//NumOfBooks=NumOfBooks+1;
        						printf("ok");
        						
        						
        					}
        				//if (NumOfBooks=NumOfBooks+1)
        				//{
        				//	printf("to plithos biblion einai : %d \n", NumOfBooks);
						//}
        			else 
					{
						printf("surname not found");
					}
					printf("ei");
        		}
		//strcpy(array3[x].title,array2[x].title);
		SortByTitle(array2,x+1);
    return array2;
	
}


	
		
	
	


book* SortByTitle(book* array2,int arrayposition2)
{
    
    book* temp=(book*)malloc(sizeof(book)*1024);

	temp->title=(char*)malloc(sizeof(char)*100);
	temp->release_date;
    temp->price;
  

	
	for(int i=0;i<arrayposition2;i++)
		{
		for(int j=0;j<arrayposition2;j++)
			{
				if (strcmp(array2[i].title,array2[j].title)<0)
					{
						temp[i]=array2[i];
						array2[i]=array2[j];
						array2[j]=temp[i];
					}
		
			}
        }
            for(int i=0; i< arrayposition2; i++)
    {
        printf("%s %d %f  \n",array2[i].title,array2[i].release_date,array2[i].price);
    }
	return array2;
}




  
  

  
  int  BinarySearch(author *array1,int arrayposition1,char* surname)
{	
	int low,high,mid;
	low=0;
	high=arrayposition1-1;
	while(low<=high)
		{
			mid = (low+high) / 2;
		    if (strcmp(surname,array1[mid].surname)==0)
			{	
				 
				return mid;
			}
	
			else if (strcmp(surname,array1[mid].surname)>0) 
			{	
				
				low=mid+1;											
			}
			else if (strcmp(surname,array1[mid].surname)<0) 
			{	
				
				high=mid-1;		
			}
			
	
		}
	return -1;
}
   

   
   
        
  
  
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
   
   
   
   
   
   
   
   
   
int SaveToAuthor(author* array1,int arrayposition1)
{
    int i;
    FILE *fp;
	
    if ((fp = fopen("author.txt", "w")) == NULL )
		{
        	printf( "Error.\n");
        	return 0;
    	}
  
    for (i=0; i<arrayposition1; i++) 
		{
        	fprintf(fp, "%d %s %s\n", 
        	array1[i].writer_id,
        	array1[i].surname,
        	array1[i].name
            );
      
    	}

	fclose(fp);
    return 1;}
    
    
    int SaveToBook(book* array2,int arrayposition2)
{
    int i;
    FILE *fp;
	
    if ((fp = fopen("book.txt", "w")) == NULL )
		{
        	printf( "Error.\n");
        	return 0;
    	}
  
    for (i=0; i<arrayposition2; i++) 
		{
        	fprintf(fp, "%s %d %f \n", 
        	array2[i].title,
        	array2[i].release_date,
        	array2[i].price
            );
      
    	}

	fclose(fp);
    return 1;}
    
    int SaveToWrites(writes* array3,int arrayposition3)
{
    int i;
    FILE *fp;
	
    if ((fp = fopen("writes.txt", "w")) == NULL )
		{
        	printf( "Error.\n");
        	return 0;
    	}
  
    for (i=0; i<arrayposition3; i++) 
		{
        	fprintf(fp, "%d %s \n", 
        	array3[i].writer_id,
        	array3[i].title
            );
      
    	}

	fclose(fp);
    return 1;}

   
   
   
   void LoadFromAuthor(author* array1, int *arrayposition1)
{
    int i = 0;
    char *tok = (char*) malloc(sizeof(char) * 1024);
    FILE *fp;
	
	
    if ((fp = fopen("author.txt", "r")) == NULL )
	{
        printf( "File not found.\n");
        return;
    }
    
    char  line[1024];
    size_t len = 1024;   
 

	
    
	while ((fgets(line, 1024, fp)))
		{  if(i==1023)
			{
				array1=(author*)realloc(array1,sizeof(author)*(5120));
			}
           
             array1[i].surname=(char*)malloc(sizeof(char)*100);
             array1[i].name=(char*)malloc(sizeof(char)*100);
            
            
			tok = strtok(line, " "); 
	    	array1[i].writer_id = atoi(tok);
	        tok = strtok(NULL, " " );
	        strcpy(array1[i].surname, tok);
	        tok = strtok(NULL, " ");
	        strcpy(array1[i].name, tok);
	        tok = strtok(NULL, " " );
	        
	        i++;
	        
	    }


	*arrayposition1=i;
	 for(int i=0; i<*arrayposition1; i++)
    {
        printf("%d %s %s",array1[i].writer_id,array1[i].surname,array1[i].name);
    }
    printf(" \n");
 	fclose(fp);
    return;
}
void LoadFromBook(book* array2, int *arrayposition2)
{
    int i = 0;
    char *tok = (char*) malloc(sizeof(char) * 1024);
    FILE *fp;
	
	
    if ((fp = fopen("book.txt", "r")) == NULL )
	{
        printf( "File not found.\n");
        return;
    }
    
    char  line[1024];
    size_t len = 1024;   
 

	
    
	while ((fgets(line, 1024, fp)))
		{  if(i==1023)
			{
				array2=(book*)realloc(array2,sizeof(book)*(5120));
			}
           
             array2[i].title=(char*)malloc(sizeof(char)*100);
             array2[i].release_date;
             array2[i].price;
             
            
            
			tok = strtok(line, " "); 
	    	strcpy(array2[i].title,tok);
	        tok = strtok(NULL, " " );
	        array2[i].release_date = atoi(tok);
	        tok = strtok(NULL, " ");
	        array2[i].price = atof(tok);
	        tok = strtok(NULL, " " );
	        
	        i++;
	        
	    }


	*arrayposition2=i;
	 for(int i=0; i<*arrayposition2; i++)
    {
        printf("%s %d %f \n",array2[i].title,array2[i].release_date,array2[i].price);
    }
    printf(" \n");
 	fclose(fp);
    return;
}


void LoadFromWrites(writes* array3, int *arrayposition3)
{
    int i = 0;
    char *tok = (char*) malloc(sizeof(char) * 1024);
    FILE *fp;
	
	
    if ((fp = fopen("writes.txt", "r")) == NULL )
	{
        printf( "File not found.\n");
        return;
    }
    
    char  line[1024];
    size_t len = 1024;   
 

	
    
	while ((fgets(line, 1024, fp)))
		{  if(i==1023)
			{
				array3=(writes*)realloc(array3,sizeof(writes)*(5120));
			}
           
             array3[i].title=(char*)malloc(sizeof(char)*100);
            
			tok = strtok(line, " "); 
	    	array3[i].writer_id = atoi(tok);
	        tok = strtok(NULL, " " );
	        strcpy(array3[i].title, tok);
	        tok = strtok(NULL, " ");
	        
	        i++;
	        
	    }


	*arrayposition3=i;
	 for(int i=0; i<*arrayposition3; i++)
    {
        printf("%d %s \n",array3[i].writer_id,array3[i].title);
    }
    printf(" \n");
 	fclose(fp);
    return;
}


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
	

	


























