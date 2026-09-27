#include <iostream>
#include <string>
using namespace std;

const int MAX_ORDERS = 10;

// Order data arrays
string customerName[MAX_ORDERS];
string foodItem[MAX_ORDERS];
string address[MAX_ORDERS];
string status[MAX_ORDERS];

int orderCount = 0;

// Function to check valid address
bool isValidAddress(string addr)
{
    if (addr.length() >= 5)
        return true;
    else
        return false;
}

// Function to add order
void addOrder()
{
    if (orderCount >= MAX_ORDERS)
    {
        cout << "Order limit reached!\n";
        return;
    }

    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, customerName[orderCount]);

    cout << "Enter food item: ";
    getline(cin, foodItem[orderCount]);

    cout << "Enter delivery address: ";
    getline(cin, address[orderCount]);

    if (!isValidAddress(address[orderCount]))
    {
        cout << "Invalid address! Order not added.\n";
        return;
    }

    status[orderCount] = "Pending";
    orderCount++;

    cout << "Order added successfully!\n";
}

// Function to display orders
void displayOrders()
{
    if (orderCount == 0)
    {
        cout << "No orders available.\n";
        return;
    }

    for (int i = 0; i < orderCount; i++)
    {
        cout << "\nOrder ID: " << i + 1 << endl;
        cout << "Customer Name: " << customerName[i] << endl;
        cout << "Food Item: " << foodItem[i] << endl;
        cout << "Address: " << address[i] << endl;
        cout << "Delivery Status: " << status[i] << endl;
    }
}

// Function to update delivery status
void updateStatus()
{
    int id;
    cout << "Enter Order ID to update status: ";
    cin >> id;

    if (id < 1 || id > orderCount)
    {
        cout << "Invalid Order ID!\n";
        return;
    }

    cout << "Enter new status (Pending / Delivered): ";
    cin >> status[id - 1];

    cout << "Status updated successfully!\n";
}

// Function to remove order
void removeOrder()
{
    int id;
    cout << "Enter Order ID to remove: ";
    cin >> id;

    if (id < 1 || id > orderCount)
    {
        cout << "Invalid Order ID!\n";
        return;
    }

    for (int i = id - 1; i < orderCount - 1; i++)
    {
        customerName[i] = customerName[i + 1];
        foodItem[i] = foodItem[i + 1];
        address[i] = address[i + 1];
        status[i] = status[i + 1];
    }

    orderCount--;
    cout << "Order removed successfully!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Food Delivery System ---\n";
        cout << "1. Add Order\n";
        cout << "2. Display Orders\n";
        cout << "3. Update Delivery Status\n";
        cout << "4. Remove Order\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addOrder();
            break;
        case 2:
            displayOrders();
            break;
        case 3:
            updateStatus();
            break;
        case 4:
            removeOrder();
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
