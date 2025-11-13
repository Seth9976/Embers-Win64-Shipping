// 函数: sub_142316040
// 地址: 0x142316040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_18
sub_142337b80(arg3, arg5, &arg_8, &arg_18)
int32_t rdi = 0
int32_t r15 = arg_18
int32_t r14 = *(arg4 + 0x24)
int64_t rdx_1 = sx.q(arg_8) * 0xe8
*arg1 = 0
arg1[1].d = 0
int32_t r15_1 = r15 + *(rdx_1 + *arg3 + 0x10)

if (r14 s> 0)
    int32_t var_4c_1 = 0x3f800000
    
    do
        sub_1422c5b30(arg4, zx.q(r15_1), rdi)
        char rax_1 = sub_1422c5bb0(arg4, zx.q(r15_1), rdi)
        rdi += 1
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        int128_t* rcx_5 = zx.q(arg3[0x1d].d * r15_1) + arg3[0x1c]
        uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_1))
        float zmm1[0x4] = *(rcx_5 + 4)
        float var_58[0x4]
        var_58[0] = (*rcx_5)[0]
        float zmm2[0x4] = *(rcx_5 + 8)
        float temp0_2[0x4] = _mm_shuffle_ps(var_58, var_58, 0xe1)
        zmm4.d = zmm4.d f* 0.00392156886f
        temp0_2[0] = zmm1[0]
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        temp0_3[0] = zmm2[0]
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
        var_58 = temp0_4
        float temp0_6[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), data_14399f710)
        float temp0_8[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0x55), data_14399f6f0)
        float temp0_10[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), data_14399f700)
        float temp0_12[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0), data_14399f6e0)
        float temp0_15[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_6, temp0_10), _mm_add_ps(temp0_8, temp0_12))
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x55)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xaa)
        temp0_17[0] = temp0_17[0] f* zmm4.d
        temp0_15[0] = temp0_15[0] f* zmm4.d
        temp0_16[0] = temp0_16[0] f* zmm4.d
        temp0_17[0] = temp0_17[0] f+ arg1[1].d
        temp0_15[0] = temp0_15[0] f+ *arg1
        temp0_16[0] = temp0_16[0] f+ *(arg1 + 4)
        arg1[1].d = temp0_17[0]
        *arg1 = temp0_15[0]
        *(arg1 + 4) = temp0_16[0]
    while (rdi s< r14)

return arg1
