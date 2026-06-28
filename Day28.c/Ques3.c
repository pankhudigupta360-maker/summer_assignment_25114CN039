#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 10
#define NAME_LEN 50

typedef struct {
    int seat_no;
    int is_booked; // 0 = available, 1 = booked
    char customer_name[NAME_LEN];
} Seat;
typedef struct {
    int booking_id;
    int seat_no;
    char customer_name[NAME_LEN];
} Booking;
Seat theatre[ROWS][COLS];
Booking bookings[ROWS * COLS];
int booking_count = 0;
int next_booking_id = 1001;
// Function declarations
void initializeSeats();
void displaySeats();
void bookTicket();
void cancelTicket();
void viewBookings();
void displayMenu();
int main() {
    int choice;
    initializeSeats();
    printf("=== Ticket Booking System ===\n");
    while (1) {
        displayMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: displaySeats(); break;
            case 2: bookTicket(); break;
            case 3: cancelTicket(); break;
            case 4: viewBookings(); break;
            case 5:
                printf("Thank you! Visit again.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
void displayMenu() {
    printf("\n--- Menu ---\n");
    printf("1. View Seat Layout\n");
    printf("2. Book Ticket\n");
    printf("3. Cancel Ticket\n");
    printf("4. View All Bookings\n");
    printf("5. Exit\n");
}
void initializeSeats() {
    int seat_num = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            theatre[i][j].seat_no = seat_num++;
            theatre[i][j].is_booked = 0;
            strcpy(theatre[i][j].customer_name, "");
        }
    }
}
void displaySeats() {
    printf("\n--- Seat Layout ---\n");
    printf("0 = Available, X = Booked\n\n");
    printf(" ");
    for (int j = 1; j <= COLS; j++) {
        printf("%3d ", j);
    }
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        printf("R%d ", i + 1);
        for (int j = 0; j < COLS; j++) {
            if (theatre[i][j].is_booked)
                printf(" [X]");
            else
                printf("%4d", theatre[i][j].seat_no);
        }
        printf("\n");
    }
}
void bookTicket() {
    int seat_no, found = 0;
    char name[NAME_LEN];
    displaySeats();
    printf("\nEnter seat number to book: ");
    scanf("%d", &seat_no);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (theatre[i][j].seat_no == seat_no) {
                found = 1;
                if (theatre[i][j].is_booked) {
                    printf("Sorry, seat %d is already booked.\n", seat_no);
                    return;
                }
                getchar(); // clear buffer
                printf("Enter customer name: ");
                fgets(name, NAME_LEN, stdin);
                name[strcspn(name, "\n")] = 0;
                theatre[i][j].is_booked = 1;
                strcpy(theatre[i][j].customer_name, name);
                bookings[booking_count].booking_id = next_booking_id++;
                bookings[booking_count].seat_no = seat_no;
                strcpy(bookings[booking_count].customer_name, name);
                booking_count++;

                printf("\nTicket booked successfully!\n");
                printf("Booking ID: %d\n", next_booking_id - 1);
                printf("Seat No: %d | Name: %s\n", seat_no, name);
                return;
            }
        }
    }
    if (!found)
        printf("Invalid seat number.\n");
}
void cancelTicket() {
    int booking_id, found = 0;
    printf("Enter Booking ID to cancel: ");
    scanf("%d", &booking_id);
    for (int i = 0; i < booking_count; i++) {
        if (bookings[i].booking_id == booking_id) {
            found = 1;
            int seat_no = bookings[i].seat_no;
            for (int r = 0; r < ROWS; r++) {
                for (int c = 0; c < COLS; c++) {
                    if (theatre[r][c].seat_no == seat_no) {
                        theatre[r][c].is_booked = 0;
                        strcpy(theatre[r][c].customer_name, "");
                    }
                }
            }
            printf("Booking ID %d cancelled successfully.\n", booking_id);
            printf("Seat %d is now available.\n", seat_no);
            for (int j = i; j < booking_count - 1; j++) {
                bookings[j] = bookings[j + 1];
            }
            booking_count--;
            return;
        }
    }
    if (!found)
        printf("Booking ID not found.\n");
}
void viewBookings() {
    if (booking_count == 0) {
        printf("No bookings yet.\n");
        return;
    }
    printf("\n--- All Bookings ---\n");
    printf("ID Seat Customer Name\n");
    printf("\n");
    for (int i = 0; i < booking_count; i++) {
        printf("%-6d %-6d %s\n",
               bookings[i].booking_id,
               bookings[i].seat_no,
               bookings[i].customer_name);
    }
}