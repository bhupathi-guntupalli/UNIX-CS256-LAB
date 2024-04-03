echo "enter nth number to be generated ?"
read n
function fibonacci
{
  x=0
  y=1
  i=2
  # -lt stands for equal to
  while [ $i -lt $n ]  
  do
      i=$((i+1))
      z=$((x+y))
      x=$y
      y=$z
  done

  echo "$z"
}
fibonacci $n


