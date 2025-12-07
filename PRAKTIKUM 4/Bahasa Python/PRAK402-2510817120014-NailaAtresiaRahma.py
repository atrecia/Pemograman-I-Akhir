input = int(input())
for x in range(1,input+1,2):
    print(x, end=' ')
print()
for x in range(input,1,-1):
    if x%2==0:
        print(x, end=' ')