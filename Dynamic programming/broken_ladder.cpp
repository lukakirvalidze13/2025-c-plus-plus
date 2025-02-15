#include <iostream>
using namespace std;
int main(){


    /*პატარა თინიკო ძალიან ხალისობს ხოლმე კიბეზე თამაშისას. დღეს მან გადაწყვიტა შემდეგნაირად ითამაშოს: 
    უნდა დადგეს კიბის დასაწყისში (ქვემოთ) და უნდა მიაღწიოს კიბის ბოლოს (ყველაზე ზედა საფეხურს),
     ოღონდ ისე, რომ ერთ სვლაზე ერთი ან ორი საფეხურით მაღლა გადაინაცვლოს ხოლმე.
    საქმეს ის ართულებს, რომ კიბის ერთ-ერთი საფეხური ჩატეხილია და თინიკოს მასზე დაბიჯება არ შეუძლია.
    გამოთვალეთ, სვლების რამდენი განსხვავებული ვარიანტით შეიძლება მოხვდეს თინიკო კიბის ყველაზე ზედა საფეხურზე.*/

    int n, x;
    cin >> n >> x;

    int dp[n+1];

    dp[0] = 1;  // There's 1 way to be at the starting point (step 0)

    if (x != 1) { // If the first step isn't broken
        dp[1] = 1; // There's 1 way to reach the first step
    } else {
        dp[1] = 0; // If the first step is broken, there's 0 ways to reach it
    }


    for (int i = 2; i <= n; i++) {
        if (i == x) {
            dp[i] = 0; // If this step is broken, there are 0 ways to reach it
        } else {
            dp[i] = 0; // Initialize ways to reach step i to 0.

            if (i >= 1) { //Can we reach from i-1?
                dp[i] += dp[i - 1]; // Add the number of ways to reach the previous step
            }
            if (i >= 2) { //Can we reach from i-2?
                dp[i] += dp[i - 2]; // Add the number of ways to reach the step before the previous
            }
        }
    }
    
    cout << dp[n] << endl;


    return 0;
}