# 4/10/2026  6 AM - Researching the correct controller

In this session, I researched many controllers for my build and first, I thought of an ESP32 Controller. However, what happened was that a friends said I can use an Arduino Nano. I misunderstood for Uno and I actually thought of using an Uno for my project. Because of that, my design got rejected and I got feedback saying that Arduino Uno is overkill and that Seeed Studio XIAO RP2040 does the job at a fraction of the cost. I researched about that microcotroller with ChatGPT and GPT told me that Seeed Studio XIAO RP2040 is a really good choice for my project since it has better performance and is cheap.

https://stasis.hackclub-assets.com/images/1775869579618-6w9fae.png

# 4/10/2026  6 AM - Servo Holder Design

First, I shared my OnShape design so that my friend can 3D print my parts. However, he asked me where my servo will be and that there needs to be a holder for my servo. After that, I decided to design a holder for my servo since I can simpy attach it to my base component after 3D printing it. Then, I made sure to include many other details like fillets in my holder and since it was my first time, I used a tutorial and I would make mistakes while designing my holder, so I would have to try again or redo what I have done, it did take me a couple of days to complete the holder.

https://stasis.hackclub-assets.com/images/1775869300662-jd9sh6.png

# 4/10/2026  6 AM - Finalizing my BOM

In this session, I was researching almost every single component that was in my BOM and making sure they are necessary for my build. Also, during my research, I was making sure that I sanity check my materials with ChatGPT so that I am in the right track and that I don't get myself misguided during the build stage. Also, I made sure that I don't buy the wrong material and replicate my materials, making the worst mistake to get my design rejected. Also, I made sure that my materials aren't unnecessary and that they serve some purpose to my build, especially ChatGPT would give me suggestions for my BOM.

https://stasis.hackclub-assets.com/images/1775868636624-spqmz8.png

# 4/10/2026  6 AM - Researching Communications with ChatGPT

In this session, I was researching the communications about which component should connect to which and what I specifically need for connection. For example, I researched the washers, wires, and how I connect my microcontroller to my servo. Also, I was asking ChatGPT how to manage my connections since I am using a Seeed Studio Controller and not an Arduino Uno microcontroller. I also made sure I sanity checked my materials with ChatGPT so that I am on the right track for my build.

https://stasis.hackclub-assets.com/images/1775868536893-hkvpml.png

# 4/10/2026  6 AM - TinkerCAD

I was new to TinkerCAD, so I just tried some buttons on how to wire my components properly for a neat diagram. Then, I made my best connections I could make. However, ChatGPT said that my connections were off somewhere, so I spent some time changing the color of my wires and specifying the connections properly. For example, I made sure the servo ground was connected to the controller ground for a shared communication and I made sure that there was a specific source for my electronic components like my battery pack and my microcontroller.

https://stasis.hackclub-assets.com/images/1775868315843-4h5hs3.png

# 4/10/2026  6 AM - Fixing the Connection Issue

In this session, I learned about the mistake I was making when trying to connect my rack and pinion assembly from my actuator to my servo. Before, I wasn't using a rack and pinion assembly relationship, so the connection wouldn't be applied properly. Lateron, my tutor told me that I have to specify the relationship so that the rack can slide wil the pinion is rotating, making the actuator move while the grippers also move.

https://stasis.hackclub-assets.com/images/1775868062903-e8a7yr.png

# 4/10/2026  6 AM - Learning Rack and Pinion Assembly

In this session, I learned about how to include a rack and pinion in my assembly for Onshape. I watched a youtube tutorial on how to design a rack and pinion system. The rack and pinion was really vital since the rotational movement from the servo needed to converted into linear movement using a rack. Basically, the pinion will rotate, and the rack will convert that rotational motion into linear motion, making the grippers move properly.

