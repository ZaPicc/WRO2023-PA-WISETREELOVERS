![wise mystical tree](https://cdn.mindustry.me/wise%20mystical%20tree.jpg)


Engineering materials
====

This repository contains engineering materials of a self-driven vehicle's model participating in the WRO Future Engineers competition in the season 2022.

## Content

* `t-photos` contains 2 photos of the team (an official one and one funny photo with all team members)
* `v-photos` contains 6 photos of the vehicle (from every side, from top and bottom)
* `video` contains the video.md file with the link to a video where driving demonstration exists
* `schemes` contains one or several schematic diagrams in form of JPEG, PNG or PDF of the electromechanical components illustrating all the elements (electronic components and motors) used in the vehicle and how they connect to each other.
* `src` contains code of control software for all components which were programmed to participate in the competition
* `models` is for the files for models used by 3D printers, laser cutting machines and CNC machines to produce the vehicle elements. If there is nothing to add to this location, the directory can be removed.
* `other` is for other files which can be used to understand how to prepare the vehicle for the competition. It may include documentation how to connect to a SBC/SBM and upload files there, datasets, hardware specifications, communication protocols descriptions etc. If there is nothing to add to this location, the directory can be removed.

## Introduction

Robots are the revolution of this era, we are going to use them for our daily tasks, actually we have already started using them in our daily live, in the World Robot Olympiad there are challenges that will help the society.This year in the category Future Engineers we are evolving automatic cars to recognize objects and avoid them. That's why our robot "Wise mystical robot" is qualified to achieve this objectives, win and represent our country Panama. 

We actually started this project a year ago, unfortunaly, due to time issues, we couldn't achieve that the robot could do everything it should do and there were many problems with the programming, the main problems arose where in the physical part since many of the cables were not the right size and they broke easily. That's why this year we provide fix this problems and come back with more potential and motivation, fixing all the problems that surge last year, we change our algorithm and came back more motivated to do the things well. 

## April 

This month is when we regroup because the official robotics club of our school started, the teacher and the school was so good with us that provided some materials for our robots and supported us and we started planning our meetings to progress with the olympiad. In this month we got a kind of prototype for the robot and started trying to get it move. We show to the teacher the robot and she liked it, so we continue with it.

Was in this month when we decided to use ROS2 as a simulator for the robot to have everthing more tracked and to avoid problems with this one, because for experience of the past year this was the best option to test the behavior of the robot.

## May

In this month we started creating the official robot becacuse finaly the principal sensor that is the LIDAR had arrived. We do our first meet where we put on work the LiDAR and it succesfully connect and was working so that was a progress, we also get it to move. We decided to use ROS2 to have a better track of the movement of the robot because basically ROS2 is a simulator especially for robos and projects like this so this was the next step.

ROS2 needed Linux so we get down to work. We got a virtual computer to use linux and installed everthing we needed.

## June and July

This months were to focus on the programming part, that is the most complicated because he had a lot of issues and complications with ROS. Also we got some help that gave us recomendations with the problems and better solutions.

We had to buy an encoder to be able to interpret the speed of the car. The arduino nano stopped working forcing us to make a complete change in the electronics and the python system as such collapsed. In ROS there were some errors which literally meant that we had to re-install the system. Thanks to the fact that we had to delete python3.10 because we thought it was very new when we uninstalled python 3.10 our system stopped working, it crashed and we had to re-install everything. 👍

The Rasperry in a moment stopped responding, so we think that maybe it could have been the temperature, so we took precautions.
![WhatsApp Image 2023-07-26 at 10 06 46 PM](https://github.com/ZaPicc/WRO2023-PA-WISETREELOVERS/assets/102268096/d83c33dc-fae0-44e9-a7fc-614a897e3fc3)

## The Final Countdown

Now, in august, with the national just around the corner. First we tried with the rock pi 4, it was functional, but all the documentation was in CHINESE, we tried to use it anyways but it collapsed instantly, basically it doensn't have support for the card, all of them are olds and doesn't work. So we moved to an rasperry until we got a new one to replace it.

After that we had a few problems because in Panama there's no rasperrys and not only that, the electronics only have things for cars and major things so basically there's no rasperry on sale here in Panama. Hopefully we find one external place that sell it and we buy it and now is thing of wait.

We realized something. The Lidar that we got does'nt have a library in a language we understand the only one that we find, was in chinese, so, we got another one with an actual library that can helps us. We took a rest waiting for it to come but having everthing ready for when it arrives.

Once it arrived, we instantly incorpored it to the robot to progress, we succesfully got a connection with the Lidar and the sensor, now is time to continue with the original idea of mapping the path so its more easy for the robot to detect objects and distances.

## Now, after talking of the story, basically the robot works this way:

The robot have one motor, the motor boost the back wheels with the help of a motor controller (specificaly L298N) in the front we have a SERVO of 90° as directional axis. It has a camera on the front that helps with the color detection, and in the top it has a lidar sensor that basically helps to measure distances. For the programming, we have an arduino and an rock pi 4, the programming is basically made with python and C++ with arduino.

The new model of tracking that we made with the new Lidar, basically works this way: THe Lidar will examine the distance around the map, and with that distance, it will know exactly the deegres that he must do to continue his way. The Lidar programation is made with pyhton and this connects to the arduino that is programmed in C++ for the motors. More specifically:

### Mobility Management
As explained before, the robot only have one motor that is a jga25-370, this motor is powered by an Arduino Nano programmed with C++. For the rotation we used a servomotor mg2e5 implementing an ackerman steering mechanism. The robot structure is very optimized and organized, this year the cables are better and we took out the necessary precautions with this design.

### Power and Sense Management
The power source of the robot is a lipo battery that can provide us enough power for everthing the robot have to do, and the sensor we use is a Lidar, is a single sensor because this one can scan the distance in 360° degrees, this safe us the martyrdom of having a lot of ultrasonic sensors for all the directions, for the part of the colors, we use a camera that is programmed with the rasperry in python with a program that can detect colors.


### Obstacle Manegement
For the round of obstacles, we use a camera with a program in python that can detect colors, this program is saved in the rasperry that connects to the arduino to tell the arduino the actions that have to do. The proramming is simple, if the camera detects red, the robot will turn right, if the camera detecs green, the robot will turn left.
