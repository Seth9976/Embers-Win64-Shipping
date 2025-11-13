// 函数: sub_141e41070
// 地址: 0x141e41070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
float var_78
sub_141e41f00(arg1, &var_78, arg2)
int32_t var_74
uint128_t zmm7 = var_74
truncf(zmm7.d)
uint128_t zmm6 = var_78
uint128_t zmm8 = zmm7
truncf(zmm6.d)
zmm7.d = zmm7.d f- zmm8.d
float zmm3 = zmm6.d
zmm6.d = zmm6.d f- zmm3
int32_t r10 = int.d(zmm3)
uint128_t zmm1
zmm1.d = zmm8.d f+ 1f
int32_t rax_4 = (*(arg1 + 0x120) + 1) * r10
int32_t r8_1 = int.d(zmm1.d)
int32_t rax_5 = rax_4 + r8_1
int128_t* rdx_1

if (rax_4 + r8_1 s>= 0 && rax_5 s< *(arg1 + 0xe0))
    rdx_1 = *(arg1 + 0xd8) + sx.q(rax_5) * 0x18

uint128_t zmm0

if (rax_4 + r8_1 s< 0 || rax_5 s>= *(arg1 + 0xe0) || rdx_1 == 0)
    var_78.q = -1
    int32_t var_70_1 = 0xffffffff
    int32_t var_6c_1 = 0
    zmm0 = var_78.o
    zmm1 = _mm_unpacklo_ps(zx.o(0), 0)
    *arg5 = zmm0
    zmm0 = zx.o(0)
else
    *arg5 = *rdx_1
    zmm1 = zx.o(rdx_1[1].q)
    zmm0.d = 1f f- zmm6.d
    zmm0.d = zmm0.d f* zmm7.d

arg5[1].q = zmm1.q
*(arg5 + 0x18) = zmm0.d
int32_t r9 = int.d(zmm3 + 1f)
int32_t rax_10 = (*(arg1 + 0x120) + 1) * r9
int32_t rax_11 = rax_10 + r8_1
int128_t* rdx_2

if (rax_10 + r8_1 s>= 0 && rax_11 s< *(arg1 + 0xe0))
    rdx_2 = *(arg1 + 0xd8) + sx.q(rax_11) * 0x18

if (rax_10 + r8_1 s< 0 || rax_11 s>= *(arg1 + 0xe0) || rdx_2 == 0)
    var_78.q = -1
    int32_t var_70_2 = 0xffffffff
    int32_t var_6c_2 = 0
    zmm0 = var_78.o
    zmm1 = _mm_unpacklo_ps(zx.o(0), 0)
    *arg6 = zmm0
    zmm0 = zx.o(0)
else
    *arg6 = *rdx_2
    zmm1 = zx.o(rdx_2[1].q)
    zmm0.d = zmm7.d f* zmm6.d

arg6[1].q = zmm1.q
*(arg6 + 0x18) = zmm0.d
int32_t r8_2 = int.d(zmm8.d)
int32_t rax_16 = (*(arg1 + 0x120) + 1) * r10
int32_t rax_17 = rax_16 + r8_2
int128_t* rdx_3

if (rax_16 + r8_2 s>= 0 && rax_17 s< *(arg1 + 0xe0))
    rdx_3 = *(arg1 + 0xd8) + sx.q(rax_17) * 0x18

if (rax_16 + r8_2 s< 0 || rax_17 s>= *(arg1 + 0xe0) || rdx_3 == 0)
    var_78.q = -1
    int32_t var_70_3 = 0xffffffff
    int32_t var_6c_3 = 0
    zmm3 = 1f f- zmm7.d
    zmm0 = var_78.o
    zmm1 = _mm_unpacklo_ps(zx.o(0), 0)
    *arg3 = zmm0
    zmm0 = zx.o(0)
else
    uint128_t zmm4
    zmm4.d = 1f f- zmm6.d
    *arg3 = *rdx_3
    zmm1 = zx.o(rdx_3[1].q)
    zmm3 = 1f f- zmm7.d
    zmm4.d = zmm4.d f* zmm3
    zmm0 = zmm4

arg3[1].q = zmm1.q
*(arg3 + 0x18) = zmm0.d
int32_t rax_22 = (*(arg1 + 0x120) + 1) * r9
uint64_t result = zx.q(rax_22 + r8_2)

if (rax_22 + r8_2 s< 0 || result.d s>= *(arg1 + 0xe0))
label_141e412e0:
    var_78.q = -1
    int32_t var_70_4 = 0xffffffff
    int32_t var_6c_4 = 0
    zmm0 = var_78.o
    zmm1 = _mm_unpacklo_ps(zx.o(0), 0)
    *arg4 = zmm0
    arg4[1].q = zmm1.q
    *(arg4 + 0x18) = 0
else
    int64_t rax_23 = sx.q(result.d)
    result = *(arg1 + 0xd8)
    int64_t rdx_4 = result + rax_23 * 0x18
    
    if (rdx_4 == 0)
        goto label_141e412e0
    
    *arg4 = *rdx_4
    arg4[1].q = *(rdx_4 + 0x10)
    *(arg4 + 0x18) = zmm3 f* zmm6.d

__security_check_cookie(rax_1 ^ &var_98)
return result
