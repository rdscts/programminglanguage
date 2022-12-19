#include<iostream>
using namespace std;
#define size 100

class airlines
{
public:
	airlines();
	void main_menu();
	void reserve_seats();
	void cancel_reservation();
	void transfer_seats();
	void search_passenger();
	


private:
	struct node
	{
		string fname, lname, ID, phone_num, menu;
		int reserve_num, seat_num;


		node *next;

	};

	node *start;

	node *temp, *temp2;

}airlineReserve;


