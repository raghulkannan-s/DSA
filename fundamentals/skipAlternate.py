arr = []
n = int(input())
for _ in range(n):
    num = int(input())
    arr.append(num)

def getAlternates(arr):
    alt = []
    for i in range(len(arr)):
        if i % 2 == 0:
            alt.append(arr[i])
    return alt

print(getAlternates(arr))