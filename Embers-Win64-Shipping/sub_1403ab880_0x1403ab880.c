// 函数: sub_1403ab880
// 地址: 0x1403ab880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg2)
int64_t r9 = sx.q(arg4)
int32_t* r10 = arg3[1]
int32_t* r11 = arg3[2]
int32_t* rax = arg3[3]
int32_t* r8 = *arg3
uint128_t zmm6 = zx.o(*r8)
uint128_t zmm4 = zx.o(*r10)
uint128_t zmm7 = zx.o(*r11)
uint128_t zmm5 = zx.o(*rax)
uint128_t zmm2 = zx.o(*(r8 + r9))
uint128_t result = _mm_unpacklo_epi32(zx.o(*arg1), zx.q(*(arg1 + rdx)))
zmm6 = _mm_unpacklo_epi32(zmm6, zmm2.q)
zmm2 = zx.o(*(r11 + r9))
uint128_t zmm3 = zx.o(*(rax + r9))
zmm4 = _mm_unpacklo_epi32(zmm4, zx.q(*(r10 + r9)))
result = result.q | result.q << 0x40
zmm7 = _mm_unpacklo_epi32(zmm7, zmm2.q).q | _mm_unpacklo_epi32(zmm5, zmm3.q).q << 0x40
zmm6 = _mm_sad_epu8(zmm6.q | zmm4.q << 0x40, result)
zmm7 = _mm_sad_epu8(zmm7, result)
void* rcx = arg1 + (rdx << 1)
void* r8_1 = r8 + (r9 << 1)
void* r10_1 = r10 + (r9 << 1)
void* r11_1 = r11 + (r9 << 1)
void* rax_1 = rax + (r9 << 1)
result = zx.o(*rcx)
zmm2 = zx.o(*r10_1)
zmm4 = zx.o(*(r10_1 + r9))
uint128_t zmm1 = _mm_unpacklo_epi32(zx.o(*r8_1), zx.q(*(r8_1 + r9)))
zmm2 = _mm_unpacklo_epi32(zmm2, zmm4.q)
zmm3 = _mm_unpacklo_epi32(zx.o(*r11_1), zx.q(*(r11_1 + r9)))
zmm4 = _mm_unpacklo_epi32(zx.o(*rax_1), zx.q(*(rax_1 + r9)))
result = _mm_unpacklo_epi32(result, zx.q(*(rcx + rdx)))
result = result.q | result.q << 0x40
zmm1 = _mm_sad_epu8(zmm1.q | zmm2.q << 0x40, result)
zmm3 = _mm_sad_epu8(zmm3.q | zmm4.q << 0x40, result)
zmm6 = _mm_add_epi32(zmm6, zmm1)
zmm7 = _mm_add_epi32(zmm7, zmm3)
zmm6 = _mm_shuffle_epi32(zmm6, 8)
zmm7 = _mm_shuffle_epi32(zmm7, 8)
*arg5 = zmm6.q
arg5[1] = zmm7.q
return result
