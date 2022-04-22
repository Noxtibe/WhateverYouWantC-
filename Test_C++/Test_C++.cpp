#include <iostream>
#include <cstdlib>

    /*int rollDie()
    {
        int roll;
        int min = 1;
        int max = 6;

        roll = rand() % (max - min + 1) + min;

        return roll;
    }

    int main()
    {
        srand(time(0));
        for (int i = 0; i < 10; i++)
        {
            std::cout << rollDie() << std::endl;
        }
    }*/

/*int main()
{
    using namespace std;
    {
        int total = 0;
        int des1;
        int des2;

        cout << "Les des sont jetes !" << endl;
        srand(time(NULL));
        des1 = rand() % 6 + 1;
        des2 = rand() % 6 + 1;


        cout << "you got: " << endl;
        cout << des1 << "-" << des2 << endl;
        total = (des1 + des2);
        cout << total << endl;
    }*/





    //rolling two dice 40000 times
#include <iostream>
#include <cstdlib>
#include <time.h>
    using namespace std;

    constexpr int NumberOfTests = 40000;

    int main()
    {
        int face1 = 0, face2 = 0, sum = 0, roll = NumberOfTests;//declaring variables and total rolls
        srand(time(NULL));//setting random number

        int sumCounter[13]{};

        while (roll-- > 0) {


            face1 = rand() % 6 + 1;
            //cout << "Your first roll is " << face1 << endl;
            face2 = rand() % 6 + 1;
            //cout << "You second roll is" << face2 << endl;


            sum = face1 + face2;
            ++sumCounter[sum];
        }
        // Show result of rolling dices. Show number of different sums
        cout << "\n\nResult of experiment. Count of sums:\n";
        for (int k = 2; k <= 12; ++k) 
        {
            cout << "Sum: " << k << "\tCount: " << sumCounter[k] << '\n';
        }
        // Get theroretical values
        int potentialSumCounter[13]{};
        for (int d1 = 1; d1 <= 6; ++d1)
            for (int d2 = 1; d2 <= 6; ++d2)
                ++potentialSumCounter[d1 + d2];

        cout << "\n\nTheroretical count of sums:\n";
        for (int k = 2; k <= 12; ++k) 
        {
            double theroretical = 1.0 * potentialSumCounter[k] * NumberOfTests / 36;
            int deltaToExperimental = abs(potentialSumCounter[k] - theroretical);
            double delta = (1.0 * deltaToExperimental / sumCounter[k]) * 100;
            cout << "Sum: " << k << "\tCount: " << sumCounter[k]
                << "\tTheoretical: " << theroretical << "\tAccuracy: " << delta << "%\n";
        }
        return 0;
    }
