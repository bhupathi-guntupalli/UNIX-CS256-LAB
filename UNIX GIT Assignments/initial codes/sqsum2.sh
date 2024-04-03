sum=0

read -p "Enter the value of n: " n

for i in $(seq 1 1 $n)
do
    square=$((i*i))
    sum=$((sum+square))
done

echo "Sum of squares of $n numbers is: $sum"
