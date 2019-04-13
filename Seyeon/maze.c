#include<stdio.h>
#include<stdlib.h>
#include<queue>
struct VECTOR{ int x, y; };
using namespace std;
int main(void)
{
	VECTOR temp;
	int ex[4]={1,0,-1,0}, ey[4]={0,1,0,-1};
	int dis[101][101] = {0};
	int h, w, i, j, Sx, Sy, Gx, Gy, x, y;
	char maze[101][101];
	
	scanf("%d %d", &h, &w);

	for(int i=0; i<h; i++)
    {
    	for(int j=0; j<w; j++)
    	{
    		scanf(" %c", &(maze[i][j]));
    		if(maze[i][j] == 'S')
    		{
    			Sx = i;
    			Sy = j;
			}
			if(maze[i][j] == 'G')
			{
				maze[i][j] = '.';
				Gx = i;
				Gy = j;
			}
      	}
    }
    
	queue<VECTOR> Q;
	
	
	Q.push(VECTOR{Sx, Sy});
	dis[Sx][Sy] = 0;
	while(!Q.empty())
	{
		temp = Q.front();
		Q.pop();
		
		if(temp.x == Gx && temp.y == Gy)
			break;
			
		for(i = 0; i < 4; i++)
		{
			x = temp.x + ex[i];
			y = temp.y + ey[i];
			if( ((0 <= x && x<h) && (0 <= y && y < w)) && !dis[x][y] && maze[x][y] == '.')
			{
				dis[x][y] = dis[temp.x][temp.y] + 1;
				Q.push(VECTOR{x, y});
			}
		}
	}
	
	printf("%d", dis[Gx][Gy]);
	
}
