#include <cstdlib>

#include <iostream>

using namespace std;
///////////////////model obiektu/////////////////
class przedmiot{
      public:
      string nazwa;
      int x;
      int y;
      przedmiot(string name,int a ,int b)
      {
      nazwa=name;
      x=a;
      y=b;
      }
      void wraca (int a, int b){
           x=a;
           y=b;
           }
      void znika ()
      {
      x=-1;
      y=-1;
}
      };
class pojemnik{
public:
       string a;
       string b;
       string c;
       string d;
       pojemnik()
       {
       a="puste";
       b="puste";
       c="puste";
       d="puste";
       }
       void ekwipunek()
       {
       cout<<"Masz przy sobie:"<<endl;
       cout<<a<<";";
       cout<<b<<";";
       cout<<c<<";";
       cout<<d<<endl;
       }
       void oddaje(string przedmiot){

            if (przedmiot==a) { a="puste";}
            if (przedmiot==b) { b="puste";}
            if (przedmiot==c) { c="puste";}
            if (przedmiot==d) { d="puste";}
            }
       bool biore(string co, char gdzie)   {
       if(gdzie=='a')

       {
       ///////////////pojedyncza litera w 'a' nie"a"////////////
       if(a=="puste") { a=co; return(true);}
       else cout<<"nie masz miejsca"<<endl;
       }
       if(gdzie=='b')
       {
       if(b=="puste") {b=co; return(true);}
       else cout<<"nie masz miejsca"<<endl;
       }
       if(gdzie=='c')
       {
       if(c=="puste") {c=co; return(true);}
       else cout<<"nie masz miejsca"<<endl;
       }
       if(gdzie=='d')
       {
       if(d=="puste") {d=co; return(true);}
       else cout<<"nie masz miejsca"<<endl;
       }
       return (false);
       }
};

class gracz{

      public:
       int x,y;
       string imie;
       int wiek;
       pojemnik plecak;
       bool test( int a, int b)
      {
          //cout<<"blok testowy"<<endl;
          //cout<<a<<b<<x<<y<<endl;
          //if(x!=a) if (y!=b)cout<<"true"<<endl;
          if(x==a && y==b) return true;
          else return false;
          }
       gracz(int a, int b)
       {
                 //////////////////body////////////////////
       x=a;
       y=b;
       return;
       }

       void przedstawsie()
       {
       cout<<"Zwa mnie  "<< imie <<endl;
       cout<<"Mam  "<<wiek<<"lat"<<endl;
       return;
       }
       ////////////////////////char 1 litera, string text a int liczba/////////////////
       //////////////////tworzenie ruchu po planszy/////////////////////////
       /////////head///////////
       //////////////////funkcja ruchu//////////////////
       void ruch(char kier)
       {
            //////////////////////////== to porownanie = to przypisanie/////////////////////////
            ////////body//////////////////
            ////////funkcja,metoda if warunek///////
       if(kier=='n') y--;
       if(kier=='s') y++;
       if(kier=='e') x++;
       if(kier=='w') x--;
       if(x>8)
       {
        x=8;
        cout<<"aaaaaaaa.......ale boli!....sciana!!!!"<<endl;
       }
       if(x<1)
       {
        x=1;
        cout<<"aaaaaaaa.......ale boli!....sciana!!!!"<<endl;
       }
       if(y>8)
       {
        y=8;
        cout<<"aaaaaaaa.......ale boli!....sciana!!!!"<<endl;
       }
       if(y<1)
       {
        y=1;
        cout<<"aaaaaaaa.......ale boli!....sciana!!!!"<<endl;
       }
       ///////////////////cout wyrzuca text na ekran///////////////////////
      cout<<imie<<"> Znajdujesz sie na pozycji ("<< x << "," << y <<")"<<endl;
       return;
       }

       //////////////////konstruktor tworzy obiekt w polozeniu/////////////////////////
       ///////head////////////////



