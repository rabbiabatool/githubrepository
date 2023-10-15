
#include <iostream>
#include <string>
using namespace std;

bool char_in_numeral(string num) {
    for (int i = 0; num[i] != '\0'; i++) {
        if (!isdigit(num[i])) {
            cout << "Don't write characters. Write a four-digit number!" << endl;
            return true;
        }
    }
    return false;
}

bool negative_numeral(string num) {
    int num_i = stoi(num);
    if (num_i < 0) {
        cout << "Enter a positive four-digit number" << endl;
        return true;
    }
    return false;
}

bool incomplete_fourdigit(string num) {
    if (num.length() != 4) {
        cout << "Enter a four-digit number!" << endl;
        return true;
    }
    return false;
}

bool check_zero_at_start(string data) {
    if (data[0] == '0') {
        cout << "Don't write '0' at the start of the number!" << endl;
        return true;
    }
    return false;
}

bool check_time(string time) {
    int arrival_int = stoi(time);
    if (arrival_int < 8 || arrival_int > 24) {
        cout << "Arrival and leaving time is from 8 to 24" << endl;
        return true;
    }
    return false;
}

bool set_hours1to8(string hr) {
    int hr_int = stoi(hr);
    if (hr_int < 1 || hr_int > 8) {
        return true;
    }
    return false;
}

bool set_hours1to2(string hr) {
    int hr_int = stoi(hr);
    if (hr_int < 1 || hr_int > 2) {
        return true;
    }
    return false;
}

bool set_hours1to4(string hr) {
    int hr_int = stoi(hr);
    if (hr_int < 1 || hr_int > 4) {
        return true;
    }
    return false;
}

class Customer {
    string day;
    int arrival_time;
    int leaving_time;
    int num_of_hours;
    int frequent_num;
    static double total_amount;

public:
    Customer* prevptr;
    Customer* nextptr;

    Customer(string day, int frequent) {
        this->day = day;
        arrival_time = 0;
        leaving_time = 0;
        num_of_hours = 0;
        frequent_num = frequent;
        prevptr = 0;
        nextptr = 0;
    }

    void set_arrivaltime(string arrival) {
        arrival_time = stoi(arrival);
    }

    void set_leavingtime(string leaving) {
        leaving_time = stoi(leaving);
    }

    void show_discount() {
        cout << "If your arrival and leaving time is 8:00 to 15:59, you will get a discount of 10%" << endl;
        cout << "If your arrival and leaving time is 16:00 to midnight or 24:00, you will get a discount of 50%" << endl;
        cout << "If your arrival is before 24:00 and leaving time is after 24:00, you will get a discount of 40%" << endl;
    }

    void set_hours() {
        string hour;
        int i = 0;
        bool validation1 = true;
        bool validation2 = true;

        if (day == "sunday" || day == "Sunday") {
            cout << "You can enter hours between 1 to 8" << endl;
            cin >> hour;
            while (validation1 != false && validation2 != false) {
                if (i > 1) {
                    cout << "You can enter hours between 1 to 8" << endl;
                    cin >> hour;
                }
                validation1 = char_in_numeral(hour);
                validation2 = set_hours1to8(hour);
                i++;
            }

            int hr_int = stoi(hour);
            num_of_hours = hr_int;
        }
        if (day == "monday" || day == "Monday")
        {
            cout << "You can enter hours between 1 to 2" << endl;
            cin >> hour;
            while (validation1 != false && validation2 != false)
            {
                if (i > 1)
                {
                    cout << "You can enter hours between 1 to 8" << endl;
                    cin >> hour;
                }
                validation1 = char_in_numeral(hour);
                validation2 = set_hours1to8(hour);
                i++;
            }

            int hr_int = stoi(hour);
            num_of_hours = hr_int;
        }
        if (day == "tuesday" || day == "Tuesday")
        {
            cout << "You can enter hours between 1 to 2" << endl;
            cin >> hour;
            while (validation1 != false && validation2 != false)
            {
                if (i > 1)
                {
                    cout << "You can enter hours between 1 to 8" << endl;
                    cin >> hour;
                }
                validation1 = char_in_numeral(hour);
                validation2 = set_hours1to8(hour);
                i++;
            }

            int hr_int = stoi(hour);
            num_of_hours = hr_int;
        }
        if (day == "wednesday" || day == "Wednesday")
        {
            cout << "You can enter hours between 1 to 2" << endl;
            cin >> hour;
            while (validation1 != false && validation2 != false)
            {
                if (i > 1)
                {
                    cout << "You can enter hours between 1 to 8" << endl;
                    cin >> hour;
                }
                validation1 = char_in_numeral(hour);
                validation2 = set_hours1to8(hour);
                i++;
            }

            int hr_int = stoi(hour);
            num_of_hours = hr_int;
        }
        if (day == "thursday" || day == "Thursday")
        {
            cout << "You can enter hours between 1 to 2" << endl;
            cin >> hour;
            while (validation1 != false && validation2 != false)
            {
                if (i > 1)
                {
                    cout << "You can enter hours between 1 to 8" << endl;
                    cin >> hour;
                }
                validation1 = char_in_numeral(hour);
                validation2 = set_hours1to8(hour);
                i++;
            }

            int hr_int = stoi(hour);
            num_of_hours = hr_int;
        }
        if (day == "friday" || day == "Friday")
        {
            cout << "You can enter hours between 1 to 2" << endl;
            cin >> hour;
            while (validation1 != false && validation2 != false)
            {
                if (i > 1)
                {
                    cout << "You can enter hours between 1 to 8" << endl;
                    cin >> hour;
                }
                validation1 = char_in_numeral(hour);
                validation2 = set_hours1to8(hour);
                i++;
            }

            int hr_int = stoi(hour);
            num_of_hours = hr_int;
        }
        if (day == "saturday" || day == "Saturday")
        {
            cout << "You can enter hours between 1 to 4" << endl;
            while (validation1 != false && validation2 != false)
            {
                if (i > 1)
                {
                    cout << "You can enter hours between 1 to 8" << endl;
                    cin >> hour;
                }
                validation1 = char_in_numeral(hour);
                validation2 = set_hours1to8(hour);
                i++;
            }

            int hr_int = stoi(hour);
            num_of_hours = hr_int;
        }

    }

