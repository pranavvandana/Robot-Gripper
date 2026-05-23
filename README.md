# Robot-Gripper
This will be the hand of a robotic arm, designed to grasp, hold, move, and release objects with precision and control.

The reason why I chose this project is because it gives me an intro to robotics. Not just that, it was the correct choice for a beginner project if I wanted to get an overview of what hardware really is. Also, it had a really simple design tutorial for Onshape and Onshape is the most simple CAD Software I use. I mostly use OnShape for my work since it runs on browser and I don't have to do any installations, making my life easier.
<img width="1418" height="976" alt="image" src="https://github.com/user-attachments/assets/83ffbcdb-030a-47a8-87a3-647379fa1edc" />

<img width="2940" height="1912" alt="image" src="https://github.com/user-attachments/assets/8b79a8f5-ed96-4b33-a8f8-ac65fe9da1a6" />

https://cad.onshape.com/documents/6f604da02b54153c1e8cac68/w/a82c225a0ed2f071b5ea0c98/e/64383b0489914010158d26b3?renderMode=0&uiState=69ed2fd9afe469fc4d99cb7d

**1. Placing and Designing Parts in Onshape (Assembly Tutorial)**

Using Onshape, I followed a structured approach to placing each component in the correct position:

Step 1: Fix the Base
I inserted the base component first and used a fastened mate to lock it in place. This ensures all other parts are positioned relative to a stable reference.

Step 2: Position the Actuator
I placed the actuator inside the slot in the base and applied a slider mate so it can move back and forth. This defines the main motion of the gripper.

Step 3: Align the Rack and Pinion
I positioned the rack along the actuator so that it moves together with it. Then, I placed the pinion gear (attached to the servo location) so its teeth mesh correctly with the rack. I adjusted the spacing carefully to avoid slipping or jamming.

Step 4: Attach the Gripper Arms
The gripper arms were placed at the front of the actuator and connected using pivot joints (revolute mates). This allows them to open and close as the actuator moves.

Step 5: Add the Linkage System
I connected a rigid linkage between the actuator and the gripper arms. This transfers motion from the sliding actuator into gripping motion.

Step 6: Place the Servo Motor
The servo was positioned on the base near the pinion gear. I ensured the shaft aligns with the pinion so that rotation drives the rack.

Step 7: Check Alignment and Motion
Finally, I tested the assembly by moving the actuator and verifying that all parts move smoothly without collisions.

**2. Wiring Placement in Tinkercad (Connection Tutorial)**

In Tinkercad, I focused on how components are physically arranged and connected:

Step 1: Place the Controller
I placed the Arduino Uno (as a substitute for the Seeed Studio XIAO RP2040) on the workspace.

Step 2: Add the Servo Motor
The servo was placed close to the controller to keep wiring short and organized.

Step 3: Position the Battery Pack
I placed the battery pack near the servo since it directly powers the servo motor.

Step 4: Connect the Wires
* Signal wire → from PWM pin (Pin 9) to servo signal
* Power wire → from battery pack to servo VCC
* Ground wire → shared between battery, servo, and controller

Step 5: Organize the Layout
I arranged wires neatly to avoid confusion, ensuring no overlapping or messy routing.

**3. Real-Life Build (Physical Placement Tutorial)**

When building the project physically, I followed the same placement logic as the CAD model:

Step 1: Assemble the Structure
I attached the base, actuator, and gripper arms using screws, nuts, and washers.

Step 2: Mount the Servo
The servo was fixed onto the base using screws, ensuring the shaft lines up with the pinion gear.

Step 3: Connect the Linkage
I attached the servo horn to a rigid linkage connected to the actuator so rotation translates into motion.

Step 4: Place Electronics
* Microcontroller mounted on the base (using tape or screws)
* Breadboard placed nearby for easy wiring
* Battery pack secured close to the servo

Step 5: Wire Everything
I connected all components using jumper wires exactly as designed in Tinkercad.

Step 6: Test and Adjust
Finally, I powered the system and tested movement, making small adjustments to alignment if needed.

**4. Programming the Servo in Arduino IDE (Software Tutorial)**

To control the gripper, I used Arduino IDE to write and upload code to the microcontroller.

Step 1: Set Up the Environment
I installed the Arduino IDE and connected my controller (or an Arduino Uno for testing) to my computer using a USB cable. Then, I selected the correct board and port from the Tools menu.

Step 2: Import the Servo Library
I included the built-in Servo library, which allows easy control of the servo motor using PWM signals.

