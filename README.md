# Calculate Mean, Median, and Mode using c++
Explanation:
Mean Calculation:

Sum all the elements in the array.
Divide the sum by the number of elements.
Median Calculation:

Sort the array.
If the number of elements is odd, return the middle element.
If the number of elements is even, return the average of the two middle elements.
Mode Calculation:

Use a hash map (unordered_map) to count the frequency of each element.
Find the element with the highest frequency.
Compilation and Execution:
Save the code to a file, for example, calculate_stats.cpp.
Compile the code using a C++ compiler:
sh
Copy code
g++ calculate_stats.cpp -o calculate_stats
Run the compiled program:
sh
Copy code
./calculate_stats
This will output the mean, median, and mode for the sample list of numbers provided. You can replace the data vector with your own dataset to calculate these statistics for different sets of numbers.





