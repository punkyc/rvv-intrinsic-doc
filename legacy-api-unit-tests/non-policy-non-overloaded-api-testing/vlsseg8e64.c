#include <stdint.h>
#include "rvv-v0p10-compatible-headers/non-policy.h"
#include "rvv-v0p10-compatible-headers/policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlsseg8e64_v_f64m1(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e64_v_i64m1(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e64_v_u64m1(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

void test_vlsseg8e64_v_f64m1_m(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t *v6, vfloat64m1_t *v7, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, vfloat64m1_t maskedoff6, vfloat64m1_t maskedoff7, const float64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

void test_vlsseg8e64_v_i64m1_m(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t *v6, vint64m1_t *v7, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, vint64m1_t maskedoff6, vint64m1_t maskedoff7, const int64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

void test_vlsseg8e64_v_u64m1_m(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t *v6, vuint64m1_t *v7, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, vuint64m1_t maskedoff6, vuint64m1_t maskedoff7, const uint64_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg8e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

