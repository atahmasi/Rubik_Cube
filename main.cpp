#include <iostream>
using namespace std;


class block{
        public:
            char c;
};

int m = 0;
block cube[6][3][3];

void getpos(){

    cout << "\n\nPlease input the colours of the cube starting from top left corner to bottom right for each face. When starting have the red side on the bottom.\n\n" << endl;
    cout << " White Side:\n\n" << endl;
    cin >> cube[0][0][0].c
     >> cube[0][0][1].c
     >> cube[0][0][2].c
     >> cube[0][1][0].c
     >> cube[0][1][1].c
     >> cube[0][1][2].c
     >> cube[0][2][0].c
     >> cube[0][2][1].c
     >> cube[0][2][2].c ;
    cout << "\n\n Orange Side:";
    cin >> cube[3][0][0].c
     >> cube[3][0][1].c
     >> cube[3][0][2].c
     >> cube[3][1][0].c
     >> cube[3][1][1].c
     >> cube[3][1][2].c
     >> cube[3][2][0].c
     >> cube[3][2][1].c
     >> cube[3][2][2].c ;
    cout << "\n\n Yellow Side:";
    cin >> cube[2][0][0].c
     >> cube[2][0][1].c
     >> cube[2][0][2].c
     >> cube[2][1][0].c
     >> cube[2][1][1].c
     >> cube[2][1][2].c
     >> cube[2][2][0].c
     >> cube[2][2][1].c
     >> cube[2][2][2].c ;
    cout <<"\n\n Red Side:";
    cin >> cube[1][0][0].c
     >> cube[1][0][1].c
     >> cube[1][0][2].c
     >> cube[1][1][0].c
     >> cube[1][1][1].c
     >> cube[1][1][2].c
     >> cube[1][2][0].c
     >> cube[1][2][1].c
     >> cube[1][2][2].c ;
    cout <<"\n\n Green side:";
    cin >> cube[4][0][0].c
     >> cube[4][0][1].c
     >> cube[4][0][2].c
     >> cube[4][1][0].c
     >> cube[4][1][1].c
     >> cube[4][1][2].c
     >> cube[4][2][0].c
     >> cube[4][2][1].c
     >> cube[4][2][2].c ;
    cout <<"\n\n Blue Side:";
    cin >> cube[5][0][0].c
     >> cube[5][0][1].c
     >> cube[5][0][2].c
     >> cube[5][1][0].c
     >> cube[5][1][1].c
     >> cube[5][1][2].c
     >> cube[5][2][0].c
     >> cube[5][2][1].c
     >> cube[5][2][2].c ;

     cout << "\n\n Follow the given steps while facing the white side with the red side on the bottom" << endl;

}


/* Turn Functions */

void RI(){
    block x = cube[0][0][2];
    block y = cube[0][1][2];
    block z = cube[0][2][2];

    cube[0][0][2] = cube[3][0][2];
    cube[0][1][2] = cube[3][1][2];
    cube[0][2][2] = cube[3][2][2];

    cube[3][0][2] = cube[2][0][2];
    cube[3][1][2] = cube[2][1][2];
    cube[3][2][2] = cube[2][2][2];

    cube[2][0][2] = cube[1][0][2];
    cube[2][1][2] = cube[1][1][2];
    cube[2][2][2] = cube[1][2][2];

    cube[1][0][2] = x;
    cube[1][1][2] = y;
    cube[1][2][2] = z;



    block i = cube[5][0][0];
    block j = cube[5][1][0];
    block k = cube[5][2][0];

    /* corners*/

    cube[5][2][0] = cube[5][0][0];
    cube[5][0][0] = cube[5][0][2];
    cube[5][0][2] = cube[5][2][2];
    cube[5][2][2] = k;

    /* side blocks*/

    cube[5][1][0] = cube[5][0][1];
    cube[5][0][1] = cube[5][1][2];
    cube[5][1][2] = cube[5][2][1];
    cube[5][2][1] = j;

    cout << " RI \n\n" ;
    m++;
}
void R(){
    block x = cube[0][0][2];
    block y = cube[0][1][2];
    block z = cube[0][2][2];

    cube[0][0][2] = cube[1][0][2];
    cube[0][1][2] = cube[1][1][2];
    cube[0][2][2] = cube[1][2][2];

    cube[1][0][2] = cube[2][0][2];
    cube[1][1][2] = cube[2][1][2];
    cube[1][2][2] = cube[2][2][2];

    cube[2][0][2] = cube[3][0][2];
    cube[2][1][2] = cube[3][1][2];
    cube[2][2][2] = cube[3][2][2];

    cube[3][0][2] = x;
    cube[3][1][2] = y;
    cube[3][2][2] = z;

    block i = cube[5][0][0];
    block j = cube[5][1][0];
    block k = cube[5][2][0];

    /* corners*/

    cube[5][0][0] = cube[5][2][0];
    cube[5][2][0] = cube[5][2][2];
    cube[5][2][2] = cube[5][0][2];
    cube[5][0][2] = i;

    /* sides*/

    cube[5][1][0] = cube[5][2][1];
    cube[5][2][1] = cube[5][1][2];
    cube[5][1][2] = cube[5][0][1];
    cube[5][0][1] = j;

    cout << " R \n\n" ;
m++;

}

void L(){
    block x = cube[0][0][0];
    block y = cube[0][1][0];
    block z = cube[0][2][0];

    cube[0][0][0] = cube[3][0][0];
    cube[0][1][0] = cube[3][1][0];
    cube[0][2][0] = cube[3][2][0];

    cube[3][0][0] = cube[2][0][0];
    cube[3][1][0] = cube[2][1][0];
    cube[3][2][0] = cube[2][2][0];

    cube[2][0][0] = cube[1][0][0];
    cube[2][1][0] = cube[1][1][0];
    cube[2][2][0] = cube[1][2][0];

    cube[1][0][0] = x;
    cube[1][1][0] = y;
    cube[1][2][0] = z;

    block i = cube[4][0][0];
    block j = cube[4][1][0];
    block k = cube[4][2][0];

    /* corners*/

    cube[4][0][0] = cube[4][2][0];
    cube[4][2][0] = cube[4][2][2];
    cube[4][2][2] = cube[4][0][2];
    cube[4][0][2] = i;

    cube[4][1][0] = cube[4][2][1];
    cube[4][2][1] = cube[4][1][2];
    cube[4][1][2] = cube[4][0][1];
    cube[4][0][1] = j;

    cout << " L \n\n" ;
    m++;
}

