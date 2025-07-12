arr = []
n = int(input())
for _ in range(n):
    num = int(input())
    arr.append(num)

def arraySum(arr):
    sum = 0
    for i in arr:
        sum = sum + i
    return sum

print(arraySum(arr))