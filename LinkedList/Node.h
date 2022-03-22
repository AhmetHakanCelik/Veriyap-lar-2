typedef struct node{
char Ad_Soyad[20];
long long int OgrenciNo;
int Sinif;
long long int Telefon;
struct node* link;
struct node* previous;
}NODE;


typedef struct{
NODE* head;
int count;
}LIST;
