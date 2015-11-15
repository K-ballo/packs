// Copyright Agustin K-ballo Berge, Fusion Fenix 2013-2015
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef LINEAR_OK_HPP
#define LINEAR_OK_HPP

using size_t = decltype(sizeof(0));

template <size_t ...Is>
struct index_sequence {};

///////////////////////////////////////////////////////////////////////////////
template <long L, typename Is>
struct _next;

template <long L, size_t ...Is>
struct _next<L, index_sequence<Is...>> {
  using type = index_sequence<Is..., sizeof...(Is)>;
};

///////////////////////////////////////////////////////////////////////////////
template <long L, size_t N>
struct _make_index_sequence
  : _next<L, typename _make_index_sequence<L, N - 1>::type>
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

#endif /*LINEAR_OK_HPP*/
