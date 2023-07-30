# SK-5CV
Arduino code to implement CV out to a CASIO SK-5 keyboard

Hardware needed: Arduino nano,  MCP4725, Casio SK-5

## What this code does ?

It uses an arduino nano to capture played keys on a CASIO SK-5 and output a unique voltage for each played key via a MCP4725 DAC.


## How to connect ?

Connect ARDUINOs pins 2 to 13 to SK-5 keybed connector. See video to locate it.

Pay attention: keybed pins 2,3,4,5 are octave/section modulation controls,connect them to PIND & B01111000

while pins 1,6,7,8,9,10,11,12 code notes C to B -> connect them to PIND & B00000100 , which is areduino input 2 , PINB & B10111111 , which are areduino inputs 7,8,9,10,11,12 & 13

At this point check if the keys are being properly capture using the serial monitor.

Next connect the DAC to the Arduino. Connection varies a little depending on your DAC model, so please google for checking how your specific DAC would be connected.

Check for the voltages out from the DAC. You can adjust them in the code , as each note in the SK-5 has a unique line in the code with its associated voltage our.

I suggest you check the links in the Thanks section for the images I used as reference when I put this together.

## Video 

https://youtu.be/Tevi8k_pdds

I connected the DAC to a KORG Monotron delay CV in.


## Thanks To:

Marwan Ghamloush article and code: 

https://medium.com/@mero11.gh/midi-fying-an-old-casio-digital-keyboard-6a9ae9f3092b

Whoever saved this old UMR midi connection guide for SK-1 (which is the same for SK-5)

https://blanc.neocities.org/downloads/UMR2/Forums/Casio%20sk1_umr2.pdf (Download it now, while available)


## Final Note

The code is poorly commented, as originaly I did not intend to distribute it. If there is an interest I will improve it.
