#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vluxseg6ei64_v_f16mf4_tu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, const float16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf2_tu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, const float16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16m1_tu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, const float16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32mf2_tu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, const float32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32m1_tu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, const float32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f64m1_tu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, const float64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf8_tu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf4_tu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf2_tu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8m1_tu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf4_tu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf2_tu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16m1_tu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32mf2_tu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32m1_tu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i64m1_tu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf8_tu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf4_tu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf2_tu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8m1_tu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf4_tu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf2_tu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16m1_tu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32mf2_tu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32m1_tu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u64m1_tu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tu(v0, v1, v2, v3, v4, v5, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf4_ta(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, const float16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf2_ta(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, const float16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16m1_ta(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, const float16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32mf2_ta(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, const float32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32m1_ta(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, const float32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f64m1_ta(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, const float64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf8_ta(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf4_ta(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf2_ta(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8m1_ta(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf4_ta(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf2_ta(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16m1_ta(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32mf2_ta(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32m1_ta(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i64m1_ta(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf8_ta(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf4_ta(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf2_ta(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8m1_ta(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf4_ta(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf2_ta(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16m1_ta(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32mf2_ta(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32m1_ta(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u64m1_ta(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_ta(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf4_tuma(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, const float16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf2_tuma(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, const float16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16m1_tuma(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, const float16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32mf2_tuma(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, const float32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32m1_tuma(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, const float32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f64m1_tuma(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, const float64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf8_tuma(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf4_tuma(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf2_tuma(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8m1_tuma(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf4_tuma(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf2_tuma(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16m1_tuma(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32mf2_tuma(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32m1_tuma(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i64m1_tuma(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf8_tuma(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf4_tuma(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf2_tuma(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8m1_tuma(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf4_tuma(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf2_tuma(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16m1_tuma(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32mf2_tuma(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32m1_tuma(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u64m1_tuma(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tuma(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf4_tumu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, const float16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf2_tumu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, const float16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16m1_tumu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, const float16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32mf2_tumu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, const float32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32m1_tumu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, const float32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f64m1_tumu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, const float64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf8_tumu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf4_tumu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf2_tumu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8m1_tumu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf4_tumu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf2_tumu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16m1_tumu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32mf2_tumu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32m1_tumu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i64m1_tumu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf8_tumu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf4_tumu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf2_tumu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8m1_tumu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf4_tumu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf2_tumu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16m1_tumu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32mf2_tumu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32m1_tumu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u64m1_tumu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tumu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf4_tama(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vbool64_t mask, const float16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf2_tama(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vbool32_t mask, const float16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16m1_tama(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, const float16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32mf2_tama(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vbool64_t mask, const float32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32m1_tama(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, const float32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_f64m1_tama(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, const float64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf8_tama(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vbool64_t mask, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf4_tama(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vbool32_t mask, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf2_tama(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vbool16_t mask, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8m1_tama(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf4_tama(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vbool64_t mask, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf2_tama(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vbool32_t mask, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16m1_tama(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32mf2_tama(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vbool64_t mask, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32m1_tama(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_i64m1_tama(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf8_tama(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vbool64_t mask, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf4_tama(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vbool32_t mask, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf2_tama(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vbool16_t mask, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8m1_tama(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf4_tama(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vbool64_t mask, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf2_tama(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vbool32_t mask, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16m1_tama(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32mf2_tama(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vbool64_t mask, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32m1_tama(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_u64m1_tama(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tama(v0, v1, v2, v3, v4, v5, mask, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf4_tamu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t *v2, vfloat16mf4_t *v3, vfloat16mf4_t *v4, vfloat16mf4_t *v5, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, vfloat16mf4_t maskedoff2, vfloat16mf4_t maskedoff3, vfloat16mf4_t maskedoff4, vfloat16mf4_t maskedoff5, const float16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16mf2_tamu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t *v2, vfloat16mf2_t *v3, vfloat16mf2_t *v4, vfloat16mf2_t *v5, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, vfloat16mf2_t maskedoff2, vfloat16mf2_t maskedoff3, vfloat16mf2_t maskedoff4, vfloat16mf2_t maskedoff5, const float16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f16m1_tamu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t *v2, vfloat16m1_t *v3, vfloat16m1_t *v4, vfloat16m1_t *v5, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, vfloat16m1_t maskedoff2, vfloat16m1_t maskedoff3, vfloat16m1_t maskedoff4, vfloat16m1_t maskedoff5, const float16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32mf2_tamu(vfloat32mf2_t *v0, vfloat32mf2_t *v1, vfloat32mf2_t *v2, vfloat32mf2_t *v3, vfloat32mf2_t *v4, vfloat32mf2_t *v5, vbool64_t mask, vfloat32mf2_t maskedoff0, vfloat32mf2_t maskedoff1, vfloat32mf2_t maskedoff2, vfloat32mf2_t maskedoff3, vfloat32mf2_t maskedoff4, vfloat32mf2_t maskedoff5, const float32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f32m1_tamu(vfloat32m1_t *v0, vfloat32m1_t *v1, vfloat32m1_t *v2, vfloat32m1_t *v3, vfloat32m1_t *v4, vfloat32m1_t *v5, vbool32_t mask, vfloat32m1_t maskedoff0, vfloat32m1_t maskedoff1, vfloat32m1_t maskedoff2, vfloat32m1_t maskedoff3, vfloat32m1_t maskedoff4, vfloat32m1_t maskedoff5, const float32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_f64m1_tamu(vfloat64m1_t *v0, vfloat64m1_t *v1, vfloat64m1_t *v2, vfloat64m1_t *v3, vfloat64m1_t *v4, vfloat64m1_t *v5, vbool64_t mask, vfloat64m1_t maskedoff0, vfloat64m1_t maskedoff1, vfloat64m1_t maskedoff2, vfloat64m1_t maskedoff3, vfloat64m1_t maskedoff4, vfloat64m1_t maskedoff5, const float64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf8_tamu(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, const int8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf4_tamu(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, const int8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8mf2_tamu(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, const int8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i8m1_tamu(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, const int8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf4_tamu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t *v2, vint16mf4_t *v3, vint16mf4_t *v4, vint16mf4_t *v5, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, vint16mf4_t maskedoff2, vint16mf4_t maskedoff3, vint16mf4_t maskedoff4, vint16mf4_t maskedoff5, const int16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16mf2_tamu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t *v2, vint16mf2_t *v3, vint16mf2_t *v4, vint16mf2_t *v5, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, vint16mf2_t maskedoff2, vint16mf2_t maskedoff3, vint16mf2_t maskedoff4, vint16mf2_t maskedoff5, const int16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i16m1_tamu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t *v2, vint16m1_t *v3, vint16m1_t *v4, vint16m1_t *v5, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, vint16m1_t maskedoff2, vint16m1_t maskedoff3, vint16m1_t maskedoff4, vint16m1_t maskedoff5, const int16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32mf2_tamu(vint32mf2_t *v0, vint32mf2_t *v1, vint32mf2_t *v2, vint32mf2_t *v3, vint32mf2_t *v4, vint32mf2_t *v5, vbool64_t mask, vint32mf2_t maskedoff0, vint32mf2_t maskedoff1, vint32mf2_t maskedoff2, vint32mf2_t maskedoff3, vint32mf2_t maskedoff4, vint32mf2_t maskedoff5, const int32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i32m1_tamu(vint32m1_t *v0, vint32m1_t *v1, vint32m1_t *v2, vint32m1_t *v3, vint32m1_t *v4, vint32m1_t *v5, vbool32_t mask, vint32m1_t maskedoff0, vint32m1_t maskedoff1, vint32m1_t maskedoff2, vint32m1_t maskedoff3, vint32m1_t maskedoff4, vint32m1_t maskedoff5, const int32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_i64m1_tamu(vint64m1_t *v0, vint64m1_t *v1, vint64m1_t *v2, vint64m1_t *v3, vint64m1_t *v4, vint64m1_t *v5, vbool64_t mask, vint64m1_t maskedoff0, vint64m1_t maskedoff1, vint64m1_t maskedoff2, vint64m1_t maskedoff3, vint64m1_t maskedoff4, vint64m1_t maskedoff5, const int64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf8_tamu(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, const uint8_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf4_tamu(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, const uint8_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8mf2_tamu(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, const uint8_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u8m1_tamu(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, const uint8_t *base, vuint64m8_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf4_tamu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t *v2, vuint16mf4_t *v3, vuint16mf4_t *v4, vuint16mf4_t *v5, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, vuint16mf4_t maskedoff2, vuint16mf4_t maskedoff3, vuint16mf4_t maskedoff4, vuint16mf4_t maskedoff5, const uint16_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16mf2_tamu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t *v2, vuint16mf2_t *v3, vuint16mf2_t *v4, vuint16mf2_t *v5, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, vuint16mf2_t maskedoff2, vuint16mf2_t maskedoff3, vuint16mf2_t maskedoff4, vuint16mf2_t maskedoff5, const uint16_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u16m1_tamu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t *v2, vuint16m1_t *v3, vuint16m1_t *v4, vuint16m1_t *v5, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, vuint16m1_t maskedoff2, vuint16m1_t maskedoff3, vuint16m1_t maskedoff4, vuint16m1_t maskedoff5, const uint16_t *base, vuint64m4_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32mf2_tamu(vuint32mf2_t *v0, vuint32mf2_t *v1, vuint32mf2_t *v2, vuint32mf2_t *v3, vuint32mf2_t *v4, vuint32mf2_t *v5, vbool64_t mask, vuint32mf2_t maskedoff0, vuint32mf2_t maskedoff1, vuint32mf2_t maskedoff2, vuint32mf2_t maskedoff3, vuint32mf2_t maskedoff4, vuint32mf2_t maskedoff5, const uint32_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u32m1_tamu(vuint32m1_t *v0, vuint32m1_t *v1, vuint32m1_t *v2, vuint32m1_t *v3, vuint32m1_t *v4, vuint32m1_t *v5, vbool32_t mask, vuint32m1_t maskedoff0, vuint32m1_t maskedoff1, vuint32m1_t maskedoff2, vuint32m1_t maskedoff3, vuint32m1_t maskedoff4, vuint32m1_t maskedoff5, const uint32_t *base, vuint64m2_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

void test_vluxseg6ei64_v_u64m1_tamu(vuint64m1_t *v0, vuint64m1_t *v1, vuint64m1_t *v2, vuint64m1_t *v3, vuint64m1_t *v4, vuint64m1_t *v5, vbool64_t mask, vuint64m1_t maskedoff0, vuint64m1_t maskedoff1, vuint64m1_t maskedoff2, vuint64m1_t maskedoff3, vuint64m1_t maskedoff4, vuint64m1_t maskedoff5, const uint64_t *base, vuint64m1_t bindex, size_t vl) {
  return vluxseg6ei64_tamu(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