[image](https://stasis.hackclub-assets.com/images/1775867839985-skw3us.png)<img width="2362" height="552" alt="image" src="https://github.com/user-attachments/assets/48c1a225-5592-4a8e-ae47-563c804c4e88" />


# 3/22/2026 6 AM - Electronics of the Gripper

_Time spent: 2h_

I worked on adding the electorinc portions of the gripper. For example, the electronics of the gripper included an Arduino Uno Controller and a breadboard with a 4 pack AA Battery. Also, there was a servo located on the actuator. Since I was using a wire, some of the Revolutes were being undefined. What I did next was just paying attention to the electronics and not the wires. I just added the electronic portions in the Onshape design. Since I did that, there were no errors and my Onshape design has all the electronics necessary. Overall, I just payed attention to my electronics in this project.


![image](https://stasis.hackclub-assets.com/images/1774160670789-8ku7yf.png)


![image](https://stasis.hackclub-assets.com/images/1774160753625-znxmxh.png)

![image](https://stasis.hackclub-assets.com/images/1774160670789-8ku7yf.png)
![image](https://stasis.hackclub-assets.com/images/1774160753625-znxmxh.png)

# 3/22/2026 12 AM - Robot Gripper Assembly and Animation

_Time spent: 2h_

In this session, I worked on completing the assembly and animation of my Robot Gripper. What happened was that I completed the part studio portion of my Onshape design, so I went to the assembly section. In the assembly, almost everything was simple, just making sure the parts were set properly. However, I designed it miserably in a way that the parts were broken apart, so I realized I would have to redo my Onshape design. Then, for my second iteration, almost eveything was fine except for the fact that I did not make my extrusions symetric about the origin. Because of that, one of my parts weren't correctly aligning with a hole. For that, I had to do a third iteration and this time, I didn't forget to check the symetric box, so everything worked properly.


![image](https://stasis.hackclub-assets.com/images/1774160113699-o91p5g.png)


![image](https://stasis.hackclub-assets.com/images/1774160133667-03a9sp.png)


![image](https://stasis.hackclub-assets.com/images/1774160157539-vv74hb.png)


![image](https://stasis.hackclub-assets.com/images/1774160201582-jxg76p.png)

![image](https://stasis.hackclub-assets.com/images/1774160113699-o91p5g.png)
![image](https://stasis.hackclub-assets.com/images/1774160133667-03a9sp.png)
![image](https://stasis.hackclub-assets.com/images/1774160157539-vv74hb.png)
![image](https://stasis.hackclub-assets.com/images/1774160201582-jxg76p.png)

# 3/11/2026 12 AM - Robot Gripper Actuator and Control Arm

_Time spent: 1h_

![image](https://stasis.hackclub-assets.com/images/1773190423276-y46vpw.png)

![image](https://stasis.hackclub-assets.com/images/1773596382877-xv6ni9.png)
Throughout this session, I worked on designing the actuator for the robot gripper and the control arm. Designing the actuator was a piece of cake since it had just a few extrusions you had to do. Also, in this session, I had a hard time working on the control arm and I took lots of time to extrude the control arm properly since it was laying underneath. As the control arm was laying underneath, what I decided to do was that I decided to make it stay under the swing arm as a small tweak so that my design will be approved. All I have left is to assemble the parts for the final design and animate the gripper.

![image](https://stasis.hackclub-assets.com/images/1773190423276-y46vpw.png)
![image](https://stasis.hackclub-assets.com/images/1773596382877-xv6ni9.png)

# 3/10/2026 5 AM - Partial Design of my Robot Gripper

_Time spent: 3.016666666666667h_

In this session, what I did was that I sketched the base design of my Robot Gripper using an online browser CAD Software named OnShape. After the sketch, I extruded the sketch to make a 3D version of my sketch, which is where 3D Modeling took place. After that, I then designed 3 circles to place my swing arm, the arm that makes the gripper move and clutch items. After sketching the swing arm, I used extrusion to make an animated version of the swing arm. Right now, I just have the gripper, swing arm, and the base component modeled in OnShape. A couple of failures were some silly mistakes like not specifying the dimensions of my sketches, which made my sketch not fully defined and I would sometimes fail to extrude my sketch properly since it is my first time using OnShape.
![image](https://stasis.hackclub-assets.com/images/1773121665660-m93qsf.png)


![image](https://stasis.hackclub-assets.com/images/1773121706651-1u092e.png)

![image](https://stasis.hackclub-assets.com/images/1773121665660-m93qsf.png)
![image](https://stasis.hackclub-assets.com/images/1773121706651-1u092e.png)
