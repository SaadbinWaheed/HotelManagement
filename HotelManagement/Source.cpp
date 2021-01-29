#include <iostream>;
using namespace std;

void checkin(int rooms[5], int residents[5]) {
	int freeRoom;
	int i;
	for (i = 0; i < 5; i++) {
		if (residents[i] == 0) {
			freeRoom = rooms[i];
			break;
		}
	}
	cout << "Checking in customer to room: " << freeRoom << endl;
	cout << "Enter number of people: ";
	int people;
	cin >> people;
	residents[i] = people;
}

int main() {
	int rooms[5] = { 100,101,102,103,104 };
	int residents[5] = { 1,0,2,0,3 };
	while (1) {
		
		char input;

		cout << "Enter 'A' to check-in new customer \n" << "Enter 'B' to checkout an existing customer\n"<<
				"or Enter 'V' to view all rooms\n";

		cin >> input;
		switch (input) {
		case 'A':
			checkin(rooms, residents);
			break;
		case 'B':
			cout << "Enter room number being cleared: ";
			int room;
			cin >> room;
			for (int i = 0; i < 5; i++) {
				if (rooms[i] == room) {
					cout << "Clearing room " << room<<endl;
					residents[i] = 0;
				}
			}
			break;
		case 'V':
			cout << "Free rooms: \n";
			for (int i = 0; i < 5; i++) {
				if (residents[i] == 0) {
					cout << rooms[i] << endl;
				}
			}
			cout << "Occupied rooms: \n";
			for (int i = 0; i < 5; i++) {
				if (residents[i] != 0) {
					cout << rooms[i] << endl;
				}
			}
			break;
		}
		cout << "\n\n--------------------\n\n";
	}
	return 0;
}