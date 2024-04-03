arr=(10 20 30 40 50 30 30)
echo ${arr[@]}
read -p "enter the target element" target

count=0
for num in "${arr[@]}"
do
    if [ $num -eq $target ]; then
        count=$((count+1))
    fi
done


echo "The target $target is repeated $count times in the array."

