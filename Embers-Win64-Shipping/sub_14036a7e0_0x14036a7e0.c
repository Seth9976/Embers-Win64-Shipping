// 函数: sub_14036a7e0
// 地址: 0x14036a7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg12[0].o
int128_t var_48 = arg11[0].o
int128_t var_58 = arg10[0].o
int128_t var_68 = arg9[0].o
int128_t var_78 = arg8[0].o
int128_t var_88 = arg7[0].o
int128_t var_98 = arg6[0].o
int128_t var_a8 = arg5[0].o
int32_t r10_4 = ((arg2 s>> 0x1f u>> 0x1d) + arg2) & 0xfffffff8
int32_t rbx
uint64_t rdi_2
int32_t zmm0[0x8]
float zmm1[0x8]
float zmm2[0x8]
float zmm3[0x8]
uint32_t zmm4[0x8]
int32_t zmm5[0x8]

if (r10_4 s<= 0)
    rbx = 0
    rdi_2 = 0
    
    if (0 s< arg2)
    label_14036aba0:
        zmm0[0].o = zx.o(rbx)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(arg2)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm0 = _mm256_cmpgt_epi32(zmm1, zmm0)
        uint64_t rdx = rdi_2 * 3
        zmm1[0].o = *(arg14 + (rdx << 2))
        zmm2[0].o = *(arg14 + (rdx << 2) + 0x10)
        zmm3[0].o = *(arg14 + (rdx << 2) + 0x20)
        zmm4[0].o = *(arg14 + (rdx << 2) + 0x30)
        zmm5[0].o = *(arg14 + (rdx << 2) + 0x40)
        arg5[0].o = *(arg14 + (rdx << 2) + 0x50)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x10)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x9e)
        arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 0x8c)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg6[0].o, 0xd2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x8c)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0xc4)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 0x10)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg5[0].o, 0x9e)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x8c)
        zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0xd2)
        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 0x8c)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0xc4)
        zmm3 = _mm256_insertf128_ps(arg7, zmm3[0].o, 1)
        zmm4 = _mm256_maskload_ps(zmm0, *(arg4 + sx.q(rbx << 2)))
        uint64_t i = zx.q(_mm256_movemask_ps(zmm0))
        uint32_t var_200[0x8] = zmm4
        zmm5 = _mm256_broadcast_ss(1f)
        int256_t var_2c0_1
        int256_t var_2a0_1
        int256_t var_280_1
        
        do
            int64_t rsi_9 = sx.q(var_200[_tzcnt_u64(i)])
            arg5[0].o = zx.o(rsi_9.d)
            arg6 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg13[rsi_9 * 0x10]))
            arg7 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 1]))
            arg8 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 2]))
            float var_140_2[0x8] = arg6
            double var_120_2[0x4] = arg7
            double var_100_2[0x4] = arg8
            float var_e0_2[0x8] = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 3]))
            arg9 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 4]))
            arg10 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 5]))
            arg11 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 6]))
            arg12 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 7]))
            float var_1c0_2[0x8] = arg9
            float var_1a0_2[0x8] = arg10
            float var_180_2[0x8] = arg11
            float var_160_2[0x8] = arg12
            float var_2e0_2[0x8] = zmm3
            int32_t var_360_2[0x8] = zmm5
            arg6 = _mm256_add_ps(arg6, arg9)
            arg9 = _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 8])
            arg7 = _mm256_add_ps(arg7, arg10)
            arg10 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 0xc]), zmm5)
            arg8 = _mm256_add_ps(arg8, arg11)
            arg11 = _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 9])
            arg10 = __vfmadd231ps_ymmqq_ymmqq_memqq(arg10, arg9, zmm3)
            arg9 = __vfmadd231ps_ymmqq_ymmqq_memqq(
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 0xd]), zmm5), 
                arg11, zmm3)
            arg6 = _mm256_add_ps(arg6, arg10)
            arg10 = _mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 0xa])
            arg7 = _mm256_add_ps(arg7, arg9)
            arg9 = __vfmadd231ps_ymmqq_ymmqq_memqq(
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg13[rsi_9 * 0x10 + 0xe]), zmm5), 
                arg10, zmm3)
            arg8 = _mm256_add_ps(arg8, arg9)
            arg5 = _mm256_cmpeq_epi32(_mm256_broadcastd_epi32(arg5[0]), zmm4) & zmm0
            var_2c0_1 = _mm256_maskstore_ps(arg5, arg6)
            var_2a0_1 = _mm256_maskstore_ps(arg5, arg7)
            var_280_1 = _mm256_maskstore_ps(arg5, arg8)
            arg6[0].o = _mm256_extracti128_si256(arg5, 1)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            i &= zx.q(not.d(__vpmovmskb_gpr32d_xmmdq(arg5[0].o))) | 0xffffffffffffff00
        while (i != 0)
        
        zmm0[0].o = var_2c0_1.o
        zmm1[0].o = var_2c0_1:0x10.o
        zmm2[0].o = var_2a0_1.o
        zmm3[0].o = var_2a0_1:0x10.o
        zmm4[0].o = var_280_1.o
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x30)
        arg5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x49)
        zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg5[0].o, 4)
        zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0x6c)
        *(arg1 + (rdx << 2)) = zmm5[0].o
        zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm0[0].o, 4)
        zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0x6c)
        *(arg1 + (rdx << 2) + 0x10) = zmm5[0].o
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x33)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0xe2)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
        *(arg1 + (rdx << 2) + 0x20) = zmm0[0].o
        zmm0[0].o = var_280_1:0x10.o
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x30)
        zmm4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x49)
        zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 4)
        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0x6c)
        *(arg1 + (rdx << 2) + 0x30) = zmm2[0].o
        zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 4)
        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0x6c)
        *(arg1 + (rdx << 2) + 0x40) = zmm2[0].o
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x33)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0xe2)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
        *(arg1 + (rdx << 2) + 0x50) = zmm0[0].o
