#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>
#include <vector>
#include <list>
#include <algorithm>

#define MAXN 110
#define DFS_WHITE -1

using namespace std;

int n, to, from, dfsroot, cnt, tot, rootChildren;
int parent[MAXN], dfs_num[MAXN], dfs_low[MAXN];
bool AP[MAXN];
string tmp;

vector < list<int> > adj(MAXN);

void dfs( int u ) {

	 dfs_num[u] = dfs_low[u] = cnt++;
	 
	 //printf( "Visit %d\n", u );
	 
	 for ( list<int>::iterator pos = adj[u].begin(); pos != adj[u].end(); ++pos ) {
	 
		if ( dfs_num[*pos] == DFS_WHITE ) {
		
			parent[*pos] = u;
		
			dfs( *pos );
			
			if ( u == dfsroot ) {
				++rootChildren;
			}
			
			if ( dfs_low[*pos] >= dfs_num[u] ) {
				AP[u] = true;
			}
			
			dfs_low[u] = min( dfs_low[u], dfs_low[*pos] );
						
		}else if ( *pos != parent[u] ) {
			dfs_low[u] = min( dfs_low[u], dfs_num[*pos] );
		}
	 
	 }

}

int main( ) {

	while ( 1 ) {
	
		scanf( "%d\n", &n );
		
		if ( n == 0 ) {
			break;
		}
		
		for ( int i = 1; i <= n; ++i ) {
			dfs_num[i] = dfs_low[i] = parent[i] = DFS_WHITE;
			AP[i] = false;
			adj[i].clear();
		}
		
		while ( 1 ) {
			getline(cin, tmp );
			stringstream x(tmp);
			
			x >> from;
			
			if ( from == 0 ) {
				break;
			}
			 
			while ( x >> to ) {
				adj[from].push_back( to );
				adj[to].push_back( from );
			}
			
		}
		
		cnt = 0;
		
		for ( int i = 1; i <= n; ++i ) {
			if ( dfs_num[i] == DFS_WHITE ) {
				dfsroot = i;
				rootChildren = 0;
				dfs( i );
				AP[dfsroot] = ( rootChildren > 1 );
			}
		}
		
		tot = 0;
		
		for ( int i = 1; i <= n; ++i ) {
			//cout << AP[i] << " ";
			if ( AP[i] )  {
				++tot;
			}
		}
		//cout << endl;
	
		printf( "%d\n", tot );
	
	}

	return 0;

}