void LI(){

    block x = cube[0][0][0];
    block y = cube[0][1][0];
    block z = cube[0][2][0];

    cube[0][0][0] = cube[1][0][0];
    cube[0][1][0] = cube[1][1][0];
    cube[0][2][0] = cube[1][2][0];

    cube[1][0][0] = cube[2][0][0];
    cube[1][1][0] = cube[2][1][0];
    cube[1][2][0] = cube[2][2][0];

    cube[2][0][0] = cube[3][0][0];
    cube[2][1][0] = cube[3][1][0];
    cube[2][2][0] = cube[3][2][0];

    cube[3][0][0] = x;
    cube[3][1][0] = y;
    cube[3][2][0] = z;

    block i = cube[4][0][0];
    block j = cube[4][1][0];
    block k = cube[4][2][0];

    /* corners*/

    cube[4][2][0] = cube[4][0][0];
    cube[4][0][0] = cube[4][0][2];
    cube[4][0][2] = cube[4][2][2];
    cube[4][2][2] = k;

    /* side blocks*/

    cube[4][1][0] = cube[4][0][1];
    cube[4][0][1] = cube[4][1][2];
    cube[4][1][2] = cube[4][2][1];
    cube[4][2][1] = j;

    cout << " LI \n\n" ;

m++;
}



  void F(){

     block x = cube[0][0][0];
     block y = cube[0][0][1];
     block z = cube[0][0][2];

     /* corners*/

     cube[0][0][0] = cube[0][2][0];
     cube[0][2][0] = cube[0][2][2];
     cube[0][2][2] = cube[0][0][2];
     cube[0][0][2] = x;

     /* sides */

     cube[0][0][1] = cube[0][1][0];
     cube[0][1][0] = cube[0][2][1];
     cube[0][2][1] = cube[0][1][2];
     cube[0][1][2] = y;

     block i = cube[3][2][0];
     block j = cube[3][2][1];
     block k = cube[3][2][2];

     cube[3][2][0] = cube[4][2][2];
     cube[3][2][1] = cube[4][1][2];
     cube[3][2][2] = cube[4][0][2];

     cube[4][0][2] = cube[1][0][0];
     cube[4][1][2] = cube[1][0][1];
     cube[4][2][2] = cube[1][0][2];

     cube[1][0][0] = cube[5][2][0];
     cube[1][0][1] = cube[5][1][0];
     cube[1][0][2] = cube[5][0][0];

     cube[5][0][0] = i;
     cube[5][1][0] = j;
     cube[5][2][0] = k;


    cout << " F \n\n" ;
m++;
    }

void FI(){

     block x = cube[0][0][0];
     block y = cube[0][0][1];
     block z = cube[0][0][2];

     /* corners*/

     cube[0][0][0] = cube [0][0][2];
     cube[0][0][2] = cube [0][2][2];
     cube[0][2][2] = cube [0][2][0];
     cube[0][2][0] = x;

     /* sides */

     cube[0][0][1] = cube [0][1][2];
     cube[0][1][2] = cube [0][2][1];
     cube[0][2][1] = cube [0][1][0];
     cube[0][1][0] = y;

     block i = cube[3][2][0];
     block j = cube[3][2][1];
     block k = cube[3][2][2];

     cube[3][2][0] = cube [5][0][0];
     cube[3][2][1] = cube [5][1][0];
     cube[3][2][2] = cube [5][2][0];

     cube[5][0][0] = cube [1][0][2];
     cube[5][1][0] = cube [1][0][1];
     cube[5][2][0] = cube [1][0][0];

     cube[1][0][0] = cube [4][0][2];
     cube[1][0][1] = cube [4][1][2];
     cube[1][0][2] = cube [4][2][2];

     cube[4][0][2] = k;
     cube[4][1][2] = j;
     cube[4][2][2] = i;

     cout << " FI \n\n" ;
     m++;
}

void U(){


  block x = cube[3][2][0];
  block y = cube[3][2][1];
  block z = cube[3][2][2];

  /* corners */

  cube[3][2][0] = cube [3][2][2];
  cube[3][2][2] = cube [3][0][2];
  cube[3][0][2] = cube [3][0][0];
  cube[3][0][0] = x;

  /* sides */

  cube[3][2][1] = cube [3][1][2];
  cube[3][1][2] = cube [3][0][1];
  cube[3][0][1] = cube [3][1][0];
  cube[3][1][0] = y;

  block i = cube[0][0][0];
  block j = cube[0][0][1];
  block k = cube[0][0][2];

  cube[0][0][0] = cube [5][0][0];
  cube[0][0][1] = cube [5][0][1];
  cube[0][0][2] = cube [5][0][2];

  cube[5][0][0] = cube [2][2][2];
  cube[5][0][1] = cube [2][2][1];
  cube[5][0][2] = cube [2][2][0];

  cube[2][2][2] = cube [4][0][0];
  cube[2][2][1] = cube [4][0][1];
  cube[2][2][0] = cube [4][0][2];

  cube[4][0][0] = i;
  cube[4][0][1] = j;
  cube[4][0][2] = k;

  cout << " U \n\n" ;
  m++;

}

void UI(){

  block x = cube[3][2][0];
  block y = cube[3][2][1];
  block z = cube[3][2][2];

  /* corners */

  cube[3][2][0] = cube[3][0][0];
  cube[3][0][0] = cube[3][0][2];
  cube[3][0][2] = cube[3][2][2];
  cube[3][2][2] = x;

  /* sides */

  cube[3][2][1] = cube[3][1][0];
  cube[3][1][0] = cube[3][0][1];
  cube[3][0][1] = cube[3][1][2];
  cube[3][1][2] = y;

  block i = cube[0][0][0];
  block j = cube[0][0][1];
  block k = cube[0][0][2];

  cube[0][0][0] = cube[4][0][0];
  cube[0][0][1] = cube[4][0][1];
  cube[0][0][2] = cube[4][0][2];

  cube[4][0][0] = cube[2][2][2];
  cube[4][0][1] = cube[2][2][1];
  cube[4][0][2] = cube[2][2][0];

  cube[2][2][2] = cube[5][0][0];
  cube[2][2][1] = cube[5][0][1];
  cube[2][2][0] = cube[5][0][2];

  cube[5][0][0] = i;
  cube[5][0][1] = j;
  cube[5][0][2] = k;

  cout << " UI \n\n" ;
  m++;
}

void B(){

  block x = cube[2][2][0];
  block y = cube[2][2][1];
  block z = cube[2][2][2];

  /* corners */

  cube[2][2][2] = cube[2][0][2];
  cube[2][0][2] = cube[2][0][0];
  cube[2][0][0] = cube[2][2][0];
  cube[2][2][0] = z;

  /* sides */

  cube[2][2][1] = cube[2][1][2];
  cube[2][1][2] = cube[2][0][1];
  cube[2][0][1] = cube[2][1][0];
  cube[2][1][0] = y;

  block i = cube[4][0][0];
  block j = cube[4][1][0];
  block k = cube[4][2][0];

  cube[4][0][0] = cube[3][0][2];
  cube[4][1][0] = cube[3][0][1];
  cube[4][2][0] = cube[3][0][0];

  cube[3][0][0] = cube[5][0][2];
  cube[3][0][1] = cube[5][1][2];
  cube[3][0][2] = cube[5][2][2];

  cube[5][0][2] = cube[1][2][2];
  cube[5][1][2] = cube[1][2][1];
  cube[5][2][2] = cube[1][2][0];

  cube[1][2][0] = i;
  cube[1][2][1] = j;
  cube[1][2][2] = k;

  cout << " B \n\n" ;
  m++;
}

void BI(){

    block x = cube[2][2][0];
    block y = cube[2][2][1];
    block z = cube[2][2][2];

    /* corners */

    cube[2][2][0] = cube[2][0][0];
    cube[2][0][0] = cube[2][0][2];
    cube[2][0][2] = cube[2][2][2];
    cube[2][2][2] = x;

    /* sides */

    cube[2][2][1] = cube[2][1][0];
    cube[2][1][0] = cube[2][0][1];
    cube[2][0][1] = cube[2][1][2];
    cube[2][1][2] = y;

    block i = cube[4][0][0];
    block j = cube[4][1][0];
    block k = cube[4][2][0];

    cube[4][0][0] = cube[1][2][0];
    cube[4][1][0] = cube[1][2][1];
    cube[4][2][0] = cube[1][2][2];

    cube[1][2][0] = cube[5][2][2];
    cube[1][2][1] = cube[5][1][2];
    cube[1][2][2] = cube[5][0][2];

    cube[5][0][2] = cube[3][0][0];
    cube[5][1][2] = cube[3][0][1];
    cube[5][2][2] = cube[3][0][2];

    cube[3][0][0] = k;
    cube[3][0][1] = j;
    cube[3][0][2] = i;

    cout << " BI \n\n" ;
m++;
}

