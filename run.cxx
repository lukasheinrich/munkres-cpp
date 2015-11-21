#include "munkres.h"

int main(){
  
  munkres::matrix_type m = {{10,19,8,15,0},{10,18,7,17,0},{13,16,9,14,0},{12,19,8,18,0},{14,17,10,19,0}};
  
  munkres::vec_type costs;
  costs.reserve(m[0].size());
  
  munkres munk(m);
  auto result = munk.run(costs);
  
  for(int i = 0; i < result.size(); ++i){
    std::cout << i << " -> " << result[i] << " cost: " << costs[i] << std::endl;
  }
  
  //less recos than triggers:
  //assign triggers to reco or to dummy 'non-matched' with cost 0
  
  //more recos than triggers: -> not matched
  
  
}