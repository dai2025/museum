import sys

print("Hello World!", file = sys.stdout)
print("Error", file = sys.stderr)
sys.stderr.write("stderr")
sys.exit(1)
