def INSERTION_SORT(A):
    n = len(A)
    
    for i in range(1, n):
        key = A[i];
        j = i -1
        while j > -1 and A[j] > key:
            A[j+1] = A[j]
            j = j - 1;
        A[j+1] = key
        
# example
A = [12, 11.2, 13, 5, 6]

INSERTION_SORT(A)
print(A)
    
