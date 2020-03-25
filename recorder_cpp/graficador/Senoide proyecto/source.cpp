/*
  Name:         Grafica de senoides  
  Author:       Salas Quispe Giancarlos
  Date:         05/11/13 21:50
*/


#include <winbgim.h>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <cstdio>
#include "Funciones_especiales.hpp"  // Creado para alojar a funciones 

#define out      printf
#define in       scanf
#define FOR      1
#define WHILE    2
#define DO_WHILE 3


int main()
{
    Title("Grafica-Datos");         // Titulo para consola
    short tipo;                     // Tipo de bucle
    char Buffer[4];                 // Variable para transformar int a caracter
    float Vdesf,Idesf;              // Desfases de V(t) e I(t)
    short Vm,Im,desf,desfVI;        // variables para voltaje , corriente y desfase      
    float X,Yv,Yi;                  // variables para grafijar en los ejes   
    short xV,xI;
    /* Recepcion de Datos de consola MS_DOS*/
    system("color 1e");              // color para consola
    marco(25,2,1,1,"Datos para Graficar Senoide");
    marco(30,1,1,1," v(t)=Vm*sen(wt+\x9B)");
    out("\n Voltaje maxima   : ");
    in("%hd",&Vm);
    out(" Corriente maxima : ");
    in("%hd",&Im);
   
    out(" Angulo de fase de V(t): ");
    in("%hd",&desf);
    desfVI=desf;     
    Vdesf=desf*M_PI/180;          // Calculando Ang. en radianes               
    out(" Angulo de fase de i(t): ");
    in("%hd",&desf);                          
    desfVI-=desf;
    Idesf=desf*M_PI/180;      // Calculando Ang. en radianes
    
    out(" Indique Bucle : \n 1.-FOR\n 2.-WHILE\n 3.-DO WHILE \n 4.-SALIR\n");
    in("%hd",&tipo);
    if(tipo==4) return 1;
    
    initwindow(800,600);         //abre una ventana 800x600 pixels
    setwindowtitle("Senoides");  // titulo para consola Grafica
    settextstyle(0,0,2);        // Temaño de letra normal
    /*  Fondo color 
    setcolor(WHITE);
    for(short i=1;i<800;i++)
    line(i,1,i,600);*/
    xV=Vm,xI=Im;
    if((Vm>-20&&Vm<20)||(Im<20&&Im>-20)) {Vm*=10;Im*=10;} // Amplifica , para visualizar
    if((Vm>250||Vm<-250)||(Im<-250||Im>250)) {Vm/=2;Im/=2;} // Reduce , para visualizar
     
    setcolor(YELLOW);            // cambio de color 
    line(40,10,40,560);          // eje "Y" para V+
    line(35,300-Vm,45,300-Vm);   // valor de V
   
    line(35,300-Im,45,300-Im);   // valor de I 
    line(10,300,780,300);        // eje "X" para wt
    outtextxy(20,10,"V+");       //muestra texto en las coordenadas 
    outtextxy(760,280,"wt");     //muestra texto en las coordenadas 
    setcolor(WHITE);             // cambio de color 
    outtextxy(240,20,"Grafica de senoide");  //muestra texto en las coordenadas 
    
    /* Respuesta de Desfase de V con respecto a I*/
    settextstyle(5,0,3);
    setcolor(LIGHTGRAY);
    outtextxy(550,520,"Desfase de V->i");
    LimpiarBuf(Buffer);  
    IntToString(desfVI,Buffer); 
    outtextxy(620,540,Buffer);
    settextstyle(0,0,2);
    /********************************************/
    setcolor(LIGHTCYAN);         // cambio de color
    rectangle(710,2,780,60);     // Cuadro para  V e I
    setcolor(WHITE);            // cambio de color 
    outtextxy(720,10,"V");      //muestra texto en las coordenadas 
    outtextxy(720,30,"I");      //muestra texto en las coordenadas 
    setcolor(RED);              // cambio de color 
    outtextxy(740,5,"__");      //muestra texto en las coordenadas 
    setcolor(LIGHTBLUE);        // cambio de color 
    outtextxy(740,25,"__");     //muestra texto en las coordenadas 
    
    setcolor(LIGHTGREEN);                  // cambio de color 
    settextstyle(0,0,1);                   //Disminuye el tamaño del Texto de consola
    LimpiarBuf(Buffer);                    //todos los caracteres del Buffer a nulos
    IntToString(xV,Buffer);                // transforma Vm a Text
    outtextxy(10,290-Vm,Buffer);         //muestra valor de Vm en eje "V+"
    LimpiarBuf(Buffer);                    //todos los caracteres del Buffer a nulos
    IntToString(xI,Buffer);                // transforma Im a Text
    outtextxy(10,290-Im,Buffer);         //muestra valor de Im en eje "V+"
    
       
     
    short ang=0;                           // variable para angulo
  switch(tipo)
  {
  case FOR:
    for(;ang<720;ang++)
    {              
    X=ang*M_PI/180;                         // Ang a radianes
    Yv=Vm*sin(X+Vdesf);                     //  coordenada Y del voltaje
    Yi=Im*sin(X+Idesf);                     //  coordenada Y de la corriente
    if((int)Yv==(int)Yi) 
    {line(40+ang-5,300-(int)Yv,40+ang+5,300-(int)Yv); // recta horizontal de cruz
     line(40+ang,300-(int)Yv-5,40+ang,300-(int)Yv+5); // recta vertical de cruz 
    }
    else
    {
    putpixel(40+ang,300-(int)Yv,LIGHTRED);       // Muestra pixel de Voltaje con color rojo
    putpixel(40+ang,300-(int)Yi,LIGHTBLUE);     // Muestra pixel de Cooriente con color azul
    }
    delay(10);
    }        
    break;   
  case WHILE:
       
    while(ang++<720)
    {
    X=ang*M_PI/180;
    Yv=Vm*sin(X+Vdesf);
    Yi=Im*sin(X+Idesf);
    putpixel(40+ang,300-(int)Yv,LIGHTRED);
    putpixel(40+ang,300-(int)Yi,LIGHTBLUE);
    delay(10);           
    }
       break;
  case DO_WHILE:  
       
   do
     {
    X=ang*M_PI/180;
    Yv=Vm*sin(X+Vdesf);
    Yi=Im*sin(X+Idesf);
    putpixel(40+ang,300-(int)Yv,RED);
    putpixel(40+ang,300-(int)Yi,LIGHTBLUE);
    ang++;
    delay(10);             
    }
   while(ang<720);
     break;
          
   default: 
            cleardevice();
            settextstyle(0,0,3);
            setcolor(LIGHTRED);  
            outtextxy(300,300,"Invalido");             
   }                   
     while(!kbhit());     // espera tecla
     closegraph();  //cierra ventana grafica 
   system("PAUSE>NULL");
          
	return 0;
}
