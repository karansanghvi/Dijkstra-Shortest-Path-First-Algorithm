#include <iostream>

using namespace std;



class DJSPF
{
    public:
    int miniDist(int distance[], bool visited[]) // finding the node with minimum distance from the node and is yet to be visited
    {
        int minimum=INT_MAX,index; //minimum distance initialized to integer limit
                
        for(int k=0;k<6;k++) 
        {
            //Check if node is not visited and if distance of the node
            //is less than minimum distance found(initially INT_MAX)
            if(visited[k]==false && distance[k]<=minimum)      
            {
                minimum=distance[k];
                index=k;
            }
        }
        return index;
    }

    void solve(int graph[6][6],int src)
    {
        int distance[6]; // array to calculate the minimum distance for each node                             
        bool visited[6];// boolean array to mark visited and unvisited for each node
        
        //Initialize all distances to INT_MAX(Integer limit)
        //and all nodes to not visited(visited = false)
        for(int k = 0; k<6; k++)
        {
            distance[k] = INT_MAX;
            visited[k] = false;    
        }
        
        distance[src] = 0;   // Set distance from source node to itself = 0               
        
        for(int k = 0; k<6; k++)                           
        {
            //Pick vertex with minimum distance from source node that is not visited
            int m=miniDist(distance,visited); 
            //set that node to visited
            visited[m]=true;
            for(int k = 0; k<6; k++)                  
            {
                // updating the distance of neighbouring vertex
                /*
                    Checking for the following conditions
                    1. The node has not already been visited
                    2. There exists an edge from m to k
                    3. Distance of m is not at max limit
                    4. Distance from source node to m + distance of m to k is less than processed distance of k(initially INT_MAX)
                */
                if(!visited[k] && graph[m][k] && distance[m]!=INT_MAX && distance[m]+graph[m][k]<distance[k])
                {
                    distance[k]=distance[m]+graph[m][k];
                }
            }
        }
        //Providing output as minimum distance of each node from source
        cout<<"Node\t\tDistance from source node"<<endl;
        for(int k = 0; k<6; k++)                      
        { 
            char str=65+k; 
            cout<<str<<"\t\t\t"<<distance[k]<<endl;
        }
    }
};

int main()
{
    //Create object of class for Shortest Path Algorithm
    DJSPF algo;
    //Create graph structure
    int graph[6][6]={
        {0,1,5,0,0,0},
        {1,0,2,2,1,0},
        {5,2,0,0,2,0},
        {0,2,0,0,3,1},
        {0,1,2,3,0,2},
        {0,0,0,1,2,0}};
    
    cout<<"Graph:"<<endl;

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

    algo.solve(graph,0);
    return 0;                           
}