void D(){

    block x = cube[0][2][0];
    block y = cube[0][2][1];
    block z = cube[0][2][2];

    cube[0][2][0] = cube[4][2][0];
    cube[0][2][1] = cube[4][2][1];
    cube[0][2][2] = cube[4][2][2];

    cube[4][2][0] = cube[2][0][2];
    cube[4][2][1] = cube[2][0][1];
    cube[4][2][2] = cube[2][0][0];

    cube[2][0][2] = cube[5][2][0];
    cube[2][0][1] = cube[5][2][1];
    cube[2][0][0] = cube[5][2][2];

    cube[5][2][0] = x;
    cube[5][2][1] = y;
    cube[5][2][2] = z;

    block i = cube[1][0][0];
    block j = cube[1][0][1];
    block k = cube[1][0][2];

    /* corners */

    cube[1][0][0] = cube[1][2][0];
    cube[1][2][0] = cube[1][2][2];
    cube[1][2][2] = cube[1][0][2];
    cube[1][0][2] = i;

    /* sides */

    cube[1][0][1] = cube[1][1][0];
    cube[1][1][0] = cube[1][2][1];
    cube[1][2][1] = cube[1][1][2];
    cube[1][1][2] = j;

    cout << " D \n\n" ;
m++;
}

void DI(){

    block x = cube[0][2][0];
    block y = cube[0][2][1];
    block z = cube[0][2][2];

    cube[0][2][0] = cube[5][2][0];
    cube[0][2][1] = cube[5][2][1];
    cube[0][2][2] = cube[5][2][2];

    cube[5][2][0] = cube[2][0][2];
    cube[5][2][1] = cube[2][0][1];
    cube[5][2][2] = cube[2][0][0];

    cube[2][0][2] = cube[4][2][0];
    cube[2][0][1] = cube[4][2][1];
    cube[2][0][0] = cube[4][2][2];

    cube[4][2][0] = x;
    cube[4][2][1] = y;
    cube[4][2][2] = z;

    block i = cube[1][0][0];
    block j = cube[1][0][1];
    block k = cube[1][0][2];

    /* corners */

    cube[1][0][2] = cube[1][2][2];
    cube[1][2][2] = cube[1][2][0];
    cube[1][2][0] = cube[1][0][0];
    cube[1][0][0] = k;

    /* sides */

    cube[1][0][1] = cube[1][1][2];
    cube[1][1][2] = cube[1][2][1];
    cube[1][2][1] = cube[1][1][0];
    cube[1][1][0] = j;

    cout << " DI \n\n" ;
m++;
}
void solvefinal(){



while(cube[2][0][0].c != 'y' ||
      cube[2][0][2].c != 'y' ||
      cube[2][2][0].c != 'y' ||
      cube[2][2][2].c != 'y'){

        if(cube[2][0][2].c != 'y'){

            R();
            F();
            RI();
            FI();

        }
        else{ B();}

      }
while(cube[1][2][0].c != 'r'){
    B();

}
}

