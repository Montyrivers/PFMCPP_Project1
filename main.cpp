#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: plane
 action 1: the plane takes off
 action 2: the plane flies
 action 3: the plane lands
 */
plane.takeOff();
plane.fly();
plane.land();

/*
 2)
 Noun: car
 action 1: the car accelerates
 action 2: the car brakes
 action 3: the car parks
 */
 car.accelerate();
 car.brake();
 car.park();

/*
 3)
 Noun: oven
 action 1: the oven pre-heats
 action 2: the oven has a timer
 action 3: the oven turns off
 */
oven.preHeat();
oven.timer();
oven.turnOff();

/*
 4)
 Noun: crane
 action 1: the crane lowers its arm
 action 2: the crane grabs something
 action 3: the crane raises its arm
 */
 crane.lowerArm();
 crane.grab();
 crane.raiseArm();

/*
 5)
 Noun: synthesizer
 action 1: the synthesizer triggers an attack/decay stage
 action 2: the synthesizer triggers a release stage
 action 3: the synthesizer attenuates volume
 */
 synth.triggerAttackDecay();
 synth.triggerRelease();
 synth.volumeSet();


/*
 6)
 Noun: robot
 action 1: the robot makes a beeping sound
 action 2: the robot serves milk and cookies
 action 3: the robot plans global domination
 */
 robot.beep();
 robot.milkCookies();
 robot.domination();

/*
 7)
 Noun: hard drive
 action 1: the hard drive reads from disk
 action 2: the hard drive writes to disk
 action 3: the hard drive parks its read/write header
 */
 hdd.read();
 hdd.write();
 hdd.park();


/*
 8)
 Noun: alarm clock
 action 1: the clock can set the current time
 action 2: the clock can set its alarm time
 action 3: the clock has a radio tuner 
 */
alarmClock.setCurrentTime();
alarmClock.setAlarmTime();
alarmClock.radio();
/*
 9)
 Noun: super soaker
 action 1: the super soaker can spray water
 action 2: the super soaker can be pumped up
 action 3: the super soaker can be refilled with more water.
 */
 superSoaker.spray();
 superSoaker.pump();
 superSoaker.refill();


/*
 10)
 Noun: tape deck
 action 1: the tape deck can playback a recording
 action 2: the tape deck can rewind a recording
 action 3: the tape deck can stop a recording
 */
 tapeDeck.play();
 tapeDeck.rewind();
 tapeDeck.stop();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