    string getDay() {
        return day;
    }

    int getArrivaltime() {
        return arrival_time;
    }

    int getLeavingtime() {
        return leaving_time;
    }

    int getNumofhours() {
        return num_of_hours;
    }

    int getFrequent_num() {
        return frequent_num;
    }

    void set_Total(double total) {
    
        total_amount += total;
        
    }

    double get_Total() {
        return total_amount;
    }
};

double Customer::total_amount = 0.00;

class Parkinglodge {
    Customer* firstCar;
    Customer* lastCar;
    string customer_day;
    int customer_arrivaltime;
    int cus_numofhours;
    int cus_frequentnum;
    int customer_leavingtime;
    double pricePerhour;
    double discount1 = 0.5;
    double discount2 = 0.1;
    double discount3 = 0.4;

public:
    Customer* accessCar;
    Parkinglodge() {
        firstCar = 0;
        lastCar = 0;
        accessCar = 0;
        customer_day = " ";
        customer_arrivaltime = 0;
        customer_leavingtime = 0;
        pricePerhour = 0.00;
        cus_numofhours = 0;
        cus_frequentnum = 0;
    }

    void parking(Customer* customer) {
        if (firstCar == 0) {
            firstCar = customer;
            lastCar = customer;
        }
        else {
            lastCar->nextptr = customer;
            customer->prevptr = lastCar;
            lastCar = customer;
        }
    }

    void show_price_per_hour() {
        customer_day = accessCar->getDay();
        cus_numofhours = accessCar->getNumofhours();
        if (customer_day == "sunday" || customer_day == "Sunday") {
            pricePerhour = cus_numofhours * 2.0;
            cout << "Price per hour is: " << endl;
            cout << "2.0" << endl;
        }
        
        if (customer_day == "monday" || customer_day == "Monday")
        {
            pricePerhour = cus_numofhours * 10.00;
            cout << "Price per hour is :" << endl;
            cout << "10.00" << endl;
        }
        if (customer_day == "tuesday" || customer_day == "Tuesday")
        {
            pricePerhour = cus_numofhours * 10.00;
            cout << "Price per hour is :" << endl;
            cout << "10.00" << endl;
        }
        if (customer_day == "wednesday" || customer_day == "Wednesday")
        {
            pricePerhour = cus_numofhours * 10.00;
            cout << "Price per hour is :" << endl;
            cout << "10.00" << endl;
        }
        if (customer_day == "thursday" || customer_day == "Thursday")
        {
            pricePerhour = cus_numofhours * 10.00;
            cout << "Price per hour is :" << endl;
            cout << "10.00" << endl;
        }
        if (customer_day == "friday" || customer_day == "Friday")
        {
            pricePerhour = cus_numofhours * 10.00;
            cout << "Price per hour is :" << endl;
            cout << "10.00" << endl;
        }
        if (customer_day == "saturday" || customer_day == "Saturday")
        {
            pricePerhour = cus_numofhours * 3.00;
            cout << "Price per hour is :" << endl;
            cout << "3.00" << endl;
        }
    }

