// 函数: sub_141f4f710
// 地址: 0x141f4f710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
*arg1 = 0
arg1[1].d = 0
sub_140d3c6e0(arg2 + 0x438)
int32_t r12_1 = arg6 + *(arg3 + 0x10)
int32_t r15 = *(arg5 + 0x24)

if (r15 s> 0)
    int32_t var_4c_1 = 0x3f800000
    
    do
        int32_t rax_1 = sub_1422c5b30(arg5, zx.q(r12_1), rsi)
        uint32_t rbx_1 = zx.d(*(*(arg3 + 0x28) + (sx.q(rax_1) << 1)))
        char rax_3 = sub_1422c5bb0(arg5, zx.q(r12_1), rsi)
        rsi += 1
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        int128_t* rcx_6 = zx.q(*(arg4 + 0x30) * r12_1) + *(arg4 + 0x28)
        uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_3))
        float zmm1[0x4] = *(rcx_6 + 4)
        float var_58[0x4]
        var_58[0] = (*rcx_6)[0]
        float zmm2[0x4] = *(rcx_6 + 8)
        float temp0_2[0x4] = _mm_shuffle_ps(var_58, var_58, 0xe1)
        temp0_2[0] = zmm1[0]
        zmm4.d = zmm4.d f* 0.00392156886f
        float (* rax_7)[0x4] = (zx.q(rbx_1) << 6) + *arg7
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        temp0_3[0] = zmm2[0]
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
        var_58 = temp0_4
        float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), rax_7[3])
        float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0x55), rax_7[1])
        float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), rax_7[2])
        float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0), *rax_7)
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
    while (rsi s< r15)

return arg1
