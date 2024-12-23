## Smart Lighting System Configuration

You are designing a smart lighting system for a 16-room building. Each room's light can either be ON or OFF. Initially, all lights in the building are OFF. Perform the following operations step by step to configure the lighting system by printing print state of the lights in each step:

1. Enter any room number of your choice (1 ≤ n ≤ 16). Upon entering a room, toggle the light in that room and in every nth room after it. (For example, if you enter Room 3, toggle the lights in Room 3, Room 6, Room 9, Room 12, and Room 15).
2. After toggling, turn ON the lights in given room numbers to prepare for maintenance.
3. Turn OFF the lights in given room numbers  to save energy in unused rooms.
4. Simulate a power-saving mode by applying an alternate lighting pattern across all rooms. The pattern alternates lights ON and OFF, starting with Room 1.
5. Print how many lights remain on in the building at the end of the process.

Input Format:
Input consists of three lines.
First line of input consists of the number n, where every nth room has to be toggled(1<=n<=16)
Second line of input consists of numbers, where the light of the room has to be turned on.If the number is -1, stop getting the input from the user.
Third line of input consists of numbers, where the light of the room has to be tuned off. If the number is -1, stop getting the input from the user.


Sample Input:

5
2 8 -1
5 10 -1

Sample Output:

0000000000000000
After toggling every 5th room:
0000100001000010
After turning ON lights for maintenance:
0100100101000010
After turning OFF lights to save energy:
0100000100000010
After applying alternate lighting pattern:
0001010001010111
Final Step: Total number of lights ON = 7
