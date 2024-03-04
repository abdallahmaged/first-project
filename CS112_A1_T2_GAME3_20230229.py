# File: subtract square  game
# Purpose: In this game, A positive integer is wriiten down and two players take turns substracting squared integer values until one player leaves zero in which case the player is the winner
# Author: Abdallah maged abdelhamid elgably
# ID: 20230229

#welcome message  
print("welcome to subtract square game") 

# Ask the user if they want to choose the number of coins

choice = input("do you want to choose the number of coins yourself? (type 'yes' or 'no'):") 
 
# If the user chooses to input the number of coins themselves

if choice == 'yes': 
    while True:
     # Ask the user to input the number of coins 

     x = int(input("Please enter the num of coins : "))  
     # Generrate a list of square numbers up to the given number of coins 
     Square_Numbers = [] 
     y = 1 
     for i in range(0, x): 
         z = y * y 
         y += 1 
         Square_Numbers.append(z) 

     # Start the game loop    
 
     while True: 
        # Player1's turn 
        Player1 = int(input("Player1, please enter a square number: ")) 
        while Player1 not in Square_Numbers: 
          Player1 = int(input("Player1, please enter a valid square number: ")) 

          # Update the number of coins 
 
        x -= Player1 
        if x <= 0: 
         print("Player1 Wins!") 
         break 
        else: 
          print(f"Now the number of coins is {x}") 

          # Player2's turn  
 
        Player2 = int(input("Player2, please enter a square number: ")) 
        while Player2 not in Square_Numbers: 
         Player2 = int(input("Player2, please enter a valid square number: ")) 

         # Update the number of coins 
 
        x -= Player2 
        if x <= 0: 
          print("Player2 Wins!") 
          break 
        else: 
            print(f"Now the number of coins is {x}")

# If the user chooses not to input the number of coins themselves           
elif choice == "no": 
  import random

  # Generate a random number of coins   
  while True:
   x = random.randint (1 ,400) 
   

   print(f"Now the number of coins is {x}")


   # Generate a list of square numbers up to the given number of coins  
   break
   
  square_numbers = [i*i for i in range(1, int(x**0.5)+1)]

  # Start the game loop 
 
  while True: 
   
   # Player1's turn 
    Player1 = int(input("Player1, please enter a square number: "))  
    while Player1 not in square_numbers : 
     Player1 = int(input("Player1, please enter a valid square number: ")) 
 
    x -= Player1 
    if x <= 0: 
     print("Player1 Wins!") 
     break 
    else:  
     print(f"Now the number of coins is {x}") 

    # Player2's turn 
 
     Player2 = int(input("Player2, please enter a square number: "))  
     while Player2 not in square_numbers : 
      Player2 = int(input("Player2, please enter a valid square number: ")) 

  
     # Update the number of coins 
 
    x -= Player2 
    if x <= 0: 
     print("Player2 Wins!") 
     break 
    else: 
       print(f"Now the number of coins is {x}")


# If the user enters neither 'yes' nor 'no'    
else: 
        print("please enter 'yes' or 'no' only.")
   


         
   










  
      

   









