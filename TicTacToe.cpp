/*
TO_DO
->Dont allow same input
->Dont allow other input
->Result Errors
*/
#include<bits/stdc++.h>
using namespace std;
int choice;
int main();


void random(int &cx1,int &cy1,int hx1,int hy1)
{
    int i,j;
    cx1=rand()%10;
    cy1=rand()%10;
    if((cx1<=2&&cy1<=2)&&(cx1!=hx1||cy1!=hy1))
    {
        cout<<" ___  ___  ___"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==hx1&&j==hy1)
                    cout<<"|_X_|";
                else if(i==cx1&&j==cy1)
                    cout<<"|_O_|";
                else
                    cout<<"|___|";
            }
            cout<<endl;
        }
    }
    else
        random(cx1,cy1,hx1,hy1);
}



void random(int cx1,int cy1,int &cx2,int &cy2,int hx1,int hy1,int hx2,int hy2)
{
    int i,j;
    cx2=rand()%10;
    cy2=rand()%10;
    if((cx2<=2&&cy2<=2)&&(cx2!=hx1||cy2!=hy1)&&(cx2!=hx2||cy2!=hy2)&&(cx2!=cx1||cy2!=cy2))
    {
        cout<<" ___  ___  ___"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==hx1&&j==hy1)
                    cout<<"|_X_|";
                else if(i==hx2&&j==hy2)
                    cout<<"|_X_|";
                else if(i==cx1&&j==cy1)
                    cout<<"|_O_|";
                else if(i==cx2&&j==cy2)
                    cout<<"|_O_|";
                else
                    cout<<"|___|";
            }
            cout<<endl;
        }
    }
    else
        random(cx1,cy1,cx2,cy2,hx1,hy1,hx2,hy2);
}



void random(int cx1,int cy1,int cx2,int cy2,int &cx3,int &cy3,int hx1,int hy1,int hx2,int hy2,int hx3,int hy3)
{
    int i,j;
    cx3=rand()%10;
    cy3=rand()%10;
    if((cx3<=2&&cy3<=2)&&(cx3!=hx1||cy3!=hy1)&&(cx3!=hx2||cy3!=hy2)&&(cx3!=hx3||cy3!=hy3)&&(cx3!=cx1||cy3!=cy1)&&(cx3!=cx2||cy3!=cy2))
    {
        cout<<" ___  ___  ___"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==hx1&&j==hy1)
                    cout<<"|_X_|";
                else if(i==hx2&&j==hy2)
                    cout<<"|_X_|";
                else if(i==hx3&&j==hy3)
                    cout<<"|_X_|";
                else if(i==cx1&&j==cy1)
                    cout<<"|_O_|";
                else if(i==cx2&&j==cy2)
                    cout<<"|_O_|";
                else if(i==cx3&&j==cy3)
                    cout<<"|_O_|";
                else
                    cout<<"|___|";
            }
            cout<<endl;
        }
    }
    else
        random(cx1,cy1,cx2,cy2,cx3,cy3,hx1,hy1,hx2,hy2,hx3,hy3);
}



void random(int cx1,int cy1,int cx2,int cy2,int cx3,int cy3,int &cx4,int &cy4, int hx1,int hy1,int hx2,int hy2,int hx3,int hy3,int hx4,int hy4)
{
    int i,j;
    cx4=rand()%10;
    cy4=rand()%10;
    if((cx4<=2&&cy4<=2)&&(cx4!=hx1||cy4!=hy1)&&(cx4!=hx2||cy4!=hy2)&&(cx4!=hx3||cy4!=hy3)&&(cx4!=hx4||cy4!=hy4)&&(cx4!=cx1||cy4!=cy1)&&(cx4!=cx2||cy4!=cy2)&&(cx4!=cx3||cy4!=cy3))
    {
        cout<<" ___  ___  ___"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==hx1&&j==hy1)
                    cout<<"|_X_|";
                else if(i==hx2&&j==hy2)
                    cout<<"|_X_|";
                else if(i==hx3&&j==hy3)
                    cout<<"|_X_|";
                else if(i==hx4&&j==hy4)
                    cout<<"|_X_|";
                else if(i==cx1&&j==cy1)
                    cout<<"|_O_|";
                else if(i==cx2&&j==cy2)
                    cout<<"|_O_|";
                else if(i==cx3&&j==cy3)
                    cout<<"|_O_|";
                else if(i==cx4&&j==cy4)
                    cout<<"|_O_|";
                else
                    cout<<"|___|";
            }
            cout<<endl;
        }
    }
    else
        random(cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4,hx1,hy1,hx2,hy2,hx3,hy3,hx4,hy4);
}



