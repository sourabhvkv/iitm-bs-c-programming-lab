5## Smart Lighting System Configuration

You are designing a smart lighting system for a 16-room building. Each room's light can either be ON or OFF. The state of light in each room is represented by the first 16 bits of an integer, $n$. Given the number n, perform the below tasks and print the state of the LED after each step.

Assume room number 1 correspond to the LSB and increases all the way to 16 which correspond to the MSB.

**Tasks**

1. Toggle the lights of every $k$th room of the building from the left.
2. Turn on the lights of the given set of rooms.
3. Turn off the lights of the given set of rooms.
4. Toggle the lights in the even room numbers.
5. Find the number of lights are on at the end of the process.

**Input Format**

Input consists of four lines.
1. First line consists of positive integer n (as decimal number), whose bits represents the initial lighting configuration.
2. Second line of input consists of the number $k$, where every nth room has to be toggled(1<=k<=16)
3. In the third line consists of the numbers that represent the room number for which the lights has to be turned on and is terminated by -1.
4. In the fourth line consists of the numbers that represent the room number for which the lights has to be turned off and is terminated by -1.

**Output Format**

Output consists of six lines
1. 16 bit representation of the decimal number.
2. 16 bit representation, after toggling every nth light.
3. 16 bit representation, after turning on the given set of lights.
4. 16 bit representation, after turning off the given set of lights.
5. 16 bit representation, after toggling lights in even room numbers.
6. Total number of lights are on at the end of the process.


**Sample Input**

```
563
5
2 8 9 -1
5 9 -1
```

**Sample Output**

```
0000001000110011
After toggling every 5th room: 0100000000100011
After turning ON the given lights: 0100000110100011
After turning OFF the given lights: 0100000010100011
After toggling lights in even rooms: 1110101000001001
Total number of lights ON = 7
```

**Explanation**

1. First line has the 16-bit binary representation of the bits.  
   $563_{10}$ -> $1000110011_{2}$ -> $0000001000110011$ (as 16 bit)
2. After toggling every 5th room.  
   ```
   0000 0010 0011 0011
   0100 0000 0010 0011
   ```
3. After turning ON lights in room number 2, 8 and 9.  
   ```
   0100 0000 0010 0011
   0100 0001 1010 0011 (2 is already ON so no change)
   ```
4. After turning OFF lights in room 5 and 9.
   ```
   0100 0001 1010 0011
   0100 0000 1010 0011 (5 is already OFF so no change)
   ```
5. After toggling lights in even rooms.
   ```
   0100 0000 1010 0011
   1110 1010 0000 1001
   ```
6. The number of bits set in the final represenation in 7.