void alignyellow(){

    if(cube[2][0][1].c != 'y' &&
       cube[2][1][2].c != 'y' &&
       cube[2][2][1].c != 'y' &&
       cube[2][1][0].c != 'y' ){
       D();
        L();
        B();
        LI();
        BI();
        DI();
       }

    if((cube[2][0][1].c == 'y' && cube[2][1][2].c =='y' && cube[2][2][1].c != 'y' && cube[2][1][0].c !='y') ||
       (cube[2][1][2].c == 'y' && cube[2][2][1].c =='y'&& cube[2][1][0].c != 'y' && cube[2][0][1].c !='y') ||
       (cube[2][2][1].c == 'y' && cube[2][1][0].c =='y' && cube[2][0][1].c != 'y' && cube[2][1][2].c !='y') ||
       (cube[2][1][0].c == 'y' && cube[2][0][1].c =='y' && cube[2][1][2].c != 'y' && cube[2][2][1].c !='y')){

            while((cube[2][0][1].c == 'y' && cube[2][1][2].c =='y') ||
                 (cube[2][2][1].c == 'y' && cube[2][1][0].c =='y') ||
                 (cube[2][1][0].c == 'y' && cube[2][0][1].c =='y')){
                B();

            }
        D();
        L();
        B();
        LI();
        BI();
        DI();
       }
    if((cube[2][1][0].c == 'y' && cube[2][1][2].c =='y' && cube[2][2][1].c != 'y' && cube[2][0][1].c !='y') || (cube[2][2][1].c == 'y' && cube[2][0][1].c =='y' && cube[2][1][0].c != 'y' && cube[2][1][2].c !='y')){
        while(cube[2][0][1].c == 'y' && cube[2][2][1].c =='y'){
            B();

        }
       D();
        L();
        B();
        LI();
        BI();
        DI();
    }



}
void lineupyellowcross(){
while(!((cube[1][2][1].c == 'r' && cube[4][1][0].c == 'g') ||
        (cube[3][0][1].c == 'o' && cube[4][1][0].c == 'g') ||
        (cube[3][0][1].c == 'o' && cube[5][1][2].c == 'b') ||
        (cube[1][2][1].c == 'r' && cube[5][1][2].c == 'b') ||
        (cube[1][2][1].c == 'r' && cube[3][0][1].c == 'o') ||
        (cube[4][1][0].c == 'g' && cube[5][1][2].c == 'b') ||
(cube[1][2][1].c == 'r' && cube[4][1][0].c == 'g' && cube[3][0][1].c == 'o' && cube[5][1][2].c == 'b'))){
            B();


}           if((cube[1][2][1].c == 'r' && cube[3][0][1].c == 'o' && cube[4][1][0].c != 'g' && cube[5][1][2].c != 'b') ||
             (cube[4][1][0].c == 'g' && cube[5][1][2].c == 'b' && cube[1][2][1].c != 'r' && cube[3][0][1].c != 'o')){
                 D();
                 B();
                 DI();
                 B();
                 D();
                 B();
                 B();
                 DI();
                 B();
            }

            if(cube[1][2][1].c == 'r' && cube[4][1][0].c == 'g' && cube[3][0][1].c != 'o' && cube[5][1][2].c != 'b'){
                 D();
                 B();
                 DI();
                 B();
                 D();
                 B();
                 B();
                 DI();
                 B();
            }

            if(cube[3][0][1].c == 'o' && cube[4][1][0].c == 'g' && cube[1][2][1].c != 'r' && cube[5][1][2].c != 'b'){
                L();
                B();
                LI();
                B();
                L();
                B();
                B();
                LI();
                B();
            }
            if(cube[3][0][1].c == 'o' && cube[5][1][2].c == 'b' && cube[1][2][1].c != 'r' && cube[4][1][0].c != 'g'){
                U();
                B();
                UI();
                B();
                U();
                B();
                B();
                UI();
                B();
            }
            if(cube[1][2][1].c == 'r' && cube[5][1][2].c == 'b' && cube[3][0][1].c != 'o' && cube[4][1][0].c != 'g'){
                R();
                B();
                RI();
                B();
                R();
                B();
                B();
                RI();
                B();
            }
}

 void matchyellowcorners(){

for(int i = 0; i<3; i++){


if((cube[2][0][0].c == 'y' &&
    cube[1][2][0].c == 'r'  &&
    cube[4][2][0].c == 'g') ||

   (cube[2][0][0].c == 'g' &&
    cube[1][2][0].c == 'y'  &&
    cube[4][2][0].c == 'r') ||

   (cube[2][0][0].c == 'r' &&
    cube[1][2][0].c == 'g'  &&
    cube[4][2][0].c == 'y')){

    if((cube[2][2][0].c == 'y' &&
        cube[3][0][0].c == 'o'  &&
        cube[4][0][0].c == 'g') ||

        (cube[2][2][0].c == 'o' &&
        cube[3][0][0].c == 'g'  &&
        cube[4][0][0].c == 'y') ||

        (cube[2][2][0].c == 'g' &&
         cube[3][0][0].c == 'y'  &&
         cube[4][0][0].c == 'o')){
             1;}
             else{
            B();
            L();
            BI();
            RI();
            B();
            LI();
            BI();
            R();
             }





}

else{       B();
            L();
            BI();
            RI();
            B();
            LI();
            BI();
            R();

            }


if((cube[2][0][2].c == 'y' &&
    cube[1][2][2].c == 'r'  &&
    cube[5][2][2].c == 'b') ||

   (cube[2][0][2].c == 'b' &&
    cube[1][2][2].c == 'y'  &&
    cube[5][2][2].c == 'r') ||

   (cube[2][0][2].c == 'r' &&
    cube[1][2][2].c == 'b'  &&
    cube[5][2][2].c == 'y')){

    if((cube[2][2][0].c == 'y' &&
        cube[3][0][0].c == 'o'  &&
        cube[4][0][0].c == 'g') ||

        (cube[2][2][0].c == 'o' &&
        cube[3][0][0].c == 'g'  &&
        cube[4][0][0].c == 'y') ||

        (cube[2][2][0].c == 'g' &&
         cube[3][0][0].c == 'y'  &&
         cube[4][0][0].c == 'o')){
             1;}
             else{
            B();
            D();
            BI();
            UI();
            B();
            DI();
            BI();
            U();
             }





}

else{       B();
            L();
            BI();
            RI();
            B();
            LI();
            BI();
            R();

            }

if((cube[2][2][0].c == 'y' &&
        cube[3][0][0].c == 'o'  &&
        cube[4][0][0].c == 'g') ||

        (cube[2][2][0].c == 'o' &&
        cube[3][0][0].c == 'g'  &&
        cube[4][0][0].c == 'y') ||

        (cube[2][2][0].c == 'g' &&
         cube[3][0][0].c == 'y'  &&
         cube[4][0][0].c == 'o')){

    if((cube[2][0][2].c == 'y' &&
        cube[1][2][2].c == 'r'  &&
        cube[5][2][2].c == 'b') ||

        (cube[2][0][2].c == 'b' &&
        cube[1][2][2].c == 'y'  &&
        cube[5][2][2].c == 'r') ||

        (cube[2][0][2].c == 'r' &&
        cube[1][2][2].c == 'b'  &&
        cube[5][2][2].c == 'y')){
             1;}
             else{
            B();
            U();
            BI();
            DI();
            B();
            UI();
            BI();
            D();
             }





}

else{       B();
            L();
            BI();
            RI();
            B();
            LI();
            BI();
            R();

            }

if((cube[2][2][2].c == 'y' &&
    cube[3][0][2].c == 'o'  &&
    cube[5][0][2].c == 'b') ||

   (cube[2][0][0].c == 'o' &&
    cube[3][0][2].c == 'b'  &&
    cube[5][0][2].c == 'y') ||

   (cube[2][0][0].c == 'b' &&
    cube[3][0][2].c == 'y'  &&
    cube[5][0][2].c == 'o')){

    if((cube[2][2][0].c == 'y' &&
        cube[3][0][0].c == 'o'  &&
        cube[4][0][0].c == 'g') ||

        (cube[2][2][0].c == 'o' &&
        cube[3][0][0].c == 'g'  &&
        cube[4][0][0].c == 'y') ||

        (cube[2][2][0].c == 'g' &&
         cube[3][0][0].c == 'y'  &&
         cube[4][0][0].c == 'o')){
             1;}
             else{
            B();
            R();
            BI();
            LI();
            B();
            RI();
            BI();
            L();
             }





}

else{       1;
            }


}

}



void placewhitered(){

        if(cube[0][2][1].c == 'w' && cube[1][0][1].c == 'r'){
            1;

} else if(cube[0][2][1].c == 'r' && cube[1][0][1].c == 'w'){
            D();
            FI();
            R();
            F();

} else if(cube[0][1][0].c == 'w' && cube[4][1][2].c == 'r'){
            FI();
} else if(cube[0][1][0].c == 'r' && cube[4][1][2].c == 'w'){
            L();
            D();
} else if(cube[0][0][1].c == 'w' && cube[3][2][1].c == 'r'){
            F();
            F();
} else if(cube[0][0][1].c == 'r' && cube[3][2][1].c == 'w'){
            FI();
            L();
            D();

} else if(cube[0][1][2].c == 'w' && cube[5][1][0].c == 'r'){
            F();
} else if(cube[0][1][2].c == 'r' && cube[5][1][0].c == 'w'){
            RI();
            DI();
}else if(cube[1][1][0].c == 'w' && cube[4][2][1].c == 'r'){
            LI();
            FI();
} else if(cube[1][1][0].c == 'r' && cube[4][2][1].c == 'w'){
            D();
} else if(cube[4][0][1].c == 'w' && cube[3][1][0].c == 'r'){
            UI();
            F();
            F();
} else if(cube[4][0][1].c == 'r' && cube[3][1][0].c == 'w'){
            L();
            FI();
} else if(cube[3][1][2].c == 'w' && cube[5][0][1].c == 'r'){
            RI();
            F();
} else if(cube[3][1][2].c == 'r' && cube[5][0][1].c == 'w'){
            U();
            F();
            F();
} else if(cube[5][2][1].c == 'w' && cube[1][1][2].c == 'r'){
            DI();
} else if(cube[5][2][1].c == 'r' && cube[1][1][2].c == 'w'){
            R();
            F();
} else if(cube[1][2][1].c == 'w' && cube[2][0][1].c == 'r'){
            B();
            R();
            DI();
} else if(cube[1][2][1].c == 'r' && cube[2][0][1].c == 'w'){
            D();
            D();
} else if(cube[4][1][0].c == 'w' && cube[2][1][0].c == 'r'){
            LI();
            D();
} else if(cube[4][1][0].c == 'r' && cube[2][1][0].c == 'w'){
            B();
            D();
            D();
} else if(cube[3][0][1].c == 'w' && cube[2][2][1].c == 'r'){
            B();
            L();
            D();
} else if(cube[3][0][1].c == 'r' && cube[2][2][1].c == 'w'){
            B();
            B();
            D();
            D();
} else if(cube[5][1][2].c == 'w' && cube[2][1][2].c == 'r'){
            R();
            DI();
} else if(cube[5][1][2].c == 'r' && cube[2][1][2].c == 'w'){
            BI();
            D();
            D();
}
 else cout << "Error\n";



}