void display(int hx1,int hy1)
{
    int i,j;
    cout<<" ___  ___  ___"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==hx1&&j==hy1)
                cout<<"|_X_|";
            else
                cout<<"|___|";
        }
    cout<<endl;
    }
}



void display(int hx1,int hy1,int hx2,int hy2,int cx1,int cy1)
{
    int i,j;
    cout<<" ___  ___  ___"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==hx1&&j==hy1)
                cout<<"|_X_|";
            else if(i==hx2&&j==hy2)
                cout<<"|_X_|";
            else if(i==cx1&&j==cy1)
                cout<<"|_O_|";
            else
                cout<<"|___|";
        }
    cout<<endl;
    }
}



void display(int hx1,int hy1,int hx2,int hy2,int hx3,int hy3,int cx1,int cy1,int cx2,int cy2)
{
    int i,j;
    cout<<" ___  ___  ___"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==hx1&&j==hy1)
                cout<<"|_X_|";
            else if(i==hx2&&j==hy2)
                cout<<"|_X_|";
            else if(i==hx3&&j==hy3)
                cout<<"|_X_|";
            else if(i==cx1&&j==cy1)
                cout<<"|_O_|";
            else if(i==cx2&&j==cy2)
                cout<<"|_O_|";
            else
                cout<<"|___|";
        }
    cout<<endl;
    }
}



void display(int hx1,int hy1,int hx2,int hy2,int hx3,int hy3,int hx4,int hy4,int cx1,int cy1,int cx2,int cy2,int cx3,int cy3)
{
    int i,j;
    cout<<" ___  ___  ___"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==hx1&&j==hy1)
                cout<<"|_X_|";
            else if(i==hx2&&j==hy2)
                cout<<"|_X_|";
            else if(i==hx3&&j==hy3)
                cout<<"|_X_|";
            else if(i==hx4&&j==hy4)
                cout<<"|_X_|";
            else if(i==cx1&&j==cy1)
                cout<<"|_O_|";
            else if(i==cx2&&j==cy2)
                cout<<"|_O_|";
            else if(i==cx3&&j==cy3)
                cout<<"|_O_|";
            else
                cout<<"|___|";
        }
    cout<<endl;
    }
}



void display(int hx1,int hy1,int hx2,int hy2,int hx3,int hy3,int hx4,int hy4,int hx5,int hy5,int cx1,int cy1,int cx2,int cy2,int cx3,int cy3,int cx4,int cy4)
{
    int i,j;
    cout<<" ___  ___  ___"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==hx1&&j==hy1)
                cout<<"|_X_|";
            else if(i==hx2&&j==hy2)
                cout<<"|_X_|";
            else if(i==hx3&&j==hy3)
                cout<<"|_X_|";
            else if(i==hx4&&j==hy4)
                cout<<"|_X_|";
            else if(i==hx5&&j==hy5)
                cout<<"|_X_|";
            else if(i==cx1&&j==cy1)
                cout<<"|_O_|";
            else if(i==cx2&&j==cy2)
                cout<<"|_O_|";
            else if(i==cx3&&j==cy3)
                cout<<"|_O_|";
            else if(i==cx4&&j==cy4)
                cout<<"|_O_|";
            else
                cout<<"|___|";
        }
    cout<<endl;
    }
}



void check(int cx1,int cy1,int cx2,int cy2,int cx3,int cy3,int hx1,int hy1,int hx2,int hy2,int hx3,int hy3)
{
    if((hx1==hx2&&hx2==hx3&&hy1+2==hy2+1&&hy2+1==hy3)||(hy1==hy2&&hy2==hy3&&hx1+2==hy2+1&&hy2+1==hy3)||(hx1==hy1&&hx2==hy2&&hx3==hy3)||(hx1==2-hy1&&hx2==2-hy2&&hx3==2-hy3))
    {
        cout<<endl<<"Wow, you must be sharp, YOU WIN"<<endl;
        cout<<"Do you want to play again? (Enter 1 to play again or anyother number to exit.):- ";
        cin>>choice;
        if(choice==1)
            main();
        else
        {
            cout<<"Good game, hope you enjoyed :)"<<endl;
            exit(0);
        }
    }
    else if((cx1==cx2&&cx2==cx3&&cy1+2==cy2+1&&cy2+1==cy3)||(cy1==cy2&&cy2==cy3&&cx1+2==cy2+1&&cy2+1==cy3)||(cx1==cy1&&cx2==cy2&&cx3==cy3)||(cx1==2-cy1&&cx2==2-cy2&&cx3==2-cy3))
    {
        cout<<endl<<"Hard luck mate, CPU WINS, better luck next time"<<endl;
        cout<<"Do you want to play again? (Enter 1 to play again or anyother number to exit.):- ";
        cin>>choice;
        if(choice==1)
            main();
        else
        {
            cout<<"Good game, hope you enjoyed :)"<<endl;
            exit(0);
        }
    }
    else
        cout<<endl;
}



