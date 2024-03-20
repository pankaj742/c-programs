

#include <deque>                                                       
#include <algorithm>                                            
#include <iostream>                                                        
using namespace std;                                                    
                                                                       
int main()                                                                 
{                                                             
deque<int> Q;       //  An empty, elastic, container ready to hold ints.
// A deque is a double-ended queue. Queues (unlike lists) are
// data structures where you wouldn't expect to insert new items
// anywhere else but at the ends

Q.push_back(0);     //  Many containers have a push_back
                    //  routine. It's a way to add elements
                    //  to a container in a safe way - the
                    //  container will grow if it's not big enough.
Q.push_back(2);                                                          
Q.push_back(1);     

for(int i=0;i<Q.size(); i++){
   cout << Q.front(); cout << " ";
}
cout <<endl;

// Now let's sort!          
sort(Q.begin(), Q.end());
// the arguments we've given to sort mean that the whole queue
// will be sorted, and that the result will be copied back to
// the original queue. sort uses the default sorting criterium
// for integers, and can use the swap function of Q to switch
// elements around. 

for(int i=0;i<Q.size(); i++){
   cout << Q.front(); cout << " ";
}
cout <<endl;
// Output: 0 1 2
                    
}