void placewhiteorange(){
    if(cube[0][1][0].c == 'w' && cube[4][1][2].c == 'o'){
            F();
            U();
            FI();
            UI();
} else if(cube[0][1][0].c == 'o' && cube[4][1][2].c == 'w'){
            LI();
            UI();
} else if(cube[0][0][1].c == 'w' && cube[3][2][1].c == 'o'){
            1;
} else if(cube[0][0][1].c == 'o' && cube[3][2][1].c == 'w'){
            U();
            LI();
            FI();
            L();
            F();
} else if(cube[0][1][2].c == 'w' && cube[5][1][0].c == 'o'){
            FI();
            U();
            F();
            UI();
} else if(cube[0][1][2].c == 'o' && cube[5][1][0].c == 'w'){
            R();
            U();
} else if(cube[1][1][0].c == 'w' && cube[4][2][1].c == 'o'){
            FI();
            LI();
            F();
} else if(cube[1][1][0].c == 'o' && cube[4][2][1].c == 'w'){
            L();
            L();
            UI();
} else if(cube[4][0][1].c == 'w' && cube[3][1][0].c == 'o'){
            UI();
} else if(cube[4][0][1].c == 'o' && cube[3][1][0].c == 'w'){
            L();
            F();
            U();
            FI();
            UI();
} else if(cube[3][1][2].c == 'w' && cube[5][0][1].c == 'o'){
            F();
            RI();
            FI();
} else if(cube[3][1][2].c == 'o' && cube[5][0][1].c == 'w'){
            U();
} else if(cube[5][2][1].c == 'w' && cube[1][1][2].c == 'o'){
                F();
                F();
                DI();
                F();
                F();
} else if(cube[5][2][1].c == 'o' && cube[1][1][2].c == 'w'){
                F();
                R();
                FI();
} else if(cube[1][2][1].c == 'w' && cube[2][0][1].c == 'o'){
                B();
                RI();
                U();
} else if(cube[1][2][1].c == 'o' && cube[2][0][1].c == 'w'){
                B();
                B();
                U();
                U();

} else if(cube[4][1][0].c == 'w' && cube[2][1][0].c == 'o'){
                L();
                UI();
} else if(cube[4][1][0].c == 'o' && cube[2][1][0].c == 'w'){
                BI();
                U();
                U();
} else if(cube[3][0][1].c == 'w' && cube[2][2][1].c == 'o'){
                B();
                L();
                UI();
} else if(cube[3][0][1].c == 'o' && cube[2][2][1].c == 'w'){
                U();
                U();
} else if(cube[5][1][2].c == 'w' && cube[2][1][2].c == 'o'){
                RI();
                U();
} else if(cube[5][1][2].c == 'o' && cube[2][1][2].c == 'w'){
                B();
                U();
                U();
} else cout << "Error" << endl;
}

void placewhitegreen(){
            if(cube[0][1][0].c == 'w' && cube[4][1][2].c == 'g'){
                1;
} else if(cube[0][1][0].c == 'g' && cube[4][1][2].c == 'w'){
                L();
                L();
                B();
                D();
                LI();
                DI();
} else if(cube[0][1][2].c == 'w' && cube[5][1][0].c == 'g'){
                F();
                F();
                L();
                F();
                F();
                LI();

} else if(cube[0][1][2].c == 'g' && cube[5][1][0].c == 'w'){
                F();
                DI();
                FI();
                LI();
} else if(cube[1][1][0].c == 'w' && cube[4][2][1].c == 'g'){
                LI();
} else if(cube[1][1][0].c == 'g' && cube[4][2][1].c == 'w'){
                L();
                B();
                D();
                LI();
                DI();
} else if(cube[4][0][1].c == 'w' && cube[3][1][0].c == 'g'){
                F();
                UI();
                FI();

} else if(cube[4][0][1].c == 'g' && cube[3][1][0].c == 'w'){
                L();
} else if(cube[3][1][2].c == 'w' && cube[5][0][1].c == 'g'){
                U();
                U();
                L();
                U();
                U();

} else if(cube[3][1][2].c == 'g' && cube[5][0][1].c == 'w'){
                F();
                U();
                FI();
} else if(cube[5][2][1].c == 'w' && cube[1][1][2].c == 'g'){
                FI();
                DI();
                F();
} else if(cube[5][2][1].c == 'g' && cube[1][1][2].c == 'w'){
                F();
                F();
                R();
                F();
                F();
} else if(cube[1][2][1].c == 'w' && cube[2][0][1].c == 'g'){
                D();
                LI();
                DI();
} else if(cube[1][2][1].c == 'g' && cube[2][0][1].c == 'w'){
                BI();
                L();
                L();

} else if(cube[4][1][0].c == 'w' && cube[2][1][0].c == 'g'){
                B();
                D();
                LI();
                DI();
} else if(cube[4][1][0].c == 'g' && cube[2][1][0].c == 'w'){
                L();
                L();
} else if(cube[3][0][1].c == 'w' && cube[2][2][1].c == 'g'){
                UI();
                L();
                U();
} else if(cube[3][0][1].c == 'g' && cube[2][2][1].c == 'w'){
                B();
                L();
                L();
} else if(cube[5][1][2].c == 'w' && cube[2][1][2].c == 'g'){
                B();
                UI();
                L();
                U();
} else if(cube[5][1][2].c == 'g' && cube[2][1][2].c == 'w'){
                B();
                B();
                L();
                L();
} else cout << "Error" << endl;
}

void placewhiteblue(){

    if(cube[0][1][2].c == 'w' && cube[5][1][0].c == 'b'){
            1;
} else if(cube[0][1][2].c == 'b' && cube[5][1][0].c == 'w'){
            RI();
            F();
            DI();
            FI();

} else if(cube[1][1][0].c == 'w' && cube[4][2][1].c == 'b'){
            F();
            F();
            LI();
            F();
            F();
} else if(cube[1][1][0].c == 'b' && cube[4][2][1].c == 'w'){
            F();
            D();
            FI();
} else if(cube[4][0][1].c == 'w' && cube[3][1][0].c == 'b'){
            FI();
            UI();
            F();
} else if(cube[4][0][1].c == 'b' && cube[3][1][0].c == 'w'){
            F();
            F();
            L();
            F();
            F();
} else if(cube[3][1][2].c == 'w' && cube[5][0][1].c == 'b'){
            RI();
} else if(cube[3][1][2].c == 'b' && cube[5][0][1].c == 'w'){
            FI();
            U();
            F();
} else if(cube[5][2][1].c == 'w' && cube[1][1][2].c == 'b'){
            F();
            DI();
            FI();
} else if(cube[5][2][1].c == 'b' && cube[1][1][2].c == 'w'){
            R();
} else if(cube[1][2][1].c == 'w' && cube[2][0][1].c == 'b'){
                F();
                DI();
                FI();
                R();
} else if(cube[1][2][1].c == 'b' && cube[2][0][1].c == 'w'){
                F();
                D();
                D();
                FI();
} else if(cube[4][1][0].c == 'w' && cube[2][1][0].c == 'b'){
                B();
                DI();
                R();
                D();
} else if(cube[4][1][0].c == 'b' && cube[2][1][0].c == 'w'){
                F();
                F();
                L();
                L();
} else if(cube[3][0][1].c == 'w' && cube[2][2][1].c == 'b'){
                U();
                RI();
                UI();
} else if(cube[3][0][1].c == 'b' && cube[2][2][1].c == 'w'){
                FI();
                U();
                U();
                F();
} else if(cube[5][1][2].c == 'w' && cube[2][1][2].c == 'b'){
                R();
                F();
                DI();
                FI();
} else if(cube[5][1][2].c == 'b' && cube[2][1][2].c == 'w'){
                R();
                R();
} else cout << "Error" << endl;
}