void check(int cx1,int cy1,int cx2,int cy2,int cx3,int cy3,int cx4,int cy4,int hx1,int hy1,int hx2,int hy2,int hx3,int hy3,int hx4,int hy4)
{
    if(((hx1==hx2&&hx2==hx3)&&(hy1+2==hy2+1&&hy2+1==hy3))||((hy1==hy2&&hy2==hy3)&&(hx1+2==hx2+1&&hx2+1==hx3))||(hx1==hx2&&hx2==hx4)&&(hy1+2==hy2+1&&hy2+1==hy4)||(hy1==hy2&&hy2==hy4)&&(hx1+2==hx2+1&&hx2+1==hy4)||(hx2==hx3&&hx3==hx4)&&(hy2+2==hy3+1&&hy3+1==hy4)||(hy1==hy2&&hy2==hy4)&&(hx1+2==hx2+1&&hx2+1==hx4)||(hx1==hx3&&hx3==hx4)&&(hy1+2==hy3+1&&hy3+1==hy4)||(hy2==hy3&&hy3==hy4)&&(hx2+2==hx3+1&&hx3+1==hx4)||(hx1==hy1&&hx2==hy2&&hx3==hy3)||(hx1==2-hy1&&hx2==2-hy2&&hx3==2-hy3)||(hx1==hy1&&hx2==hy2&&hx4==hy4)||(hx1==2-hy1&&hx2==2-hy2&&hx4==2-hy4)||(hx1==hy1&&hx3==hy3&&hx4==hy4)||(hx1==2-hy1&&hx3==2-hy3&&hx4==2-hy4)||(hx2==hy2&&hx3==hy3&&hx4==hy4)||(hx2==2-hy2&&hx3==2-hy3&&hx4==2-hy4))
    {
        cout<<endl<<"Wow, you must be sharp, YOU WIN"<<endl;
        cout<<"Do you want to play again? (Enter 1 to play again or anyother number to exit.):- ";
        cin>>choice;
        if(choice==1)
            main();
        else
        {
            cout<<"Good game, hope you enjoyed :)"<<endl;
            exit(0);
        }
    }
    else if(((cx1==cx2&&cx2==cx3)&&(cy1+2==cy2+1&&cy2+1==cy3))||(cy1==cy2&&cy2==cy3)&&(cx1+2==cx2+1&&cx2+1==cx3)||(cx1==cx2&&cx2==cx4&&cy1+2==cy2+1&&cy2+1==cy4)||(cy1==cy2&&cy2==cy4)&&(cx1+2==cx2+1&&cx2+1==cx4)||(cx2==cx3&&cx3==cx4)&&(cy2+2==cy3+1&&cy3+1==cy4)||(cy1==cy2&&cy2==cy4)&&(cx1+2==cx2+1&&cx2+1==cx4)||(cx1==cx3&&cx3==cx4)&&(cy1+2==cy3+1&&cy3+1==cy4)||(cy2==cy3&&cy3==cy4)&&(cx2+2==cx3+1&&cx3+1==cx4)||(cx1==cy1&&cx2==cy2&&cx3==cy3)||(cx1==2-cy1&&cx2==2-cy2&&cx3==2-cy3)||(cx1==cy1&&cx2==cy2&&cx4==cy4)||(cx1==2-cy1&&cx2==2-cx2&&cx4==2-cy4)||(cx1==cy1&&cx3==cy3&&cx4==cy4)||(cx1==2-cy1&&cx3==2-cy3&&cx4==2-cy4)||(cx2==cy2&&cx3==cy3&&cx4==cy4)||(cx2==2-cy2&&cx3==2-cy3&&cx4==2-cy4))
    {
        cout<<endl<<"Hard luck mate, CPU WINS, better luck next time"<<endl;
        cout<<"Do you want to play again? (Enter 1 to play again or anyother number to exit.):- ";
        cin>>choice;
        if(choice==1)
            main();
        else
        {
            cout<<"Good game, hope you enjoyed :)"<<endl;
            exit(0);
        }
    }
    else
        cout<<endl;
}



