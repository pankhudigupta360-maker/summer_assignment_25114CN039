#include <stdio.h>
#include <string.h>

#define MAXACCOUNTS 100
#define NAMELEN 50

typedef struct {
    int account_number;
    char name[NAMELEN];
    float balance;
    int is_active; 
} BankAccount;
BankAccount accounts[MAXACCOUNTS];
int account_count = 0;
int nextaccno = 1001;
void createAccount();
void deposit();
void withdraw();
void checkBalance();
int findAccount(int acc_no);
void displayMenu();
int main() {
    int choice;
    printf("=== Simple Bank Account System ===\n");
    while (1) {
        displayMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5:
                printf("Thank you for using our bank!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
        printf("\n");
    }
    return 0;
}
void displayMenu() {
    printf("Menu\n");
    printf("1. Create Account\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Check Balance\n");
    printf("5. Exit\n");
}
void createAccount() {
    if (account_count >= MAXACCOUNTS) {
        printf("Bank is full. Cannot create more accounts.\n");
        return;
    }

    BankAccount new_acc;
    new_acc.account_number = nextaccno++;
    new_acc.is_active = 1;
    printf("Enter account holder name: ");
    getchar(); // clear buffer
    fgets(new_acc.name, NAMELEN, stdin);
    new_acc.name[strcspn(new_acc.name, "\n")] = 0; // remove newline
    printf("Enter initial deposit: ₹");
    scanf("%f", &new_acc.balance);
    if (new_acc.balance < 0) {
        printf("Initial deposit cannot be negative.\n");
        nextaccno;
        return;
    }
    accounts[account_count++] = new_acc;
    printf("Account created successfully!\n");
    printf("Account No: %d | Name: %s | Balance: ₹%.2f\n",
           new_acc.account_number, new_acc.name, new_acc.balance);
}
int findAccount(int acc_no) {
    for (int i = 0; i < account_count; i++) {
        if (accounts[i].account_number == acc_no && accounts[i].is_active) {
            return i;
        }
    }
    return -1;
}
void deposit() {
    int acc_no, index;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &acc_no);
    index = findAccount(acc_no);
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }
    printf("Enter amount to deposit: ₹");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Deposit amount must be positive.\n");
        return;
    }
    accounts[index].balance += amount;
    printf("Deposited ₹%.2f successfully.\n", amount);
    printf("New balance: ₹%.2f\n", accounts[index].balance);
}
void withdraw() {
    int acc_no, index;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &acc_no);
    index = findAccount(acc_no);
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }
    printf("Enter amount to withdraw: ₹");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Withdrawal amount must be positive.\n");
        return;
    }

    if (amount > accounts[index].balance) {
        printf("Insufficient balance. Current balance: ₹%.2f\n", accounts[index].balance);
        return;
    }

    accounts[index].balance -= amount;
    printf("Withdrew ₹%.2f successfully.\n", amount);
    printf("New balance: ₹%.2f\n", accounts[index].balance);
}

void checkBalance() {
    int acc_no, index;

    printf("Enter account number: ");
    scanf("%d", &acc_no);

    index = findAccount(acc_no);
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }

    printf("\n--- Account Details ---\n");
    printf("Account No: %d\n", accounts[index].account_number);
    printf("Holder Name: %s\n", accounts[index].name);
    printf("Balance: ₹%.2f\n", accounts[index].balance);
}