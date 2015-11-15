// Copyright Agustin K-ballo Berge, Fusion Fenix 2013-2015
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef LOG2_EVEN_ODD_HPP
#define LOG2_EVEN_ODD_HPP

using size_t = decltype(sizeof(0));

template <size_t ...Is>
struct index_sequence {};

///////////////////////////////////////////////////////////////////////////////
template <long L, typename Is, typename Js>
struct _join;

template <long L, size_t ...Is, size_t ...Js>
struct _join<L, index_sequence<Is...>, index_sequence<Js...>> {
  using type = index_sequence<Is...,(sizeof...(Is) + Js)...>;
};

///////////////////////////////////////////////////////////////////////////////
template <long L, size_t N>
struct _make_index_sequence
  : _join<
      L, typename _make_index_sequence<L, N / 2>::type,
      typename _make_index_sequence<L, N - N / 2>::type
    >
{};

template <long L>
struct _make_index_sequence<L, 1> {
  using type = index_sequence<0>;
};

template <long L>
struct _make_index_sequence<L, 0> {
  using type = index_sequence<>;
};

///////////////////////////////////////////////////////////////////////////////
template <long L, size_t N>
using make_index_sequence =
  typename _make_index_sequence<L, N>::type;

#endif /*LOG2_EVEN_ODD_HPP*/
