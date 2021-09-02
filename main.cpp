#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog jumps
dog.jump();
//  action 3:   the dog wags it's tail
dog.wagTail();
//  2)
//  Noun:       drawbridge
//  action 1:   the drawbridge raises
drawBridge.raise();
//  action 2:   the drawbridge lowers
drawBridge.lower();
//  action 3:   the drawbridge clicks for int seconds like this sound: https://www.youtube.com/watch?v=nSAG6F4oHG8
drawBridge.click(100);
 
//  3)
//  Noun:       clock
//  action 1:   the clock makes a tick sound
clock.tick();
//  action 2:   the clock makes a tock sound
clock.tock();
//  action 3:   the clock moves its arms one rotation
clock.moveArms();
 
//  4)
//  Noun:       plane
//  action 1:   the plane increases thrust
plane.increaseThrust();
//  action 2:   the plane opens its passenger door
plane.openPassengerDoor();
//  action 3:   the plane raises or lowers its landing gears (down if up, and vice versa)
plane.toggleLandingGears(); 
//  5)
//  Noun:       pencil
//  action 1:   the pencil emits pencil lead particles for writing
pencil.emitLead();
//  action 2:   the pencil emits eraser rubber for erasing
pencil.emitEraser();  

//  action 3:   the pencil lead breaks
pencil.leadBreak();
 
//  6)
//  Noun:       apple
//  action 1:   the apple reflects light
apple.reflectLight();
//  action 2:   the apple bounces back against the floor when dropped
apple.bounce();

//  action 3:   the apple deteriorates, giving off a putrid aroma
apple.rot();
 
//  7)
//  Noun:       bird
//  action 1:   the bird flaps its wings
bird.flap();
//  action 2:   the bird pecks
bird.peck();
//  action 3:   the bird makes a cooing sound
bird.coo();
//  8)
//  Noun:       flower
//  action 1:   the flower opens its petals
flower.open();
//  action 2:   the flower wilts
flower.wilt();
//  action 3:   the flower drops a petal
flower.dropPetal();
 
//  9)
//  Noun:       cassette player
//  action 1:   the cassette player ejects the cassette
cassettePlayer.ejectCassette();
//  action 2:   the cassette player plays the cassette
cassettePlayer.playCassette();
//  action 3:   the cassette player stops playing the cassette
cassettePlayer.stopPlaying();
//  10)     
//  Noun:      toaster
//  action 1:  the toaster carriage closes to hold the bread
toaster.closeCarriage();
//  action 2:  the toaster heats the coils
toaster.heatCoils();
//  action 3:  the toaster releases the carriage to allow the spring to pop up the toast
toaster.releaseCarriage();
 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
