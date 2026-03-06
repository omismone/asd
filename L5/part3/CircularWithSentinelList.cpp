#include "CircularWithSentinelList.h"

void createEmpty(CircularWithSentinel& list)
{
   cell* aux = new cell;
   aux->next = aux;
   list = aux;
}

void headInsert(CircularWithSentinel& list, DataType new_value) {
	cell* aux = new cell;
	aux->payload = new_value;
	cell* tmp = list->next;
	list->next = aux;
	aux->next = tmp;
}

void tailInsert(CircularWithSentinel& list, DataType new_value) {
	cell* aux = new cell;
	aux->payload = new_value;
	aux->next = list;

	cell* tmp = list;
	while(tmp->next != list)
		tmp = tmp->next;
	tmp->next = aux;
}

/* L'implementazione delle funzioni di lettura e scrittura è pensata per leggere da/scrivere su file qualunque; questo rende le funzioni molto potenti ma anche complesse da comprendere: la comprensione di queste funzioni non è l'obiettivo dell'esercizio! Ignoratele, assumendo che funzionino, e concentratevi solo sulla struttura dati e sull'inserimento. */
 
bool readData(std::istream& input_stream, DataType& value)
{
	string line;
	getline(input_stream, line);
	istringstream s(line);
	if (s >> value)	return true;
	return false;
}


void writeData(std::ostream& output_stream, DataType value)
{
	output_stream << value;
}

void printList(std::ostream& output_stream, CircularWithSentinel list) {
	cell* aux = list->next; // devo saltare la sentinella
	while (aux != list) {
		writeData(output_stream, aux->payload);
		aux = aux->next;
		output_stream << std::endl;
	}
	 output_stream << std::endl;
}

void readList(std::istream& input_stream, CircularWithSentinel& list) {
	// list = emptyList;
	createEmpty(list); // non posso usare list = emptyList; sono liste con sentinella!!!
	DataType d;
	while (readData(input_stream, d)) {
		headInsert(list, d);
		//tailInsert(list, d);
	}
}
