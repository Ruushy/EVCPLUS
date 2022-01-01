#include <iostream>
using namespace std;
int main(){
   int pin = 1234 ;
   int pass;
   cout<<"fadlan gali pin kaga ";
   cin>>pin;
   while(pin == 1234){
         int option , haraaga = 200;
         int dooro , hubi , num , lacag;
       cout<<endl;
       cout<<endl;
       cout<<"**********MENU**********"<<endl;
       cout<<"1. itus haraagaga "  <<endl;
       cout<<"2. kaarka ku hadal"  <<endl;
       cout<<"3.Uwareeji evecplus"  <<endl;
       cout<<"4. warbixin kooban  "<<endl;
       cout<<"5. maareynta "  <<endl;
       cout<<"6. kabax "  <<endl;
       cin>>option;
       system("cls");
       if(option == 1){
            cout<<"hargaagu waa "<<haraaga<<endl;

       }
       else if(option == 2){

           cout<<"1. ku shubu: "<<endl;
           cout<<"2. ugu shub: "<<endl;
           cin>>dooro;
           switch(dooro){
           case 1:
            cout<<"fadlan gali lacgta aad ku shubaneyso: ";
            cin>>lacag;
            cout<<"ma hubtaa inaad "<<lacag <<"ku shubato"<<endl;
            cout<<"1. Haa: "<<endl;
            cout<<"2. maya: "<<endl;
            cin>>hubi;
            if(hubi == 1)
               cout<<"waxaad ku shubatey "<<lacag<<endl;
            else
               cout<<"fadlan soo hubi:"<<endl;
            break;
           case 2:
            cout<<"fadlan gali numberka aad ugu shubaneyso: ";
            cin>>num;
            cout<<"fadlan gali lacagta: ";
            cin>>lacag;
            cout<<"ma hubtaa inaad "<<num <<"ugu shubto"<<lacag<<endl;
            cout<<"1. Haa: "<<endl;
            cout<<"2. maya: "<<endl;
            cin>>hubi;
            if(hubi == 1)
               cout<<"waxaad ugu shubatey "<<lacag<<endl;
            else
               cout<<"fadlan soo hubi:"<<endl;
            break ;
           }
       }
       else if(option == 3){
            cout<<"fadlan gali numberka aad ugu shubaneyso: ";
            cin>>num;
            cout<<"fadlan gali lacagta: ";
            cin>>lacag;
            cout<<"ma hubtaa inaad "<<num <<"ugu shubto"<<lacag<<endl;

            cout<<"1. Haa: "<<endl;
            cout<<"2. maya: "<<endl;
            cin>>hubi;
            if(hubi == 1)
               cout<<"waxaad ugu shubatey "<<lacag<<endl;
            else
               cout<<"fadlan soo hubi:"<<endl;

       }
       else if(option == 4){
           cout<<"1. last action: "<<endl;
           cout<<"2. wareejinta u danbeysa: "<<endl;
           cin>>dooro;
           if(dooro = 1){
           cout<<"waxaad ku shubatey "<<lacag<<endl;
           }
          else if(dooro == 2){
               cout<<endl;
               cout<<"1. u dirtay"  <<endl;
               cout<<"2. ka heshahay"  <<endl;
               cin>>dooro;
               if(dooro == 1){
                  cout<<"fadlan gali mobilka ";
                  cin>>num;
                  cout<<"waxad "<<num <<" ugshubatey "<<lacag <<endl;

                  }
               else if(dooro ==2){

                     cout<<"fadlan gali mobilka ";
                     cin>>num;
                     cout<<"waxad "<<num <<" ka heshay "<<lacag <<endl;

                  }

             }
       }
       else if(option == 5){
         cout<<"fadlan gali pink ka cusub ";
         cin>>pass;
         pin = pass;
         cout<<"pinkga cusub waa : "<<pass<<endl;
      }
      else if(option == 6){
         cout<<"macasalaam"<<endl;
         break ;
      }

   }
   cout<<"byee: "<<endl;



}
