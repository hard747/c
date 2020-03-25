//EJERCICIO 8 - 1.A
/*
Usando plantilla de clases, realice un programa que determine el 
valor máximo de 3 valores ingresados por teclado en tres diferentes
 casos: para valores de tipo INT, valores de tipo DOUBLE y para
  valores de tipo CHAR. Para ello cree un archivo máximo.h y otro
   máximo.cpp.
*/
//Definimos la plantilla función máximo
template <class T> //declaro la clase T

//Defino la función máximo asociada a la clase T
T maximo(T valor1,T valor2,T valor3)
{
	//el valorMaximo toma inicialmente al valor1
	T valorMaximo=valor1;
	
	//Comparamos el valorMaximo con el valor2
	if (valor2>valorMaximo)
	{
		valorMaximo=valor2;//Si se cumple la condición 
						   //   valorMaximo=valor2
	}	
	//Comparamos el valorMaximo con el valor3
	if (valor3>valorMaximo)
	{
		valorMaximo=valor3;//Si se cumple la condición
						  //    valorMaximo=valor3
	}
	//Devuelve el valorMaximo
	return valorMaximo;
}