        void skok(char kier)
       {
            //////////////////////////== to porownanie = to przypisanie/////////////////////////
            ////////body//////////////////
            ////////funkcja,metoda if warunek///////
       if(kier=='n') y-=3;
       if(kier=='s') y+=3;
       if(kier=='e') x+=3;
       if(kier=='w') x-=3;
       if(x>8)
       {
        x=8;
         cout<<"aaaaaaaa.......ale boli!....sciana!!!!"<<endl;
         }
       if(x<1)
       {
               x=1;

       cout<<"aaaaaaaa.......ale boli!....sciana!!!!"<<endl;
       }
       if(y>8) {
        y=8;

       cout<<"aaaaaaaa.......ale boli!....sciana!!!!"<<endl;
       }
       if(y<1) {
       y=1;

       cout<<"aaaaaaaa.......ale boli!....sciana!!!!"<<endl;
       }
       ///////////////////cout wyrzuca text na ekran///////////////////////
       cout<<imie<<"> Znajdujesz sie na pozycji ("<< x << "," << y <<")"<<endl;
       return;
       }



};
//////////////////////program glownyu tworzacy obiekt i nadaje parametry i wywoluje fuinkcje wewn///////////////
int main(int argc, char *argv[])
{
///////////////////konstrukor wywoluje sie gdy gracz powstaje i ustanawia obiekt w oprzsestrzeni/////////
  gracz player1 (4,4);
  przedmiot zdrowie("marchewka",4,4);
  przedmiot bron("mahakamski-topor-wojenny",4,4);



  player1.imie="Velroci";
  player1.wiek=17;
  player1.przedstawsie();
  char k,get; ////////////kierunek ruchu branie///////////
  string co, rozkaz;////////rozkaz idz ko0niec///////////////////

  do
  {
         cout<<"Podaj rozkaz:   ";
         ////////cin pobiera z klawiattury to co cout//////////
         cin>>rozkaz;
         if(rozkaz=="idz"){
                cout<<"Podaj kierunek:  ";
                cin>>k;
                player1.ruch(k);
                }
         if(rozkaz=="ekwipunek"){

                player1.plecak.ekwipunek();
                }

         if(rozkaz=="skocz"){
                cout<<"Podaj kierunek:  ";
                cin>>k;
                player1.skok(k);
                }
         if (rozkaz=="oddaj"){
             player1.plecak.ekwipunek();
             cout << "Co zostawiasz?";
             cin >> co;
             if (player1.plecak.a==co || player1.plecak.b==co || player1.plecak.b==co || player1.plecak.b==co){

                if (co=="marchewka"){
                 zdrowie.wraca(player1.x,player1.y);
                 player1.plecak.oddaje(co);
                 }
                 if (co=="mahakamski-topor-wojenny"){
                 bron.wraca(player1.x,player1.y);
                 player1.plecak.oddaje(co);
                  }
                  }
             player1.plecak.ekwipunek();
             }
         if(rozkaz=="spojrz"){
         //Za³o¿enie: sta³a liczba przedmiotów danego typu w komnacie
         //Wyœwietlenie przedmiotów w pomieszczeniu
         //Listing przedmiotów
                 if (player1.test(zdrowie.x,zdrowie.y)==true)
                {
                   cout << "Jest tu: " << zdrowie.nazwa<<endl;
                }else cout<<"nic tu nie ma"<<endl;
                if (player1.test(bron.x,bron.y)==true)
                {
                   cout << "Jest tu: " << bron.nazwa<<endl;
                }else cout<<"nic tu nie ma"<<endl;
          //Przechodzimy do brania przedmiotów
                if (player1.test(zdrowie.x,zdrowie.y)==true)
                {
                   cout << "Jest tu: " << zdrowie.nazwa<<endl;
                   cout << "Brac?";
                   cin >> get;

                   if (get == 't') {cout << "gdzie?";
                   cin >> k;
                           if (player1.plecak.biore(zdrowie.nazwa,k)==true)//dodane
                                   zdrowie.znika();
                                   }
                }
                if (player1.test(bron.x,bron.y)==true)
                {
                   cout << "Jest tu: " << bron.nazwa<<endl;
                   cout << "Brac?";
                   cin >> get;

                   if (get == 't') {
                           cout << "gdzie?";
                   cin >> k;if (player1.plecak.biore(bron.nazwa,k)==true)//dodane
                                   bron.znika();
                                   }
                }
                }



    }
         while(rozkaz!="koniec");



    system("PAUSE");
    return EXIT_SUCCESS;
}
