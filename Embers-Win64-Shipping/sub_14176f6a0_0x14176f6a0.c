// 函数: sub_14176f6a0
// 地址: 0x14176f6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7 = (*arg1)[0x2a]
int128_t zmm9 = arg1[0xa][0]
uint128_t zmm0 = zx.o(*(arg5 + 0x5c))
uint64_t var_98 = zmm0.q
uint128_t zmm4 = var_98.d
int128_t zmm11 = (*arg1)[0x29]
int32_t rax = *(arg5 + 0x64)
uint128_t zmm13
zmm13.d = zmm4.d f* zmm7.d
uint128_t zmm10
zmm10.d = rax.d f* zmm11.d
var_98 = 0
int128_t zmm14 = arg3[0].o
uint128_t zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm0.d = zmm8.d f* zmm7.d
uint128_t zmm5
zmm5.d = zmm8.d f* zmm9.d
zmm10.d = zmm10.d f- zmm0.d
zmm0.d = rax.d f* zmm9.d
zmm13.d = zmm13.d f- zmm0.d
zmm0.d = zmm4.d f* zmm11.d
zmm10.d = zmm10.d f+ zmm10.d
zmm5.d = zmm5.d f- zmm0.d
zmm0 = (*arg1)[0x2b]
zmm13.d = zmm13.d f+ zmm13.d
int32_t zmm1[0x8]
zmm1[0].o = zmm10
zmm1[0] = zmm1[0] f* zmm0.d
zmm5.d = zmm5.d f+ zmm5.d
arg3[0].o = zmm13
zmm1[0] = zmm1[0] f+ zmm4.d
zmm4 = arg1[9][0]
arg3[0] = arg3[0] f* zmm0.d
float zmm3[0x4] = zmm5
zmm3[0] = zmm3[0] f* zmm0.d
zmm0.d = zmm13.d f* zmm7.d
arg3[0] = arg3[0] f+ zmm8.d
uint128_t zmm6
zmm6.d = zmm5.d f* zmm11.d
zmm3[0] = zmm3[0] f+ rax
zmm5.d = zmm5.d f* zmm9.d
int32_t var_90_1 = 0
zmm6.d = zmm6.d f- zmm0.d
zmm13.d = zmm13.d f* zmm9.d
zmm0 = zmm10
zmm10.d = zmm10.d f* zmm11.d
zmm0.d = zmm0.d f* zmm7.d
zmm7 = zx.o(0)
zmm13.d = zmm13.d f- zmm10.d
zmm6.d = zmm6.d f+ zmm1[0]
zmm0.d = zmm0.d f- zmm5.d
zmm5 = (*arg1)[0x25]
zmm13.d = zmm13.d f+ zmm3[0]
zmm3 = (*arg1)[0x23]
zmm6.d = zmm6.d f+ arg1[8][0]
zmm0.d = zmm0.d f+ arg3[0]
zmm13.d = zmm13.d f+ (*arg1)[0x22]
zmm3[0] = zmm3[0] f- zmm6.d
zmm0.d = zmm0.d f+ (*arg1)[0x21]
zmm5.d = zmm5.d f- zmm13.d
zmm4.d = zmm4.d f- zmm0.d
arg3[0].o = zmm4
arg3[0] = arg3[0] f* zmm4.d
zmm1[0].o = zmm5
zmm0.d = zmm3.d f* zmm3[0]
zmm1[0] = zmm1[0] f* zmm5.d
arg3[0] = arg3[0] f+ zmm0.d
arg3[0] = arg3[0] f+ zmm1[0]
zmm1[0].o = zx.o(0)
zmm1[0].o = _mm_sqrt_ss(0, arg3[0])

if (not(zmm1[0] f<= 9.99999975e-05f))
    zmm7 = zmm1[0].o
    zmm0.d = 1f f/ zmm1[0]
    zmm3[0] = zmm3[0] f* zmm0.d
    zmm4.d = zmm4.d f* zmm0.d
    zmm5.d = zmm5.d f* zmm0.d
    var_98.d = zmm3[0]
    var_98:4.d = zmm4.d
    int32_t var_90_2 = zmm5.d

if (__andps_xmmxud_memxud(zmm7, data_142d3f770).d f<= (*arg1)[0x63])
    *arg2 = 0
    *(arg2 + 4) = 1
else
    arg3[0].o = *(arg4 + 0x30)
    
    if (not(arg3[0] f> 0f))
        arg3[0].o = *(arg5 + 0x74)
    
    zmm3 = *(arg4 + 0x34)
    
    if (not(zmm3[0] > 0f))
        zmm3 = *(arg5 + 0x78)
    
    zmm1[0].o = zmm14
    void* rcx
    rcx.b = *(arg5 + 0xb0) == 0
    sub_140038d90(arg1, zmm1, arg3, zmm3, rcx.b, &var_98, zmm7.d, &(*arg1)[0x27])
    *arg2 = 1

return arg2
