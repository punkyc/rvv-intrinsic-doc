// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsse16_v_f16mf4(_Float16 *base, ptrdiff_t bstride, vfloat16mf4_t value, size_t vl) {
  return __riscv_vsse16_v_f16mf4(base, bstride, value, vl);
}

void test_vsse16_v_f16mf2(_Float16 *base, ptrdiff_t bstride, vfloat16mf2_t value, size_t vl) {
  return __riscv_vsse16_v_f16mf2(base, bstride, value, vl);
}

void test_vsse16_v_f16m1(_Float16 *base, ptrdiff_t bstride, vfloat16m1_t value, size_t vl) {
  return __riscv_vsse16_v_f16m1(base, bstride, value, vl);
}

void test_vsse16_v_f16m2(_Float16 *base, ptrdiff_t bstride, vfloat16m2_t value, size_t vl) {
  return __riscv_vsse16_v_f16m2(base, bstride, value, vl);
}

void test_vsse16_v_f16m4(_Float16 *base, ptrdiff_t bstride, vfloat16m4_t value, size_t vl) {
  return __riscv_vsse16_v_f16m4(base, bstride, value, vl);
}

void test_vsse16_v_f16m8(_Float16 *base, ptrdiff_t bstride, vfloat16m8_t value, size_t vl) {
  return __riscv_vsse16_v_f16m8(base, bstride, value, vl);
}

void test_vsse16_v_i16mf4(int16_t *base, ptrdiff_t bstride, vint16mf4_t value, size_t vl) {
  return __riscv_vsse16_v_i16mf4(base, bstride, value, vl);
}

void test_vsse16_v_i16mf2(int16_t *base, ptrdiff_t bstride, vint16mf2_t value, size_t vl) {
  return __riscv_vsse16_v_i16mf2(base, bstride, value, vl);
}

void test_vsse16_v_i16m1(int16_t *base, ptrdiff_t bstride, vint16m1_t value, size_t vl) {
  return __riscv_vsse16_v_i16m1(base, bstride, value, vl);
}

void test_vsse16_v_i16m2(int16_t *base, ptrdiff_t bstride, vint16m2_t value, size_t vl) {
  return __riscv_vsse16_v_i16m2(base, bstride, value, vl);
}

void test_vsse16_v_i16m4(int16_t *base, ptrdiff_t bstride, vint16m4_t value, size_t vl) {
  return __riscv_vsse16_v_i16m4(base, bstride, value, vl);
}

void test_vsse16_v_i16m8(int16_t *base, ptrdiff_t bstride, vint16m8_t value, size_t vl) {
  return __riscv_vsse16_v_i16m8(base, bstride, value, vl);
}

void test_vsse16_v_u16mf4(uint16_t *base, ptrdiff_t bstride, vuint16mf4_t value, size_t vl) {
  return __riscv_vsse16_v_u16mf4(base, bstride, value, vl);
}

void test_vsse16_v_u16mf2(uint16_t *base, ptrdiff_t bstride, vuint16mf2_t value, size_t vl) {
  return __riscv_vsse16_v_u16mf2(base, bstride, value, vl);
}

void test_vsse16_v_u16m1(uint16_t *base, ptrdiff_t bstride, vuint16m1_t value, size_t vl) {
  return __riscv_vsse16_v_u16m1(base, bstride, value, vl);
}

void test_vsse16_v_u16m2(uint16_t *base, ptrdiff_t bstride, vuint16m2_t value, size_t vl) {
  return __riscv_vsse16_v_u16m2(base, bstride, value, vl);
}

void test_vsse16_v_u16m4(uint16_t *base, ptrdiff_t bstride, vuint16m4_t value, size_t vl) {
  return __riscv_vsse16_v_u16m4(base, bstride, value, vl);
}

void test_vsse16_v_u16m8(uint16_t *base, ptrdiff_t bstride, vuint16m8_t value, size_t vl) {
  return __riscv_vsse16_v_u16m8(base, bstride, value, vl);
}

void test_vsse16_v_f16mf4_m(vbool64_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf4_t value, size_t vl) {
  return __riscv_vsse16_v_f16mf4_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_f16mf2_m(vbool32_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16mf2_t value, size_t vl) {
  return __riscv_vsse16_v_f16mf2_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_f16m1_m(vbool16_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m1_t value, size_t vl) {
  return __riscv_vsse16_v_f16m1_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_f16m2_m(vbool8_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m2_t value, size_t vl) {
  return __riscv_vsse16_v_f16m2_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_f16m4_m(vbool4_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m4_t value, size_t vl) {
  return __riscv_vsse16_v_f16m4_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_f16m8_m(vbool2_t mask, _Float16 *base, ptrdiff_t bstride, vfloat16m8_t value, size_t vl) {
  return __riscv_vsse16_v_f16m8_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_i16mf4_m(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t value, size_t vl) {
  return __riscv_vsse16_v_i16mf4_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_i16mf2_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t value, size_t vl) {
  return __riscv_vsse16_v_i16mf2_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_i16m1_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t value, size_t vl) {
  return __riscv_vsse16_v_i16m1_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_i16m2_m(vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t value, size_t vl) {
  return __riscv_vsse16_v_i16m2_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_i16m4_m(vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t value, size_t vl) {
  return __riscv_vsse16_v_i16m4_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_i16m8_m(vbool2_t mask, int16_t *base, ptrdiff_t bstride, vint16m8_t value, size_t vl) {
  return __riscv_vsse16_v_i16m8_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_u16mf4_m(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t value, size_t vl) {
  return __riscv_vsse16_v_u16mf4_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_u16mf2_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t value, size_t vl) {
  return __riscv_vsse16_v_u16mf2_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_u16m1_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t value, size_t vl) {
  return __riscv_vsse16_v_u16m1_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_u16m2_m(vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t value, size_t vl) {
  return __riscv_vsse16_v_u16m2_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_u16m4_m(vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t value, size_t vl) {
  return __riscv_vsse16_v_u16m4_m(mask, base, bstride, value, vl);
}

void test_vsse16_v_u16m8_m(vbool2_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m8_t value, size_t vl) {
  return __riscv_vsse16_v_u16m8_m(mask, base, bstride, value, vl);
}

