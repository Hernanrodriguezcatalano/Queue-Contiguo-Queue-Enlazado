#include "stdafx.h"
#include <cassert>
#include <iostream>
#include "QueueContiguo.h"
#include <Windows.h>

using namespace std;


static queue Tqueue;
static int a = 0;
static int c;
int main() {
	cout << "Seleccione la funcion a testear:" << endl << "1.Enqueue" << endl << "2.Dequeue" << endl << "3.First" << endl;
	cin >> c;
	assert(c > 0 && c < 4);
	switch (c)
	{
	case 1:
		while (a < M)
		{
			enQueue(Tqueue, rand() % 100);
			enQueue(Tqueue, rand() % 100);
			cout << " valor "<<Tqueue.b[a] << " Front "<<Tqueue.front << " Rear "<<Tqueue.rear <<" Size "<< Tqueue.size_t;
			deQueue(Tqueue);
			++a;
		}
		cin >> a;
		cout << "Intentando encolar un elemento a la Queue llena...";
		Sleep(3000);
		enQueue(Tqueue, rand() % 100);
	case 2:
		vaciarQueue(Tqueue);
		cout << "Intentando desencolar un elemento a la Queue vacia...";
		Sleep(3000);
		deQueue(Tqueue);
	case 3:
		vaciarQueue(Tqueue);
		cout << "Primer elemento de la Queue vacia...";
		Sleep(3000);
		first(Tqueue);

	}
}
