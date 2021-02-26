# shell programming 

#handling command line args

# string reversal
echo Hi my name is Kulvir | rev

#if else
a=6
b=77
if [ $a == $b ]
then 
 echo "a is equal to b"
else
 echo "a is not equal to b"
fi

#if else nested
x=40
y=20
z=30
if [ $x > $y ]
then    
 if [ $x > $z ]
 then 
  echo "x is the greatest"
 else
  echo "z is the greatest"
 fi
else
 if [ $y > $z ]
 then 
  echo "y is the greatest"
 else
  echo "z is the greatest"
 fi
fi

#switch case
bikes="avenger"
case "$bikes" in 
	"bullet") echo "Royal Enfield" ;;  
	"avenger") echo "Bajaj" ;; 
	"ninja") echo "Kawasaki" ;; 
esac 
