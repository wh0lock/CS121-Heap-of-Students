# CS121-Heap-of-Students

## UML

```mermaid

classDiagram
 
class Student{
    firstName: string
    lastName: string
    creditHours: int
    birthDate: Date
    gradDate: Date
    address: Address
    Student()
    init(string studentString)
    printStudent()
    getLastFirst() string
}

class Date{
    month: int
    day: int
    year: int
    Date()
    init(dateString)
    printDate()
}

class Address{
    street: string
    city: string
    state: string
    zip: int
    Address()
    init(street, city, state, zip)
    printAddress()
}

Student --> Address
Student --> Date

```

