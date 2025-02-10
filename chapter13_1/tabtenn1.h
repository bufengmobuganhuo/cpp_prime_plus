//
// Created by tiger on 2025/2/8.
//

#ifndef TABTENN1_H
#define TABTENN1_H
#include <string>
using std::string;

class TableTennisPalyer {
private:
  string firstname;
  string lastname;
  bool hasTable;
public:
  TableTennisPalyer(const string &fn = "none", const string &ln = "none", bool ht = false);
  void Name() const;
  bool HasTable() const {
    return hasTable;
  }
  void ResetTable(bool v) {hasTable = v;}
};


class RatedPlayer: public TableTennisPalyer {
private:
  unsigned int rating;
public:
  RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);
  RatedPlayer(unsigned int r, const TableTennisPalyer &tp);
  unsigned int Rating() const {return rating;}
  void ResetRating(unsigned int r) {
    rating = r;
  }
};

#endif //TABTENN1_H