void check(int cx1,int cy1,int cx2,int cy2,int cx3,int cy3,int cx4,int cy4,int hx1,int hy1,int hx2,int hy2,int hx3,int hy3,int hx4,int hy4,int hx5,int hy5)
{
    if((hx1==hx2&&hx2==hx3)&&(hy1+2==hy2+1&&hy2+1==hy3)||(hy1==hy2&&hy2==hy3)&&(hx1+2==hx2+1&&hx2+1==hx3)||(hx1==hx2&&hx2==hx4)&&(hy1+2==hy2+1&&hy2+1==hy4)||(hy1==hy2&&hy2==hy4)&&(hx1+2==hx2+1&&hx2+1==hy4)||(hx2==hx3&&hx3==hx4)&&(hy2+2==hy3+1&&hy3+1==hy4)||(hy1==hy2&&hy2==hy4)&&(hx1+2==hx2+1&&hx2+1==hx4)||(hx1==hx3&&hx3==hx4)&&(hy1+2==hy3+1&&hy3+1==hy4)||(hy2==hy3&&hy3==hy4)&&(hx2+2==hx3+1&&hx3+1==hx4)||(hx1==hy1&&hx2==hy2&&hx3==hy3)||(hx1==2-hy1&&hx2==2-hy2&&hx3==2-hy3)||(hx1==hy1&&hx2==hy2&&hx4==hy4)||(hx1==2-hy1&&hx2==2-hy2&&hx4==2-hy4)||(hx1==hy1&&hx3==hy3&&hx4==hy4)||(hx1==2-hy1&&hx3==2-hy3&&hx4==2-hy4)||(hx2==hy2&&hx3==hy3&&hx4==hy4)||(hx2==2-hy2&&hx3==2-hy3&&hx4==2-hy4))
    {
        cout<<endl<<"Wow, you must be sharp, YOU WIN"<<endl;
        cout<<"Do you want to play again? (Enter 1 to play again or anyother number to exit.):- ";
        cin>>choice;
        if(choice==1)
            main();
        else
        {
            cout<<"Good game, hope you enjoyed :)"<<endl;
            exit(0);
        }
    }
    else if((cx1==cx2&&cx2==cx3)&&(cy1+2==cy2+1&&cy2+1==cy3)||(cy1==cy2&&cy2==cy3)&&(cx1+2==cx2+1&&cx2+1==cx3)||(cx1==cx2&&cx2==cx4)&&(cy1+2==cy2+1&&cy2+1==cy4)||(cy1==cy2&&cy2==cy4)&&(cx1+2==cx2+1&&cx2+1==cx4)||(cx2==cx3&&cx3==cx4)&&(cy2+2==cy3+1&&cy3+1==cy4)||(cy1==cy2&&cy2==cy4)&&(cx1+2==cx2+1&&cx2+1==cx4)||(cx1==cx3&&cx3==cx4)&&(cy1+2==cy3+1&&cy3+1==cy4)||(cy2==cy3&&cy3==cy4)&&(cx2+2==cx3+1&&cx3+1==cx4)||(cx1==cy1&&cx2==cy2&&cx3==cy3)||(cx1==2-cy1&&cx2==2-cy2&&cx3==2-cy3)||(cx1==cy1&&cx2==cy2&&cx4==cy4)||(cx1==2-cy1&&cx2==2-cx2&&cx4==2-cy4)||(cx1==cy1&&cx3==cy3&&cx4==cy4)||(cx1==2-cy1&&cx3==2-cy3&&cx4==2-cy4)||(cx2==cy2&&cx3==cy3&&cx4==cy4)||(cx2==2-cy2&&cx3==2-cy3&&cx4==2-cy4))
    {
        cout<<endl<<"Hard luck mate, CPU WINS, better luck next time"<<endl;
        cout<<"Do you want to play again? (Enter 1 to play again or anyother number to exit.):- ";
        cin>>choice;
        if(choice==1)
            main();
        else
        {
            cout<<"Good game, hope you enjoyed :)"<<endl;
            exit(0);
        }
    }
    else
    {
        cout<<"Well played, but the game is a DRAW GAME"<<endl;
        cout<<"Do you want to play again? (Enter 1 to play again or anyother number to exit.):- ";
        cin>>choice;
        if(choice==1)
            main();
        else
        {
            cout<<"Good game, hope you enjoyed :)"<<endl;
            exit(0);
        }
    }
}
    
    

