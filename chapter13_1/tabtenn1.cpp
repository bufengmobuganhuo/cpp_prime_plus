//
// Created by tiger on 2025/2/8.
//

#include "tabtenn1.h"

#include <iostream>

TableTennisPalyer::TableTennisPalyer(const string &fn, const string &ln,
                                     bool ht) : firstname(fn), lastname(ln), hasTable(ht){
}

void TableTennisPalyer::Name() const {
   std::cout << lastname << ", " << firstname;
 }

 RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln,
                          bool ht) : TableTennisPalyer(fn, ln, ht), rating(r) {

 }

 RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPalyer &tp) : TableTennisPalyer(tp), rating(r) {  }

 int main(int argc, char *argv[]) {
  using std::cout;
  using std::endl;

  TableTennisPalyer player1("Tara", "Boomdea", false);
  RatedPlayer rplayer2(1140, "Mallory", "Duck", true);
  rplayer2.Name();
  if (rplayer2.HasTable()) {
    cout << ": has a table.\n";
  } else {
    cout << ": hasn't a table.\n";
  }
  player1.Name();
  if (player1.HasTable()) {
    cout << ": has a table.\n";
  } else {
    cout << ": hasn't a table.\n";
  }

  cout << "Name: ";
  rplayer2.Name();
  cout << "; Rating: " << rplayer2.Rating() << endl;

  return 0;
}




