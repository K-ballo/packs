// Copyright Agustin K-ballo Berge, Fusion Fenix 2013-2015
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef LINEAR_NAIVE_HPP
#define LINEAR_NAIVE_HPP

using size_t = decltype(sizeof(0));

template <size_t ...Is>
struct index_sequence {};

///////////////////////////////////////////////////////////////////////////////
template <long L, size_t N, typename Is = index_sequence<>>
struct _make_index_sequence;

template <long L, size_t N, size_t ...Is>
struct _make_index_sequence<L, N, index_sequence<Is...>>
  : _make_index_sequence<L, N - 1, index_sequence<Is..., sizeof...(Is)>>
{};

template <long L, size_t ...Is>
struct _make_index_sequence<L, 0, index_sequence<Is...>> {
  using type = index_sequence<Is...>;
};

///////////////////////////////////////////////////////////////////////////////
template <long L, size_t N>
using make_index_sequence =
  typename _make_index_sequence<L, N>::type;

#endif /*LINEAR_NAIVE_HPP*/