else
    rbx = 0
    zmm0 = _mm256_broadcast_ss(1f)
    
    do
        uint64_t r14_1 = zx.q(rbx)
        uint64_t rdi_1 = r14_1 * 3
        zmm1[0].o = *(arg14 + (rdi_1 << 2))
        zmm2[0].o = *(arg14 + (rdi_1 << 2) + 0x10)
        zmm3[0].o = *(arg14 + (rdi_1 << 2) + 0x20)
        zmm4[0].o = *(arg14 + (rdi_1 << 2) + 0x30)
        zmm5[0].o = *(arg14 + (rdi_1 << 2) + 0x40)
        arg5[0].o = *(arg14 + (rdi_1 << 2) + 0x50)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x10)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x9e)
        arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 0x8c)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg6[0].o, 0xd2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x8c)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0xc4)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 0x10)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg5[0].o, 0x9e)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x8c)
        zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0xd2)
        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 0x8c)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0xc4)
        zmm3 = _mm256_insertf128_ps(arg7, zmm3[0].o, 1)
        zmm4 = *(arg4 + sx.q(rbx << 2))
        uint32_t var_1e0[0x8] = zmm4
        int256_t var_260_1
        int256_t var_240_1
        int256_t var_220_1
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 &= not.q(zx.q(_mm256_movemask_ps(zmm5))))
            int64_t rsi_4 = sx.q(var_1e0[_tzcnt_u64(i_1)])
            zmm5[0].o = zx.o(rsi_4.d)
            arg5 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg13[rsi_4 * 0x10]))
            arg6 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 1]))
            arg7 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 2]))
            float var_140_1[0x8] = arg5
            float var_120_1[0x8] = arg6
            double var_100_1[0x4] = arg7
            double var_e0_1[0x4] = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 3]))
            arg8 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 4]))
            arg9 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 5]))
            arg10 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 6]))
            arg11 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 7]))
            double var_1c0_1[0x4] = arg8
            float var_1a0_1[0x8] = arg9
            float var_180_1[0x8] = arg10
            float var_160_1[0x8] = arg11
            float var_2e0_1[0x8] = zmm3
            int32_t var_360_1[0x8] = zmm0
            arg5 = _mm256_add_ps(arg5, arg8)
            arg8 = _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 8])
            arg6 = _mm256_add_ps(arg6, arg9)
            arg9 = _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 9])
            arg7 = _mm256_add_ps(arg7, arg10)
            arg10 = __vfmadd231ps_ymmqq_ymmqq_memqq(
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 0xc]), zmm0), 
                arg8, zmm3)
            arg8 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 0xd]), zmm0)
            arg5 = _mm256_add_ps(arg5, arg10)
            arg10 = _mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 0xa])
            arg8 = __vfmadd231ps_ymmqq_ymmqq_memqq(arg8, arg9, zmm3)
            arg9 = __vfmadd231ps_ymmqq_ymmqq_memqq(
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg13[rsi_4 * 0x10 + 0xe]), zmm0), 
                arg10, zmm3)
            arg6 = _mm256_add_ps(arg6, arg8)
            arg7 = _mm256_add_ps(arg7, arg9)
            zmm5 = _mm256_cmpeq_epi32(_mm256_broadcastd_epi32(zmm5[0]), zmm4)
            var_260_1 = _mm256_maskstore_ps(zmm5, arg5)
            var_240_1 = _mm256_maskstore_ps(zmm5, arg6)
            var_220_1 = _mm256_maskstore_ps(zmm5, arg7)
        
        zmm1[0].o = var_260_1.o
        zmm2[0].o = var_260_1:0x10.o
        zmm3[0].o = var_240_1.o
        zmm4[0].o = var_240_1:0x10.o
        zmm5[0].o = var_220_1.o
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x30)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm5[0].o, 0x49)
        arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 4)
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0x6c)
        *(arg1 + (rdi_1 << 2)) = arg5[0].o
        arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm1[0].o, 4)
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0x6c)
        *(arg1 + (rdi_1 << 2) + 0x10) = arg5[0].o
        arg5[0].o = var_220_1:0x10.o
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x33)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xe2)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
        *(arg1 + (rdi_1 << 2) + 0x20) = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x30)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg5[0].o, 0x49)
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 4)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x6c)
        *(arg1 + (rdi_1 << 2) + 0x30) = zmm1[0].o
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 4)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x6c)
        *(arg1 + (rdi_1 << 2) + 0x40) = zmm1[0].o
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 0x33)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0xe2)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
        *(arg1 + (rdi_1 << 2) + 0x50) = zmm1[0].o
        rbx = r14_1.d + 8
    while (rbx s< r10_4)
    
    rdi_2 = zx.q(rbx)
    
    if (rbx s< arg2)
        goto label_14036aba0
arg5[0].o = var_a8
arg6[0].o = var_98
arg7[0].o = var_88
arg8[0].o = var_78
arg9[0].o = var_68
arg10[0].o = var_58
arg11[0].o = var_48
arg12[0].o = var_38
_mm256_zeroupper()
return arg13
