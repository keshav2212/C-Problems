try:
	t=int(input())
	for t in range(0,t):
		n,m=input().split()
		n,m=int(n),int(m)
		f=[]
		p=[]
		elements=input().split()
		for element in elements:
			f.append(int(element))
		elements=input().split()
		for i in elements:
			p.append(int(i))
		result=[]
		result1=[]
		for index,item in enumerate(f):
			if item not in result:
				result.append(item)
				result1.append(p[index])
			else:
				sample=result.index(item)
				result1[sample]=result1[sample]+p[index]
		small=result1[0]
		for item in result1:
			if item<small:
				small=item
		print(small)
except EOFError:
	pass