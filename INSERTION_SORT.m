function A = INSERTION_SORT(A)
n = length(A);
for i = 2:n
    key = A(i);
    % Insert A(i) into the sorted subarray A(1:i-1)
    j = i - 1;
    while j > 0 && A(j) > key
        A(j+1) = A(j);
        j = j - 1;

    end
    A(j+1) = key;

end

end