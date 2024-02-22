def main():
    n = int(input("Enter the number: "))  # Input the number
    
    if n == 1:
        print("1 is neither prime nor composite.")
        return
    
    count = 0  # Initialize a count variable
    
    for i in range(2, n):  # Check for factors
        if n % i == 0:
            count += 1
    
    if count == 0:  # Check whether the number is prime or not
        print(f"{n} is a prime number.")
    else:
        print(f"{n} is not a prime number.")

if __name__ == "__main__":
    main()
