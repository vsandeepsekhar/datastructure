#!/usr/bin/python  
class Stack() :
	def __init__(self):
		self.items = []
	def push(self, item):
		self.items.append(item)
	def pop(self):
		return self.items.pop()
	def is_empty(self):
		return (self.items == [])
	def getElements(self):
		return self.items

def expression_validity(str):
	TRUE = 0
	stack = Stack()
	exp = ['{','}','(',')','[',']']
	exp_close = ['}',')',']']
	for number in str:
		if number in exp:
			stack.push(number)		
	print stack.getElements()
	raw_input("Enter to continue")
	while not stack.is_empty():
		if not stack.is_empty():
			ch = stack.pop()
			if ch == "}":
				if stack.pop() == "{":
					print "Matched with }"
					TRUE+=1 
			elif ch == "]":
				if stack.pop()== "[":
					print "Matched with ]"
					TRUE+=1 
			elif ch == ")":
				if stack.pop() == "(":
					print "Matched with )"
					TRUE+=1 
			else:
				print "Not a Bracket.."
 
	print stack.getElements()
	if TRUE >= 1:
		return 1;
	else:
		return 0;



mydata = raw_input('Enter Expression: ')
value = expression_validity(mydata);
if value == 1:
	print "Valid Expression"
else:
	print "Invalid Expression"

