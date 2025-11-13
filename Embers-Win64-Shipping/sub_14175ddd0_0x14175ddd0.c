// 函数: sub_14175ddd0
// 地址: 0x14175ddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = nullptr

if (*(arg2 + 0xc) u>= 1)
    r8 = arg2

uint128_t zmm0
float zmm3
uint128_t zmm11
int128_t zmm12

if (r8 == 0)
    zmm12 = zx.o(0)
    zmm3 = (zx.o(0)).d
    zmm11 = zx.o(0)
else
    int64_t r9_1 = sx.q(r8[1].d) * 3
    int64_t r8_1 = *(*r8 + 0x200)
    zmm0 = zx.o(*(r8_1 + (r9_1 << 2)))
    zmm12 = *(r8_1 + (r9_1 << 2) + 8)
    zmm3 = zmm0.d
    zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

int64_t rcx = sx.q(arg2[1].d)
void* r8_2 = *arg2
int64_t rcx_1 = rcx * 3
int128_t* rax_6 = (rcx << 4) + *(r8_2 + 0x68)
uint128_t zmm8 = *(rax_6 + 4)
uint128_t zmm7 = *rax_6
uint128_t zmm5 = *(rax_6 + 8)
float zmm2 = *(rax_6 + 0xc)
int64_t rax_7 = *(r8_2 + 0x28)
uint128_t zmm10
zmm10.d = zmm5.d f* zmm3
zmm0.d = zmm5.d f* zmm11.d
uint128_t zmm6
zmm6.d = zmm7.d f* zmm11.d
uint128_t zmm9
zmm9.d = zmm8.d f* zmm12.d
zmm9.d = zmm9.d f- zmm0.d
zmm0.d = zmm7.d f* zmm12.d
zmm10.d = zmm10.d f- zmm0.d
zmm0.d = zmm8.d f* zmm3
zmm9.d = zmm9.d f+ zmm9.d
zmm6.d = zmm6.d f- zmm0.d
zmm10.d = zmm10.d f+ zmm10.d
zmm6.d = zmm6.d f+ zmm6.d
float zmm1 = zmm9.d * zmm2 + zmm3
zmm0.d = zmm10.d f* zmm5.d
zmm3 = zmm9.d
zmm9.d = zmm9.d f* zmm8.d
float zmm4 = zmm6.d f* zmm8.d f- zmm0.d
zmm0 = zmm6
zmm6.d = zmm6.d f* zmm2
zmm0.d = zmm0.d f* zmm7.d
zmm4 = zmm4 + zmm1
zmm1 = zmm10.d
zmm10.d = zmm10.d f* zmm7.d
zmm6.d = zmm6.d f+ zmm12.d
zmm10.d = zmm10.d f- zmm9.d
*arg1 = zmm4 f+ *(rax_7 + (rcx_1 << 2))
zmm10.d = zmm10.d f+ zmm6.d
zmm10.d = zmm10.d f+ *(rax_7 + (rcx_1 << 2) + 8)
zmm3 = zmm3 f* zmm5.d f- zmm0.d + zmm1 * zmm2 f+ zmm11.d f+ *(rax_7 + (rcx_1 << 2) + 4)
arg1[2] = zmm10.d
arg1[1] = zmm3
return arg1