void open()
{
    cout<<endl;
    cout<<"*********************************Welcome to Tic Tac Toe!*********************************"<<endl;
    cout<<"      You will start the game and will play against a bot."<<endl;
    cout<<"      There may be bugs in the game, please bear with it."<<endl;
    cout<<"      There will be updates and fixes in the future to make it better."<<endl;
    cout<<"      Soon there will be a harder level bot, the algorithm is in progress."<<endl;
    cout<<"      Enjoy :)"<<endl;
    cout<<"*****************************************************************************************"<<endl;
}



void coords()
{
    int i,j;
    cout<<"First value is row, second value is column"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"|"<<i<<","<<j<<"|";
        }
    cout<<endl;
    }
    cout<<"*****************************************************************************************"<<endl;
}



int main()
{
    open();
    coords();
    int hx1,hy1,hx2,hy2,hx3,hy3,hx4,hy4,hx5,hy5;
    int cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4;
    int i,j;
  
    
    cout<<endl<<"*****   YOUR TURN   *****"<<endl;
    cout<<"Enter the row number (0,1,2):- ";
    cin>>hx1;
    cout<<"Enter the column number (0,1,2):- ";
    cin>>hy1;
    display(hx1,hy1);
    cout<<endl<<"*****   CPU's TURN   *****"<<endl;
    random(cx1,cy1,hx1,hy1);
    
    
    
    cout<<endl<<"*****   YOUR TURN   *****"<<endl;
    cout<<endl<<"Enter the row number (0,1,2):- ";
    cin>>hx2;
    cout<<"Enter the column number (0,1,2):- ";
    cin>>hy2;
    display(hx1,hy1,hx2,hy2,cx1,cy1);
    cout<<endl<<"*****   CPU's TURN   *****"<<endl;
    random(cx1,cy1,cx2,cy2,hx1,hy1,hx2,hy2);
    
    
    
    cout<<endl<<"*****   YOUR TURN   *****"<<endl;
    cout<<endl<<"Enter the row number (0,1,2):- ";
    cin>>hx3;
    cout<<"Enter the column number (0,1,2):- ";
    cin>>hy3;
    display(hx1,hy1,hx2,hy2,hx3,hy3,cx1,cy1,cx2,cy2);
    check(cx1,cy1,cx2,cy2,cx3,cy3,hx1,hy1,hx2,hy2,hx3,hy3);
    cout<<endl<<"*****   CPU's TURN   *****"<<endl;
    random(cx1,cy1,cx2,cy2,cx3,cy3,hx1,hy1,hx2,hy2,hx3,hy3);
    check(cx1,cy1,cx2,cy2,cx3,cy3,hx1,hy1,hx2,hy2,hx3,hy3);
    
    
    
    cout<<endl<<"*****   YOUR TURN   *****"<<endl;
    cout<<endl<<"Enter the row number (0,1,2):- ";
    cin>>hx4;
    cout<<"Enter the column number (0,1,2):- ";
    cin>>hy4;
    display(hx1,hy1,hx2,hy2,hx3,hy3,hx4,hy4,cx1,cy1,cx2,cy2,cx3,cy3);
    check(cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4,hx1,hy1,hx2,hy2,hx3,hy3,hx4,hy4);
    cout<<endl<<"*****   CPU's TURN   *****"<<endl;
    random(cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4,hx1,hy1,hx2,hy2,hx3,hy3,hx4,hy4);
    check(cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4,hx1,hy1,hx2,hy2,hx3,hy3,hx4,hy4);
    
    
    
    cout<<endl<<"*****   YOUR TURN   *****"<<endl;
    cout<<endl<<"Enter the row number (0,1,2):- ";
    cin>>hx5;
    cout<<"Enter the column number (0,1,2):- ";
    cin>>hy5;
    display(hx1,hy1,hx2,hy2,hx3,hy3,hx4,hy4,hx5,hy5,cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4);
    check(cx1,cy1,cx2,cy2,cx3,cy3,cx4,cy4,hx1,hy1,hx2,hy2,hx3,hy3,hx4,hy4,hx5,hy5);
}