Step 3: Write the Control CodeW
I wrote a simple program to move the servo between two positions, which will open and close the gripper:
<img width="1528" height="712" alt="image" src="https://github.com/user-attachments/assets/6114b068-cd6a-4933-812e-9a9cb5334359" />

Step 4: Upload the Code
I clicked the upload button in the Arduino IDE to send the program to the controller. Once uploaded, the servo begins moving automatically.

Step 5: Test and Adjust
I tested the movement of the gripper and adjusted the angles in the code (for example, changing 0 and 90 to better fit the mechanical range of the gripper).

Step 6: Integrate with Hardware
After confirming the servo worked correctly, I used the same code with my actual Seeed Studio XIAO RP2040, ensuring the signal pin matched my wiring setup.

Name	Purpose	Quantity	Total Cost (USD)	Link	Distributor
SUNLU PLA 3D Printer Filament PLA Filament 1.75mm, Neatly Wound 3D Printing Filament 1.75mm, Dimensional Accuracy +/- 0.02 mm, Fit Most FDM 3D Printers, 1kg Spool (2.2lbs), Black	PLA filament will be used to 3D print all custom components for the project, including the base, gripper arms, linkage system, and servo housing. Based on the overall design and estimated material usage, approximately 1 kg of filament is required to manufacture all parts.	1	13.99	https://www.amazon.com/gp/product/B07XG3RM58/ref=ox_sc_act_title_1?smid=A2QQRBEFB1LPGH&th=1	Amazon
California JOS 1 PCS Breadboard 830 Point Solderless Prototype PCB Board Kit for Arduino Proto Shield Distribution Connecting Blocks	This breadboard will be used for prototyping and organizing electrical connections for the controller.	1	4.59	https://www.amazon.com/gp/product/B0BRQX6G3T/ref=ox_sc_act_title_6?smid=A2XLLJ8HYD6SMA&th=1	Amazon
VWEICYY 2PACK 4 AA Battery Holder housing with Leads,2PCS 4 x 1.5V AA Battery Holder Case, Without Cover	The battery holder will be used to provide stable  power to the SG90 servo to work properly.	1	5.99	https://www.amazon.com/gp/product/B0DZX39MHK/ref=ox_sc_act_title_3?smid=AQ37Z5F5L6GWK&psc=1	Amazon
Seeed Studio XIAO RP2040 (Pre-Soldered)	This microcontroller will control the movement of the gripper.	1	10.99	https://www.amazon.com/gp/product/B0DRNTQ338/ref=ox_sc_act_title_4?smid=A1YP59NGBNBZUR&psc=1	Amazon
WWZMDiB SG90 Micro Servo Motor for Arduino Raspberry Pi DIY (3 Pcs)	The SG90 servo will actuate the gripper mechanism by converting control signals into motion.	1	6.99	https://www.amazon.com/gp/product/B0BKPL2Y21/ref=ox_sc_act_title_4?smid=A1YZW40LYQY3L1&psc=1	Amazon
California JOS 40 PCS 20 CM (8 inch) Breadboard Jumper Wires Length Optional Dupont Wire Assorted Kit Female to Male Multicolored Ribbon Cables	The jumper wires will connect the controller to the servo (signal) and provide shared ground while the battery pack powers the servo.	1	3.99	https://www.amazon.com/gp/product/B0BRTHR2RL/ref=ox_sc_act_title_1?smid=A2XLLJ8HYD6SMA&psc=1	Amazon
351pcs 304 Stainless Steel Cross Recessed Machine Screw Bolts Nut Washer Assortment Kit - (M3/M4/M5) 8 Sizes for Mechanical Assembly, DIY Projects, Electronics Repair.	These screws, nuts, and washers will be used to assemble and securely fasten the 3D printed parts and joints.	1	6.29	https://www.amazon.com/351pcs-Stainless-Recessed-Machine-Assortment/dp/B0FJXMZ831/ref=sr_1_19?crid=VRB77Z2A7ONR&dib=eyJ2IjoiMSJ9.GbAAP5IzNqp48qRNOUry_ak9CybyLoNygjfPAeX7IoE.ue8HHtnaobnOXJkVtqXRsZOhRulLyKkwt9knhGRaAQo&dib_tag=se&keywords=M3+Machine+Screw+Assortment+Kit+%28includes+screws%2C+nuts%2C+washers%29+20mm+10pcs&nsdOptOutParam=true&qid=1775861788&sprefix=m3+machine+screw+assortment+kit+includes+screws%2C+nuts%2C+washers+20mm+10pcs%2Caps%2C164&sr=8-19&xpid=nYAUDjyntecVl	Amazon