void placewhiteredgreen(){

 if(cube[0][2][0].c == 'w' && cube[1][0][0].c == 'r' && cube[4][2][2].c == 'g' ){

                1;
 } else if(cube[0][2][0].c == 'r' && cube[1][0][0].c == 'g' && cube[4][2][2].c == 'w' ){
                L();
                B();
                LI();
                B();
                B();
                DI();
                B();
                D();
 }else if(cube[0][2][0].c == 'g' && cube[1][0][0].c == 'w' && cube[4][2][2].c == 'r' ){
                L();
                BI();
                LI();
                B();
                L();
                BI();
                LI();
} else if(cube[0][0][0].c == 'w' && cube[4][0][2].c == 'r' && cube[3][2][0].c == 'g' ){
                U();
                B();
                UI();
                B();
                L();
                BI();
                LI();

} else if(cube[0][0][0].c == 'r' && cube[4][0][2].c == 'g' && cube[3][2][0].c == 'w' ){
                LI();
                B();
                L();
                DI();
                B();
                D();
} else if(cube[0][0][0].c == 'g' && cube[4][0][2].c == 'w' && cube[3][2][0].c == 'r' ){
                LI();
                B();
                B();
                L();
                L();
                BI();
                LI();
} else if(cube[0][0][2].c == 'w' && cube[3][2][2].c == 'r' && cube[5][0][0].c == 'g' ){
                L();
                R();
                B();
                B();
                LI();
                RI();
} else if(cube[0][0][2].c == 'r' && cube[3][2][2].c == 'g' && cube[5][0][0].c == 'w' ){
                R();
                DI();
                B();
                B();
                D();
                RI();
} else if(cube[0][0][2].c == 'g' && cube[3][2][2].c == 'w' && cube[5][0][0].c == 'r' ){
                L();
                UI();
                B();
                B();
                U();
                LI();
} else if(cube[0][2][2].c == 'w' && cube[5][2][0].c == 'r' && cube[1][0][2].c == 'g' ){
                D();
                L();
                BI();
                L();
                L();
                DI();
                L();
} else if(cube[0][2][2].c == 'r' && cube[5][2][0].c == 'g' && cube[1][0][2].c == 'w' ){
                D();
                BI();
                BI();
                DI();
                DI();
                B();
                D();
} else if(cube[0][2][2].c == 'g' && cube[5][2][0].c == 'w' && cube[1][0][2].c == 'r' ){
                L();
                RI();
                BI();
                LI();
                R();
} else if(cube[2][0][0].c == 'w' && cube[1][2][0].c == 'g' && cube[4][2][0].c == 'r' ){
                BI();
                LI();
                B();
                L();
                L();
                BI();
                LI();
} else if(cube[2][0][0].c == 'r' && cube[1][2][0].c == 'w' && cube[4][2][0].c == 'g' ){
                B();
                L();
                BI();
                LI();
} else if(cube[2][0][0].c == 'g' && cube[1][2][0].c == 'r' && cube[4][2][0].c == 'w' ){
                L();
                B();
                LI();
} else if(cube[2][2][0].c == 'w' && cube[4][0][0].c == 'g' && cube[3][0][0].c == 'r' ){
                LI();
                B();
                L();
                L();
                BI();
                LI();
} else if(cube[2][2][0].c == 'r' && cube[4][0][0].c == 'w' && cube[3][0][0].c == 'g' ){
                B();
                B();
                L();
                BI();
                LI();
} else if(cube[2][2][0].c == 'g' && cube[4][0][0].c == 'r' && cube[3][0][0].c == 'w' ){
                DI();
                B();
                D();
} else if(cube[2][2][2].c == 'w' && cube[3][0][2].c == 'g' && cube[5][0][2].c == 'r' ){
                R();
                BI();
                RI();
                BI();
                DI();
                B();
                D();
} else if(cube[2][2][2].c == 'r' && cube[3][0][2].c == 'w' && cube[5][0][2].c == 'g' ){
                L();
                B();
                B();
                LI();
} else if(cube[2][2][2].c == 'g' && cube[3][0][2].c == 'r' && cube[5][0][2].c == 'w' ){
                L();
                R();
                BI();
                LI();
                RI();

} else if(cube[2][0][2].c == 'w' && cube[5][2][2].c == 'g' && cube[1][2][2].c == 'r' ){
                L();
                RI();
                B();
                B();
                LI();
                R();
} else if(cube[2][0][2].c == 'r' && cube[5][2][2].c == 'w' && cube[1][2][2].c == 'g' ){
                L();
                BI();
                LI();
}else if(cube[2][0][2].c == 'g' && cube[5][2][2].c == 'r' && cube[1][2][2].c == 'w' ){
                BI();
                L();
                B();
                LI();
} else cout << "Error" << endl;

}


void placewhitegreenorange(){

 if(cube[0][0][0].c == 'o' && cube[4][0][2].c == 'w' && cube[3][2][0].c == 'g' ){
                U();
                BI();
                UI();
                B();
                U();
                BI();
                UI();

} else if(cube[0][0][0].c == 'w' && cube[4][0][2].c == 'g' && cube[3][2][0].c == 'o' ){
                1;
} else if(cube[0][0][0].c == 'g' && cube[4][0][2].c == 'o' && cube[3][2][0].c == 'w' ){
                U();
                B();
                UI();
                B();
                LI();
                B();
                B();
                L();
} else if(cube[0][0][2].c == 'w' && cube[3][2][2].c == 'g' && cube[5][0][0].c == 'o' ){
                R();
                B();
                B();
                RI();
                U();
                BI();
                UI();
} else if(cube[0][0][2].c == 'g' && cube[3][2][2].c == 'o' && cube[5][0][0].c == 'w' ){
                R();
                LI();
                B();
                L();
                RI();
} else if(cube[0][0][2].c == 'o' && cube[3][2][2].c == 'w' && cube[5][0][0].c == 'g' ){
                R();
                BI();
                RI();
                B();
                B();
                U();
                BI();
                UI();


} else if(cube[0][2][2].c == 'w' && cube[5][2][0].c == 'g' && cube[1][0][2].c == 'o' ){
                U();
                D();
                B();
                B();
                UI();
                DI();
} else if(cube[0][2][2].c == 'o' && cube[5][2][0].c == 'w' && cube[1][0][2].c == 'g' ){
                RI();
                U();
                B();
                B();
                UI();
                R();
} else if(cube[0][2][2].c == 'g' && cube[5][2][0].c == 'o' && cube[1][0][2].c == 'w' ){
                D();
                LI();
                B();
                B();
                L();
                DI();
} else if(cube[2][0][0].c == 'w' && cube[1][2][0].c == 'o' && cube[4][2][0].c == 'g' ){
                L();
                BI();
                L();
                L();
                B();
                L();
} else if(cube[2][0][0].c == 'o' && cube[1][2][0].c == 'g' && cube[4][2][0].c == 'w' ){
                B();
                LI();
                B();
                B();
                L();
} else if(cube[2][0][0].c == 'g' && cube[1][2][0].c == 'w' && cube[4][2][0].c == 'o' ){
                U();
                BI();
                UI();
} else if(cube[2][2][0].c == 'w' && cube[4][0][0].c == 'o' && cube[3][0][0].c == 'g' ){
                U();
                BI();
                UI();
                LI();
                B();
                B();
                L();
} else if(cube[2][2][0].c == 'o' && cube[4][0][0].c == 'g' && cube[3][0][0].c == 'w' ){
                BI();
                LI();
                B();
                L();
} else if(cube[2][2][0].c == 'g' && cube[4][0][0].c == 'w' && cube[3][0][0].c == 'o' ){
                B();
                U();
                BI();
                UI();
} else if(cube[2][2][2].c == 'w' && cube[3][0][2].c == 'o' && cube[5][0][2].c == 'g' ){
                B();
                U();
                BI();
                UI();
                LI();
                B();
                B();
                L();
} else if(cube[2][2][2].c == 'o' && cube[3][0][2].c == 'g' && cube[5][0][2].c == 'w' ){
                LI();
                B();
                L();
} else if(cube[2][2][2].c == 'g' && cube[3][0][2].c == 'w' && cube[5][0][2].c == 'o' ){
                BI();
                U();
                B();
                B();
                UI();


} else if(cube[2][0][2].c == 'w' && cube[5][2][2].c == 'o' && cube[1][2][2].c == 'g' ){
                B();
                B();
                U();
                BI();
                UI();
                LI();
                B();
                B();
                L();
} else if(cube[2][0][2].c == 'o' && cube[5][2][2].c == 'g' && cube[1][2][2].c == 'w' ){
                LI();
                B();
                B();
                L();
}else if(cube[2][0][2].c == 'g' && cube[5][2][2].c == 'w' && cube[1][2][2].c == 'o' ){
                U();
                B();
                B();
                UI();
} else cout << "Error" << endl;

}

