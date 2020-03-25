
typedef unsigned char int8;

/* Funciones utiles*/

void Title(char *titulo);
void IntToString(int num,char *Str);
void LimpiarBuf(char *Tex);
void marco(short x,short y,unsigned short altura,unsigned short ancho,char *Word);


/*  Definicion de funciones */
void Title(char *titulo)
{
     char output[]="title ";
     strcat( output,titulo);
     system(output);
}

void IntToString(int num,char *Str)
{
     
     short aux=num,dir=0;
     
     if(num<0) dir++;         // si es negativo se aparta un byte para "-"
     do                       // se obtiene la cantidad de digitos del num
     {
      dir++;                  // variable donde se guarda la cantidad de digitos
      aux/=10;         
      }
     while(aux);
     aux=num;
     num=((num)>0)?(num):(num*(-1));   // se halla el ABS(num)   
     for(;dir;)
    { Str[--dir]=num%10 + 48; //se empieza por el ultimo dig. del num y se suma 48 para que sea Ascii
                              //y se empieza alojar de la parte final de *Str
      num/=10;                // se suprime el ultimo digito, ya que se solo asume la parte entera
                              //y el ultimo digito es parte decimal     
    }
    if(aux<0)
    Str[0]='-';               // se agrega el signo , si era negativo
}


void LimpiarBuf(char *Tex)
{
     for(int8 i=0;i<sizeof(Tex);i++)
     Tex[i]='\0';
}

void marco(short x=0,short y=0,unsigned short altura=3,unsigned short ancho=3,char *Word=" ")
{
     ancho=(strlen(Word)>ancho)?(strlen(Word)):(ancho);
     
     static int8 i,j;
     for(i=0;i++<y;) printf("\n");// mov en y
     for(i=0;i++<x;) printf(" ");// mov en x
     //inicio de marco
     // primera lines de marco
     printf("\xDA");                       // codigo ascii
     for(i=0;i++<ancho;) printf("\xC4");
     printf("\xBF\n"); 
     // parte central
     // Escritura de palabra
      for(i=0;i++<x;) printf(" "); printf("\xB3");
      printf("%-*s",ancho,Word);
      printf("\xB3\n");
 
      // continuacion
     for(j=0;j++<altura-1;)
     {
     for(i=0;i++<x;) printf(" ");
      printf("\xB3");
     for(i=0;i++<ancho;) printf(" ");
     printf("\xB3");
     printf("\n");
     }
     
     // Parte Final
     for(i=0;i++<x;) printf(" ");
     printf("\xC0");
     for(i=0;i++<ancho;) printf("\xC4");
     printf("\xD9\n"); 
     }
