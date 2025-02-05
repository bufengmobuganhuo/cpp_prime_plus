//
// Created by tiger on 2025/1/22.
//
#include "Stack.h"

Stack::Stack() {
   top = 0;
 }

bool Stack::isempty() const {
  return top == 0;
}

bool Stack::isfull() const {
  return top >= MAX;
}

bool Stack::push(const Item &item) {
  if (isfull()) {
    return false;
  }
  items[top++] = item;
  return true;
}

bool Stack::pop(Item &item) {
  if (isempty()) {
    return false;
  }
  item = items[top--];
  return true;
}



