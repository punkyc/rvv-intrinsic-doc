#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg2e64ff_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, const float64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_f64m1(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_f64m2(vfloat64m2_t *v0, vfloat64m2_t *v1, const float64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_f64m2(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_f64m4(vfloat64m4_t *v0, vfloat64m4_t *v1, const float64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_f64m4(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_i64m1(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m2(vint64m2_t *v0, vint64m2_t *v1, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_i64m2(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m4(vint64m4_t *v0, vint64m4_t *v1, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_i64m4(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_u64m1(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m2(vuint64m2_t *v0, vuint64m2_t *v1, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_u64m2(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m4(vuint64m4_t *v0, vuint64m4_t *v1, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_u64m4(v0, v1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, const float64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_f64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_f64m2_m(vfloat64m2_t *v0, vfloat64m2_t *v1, vbool32_t mask, vfloat64m2_t maskedoff0, vfloat64m2_t maskedoff1, const float64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_f64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_f64m4_m(vfloat64m4_t *v0, vfloat64m4_t *v1, vbool16_t mask, vfloat64m4_t maskedoff0, vfloat64m4_t maskedoff1, const float64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_f64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_i64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m2_m(vint64m2_t *v0, vint64m2_t *v1, vbool32_t mask, vint64m2_t maskedoff0, vint64m2_t maskedoff1, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_i64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_i64m4_m(vint64m4_t *v0, vint64m4_t *v1, vbool16_t mask, vint64m4_t maskedoff0, vint64m4_t maskedoff1, const int64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_i64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_u64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m2_m(vuint64m2_t *v0, vuint64m2_t *v1, vbool32_t mask, vuint64m2_t maskedoff0, vuint64m2_t maskedoff1, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_u64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

void test_vlseg2e64ff_v_u64m4_m(vuint64m4_t *v0, vuint64m4_t *v1, vbool16_t mask, vuint64m4_t maskedoff0, vuint64m4_t maskedoff1, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vlseg2e64ff_v_u64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

