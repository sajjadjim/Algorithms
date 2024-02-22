def main():
    arr = []
    
    # Input size of array
    size = int(input("Enter size of array: "))
    
    # Input elements of array
    print("Enter elements in array: ")
    for _ in range(size):
        arr.append(int(input()))
    
    # Input element to search
    to_search = int(input("\nEnter element to search: "))
    
    # Assume that element does not exist in array
    found = False
    
    # Search for the element in the array
    for i in range(size):
        # If element is found in array, set found flag and terminate loop
        if arr[i] == to_search:
            found = True
            break
    
    # Print the result
    if found:
        print(f"\n{to_search} is found at index {i}")
    else:
        print(f"\n{to_search} is not found in the array")

if __name__ == "__main__":
    main()
