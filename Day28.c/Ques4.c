#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CONTACTS 100
#define NAME_LEN 50
#define PHONE_LEN 15
#define EMAIL_LEN 50

typedef struct {
    int id;
    char name[NAME_LEN];
    char phone[PHONE_LEN];
    char email[EMAIL_LEN];
    int is_active; // 1 = active, 0 = deleted
} Contact;

Contact contacts[MAX_CONTACTS];
int contact_count = 0;
int next_id = 1001;

// Function declarations
void addContact();
void viewAllContacts();
void searchContact();
void updateContact();
void deleteContact();
void displayMenu();
int findContactById(int id);

int main() {
    int choice;

    printf("=== Contact Management System ===\n");

    while (1) {
        displayMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addContact(); break;
            case 2: viewAllContacts(); break;
            case 3: searchContact(); break;
            case 4: updateContact(); break;
            case 5: deleteContact(); break;
            case 6:
                printf("Exiting... Data will be lost!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

void displayMenu() {
    printf("\n--- Menu ---\n");
    printf("1. Add New Contact\n");
    printf("2. View All Contacts\n");
    printf("3. Search Contact\n");
    printf("4. Update Contact\n");
    printf("5. Delete Contact\n");
    printf("6. Exit\n");
}

void addContact() {
    if (contact_count >= MAX_CONTACTS) {
        printf("Contact list full. Cannot add more.\n");
        return;
    }

    Contact new_contact;
    new_contact.id = next_id++;
    new_contact.is_active = 1;

    getchar(); // clear buffer
    printf("Enter name: ");
    fgets(new_contact.name, NAME_LEN, stdin);
    new_contact.name[strcspn(new_contact.name, "\n")] = 0;

    printf("Enter phone: ");
    fgets(new_contact.phone, PHONE_LEN, stdin);
    new_contact.phone[strcspn(new_contact.phone, "\n")] = 0;

    printf("Enter email: ");
    fgets(new_contact.email, EMAIL_LEN, stdin);
    new_contact.email[strcspn(new_contact.email, "\n")] = 0;

    contacts[contact_count++] = new_contact;
    printf("\nContact added successfully!\n");
    printf("ID: %d | Name: %s\n", new_contact.id, new_contact.name);
}

void viewAllContacts() {
    int found = 0;
    printf("\n--- All Contacts ---\n");
    printf("ID Name Phone Email\n");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < contact_count; i++) {
        if (contacts[i].is_active) {
            printf("%-6d %-20s %-15s %s\n",
                   contacts[i].id,
                   contacts[i].name,
                   contacts[i].phone,
                   contacts[i].email);
            found = 1;
        }
    }

    if (!found)
        printf("No contacts found.\n");
}

int findContactById(int id) {
    for (int i = 0; i < contact_count; i++) {
        if (contacts[i].id == id && contacts[i].is_active) {
            return i;
        }
    }
    return -1;
}

void searchContact() {
    int choice, id, found = 0;
    char search_name[NAME_LEN];

    printf("\nSearch by:\n1. ID\n2. Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter ID: ");
        scanf("%d", &id);
        int index = findContactById(id);
        if (index!= -1) {
            printf("\nContact Found:\n");
            printf("ID: %d\nName: %s\nPhone: %s\nEmail: %s\n",
                   contacts[index].id, contacts[index].name,
                   contacts[index].phone, contacts[index].email);
            found = 1;
        }
    }
    else if (choice == 2) {
        getchar();
        printf("Enter name to search: ");
        fgets(search_name, NAME_LEN, stdin);
        search_name[strcspn(search_name, "\n")] = 0;

        printf("\n--- Search Results ---\n");
        for (int i = 0; i < contact_count; i++) {
            if (contacts[i].is_active && strstr(contacts[i].name, search_name)!= NULL) {
                printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                       contacts[i].id, contacts[i].name,
                       contacts[i].phone, contacts[i].email);
                found = 1;
            }
        }
    }

    if (!found)
        printf("Contact not found.\n");
}

void updateContact() {
    int id, index;
    printf("Enter ID of contact to update: ");
    scanf("%d", &id);

    index = findContactById(id);
    if (index == -1) {
        printf("Contact not found.\n");
        return;
    }

    printf("\nCurrent Details:\n");
    printf("Name: %s\nPhone: %s\nEmail: %s\n",
           contacts[index].name, contacts[index].phone, contacts[index].email);

    getchar();
    printf("\nEnter new name [Press Enter to keep same]: ");
    char new_name[NAME_LEN];
    fgets(new_name, NAME_LEN, stdin);
    if (new_name[0]!= '\n') {
        new_name[strcspn(new_name, "\n")] = 0;
        strcpy(contacts[index].name, new_name);
    }

    printf("Enter new phone [Press Enter to keep same]: ");
    char new_phone[PHONE_LEN];
    fgets(new_phone, PHONE_LEN, stdin);
    if (new_phone[0]!= '\n') {
        new_phone[strcspn(new_phone, "\n")] = 0;
        strcpy(contacts[index].phone, new_phone);
    }

    printf("Enter new email [Press Enter to keep same]: ");
    char new_email[EMAIL_LEN];
    fgets(new_email, EMAIL_LEN, stdin);
    if (new_email[0]!= '\n') {
        new_email[strcspn(new_email, "\n")] = 0;
        strcpy(contacts[index].email, new_email);
    }

    printf("\nContact updated successfully!\n");
}

void deleteContact() {
    int id, index;
    char confirm;

    printf("Enter ID of contact to delete: ");
    scanf("%d", &id);

    index = findContactById(id);
    if (index == -1) {
        printf("Contact not found.\n");
        return;
    }

    printf("\nDelete this contact?\n");
    printf("Name: %s | Phone: %s\n", contacts[index].name, contacts[index].phone);
    printf("Confirm [y/n]: ");
    getchar();
    scanf("%c", &confirm);

    if (confirm == 'y' || confirm == 'Y') {
        contacts[index].is_active = 0;
        printf("Contact deleted successfully.\n");
    } else {
        printf("Deletion cancelled.\n");
    }
}