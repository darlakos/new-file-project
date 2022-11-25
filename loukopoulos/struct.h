typedef struct author
{
int writer_id;
char *surname;
char *name;
int num_of_books;
} author;

typedef struct book
{
char *title;
int release_date;
float price;
} book;

typedef struct writes
{
char *title;
int writer_id;
} writes;
