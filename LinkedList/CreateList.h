LIST* createList(){

LIST* list=(LIST*)malloc(sizeof(LIST));

   if(list){
    list->head=NULL;
    list->count=0;
   }
   return list;
}
