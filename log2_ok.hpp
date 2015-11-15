// Copyright Agustin K-ballo Berge, Fusion Fenix 2013-2015
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef LOG2_OK_HPP
#define LOG2_OK_HPP

using size_t = decltype(sizeof(0));

template <size_t ...Is>
struct index_sequence {};

///////////////////////////////////////////////////////////////////////////////
template <long L, typename Is, bool Odd>
struct _dupl;

template <long L, size_t ...Is>
struct _dupl<L, index_sequence<Is...>, false> {
  using type = index_sequence<Is..., (sizeof...(Is) + Is)...>;
};

template <long L, size_t ...Is>
struct _dupl<L, index_sequence<Is...>, true> {
  using type = index_sequence<Is..., (sizeof...(Is) + Is)..., sizeof...(Is) * 2>;
};

///////////////////////////////////////////////////////////////////////////////
template <long L, size_t N>
struct _make_index_sequence
  : _dupl<
      L, typename _make_index_sequence<L, N / 2>::type,
      N % 2 != 0
    >
{};

template <long L>
struct _make_index_sequence<L, 0> {
  using type = index_sequence<>;
};

///////////////////////////////////////////////////////////////////////////////
template <long L, size_t N>
using make_index_sequence =
  typename _make_index_sequence<L, N>::type;

#endif /*LOG2_OK_HPP*/
