# Robot-Gripper
This will be the hand of a robotic arm, designed to grasp, hold, move, and release objects with precision and control.

The reason why I chose this project is because it gives me an intro to robotics. Not just that, it was the correct choice for a beginner project if I wanted to get an overview of what hardware really is. Also, it had a really simple design tutorial for Onshape and Onshape is the most simple CAD Software I use. I mostly use OnShape for my work since it runs on browser and I don't have to do any installations, making my life easier.
<img width="1418" height="976" alt="image" src="https://github.com/user-attachments/assets/83ffbcdb-030a-47a8-87a3-647379fa1edc" />

<img width="2940" height="1912" alt="image" src="https://github.com/user-attachments/assets/8b79a8f5-ed96-4b33-a8f8-ac65fe9da1a6" />

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
