#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

//---dilarang menambah kode di atas batas ini-----

map<int, string> nama_SPBU;

int SPBU_terefisien(){
  




  
     for (int i = 0; i < n; ++i) {
          int current_stock = 0;
          bool can_complete_cycle = true;

          for (int j = 0; j < n; ++j) {
              current_stock = current_stock - konsumsi_solar [(i + j) % n] + stok[(i + j) % n];

            if (current_stock < 0) {
                can_complete_cycle = false;
                break;
            }
        }
       

      if (can_complate_cycle && current_stoock > max_stock) {
        max_stock = current_stock;
        result = i;
      }        
}

    return result;
}


int main(){


return 0;
}