    void show_total_price() {
        if (accessCar) {
            double total = 0.0;
            int arrivaltime = accessCar->getArrivaltime();
            int leavingtime = accessCar->getLeavingtime();

            // Check if the customer's frequent parking number is valid
            if (check_digit()) {
                if ((arrivaltime >= 8 && arrivaltime <= 15) && (leavingtime >= 8 && leavingtime <= 15)) {
                    total = double(pricePerhour - (pricePerhour * 0.1));
                }
                if ((arrivaltime >=16 && arrivaltime <= 24) && (leavingtime >= 16 && leavingtime <= 24)) {
                    total = double(pricePerhour - (pricePerhour * 0.5));
                }
                if ((arrivaltime >= 8 && arrivaltime <= 15) && (leavingtime >= 16 && leavingtime <= 24)) {
                    total = double(pricePerhour - (pricePerhour * 0.4));
                }
                

                // Calculate any applicable discounts here if needed.

                accessCar->set_Total(total);
                double t = accessCar->get_Total();
                cout << "Total price: " << t << endl;
            }
            else {
                cout << "You can't access this discount as your frequent parking number was incorrect" << endl;
            }
        }
        else {
            cout << "No customer information available." << endl;
        }
    }


    bool check_digit() {
        int sum = 0;
        int i = 5;
        int num = 0;
        int checkdigit = 0;
        int temp_cus_num = 0;
        int remainder;
        cus_frequentnum = accessCar->getFrequent_num();
        if (cus_frequentnum == 0) {
            return true;
        }
        temp_cus_num = cus_frequentnum;
        while (cus_frequentnum != 0) {
            cus_frequentnum = cus_frequentnum / 10;
            sum = sum + (num * i);
            cus_frequentnum = cus_frequentnum % 10;
            --i;
        }
        remainder = sum % 11;
        checkdigit = 11 - remainder;
        cus_frequentnum = stoi(to_string(temp_cus_num) + to_string(checkdigit));
        while (cus_frequentnum != 0) {
            cus_frequentnum = cus_frequentnum / 10;
            sum = sum + (num * i);
            cus_frequentnum = cus_frequentnum % 10;
            --i;
        }
        remainder = sum % 11;
        if (remainder == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    string day;
    string num;
    int num_i = 0;
    string arrival;
    string leaving;
    int i = 0;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter your frequent parking number if available (press Enter to skip): ";
    cin.ignore();  
    char c;
    cin.get(c);  

    if (c == '\n') {
        num = "0";  
    }
    else {
        cin.putback(c);  
        cin >> num;     
        while (i > 0 || char_in_numeral(num) || negative_numeral(num) || incomplete_fourdigit(num)) {
            cout << "Enter your frequent parking number if available: ";
            cin >> num;
            i++;
        }
    

    }
      num_i = stoi(num);
       Customer customer1(day, num_i);

    customer1.show_discount();

    cout << "Enter your arrival time (hh:mm): ";
    cin >> arrival;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Convert arrival to just the hour part
    size_t colonPos = arrival.find(':');
    if (colonPos != string::npos) {
        arrival = arrival.substr(0, colonPos);
    }

    while (i > 0 || char_in_numeral(arrival) || negative_numeral(arrival) || check_zero_at_start(arrival) || check_time(arrival)) {
        cout << "Enter your arrival time (hh:mm): ";
        cin >> arrival;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // Convert arrival to just the hour part
        colonPos = arrival.find(':');
        if (colonPos != string::npos) {
            arrival = arrival.substr(0, colonPos);
        }
    }

    customer1.set_arrivaltime(arrival);

    cout << "Enter your leaving time (hh:mm): ";
    cin >> leaving;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Convert leaving to just the hour part
    colonPos = leaving.find(':');
    if (colonPos != string::npos) {
        leaving = leaving.substr(0, colonPos);
    }

    while (i > 0 || char_in_numeral(leaving) || negative_numeral(leaving) || check_zero_at_start(leaving) || check_time(leaving)) {
        cout << "Enter your leaving time (hh:mm): ";
        cin >> leaving;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // Convert leaving to just the hour part
        colonPos = leaving.find(':');
        if (colonPos != string::npos) {
            leaving = leaving.substr(0, colonPos);
        }
    }

    customer1.set_leavingtime(leaving);
    customer1.set_hours();

    Parkinglodge park;
    park.parking(&customer1);
    park.accessCar = &customer1;
    park.show_price_per_hour();
    park.show_total_price();
   
    return 0;
}