void placewhiteorangeblue(){

 if(cube[0][0][2].c == 'w' && cube[3][2][2].c == 'o' && cube[5][0][0].c == 'b' ){
                1;
} else if(cube[0][0][2].c == 'o' && cube[3][2][2].c == 'b' && cube[5][0][0].c == 'w' ){
                R();
                B();
                RI();
                B();
                UI();
                B();
                B();
                U();
} else if(cube[0][0][2].c == 'b' && cube[3][2][2].c == 'w' && cube[5][0][0].c == 'o' ){
                R();
                BI();
                RI();
                B();
                R();
                BI();
                RI();


} else if(cube[0][2][2].c == 'w' && cube[5][2][0].c == 'o' && cube[1][0][2].c == 'b' ){
                RI();
                BI();
                R();
                UI();
                B();
                B();
                U();
} else if(cube[0][2][2].c == 'o' && cube[5][2][0].c == 'b' && cube[1][0][2].c == 'w' ){
                UI();
                D();
                B();
                U();
                DI();
} else if(cube[0][2][2].c == 'b' && cube[5][2][0].c == 'w' && cube[1][0][2].c == 'o' ){
                RI();
                BI();
                R();
                R();
                B();
                B();
                RI();
} else if(cube[2][0][0].c == 'w' && cube[1][2][0].c == 'b' && cube[4][2][0].c == 'o' ){
                B();
                B();
                UI();
                B();
                U();
                R();
                B();
                B();
                RI();
} else if(cube[2][0][0].c == 'b' && cube[1][2][0].c == 'o' && cube[4][2][0].c == 'w' ){
                UI();
                B();
                B();
                U();
} else if(cube[2][0][0].c == 'o' && cube[1][2][0].c == 'w' && cube[4][2][0].c == 'b' ){
                R();
                B();
                B();
                RI();
} else if(cube[2][2][0].c == 'w' && cube[4][0][0].c == 'b' && cube[3][0][0].c == 'o' ){
                BI();
                R();
                BI();
                RI();
                UI();
                B();
                B();
                U();
} else if(cube[2][2][0].c == 'o' && cube[4][0][0].c == 'w' && cube[3][0][0].c == 'b' ){
                R();
                BI();
                RI();
} else if(cube[2][2][0].c == 'b' && cube[4][0][0].c == 'o' && cube[3][0][0].c == 'w' ){
                BI();
                R();
                B();
                RI();
} else if(cube[2][2][2].c == 'w' && cube[3][0][2].c == 'b' && cube[5][0][2].c == 'o' ){
                UI();
                B();
                U();
                R();
                B();
                B();
                RI();
} else if(cube[2][2][2].c == 'o' && cube[3][0][2].c == 'w' && cube[5][0][2].c == 'b' ){
                B();
                B();
                R();
                B();
                B();
                RI();
} else if(cube[2][2][2].c == 'b' && cube[3][0][2].c == 'o' && cube[5][0][2].c == 'w' ){
                R();
                B();
                RI();

} else if(cube[2][0][2].c == 'w' && cube[5][2][2].c == 'b' && cube[1][2][2].c == 'o' ){
                B();
                R();
                BI();
                RI();
                UI();
                B();
                B();
                U();
} else if(cube[2][0][2].c == 'b' && cube[5][2][2].c == 'o' && cube[1][2][2].c == 'w' ){
                UI();
                B();
                U();
}else if(cube[2][0][2].c == 'o' && cube[5][2][2].c == 'w' && cube[1][2][2].c == 'b' ){
                BI();
                R();
                B();
                B();
                RI();

} else cout << "Error" << endl;

}

void placewhitebluered(){

 if(cube[0][2][2].c == 'w' && cube[5][2][0].c == 'b' && cube[1][0][2].c == 'r' ){
                1;
} else if(cube[0][2][2].c == 'b' && cube[5][2][0].c == 'r' && cube[1][0][2].c == 'w' ){
                RI();
                B();
                R();
                BI();
                RI();
                B();
                R();
} else if(cube[0][2][2].c == 'r' && cube[5][2][0].c == 'w' && cube[1][0][2].c == 'b' ){
                RI();
                BI();
                R();
                BI();
                D();
                B();
                B();
                DI();
} else if(cube[2][0][0].c == 'w' && cube[1][2][0].c == 'r' && cube[4][2][0].c == 'b' ){
                B();
                RI();
                B();
                R();
                D();
                B();
                B();
                DI();
} else if(cube[2][0][0].c == 'r' && cube[1][2][0].c == 'b' && cube[4][2][0].c == 'w' ){
                RI();
                B();
                R();
} else if(cube[2][0][0].c == 'b' && cube[1][2][0].c == 'w' && cube[4][2][0].c == 'r' ){
                B();
                RI();
                BI();
                R();
} else if(cube[2][2][0].c == 'w' && cube[4][0][0].c == 'r' && cube[3][0][0].c == 'b' ){
                B();
                B();
                RI();
                B();
                R();
                D();
                B();
                B();
                DI();
} else if(cube[2][2][0].c == 'r' && cube[4][0][0].c == 'b' && cube[3][0][0].c == 'w' ){
                RI();
                B();
                B();
                R();
} else if(cube[2][2][0].c == 'b' && cube[4][0][0].c == 'w' && cube[3][0][0].c == 'r' ){
                D();
                B();
                B();
                DI();
} else if(cube[2][2][2].c == 'w' && cube[3][0][2].c == 'r' && cube[5][0][2].c == 'b' ){
                BI();
                RI();
                B();
                R();
                D();
                B();
                B();
                DI();
} else if(cube[2][2][2].c == 'r' && cube[3][0][2].c == 'b' && cube[5][0][2].c == 'w' ){
                B();
                RI();
                B();
                B();
                R();
} else if(cube[2][2][2].c == 'b' && cube[3][0][2].c == 'w' && cube[5][0][2].c == 'r' ){
                D();
                BI();
                DI();
} else if(cube[2][0][2].c == 'w' && cube[5][2][2].c == 'r' && cube[1][2][2].c == 'b' ){
                RI();
                B();
                R();
                D();
                B();
                B();
                DI();
} else if(cube[2][0][2].c == 'b' && cube[5][2][2].c == 'w' && cube[1][2][2].c == 'r' ){
                B();
                D();
                BI();
                DI();
}else if(cube[2][0][2].c == 'r' && cube[5][2][2].c == 'b' && cube[1][2][2].c == 'w' ){
                BI();
                RI();
                B();
                R();

} else cout << "Error" << endl;

}


