/* Trabajo Práctico 3 Preguntas y Respuestas
* Lucas Vázquez K1091
* 26/04/2015
*/

#include <iostream>

using namespace std;
int main(){
	cout<<"Bienvenido al juego de preguntas y respuestas, para finalizar en cualquier momento ingresar la letra 'F', seguida de ENTER \n";
	cout<<"Por cada respuesta correcta se sumara 1 punto y a las 3 respuestas incorrectas se finalizara el juego \n";
	int Puntaje, Errores;
	string Respuesta;
	MENU:cout<<"Elija una tematica para responder, para finalizar ingrese F \n";
	string A ("Futbol"), B ("Arte"), C ("Geografia");
	cout<<"A-"<<A<<" B-"<<B<<" C-"<<C<<endl;
	char ELECCION;
	cin>>ELECCION;
	if((ELECCION=='F')or(ELECCION=='f'))
		goto FINALIZACION;
	else{
				if((ELECCION=='F')or(ELECCION=='f'))
					goto FINALIZACION;
				if((ELECCION=='A')or(ELECCION=='a')){
					cout<<"Eligio "<<A<<" \n";
					cout<<"Pregunta 1 En que ano gano Argentina su primer mundial de futbol? \n";
					cin>>Respuesta;
					if(Respuesta=="1978"){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era 1978 \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					cout<<"Pregunta 2 En que ano gano Argentina su segundo mundial de futbol? \n";
					cin>>Respuesta;
					if(Respuesta=="1986"){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
									goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era 1986 \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					cout<<"Pregunta 3 En que ano Argentina llego por ultima vez a una final de un mundial de futbol? \n";
					cin>>Respuesta;
					if(Respuesta=="2014"){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era 2014 \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					goto MENU;
				};
				if((ELECCION=='B')or(ELECCION=='b')){
					cout<<"Eligio "<<B<<" \n";
					cout<<"Pregunta 1 Que color se obtiene al mezclar azul y amarillo? \n";
					cin>>Respuesta;
					if((Respuesta=="Verde")or(Respuesta=="verde")or(Respuesta=="VERDE")){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era Verde \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					cout<<"Pregunta 2 Que color se obtiene al mezclar azul y rojo? \n";
					cin>>Respuesta;
					if((Respuesta=="Violeta")or(Respuesta=="violeta")or(Respuesta=="VIOLETA")){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era Violeta \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					cout<<"Pregunta 3 Que color se obtiene al mezclar rojo y amarillo? \n";
					cin>>Respuesta;
					if((Respuesta=="Naranja")or(Respuesta=="naranja")or(Respuesta=="NARANJA")){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era Naranja \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					goto MENU;
				};	
				if((ELECCION=='C')or(ELECCION=='c')){
					cout<<"Eligio "<<C<<" \n";
					cout<<"Pregunta 1 Cual es la capital de Cordoba? \n";
					cin>>Respuesta;
					if((Respuesta=="Cordoba")or(Respuesta=="cordoba")or(Respuesta=="CORDOBA")){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era Cordoba \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					cout<<"Pregunta 2 Cual es la capital de Rio Negro? \n";
					cin>>Respuesta;
					if((Respuesta=="Viedma")or(Respuesta=="viedma")or(Respuesta=="VIEDMA")){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era Viedma \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					cout<<"Pregunta 3 Cual es la capital de Chaco? \n";
					cin>>Respuesta;
					if((Respuesta=="Resistencia")or(Respuesta=="resistencia")or(Respuesta=="RESISTENCIA")){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era Resistencia \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
					cout<<"Pregunta 4 Cual es la capital de Misiones? \n";
					cin>>Respuesta;
					if((Respuesta=="Posadas")or(Respuesta=="posadas")or(Respuesta=="POSADAS")){
						Puntaje++;
						cout<<"Respuesta Correcta! \n Llevas "<<Puntaje<<" puntos acumulados \n";	
					}
					else{
						if((Respuesta=="F")or(Respuesta=="f"))
							goto FINALIZACION;
						else{
							Errores++;
							cout<<"Respuesta Incorrecta, llevas "<<Errores<<" error/es \n";
							cout<<"La respuesta correcta era Posadas \n";
							if(Errores==3)
								goto FINALIZACION;
						};
					};
							goto MENU;
				};
	};
	FINALIZACION: 	cout<<"Puntaje Final: "<<Puntaje<<" puntos y "<<Errores<<" errores \n";
					cout<<"FIN DEL JUEGO";
};
