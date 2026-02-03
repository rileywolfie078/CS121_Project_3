#Given Functions:
    #Void advance(int horseNum, int* horses);
    #Void printLane(int horseNum, int* horses);
    #Vool isWinner(int horseNum, int* horses);

#Randomization:
    #include <random>
    #std::random_device rd;
    #std::uniform_int_distribution<int> dist(0, 1);
    #coin = dist(rd);

#Algorithm:
    #advance():
        #Need 5 integers (0-4) for the horses
            #horseNum
        #Need 5 position values for each horse's positions (starting at 0)
        #Need to have some sort of coin flip (H's and T's) randomization.
            #Add coin value to horse's position
    #Need while loops to run the randomization
    #Need while loops to keep the game going
    #printLane:
        #For loop 0 to TRACK_LENGTH-->i:
            #if i == horse position:
                #print horseNum
            #else:
                print "."
    #Print the winning horse isWinner():
        #result = FALSE
        #if horse position += TRACK_LENGTH:
            #result = true
            #print horseNum as winner
        #return result

