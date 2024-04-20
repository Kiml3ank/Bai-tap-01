#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string vehicleID;
    string brand;
    string model;
    int year;
    string color;
public:
    Vehicle(string vehicleID, string brand, string model, int year, string color) {
        this->vehicleID = vehicleID;
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->color = color;
    }

    void setVehicleID(string vehicleID) {
        this->vehicleID = vehicleID;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    void setModel(string model) {
        this->model = model;
    }

    void setYear(int year) {
        this->year = year;
    }

    void setColor(string color) {
        this->color = color;
    }

    string getVehicleID() const {
        return vehicleID;
    }

    string getBrand() const {
        return brand;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    string getColor() const {
        return color;
    }

    void displayInfo() const {
        cout << "Ma so phuong tien: " << vehicleID << endl;
        cout << "Thuong hieu: " << brand << endl;
        cout << "Mau xe: " << model << endl;
        cout << "Nam san xuat: " << year << endl;
        cout << "Mau sac: " << color << endl;
    }

    bool isVintage(int currentYear) const {
        return (currentYear - year) >= 25;
    }
};

int main() {
    Vehicle xe1("V001", "Toyota", "Corolla", 2020, "Xanh");
    xe1.displayInfo();
  
    int currentYear = 2024;
    if (xe1.isVintage(currentYear)) {
        cout << "Xe nay la xe co." << endl;
    } else {
        cout << "Xe nay khong phai xe co." << endl;
    }

    return 0;
}

