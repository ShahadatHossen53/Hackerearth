//https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/tutorial/ 

#include <iostream>

    using namespace std;

    bool A[1000][1000];

    void initialize()
    {
        for(int i = 0;i < 10;++i)
            for(int j = 0;j < 10;++j)
                A[i][j] = false;
    }
    int main()
    {
        int x, y, nodes, edges;
        initialize();
        cin >> nodes;
        cin >> edges;
        for(int i = 0;i < edges;++i)
        {
            cin >> x >> y;
            A[x-1][y-1] = true;
            A[y-1][x-1] = true;
       }
        int query, a, b;
        cin>>query;
        for(int i = 0; i<query; i++){
            cin>>a>>b;
            if(A[a-1][b-1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
      return 0;
}
