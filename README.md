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


### Now, after talking of the story, basically the robot works this way:

The robot have one motor, the motor boost the back wheels with the help of a motor controller (specificaly L298N) in the front we have a SERVO of 90° as directional axis. It has a camera on the front that helps with the color detection, and in the top it has a lidar sensor that basically helps to measure distances. For the programming, we have an arduino and an rock pi 4, the programming is basically made with python and C++ with arduino.

The new model of tracking that we made with the new Lidar, basically works this way: THe Lidar will examine the distance around the map, and with that distance, it will know exactly the deegres that he must do to continue his way. The Lidar programation is made with pyhton and this connects to the arduino that is programmed in C++ for the motors.

First we tried with de rock pi 4, it was functional, but all the documentation was in CHINESE, we tried to use it anyways but it collapsed instantly, basically it doensn't have support for the card, all of them are olds and doesn't work. So we moved to an rasperry until we got a new one to replace it.

After that we had a few problems because in Panama there's no rasperrys in Panama and not only that, the electronics only have things for cars and major things so basically there's no rasperry on sale here in Panama. Hopefully we find one external place that sell it and we buy it and now is thing of wait.


## The Final Countdown

Now, in august, with the national just around the corner, we realized something. The Lidar that we got does'nt have a library in a language we understand the only one that we find, was in chinese, so, we got another one with an actual library that can helps us. We took a rest waiting for it to come but having everthing ready for when it arrives.

Once it arrived, we instantly incorpored it to the robot to progress, we succesfully got a connection with the Lidar and the sensor, now is time to continue with the original idea of mapping the path so its more easy for the robot to detect objects and distances.

## Honorable mentions

First of all, thanks to our teacher and coach: Idanela Toscano, for supporting and visiting us all the trajectory.

Thank you VERY MUCH TO  Josh Newans from articulated robotics for the incredible and helpfull videos that make possible this.
Thanks too to LDROBOT.
All the team behind ROS, slam and nav2

And specially thanks to FUNDASTEAM for sending us Angel Zaldaño Gutierrez to try to help us, he said that we should ask to chatgpt to act like an integrator of systems.

## Team name
The team is name "Mystical Tree Lovers" this name was made because we love mystical trees with faces, it's something complicated but we hope you understand it.

![wise mystical tree](https://cdn.mindustry.me/wise%20mystical%20tree.jpg)
