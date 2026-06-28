#include <stdio.h>

int main() {
    int id[50], total[50], avail[50];
    char title[50][30], author[50][30];
    int count = 0, choice, i, bookId, found;

    printf("=== Library Management System ===\n");

    while(1) {
        printf("\n--- Menu ---\n");
        printf("1. Add Book\n");
        printf("2. Show All Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add Book
                if(count >= 50) {
                    printf("Library Full!\n");
                }
                else {
                    id[count] = 101 + count;
                    printf("Enter Title: ");
                    scanf(" %[^\n]", title[count]);
                    printf("Enter Author: ");
                    scanf(" %[^\n]", author[count]);
                    printf("Enter Copies: ");
                    scanf("%d", &total[count]);
                    avail[count] = total[count];
                    count++;
                    printf("Book Added! ID: %d\n", id[count-1]);
                }
                break;

            case 2: // Show All Books
                if(count == 0) {
                    printf("No books in library!\n");
                }
                else {
                    printf("\nID Title Author Total Avail\n");
                    printf("\n");
                    for(i = 0; i < count; i++) {
                        printf("%d %s %s %d %d\n",
                               id[i], title[i], author[i], total[i], avail[i]);
                    }
                }
                break;

            case 3: // Issue Book
                printf("Enter Book ID: ");
                scanf("%d", &bookId);
                found = 0;

                for(i = 0; i < count; i++) {
                    if(id[i] == bookId) {
                        found = 1;
                        if(avail[i] > 0) {
                            avail[i] = avail[i] - 1;
                            printf("Book Issued: %s\n", title[i]);
                            printf("Copies Left: %d\n", avail[i]);
                        }
                        else {
                            printf("No copies available!\n");
                        }
                        break;
                    }
                }

                if(found == 0) {
                    printf("Book ID not found!\n");
                }
                break;

            case 4: // Return Book
                printf("Enter Book ID: ");
                scanf("%d", &bookId);
                found = 0;

                for(i = 0; i < count; i++) {
                    if(id[i] == bookId) {
                        found = 1;
                        if(avail[i] < total[i]) {
                            avail[i] = avail[i] + 1;
                            printf("Book Returned: %s\n", title[i]);
                            printf("Available Now: %d\n", avail[i]);
                        }
                        else {
                            printf("All copies already in library!\n");
                        }
                        break;
                    }
                }

                if(found == 0) {
                    printf("Book ID not found!\n");
                }
                break;

            case 5: // Exit
                printf("Thank You! Visit Again\n");
                return 0;

            default:
                printf("Invalid Choice! Enter 1-5\n");
        }
    }

    return 0;
}