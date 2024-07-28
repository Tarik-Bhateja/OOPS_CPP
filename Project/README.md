# Hotel Management System

<img height="360px" width="510px" src="https://img.freepik.com/free-vector/organic-flat-new-normal-hotels_23-2148929457.jpg?w=1060&t=st=1722186932~exp=1722187532~hmac=1cbc2ac2cd9302be30959163d99f06c00a70f14dbaa439a2fd3e19fbe975c573">

This project is a simple Hotel Management System implemented in C++ that demonstrates various object-oriented programming concepts. It allows users to manage rooms, check in and check out customers, and view room availability and customer information.

## Features

- **Manage Rooms**: Add and search for rooms with details such as type, size, AC/Non-AC, and rent.
- **Customer Check-In**: Assign a customer to a room by entering their details and updating the room status.
- **Customer Check-Out**: Calculate the bill amount based on the number of days stayed and room rent, and update the room status to available.
- **View Available Rooms**: Display all rooms that are currently available.
- **Search for Customers**: Search for a customer by name and display their booking details.
- **Guest Summary Report**: Generate a summary report of all guests currently checked in.

## Classes and Data Members

### Customer Class
- `name`: Customer's name
- `address`: Customer's address
- `phone`: Customer's phone number
- `from_date`: Start date of booking
- `to_date`: End date of booking
- `payment_advance`: Advance payment made by the customer
- `booking_id`: Unique booking ID for the customer

### Room Class
- `type`: Room type (Supreme/Normal)
- `stype`: Room size (Big/Small)
- `ac`: Whether the room is AC or Non-AC
- `roomNumber`: Unique room number
- `rent`: Daily rent of the room
- `status`: Room availability status (0 for available, 1 for reserved)
- `cust`: Customer object associated with the room

### HotelMgnt Class
- Inherits from `Room`
- `checkIn()`: Checks in a customer to a specified room
- `getAvailRoom()`: Displays all available rooms
- `searchCustomer(const string &pname)`: Searches for a customer by name
- `checkOut(int roomNum)`: Checks out a customer from a specified room
- `guestSummaryReport()`: Displays a summary report of all guests

## Running the Program

1. Compile the program using a C++ compiler.
2. Run the executable to interact with the hotel management system through the menu-driven interface.

## Example Usage

- Add rooms by entering room details.
- Check in customers by entering their details and assigning them to a room.
- View available rooms to see which rooms are currently available.
- Search for customers by name to see their booking details.
- Check out customers by entering the room number and calculating the bill amount.

## Concepts Demonstrated

- **Encapsulation**: Data members are kept private and accessed or modified through public member functions.
- **Inheritance**: The `HotelMgnt` class inherits from the `Room` class to reuse and extend its functionalities.
- **Input/Output Operations**: Uses `cin`, `cout`, and `getline` for user input and output.
- **Array Management**: Manages room objects using a global array `rooms` and the `roomCount` variable.
- **Control Flow**: Uses control flow constructs such as `if-else`, `for` loops, and `do-while` loops.


