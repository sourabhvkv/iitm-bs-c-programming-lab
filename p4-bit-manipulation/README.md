## Smart Lighting System Configuration

You are designing a smart lighting system for a 16-room building. Each bit in a 16-bit number represents whether the light in a room is ON (1) or OFF (0). Initially, all lights are OFF (0000000000000000). 

Perform the following operations:

- During the nth iteration, toggle the light in the nth room (1 ≤ n ≤ 16).
- After toggling, turn ON the lights in rooms 5, 7, 9, and 11 to prepare for maintenance. 
- Turn OFF the lights in rooms 6, 10, and 15 to save energy in unused rooms.
- Apply an XOR operation with the mask 1010101010101010 to simulate alternate lighting during a power-saving mode.
- How many lights remain ON in the building at the end of this process?