import re

f = open("new_parser.y", "r")
g = open("new_grammar.y", "w")

lines = f.read()
para = ""
for line in lines:

re.sub("\{.*?\}", "", lines)
g.write(lines)
