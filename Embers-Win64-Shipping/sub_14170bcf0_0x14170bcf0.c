// 函数: sub_14170bcf0
// 地址: 0x14170bcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r9 = arg1[1]
uint128_t zmm1 = zx.o(*arg3)
uint128_t zmm5 = *r9
uint128_t zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
uint128_t zmm7
zmm7.d = zmm5.d f* zmm4.d
uint128_t zmm11 = *(r9 + 4)
uint128_t zmm12 = *(r9 + 8)
uint128_t zmm10 = zmm1.d
int128_t zmm8 = arg3[1].d
void* rax_1 = *arg1
uint128_t zmm6
zmm6.d = zmm11.d f* zmm8.d
uint128_t zmm9
zmm9.d = zmm12.d f* zmm10.d
zmm6.d = zmm6.d f- zmm12.d f* zmm4.d
zmm9.d = zmm9.d f- zmm5.d f* zmm8.d
zmm6.d = zmm6.d f+ zmm6.d
zmm7.d = zmm7.d f- zmm11.d f* zmm10.d
float zmm0 = *(r9 + 0xc)
zmm9.d = zmm9.d f+ zmm9.d
uint128_t zmm3
zmm3.d = zmm6.d f* zmm0
uint128_t zmm13
zmm13.d = zmm6.d f* zmm12.d
zmm7.d = zmm7.d f+ zmm7.d
zmm6.d = zmm6.d f* zmm11.d
zmm3.d = zmm3.d f+ zmm10.d
zmm1.d = zmm9.d f* zmm0
float zmm2 = zmm7.d * zmm0
zmm0 = zmm7.d
zmm1.d = zmm1.d f+ zmm4.d
zmm7.d = zmm7.d f* zmm11.d
zmm4.d = zmm9.d f* zmm5.d
zmm13.d = zmm13.d f- zmm0 f* zmm5.d
zmm9.d = zmm9.d f* zmm12.d
zmm4.d = zmm4.d f- zmm6.d
zmm7.d = zmm7.d f- zmm9.d
zmm13.d = zmm13.d f+ zmm1.d
zmm4.d = zmm4.d f+ zmm2 f+ zmm8.d
zmm7.d = zmm7.d f+ zmm3.d

if (zmm7.d f>= 0f)
    zmm12 = *(rax_1 + 0x1c)
else
    zmm12 = *(rax_1 + 0x10)

if (zmm13.d f>= 0f)
    zmm11 = *(rax_1 + 0x20)
else
    zmm11 = *(rax_1 + 0x14)

if (zmm4.d f>= 0f)
    zmm10 = *(rax_1 + 0x24)
else
    zmm10 = *(rax_1 + 0x18)

uint128_t* rax_2 = arg1[2]
zmm8 = *(rax_2 + 4)
zmm6 = *(rax_2 + 8)
zmm2 = zmm8.d
zmm9 = *rax_2
zmm3 = *(rax_2 + 0xc)
zmm5.d = zmm12.d f* zmm6.d
zmm4.d = zmm11.d f* zmm9.d
zmm7.d = zmm10.d f* zmm8.d
zmm7.d = zmm7.d f- zmm11.d f* zmm6.d
zmm5.d = zmm5.d f- zmm9.d f* zmm10.d
zmm7.d = zmm7.d f+ zmm7.d
zmm4.d = zmm4.d f- zmm12.d f* zmm8.d
zmm0 = zmm6.d
zmm1.d = zmm3.d f* zmm7.d
zmm5.d = zmm5.d f+ zmm5.d
zmm6.d = zmm6.d f* zmm7.d
zmm1.d = zmm1.d f+ zmm12.d
zmm8.d = zmm8.d f* zmm7.d
zmm4.d = zmm4.d f+ zmm4.d
zmm2 = zmm2 f* zmm4.d - zmm0 f* zmm5.d
zmm0 = zmm9.d
zmm9.d = zmm9.d f* zmm5.d
zmm2 = zmm2 f+ zmm1.d
zmm9.d = zmm9.d f- zmm8.d
zmm1.d = zmm3.d f* zmm5.d
zmm6.d = zmm6.d f- zmm0 f* zmm4.d
zmm3.d = zmm3.d f* zmm4.d
zmm1.d = zmm1.d f+ zmm11.d
*arg2 = zmm2
zmm3.d = zmm3.d f+ zmm10.d
zmm6.d = zmm6.d f+ zmm1.d
zmm9.d = zmm9.d f+ zmm3.d
arg2[1] = zmm6.d
arg2[2] = zmm9.d
return arg2
