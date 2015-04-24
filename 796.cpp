#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

#define MAXN 100010
#define DFS_WHITE -1
#define DFS_GRAY 2
#define DFS_BLACK 1

using namespace std;

int n, from, to, how, cnt;
int dfs_num[MAXN], dfs_low[MAXN], parent[MAXN];

vector < list<int> > adj(MAXN);

set < pair<int,int> > s;

void dfs( int u ) {

     dfs_num[u] = dfs_low[u] = cnt++;
  
     for ( list<int>::iterator pos = adj[u].begin(); pos != adj[u].end(); ++pos ) {
         if ( dfs_num[ *pos ] == DFS_WHITE ) {
	   
             parent[*pos] = u;
           
             dfs( *pos );
             
             if ( dfs_low[*pos] > dfs_num[u] ) {
                 s.insert( make_pair( min(u,*pos), max(u,*pos) ) );
             }
             
             dfs_low[u] = min( dfs_low[u], dfs_low[*pos] );
	     
         }else if ( *pos != parent[u] ) {
             dfs_low[u] = min( dfs_low[u], dfs_num[*pos] );
         }
    }
       
}


int main( ) {

    while ( scanf( "%d", &n ) != EOF ) {
	
	for ( int i = 0; i < n; ++i ) {
	  dfs_num[i] = dfs_low[i] = parent[i] = DFS_WHITE;
	  adj[i].clear();
	}
	
	s.clear();
	
	cnt = 0;
	
	for ( int i = 0; i < n; ++i ) {
	  scanf( "%d (%d)", &from, &how );
	  while ( how-- ) {
	    scanf( "%d", &to );
	    adj[from].push_back( to );
	    adj[to].push_back( from );
	  }
	}
	
	for ( int i = 0; i < n; ++i ) {
	    if ( dfs_num[i] == DFS_WHITE ) {
	        dfs( i );
	    }
	}
	
	printf( "%d critical links\n", s.size() );
	
	for ( set< pair<int,int> >::iterator pos = s.begin(); pos != s.end(); ++pos ) {
	    printf( "%d - %d\n", pos->first, pos->second );
	}
	
	putchar( '\n' );
      
    }
  
    return 0;
  
}