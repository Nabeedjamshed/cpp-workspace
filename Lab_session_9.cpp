// #include <iostream>
// #include <cmath>
// using namespace std;
// int startl9()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Start of Lab 09\n" << endl;
//     return 0;
// }
// class Shape
// {
//     public:
//         virtual void area() = 0;
//     };

//     class Circle : public Shape
//     {
//     private:
//         double radius;

//     public:
//         Circle(double radius)
//         {
//             this->radius = radius;
//         }

//         void area()
//         {
//             double d1 = 3.14 * pow(radius, 2);
//             cout << "Area of Circle: " << d1 << endl;
//         }
// };

// class Rectangle : public Shape
// {
//     private:
//         double width, height;

//     public:
//         Rectangle(double width, double height)
//         {
//             this->width = width;
//             this->height = height;
//         }

//         void area()
//         {
//             double d2 = width * height;
//             cout << "Area of Rectangle: " << d2 << endl;
//         }
// };

// int main()
// {
//     startl9();
//     Shape *ptr[2];
//     Rectangle r1(3.2341, 4.4462);
//     ptr[0] = &r1;
//     ptr[0]->area();
//     Circle c1(2.4572);
//     ptr[1] = &c1;
//     ptr[1]->area();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL9()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 09\n" << endl;
//     return 0;
// }
// class Employee
// {
//     protected:
//         int salary;

//     public:
//         virtual int calculateSalary() = 0;
// };

// class PermanentEmployee : public Employee
// {
//     public:
//         PermanentEmployee(int s)
//         {
//             salary = s;
//         }

//         int calculateSalary()
//         {
//             if (salary < 100000)
//             {
//                 int dec = 0.02 * salary;
//                 cout<<"Deduction: "<<dec<<endl;
//                 return salary - dec;
//             }
//             else if (salary > 100000 || salary < 200000)
//             {
//                 int dec = 0.05 * salary;
//                 cout<<"Deduction: "<<dec<<endl;
//                 return salary - dec;
//             }
//             else if (salary > 200000)
//             {
//                 int dec = 0.1 * salary;
//                 cout<<"Deduction: "<<dec<<endl;
//                 return salary - dec;
//             }
//         }
// };

// class ContractEmployee : public Employee
// {
//     public:
//         ContractEmployee()
//         {
//             salary = 200;
//         }

//         int calculateSalary()
//         {
//             return salary;
//         }
// };

// int main()
// {
//     startL9();
//     Employee *ptr[2];
//     int s;
//     cout << "Enter the salary of a permanent employee: ";
//     cin >> s;

//     PermanentEmployee p1(s);
//     ptr[0] = &p1;
//     cout << "Calculated salary for permanent employee: " << ptr[0]->calculateSalary() << endl;

//     ContractEmployee e1;
//     ptr[1] = &e1;
//     cout << "The salary of contract employee is fixed which is: " << ptr[1]->calculateSalary() << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int startL9()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 09\n" << endl;
//     return 0;
// }
// class Animal
// {
//     public:
//         virtual void makeSound() = 0;
// };

// class Dog : public Animal
// {
//     public:
//         void makeSound()
//         {
//             cout << "Woof!" << endl;
//         }
// };

// class Cat : public Animal
//     {
//     public:
//         void makeSound()
//         {
//             cout << "Meow!" << endl;
//         }
// };

// int main()
// {
//     startL9();
//     Animal *ptr[2];
//     Dog d1;
//     Cat c1;

//     cout << "Dog sound: ";
//     ptr[0] = &d1;
//     ptr[0]->makeSound();

//     cout << "Cat sound: ";
//     ptr[0] = &c1;
//     ptr[0]->makeSound();

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int startL9()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 09\n" << endl;
//     return 0;
// }
// class Payment
// {
//     public:
//         virtual void processPayment() = 0;
// };

// class CreditCardPayment : public Payment
// {
//     private:
//         string cardNumber;
//         string cardHolder;
//         string expiryDate;
//         string cvv;
//         bool validateCard()
//         {
//             if (cardNumber.length() == 16 && expiryDate.length() == 5 && cvv.length() == 3)
//             {
//                 cout << "Credit card validation passed." << endl;
//                 return true;
//             }
//             else
//             {
//                 cout << "Credit card validation failed." << endl;
//                 return false;
//             }
//         }

//         bool chargeCard()
//         {
//             cout << "Charging the credit card..." << endl;
//             return true;
//         }

//     public:
//         CreditCardPayment(string cardNumber, string cardHolder, string expiryDate, string cvv)
//         {
//             this->cardNumber = cardNumber;
//             this->cardHolder = cardHolder;
//             this->expiryDate = expiryDate;
//             this->cvv = cvv;
//         }

