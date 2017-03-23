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
	
	int r, v;
	r = random(deck.size());
	cout << r << endl;
	v = valor(deck[r]);
	cout << deck[r] << " = " << v << endl;
	
	return 0;
}

int valor(string carta)
{
	if(carta[0] == 'A')
		return 1;
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
