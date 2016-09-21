/**
 * Send Morse messages at different speeds; also use a different pitch.
 */

#include <morse.h>

#define PIN13	13
#define PIN12	12
#define PIN11	11
#define PIN10	10
#define PIN9	9
#define PIN8	8
#define PIN7	7
#define PIN6	6

#define PIN_SPEAKER	3

// C above middle C
#define FREQUENCY	523

#define NUM_SPEEDS	1
#define MORSE_WORD      String("i   c   o   s   a   h   e   d   r   o   n   eeeee      ")
const float wpms[] = {34.29}; //, 7.5, 10.0, 13.0, 15.0};
const morseTiming_t durations[] = {34.29}; //, 40.0, 48.0, 60.0, 80.0};

LEDMorseSender pin13_LEDSender(PIN13, 5.0);
LEDMorseSender pin12_LEDSender(PIN12, 5.0);
LEDMorseSender pin11_LEDSender(PIN11, 5.0);
LEDMorseSender pin10_LEDSender(PIN10, 5.0);
LEDMorseSender pin9_LEDSender(PIN9, 5.0);
LEDMorseSender pin8_LEDSender(PIN8, 5.0);
LEDMorseSender pin7_LEDSender(PIN7, 5.0);
LEDMorseSender pin6_LEDSender(PIN6, 5.0);

SpeakerMorseSender speakerSender(PIN_SPEAKER, FREQUENCY, -1, 5.0);

unsigned int speedIndex = 0;
unsigned int lastChangeTime;

void setupSender(MorseSender sender)
{
  	sender.setup();
	sender.setMessage(MORSE_WORD);

}

void setup()
{
  
//  setupSender(pin13_LEDSender);
//  setupSender(pin12_LEDSender);
//  setupSender(speakerSender);
	pin13_LEDSender.setup();
	pin13_LEDSender.setMessage(MORSE_WORD);

	pin12_LEDSender.setup();
	pin12_LEDSender.setMessage(MORSE_WORD);

	pin11_LEDSender.setup();
	pin11_LEDSender.setMessage(MORSE_WORD);

	pin10_LEDSender.setup();
	pin10_LEDSender.setMessage(MORSE_WORD);

	pin9_LEDSender.setup();
	pin9_LEDSender.setMessage(MORSE_WORD);

	pin8_LEDSender.setup();
	pin8_LEDSender.setMessage(MORSE_WORD);

	pin7_LEDSender.setup();
	pin7_LEDSender.setMessage(MORSE_WORD);

	pin6_LEDSender.setup();
	pin6_LEDSender.setMessage(MORSE_WORD);

	speakerSender.setup();
	speakerSender.setMessage(MORSE_WORD);
}

void sendMorse(LEDMorseSender sender)
{
  	if (!sender.continueSending())
	{
		sender.startSending();
	}
}

void loop()
{
//  sendMorse(pin13_LEDSender);
//  sendMorse(pin12_LEDSender);
//  sendMorse(speakerSender);

	if (!pin13_LEDSender.continueSending())
	{
		pin13_LEDSender.startSending();
	}
	if (!pin12_LEDSender.continueSending())
	{
		pin12_LEDSender.startSending();
	}
	if (!pin11_LEDSender.continueSending())
	{
		pin11_LEDSender.startSending();
	}
	if (!pin10_LEDSender.continueSending())
	{
		pin10_LEDSender.startSending();
	}
	if (!pin9_LEDSender.continueSending())
	{
		pin9_LEDSender.startSending();
	}
	if (!pin8_LEDSender.continueSending())
	{
		pin8_LEDSender.startSending();
	}
	if (!pin7_LEDSender.continueSending())
	{
		pin7_LEDSender.startSending();
	}
	if (!pin6_LEDSender.continueSending())
	{
		pin6_LEDSender.startSending();
	}
	if (!speakerSender.continueSending())
	{
		speakerSender.startSending();
	}
}
         
