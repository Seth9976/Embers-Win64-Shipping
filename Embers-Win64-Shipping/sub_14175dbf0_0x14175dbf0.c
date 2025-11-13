// 函数: sub_14175dbf0
// 地址: 0x14175dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = nullptr

if (*(arg2 + 0xc) u>= 1)
    rdx = arg2

uint128_t zmm0
uint128_t zmm6
uint128_t zmm11
int128_t zmm12

if (rdx == 0)
    zmm12 = zx.o(0)
    zmm6 = zx.o(0)
    zmm11 = zx.o(0)
else
    int64_t r8_1 = sx.q(rdx[1].d) * 3
    int64_t rdx_1 = *(*rdx + 0x200)
    zmm0 = zx.o(*(rdx_1 + (r8_1 << 2)))
    zmm12 = *(rdx_1 + (r8_1 << 2) + 8)
    zmm6 = zmm0.d
    zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

int64_t* arg_8 = arg2
int128_t* rax_4 = sub_141749180(&arg_8)
arg_8 = arg2
uint128_t zmm8 = *(rax_4 + 4)
uint128_t zmm3 = *(rax_4 + 8)
uint128_t zmm5 = *rax_4
float zmm2 = *(rax_4 + 0xc)
uint128_t zmm10
zmm10.d = zmm3.d f* zmm6.d
zmm0.d = zmm3.d f* zmm11.d
uint128_t zmm4
zmm4.d = zmm5.d f* zmm11.d
uint128_t zmm9
zmm9.d = zmm8.d f* zmm12.d
zmm9.d = zmm9.d f- zmm0.d
zmm0.d = zmm5.d f* zmm12.d
zmm10.d = zmm10.d f- zmm0.d
zmm0.d = zmm8.d f* zmm6.d
zmm9.d = zmm9.d f+ zmm9.d
zmm4.d = zmm4.d f- zmm0.d
zmm10.d = zmm10.d f+ zmm10.d
zmm4.d = zmm4.d f+ zmm4.d
float zmm1 = zmm9.d * zmm2 f+ zmm6.d
zmm0.d = zmm10.d f* zmm3.d
zmm6.d = zmm9.d f* zmm3.d
zmm9.d = zmm9.d f* zmm8.d
uint128_t zmm7
zmm7.d = zmm4.d f* zmm8.d
zmm7.d = zmm7.d f- zmm0.d
zmm0.d = zmm4.d f* zmm5.d
zmm4.d = zmm4.d f* zmm2
zmm7.d = zmm7.d f+ zmm1
zmm1 = zmm10.d
zmm10.d = zmm10.d f* zmm5.d
zmm6.d = zmm6.d f- zmm0.d
zmm4.d = zmm4.d f+ zmm12.d
zmm10.d = zmm10.d f- zmm9.d
zmm10.d = zmm10.d f+ zmm4.d
zmm6.d = zmm6.d f+ zmm1 * zmm2 f+ zmm11.d
int32_t* rax_5 = sub_141746340(&arg_8)
zmm7.d = zmm7.d f+ *rax_5
zmm6.d = zmm6.d f+ rax_5[1]
zmm10.d = zmm10.d f+ rax_5[2]
*arg1 = zmm7.d
arg1[1] = zmm6.d
arg1[2] = zmm10.d
return arg1
