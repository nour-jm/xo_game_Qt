#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <algorithm>
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int visit[9]= {0};
enum {player1='x',player2='o'};
int player=player1;
int index=-1;
bool check ()
{
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
        {
            if (a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]&&j+2<3)
                return true;
            if (a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]&&i+2<3)
                return true;
            if (a[i][j]==a[i+1][j+1]&&a[i][j]==a[i+2][j+2]&&i+2<3&&j+2<3)
                return true;
            if (a[i][j]==a[i+1][j-1]&&a[i][j]==a[i+2][j-2]&&i+2<3&&j-2>=0)
                return true;

        }
    return false;
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_1_clicked()
{
    if (visit[0]!=1)
    {

        visit[0]=1;
        if (player==player1)
         {  index++;
            ui->label->setText("player O");
            ui->label_1->setText("X");
            a[0][0]='x';

          player=player2;}
        else if (player==player2)
         {index++;
            ui->label->setText("player X");
            ui->label_1->setText("O");
            a[0][0]='o';
              player=player1;}

    }

    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
     else if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
     else if (index==9)
     ui->label_7->setText("oops no winer  :( ");

}

void MainWindow::on_pushButton_2_clicked()
{  if (visit[1]!=1)
    {

        visit[1]=1;
         if (player==player1)
         { index++;
             ui->label->setText("player O");
             ui->label_2->setText("X");
             a[0][1]='x';
               player=player2;
         }
          else if (player==player2)
              {index++;
             ui->label->setText("player X");
             ui->label_2->setText("O");
             a[0][1]='o';
           player=player1;}
    }
    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
    else if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
    else if (index==9)
         ui->label_7->setText("oops no winer  :( ");
}

void MainWindow::on_pushButton_3_clicked()
{
    if (visit[2]!=1)
       {
            visit[2]=1;
            if (player==player1)
            { index++;
                 ui->label->setText("player O");
                ui->label_3->setText("X");
                a[0][2]='x';
                  player=player2;
           }
            else if (player==player2)
              {index++;
                ui->label->setText("player X");
                ui->label_3->setText("O");
                a[0][2]='o';
              player=player1;}

       }

    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
   else  if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
    else if (index==9)
         ui->label_7->setText("oops no winer  :( ");
}

void MainWindow::on_pushButton_4_clicked()
{
    if (visit[3]!=1)
       {

           visit[3]=1;
           if (player==player1)
           { index++;
               ui->label->setText("player O");
               ui->label_4->setText("X");
                 player=player2;
           a[1][0]='x';
           }
           else if (player==player2)
             {index++;
               ui->label->setText("player X");
               ui->label_4->setText("O");
                a[1][0]='o';
                 player=player1;}
       }

    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
   else  if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
    else if (index==9)
         ui->label_7->setText("oops no winer  :( ");
}

void MainWindow::on_pushButton_5_clicked()
{
    if (visit[4]!=1)
       {

           visit[4]=1;
           if (player==player1)
            {
               index++;
               ui->label->setText("player O");
               ui->label_5->setText("X");
                a[1][1]='x';
           player=player2;
           }
           else if (player==player2)
             {  index++;
               ui->label->setText("player X");

               ui->label_5->setText("O");
                a[1][1]='o';
                 player=player1;}
       }

    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
    else if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
    else if (index==9)
         ui->label_7->setText("oops no winer  :( ");
}

void MainWindow::on_pushButton_6_clicked()
{
    if (visit[5]!=1)
       {

        visit[5]=1;
        if (player==player1)
         { index++;
            ui->label->setText("player O");
            ui->label_6->setText("X");
             a[1][2]='x';
         player=player2;
        }
        else if (player==player2)
          {index++;
            ui->label->setText("player X");
            ui->label_6->setText("O");
             a[1][2]='o';
          player=player1;}
       }

    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
   else  if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
    else if (index==9)
         ui->label_7->setText("oops no winer  :( ");

}

void MainWindow::on_pushButton_7_clicked()
{
    if (visit[6]!=1)
       {
        visit[6]=1;
        if (player==player1)
         {index++;
            ui->label->setText("player O");
            ui->label_77->setText("X");
             a[2][0]='x';
          player=player2;
         }
        else if (player==player2)
          {index++;
            ui->label->setText("player X");
            ui->label_77->setText("O");
                a[2][0]='o';
              player=player1;}
       }
    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
    else if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
   else  if (index==9)
         ui->label_7->setText("oops no winer  :( ");
}

void MainWindow::on_pushButton_8_clicked()
{
    if (visit[7]!=1)
       {visit[7]=1;
        if (player==player1)
         {index++;
            ui->label->setText("player O");
            ui->label_88->setText("X");
                a[2][1]='x';
          player=player2;}
        else if (player==player2)
           {index++;
            ui->label->setText("player X");
            ui->label_88->setText("O");
                a[2][1]='o';
          player=player1;}
       }

    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
    else if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
   else  if (index==9)
         ui->label_7->setText("oops no winer  :( ");
}

void MainWindow::on_pushButton_9_clicked()
{
    if (visit[8]!=1)
       {index++;
        visit[8]=1;
        if (player==player1)
        {index++;
            ui->label->setText("player O");
            ui->label_99->setText("X");
                a[2][2]='x';
          player=player2;}
        else if (player==player2)
           {index++;
            ui->label->setText("player X");
            ui->label_99->setText("O");
                a[2][2]='o';
          player=player1;}
       }
    if (check()&&player==player1)
        ui->label_7->setText("the second player is winner :)");
   else  if (check()&&player==player2)
        ui->label_7->setText("the first player is winner :)");
   else  if (index==9)
         ui->label_7->setText("oops no winer  :( ");
}

void MainWindow::on_pushButton_start_clicked()
{
    ui->label_1->clear();
     ui->label_2->clear();
      ui->label_3->clear();
       ui->label_4->clear();
        ui->label_5->clear();
         ui->label_6->clear();
          ui->label_77->clear();
            ui->label_88->clear();
              ui->label_99->clear();
               ui->label_7->clear();
               ui->label->setText("let's start again ");
index=-1;
player=player1;
int k=49;
for (int i=0;i<9;i++)
    visit[i]=0;
for (int i=0;i<3;i++)
{for (int j=0;j<3;j++)
    {a[i][j]=k;
            k++;}}




}
