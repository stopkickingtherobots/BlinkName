// ------------
// Blink my name in Morse Code
// Task 2.1
// 26 March 2018
// ------------



// First, we're going to make some variables.
int led1 = D0; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

// Function declarations for the two morse signals, dot and dash
void dot();
void dash();

void dot() 
{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);
}
  
void dash() 
{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(1000);
}

// Function declarations for letters used
void letterB();
void letterE();
void letterN();

void letterB()
{
    dash();
    dot();
    dot();
    dot();
}

void letterE()
{
    dash();
}

void letterN()
{
    dash();
    dot();
}

// Having declared these variables and functions, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
    // My name is Benn
    
    letterB();
    letterE();
    letterN();
    letterN();

    // And repeat!
}