// Proyecto I, Programacion III - Jose Rojas, 11541234

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int valor(string); // Retorna el valor de una carta del deck
int random(int); // Retorna un numero aleatorio dependiendo del tamano del deck
// void generarDeck();

int main()
{
	/* vector<string> deck = {"As de Trebol", "2 de Trebol", "3 de Trebol", "4 de Trebol", "5 de Trebol", "6 de Trebol", "7 de Trebol", "8 de Trebol", "9 de Trebol", "10 de Trebol", "J de Trebol", "Q de Trebol", "K de Trebol", "As de Corazones", "2 de Corazones", "3 de Corazones", "4 de Corazones" , "5 de Corazones", "6 de Corazones", "7 de Corazones", "8 de Corazones", "9 de Corazones", "10 de Corazones", "J de Corazones", "Q de Corazones", "K de Corazones", "As de Espadas", "2 de Espadas", "3 de Espadas", "4 de Espadas", "5 de Espadas", "6 de Espadas", "7 de Espadas", "8 de Espadas", "9 de Espadas", "10 de Espadas", "J de Espadas", "Q de Espadas", "K de Espadas", "As de Diamantes", "2 de Diamantes", "3 de Diamantes", "4 de Diamantes", "5 de Diamantes", "6 de Diamantes", "7 de Diamantes", "8 de Diamantes", "9 de Diamantes", "10 de Diamantes", "J de Diamantes", "Q de Diamantes", "K de Diamantes"}; */
	// vector<int> valores;
	
	vector<string> deck;
	// generarDeck();
	
	// Trebol, 0 - 12
        deck.push_back("A_Trebol");
        deck.push_back("2_Trebol");
        deck.push_back("3_Trebol");
        deck.push_back("4_Trebol");
        deck.push_back("5_Trebol");
        deck.push_back("6_Trebol");
        deck.push_back("7_Trebol");
        deck.push_back("8_Trebol");
        deck.push_back("9_Trebol");
        deck.push_back("10_Trebol");
        deck.push_back("J_Trebol");
        deck.push_back("Q_Trebol");
        deck.push_back("K_Trebol");
        // Corazones, 13 - 25
        deck.push_back("A_Corazones");
        deck.push_back("2_Corazones");
        deck.push_back("3_Corazones");
        deck.push_back("4_Corazones");
        deck.push_back("5_Corazones");
        deck.push_back("6_Corazones");
        deck.push_back("7_Corazones");
        deck.push_back("8_Corazones");
        deck.push_back("9_Corazones");
        deck.push_back("10_Corazones");
        deck.push_back("J_Corazones");
        deck.push_back("Q_Corazones");
        deck.push_back("K_Corazones");
	// Espadas, 26 - 38
        deck.push_back("A_Espadas");
        deck.push_back("2_Espadas");
        deck.push_back("3_Espadas");
        deck.push_back("4_Espadas");
        deck.push_back("5_Espadas");
        deck.push_back("6_Espadas");
        deck.push_back("7_Espadas");
        deck.push_back("8_Espadas");
        deck.push_back("9_Espadas");
        deck.push_back("10_Espadas");
        deck.push_back("J_Espadas");
        deck.push_back("Q_Espadas");
        deck.push_back("K_Espadas");
        // Diamantes, 39 - 51
        deck.push_back("A_Diamantes");
        deck.push_back("2_Diamantes");
        deck.push_back("3_Diamantes");
        deck.push_back("4_Diamantes");
        deck.push_back("5_Diamantes");
        deck.push_back("6_Diamantes");
        deck.push_back("7_Diamantes");
        deck.push_back("8_Diamantes");
        deck.push_back("9_Diamantes");
        deck.push_back("10_Diamantes");
        deck.push_back("J_Diamantes");
        deck.push_back("Q_Diamantes");
        deck.push_back("K_Diamantes");
	
	/* int r, v;
	r = random(deck.size());
	cout << r << endl;
	v = valor(deck[r]);
	cout << deck[r] << " = " << v << endl; */
	
	int contJugador = 0;
	int contCompu = 0;
	
	cout << "¡Bienvenido al Casino de Programacion III!" << endl;
	cout << "Esperamos que este listo para perder dinero, perdon, ¡¡¡para divertirse!!!" << endl;
	cout << "\n¿Cual es su nombre?: ";
	string nombreJugador;
	cin >> nombreJugador;
	
	int op_menu;
	do
	{
		cout << "\nBlackjack [21]" << endl;
		cout << "\t1. Jugar" << endl;
		cout << "\t2. Ver Marcador" << endl;
		cout << "\t3. Salir" << endl;
		cout << "\t¿Que desea hacer, " << nombreJugador << '?' << endl;
		cout << "\tEscoja una opcion: ";
		cin >> op_menu;
		if(op_menu == 1) // Jugar
		{
			if(deck.size() < 52)
			{
				deck.clear();
				// Trebol, 0 - 12
        			deck.push_back("A_Trebol");
        			deck.push_back("2_Trebol");
        			deck.push_back("3_Trebol");
        			deck.push_back("4_Trebol");
       				deck.push_back("5_Trebol");
        			deck.push_back("6_Trebol");
        			deck.push_back("7_Trebol");
        			deck.push_back("8_Trebol");
        			deck.push_back("9_Trebol");
        			deck.push_back("10_Trebol");
        			deck.push_back("J_Trebol");
        			deck.push_back("Q_Trebol");
        			deck.push_back("K_Trebol");
        			// Corazones, 13 - 25
        			deck.push_back("A_Corazones");
        			deck.push_back("2_Corazones");
        			deck.push_back("3_Corazones");
        			deck.push_back("4_Corazones");
        			deck.push_back("5_Corazones");
        			deck.push_back("6_Corazones");
        			deck.push_back("7_Corazones");
        			deck.push_back("8_Corazones");
        			deck.push_back("9_Corazones");
        			deck.push_back("10_Corazones");
        			deck.push_back("J_Corazones");
        			deck.push_back("Q_Corazones");
        			deck.push_back("K_Corazones");
				// Espadas, 26 - 38
        			deck.push_back("A_Espadas");
        			deck.push_back("2_Espadas");
        			deck.push_back("3_Espadas");
        			deck.push_back("4_Espadas");
        			deck.push_back("5_Espadas");
        			deck.push_back("6_Espadas");
        			deck.push_back("7_Espadas");
        			deck.push_back("8_Espadas");
        			deck.push_back("9_Espadas");
        			deck.push_back("10_Espadas");
        			deck.push_back("J_Espadas");
        			deck.push_back("Q_Espadas");
        			deck.push_back("K_Espadas");
        			// Diamantes, 39 - 51
        			deck.push_back("A_Diamantes");
        			deck.push_back("2_Diamantes");
        			deck.push_back("3_Diamantes");
        			deck.push_back("4_Diamantes");
        			deck.push_back("5_Diamantes");
        			deck.push_back("6_Diamantes");
        			deck.push_back("7_Diamantes");
        			deck.push_back("8_Diamantes");
        			deck.push_back("9_Diamantes");
        			deck.push_back("10_Diamantes");
        			deck.push_back("J_Diamantes");
        			deck.push_back("Q_Diamantes");
        			deck.push_back("K_Diamantes");
			}
			
			int R; // numero aleatorio
			
			// Inicialmente, se le reparten 2 cartas al jugador y a la computadora
			// Jugador
        		int puntosJugador = 0;
			vector<string> manoJugador;
			
			R = random(deck.size());
			manoJugador.push_back(deck[R]); // Reparte la primera carta
			deck.erase(deck.begin() + R); // Borra del deck la carta que acaba de ser repartida
			
			R = random(deck.size());
			manoJugador.push_back(deck[R]); // Reparte la segunda carta
			deck.erase(deck.begin() + R);
			
			for(int i = 0; i < manoJugador.size(); i++) // Obtiene la cantidad total de puntos del jugador
				puntosJugador += valor(manoJugador[i]);
			
			bool A = false;
			for(int i = 0; i < manoJugador.size(); i++) // Revisa si hay un A en la mano
			{
				if((manoJugador[i])[0] == 'A')
				{
					A = true;
					break;
				}
			}
			if(A && puntosJugador > 21) // Cambia el valor de A si esta se pasa de 21
				puntosJugador = puntosJugador - 10;
			
			// Computadora
        		vector<string> manoCompu;
        		int puntosCompu = 0;
			
			/* R = random(deck.size());
			manoCompu.push_back(deck[R]);
			deck.erase(deck.begin() + R);
			R = random(deck.size());
			manoCompu.push_back(deck[R]);
			deck.erase(deck.begin() + R); */
			
			if(puntosJugador < 21)
			{
				int op_jugador = 0;
				while(op_jugador != 2)
				{
					if(puntosJugador < 21)
					{
						cout << endl;
						cout << nombreJugador << endl;
						for(int i = 0; i < manoJugador.size(); i++) // Muestra la mano del jugador
							cout << manoJugador[i] << endl;
						cout << "Puntos: " << puntosJugador << endl;
						cout << "\n¿Desea seguir pidiendo cartas " << nombreJugador << '?' << endl;
						cout << "1. Si\n2. No" << endl;
						cout << "Escoja una opcion: ";
						cin >> op_jugador;
						if(op_jugador == 1) // Si
						{
							R = random(deck.size());
							manoJugador.push_back(deck[R]);
							deck.erase(deck.begin() + R);
							
							puntosJugador = 0;
							for(int i = 0; i < manoJugador.size(); i++)
								puntosJugador += valor(manoJugador[i]);
							
							A = false;
                        				for(int i = 0; i < manoJugador.size(); i++)
                        				{
                                				if((manoJugador[i])[0] == 'A')
                                				{
                                        				A = true;
                                        				break;
                                				}
                        				}
                        				if(A && puntosJugador > 21)
                                				puntosJugador = puntosJugador - 10;
						}
						else if(op_jugador == 2) // No
						{
							if(puntosJugador < 21) // Turno de la computadora
							{
								R = random(deck.size());
                        					manoCompu.push_back(deck[R]);
                        					deck.erase(deck.begin() + R);
								
                        					R = random(deck.size());
                        					manoCompu.push_back(deck[R]);
                        					deck.erase(deck.begin() + R);
								
								for(int i = 0; i < manoCompu.size(); i++)
									puntosCompu += valor(manoCompu[i]);
								
								bool B = false; // Validacion para la A de la computadora
                        					for(int i = 0; i < manoCompu.size(); i++)
                        					{
                                					if((manoCompu[i])[0] == 'A')
                                					{
                                        					B = true;
                                        					break;
                                					}
                        					}
                        					if(B && puntosCompu > 21)
                                					puntosCompu = puntosCompu - 10;
								
								if(puntosCompu < 21)
								{
									while(puntosJugador > puntosCompu)
									{
										// if(puntosCompu < 21)
										// {
											cout << endl;
											cout << "Computadora" << endl;
											for(int i = 0; i < manoCompu.size(); i++)
												cout << manoCompu[i] << endl;
											cout << "Puntos: " << puntosCompu << endl;
											
											R = random(deck.size());
                                                                			manoCompu.push_back(deck[R]);
                                                                			deck.erase(deck.begin() + R);
											
											puntosCompu = 0;
											for(int i = 0; i < manoCompu.size(); i++)
												puntosCompu += valor(manoCompu[i]);
											
											B = false;
											for(int i = 0; i < manoCompu.size(); i++)
                                                                			{
                                                                        			if((manoCompu[i])[0] == 'A')
                                                                        			{
                                                                                			B = true;
                                                                                			break;
                                                                        			}
                                                                			}
                                                                			if(B && puntosCompu > 21)
                                                                        			puntosCompu = puntosCompu - 10;
											
											// if(puntosCompu > puntosJugador)
												// break;
										// if(puntosCompu < 21)
										// {
										// }
										if(puntosCompu == 21)
										{
											cout << "\n¡Ha ganado la computadora!" << endl;
											contCompu++;
											cout << "Puntos de la computadora: " << puntosCompu << endl;
											cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
											break;
										}
										else // puntosCompu > 21
										{
											cout << "\n¡Ha ganado " << nombreJugador << '!' << endl;
											contJugador++;
											cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
											cout << "Puntos de la computadora: " << puntosCompu << endl;
											break;
										}
									} // fin del while
									
									cout << endl << puntosJugador << endl;
									cout << endl << puntosCompu << endl;
									
									if(puntosJugador < 21 && puntosCompu < 21)
                                                                	{
                                                                        	if(puntosJugador > puntosCompu)
                                                                        	{
                                                                                	cout << "\n¡Ha ganado " << nombreJugador << '!' << endl;
                                                                                	contJugador++;
                                                                                	cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
                                                                                	cout << "Puntos de la computadora: " << puntosCompu << endl;
											break;
                                                                        	}
                                                                        	else if(puntosCompu > puntosJugador)
                                                                        	{
                                                                                	cout << "\n¡Ha ganado la computadora!" << endl;
                                                                                	contCompu++;
                                                                                	cout << "Puntos de la computadora: " << puntosCompu << endl;
                                                                                	cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
											break;
                                                                        	}
                                                                        	else // empate
                                                                        	{
                                                                                	cout << "\n¡Ha habido un empate!" << endl;
											break;
                                                                     		}
									}
										
								}
								else if(puntosCompu == 21)
								{
									cout << "\n¡Ha ganado la computadora!" << endl;
									contCompu++;
									cout << "Puntos de la computadora: " << puntosCompu << endl;
									cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
									// break;
								}
								else
								{
									cout << "\n¡Ha ganado " << nombreJugador << '!' << endl;
									contJugador++;
									cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
									cout << "Puntos de la computadora: " << puntosCompu << endl;
									// break;
								}
								
								/* if(puntosJugador < 21 && puntosCompu < 21)
                        					{
                                					// cout << "\nhola" << endl;
                                					if(puntosJugador > puntosCompu)
                                					{
                                        					cout << "\n¡Ha ganado " << nombreJugador << '!' << endl;
                                        					contJugador++;
                                       						cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
                                        					cout << "Puntos de la computadora: " << puntosCompu << endl;
                                					}
                                					else if(puntosCompu > puntosJugador)
                                					{
                                        					cout << "\n¡Ha ganado la computadora!" << endl;
                                        					contCompu++;
                                        					cout << "Puntos de la computadora: " << puntosCompu << endl;
                                        					cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
                                					}
                                					else // empate
                                					{
                                        					cout << "\nEsto es insolito... ¡ha habido un empate!" << endl;
                                					}
                        					} */
								
							}
							else if(puntosJugador == 21)
							{
								cout << "\n¡Ha ganado " << nombreJugador << '!' << endl;
                                                		contJugador++;
                                                		cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
                                                		cout << "Puntos de la computadora: " << puntosCompu << endl;
								break;
							}
							else
							{
								cout << "\n¡Ha ganado la computadora!" << endl;
                                				contCompu++;
								cout << "Puntos de la computadora: " << puntosCompu << endl;
                                                		cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
								break;
							}
						}
						else
							cout << "\nDebe escoger una opcion valida." << endl;
					}
					else if(puntosJugador == 21)
					{
						cout << "\n¡Ha ganado " << nombreJugador << '!' << endl;
						contJugador++;
						cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
                                		cout << "Puntos de la computadora: " << puntosCompu << endl;
						break;
					}
					else
					{
						cout << "\n¡Ha ganado la computadora!" << endl;
						contCompu++;
						cout << "Puntos de la computadora: " << puntosCompu << endl;
                               			cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
						break;
					}
				}
			}
			else if(puntosJugador == 21)
			{
				cout << "\n¡Ha ganado " << nombreJugador << '!' << endl;
				contJugador++;
				cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
				cout << "Puntos de la computadora: " << puntosCompu << endl;
			}
			else
			{	
				cout << "\n¡Ha ganado la computadora!" << endl;
				contCompu++;
				cout << "Puntos de la computadora: " << puntosCompu << endl;
				cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
			}
			
			/* // Ninguno de los dos llego a 21; gana el que tenga mas puntos
			if(puntosJugador < 21 && puntosCompu < 21)
			{
				cout << "\nhola" << endl;
				if(puntosJugador > puntosCompu)
				{
					cout << "\n¡Ha ganado " << nombreJugador << '!' << endl;
                                	contJugador++;
                                	cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
                                	cout << "Puntos de la computadora: " << puntosCompu << endl;
				}
				else if(puntosCompu > puntosJugador)
				{
					cout << "\n¡Ha ganado la computadora!" << endl;
                                	contCompu++;
                                	cout << "Puntos de la computadora: " << puntosCompu << endl;
                                	cout << "Puntos de " << nombreJugador << ": " << puntosJugador << endl;
				}
				else // empate
				{
					cout << "\nEsto es insolito... ¡ha habido un empate!" << endl;
				}
			} */
			
		}
		else if(op_menu == 2) // Ver Marcador
		{
			cout << "\nPartidas Ganadas" << endl;
			cout << "\t" << nombreJugador << ": " << contJugador << endl;
			cout << "\tComputadora: " << contCompu << endl;
		}
		else if(op_menu == 3) { } // Salir
		else
			cout << "\nDebe ingresar una opcion valida." << endl;
	} while(op_menu != 3);
	
	return 0;
}