//         void processPayment()
//         {
//             cout << "Processing credit card payment..." << endl;
//             cout << "Card Number: " << cardNumber << endl;
//             cout << "Card Holder: " << cardHolder << endl;
//             cout << "Expiry Date: " << expiryDate << endl;
//             cout << "CVV: " << cvv << endl;
//             if (validateCard() && chargeCard())
//             {
//                 cout << "Credit card payment processed successfully." << endl;
//             }
//             else
//             {
//                 cout << "Credit card payment failed." << endl;
//             }
//         }
// };

// class PaypalPayment : public Payment
// {
//     private:
//         string email;
//         string password;

//         bool loginToPaypal()
//         {
//             if (email == "nabeedjamshedali800@gmail.com" && password == "NabeedAli786")
//             {
//                 cout << "Logged into PayPal account successfully." << endl;
//                 return true;
//             }
//             else
//             {
//                 cout << "PayPal login failed." << endl;
//                 return false;
//             }
//         }

//         bool sendPayment()
//         {
//             cout << "Sending payment through PayPal..." << endl;
//             return true;
//         }

//     public:
//         PaypalPayment(string email, string password)
//         {
//             this->email = email;
//             this->password = password;
//         }
//         void processPayment() override
//         {
//             cout << "Processing PayPal payment..." << endl;
//             cout << "Email: " << email << endl;
//             if (loginToPaypal() && sendPayment())
//             {
//                 cout << "PayPal payment processed successfully." << endl;
//             }
//             else
//             {
//                 cout << "PayPal payment failed." << endl;
//             }
//         }
// };

// int main()
// {
//     startL9();
//     string cn, ch, ed, cv, eml, pass;
//     cout << "!!For Credit Card Payment!!" << endl;
//     cout << "Enter the Card Number: ";
//     cin >> cn;
//     cout << "Enter the Card Holder: ";
//     cin >> ch;
//     cout << "Enter the Expiry Date: ";
//     cin >> ed;
//     cout << "Enter the CVV: ";
//     cin >> cv;
//     CreditCardPayment creditCardPayment(cn, ch, ed, cv);
//     cout << endl;
//     cout << "!!For PayPal Payment!!" << endl;
//     cout << "Enter the email: ";
//     cin >> eml;
//     cout << "Enter the password: ";
//     cin >> pass;
//     PaypalPayment paypalPayment(eml, pass);
//     cout<<endl;
//     Payment *ptr[2];
//     ptr[0] = &creditCardPayment;
//     ptr[0]->processPayment();
//     cout << endl;
//     ptr[1] = &paypalPayment;
//     ptr[1]->processPayment();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int startL9()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 09\n" << endl;
//     return 0;
// }
// class Vehicle
// {
//     public:
//         virtual double fuelEfficiency() = 0;
// };

// class Car : public Vehicle
// {
//     private:
//         double kilometersDriven;
//         double litersUsed;

//     public:
//         Car(double kilometersDriven, double litersUsed)
//         {
//             this->kilometersDriven = kilometersDriven;
//             this->litersUsed = litersUsed;
//         }

//         double fuelEfficiency()
//         {
//             return kilometersDriven / litersUsed;
//         }
// };

// class Truck : public Vehicle
// {
//     private:
//         double kilometersDriven;
//         double litersUsed;

//     public:
//         Truck(double kilometersDriven, double litersUsed)
//         {
//             this->kilometersDriven = kilometersDriven;
//             this->litersUsed = litersUsed;
//         }

//         double fuelEfficiency()
//         {
//             return kilometersDriven / litersUsed;
//         }
// };

// int main()
// {
//     startL9();
//     double ckd, cl, tkd, tl;
//     cout << "!!For Car!!" << endl;
//     cout << "Enter the kilometer driven: ";
//     cin >> ckd;
//     cout << "Enter the Liter Used: ";
//     cin >> cl;
//     Vehicle *ptr[2];
//     Car car(ckd, cl);
//     ptr[0] = &car;
//     cout << endl;
//     cout << "!!For Truck!!" << endl;
//     cout << "Enter the kilometer driven: ";
//     cin >> tkd;
//     cout << "Enter the Liter Used: ";
//     cin >> tl;
//     Truck truck(tkd, tl);
//     ptr[1] = &truck;
//     cout << "Car fuel efficiency: " << ptr[0]->fuelEfficiency() << " km per liter" << endl;
//     cout << "Truck fuel efficiency: " << ptr[1]->fuelEfficiency() << " km per liter" << endl;

//     return 0;
// }
