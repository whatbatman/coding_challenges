
loop over each string, and compare it letter by letter to the rest of the strings in the list.
keep track of the matching characters

f
f
f

f l
f l
f l

f l o
f l o
f l i <-- problem

once you hit a character that doesn't match then you know you're gonezo

iterate for the length of the shorest string in the list

```python
word = ""
for c in "flow":
  if "flower"[c] == "flow"[c] == "flight"[c]:
    word += c
    continue
  else:
    return word
return word
```