void placesidecolour(){
          while(cube[1][1][0].c != 'r' ||
          cube[4][2][1].c != 'g' ||
          cube[4][0][1].c != 'g' ||
          cube[3][1][0].c != 'o' ||
          cube[3][1][2].c != 'o' ||
          cube[5][0][1].c != 'b' ||
          cube[5][2][1].c != 'b' ||
          cube[1][1][2].c != 'r' ){



           switch(cube[2][0][1].c){

            case 'g': if(cube[1][2][1].c =='r'){
                B();
                L();
                BI();
                LI();
                BI();
                DI();
                B();
                D();

            }else if(cube[1][2][1].c =='o'){
                B();
                LI();
                B();
                L();
                B();
                U();
                BI();
                UI();
            }

            case 'r': if(cube[1][2][1].c =='g'){
                BI();
                BI();
                DI();
                B();
                D();
                B();
                L();
                BI();
                LI();

            }else if(cube[1][2][1].c =='b'){
                B();
                B();
                D();
                BI();
                DI();
                BI();
                RI();
                B();
                R();
            }

            case 'b': if(cube[1][2][1].c =='r'){
                BI();
                RI();
                B();
                R();
                B();
                D();
                BI();
                DI();

            }else if(cube[1][2][1].c =='o'){
                BI();
                R();
                BI();
                RI();
                BI();
                UI();
                B();
                U();
            }
            case 'o': if(cube[1][2][1].c == 'g'){
                U();
                BI();
                UI();
                BI();
                LI();
                B();
                L();
            }else if(cube[1][2][1].c == 'b'){
                UI();
                B();
                U();
                B();
                R();
                BI();
                RI();

            }
                default: 1;
            }

          switch(cube[2][1][0].c){

            case 'g': if(cube[4][1][0].c =='r'){
                B();
                B();
                L();
                BI();
                LI();
                BI();
                DI();
                B();
                D();

            }else if(cube[4][1][0].c =='o'){
                B();
                B();
                LI();
                B();
                L();
                B();
                U();
                BI();
                UI();
            }

            case 'r': if(cube[4][1][0].c =='g'){
                BI();
                DI();
                B();
                D();
                B();
                L();
                BI();
                LI();

            }else if(cube[4][1][0].c =='b'){
                BI();
                D();
                BI();
                DI();
                BI();
                RI();
                B();
                R();
            }

            case 'b': if(cube[4][1][0].c =='r'){
                RI();
                B();
                R();
                B();
                D();
                BI();
                DI();

            }else if(cube[4][1][0].c =='o'){
                R();
                BI();
                RI();
                BI();
                UI();
                B();
                U();
            }
            case 'o': if(cube[4][1][0].c== 'g'){
                B();
                U();
                BI();
                UI();
                BI();
                LI();
                B();
                L();
            }else if(cube[4][1][0].c == 'b'){
                B();
                UI();
                B();
                U();
                B();
                R();
                BI();
                RI();

            }
                default: 1;

          }
            switch(cube[2][2][1].c){

            case 'g': if(cube[3][0][1].c =='r'){
                BI();
                L();
                BI();
                LI();
                BI();
                DI();
                B();
                D();

            }else if(cube[3][0][1].c =='o'){
                BI();
                LI();
                B();
                L();
                B();
                U();
                BI();
                UI();
            }

            case 'r': if(cube[3][0][1].c =='g'){
                DI();
                B();
                D();
                B();
                L();
                BI();
                LI();

            }else if(cube[3][0][1].c =='b'){



                D();
                BI();
                DI();
                BI();
                RI();
                B();
                R();
            }

            case 'b': if(cube[3][0][1].c =='r'){
                B();
                RI();
                B();
                R();
                B();
                D();
                BI();
                DI();

            }else if(cube[3][0][1].c =='o'){
                B();
                R();
                BI();
                RI();
                BI();
                UI();
                B();
                U();
            }
            case 'o': if(cube[3][0][1].c == 'g'){
                B();
                B();
                U();
                BI();
                UI();
                BI();
                LI();
                B();
                L();
            }else if(cube[3][0][1].c == 'b'){
                B();
                B();
                UI();
                B();
                U();
                B();
                R();
                BI();
                RI();

            }
                default: 1;

          }
          switch(cube[2][1][2].c){

            case 'g': if(cube[5][1][2].c =='r'){
                L();
                BI();
                LI();
                BI();
                DI();
                B();
                D();

            }else if(cube[5][1][2].c =='o'){
                LI();
                B();
                L();
                B();
                U();
                BI();
                UI();
            }

            case 'r': if(cube[5][1][2].c =='g'){
                B();
                DI();
                B();
                D();
                B();
                L();
                BI();
                LI();

            }else if(cube[5][1][2].c =='b'){
                B();
                D();
                BI();
                DI();
                BI();
                RI();
                B();
                R();
            }

            case 'b': if(cube[5][1][2].c =='r'){
                B();
                B();
                RI();
                B();
                R();
                B();
                D();
                BI();
                DI();

            }else if(cube[5][1][2].c =='o'){
                B();
                B();
                R();
                BI();
                RI();
                BI();
                UI();
                B();
                U();
            }
            case 'o': if(cube[5][1][2].c == 'g'){
                BI();
                U();
                BI();
                UI();
                BI();
                LI();
                B();
                L();
            }else if(cube[5][1][2].c== 'b'){
                BI();
                UI();
                B();
                U();
                B();
                R();
                BI();
                RI();

            }
                default: 1;

          }
          if(cube[1][1][0].c != 'r' || cube[4][2][1].c != 'g'){
            L();
            BI();
            LI();
            BI();
            DI();
            B();
            D();

          }
          if(cube[4][0][1].c != 'g' || cube[3][1][0].c != 'o'){
            U();
            BI();
            UI();
            BI();
            LI();
            B();
            L();
          }
          if(cube[3][1][2].c != 'o' || cube[5][0][1].c != 'b'){
            R();
            BI();
            RI();
            BI();
            UI();
            B();
            U();
          }

          if(cube[5][2][1].c != 'b' || cube[1][1][2].c != 'r'){
            D();
            BI();
            DI();
            BI();
            RI();
            B();
            R();

          }
if(cube[2][0][1].c == 'y' &&
    cube[2][1][2].c == 'y' &&
    cube[2][2][1].c == 'y' &&
    cube[2][1][0].c == 'y' ){
    break;}


          }
          }



int main()
{



    cout << "Welcome to the Rubik's cube solving algorithm" << endl;


    getpos();
    placewhitered();
    placewhiteorange();
    placewhitegreen();
    placewhiteblue();
    placewhiteredgreen();
    placewhitegreenorange();
    placewhiteorangeblue();
    placewhitebluered();
    placesidecolour();
    alignyellow();
    lineupyellowcross();
    matchyellowcorners();
    solvefinal();


    return 0;
}
