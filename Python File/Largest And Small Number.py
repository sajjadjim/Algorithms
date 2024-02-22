def main():
    a = []  # Create an empty list to store elements
    n = int(input("How many elements: "))  # Input the number of elements
    print("Enter the Array:")
    
    for _ in range(n):  # Input the elements of the array
        a.append(int(input()))
    
    large = small = a[0]  # Initialize variables to store largest and smallest elements
    
    for i in range(1, n):  # Iterate through the elements of the array
        if a[i] > large:   # Update largest element if current element is larger
            large = a[i]
        if a[i] < small:   # Update smallest element if current element is smaller
            small = a[i]
    
    print("The largest element is", large)
    print("The smallest element is", small)

if __name__ == "__main__":
    main()
