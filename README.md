# Nom

 Too early in dev to be worth checking out

Nom lang is a dynamically typed lightweight functional language focusing on simplicity and embeddability.

Example factorial program written in Nom:


    factorial = function(n):
      if n <= 1:
        return n
      end
      else:
        return n * factorial(n-1)
      end
    end
    
    f = factorial(5)
    print(f)
