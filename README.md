Q1.) Buy and Sell Stock (Array Problem):   
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=problem-list-v2&envId=array 

Approach to Solve:
1.	Track the cheapest price so far:
Go through the prices one by one. Always remember the lowest price you’ve seen—this is your best day to buy so far.
2.	Check profit if selling today:
For each day, calculate how much profit you would make if you sell today after buying at the lowest price.
3.	Update maximum profit:
If the profit today is bigger than any profit you’ve seen before, update the maximum profit and note which days to buy and sell.
4.	Result:
After checking all days, you will know the maximum profit possible and the days to buy and sell to get it.

********************************************************************

Q2.) Baseball Game (Stack Problem): 
https://leetcode.com/problems/baseball-game/?envType=problem-list-v2&envId=stack 

Approach for Solve: 
1.	Store operations: Use a char array to store input operations.
2.	Track scores: Maintain an integer array record[] for valid scores and a count to track size.
3.	Process operations:

•	"C" → remove the last score (count--)

•	"D" → double the last score (2 * record[count-1])

•	"+" → sum last two scores (record[count-1] + record[count-2])

•	Number → read full integer using cin.putback()

4.	Compute sum: Add all scores in record[].
5.	Print output: Display the total sum in required format.

