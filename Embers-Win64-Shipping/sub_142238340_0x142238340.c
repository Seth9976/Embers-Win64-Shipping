// 函数: sub_142238340
// 地址: 0x142238340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg2
int64_t r8 = sx.q(arg2[1].d)
int64_t rax = *(r9 + 0x200)
int64_t r10 = r8 * 3
uint128_t zmm1 = zx.o(*(rax + (r10 << 2)))
float rax_1 = *(rax + (r10 << 2) + 8)
int64_t rax_2 = *(r9 + 0x3c8)
uint128_t zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int128_t* r8_2 = (r8 << 4) + *(r9 + 0x3e0)
uint128_t zmm9 = *(r8_2 + 4)
int128_t zmm8 = *r8_2
uint128_t zmm10
zmm10.d = zmm9.d f* rax_1
uint128_t zmm5 = *(r8_2 + 8)
int32_t zmm3 = *(r8_2 + 0xc)
int128_t zmm6
zmm6.d = zmm8.d f* zmm7.d
float zmm2 = zmm1.d
uint128_t zmm12
zmm12.d = zmm5.d f* zmm2
zmm10.d = zmm10.d f- zmm5.d f* zmm7.d
zmm10.d = zmm10.d f+ zmm10.d
zmm12.d = zmm12.d f- zmm8.d * rax_1
zmm1.d = zmm10.d f* zmm3
zmm6.d = zmm6.d f- zmm9.d * zmm2
zmm12.d = zmm12.d f+ zmm12.d
zmm1.d = zmm1.d f+ zmm2
zmm2 = zmm10.d
zmm10.d = zmm10.d f* zmm9.d
zmm6.d = zmm6.d f+ zmm6.d
float zmm4 = zmm6.d f* zmm9.d - zmm12.d f* zmm5.d
float zmm0 = zmm6.d
zmm6.d = zmm6.d f* zmm3
zmm6.d = zmm6.d f+ rax_1
zmm4 = zmm4 f+ zmm1.d
zmm1 = zmm12
zmm12.d = zmm12.d f* zmm8.d
zmm1.d = zmm1.d f* zmm3
zmm12.d = zmm12.d f- zmm10.d
zmm1.d = zmm1.d f+ zmm7.d
*arg1 = zmm4 f+ *(rax_2 + (r10 << 2))
zmm12.d = zmm12.d f+ zmm6.d
zmm12.d = zmm12.d f+ *(rax_2 + (r10 << 2) + 8)
zmm2 = zmm2 f* zmm5.d - zmm0 f* zmm8.d f+ zmm1.d f+ *(rax_2 + (r10 << 2) + 4)
arg1[2] = zmm12.d
arg1[1] = zmm2
return arg1
