
import cppimport.import_hook
import cpp.example2 as example2

print("example2.subtract.__doc__:")
print(example2.subtract.__doc__)
print("example2.subtract_cat.__doc__:")
print(example2.subtract_cat.__doc__)

print(f"example2.subtract(b=7): {example2.subtract(b=7)}")
print(f"example2.subtract(a=5): {example2.subtract(a=5)}")
print(f"example2.subtract(a=2, b=5): {example2.subtract(a=2, b=5)}")
print(f"example2.subtract(b=2, a=5): {example2.subtract(b=2, a=5)}")

print(f"example2.subtract_cat(b=5):")
try:
    example2.subtract_cat(b=5)
except TypeError as e:
    print(f"\t {e}")

print(f"example2.subtract_cat(a=5): {example2.subtract_cat(a=5)}")
