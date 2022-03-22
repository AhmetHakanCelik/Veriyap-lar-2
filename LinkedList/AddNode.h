int AddNodeBeg(LIST* plist,char data1[],long long int data2,int data3,long long int data4){

NODE* node=(NODE*)malloc(sizeof(NODE));

strcpy(node->Ad_Soyad,data1);
node->OgrenciNo=data2;
node->Sinif=data3;
node->Telefon=data4;
node->link=NULL;

   if(list->head==NULL){
    node->link=NULL;
    node->previous=NULL;
    plist->head=node;
    (plist->count)++;
   }

   else if(list->head!=NULL){
    node->link=plist->head;
    plist->head->previous=node->link;
    node->previous=NULL;
    plist->head=node;
   }
}

int AddNodeLast(LIST* plist,char data1[],long long int data2,int data3,long long int data4){

NODE* node=(NODE*)malloc(sizeof(NODE));
NODE* temp=(NODE*)malloc(sizeof(NODE));
temp=plist->head;

strcpy(node->Ad_Soyad,data1);
node->OgrenciNo=data2;
node->Sinif=data3;
node->Telefon=data4;
node->link=NULL;


while(temp!=NULL){
    temp=temp->link;
}

  if(temp==NULL){
    node->previous=temp;
    temp=node;
    node->link=NULL;
  }
    free(temp);
}
