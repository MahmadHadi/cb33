why ->
    to check multiple conditions, 
    to make code more readable,
    DRY

&& - AND -> when all conditions are true 
|| - OR ->  when atleast one conditions are true 
!  - NOT 

1 > 2 && 2 > 1 -> 
false && true -> false 

1 > 2 || 2 > 1 -> 
false || false -> false 

! 
true => false 
false => true

1 < 2 || 2 < 1 -> t 
4 < 2 && 4 < 5 -> F 

1 < 2 || 4 < 2 || 5 > 2 || 5 < 1 || 5 < - 2 || 5 == 5 || 3 <= 11 -> t

4 < 2 && 3 > 2 && 5 < 2 && 6 > 4 && 5 ==5 && 2 <= -2 => f

(2 < 3 && 2 > 2 && 5 <= 2) || (3 > 2 && 2 > 5 && 3 == 2) -> 
f || f -> f 

(2 < 2 || 2 > 4 || 2 < 5 ) && (3 < 2 && 4 == 4 && 4 < 3) || (3 == 2 || 4 < 2 && 4 < 3) 

f || f  -> f 

f || f -> f 

