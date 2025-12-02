n = int(input("Enter n (range 1 to n): "))

print("Enter", n-1, "numbers:")
arr = []

for _ in range(n - 1):
    arr.append(int(input()))

expected_sum = n * (n + 1) // 2
actual_sum = sum(arr)

missing = expected_sum - actual_sum

print("Missing number:", missing)
