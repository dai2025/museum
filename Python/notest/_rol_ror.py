# Define a function to perform a left rotation (ROL) on a binary string
def rol(s, n):
    return s[n:] + s[:n]

# Define a function to perform a right rotation (ROR) on a binary string
def ror(s, n):
    return s[-n:] + s[:-n]

# Example usage
s = "11010011"
n = 2

# Perform a left rotation
s_rol = rol(s, n)
print("ROL:", s_rol)

# Perform a right rotation
s_ror = ror(s, n)
print("ROR:", s_ror)

"""
This code defines two functions, rol and ror, that take a binary string s and an integer n representing the number of bits to rotate. The rol function performs a left rotation, while the ror function performs a right rotation. The code then demonstrates how to use these functions with an example binary string 11010011 and a rotation of 2 bits. The output shows the results of performing a left rotation and a right rotation on the input string.
"""
