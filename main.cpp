// Copyright Agustin K-ballo Berge, Fusion Fenix 2013-2015
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if IMPLEMENTATION == 1
#include "linear_naive.hpp"
#elif IMPLEMENTATION == 2
#include "linear_ok.hpp"
#elif IMPLEMENTATION == 3
#include "log2_even_odd.hpp"
#elif IMPLEMENTATION == 4
#include "log2_ok.hpp"
#else
#  error IMPLEMENTATION must be one of {1: linear_naive, 2: linear_ok, 3: log2_even_odd, 4: log2_ok}
#endif

template <long L>
void make() {
#ifdef STRONG
  { make_index_sequence<L, STRONG> is; (void)is; }
#else
  { make_index_sequence<L,  0> is; (void)is; }
  { make_index_sequence<L,  1> is; (void)is; }
  { make_index_sequence<L,  2> is; (void)is; }
  { make_index_sequence<L,  3> is; (void)is; }
  { make_index_sequence<L,  4> is; (void)is; }
  { make_index_sequence<L,  5> is; (void)is; }
  { make_index_sequence<L,  6> is; (void)is; }
  { make_index_sequence<L,  7> is; (void)is; }
  { make_index_sequence<L,  8> is; (void)is; }
  { make_index_sequence<L,  9> is; (void)is; }
  { make_index_sequence<L, 10> is; (void)is; }
  { make_index_sequence<L, 11> is; (void)is; }
  { make_index_sequence<L, 12> is; (void)is; }
  { make_index_sequence<L, 13> is; (void)is; }
  { make_index_sequence<L, 14> is; (void)is; }
  { make_index_sequence<L, 15> is; (void)is; }
  { make_index_sequence<L, 16> is; (void)is; }
  { make_index_sequence<L, 17> is; (void)is; }
  { make_index_sequence<L, 18> is; (void)is; }
  { make_index_sequence<L, 19> is; (void)is; }
  { make_index_sequence<L, 20> is; (void)is; }
  { make_index_sequence<L, 21> is; (void)is; }
  { make_index_sequence<L, 22> is; (void)is; }
  { make_index_sequence<L, 23> is; (void)is; }
  { make_index_sequence<L, 24> is; (void)is; }
  { make_index_sequence<L, 25> is; (void)is; }
  { make_index_sequence<L, 26> is; (void)is; }
  { make_index_sequence<L, 27> is; (void)is; }
  { make_index_sequence<L, 28> is; (void)is; }
  { make_index_sequence<L, 29> is; (void)is; }
  { make_index_sequence<L, 30> is; (void)is; }
  { make_index_sequence<L, 31> is; (void)is; }
  { make_index_sequence<L, 32> is; (void)is; }
  { make_index_sequence<L, 33> is; (void)is; }
  { make_index_sequence<L, 34> is; (void)is; }
  { make_index_sequence<L, 35> is; (void)is; }
  { make_index_sequence<L, 36> is; (void)is; }
  { make_index_sequence<L, 37> is; (void)is; }
  { make_index_sequence<L, 38> is; (void)is; }
  { make_index_sequence<L, 39> is; (void)is; }
  { make_index_sequence<L, 40> is; (void)is; }
  { make_index_sequence<L, 41> is; (void)is; }
  { make_index_sequence<L, 42> is; (void)is; }
  { make_index_sequence<L, 43> is; (void)is; }
  { make_index_sequence<L, 44> is; (void)is; }
  { make_index_sequence<L, 45> is; (void)is; }
  { make_index_sequence<L, 46> is; (void)is; }
  { make_index_sequence<L, 47> is; (void)is; }
  { make_index_sequence<L, 48> is; (void)is; }
  { make_index_sequence<L, 49> is; (void)is; }
  { make_index_sequence<L, 50> is; (void)is; }
  { make_index_sequence<L, 51> is; (void)is; }
  { make_index_sequence<L, 52> is; (void)is; }
  { make_index_sequence<L, 53> is; (void)is; }
  { make_index_sequence<L, 54> is; (void)is; }
  { make_index_sequence<L, 55> is; (void)is; }
  { make_index_sequence<L, 56> is; (void)is; }
  { make_index_sequence<L, 57> is; (void)is; }
  { make_index_sequence<L, 58> is; (void)is; }
  { make_index_sequence<L, 59> is; (void)is; }
  { make_index_sequence<L, 60> is; (void)is; }
  { make_index_sequence<L, 61> is; (void)is; }
  { make_index_sequence<L, 62> is; (void)is; }
  { make_index_sequence<L, 63> is; (void)is; }
#endif
}

int main() {
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
  make<__LINE__>();
}
