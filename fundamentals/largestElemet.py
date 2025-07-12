arr = []
n = int(input())
for _ in range(n):
    num = int(input())
    arr.append(num)

def largest(arr):
    large = arr[0]
    for i in arr:
        if large < i:
            large = i
    return large

print(largest(arr))