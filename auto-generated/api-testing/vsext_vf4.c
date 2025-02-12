#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint32mf2_t test_vsext_vf4_i32mf2(vint8mf8_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32mf2(op1, vl);
}

vint32m1_t test_vsext_vf4_i32m1(vint8mf4_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32m1(op1, vl);
}

vint32m2_t test_vsext_vf4_i32m2(vint8mf2_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32m2(op1, vl);
}

vint32m4_t test_vsext_vf4_i32m4(vint8m1_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32m4(op1, vl);
}

vint32m8_t test_vsext_vf4_i32m8(vint8m2_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32m8(op1, vl);
}

vint64m1_t test_vsext_vf4_i64m1(vint16mf4_t op1, size_t vl) {
  return __riscv_vsext_vf4_i64m1(op1, vl);
}

vint64m2_t test_vsext_vf4_i64m2(vint16mf2_t op1, size_t vl) {
  return __riscv_vsext_vf4_i64m2(op1, vl);
}

vint64m4_t test_vsext_vf4_i64m4(vint16m1_t op1, size_t vl) {
  return __riscv_vsext_vf4_i64m4(op1, vl);
}

vint64m8_t test_vsext_vf4_i64m8(vint16m2_t op1, size_t vl) {
  return __riscv_vsext_vf4_i64m8(op1, vl);
}

vint32mf2_t test_vsext_vf4_i32mf2_m(vbool64_t mask, vint8mf8_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32mf2_m(mask, op1, vl);
}

vint32m1_t test_vsext_vf4_i32m1_m(vbool32_t mask, vint8mf4_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32m1_m(mask, op1, vl);
}

vint32m2_t test_vsext_vf4_i32m2_m(vbool16_t mask, vint8mf2_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32m2_m(mask, op1, vl);
}

vint32m4_t test_vsext_vf4_i32m4_m(vbool8_t mask, vint8m1_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32m4_m(mask, op1, vl);
}

vint32m8_t test_vsext_vf4_i32m8_m(vbool4_t mask, vint8m2_t op1, size_t vl) {
  return __riscv_vsext_vf4_i32m8_m(mask, op1, vl);
}

vint64m1_t test_vsext_vf4_i64m1_m(vbool64_t mask, vint16mf4_t op1, size_t vl) {
  return __riscv_vsext_vf4_i64m1_m(mask, op1, vl);
}

vint64m2_t test_vsext_vf4_i64m2_m(vbool32_t mask, vint16mf2_t op1, size_t vl) {
  return __riscv_vsext_vf4_i64m2_m(mask, op1, vl);
}

vint64m4_t test_vsext_vf4_i64m4_m(vbool16_t mask, vint16m1_t op1, size_t vl) {
  return __riscv_vsext_vf4_i64m4_m(mask, op1, vl);
}

vint64m8_t test_vsext_vf4_i64m8_m(vbool8_t mask, vint16m2_t op1, size_t vl) {
  return __riscv_vsext_vf4_i64m8_m(mask, op1, vl);
}

