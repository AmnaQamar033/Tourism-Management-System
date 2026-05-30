# Tourism Management System

This is my Semester 1 Final Project made entirely in C Language. It is a terminal-based travel planner application that helps users browse holiday packages in Pakistan, build their own custom trips, and get smart recommendations based on their mood.

---

## Key Features

* **Mood and Personality Quiz:** Don't know where to go? The program asks you a few simple questions about your current mood or travel vibes and automatically suggests the best category for you (like Northern Areas, Coastal zones, etc.).
* **Custom Trip Builder:** If you don't like pre-made packages, you can plan your own! Just input your destination, total distance (in km), number of days, members, and meals per day. The system will calculate your total cost (hotel, travel, and food) in real-time.
* **Mini-Game for Discounts:** To make things fun, I added a small 4x4 grid game. If you guess the correct coordinates and find the hidden number '5', you instantly get a 10% discount on your bill!
* **Smart Travel Suggestions:** Once you book a trip, the system uses string matching (strcmp) to show you custom tables with helpful tips like packing checklists, famous local foods, best photo spots, and health advisories for that specific place.
* **Automatic Billing Receipt:** Generates a neat checkout receipt showing customer details (Name, CNIC, Gender, Members) and the final amount paid.

---

## CS Concepts I Used Here

Since this was my first major programming project, I applied several core concepts of structural C programming:

* **Structs:** Used to bundle all package details (hotel info, days, nights, meals, and day-by-day itineraries) cleanly into one custom data type.
* **2D Arrays and Matrices:** Used for handling multiple destinations, storing prices, and creating the grid for the discount mini-game.
* **Input Validation Loops:** Used do-while loops to check that the user doesn't enter random values (like a 2-digit CNIC or wrong gender choices) so the program doesn't crash.
* **String Functions:** Used strcmp and strcpy to handle user choices and match strings smoothly.
* **Clean Control Loops:** Replaced recursive main calls with an infinite while(1) control loop to manage navigation safely without any memory overflow issues.

---

## How to Run This on Your Machine

1. **Clone the repo:**
   ```bash
   git clone [https://github.com/AmnaQamar033/Tourism-Management-System](https://github.com/AmnaQamar033/Tourism-Management-System)
