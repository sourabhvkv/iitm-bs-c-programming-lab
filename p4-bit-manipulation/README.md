## Smart Lighting System Configuration

You are designing a smart lighting system for a 16-room building. Each room's light can either be ON or OFF. The state of light in each room is represented by the bits of the integer,n. Given the number n and set of room numbers to perform the following operations and print state of the lights(in binary format) in each step.

Task:

1. Toggle the lights of every nth room of the building
2. Turn on the lights of the given set of rooms
3. Turn off the lights of the given set of rooms
4. Apply an alternate lighting mask to simulate energy-saving lighting.
5. Number of lights are on at the end of the process.

Input Format:
Input consists of four lines.
1. First input consists of number n(decimal number),convert it to the binary value
2. Second line of input consists of the number n, where every nth room has to be toggled(1<=n<=16)
3. In the third line consists of the number represents the light of the room has to be turned on, which is terminated by -1.
4. In the fourth line consists of the number represents the light of the room has to be turned off, which is terminated by -1.

Output Format:
Output consists of six lines
1. 16 bit representation of the decimal number
2. Print the 16 bit representation, after Toggling every nth light
3. Print the 16 bit representation, after turning on the given set of lights
4. Print the 16 bit representation, after turning off the given set of lights
5. Print the 16 bit representation, after masking it
6. Print the total number of lights are on at the end of the process.


Sample Input:

```
563
5
2 8 -1
5 9 -1
```

Sample Output:

```
0000001000110011
After toggling every 5th room: 0100000000100011
After turning ON lights for maintenance: 0100000010100011
After turning OFF lights to save energy: 0100000010100011
After applying alternate lighting pattern: 1110101000001001
Total number of lights ON = 7
```

Explanation:

1. Input the initial state of the lights in decimal format and print it in binary.
2. For every kth room (using the step k), toggle the lights using XOR (^=).
3. Use OR (|=) to turn ON specific rooms based on user input.
4. Use AND with NOT (&= ~) to turn OFF specific rooms.
5. Use XOR (^=) with the mask 0xAAAA (binary: 1010101010101010) for the alternate lighting pattern.
6. Count the number of 1s (set bits) in the final binary representation of lights.
