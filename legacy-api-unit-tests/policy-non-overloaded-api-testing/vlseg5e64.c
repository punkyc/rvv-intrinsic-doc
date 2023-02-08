#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg5e64_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, const float64_t *base, size_t vl) {
  return vlseg5e64_v_f64m1_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, const int64_t *base, size_t vl) {
  return vlseg5e64_v_i64m1_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, const uint64_t *base, size_t vl) {
  return vlseg5e64_v_u64m1_tu(v0, v1, v2, v3, v4, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_f64m1_ta(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, const float64_t *base, size_t vl) {
  return vlseg5e64_v_f64m1_ta(v0, v1, v2, v3, v4, base, vl);
}

void test_vlseg5e64_v_i64m1_ta(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, const int64_t *base, size_t vl) {
  return vlseg5e64_v_i64m1_ta(v0, v1, v2, v3, v4, base, vl);
}

void test_vlseg5e64_v_u64m1_ta(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, const uint64_t *base, size_t vl) {
  return vlseg5e64_v_u64m1_ta(v0, v1, v2, v3, v4, base, vl);
}

void test_vlseg5e64_v_f64m1_tuma(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, const float64_t *base, size_t vl) {
  return vlseg5e64_v_f64m1_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_i64m1_tuma(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, const int64_t *base, size_t vl) {
  return vlseg5e64_v_i64m1_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_u64m1_tuma(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, const uint64_t *base, size_t vl) {
  return vlseg5e64_v_u64m1_tuma(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, const float64_t *base, size_t vl) {
  return vlseg5e64_v_f64m1_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, const int64_t *base, size_t vl) {
  return vlseg5e64_v_i64m1_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, const uint64_t *base, size_t vl) {
  return vlseg5e64_v_u64m1_tumu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_f64m1_tama(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, const float64_t *base, size_t vl) {
  return vlseg5e64_v_f64m1_tama(v0, v1, v2, v3, v4, mask, base, vl);
}

void test_vlseg5e64_v_i64m1_tama(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, const int64_t *base, size_t vl) {
  return vlseg5e64_v_i64m1_tama(v0, v1, v2, v3, v4, mask, base, vl);
}

void test_vlseg5e64_v_u64m1_tama(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, const uint64_t *base, size_t vl) {
  return vlseg5e64_v_u64m1_tama(v0, v1, v2, v3, v4, mask, base, vl);
}

void test_vlseg5e64_v_f64m1_tamu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, const float64_t *base, size_t vl) {
  return vlseg5e64_v_f64m1_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_i64m1_tamu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, const int64_t *base, size_t vl) {
  return vlseg5e64_v_i64m1_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

void test_vlseg5e64_v_u64m1_tamu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, const uint64_t *base, size_t vl) {
  return vlseg5e64_v_u64m1_tamu(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, vl);
}

