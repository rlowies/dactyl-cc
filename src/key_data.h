#pragma once

#include "key.h"
#include "transform.h"

namespace scad {

// Key positioning data and description of layout and grouping of keys.
struct KeyData {
  KeyData(TransformList origin);

  Key key_plus;
  Key key_1;
  Key key_2;
  Key key_3;
  Key key_4;
  Key key_5;
  Key key_m1;

  Key key_tab;
  Key key_q;
  Key key_w;
  Key key_e;
  Key key_r;
  Key key_t;
  Key key_m2;

  Key key_caps;
  Key key_a;
  Key key_s;
  Key key_d;
  Key key_f;
  Key key_g;
  Key key_m3;

  Key key_shift;
  Key key_z;
  Key key_x;
  Key key_c;
  Key key_v;
  Key key_b;

  Key key_fn;
  Key key_tilde;
  Key key_slash;
  Key key_left_arrow;
  Key key_right_arrow;

  Key key_backspace;
  Key key_delete;
  Key key_end;
  Key key_home;
  Key key_ctrl;
  Key key_alt;

  // clang-format off
  KeyGrid grid {{
    { &key_plus,    &key_1,      &key_2,      &key_3,           &key_4,            &key_5,  &key_m1},
    { &key_tab,     &key_q,      &key_w,      &key_e,           &key_r,            &key_t,  &key_m2},
    { &key_caps,    &key_a,      &key_s,      &key_d,           &key_f,            &key_g,  &key_m3},
    { &key_shift,   &key_z,      &key_x,      &key_c,           &key_v,            &key_b,  nullptr},
    { &key_fn,      &key_tilde,  &key_slash,  &key_left_arrow,  &key_right_arrow,  nullptr, nullptr},
  }};
  // clang-format on

  std::vector<Key*> thumb_keys() {
    return {&key_delete, &key_backspace, &key_ctrl, &key_alt, &key_home, &key_end};
  }

  std::vector<Key*> all_keys() {
    std::vector<Key*> keys;
    for (Key* key : thumb_keys()) {
      keys.push_back(key);
    }
    for (Key* key : grid.keys()) {
      keys.push_back(key);
    }
    return keys;
  }
};

}  // namespace scad
