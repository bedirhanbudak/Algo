#include <stdio.h>

typedef struct {

	int id;
	char name[20];
	char title[20];
	struct user* next;

}user;

int main() {

	user* head = NULL;
	user* p = NULL;
	int choice = 0;

	while (choice != 3) {

		printf("\nWhat would you like to do?\n(1) Add a new user\n(2) Display all users\n(3) Exit\n");
		scanf("%d", &choice);

		switch (choice) {

		case 1:

			if (p == NULL) {

				p = (user*)malloc(sizeof(user));
				head = p;
			}

			else {

				while (p->next != NULL) {
					p = p->next;
				}

				p->next = (user*)malloc(sizeof(user));
				p = p->next;
			}

			printf("\nEnter user id: ");
			scanf("%d", &p->id);

			printf("Enter user name: ");
			scanf("%s", &p->name);;

			printf("Enter user title: ");
			scanf("%s", &p->title);

			p->next = NULL;

			break;

		case 2:

			while (p != NULL) {

				printf("\nUser id: %d\nUser name: %s\nUser title: %s\n", p->id, p->name, p->title);
				p = p->next;
			}

			break;
		}

		p = head;
	}

	return 0;
}