int valor(string carta)
{
	if(carta[0] == 'A')
		return 11;
	else if(carta[0] == '2')
		return 2;
	else if(carta[0] == '3')
		return 3;
	else if(carta[0] == '4')
		return 4;
	else if(carta[0] == '5')
		return 5;
	else if(carta[0] == '6')
		return 6;
	else if(carta[0] == '7')
		return 7;
	else if(carta[0] == '8')
		return 8;
	else if(carta[0] == '9')
		return 9;
	else if(carta[0] == '1')
		return 10;
	else if(carta[0] == 'J')
		return 10;
	else if(carta[0] == 'Q')
		return 10;
	else if(carta[0] == 'K')
		return 10;
	else
		return 0;
}

int random(int t)
{
	srand(time(0));
	return (rand() % t);
}

/* void generarDeck()
{
	// Trebol
	deck[0] = "A de Trebol";
	deck[1] = "2 de Trebol";
	deck[2] = "3 de Trebol";
	deck[3] = "4 de Trebol";
	deck[4] = "5 de Trebol";
	deck[5] = "6 de Trebol";
	deck[6] = "7 de Trebol";
	deck[7] = "8 de Trebol";
	deck[8] = "9 de Trebol";
	deck[9] = "10 de Trebol";
	deck[10] = "J de Trebol";
	deck[11] = "Q de Trebol";
	deck[12] = "K de Trebol";
	// Corazones
	deck[13] = "A de Corazones";
	deck[14] = "2 de Corazones";
	deck[15] = "3 de Corazones";
	deck[16] = "4 de Corazones";
	deck[17] = "5 de Corazones";
	deck[18] = "6 de Corazones";
	deck[19] = "7 de Corazones";
	deck[20] = "8 de Corazones";
	deck[21] = "9 de Corazones";
	deck[22] = "10 de Corazones";
	deck[23] = "J de Corazones";
	deck[24] = "Q de Corazones";
	deck[25] = "K de Corazones";
	// Espadas
	deck[26] = "A de Espadas";
	deck[27] = "2 de Espadas";
	deck[28] = "3 de Espadas";
	deck[29] = "4 de Espadas";
	deck[30] = "5 de Espadas";
	deck[31] = "6 de Espadas";
	deck[32] = "7 de Espadas";
	deck[33] = "8 de Espadas";
	deck[34] = "9 de Espadas";
	deck[35] = "10 de Espadas";
	deck[36] = "J de Espadas";
	deck[37] = "Q de Espadas";
	deck[38] = "K de Espadas";
	// Diamantes
	deck[39] = "A de Diamantes";
	deck[40] = "2 de Diamantes";
	deck[41] = "3 de Diamantes";
	deck[42] = "4 de Diamantes";
	deck[43] = "5 de Diamantes";
	deck[44] = "6 de Diamantes";
	deck[45] = "7 de Diamantes";
	deck[46] = "8 de Diamantes";
	deck[47] = "9 de Diamantes";
	deck[48] = "10 de Diamantes";
	deck[49] = "J de Diamantes";
	deck[50] = "Q de Diamantes";
	deck[51] = "K de Diamantes";
} */
