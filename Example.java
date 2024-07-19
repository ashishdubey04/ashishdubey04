class Example {

	public static void main(String [] args) {
		
		System.out.println(" hello word ! ");



Zero Count
Problem Description
You are given a binary string B of length L which contains K ones and remaining zeros. You are required to place the K ones in the binary string in such a way that the longest consecutive zeros have the least length possible. Once such a binary string is constructed, you are required to print the length of the contiguous block of zeros, which has the largest length.

Constraints
0 <= K <= L
1 <= L <= 10^6

Input
Single line consisting of two space separated integers denoting L and K.

Output
Print a single integer denoting the length of the longest consecutive zeros as per the problem.

Time Limit (secs)
1

Examples
Example 1

Input

3 1

Output

1

Explanation

B is of length 3 and it has 1 one's.

So the possible strings as per the problem are 010, 001, 100.

In the first case, the maximum length of consecutive zeros is 1 whereas in the other two cases it is 2. Hence the constructed binary string is 010 and the output is 1.

Example 2

Input

3 3

Output

0

Explanation

B is of length 3 and it has all three one's. There is no block of zeros, hence the output is 0.






Folded Area
Problem Description
Konan is an origamist. Origami is the art of folding paper, and an origamist is a person who practices origami. She is currently working on an origami character-making tutorial, where she needs to draw figures to represent each folding step.

The sheet will be in square shaped and will be placed on origin towards the first quadrant. Initially, she will draw a line on the origami sheet. This is called as "folding line" through which the paper is going to get folded. Imagine walking along the folding line from starting point to ending point. Split the regions into left and right side regions.The left side region of the folding line will always folded onto the right side region. The folding line will always separate the sheet into two regions.

The sheet will be having four corners initially. A corner is basically a point where two adjacent sides of the given figure meets. After folding the paper along the folding line, you will get a new polygon. Given the area of the sheet and the cordinates of the folding line, your task is to print all the co-ordinates of the corners of the folded sheet,(resulting polygon).Ensure the points are printed in the clock wise direction starting from the origin.

Constraints
3 < Area of the sheet < 37

The starting and Ending point of the folding line will always on the edges / corners of the square

Input
The first line contains the area of the sheet.

Second line consists of four space separated integers representing the folding line. First two values representing (x, y) of starting point, second two values representing (x ,y) of ending point.

Output
It contains M lines, where M is the number of corners of the polygon resulting after folding

Each line contains two space separated values representing the (x ,y) of the current corner point

Restrict the output of points up to two decimal places.

Print the (x,y) co ordinates of polygon points obtained after folding in sorted order of x co ordinate,followed by y co ordinate

Time Limit (secs)
1

Examples
Example 1

Input

4

0 1 1 2

Output

0.00 0.00

0.00 1.00

1.00 2.00

2.00 0.00

2.00 2.00

Explanation

The area will be four so the sheet will have sides of 2 units and it will be represented as (0,0), (0,2), (2,2), (2,0). And the folding line be (0,1),(1,2)

com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@7cc586a8:image1.pngcom.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@7cc586a8:image2.png

After folding,

com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@7cc586a8:image3.pngcom.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@7cc586a8:image4.png

since the folded region(left side) lies completely inside the right side, the edges of the new polygon are (0.0),(0,1),(1,2),(2,2),(2,0)

Hence the output is

0.00 0.00

0.00 1.00

1.00 2.00

2.00 0.00

2.00 2.00

Example 2

Input

9

0 1 3 2

Output

0.00 0.00

0.00 1.00

0.75 0.00

1.20 -0.60

2.00 0.00

3.00 0.00

3.00 0.75

3.00 2.00

3.60 1.20

Explanation

com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@7cc586a8:image5.pngcom.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@7cc586a8:image6.png

com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@7cc586a8:image7.pngcom.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@7cc586a8:image8.png







SuperMarket
Problem Description
In a Super market we will find many variations of the same product. In the same way we can find many types of rice bags which differ in its quantity, price, brand, and type of rice in it.

Many variations of same products exist in a super market. Consider rice for example. We get it in varying quantities (q) and at different prices (p).

Thus rice bag is unique combination of {q,p}. Customers want to buy the rice bags of their own choices. Each bag has two attributes price and the quantity of rice. The customers have some conditions for buying the rice bags, they have a specific price and quantity that have to be compared with the rice bags before buying them. If the price of rice bag is less than or equal to the customer's preference and if the quantity is more than given preference, then he/she will buy it. There is only one bag of each type and each customer can buy at most one bag.

Given n,m representing the number of customers and rice bags respectively, along with the variations of rice bags available in the market and the preferences of customers, find the maximum number of bags that can be sold by the end of the day.

Constraints
1 <= n, m <= 1000

1 <= a, b <= 10^5

1 <=p, q<= 10^5

Input
The first line contains two space separated integers n and m denoting the number of customers and number of rice bags respectively.

Next n lines consist of two space separated integers a and b denoting customer's preferences viz. customer's quantity and cost preferences, respectively.

Lastly, the next m lines consist of two space separated integers q and p denoting the bags quantity and cost, respectively.

Output
Print the maximum number of rice bags that can be sold.

Time Limit (secs)
1

Examples
Example 1

Input

5 4

35 2400

70 5500

87 6000

20 1700

12 500

50 2500

75 4875

100 7000

25 1250

Output

2

Explanation

Since price of bag should be less than or equal to customer's preference and the quantity should be greater than the preferred quantity, customer 2 can buy bag 2 and customer 4 can buy bag 4.

So, in total, 2 bags can be sold to the customers.

Example 2

4 7

32 1500

58 5000

87 6200

45 3000

20 1200

60 4500

100 6000

80 5500

35 1400

40 2000

50 2800

Output

4

Explanation

Since price of bag should be less than or equal to customer's preference and the quantity should be greater than the preferred quantity, customer 1 can buy bag 5, customer 2 can buy bag 2, customer 3 can buy bag 3 and customer 4 can buy 7th bag.

So, in total, 4 bags can be sold to the customers.










Klaara's Fortress
Problem Description
Queen Klaara is the ruler of Fairy Land. Her fortress has several adjacent rooms resembling a matrix-like structure, and she is renowned for possessing unique diamonds. Kings and Queens of different Kingdoms will visit her fortress to see the jewellery. The Fortress has one Entrance at the top left (0,0) and exit at the bottom right (m-1,n-1).

One day a person from neighboring kingdom thought of stealing as much as he can, from the queen Klaara's jewellery room. The thief thought that he can anonymously enter, rob, and exit the fort. But at the entrance itself, he was caught and the watch keepers started chasing him from the point where he entered into the fort. Now from there, he is trying to reach the room having the exit.

Klaara came to know about this and she thought of using the newly bought automatic locking application. Using this device, she can lock a room from all sides. Some of the rooms are already locked and no entry/exit into them. Every other room will be having its gates open for left,right,up and down rooms (if there are adjacent rooms).

The thief is wise and already aware of the fortress structure so he is trying to escape early by choosing the shortest path, but Klaara is aiming for increasing the path length using this application. She cannot lock a room if it results in no path between Entrance and exit, since visitors will be blocked and then klaara will have to make robbery information public. Klaara can use this application only one time. To move from one room to another room, thief needs 1 minute. The structure of the fortress is given. "1" represents locked room and "0" represents open room.

Find the max time that thief will take to reach the exit from the entrance of the fortress. considering

klaara can block at most one room.
klaara cannot block the room which result is no path between entrance and exit.
the thief will choose the shortest path to exit.
Constraints
3 <= M, N <=20

Input
First line consists of two integers M,N denoting the number of rows and columns.

Next M lines contain N space separated integers which will represent the structure of the fortress.

Output
Print the time taken to reach the exit by the thief.

Time Limit (secs)
1

Examples
Example 1

Input

5 5

0 0 0 0 0

1 1 1 0 0

0 0 0 0 1

0 1 1 0 1

0 0 0 0 0

Output

15

Explanation

If Klaraa locks the room at position (3,3) (0-indexed), then the thief have to take the path - (0,0) -> (0,1) -> (0,2) -> (0,3) -> (1,3) -> (2,3) -> (2,2) -> (2,1) -> (2,0) -> (3,0) -> (4,0) -> (4,1) -> (4,2) -> (4,3) -> (4,4) i.e. he will need 15 minutes for exiting the fortress.

Blocking no other cell will result in longest path taking more than 15 minutes between entry and exit

Example 2

Input

5 5

0 1 0 0 0

0 0 0 0 0

0 1 0 0 1

0 1 1 0 0

1 0 1 1 0

Output

9

Explanation

Here max 9 minutes will be taken by the thief to reach the exit. Blocking rooms like (2,2),(1,3) will result in the same time.







Conflict Free Team
Problem Description
You are a project manager in a large IT company. You need to select a team of employees to work on a project. You have a list of employees who are eligible for the selection. Employees are indexed from 1 to N.

However, there is a certain rule that must be followed in order to select the team. There are some employees who have some personal conflicts and they can't be in a team together. Also, each employee has a skill value assigned to them, representing their level of expertise. As a project manager, your task is to select a team of employees such that the total expertise of the team should be maximum, keeping the employees incompatibility in mind. Two employees are said to be incompatible if they have any conflicts among them.

Given the employees, their level of expertise value and employee pairs with conflicts, find the maximum possible expertise of the team.

Note: The selected team can contain one employee also.

Constraints
1 <= n <= 1000

0 <= c <= 100

1 <= expertise[i] <=10^4

Input
First line consists of two integers n,c separated by space, representing the number of employees and number of pairs having conflicts.

Next c lines, each consists of two integers separated by space. These represents the id of the employees having conflicts between them.

Last line consists of n integers separated by space, where ith integer represents the expertise level of ith employee.

Output
Print a single integer denoting the maximum possible expertise of the team.

Time Limit (secs)
1

Examples
Example 1

Input

8 6

1 2

2 5

3 6

6 8

1 4

7 8

7 5 4 3 1 6 2 9

Output

21

Explanation

You can form a team with employees [3, 1, 5, 8] who don't have any conflicts among themselves and the total expertise of the team is the sum of skill values of all employees i.e., 4+7+1+9 = 21. No other combination of employees will give an expertise which is greater than 21.

Example 2

Input

10 4

1 5

3 9

2 5

7 10

2 6 3 8 12 9 7 14 1 10

Output

56

Explanation

You can form a team with employees [5, 10, 3, 4, 6, 8] who don't have any conflicts among themselves and the total expertise of the team is the sum of skill values of all employees i.e., 12+10+3+8+9+14 = 56. No other combination of employees will give an expertise which is greater than 56.







Good String
Problem Description
A picnic to a famous museum is being planned in a school for class VI. When they reached the spot, the students started quarreling among themselves in the queue. So the teacher came up with an idea of "good string" which is explained below.

Good String is provided as input. All letters in this string are good letters. Good letters need to be used in further computations as explained below.

The teacher asked all the students to convert their names into good names with the help of good string. While converting, they have to calculate the distance. Based on that, she will arrange the students in a queue.

For converting a name into good name, for each letter i in the name, select the nearest letter from the good name. Distance is calculated as the differences between the ASCII values of i and selected good letter. If there are two letters which are equidistant from i, select the letter which is nearest to the previously used good letter. In that case, distance will be the difference of ASCII value of previously used good letter and selected letter. If i is already present in the good string then no need to change it. Initially, previous good letter will be the first letter of good string. Calculate the total distance of the given name.

Given the name of the student who is confused of implementing this task. Help him to calculate the total distance for his name.

Note: Letters from good string can be reused any number of times.

Constraints
1 <= len(good string) <= 100

1 <= len(name) <= 10^4

Good string will consist of lower, upper case alphabets,digits and symbols.

Name will consist of only space,lower and upper case alphabets.

Characters are case sensitive.

The ASCII values for all the characters in the good string and name will be between 32 to 126 (both inclusive).

Input
First line consists of good string.

Second line consists of the name of the student who is confused to implement the task.

Output
Print the total distance for that name.

Time Limit (secs)
1

Examples
Example 1

Input

(@HR*i{kcQl

Vyom

Output

10

Explanation

i

Previous good letter

Current good letter for i

V

(

R

y

R

{

o

{

l

m

l

l

The total distance will be |ASCII(V)-ASCII(R)| + |ASCII(y)-ASCII({)| + |ASCII(o)-ASCII(l)| + |ASCII(m)-ASCII(l)| = 4+2+3+1 = 10.

Example 2

Input

6*K4AQf]gpi

Nainika

Output

33

Explanation

i

Previous good letter

Current good letter for i

N

6

K

a

K

]

i

-

-

n

]

p

i

-

-

k

p

i

a

i

]

Initially, Previous good letter=6. Since K and Q are at the same distance from N, so we select the character which is nearest to previous letter(6) which is K.

i is already present in the good string. So no need to change anything.

Therefore, total distance will be |ASCII(6)-ASCII(K)| + |ASCII(a)-ASCII(])| + |ASCII(n)-ASCII(p)| + |ASCII(k)-ASCII(i)| + |ASCII(a)-ASCII(])| = 21+4+2+2+4 = 33.





java.util.*;

 public class LeastZeros{
   
   public static void main(String []args){
    
     Scanner sc = new Scanner(System.in);
     int b,k;
     b = sc.nextInt();
     k = sc.nextInt();
     
     if(b>1 && k>=1)
     {
      System.out.println(1); 
     }
     else if(b==k)
     {
       System.out.println(0);
     }
     else if(b>k && K>=1)
     {
       System.out.println(1);
     }
     
   }
   
 }
	
	}
}