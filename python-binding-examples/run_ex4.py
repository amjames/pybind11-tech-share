import cppimport.import_hook
import cpp.example4 as example4

p = example4.Pet("Spot")
print(p)
print(f"p.name_attr: {p.name_attr}")
print(f"p.name_prop: {p.name_prop}")
p.name_attr = "Set via attr - Fluffy"
print(p.name_prop)
p.name_prop = "Set via prop - Spike"
print(p.name_attr)
