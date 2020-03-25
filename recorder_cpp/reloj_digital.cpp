 #include <stdio.h>
#include <conio.h>
#include <Windows.h>
static int hora = -1, min, seg;
int Moldura ( int tam_lin_ini, int tam_lin_fim, int tam_ini_col, int tam_fim_col ) {
     int i, c;
     for ( i = tam_lin_ini; i < tam_lin_fim; i++ ) {
         for ( c = tam_ini_col; c < tam_fim_col; c++ ){
              gotoxy ( c, i );
              textbackground ( WHITE );
              printf(" ");
         }
     }
     return 0;
}
void Inform ( ) {
     textcolor ( LIGHTBLUE );
     gotoxy ( 22, 20 );
     printf ( "Por: " );
     textcolor ( BLACK );
     gotoxy ( 27, 20 );
     printf ( "Samuel Lima" );
     textcolor ( LIGHTMAGENTA );
     gotoxy ( 22, 21 );
     printf ( "sa_sp10@hotmail.com" );
     textcolor ( LIGHTRED );
     gotoxy ( 25, 23 );
     printf ( "MUITO OBRIGADO" );
}
// Esta função não permite a entrada de caracteres
int relogio ( char *num ) {
     unsigned int i;
     for ( i = 0; i < strlen ( num ); i++ ) {
         if ( num [ i ] < '0' || num [ i ] > '9' )
              return 0;
     }
     return 1;
}
int acerta_hora ( ) {
     if ( hora > 23 ) {
         return true;
     }
     return false;
}
int acerta_min ( ) {
     if ( min > 59 ) {
         return true;
     }
     return false;
}
int acerta_seg ( ) {
     if ( seg > 59 ) {
         return true;
     }
     return false;
}
void Verifica_Horas ( ) {
     textcolor ( LIGHTRED );
     gotoxy ( 20, 3 );
     printf ( "RELÓGIO DIGITAL EM C" );
     textcolor ( LIGHTBLUE );
     gotoxy ( 20, 5 );
     printf ( "Hora atual => " );
     textcolor ( LIGHTRED );
     if ( ( hora >= 0 && hora <= 23 ) ) {
         textcolor ( LIGHTRED );
         printf ( "%d", hora );
     }
}
void Verifica_Minutos ( ) {
     textcolor ( LIGHTBLUE );
     gotoxy ( 20, 6 );
     printf ( "Minutos => " );
     textcolor ( LIGHTRED );
     if ( ( min >= 1 && min <= 59 ) ) {
         textcolor ( LIGHTRED );
         printf ( "%d", min );
     }
}
void Verifica_Segundos ( ) {
     textcolor ( LIGHTBLUE );
     gotoxy ( 20, 7 );
     printf ( "Segundos => " );
     textcolor ( LIGHTRED );
     if ( ( seg >= 1 && seg <= 59 ) ) {
         textcolor ( LIGHTRED );
         printf ( "%d", seg );
     }
}
int main ( ) {
     int erro = 0;
     char str_1 [ 4 ];
     char str_2 [ 4 ];
     char str_3 [ 4 ];
     system ( "title RELÓGIO DIGITAL EM C" );
     if ( hora == 0 )
         hora = ' ';
     do{
         Moldura ( 2, 25, 3, 59 );
         Verifica_Horas ( );
         if ( erro == 1 ) {
              Verifica_Horas ( );
         }
         textcolor ( LIGHTRED );
         gets ( str_1 );
         hora = atoi ( str_1 );
         if ( relogio ( str_1 ) == 0 || hora == -1 ) {
              Beep ( 1000, 100 );
              erro = 1;
              if ( hora == 0 )
                   hora = ' ';
              continue;
         }
         if ( acerta_hora ( ) ) {
              Beep ( 1000, 100 );
              erro = 1;
              continue;
         }
         break;
     } while ( ( hora < 0 || hora > 23 ) );
     ///////////////////////////////////////////////
     do{
         Moldura ( 2, 25, 3, 59 );
         Verifica_Horas ( );
         Verifica_Minutos ( );
         if ( erro == 2 ) {
              Verifica_Minutos ( );
         }
         textcolor ( LIGHTRED );
         gets ( str_2 );
         min = atoi ( str_2 );
         if ( relogio ( str_2 ) == 0 || min == 0 ) {
              Beep ( 1000, 100 );
              erro = 2;
              continue;
         }
         if ( acerta_min ( ) ) {
              Beep ( 1000, 100 );
              erro = 2;
              continue;
         }
         break;
     } while ( ( min < 1 || min > 59 ) );
     ////////////////////////////////////////////////
     do{
         Moldura ( 2, 25, 3, 59 );
         Verifica_Horas ( );
         Verifica_Minutos ( );
         Verifica_Segundos ( );
         if ( erro == 3 ) {
              Verifica_Segundos ( );
         }
         textcolor ( LIGHTRED );
         gets ( str_3 );
         seg = atoi ( str_3 );
         if ( relogio ( str_3 ) == 0 || seg == 0 ) {
              Beep ( 1000, 100 );
              erro = 3;
              continue;
         }
         if ( acerta_seg ( ) ) {
              Beep ( 1000, 100 );
              erro = 3;
              continue;
         }
         break;
     } while ( ( seg < 1 || seg > 59 ) );
     ///////////////////////////////////////////////
     Moldura ( 2, 25, 3, 59 );
     gotoxy ( 20, 3 );
     printf ( "RELÓGIO DIGITAL EM C" );
     textcolor ( LIGHTBLUE );
     gotoxy ( 17, 5 );
     printf ( "Horas, minutos e segundos" );
     textcolor ( BLACK );
     gotoxy ( 19, 7 );
     printf ( "H    M   S");
     /*
              Este laço repetidor funciona como contador
              Vai incrementando até que atinge o número máximo
              em cada operação.
      */
     while ( true ) {
         Sleep ( 1000 );
         seg++;
         if ( seg > 59 ) {
              seg = 0;
              min++;
         }
         if ( min > 59 ) {
              min = 0;
              hora++;
         }
         if ( hora > 23 ) {
              hora = 0;
         }
         //{
         //A finalidade destes blocos de impressão abaixo
         //Tem como objetivo imprimir o 0 antes de dígitos
         //Entre 0 e 9, em horas, minutos e segundos.
         textcolor ( LIGHTRED );
         gotoxy ( 19, 9 );
         if ( min < 10 && seg < 10 ){
              if ( hora <= 9 ){
                   gotoxy ( 18, 9 );
                   printf ( "0" );
              }
              printf ( "%d : 0%d  0%d ", hora, min, seg );
         }
         gotoxy ( 19, 9 );
         if ( min > 9 || seg > 9 ){
              if ( hora <= 9 ){
                   gotoxy ( 18, 9 );
                   printf ( "0" );
              }
              printf ( "%d : %d  %d ", hora, min, seg );
         }
         gotoxy ( 19, 9 );
         if ( min < 10 && seg > 9 ){
              if ( hora <= 9 ){
                   gotoxy ( 18, 9 );
                   printf ( "0" );
              }
              printf ( "%d : 0%d  %d ", hora, min, seg );
         }
         gotoxy ( 19, 9 );
         if ( min > 9 && seg < 10 ){
              if ( hora <= 9 ){
                   gotoxy ( 18, 9 );
                   printf ( "0" );
              }
              printf ( "%d : %d  0%d ", hora, min, seg );
         }
         //}
         Inform ( );
     }

}
