#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x6_t test_vlseg6e32_v_f32mf2x6(const float32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_f32mf2x6(base, vl);
}

vfloat32m1x6_t test_vlseg6e32_v_f32m1x6(const float32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_f32m1x6(base, vl);
}

vint32mf2x6_t test_vlseg6e32_v_i32mf2x6(const int32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_i32mf2x6(base, vl);
}

vint32m1x6_t test_vlseg6e32_v_i32m1x6(const int32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_i32m1x6(base, vl);
}

vuint32mf2x6_t test_vlseg6e32_v_u32mf2x6(const uint32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_u32mf2x6(base, vl);
}

vuint32m1x6_t test_vlseg6e32_v_u32m1x6(const uint32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_u32m1x6(base, vl);
}

vfloat32mf2x6_t test_vlseg6e32_v_f32mf2x6_m(vbool64_t mask, const float32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_f32mf2x6_m(mask, base, vl);
}

vfloat32m1x6_t test_vlseg6e32_v_f32m1x6_m(vbool32_t mask, const float32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_f32m1x6_m(mask, base, vl);
}

vint32mf2x6_t test_vlseg6e32_v_i32mf2x6_m(vbool64_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_i32mf2x6_m(mask, base, vl);
}

vint32m1x6_t test_vlseg6e32_v_i32m1x6_m(vbool32_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_i32m1x6_m(mask, base, vl);
}

vuint32mf2x6_t test_vlseg6e32_v_u32mf2x6_m(vbool64_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_u32mf2x6_m(mask, base, vl);
}

vuint32m1x6_t test_vlseg6e32_v_u32m1x6_m(vbool32_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg6e32_v_u32m1x6_m(mask, base, vl);
}

