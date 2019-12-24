#ifndef _SAPP_H_INCLUDED_
#define _SAPP_H_INCLUDED_

#include <vector>

sturct pair {
  int x, y;
}

class piezaCubo {
public:
  std::vector<pair> base;
  std::vector<std::vector<pair>> trans;
  piezaCubo(std::vector coord);
  void permuta();
}

#endif
