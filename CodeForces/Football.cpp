/*
F. Football

time limit per test 3 seconds
memory limit per test 1024 megabytes


Scientists are researching an impact of football match results on the mood of football fans. They have a hypothesis that there is a correlation between the number of draws and fans'
desire to watch football matches in the future.

In football, two teams play a match. The teams score goals throughout a match.
A score "x:y" means that the team we observe scored x goals and conceded y goals.
If x=y, then the match ends in a draw.
If x>y, then the observed team wins, and if x<y, then it loses.

To find out if there is a correlation, the scientists gathered information about the results of teams in lower leagues.
The information they found is the number of matches played by the team (n), the number of goals scored in these matches (a), and the number of goals conceded in these matches (b).

You are given this information for a single team. You are asked to calculate the minimum number of draws that could have happened during the team's matches and provide a list of match scores with the minimum number of draws.

Input
The first line contains an integer n— the number of matches played by the team (1≤n≤100). The second line contains an integer a
 — the total number of goals scored by the team in all n
matches (0≤a≤1000). The third line contains an integer b— the total number of goals conceded by the team in all nmatches (0≤b≤1000).

Output
In the first line, print a single integer d— the minimum number of draws.

In the following n lines, print a list of match scores, each line in the format "x:y", where xis the number of goals scored in the match, and y– the number of goals conceded, so that exactly d of these
matches have ended in a draw. In case multiple such lists of match scores exist, print any of them.

Examples
inputCopy
3
2
4
outputCopy
0
1:0
1:2
0:2
*/
