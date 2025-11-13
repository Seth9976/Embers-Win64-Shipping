// 函数: sub_1400615f0
// 地址: 0x1400615f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg15[0].o
int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
int128_t var_d8 = arg6[0].o
int32_t r15_4 = ((arg18 s>> 0x1f u>> 0x1d) + arg18) & 0xfffffff8
int32_t result
int32_t rbx
int32_t zmm0[0x8]
int32_t zmm1[0x8]
float zmm2[0x8]
float zmm4[0x8]
float zmm5[0x8]

if (r15_4 s<= 0)
    rbx = 0
    result = 0
else
    result = 0
    zmm1 = __vpbroadcastd_ymmqq_memd(3)
    zmm2 = __vpbroadcastd_ymmqq_memd(0xc)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    zmm4 = __vpbroadcastd_ymmqq_memd(4)
    zmm5 = __vpbroadcastd_ymmqq_memd(8)
    rbx = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            arg6[0].o = zx.o(rbx)
            arg6 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(arg6[0]), data_142fc93a0)
            arg7 = _mm256_mullo_epi32(arg6, zmm1)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            int32_t temp0_11
            int32_t temp1_1
            temp0_11, temp1_1 = _mm256_i32gather_ps(arg10, *(arg4 + (arg7[0].q << 2)), arg8)
            arg10 = temp0_11
            arg7 = _mm256_mullo_epi32(arg6, zmm2)
            arg8 = _mm256_add_epi32(arg7, zmm4)
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            int32_t temp0_16
            int32_t temp1_2
            temp0_16, temp1_2 = _mm256_i32gather_ps(arg11, *(arg4 + arg8[0].q), arg9)
            arg11 = temp0_16
            arg7 = _mm256_add_epi32(arg7, zmm5)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            int32_t temp0_20
            int32_t temp1_3
            temp0_20, temp1_3 = _mm256_i32gather_ps(arg12, *(arg4 + arg7[0].q), arg8)
            arg12 = temp0_20
            float var_360_1[0x8] = arg10
            float var_340_1[0x8] = arg11
            float var_320_1[0x8] = arg12
            float var_300_1[0x8] = arg5
            arg7 = _mm256_broadcast_ss(arg3[3])
            arg8 = _mm256_broadcast_ss(arg3[1])
            arg9 = _mm256_broadcast_ss(arg3[2])
            arg13 = _mm256_broadcast_ss(*arg3)
            arg14 = _mm256_mul_ps(arg11, arg9)
            arg15 = _mm256_mul_ps(arg12, arg13)
            arg12 = _mm256_fmsub_ps(arg12, arg8, arg14)
            arg14 = _mm256_mul_ps(arg10, arg8)
            arg10 = _mm256_fmsub_ps(arg10, arg9, arg15)
            arg11 = _mm256_fmsub_ps(arg11, arg13, arg14)
            arg12 = _mm256_add_ps(arg12, arg12)
            arg10 = _mm256_add_ps(arg10, arg10)
            arg11 = _mm256_add_ps(arg11, arg11)
            arg14 = _mm256_fmadd_ps(var_360_1, arg7, arg12)
            arg15 = _mm256_fmsub_ps(_mm256_mul_ps(arg11, arg13), arg12, arg9)
            arg12 = _mm256_fmsub_ps(_mm256_mul_ps(arg12, arg8), arg10, arg13)
            arg13 = _mm256_fmadd_ps(var_340_1, arg7, arg10)
            int32_t var_1e0_1[0x8] = arg7
            int32_t var_1c0_1[0x8] = arg7
            int32_t var_1a0_1[0x8] = arg7
            int32_t var_180_1[0x8] = arg7
            arg9 = _mm256_fmsub_ps(_mm256_mul_ps(arg10, arg9), arg11, arg8)
            arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, arg11, var_320_1)
            arg8 = _mm256_add_ps(arg14, arg9)
            arg9 = _mm256_add_ps(arg13, arg15)
            arg8 = _mm256_add_ps(arg8, _mm256_broadcast_ss(arg3[4]))
            arg9 = _mm256_add_ps(arg9, _mm256_broadcast_ss(arg3[5]))
            arg8 = _mm256_sub_ps(arg8, _mm256_broadcast_ss(*arg2))
            arg9 = _mm256_mul_ps(_mm256_sub_ps(arg9, _mm256_broadcast_ss(arg2[1])), 
                _mm256_broadcast_ss(arg1[1]))
            arg10 = _mm256_broadcast_ss(*arg1)
            arg9 = _mm256_fmadd_ps(arg9, arg8, arg10)
            arg8 = _mm256_sub_ps(
                _mm256_add_ps(_mm256_add_ps(arg7, arg12), _mm256_broadcast_ss(arg3[6])), 
                _mm256_broadcast_ss(arg2[2]))
            arg7 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg1[2]), arg8, arg9)
            arg8 = _mm256_cmp_ps(arg7, _mm256_broadcast_ss(*arg17), 1)
            char i_2 = _mm256_movemask_ps(arg8)
            
            if (i_2 == 0)
                result = 0
                rbx += 8
                
                if (rbx s>= r15_4)
                    break
                
                continue
            else
                uint64_t i = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rdi_2 = _tzcnt_u64(i)
                    i &= not.q(1 << (rdi_2 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        int32_t var_2a0[0x8] = arg7
                        uint64_t rdi_3 = zx.q(rdi_2.d) & 7
                        zmm0[0].o = zx.o(var_2a0[rdi_3])
                        *arg17 = zmm0[0]
                        int32_t var_280[0x8] = arg6
                        *arg16 = var_280[rdi_3]
                    
                    result.b = 1
                while (i != 0)
        
        rbx += 8
        
        if (rbx s>= r15_4)
            break

if (rbx s< arg18)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm0[0].o = zx.o(rbx)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(arg18)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm2 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(3))
        zmm1 = _mm256_cmpgt_epi32(zmm1, zmm0)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int32_t temp0_73
        int32_t temp1_4
        temp0_73, temp1_4 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm2[0].q << 2)), zmm1)
        arg5 = temp0_73
        zmm2 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0xc))
        zmm4 = _mm256_add_epi32(zmm2, __vpbroadcastd_ymmqq_memd(4))
        zmm5[0].o = zx.o(0)
        int32_t temp0_78
        int32_t temp1_5
        temp0_78, temp1_5 = _mm256_i32gather_ps(zmm5, *(arg4 + zmm4[0].q), zmm1)
        zmm5 = temp0_78
        zmm4 = __vpbroadcastd_ymmqq_memd(8)
        zmm2 = _mm256_add_epi32(zmm2, zmm4)
        zmm4[0].o = zx.o(0)
        int32_t temp0_81
        int32_t temp1_6
        temp0_81, temp1_6 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm2[0].q), zmm1)
        zmm4 = temp0_81
        arg6 = temp1_6
        float var_260_1[0x8] = arg5
        float var_240_1[0x8] = zmm5
        float var_220_1[0x8] = zmm4
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int32_t var_200_1[0x8] = arg6
        zmm2 = _mm256_broadcast_ss(arg3[3])
        float var_1e0_2[0x8] = zmm2
        float var_1c0_2[0x8] = zmm2
        float var_1a0_2[0x8] = zmm2
        float var_180_2[0x8] = zmm2
        arg7 = _mm256_broadcast_ss(arg3[1])
        arg8 = _mm256_broadcast_ss(arg3[2])
        arg9 = _mm256_broadcast_ss(*arg3)
        arg6 = _mm256_mul_ps(zmm2, arg6)
        arg10 = _mm256_mul_ps(zmm5, arg8)
        arg11 = _mm256_mul_ps(zmm4, arg9)
        arg12 = _mm256_mul_ps(arg5, arg7)
        arg10 = _mm256_fmsub_ps(arg10, arg7, zmm4)
        arg11 = _mm256_fmsub_ps(arg11, arg8, arg5)
        arg12 = _mm256_fmsub_ps(arg12, arg9, zmm5)
        zmm4 = _mm256_sub_ps(arg6, arg6)
        zmm5 = _mm256_add_ps(arg10, arg10)
        arg5 = _mm256_add_ps(arg11, arg11)
        arg6 = _mm256_add_ps(arg12, arg12)
        zmm4 = _mm256_add_ps(zmm4, zmm4)
        float var_360_2[0x8] = zmm5
        float var_340_2[0x8] = arg5
        int32_t var_320_2[0x8] = arg6
        float var_300_2[0x8] = zmm4
        arg7 = _mm256_fmadd_ps(var_260_1, zmm2, zmm5)
        arg8 = _mm256_fmadd_ps(var_240_1, zmm2, arg5)
        arg9 = _mm256_fmadd_ps(var_220_1, zmm2, arg6)
        int32_t var_160_1[0x8] = arg7
        uint32_t var_140_1[0x8] = arg8
        float var_120_1[0x8] = arg9
        float var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, zmm2, var_200_1)
        zmm2 = _mm256_broadcast_ss(arg3[1])
        zmm4 = _mm256_broadcast_ss(arg3[2])
        arg10 = _mm256_broadcast_ss(*arg3)
        arg11 = _mm256_mul_ps(arg5, zmm4)
        arg12 = _mm256_mul_ps(arg6, arg10)
        arg13 = _mm256_mul_ps(zmm5, zmm2)
        arg11 = _mm256_fmsub_ps(arg11, arg6, zmm2)
        arg12 = _mm256_fmsub_ps(arg12, zmm5, zmm4)
        arg13 = _mm256_fmsub_ps(arg13, arg5, arg10)
        zmm2 = _mm256_add_ps(arg7, arg11)
        arg5 = _mm256_add_ps(arg8, arg12)
        zmm4 = _mm256_add_ps(arg9, arg13)
        zmm2 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg3[4]))
        arg5 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg3[5]))
        zmm4 = _mm256_add_ps(zmm4, _mm256_broadcast_ss(arg3[6]))
        zmm2 = _mm256_sub_ps(zmm2, _mm256_broadcast_ss(*arg2))
        arg5 = _mm256_sub_ps(arg5, _mm256_broadcast_ss(arg2[1]))
        zmm4 = _mm256_sub_ps(zmm4, _mm256_broadcast_ss(arg2[2]))
        zmm5 = _mm256_broadcast_ss(*arg1)
        arg6 = _mm256_broadcast_ss(arg1[1])
        arg5 = _mm256_fmadd_ps(_mm256_mul_ps(arg5, arg6), zmm2, zmm5)
        zmm2 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg1[2]), zmm4, arg5)
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm2, _mm256_broadcast_ss(*arg17), 1), zmm1)
        int32_t i_3 = _mm256_movemask_ps(zmm1)
        
        if (i_3 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(i_3)
            result = 0
            
            do
                uint64_t rdx_1 = _tzcnt_u64(i_1)
                i_1 &= not.q(1 << (rdx_1 u% 0x40))
                
                if ((result.b & 1) == 0)
                    float var_2e0[0x8] = zmm2
                    uint64_t rdx_2 = zx.q(rdx_1.d) & 7
                    zmm1[0].o = var_2e0[rdx_2]
                    *arg17 = zmm1[0]
                    int32_t var_2c0[0x8] = zmm0
                    *arg16 = var_2c0[rdx_2]
                
                result.b = 1
            while (i_1 != 0)

arg6[0].o = var_d8
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
arg15[0].o = var_48
_mm256_zeroupper()
return result
