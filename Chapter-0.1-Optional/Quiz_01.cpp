// A bitwise rotation is like a bitwise shift, except that any bits shifted off one end are added back to the other end.
// For example 0b1001 << 1 would be 0b0010, but a left rotate by 1 would result in 0b0011 instead.
// Implement a function that does a left rotate on a std::bitset<4>. For this one, it’s okay to use test() and set().
#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
	// 1. Check if the MSB (index 3 for a bitset of size 4) is 1
    bool msb = bits.test(3);

    // 2. Perform a standard left shift
    // This moves bits [2->3], [1->2], [0->1] and sets index 0 to 0.
    bits <<= 1;

    // 3. If the original MSB was 1, set the LSB (index 0) to 1
    if (msb) {
        bits.set(0);
    }
    // Note: If msb was 0, b.test(0) is already 0 from the shift.

    return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}
