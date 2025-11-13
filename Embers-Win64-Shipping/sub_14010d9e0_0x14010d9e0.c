// 函数: sub_14010d9e0
// 地址: 0x14010d9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
int128_t var_d8 = arg6[0].o
int128_t var_e8 = arg5[0].o
int64_t rbx = sx.q(arg17)
int32_t rcx_1 = *(&data_1434425a0 + (rbx << 2)) * *(&data_143442580 + (rbx << 2))
double r13 = 0.0
int32_t rax = 0x18

if (rbx != 3)
    rax = 0

int32_t i = ((arg18 s>> 0x1f u>> 0x1d) + arg18) & 0xfffffff8
int32_t var_8d8 = rbx.d
int32_t var_8b0
double var_8a0[0x4]
double var_840[0x4]
float var_7e0[0x8]
int128_t var_7c0
double var_780[0x4]
double var_6b0[0x2]
int128_t var_680
double var_660[0x4]
int128_t var_620
double var_3e0[0x4]
double zmm0[0x4]
float zmm1[0x8]
float zmm2[0x8]
float zmm3[0x8]
int32_t zmm4[0x8]
double zmm5[0x4]

if (i s> 0)
    zmm0[0].o = arg15
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_3e0 = zmm0
    zmm0[0].o = zx.o(rax)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_8a0 = zmm0
    zmm0[0].o = rcx_1
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_4a0_1[0x4] = zmm0
    r13 = 0.0
    zmm3[0].o = data_142d3f5b0
    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    arg14 = data_142fc95a0
    
    do
        int64_t rax_6 = sx.q((r13 << 3).d)
        int128_t* rcx_2 = arg2
        zmm0[0].o = *(rcx_2 + rax_6)
        zmm1[0].o = *(rcx_2 + rax_6 + 0x10)
        arg9[0].o = *(rcx_2 + rax_6 + 0x20)
        arg10[0].o = *(rcx_2 + rax_6 + 0x30)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x88)
        float var_480_1[0x8] = zmm2
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xdd)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg9[0].o, arg10[0].o, 0xdd)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 4)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 4)
        int64_t r11_1 = sx.q(zmm0[0].d)
        int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int32_t temp0_15 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_16 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        int64_t rdx_2 = sx.q(temp0_15)
        int64_t rdi_2 = sx.q(zmm1[0])
        int64_t rsi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t rbx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int32_t temp0_19 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm0[0].o = zx.o(*(arg3 + rdi_2 + 8))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rsi_2 + 8), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rbx_2 + 8), 2)
        int64_t rax_9 = sx.q(temp0_19)
        arg11[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rax_9 + 8), 3)
        zmm0[0].o = zx.o(*(arg3 + r11_1 + 8))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r15_1 + 8), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdx_2 + 8), 2)
        int64_t rcx_4 = sx.q(temp0_16)
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rcx_4 + 8), 3)
        zmm0[0].o = zx.o(*(arg3 + r11_1 + 0xc))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r15_1 + 0xc), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdx_2 + 0xc), 2)
        arg12 = _mm256_insertf128_ps(arg6, arg11[0].o, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rcx_4 + 0xc), 3)
        zmm1[0].o = zx.o(*(arg3 + rdi_2 + 0xc))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rsi_2 + 0xc), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rbx_2 + 0xc), 2)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rax_9 + 0xc), 3)
        zmm1 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        arg8 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
        double var_540[0x4]
        float var_520[0x8]
        float var_500[0x8]
        float var_4e0[0x8]
        
        if (_mm256_movemask_ps(arg8) != 0)
            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            zmm2 = _mm256_and_ps(zmm0, arg12)
            int64_t r13_1 = sx.q(zmm2[0])
            zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int64_t rdi_3 = sx.q(zmm5[0].d)
            int32_t temp0_44 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_45 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
            void* rax_13 = arg4 + rdi_3
            int32_t temp0_46 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            arg7 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
            zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            uint64_t rbx_3 = zx.q(zmm5[0].d)
            uint64_t rcx_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t rsi_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t rdx_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = *(rbx_3 + rax_13)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9540)
            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg5[0].o = *(zx.q(zmm3[0]) + rax_13)
            void* rax_14 = arg4 + r13_1
            int64_t r15_3 = sx.q(temp0_44)
            void* rbx_5 = arg4 + r15_3
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_5 + rbx_5), 0x10)
            float* rcx_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_6 + rbx_5), 0x10)
            int32_t temp0_57 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int64_t r10_3 = sx.q(temp0_45)
            void* rbx_6 = arg4 + r10_3
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_3 + rbx_6), 0x20)
            float* rsi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_4 + rbx_6), 0x20)
            int32_t temp0_61 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int64_t r11_3 = sx.q(temp0_46)
            void* rbx_7 = arg4 + r11_3
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_3 + rbx_7), 0x30)
            float* rdx_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_4 + rbx_7), 0x30)
            int32_t temp0_65 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            int64_t rcx_8 = sx.q(temp0_57)
            zmm2[0].o = *(zx.q(arg7[0]) + rax_14)
            arg5[0].o = *(zx.q(zmm0[0].d) + rax_14)
            void* rax_15 = arg4 + rcx_8
            uint64_t rbx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_10 + rax_15), 0x10)
            float* rbx_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t rsi_6 = sx.q(temp0_61)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_11 + rax_15), 0x10)
            void* rax_16 = arg4 + rsi_6
            uint64_t rbx_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_12 + rax_16), 0x20)
            float* rbx_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_13 + rax_16), 0x20)
            int64_t rax_17 = sx.q(temp0_65)
            void* rdx_6 = arg4 + rax_17
            uint64_t rbx_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_14 + rdx_6), 0x30)
            uint64_t rbx_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_15 + rdx_6), 0x30)
            arg5[0].o = *(arg4 + r13_1)
            zmm4[0].o = *(arg4 + rdi_3)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r15_3), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r10_3), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r11_3), 0x30)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_8), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_6), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_17), 0x30)
            zmm4 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
            zmm3 = _mm256_sub_ps(
                _mm256_sub_ps(_mm256_sub_ps(arg14, _mm256_mul_ps(zmm4, zmm4)), 
                    _mm256_mul_ps(zmm2, zmm2)), 
                _mm256_mul_ps(zmm0, zmm0))
            zmm5 = _mm256_sqrt_ps(zmm3)
            var_540 = _mm256_maskstore_ps(arg8, zmm4)
            var_520 = _mm256_maskstore_ps(arg8, zmm2)
            zmm2 = _mm256_cmp_ps(arg7, zmm3, 1)
            var_500 = _mm256_maskstore_ps(arg8, zmm0)
            zmm0 = _mm256_and_ps(zmm2, zmm5)
            var_4e0 = _mm256_maskstore_ps(arg8, zmm0)
        
        int32_t var_640_1[0x8] = arg12
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg9[0].o, arg10[0].o, 0x88)
        zmm5 = _mm256_cmp_ps(arg7, arg7, 0xf)
        arg12 = _mm256_xor_ps(arg8, zmm5)
        int32_t temp0_104 = _mm256_movemask_ps(arg12)
        
        if (temp0_104 != 0)
            var_7c0 = zmm2[0].o
            arg10[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
            arg11[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm0[0].o = data_1434422d0
            zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm3[0].o, 1), arg12)
            int32_t temp0_116 = _mm256_movemask_ps(zmm0)
            int128_t var_4c0
            arg8 = var_4c0.32
            float var_760[0x8]
            
            if (temp0_116 == 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            label_14010df24:
                zmm3[0].o = zx.o(0)
                zmm2[0].o = zx.o(arg15)
                bool cond:7_1 = zmm3[0].o f>= zmm2[0]
                zmm5 = _mm256_xor_ps(zmm0, zmm5)
                
                if (cond:7_1)
                    zmm0 = _mm256_xor_ps(zmm0, arg12)
                    arg13 = _mm256_blendv_ps(arg13, arg7, zmm0)
                    arg8 = _mm256_blendv_ps(arg8, arg7, zmm0)
                    var_760 = _mm256_blendv_ps(var_760, arg7, zmm5)
                else
                    bool cond:6_1 = zmm2[0].o f>= 1f
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                    
                    if (cond:6_1)
                        zmm0 = _mm256_xor_ps(zmm0, arg12)
                        arg13 = _mm256_blendv_ps(arg13, zmm1, zmm0)
                        arg8 = _mm256_blendv_ps(arg8, zmm1, zmm0)
                        var_760 = _mm256_blendv_ps(var_760, arg7, zmm5)
                    else
                        zmm2 = arg13
                        arg13 = arg8
                        arg7 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm1), var_3e0)
                        zmm0 = _mm256_xor_ps(zmm0, arg12)
                        arg9 = _mm256_round_ps(arg7, 9)
                        zmm3 = _mm256_cvttps_epi32(arg9)
                        zmm4[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm3[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm2 = _mm256_blendv_ps(zmm2, zmm3, zmm0)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        
                        if (arg16 != 1)
                            arg8 = _mm256_sub_ps(arg7, arg9)
                        
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        zmm3[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        arg13 = _mm256_blendv_ps(arg13, zmm1, zmm0)
                        var_760 = _mm256_blendv_ps(var_760, arg8, zmm5)
                        arg8 = arg13
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg13 = zmm2
            else
                arg13 = _mm256_blendv_ps(arg13, arg7, zmm0)
                arg8 = _mm256_blendv_ps(arg8, arg7, zmm0)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                zmm3[0].o ^= zmm2[0].o
                zmm4[0].o = data_1434422d0
                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                zmm4[0].o ^= zmm2[0].o
                zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                zmm2 = _mm256_and_ps(zmm3, var_760)
                var_760 = zmm2
                
                if (temp0_104 != temp0_116)
                    goto label_14010df24
            
            arg6 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
            arg10 = _mm256_insertf128_ps(arg11, arg14[0].o, 1)
            zmm0 = var_4a0_1
            arg11[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            int128_t var_800
            var_800.q = zx.q(var_8d8)
            var_4c0.32 = arg8
            float var_860_1[0x8] = arg13
            int128_t var_820
            
            if (var_8d8 u> 5)
                var_540 = _mm256_maskstore_ps(arg12, arg7)
                var_520 = _mm256_maskstore_ps(arg12, arg7)
                var_500 = _mm256_maskstore_ps(arg12, arg7)
                arg14 = data_142fc95a0
                var_4e0 = _mm256_maskstore_ps(arg12, arg14)
            else
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg13[0].o, var_4a0_1[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                arg13 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                arg9 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                var_820 = zmm3[0].o
                
                switch (var_800.q)
                    case 0
                        zmm1 = var_8a0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        var_660[0].o = arg11[0].o
                        arg11 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg13 = arg10
                        arg10 = _mm256_blendv_ps(arg7, zmm0, arg11)
                        zmm0[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg7, zmm3, zmm0)
                        double rax_23 = arg10[0]
                        var_840[0] = rax_23
                        void* rdx_7 = arg4 i+ rax_23
                        int64_t rax_24 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        var_7e0[0].q = rax_24
                        void* rdi_4 = arg4 + rax_24
                        int64_t r14_2 = zmm3[0].q
                        void* rcx_11 = arg4 + r14_2
                        int64_t r15_4 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        void* rsi_7 = arg4 + r15_4
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        int64_t rax_25 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        int64_t r13_2 = zmm3[0].q
                        zmm4 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg14 = _mm256_blendv_ps(arg7, zmm4, arg11)
                        zmm4 = _mm256_blendv_ps(arg7, zmm4, zmm0)
                        zmm3[0].o = zx.o(0)
                        arg7[0].o = *(zmm4[0].q + rcx_11)
                        arg5 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg9 = arg6
                        arg6 = _mm256_blendv_ps(zmm3, arg5, zmm0)
                        zmm5[0].o = *(arg6[0].q + rcx_11)
                        arg8 = _mm256_broadcast_sd(5.9287877500949585e-323)
                        zmm0 = _mm256_blendv_ps(zmm3, arg8, zmm0)
                        zmm2[0].o = *(zmm0[0] + rcx_11)
                        int64_t rcx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        int32_t* rbx_18 = arg14[0].q
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_12 + rsi_7), 0x10)
                        int64_t rcx_13 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_13 + rsi_7), 0x10)
                        float* rcx_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_14 + rsi_7), 0x10)
                        float* rcx_15 = zmm4[0].q
                        float* rsi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o = *(rbx_18 + rdx_7)
                        void* rbx_19 = arg4 + r13_2
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_15 + rbx_19), 0x20)
                        void* rcx_16 = arg4 + rax_25
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_8 + rcx_16), 0x30)
                        float* rsi_9 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_9 + rdi_4), 0x10)
                        arg5 = _mm256_blendv_ps(zmm3, arg5, arg11)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(arg6[0].q + rbx_19), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(zmm0[0] + rbx_19), 0x20)
                        int32_t* rbx_20 = arg5[0].q
                        float* rsi_12 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg6[0].o = *(rbx_20 + rdx_7)
                        arg7 = _mm256_blendv_ps(zmm3, arg8, arg11)
                        arg11[0].o = var_660[0].o
                        zmm3[0].o = *(arg7[0].q + rdx_7)
                        float* rdx_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg10 = arg13
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_12 + rcx_16), 0x30)
                        float* rbx_22 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_22 + rdi_4), 0x10)
                        int64_t rbx_23 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_8 + rcx_16), 0x30)
                        float* rcx_17 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        double rdx_9 = zmm0[0]
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_17 + rdi_4), 0x10)
                        void* rcx_18 = arg4 i+ rdx_9
                        zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(zmm3[0].q + rcx_18), 0x20)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(arg5[0].q + rcx_18), 0x20)
                        zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(zmm5[0] + rcx_18), 0x20)
                        int64_t rcx_19 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        void* rdi_8 = arg4 + rbx_23
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_19 + rdi_8), 0x30)
                        int64_t rcx_20 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_20 + rdi_8), 0x30)
                        arg6 = arg9
                        float* rcx_21 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_21 + rdi_8), 0x30)
                        zmm5[0].o = *(arg4 i+ var_840[0])
                        arg5[0].o = *(arg4 + r14_2)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r15_4), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r13_2), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_25), 0x30)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(arg4 + var_7e0[0].q), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 i+ rdx_9), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rbx_23), 0x30)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        var_540 = _mm256_maskstore_ps(arg12, zmm5)
                        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        zmm3[0].o = var_820
                        var_520 = _mm256_maskstore_ps(arg12, zmm1)
                        zmm1 = _mm256_insertf128_ps(zmm4, arg8[0].o, 1)
                        arg8 = var_4c0.32
                        var_500 = _mm256_maskstore_ps(arg12, zmm1)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        var_4e0 = _mm256_maskstore_ps(arg12, zmm0)
                        arg14 = data_142fc95a0
                    case 1
                        zmm1 = var_8a0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg7, zmm1, zmm0)
                        zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg7, zmm3, zmm2)
                        int64_t r10_5 = zmm1[0].q
                        int64_t r14_3 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        int64_t r15_5 = zmm3[0].q
                        zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        var_840[0] = r13
                        int64_t r13_3 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        void* rax_27 = arg4 + r15_5
                        zmm3 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm5 = _mm256_blendv_ps(arg7, zmm3, zmm2)
                        int64_t rbx_24 = zmm4[0].q
                        int32_t* rcx_23 = zmm5[0]
                        int64_t rdx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm4[0].o = *(rcx_23 + rax_27)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        int64_t rcx_24 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        double rdi_9 = zmm5[0]
                        zmm5 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm2 = _mm256_blendv_ps(arg7, zmm5, zmm2)
                        arg5[0].o = *(zmm2[0].q + rax_27)
                        void* rax_28 = arg4 + r10_5
                        void* rsi_14 = arg4 + r14_3
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_10 + rsi_14), 0x10)
                        float* rdx_11 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_11 + rsi_14), 0x10)
                        int64_t rdx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rsi_15 = arg4 + rbx_24
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_9 i+ rsi_15), 0x20)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(zmm2[0].q + rsi_15), 0x20)
                        void* rsi_16 = arg4 + rdx_12
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        void* rdi_11 = arg4 + r13_3
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_24 + rdi_11), 0x30)
                        float* rcx_25 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_25 + rdi_11), 0x30)
                        int64_t rcx_26 = zmm1[0].q
                        zmm3 = _mm256_blendv_ps(arg7, zmm3, zmm0)
                        arg5[0].o = *(zmm3[0].q + rax_28)
                        zmm0 = _mm256_blendv_ps(arg7, zmm5, zmm0)
                        zmm5[0].o = *(zmm0[0] + rax_28)
                        void* rax_29 = arg4 + rcx_26
                        float* rdi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_14 + rsi_16), 0x10)
                        float* rdi_15 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_15 + rsi_16), 0x10)
                        int64_t rsi_17 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(zmm1[0].q + rax_29), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm0[0] + rax_29), 0x20)
                        void* rax_30 = arg4 + rsi_17
                        int64_t rdi_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_18 + rax_30), 0x30)
                        float* rdi_19 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_19 + rax_30), 0x30)
                        zmm3[0].o = *(arg4 + r10_5)
                        zmm5[0].o = *(arg4 + r15_5)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r14_3), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rbx_24), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r13_3), 0x30)
                        r13 = var_840[0]
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdx_12), 0x10)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rcx_26), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rsi_17), 0x30)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2 = _mm256_mul_ps(zmm3, zmm3)
                        arg14 = data_142fc95a0
                        zmm2 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(arg14, zmm2), _mm256_mul_ps(zmm1, zmm1)), 
                            _mm256_mul_ps(zmm0, zmm0))
                        zmm4 = _mm256_sqrt_ps(zmm2)
                        var_540 = _mm256_maskstore_ps(arg12, zmm3)
                        zmm3[0].o = var_820
                        var_520 = _mm256_maskstore_ps(arg12, zmm1)
                        zmm1 = _mm256_cmp_ps(arg7, zmm2, 1)
                        var_500 = _mm256_maskstore_ps(arg12, zmm0)
                        zmm0 = _mm256_and_ps(zmm1, zmm4)
                        var_4e0 = _mm256_maskstore_ps(arg12, zmm0)
                    case 2
                        zmm1 = var_8a0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm4 = _mm256_blendv_ps(arg7, zmm0, zmm2)
                        zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg7, zmm3, zmm0)
                        int64_t r10_6 = zmm4[0].q
                        void* rcx_27 = arg4 + r10_6
                        int64_t r14_4 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        void* rdx_13 = arg4 + r14_4
                        zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        int64_t r15_6 = zmm3[0].q
                        int64_t rsi_18 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        void* rbx_25 = arg4 + r15_6
                        zmm3 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        zmm4 = _mm256_blendv_ps(arg7, zmm3, zmm2)
                        void* rax_31 = arg4 + rsi_18
                        zmm5[0].o = zx.o(*(zmm4[0].q + rcx_27))
                        int64_t rdi_22 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rdi_22 + rdx_13), 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm4[0].q + rbx_25), 2)
                        arg5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm2 = _mm256_blendv_ps(arg7, arg5, zmm2)
                        uint32_t rcx_28 = zx.d(*(zmm2[0].q + rcx_27))
                        int64_t rdi_25 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o = zx.o(rcx_28)
                        uint16_t* rcx_29 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rcx_29 + rdx_13), 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(zmm2[0].q + rbx_25), 2)
                        int64_t rcx_31 = zmm1[0].q
                        void* rdx_14 = arg4 + rcx_31
                        int64_t rbx_26 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg7, zmm3, zmm0)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rdi_25 + rax_31), 3)
                        uint16_t* rdi_26 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rdi_26 + rax_31), 3)
                        void* rax_32 = arg4 + rbx_26
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm3[0].q + rdx_14), 4)
                        int64_t rdi_28 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rdi_28 + rax_32), 5)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg7, arg5, zmm0)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm0[0] + rdx_14), 4)
                        uint16_t* rdx_15 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_30 = zmm1[0].q
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rdx_15 + rax_32), 5)
                        void* rax_33 = arg4 + rdi_30
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(zmm3[0].q + rax_33), 6)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm0[0] + rax_33), 6)
                        zmm5[0].o = zx.o(*(arg4 + r10_6))
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r14_4), 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r15_6), 2)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rsi_18), 3)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rcx_31), 4)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rbx_26), 5)
                        int64_t rax_35 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rdi_30), 6)
                        void* rcx_32 = arg4 + rax_35
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rax_35), 7)
                        int64_t rax_36 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rax_36 + rcx_32), 7)
                        uint16_t* rax_37 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm5[0].o = data_1434424d0
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                        zmm1 = data_1434424e0
                        arg5 = zmm1
                        zmm0 = _mm256_div_ps(zmm0, zmm1)
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                        zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm3[0].o, 1)), arg5)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_37 + rcx_32), 7)
                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm2 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm2[0].o, 1)), arg5)
                        zmm3 = _mm256_mul_ps(zmm0, zmm0)
                        arg14 = data_142fc95a0
                        zmm3 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(arg14, zmm3), _mm256_mul_ps(zmm1, zmm1)), 
                            _mm256_mul_ps(zmm2, zmm2))
                        zmm4 = _mm256_sqrt_ps(zmm3)
                        var_540 = _mm256_maskstore_ps(arg12, zmm0)
                        var_520 = _mm256_maskstore_ps(arg12, zmm1)
                        zmm0 = _mm256_cmp_ps(arg7, zmm3, 1)
                        zmm3[0].o = var_820
                        var_500 = _mm256_maskstore_ps(arg12, zmm2)
                        zmm0 = _mm256_and_ps(zmm0, zmm4)
                        var_4e0 = _mm256_maskstore_ps(arg12, zmm0)
                    case 3
                        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg7, var_640_1, arg12)
                        int64_t rcx_33 = sx.q(zmm0[0].d)
                        void* r10_7 = arg4 + rcx_33
                        zmm2[0].o = *(arg4 + rcx_33)
                        int64_t rcx_35 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        void* r11_5 = arg4 + rcx_35
                        int64_t rdx_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* rbx_27 = arg4 + rdx_19
                        var_680.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rdi_32 = sx.q(zmm0[0].d)
                        var_840[0] = r13
                        void* r13_4 = arg4 + rdi_32
                        zmm4[0].o = *(arg4 + rdi_32)
                        int64_t rsi_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        void* rax_39 = arg4 + rsi_19
                        int64_t rax_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* r15_7 = arg4 + rax_40
                        int64_t r14_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        void* rdi_36 = arg4 + r14_5
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rsi_19), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rax_40), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r14_5), 0x30)
                        double var_6a0_1[0x2] = zmm0[0].o
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rcx_35), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_19), 0x20)
                        var_620 = zmm0[0].o
                        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg7, data_142fc9520, arg12)
                        int32_t* rax_42 = sx.q(zmm0[0].d)
                        int32_t temp0_424 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = *(rax_42 + r10_7)
                        float* rax_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_426 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rdx_21 = sx.q(zmm0[0].d)
                        int32_t temp0_428 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o = *(rdx_21 + r13_4)
                        int32_t temp0_429 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(sx.q(temp0_428) + rax_39), 0x10)
                        int64_t rdx_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(sx.q(temp0_429) + r15_7), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_24 + rdi_36), 0x30)
                        var_6b0 = zmm0[0].o
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(sx.q(temp0_424) + r11_5), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_43 + rbx_27), 0x20)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm0, data_142fc9540, arg12)
                        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm5[0].o = *(sx.q(zmm0[0].d) + r13_4)
                        int64_t rax_47 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_440 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int32_t temp0_441 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_47 + rax_39), 0x10)
                        zmm0[0].o = zx.o(0)
                        var_780 = arg10
                        arg10 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm0, data_1434423c0, arg12)
                        arg8[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm5[0].o = *(sx.q(arg8[0]) + r13_4)
                        int64_t rax_51 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                        int32_t temp0_446 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_51 + rax_39), 0x10)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                        arg14 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm0, data_1434423e0, arg12)
                        zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        int64_t rax_53 = sx.q(zmm5[0].d)
                        int32_t temp0_451 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
                        var_7e0 = arg6
                        arg6[0].o = *(rax_53 + r13_4)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(sx.q(temp0_451) + rax_39), 0x10)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        var_660[0].o = arg11[0].o
                        arg11 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm0, data_143442400, arg12)
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        int32_t* rax_56 = sx.q(zmm0[0].d)
                        int32_t temp0_456 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
                        zmm1[0].o = *(rax_56 + r13_4)
                        float* rax_58 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_58 + rax_39), 0x10)
                        int32_t temp0_459 = __vextractps_gpr32_xmmdq_immb(arg7[0].o, 1)
                        int32_t temp0_460 = __vextractps_gpr32_xmmdq_immb(arg7[0].o, 2)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(sx.q(temp0_440) + r15_7), 0x20)
                        int32_t temp0_462 = __vextractps_gpr32_xmmdq_immb(arg7[0].o, 3)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(sx.q(temp0_446) + r15_7), 0x20)
                        float* rcx_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_42 + r15_7), 0x20)
                        float* rcx_44 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_44 + r15_7), 0x20)
                        float rdx_26 = arg7[0]
                        int32_t temp0_468 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
                        int64_t rcx_45 = sx.q(var_680.d)
                        zmm5[0].o = var_620
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rcx_45), 0x30)
                        void* rcx_46 = arg4 + rcx_45
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(sx.q(temp0_426) + rcx_46), 0x30)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(sx.q(temp0_441) + rdi_36), 0x30)
                        int32_t temp0_472 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o = *(sx.q(rdx_26) + r10_7)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(sx.q(temp0_459) + r11_5), 0x10)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(sx.q(temp0_460) + rbx_27), 0x20)
                        r13 = var_840[0]
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(sx.q(temp0_462) + rcx_46), 0x30)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(sx.q(temp0_456) + rdi_36), 0x30)
                        arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(sx.q(temp0_468) + rdi_36), 0x30)
                        var_680.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg7, var_6a0_1, 1)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(sx.q(temp0_472) + rdi_36), 0x30)
                        int64_t rax_67 = sx.q(arg10[0].d)
                        int32_t temp0_480 = __vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1)
                        zmm1[0].o = *(rax_67 + r10_7)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(sx.q(temp0_480) + r11_5), 0x10)
                        zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, var_6b0, 1)
                        var_6a0_1.32 = zmm4
                        int64_t rax_70 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_70 + rbx_27), 0x20)
                        int64_t rax_72 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_72 + rcx_46), 0x30)
                        zmm4[0].o = *(sx.q(arg14[0]) + r10_7)
                        zmm3[0].o = *(sx.q(arg11[0].d) + r10_7)
                        int64_t rax_78 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 1))
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_78 + r11_5), 0x10)
                        int32_t temp0_489 = __vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1)
                        arg10 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(sx.q(temp0_489) + r11_5), 0x10)
                        zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        float* rax_82 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 2))
                        int32_t temp0_494 = __vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 3)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_82 + rbx_27), 0x20)
                        zmm3[0].o = _mm256_extractf128_ps(var_8a0[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_780[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                        zmm0 = var_7e0
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                        zmm3[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_8a0[0].o, var_7e0[0].o)
                        arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
                        int64_t rax_84 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 2))
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_84 + rbx_27), 0x20)
                        zmm0 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_8a0[0].o, var_780[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        var_8a0[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(arg5, var_8a0[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg9[0].o = zx.o(0)
                        zmm2 = _mm256_blendv_ps(arg9, zmm2, zmm5)
                        zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(sx.q(temp0_494) + rcx_46), 0x30)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm0 = _mm256_blendv_ps(arg5, zmm0, zmm5)
                        zmm5[0].o = zx.o(*(arg4 + zmm2[0].q))
                        int64_t rax_87 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_87), 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + zmm2[0].q), 2)
                        int64_t rax_89 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_89), 3)
                        zmm5[0].o = zx.o(*(arg4 i+ zmm0[0]))
                        int64_t rax_91 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_91), 1)
                        zmm5[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 i+ zmm0[0]), 2)
                        int64_t rax_93 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_93), 3)
                        int32_t temp0_532 = __vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 3)
                        arg11[0].o = var_660[0].o
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        arg6[0].o = data_143442440
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(sx.q(temp0_532) + rcx_46), 0x30)
                        zmm5 = _mm256_cvtepi32_ps(zmm5)
                        arg5 = data_143442460
                        arg9 = arg5
                        zmm5 = _mm256_div_ps(zmm5, arg5)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg8[0].o, 1)
                        arg8 = var_4c0.32
                        zmm3 = _mm256_insertf128_ps(zmm3, arg7[0].o, 1)
                        zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm1, zmm5), var_680.32)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        arg5[0].o = data_143442480
                        zmm0[0].o &= arg5[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm2[0].o &= arg5[0].o
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        arg6 = var_7e0
                        zmm0 = _mm256_mul_ps(zmm4, 
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1)), arg9))
                        zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442420)
                        zmm0 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_6a0_1.32)
                        zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o = data_143442490
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm2 = _mm256_add_ps(arg10, 
                            _mm256_mul_ps(zmm3, 
                                __vdivps_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm4[0].o, 1)), 
                                    data_1434424a0)))
                        arg10 = var_780
                        zmm3 = _mm256_mul_ps(zmm1, zmm1)
                        arg14 = data_142fc95a0
                        zmm3 = _mm256_sub_ps(arg14, zmm3)
                        zmm4 = _mm256_mul_ps(zmm0, zmm0)
                        zmm3 = _mm256_sub_ps(zmm3, zmm4)
                        var_540 = _mm256_maskstore_ps(arg12, zmm1)
                        var_520 = _mm256_maskstore_ps(arg12, zmm0)
                        zmm0 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm2, zmm2))
                        zmm3[0].o = var_820
                        var_500 = _mm256_maskstore_ps(arg12, zmm2)
                    label_14010f244:
                        zmm1 = _mm256_cmp_ps(arg7, zmm0, 1)
                        zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                        var_4e0 = _mm256_maskstore_ps(arg12, zmm0)
                    case 4
                        zmm1 = var_8a0
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg7, zmm1, zmm2)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm0 =
                            _mm256_blendv_ps(arg7, zmm0, _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
                        int64_t r10_10 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rcx_47 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_29 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_32 = zmm1[0].q
                        double rdi_37 = zmm0[0]
                        int64_t rsi_25 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_96 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = zx.o(*(arg4 + rcx_47))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r10_10), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_32), 2)
                        double rcx_48 = zmm0[0]
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_29), 3)
                        zmm1[0].o = zx.o(*(arg4 i+ rdi_37))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_25), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rcx_48), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_96), 3)
                        zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        zmm5[0].o = data_143442440
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm3 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                        zmm4 = data_143442460
                        zmm3 = _mm256_div_ps(zmm3, zmm4)
                        arg5[0].o = data_143442480
                        zmm1[0].o &= arg5[0].o
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        zmm0[0].o &= arg5[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)), zmm4)
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm4[0].o = data_143442490
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm2 = _mm256_mul_ps(zmm3, zmm3)
                        arg14 = data_142fc95a0
                        zmm2 = _mm256_sub_ps(arg14, zmm2)
                        zmm4 = _mm256_mul_ps(zmm0, zmm0)
                        zmm2 = _mm256_sub_ps(zmm2, zmm4)
                        var_540 = _mm256_maskstore_ps(arg12, zmm3)
                        zmm3[0].o = var_820
                        zmm1 = __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm1), data_1434424a0)
                        var_520 = _mm256_maskstore_ps(arg12, zmm0)
                        zmm0 = _mm256_sub_ps(zmm2, _mm256_mul_ps(zmm1, zmm1))
                        var_500 = _mm256_maskstore_ps(arg12, zmm1)
                        goto label_14010f244
                    case 5
                        zmm3 = var_8a0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg7, zmm0, zmm2)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg7, zmm1, zmm2)
                        int64_t r10_11 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rcx_49 = zmm0[0]
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rdx_30 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rbx_33 = zmm0[0]
                        int64_t rdi_38 = zmm1[0].q
                        int64_t rsi_26 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_97 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = zx.o(*(arg4 i+ rcx_49))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r10_11), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rbx_33), 2)
                        double rcx_50 = zmm0[0]
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_30), 3)
                        zmm1[0].o = zx.o(*(arg4 + rdi_38))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_26), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rcx_50), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_97), 3)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        zmm4 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 5)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 5)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        arg13 = arg6
                        arg6 = data_1434422e0
                        zmm5 = _mm256_and_ps(zmm5, arg6)
                        arg8 = data_143442300
                        zmm4 = _mm256_and_ps(zmm4, arg8)
                        arg14 = arg10
                        arg10 = _mm256_or_ps(zmm5, zmm4)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        arg6[0].o = data_143442320
                        arg9[0].o = arg11[0].o
                        arg11[0].o = arg6[0].o
                        zmm3[0].o &= arg6[0].o
                        zmm4[0].o = data_143442330
                        arg6[0].o = zmm4[0].o
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        zmm2[0].o &= arg11[0].o
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        zmm2 = _mm256_or_ps(arg10, _mm256_insertf128_ps(zmm2, zmm3[0].o, 1))
                        arg10 = arg14
                        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
                        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 6)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_1434422e0)
                        zmm4 = _mm256_and_ps(zmm4, arg8)
                        arg8 = var_4c0.32
                        zmm3 = _mm256_or_ps(zmm3, zmm4)
                        zmm4[0].o = zmm5[0].o & arg11[0].o
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm5[0].o = arg5[0].o & arg11[0].o
                        arg11[0].o = arg9[0].o
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        arg6 = arg13
                        zmm3 = _mm256_or_ps(zmm3, _mm256_insertf128_ps(zmm5, zmm4[0].o, 1))
                        zmm4 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x11)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x11)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442340)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442360)
                        zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442380)
                        zmm0 = _mm256_or_ps(zmm0, zmm4)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = data_1434423a0
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        zmm0 = _mm256_or_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm4[0].o, 1))
                        zmm1 = _mm256_mul_ps(zmm2, zmm2)
                        arg14 = data_142fc95a0
                        zmm1 = _mm256_sub_ps(arg14, zmm1)
                        zmm4 = _mm256_mul_ps(zmm3, zmm3)
                        zmm1 = _mm256_sub_ps(zmm1, zmm4)
                        var_540 = _mm256_maskstore_ps(arg12, zmm2)
                        var_520 = _mm256_maskstore_ps(arg12, zmm3)
                        zmm3[0].o = var_820
                        zmm2 = _mm256_mul_ps(zmm0, zmm0)
                        zmm1 = _mm256_sub_ps(zmm1, zmm2)
                        var_500 = _mm256_maskstore_ps(arg12, zmm0)
                        zmm0 = _mm256_cmp_ps(arg7, zmm1, 1)
                        zmm1 = _mm256_sqrt_ps(zmm1)
                        zmm0 = _mm256_and_ps(zmm0, zmm1)
                        var_4e0 = _mm256_maskstore_ps(arg12, zmm0)
                
                arg13 = var_860_1
            
            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm1[0].o ^= zmm3[0].o
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
            zmm2[0].o ^= zmm3[0].o
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            arg12 = _mm256_and_ps(zmm1, arg12)
            
            if (_mm256_movemask_ps(arg12) != 0)
                int32_t var_460_1[0x8]
                double var_440_1[0x4]
                float var_420_1[0x8]
                float var_400_1[0x8]
                
                if (var_8d8 u> 5)
                    var_460_1 = _mm256_maskstore_ps(arg12, arg7)
                    var_440_1 = _mm256_maskstore_ps(arg12, arg7)
                    var_420_1 = _mm256_maskstore_ps(arg12, arg7)
                    var_400_1 = _mm256_maskstore_ps(arg12, arg14)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                else
                    zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg8[0].o, var_4a0_1[0].o)
                    zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm3 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    
                    switch (var_800.q)
                        case 0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_8a0[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(var_8a0[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            var_8a0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8a0[0].o)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_8a0[0].o, zmm3[0].o)
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm1[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                            arg14 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg7, zmm0, arg14)
                            zmm0[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                            zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                            zmm3 = _mm256_blendv_ps(arg7, zmm3, zmm0)
                            var_800.32 = zmm1
                            int64_t r10_12 = zmm1[0].q
                            void* rsi_27 = arg4 + r10_12
                            int64_t r11_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            void* rcx_51 = arg4 + r11_8
                            int64_t r14_9 = zmm3[0].q
                            void* rdx_31 = arg4 + r14_9
                            int64_t r15_9 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            void* rdi_39 = arg4 + r15_9
                            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            int64_t rax_102 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            var_840[0] = r13
                            int64_t r13_6 = zmm3[0].q
                            zmm4 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            arg11 = _mm256_blendv_ps(arg7, zmm4, arg14)
                            zmm4 = _mm256_blendv_ps(arg7, zmm4, zmm0)
                            int32_t* rbx_34 = zmm4[0].q
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            arg7[0].o = *(rbx_34 + rdx_31)
                            arg5 = _mm256_broadcast_sd(3.9525251667299724e-323)
                            arg6 = _mm256_blendv_ps(arg9, arg5, zmm0)
                            var_8a0[0].o = *(arg6[0].q + rdx_31)
                            arg8 = _mm256_broadcast_sd(5.9287877500949585e-323)
                            zmm0 = _mm256_blendv_ps(arg9, arg8, zmm0)
                            zmm2[0].o = *(zmm0[0] + rdx_31)
                            int64_t rdx_32 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            double rbx_37 = arg11[0]
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                *(rdx_32 + rdi_39), 0x10)
                            int64_t rdx_33 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            var_8a0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0[0].o, 
                                *(rdx_33 + rdi_39), 0x10)
                            float* rdx_34 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rdx_34 + rdi_39), 0x10)
                            float* rdx_35 = zmm4[0].q
                            float* rdi_40 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm4[0].o = *(rbx_37 i+ rsi_27)
                            void* rbx_38 = arg4 + r13_6
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rdx_35 + rbx_38), 0x20)
                            void* rdx_36 = arg4 + rax_102
                            arg10 = arg13
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rdi_40 + rdx_36), 0x30)
                            int64_t rdi_41 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rdi_41 + rcx_51), 0x10)
                            arg5 = _mm256_blendv_ps(arg9, arg5, arg14)
                            arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            var_8a0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0[0].o, 
                                *(arg6[0].q + rbx_38), 0x20)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(zmm0[0] + rbx_38), 0x20)
                            int32_t* rdi_44 = arg5[0].q
                            float* rbx_39 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg6[0].o = *(rdi_44 + rsi_27)
                            arg7 = _mm256_blendv_ps(arg9, arg8, arg14)
                            zmm3[0].o = *(arg7[0].q + rsi_27)
                            float* rsi_28 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0 = var_800.32
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg14 = data_142fc95a0
                            var_8a0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0[0].o, 
                                *(rbx_39 + rdx_36), 0x30)
                            int64_t rdi_46 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(rdi_46 + rcx_51), 0x10)
                            int64_t rdi_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rsi_28 + rdx_36), 0x30)
                            float* rdx_37 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            double rsi_29 = zmm0[0]
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(rdx_37 + rcx_51), 0x10)
                            void* rcx_52 = arg4 i+ rsi_29
                            zmm3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(zmm3[0].q + rcx_52), 0x20)
                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(arg5[0].q + rcx_52), 0x20)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(zmm1[0].q + rcx_52), 0x20)
                            float* rcx_53 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            void* rdx_41 = arg4 + rdi_47
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rcx_53 + rdx_41), 0x30)
                            float* rcx_54 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(rcx_54 + rdx_41), 0x30)
                            float* rcx_55 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rcx_55 + rdx_41), 0x30)
                            zmm1[0].o = *(arg4 + r10_12)
                            arg5[0].o = *(arg4 + r14_9)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r15_9), 0x10)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r13_6), 0x20)
                            r13 = var_840[0]
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(arg4 + rax_102), 0x30)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r11_8), 0x10)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(arg4 i+ rsi_29), 0x20)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdi_47), 0x30)
                            var_460_1 =
                                _mm256_maskstore_ps(arg12, _mm256_insertf128_ps(zmm1, arg5[0].o, 1))
                            zmm1 = _mm256_insertf128_ps(zmm3, arg13[0].o, 1)
                            arg13 = arg10
                            var_440_1 = _mm256_maskstore_ps(arg12, zmm1)
                            var_420_1 = _mm256_maskstore_ps(arg12, 
                                _mm256_insertf128_ps(zmm4, var_8a0[0].o, 1))
                            var_400_1 =
                                _mm256_maskstore_ps(arg12, _mm256_insertf128_ps(zmm0, zmm2[0].o, 1))
                        case 1
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_8a0[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(var_8a0[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            var_8a0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8a0[0].o)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_8a0[0].o, zmm3[0].o)
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm0[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg7, zmm1, zmm0)
                            zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            zmm3 = _mm256_blendv_ps(arg7, zmm3, zmm2)
                            int64_t r10_13 = zmm1[0].q
                            int64_t r11_9 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            int64_t r14_10 = zmm3[0].q
                            zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            int64_t r15_10 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            void* rax_103 = arg4 + r14_10
                            zmm3 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            zmm5 = _mm256_blendv_ps(arg7, zmm3, zmm2)
                            int64_t rbx_40 = zmm4[0].q
                            int32_t* rcx_56 = zmm5[0]
                            int64_t rdx_42 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm4[0].o = *(rcx_56 + rax_103)
                            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            int64_t rcx_57 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            double rdi_48 = zmm5[0]
                            zmm5 = _mm256_broadcast_sd(3.9525251667299724e-323)
                            zmm2 = _mm256_blendv_ps(arg7, zmm5, zmm2)
                            arg5[0].o = *(zmm2[0].q + rax_103)
                            void* rax_104 = arg4 + r10_13
                            void* rsi_31 = arg4 + r11_9
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rdx_42 + rsi_31), 0x10)
                            float* rdx_43 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(rdx_43 + rsi_31), 0x10)
                            int64_t rdx_44 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            void* rsi_32 = arg4 + rbx_40
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rdi_48 i+ rsi_32), 0x20)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(zmm2[0].q + rsi_32), 0x20)
                            void* rsi_33 = arg4 + rdx_44
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            void* rdi_50 = arg4 + r15_10
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rcx_57 + rdi_50), 0x30)
                            float* rcx_58 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(rcx_58 + rdi_50), 0x30)
                            int64_t rcx_59 = zmm1[0].q
                            zmm3 = _mm256_blendv_ps(arg7, zmm3, zmm0)
                            arg5[0].o = *(zmm3[0].q + rax_104)
                            zmm0 = _mm256_blendv_ps(arg7, zmm5, zmm0)
                            zmm5[0].o = *(zmm0[0] + rax_104)
                            void* rax_105 = arg4 + rcx_59
                            float* rdi_53 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(rdi_53 + rsi_33), 0x10)
                            float* rdi_54 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rdi_54 + rsi_33), 0x10)
                            int64_t rsi_34 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(zmm1[0].q + rax_105), 0x20)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(zmm0[0] + rax_105), 0x20)
                            void* rax_106 = arg4 + rsi_34
                            float* rdi_57 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(rdi_57 + rax_106), 0x30)
                            float* rdi_58 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rdi_58 + rax_106), 0x30)
                            zmm3[0].o = *(arg4 + r10_13)
                            zmm5[0].o = *(arg4 + r14_10)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r11_9), 0x10)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rbx_40), 0x20)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r15_10), 0x30)
                            zmm3[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdx_44), 0x10)
                            zmm3[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rcx_59), 0x20)
                            zmm3[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rsi_34), 0x30)
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm2 = _mm256_sub_ps(
                                _mm256_sub_ps(_mm256_sub_ps(arg14, _mm256_mul_ps(zmm3, zmm3)), 
                                    _mm256_mul_ps(zmm1, zmm1)), 
                                _mm256_mul_ps(zmm0, zmm0))
                            zmm4 = _mm256_sqrt_ps(zmm2)
                            var_460_1 = _mm256_maskstore_ps(arg12, zmm3)
                            var_440_1 = _mm256_maskstore_ps(arg12, zmm1)
                            zmm1 = _mm256_cmp_ps(arg7, zmm2, 1)
                            var_420_1 = _mm256_maskstore_ps(arg12, zmm0)
                            var_400_1 = _mm256_maskstore_ps(arg12, _mm256_and_ps(zmm1, zmm4))
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        case 2
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_8a0[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(var_8a0[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            var_8a0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8a0[0].o)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_8a0[0].o, zmm3[0].o)
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm1[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm4 = _mm256_blendv_ps(arg7, zmm0, zmm2)
                            zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg7, zmm3, zmm0)
                            int64_t r10_14 = zmm4[0].q
                            void* rcx_60 = arg4 + r10_14
                            int64_t r11_10 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            void* rdx_45 = arg4 + r11_10
                            zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            int64_t r14_11 = zmm3[0].q
                            int64_t rsi_35 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            void* rbx_41 = arg4 + r14_11
                            zmm3 = _mm256_broadcast_sd(9.8813129168249309e-324)
                            zmm4 = _mm256_blendv_ps(arg7, zmm3, zmm2)
                            void* rax_107 = arg4 + rsi_35
                            var_8a0[0].o = zx.o(*(zmm4[0].q + rcx_60))
                            int64_t rdi_61 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            var_8a0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, *(rdi_61 + rdx_45), 1)
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            var_8a0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, 
                                *(zmm4[0].q + rbx_41), 2)
                            arg5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            zmm2 = _mm256_blendv_ps(arg7, arg5, zmm2)
                            uint32_t rcx_61 = zx.d(*(zmm2[0].q + rcx_60))
                            int64_t rdi_64 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm4[0].o = zx.o(rcx_61)
                            uint16_t* rcx_62 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rcx_62 + rdx_45), 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(zmm2[0].q + rbx_41), 2)
                            int64_t rcx_64 = zmm1[0].q
                            void* rdx_46 = arg4 + rcx_64
                            int64_t rbx_42 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm3 = _mm256_blendv_ps(arg7, zmm3, zmm0)
                            var_8a0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, 
                                *(rdi_64 + rax_107), 3)
                            uint16_t* rdi_65 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rdi_65 + rax_107), 3)
                            void* rax_108 = arg4 + rbx_42
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, 
                                *(zmm3[0].q + rdx_46), 4)
                            uint16_t* rdi_67 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rdi_67 + rax_108), 5)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0 = _mm256_blendv_ps(arg7, arg5, zmm0)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm0[0] + rdx_46), 4)
                            uint16_t* rdx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            int64_t rdi_69 = zmm1[0].q
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rdx_47 + rax_108), 5)
                            void* rax_109 = arg4 + rdi_69
                            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                *(zmm3[0].q + rax_109), 6)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm0[0] + rax_109), 6)
                            var_8a0[0].o = zx.o(*(arg4 + r10_14))
                            var_8a0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, *(arg4 + r11_10), 1)
                            var_8a0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, *(arg4 + r14_11), 2)
                            var_8a0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, *(arg4 + rsi_35), 3)
                            var_8a0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, *(arg4 + rcx_64), 4)
                            var_8a0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, *(arg4 + rbx_42), 5)
                            int64_t rax_111 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_8a0[0].o, *(arg4 + rdi_69), 6)
                            void* rcx_65 = arg4 + rax_111
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rax_111), 7)
                            uint16_t* rax_112 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            zmm3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rax_112 + rcx_65), 7)
                            uint16_t* rax_113 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                            var_8a0[0].o = data_1434424d0
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8a0[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_8a0[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                            zmm1 = data_1434424e0
                            arg5 = zmm1
                            zmm0 = _mm256_div_ps(zmm0, zmm1)
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                            zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_8a0[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8a0[0].o)
                            zmm1 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm3[0].o, 1)), arg5)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_113 + rcx_65), 7)
                            zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_8a0[0].o)
                            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_8a0[0].o)
                            zmm2 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm2[0].o, 1)), arg5)
                            zmm3 = _mm256_sub_ps(
                                _mm256_sub_ps(_mm256_sub_ps(arg14, _mm256_mul_ps(zmm0, zmm0)), 
                                    _mm256_mul_ps(zmm1, zmm1)), 
                                _mm256_mul_ps(zmm2, zmm2))
                            zmm4 = _mm256_sqrt_ps(zmm3)
                            var_460_1 = _mm256_maskstore_ps(arg12, zmm0)
                            var_440_1 = _mm256_maskstore_ps(arg12, zmm1)
                            zmm0 = _mm256_cmp_ps(arg7, zmm3, 1)
                            var_420_1 = _mm256_maskstore_ps(arg12, zmm2)
                            var_400_1 = _mm256_maskstore_ps(arg12, _mm256_and_ps(zmm0, zmm4))
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        case 3
                            zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg7, var_640_1, arg12)
                            int64_t rax_115 = sx.q(zmm0[0].d)
                            void* r15_11 = arg4 + rax_115
                            zmm2[0].o = *(arg4 + rax_115)
                            int32_t temp0_979 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            var_840[0] = r13
                            int64_t r13_7 = sx.q(temp0_979)
                            var_820.q = arg4 + r13_7
                            int64_t rsi_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            var_8b0.q = arg4 + rsi_36
                            int64_t rbx_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            var_800.q = arg4 + rbx_43
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_123 = sx.q(zmm0[0].d)
                            void* r10_15 = arg4 + rax_123
                            int32_t temp0_983 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            zmm4[0].o = *(arg4 + rax_123)
                            int64_t rcx_67 = sx.q(temp0_983)
                            void* r14_12 = arg4 + rcx_67
                            int64_t rdx_51 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            zmm4[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rcx_67), 0x10)
                            void* rdi_70 = arg4 + rdx_51
                            var_6b0[0] = rdi_70
                            int64_t r11_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rdx_51), 0x20)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r11_12), 0x30)
                            var_7e0[0].o = zmm0[0].o
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r13_7), 0x10)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rsi_36), 0x20)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rbx_43), 0x30)
                            double var_780_1[0x4] = zmm0
                            zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg7, data_142fc9520, arg12)
                            void* rcx_68 = arg4 + r11_12
                            var_640_1[0].q = r15_11
                            zmm2[0].o = *(sx.q(zmm0[0].d) + r15_11)
                            int32_t temp0_993 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            int32_t temp0_994 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            int32_t temp0_995 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            var_620.q = r10_15
                            zmm4[0].o = *(sx.q(zmm0[0].d) + r10_15)
                            int64_t rax_127 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rax_127 + r14_12), 0x10)
                            float* rbx_46 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rbx_46 + rdi_70), 0x20)
                            int64_t rbx_48 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rbx_48 + rcx_68), 0x30)
                            var_660[0].o = zmm0[0].o
                            int64_t rcx_69 = var_820.q
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(sx.q(temp0_993) + rcx_69), 0x10)
                            int64_t r13_8 = var_8b0.q
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_994) + r13_8), 0x20)
                            int64_t rdx_56 = var_800.q
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_995) + rdx_56), 0x30)
                            var_680.32 = zmm0
                            zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg7, data_142fc9540, arg12)
                            zmm2[0].o = *(sx.q(zmm0[0].d) + r15_11)
                            int32_t temp0_1007 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            int32_t temp0_1008 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            int32_t temp0_1009 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm4[0].o = *(sx.q(zmm0[0].d) + r10_15)
                            float* rbx_52 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rbx_52 + r14_12), 0x10)
                            int64_t rbx_54 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            double r14_13 = var_6b0[0]
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rbx_54 i+ r14_13), 0x20)
                            float* rbx_56 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rbx_56 + rcx_68), 0x30)
                            double var_6a0_2[0x2] = zmm0[0].o
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(sx.q(temp0_1007) + rcx_69), 0x10)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_1008) + r13_8), 0x20)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_1009) + rdx_56), 0x30)
                            zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, data_1434423c0, arg12)
                            int64_t rax_134 = sx.q(zmm0[0].d)
                            int32_t temp0_1022 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            int32_t temp0_1023 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            int32_t temp0_1024 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                            zmm2[0].o = *(rax_134 + var_640_1[0].q)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rdx_58 = var_620.q
                            zmm4[0].o = *(sx.q(zmm0[0].d) + rdx_58)
                            int64_t rax_138 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rax_138 + r14_12), 0x10)
                            int64_t rax_140 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rax_140 i+ r14_13), 0x20)
                            float* rsi_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rsi_43 + rcx_68), 0x30)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(sx.q(temp0_1022) + rcx_69), 0x10)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_1023) + r13_8), 0x20)
                            arg8 = arg6
                            arg6 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, data_1434423e0, arg12)
                            int32_t temp0_1035 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            int64_t rax_143 = sx.q(zmm2[0])
                            int32_t temp0_1037 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = *(rax_143 + rdx_58)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_1037) + r14_12), 0x10)
                            arg7 = arg10
                            arg10 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, data_143442400, arg12)
                            arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            int64_t rax_146 = sx.q(arg5[0])
                            float* rsi_46 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                            zmm5[0].o = *(rax_146 + rdx_58)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rsi_46 + r14_12), 0x10)
                            int32_t temp0_1043 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 2)
                            int32_t temp0_1044 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                            var_620.32 =
                                __vinsertf128_ymmqq_ymmqq_memdq_immb(var_780_1, var_7e0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_1044) i+ r14_13), 0x20)
                            arg14 =
                                __vinsertf128_ymmqq_ymmqq_memdq_immb(var_680.32, var_660[0].o, 1)
                            var_780 = arg14
                            int64_t rax_150 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rax_150 i+ r14_13), 0x20)
                            int32_t temp0_1050 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 3)
                            float rcx_72 = arg6[0]
                            r13 = var_840[0]
                            int64_t rbx_58 = var_800.q
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(sx.q(temp0_1024) + rbx_58), 0x30)
                            int32_t temp0_1052 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
                            int64_t rsi_47 = var_640_1[0].q
                            zmm2[0].o = *(sx.q(rcx_72) + rsi_47)
                            arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_1052) + rcx_68), 0x30)
                            int64_t rdi_74 = var_820.q
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(sx.q(temp0_1035) + rdi_74), 0x10)
                            int32_t temp0_1055 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                            zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg11, var_6a0_2, 1)
                            var_7e0 = zmm0
                            arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(sx.q(temp0_1055) + rcx_68), 0x30)
                            zmm4 = _mm256_insertf128_ps(zmm4, arg13[0].o, 1)
                            int32_t rcx_78 = arg10[0].d
                            int32_t temp0_1059 = __vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1)
                            arg13 = var_8a0
                            zmm5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm5[0].o = *(sx.q(rcx_78) + rsi_47)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(sx.q(temp0_1059) + rdi_74), 0x10)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(sx.q(temp0_1043) + r13_8), 0x20)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg13[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            int64_t rcx_83 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rcx_83 + r13_8), 0x20)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg13[0].o)
                            arg13 = var_860_1
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm2[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                            zmm5[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm2 = _mm256_blendv_ps(arg9, zmm1, zmm2)
                            zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm5 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(sx.q(temp0_1050) + rbx_58), 0x30)
                            zmm0 = _mm256_blendv_ps(arg9, zmm0, zmm5)
                            zmm5[0].o = zx.o(*(arg4 + zmm2[0].q))
                            int64_t rax_154 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm5[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_154), 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm5[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + zmm2[0].q), 2)
                            int64_t rax_156 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_156), 3)
                            zmm5[0].o = zx.o(*(arg4 i+ zmm0[0]))
                            int64_t rax_158 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm5[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_158), 1)
                            zmm5[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 i+ zmm0[0]), 2)
                            int64_t rax_160 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_160), 3)
                            int32_t temp0_1097 = __vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3)
                            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                            arg6[0].o = data_143442440
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(sx.q(temp0_1097) + rbx_58), 0x30)
                            zmm5 = _mm256_cvtepi32_ps(zmm5)
                            arg5 = data_143442460
                            arg10 = arg5
                            zmm5 = _mm256_div_ps(zmm5, arg5)
                            zmm1 = _mm256_insertf128_ps(zmm1, arg14[0].o, 1)
                            arg14 = data_142fc95a0
                            zmm3 = _mm256_insertf128_ps(zmm3, arg11[0].o, 1)
                            zmm4 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm4, zmm5), var_620.32)
                            zmm5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                            arg5[0].o = data_143442480
                            zmm0[0].o &= arg5[0].o
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                            zmm2[0].o &= arg5[0].o
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            zmm0 = _mm256_mul_ps(zmm1, 
                                _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1)), 
                                    arg10))
                            zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442420)
                            zmm0 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_780)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm5[0].o = data_143442490
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                            zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                                _mm256_mul_ps(zmm3, 
                                    __vdivps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm2[0].o, 
                                            1)), 
                                        data_1434424a0)), 
                                var_7e0)
                            zmm2 = _mm256_sub_ps(_mm256_sub_ps(arg14, _mm256_mul_ps(zmm4, zmm4)), 
                                _mm256_mul_ps(zmm0, zmm0))
                            var_460_1 = _mm256_maskstore_ps(arg12, zmm4)
                            var_440_1 = _mm256_maskstore_ps(arg12, zmm0)
                            zmm0 = _mm256_sub_ps(zmm2, _mm256_mul_ps(zmm1, zmm1))
                            var_420_1 = _mm256_maskstore_ps(arg12, zmm1)
                            var_400_1 = _mm256_maskstore_ps(arg12, 
                                _mm256_and_ps(_mm256_cmp_ps(arg9, zmm0, 1), _mm256_sqrt_ps(zmm0)))
                        case 4
                            zmm0[0].o = _mm256_extractf128_ps(var_8a0[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8a0[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_8a0[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                            zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm2[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                            zmm3[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg7, zmm1, zmm2)
                            zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm0 = _mm256_blendv_ps(arg7, zmm0, 
                                _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
                            int64_t r10_17 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rcx_84 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rdx_62 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_59 = zmm1[0].q
                            double rdi_75 = zmm0[0]
                            int64_t rsi_48 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_163 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = zx.o(*(arg4 + rcx_84))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r10_17), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_59), 2)
                            double rcx_85 = zmm0[0]
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_62), 3)
                            zmm1[0].o = zx.o(*(arg4 i+ rdi_75))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_48), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rcx_85), 2)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_163), 3)
                            zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                            zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                            zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                            var_8a0[0].o = data_143442440
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_8a0[0].o)
                            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_8a0[0].o)
                            zmm3 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                            zmm4 = data_143442460
                            zmm3 = _mm256_div_ps(zmm3, zmm4)
                            arg5[0].o = data_143442480
                            zmm1[0].o &= arg5[0].o
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8a0[0].o)
                            zmm0[0].o &= arg5[0].o
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_8a0[0].o)
                            zmm0 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)), zmm4)
                            zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm4[0].o = data_143442490
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm2 = _mm256_sub_ps(_mm256_sub_ps(arg14, _mm256_mul_ps(zmm3, zmm3)), 
                                _mm256_mul_ps(zmm0, zmm0))
                            var_460_1 = _mm256_maskstore_ps(arg12, zmm3)
                            zmm1 =
                                __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm1), data_1434424a0)
                            var_440_1 = _mm256_maskstore_ps(arg12, zmm0)
                            zmm0 = _mm256_sub_ps(zmm2, _mm256_mul_ps(zmm1, zmm1))
                            var_420_1 = _mm256_maskstore_ps(arg12, zmm1)
                            var_400_1 = _mm256_maskstore_ps(arg12, 
                                _mm256_and_ps(_mm256_cmp_ps(arg7, zmm0, 1), _mm256_sqrt_ps(zmm0)))
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        case 5
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_8a0[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(var_8a0[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            var_8a0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8a0[0].o)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_8a0[0].o, zmm3[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                            zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                            zmm1[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                            zmm3[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                            zmm0 = _mm256_blendv_ps(arg7, zmm0, zmm1)
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                            zmm1 = _mm256_blendv_ps(arg7, zmm2, 
                                _mm256_insertf128_ps(zmm3, zmm1[0].o, 1))
                            int64_t r10_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rcx_86 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rdx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rbx_60 = zmm0[0]
                            int64_t rdi_76 = zmm1[0].q
                            int64_t rsi_49 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_164 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = zx.o(*(arg4 i+ rcx_86))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r10_18), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rbx_60), 2)
                            double rcx_87 = zmm0[0]
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_63), 3)
                            zmm1[0].o = zx.o(*(arg4 + rdi_76))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_49), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rcx_87), 2)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_164), 3)
                            zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                            zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                            zmm4 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                            var_8a0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 5)
                            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 5)
                            zmm5 = _mm256_insertf128_ps(var_8a0, arg5[0].o, 1)
                            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                            arg6 = data_1434422e0
                            arg9 = arg6
                            zmm5 = _mm256_and_ps(zmm5, arg6)
                            arg8 = data_143442300
                            zmm4 = _mm256_and_ps(zmm4, arg8)
                            arg10 = _mm256_or_ps(zmm5, zmm4)
                            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                            arg6[0].o = data_143442320
                            arg11[0].o = arg6[0].o
                            zmm3[0].o &= arg6[0].o
                            zmm4[0].o = data_143442330
                            arg6[0].o = zmm4[0].o
                            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                            zmm2[0].o &= arg11[0].o
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            zmm2 = _mm256_or_ps(arg10, _mm256_insertf128_ps(zmm2, zmm3[0].o, 1))
                            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
                            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 6)
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                            zmm3 = _mm256_and_ps(zmm3, arg9)
                            zmm4 = _mm256_and_ps(zmm4, arg8)
                            zmm3 = _mm256_or_ps(zmm3, zmm4)
                            zmm4[0].o = zmm5[0].o & arg11[0].o
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                            zmm5[0].o = arg5[0].o & arg11[0].o
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            zmm3 = _mm256_or_ps(zmm3, _mm256_insertf128_ps(zmm5, zmm4[0].o, 1))
                            zmm4 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x11)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x11)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442340)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442360)
                            zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442380)
                            zmm0 = _mm256_or_ps(zmm0, zmm4)
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm5[0].o = data_1434423a0
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                            zmm0 = _mm256_or_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm4[0].o, 1))
                            zmm1 = _mm256_sub_ps(_mm256_sub_ps(arg14, _mm256_mul_ps(zmm2, zmm2)), 
                                _mm256_mul_ps(zmm3, zmm3))
                            var_460_1 = _mm256_maskstore_ps(arg12, zmm2)
                            var_440_1 = _mm256_maskstore_ps(arg12, zmm3)
                            zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(zmm0, zmm0))
                            var_420_1 = _mm256_maskstore_ps(arg12, zmm0)
                            var_400_1 = _mm256_maskstore_ps(arg12, 
                                _mm256_and_ps(_mm256_cmp_ps(arg7, zmm1, 1), _mm256_sqrt_ps(zmm1)))
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                
                arg7 = _mm256_cmp_ps(arg9, 
                    _mm256_add_ps(
                        _mm256_add_ps(
                            _mm256_add_ps(_mm256_mul_ps(var_540, var_460_1), 
                                _mm256_mul_ps(var_520, var_440_1)), 
                            _mm256_mul_ps(var_500, var_420_1)), 
                        _mm256_mul_ps(var_4e0, var_400_1)), 
                    2)
                arg7 = _mm256_blendv_ps(data_143442520, arg14, arg7)
                arg9 = var_760
                arg8 = _mm256_sub_ps(arg14, arg9)
                arg7 = _mm256_mul_ps(arg8, arg7)
                zmm4 = _mm256_add_ps(_mm256_mul_ps(arg9, var_460_1), _mm256_mul_ps(arg7, var_540))
                zmm0 = _mm256_mul_ps(arg9, var_440_1)
                zmm5 = _mm256_mul_ps(arg9, var_420_1)
                arg5 = _mm256_mul_ps(arg9, var_400_1)
                zmm0 = _mm256_add_ps(zmm0, _mm256_mul_ps(arg7, var_520))
                zmm1 = _mm256_add_ps(zmm5, _mm256_mul_ps(arg7, var_500))
                zmm2 = _mm256_add_ps(arg5, _mm256_mul_ps(arg7, var_4e0))
                zmm3 = _mm256_mul_ps(zmm4, zmm4)
                zmm5 = _mm256_mul_ps(zmm0, zmm0)
                zmm3 = _mm256_add_ps(_mm256_add_ps(zmm3, _mm256_mul_ps(zmm1, zmm1)), 
                    _mm256_add_ps(zmm5, _mm256_mul_ps(zmm2, zmm2)))
                zmm5 = data_142fc94a0
                arg7 = zmm5
                zmm5 = _mm256_mul_ps(zmm3, zmm5)
                arg5 = _mm256_rsqrt_ps(zmm3)
                arg5 = _mm256_add_ps(arg5, 
                    _mm256_mul_ps(
                        _mm256_sub_ps(arg7, _mm256_mul_ps(zmm5, _mm256_mul_ps(arg5, arg5))), arg5))
                int32_t var_200_1[0x8] = zmm4
                double var_1e0_1[0x4] = zmm0
                float var_1c0_1[0x8] = zmm1
                float var_1a0_1[0x8] = zmm2
                zmm5 = _mm256_add_ps(arg5, 
                    _mm256_mul_ps(
                        _mm256_sub_ps(arg7, _mm256_mul_ps(zmm5, _mm256_mul_ps(arg5, arg5))), arg5))
                arg5 = data_142fc9340
                arg6 = arg5
                arg5 = _mm256_cmp_ps(arg5, zmm3, 2)
                zmm4 = _mm256_and_ps(_mm256_mul_ps(zmm5, zmm4), arg5)
                var_540 = _mm256_maskstore_ps(arg12, zmm4)
                var_520 = _mm256_maskstore_ps(arg12, _mm256_and_ps(_mm256_mul_ps(zmm5, zmm0), arg5))
                var_500 = _mm256_maskstore_ps(arg12, _mm256_and_ps(_mm256_mul_ps(zmm5, zmm1), arg5))
                zmm0 = _mm256_and_ps(_mm256_mul_ps(zmm5, zmm2), arg5)
                zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg6, zmm3, 6), arg14)
                var_4e0 = _mm256_maskstore_ps(arg12, _mm256_or_ps(zmm0, zmm1))
            
            zmm2[0].o = var_7c0
        
        zmm0 = _mm256_insertf128_ps(var_480_1, zmm2[0].o, 1)
        zmm1[0].o = var_540[0].o
        arg7[0].o = var_540[2].o
        zmm3[0].o = var_520[0].o
        arg8[0].o = var_520[4].o
        zmm5[0].o = var_500[0].o
        arg5[0].o = var_500[4].o
        arg6[0].o = var_4e0[0].o
        zmm2[0].o = var_4e0[4].o
        zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
        zmm5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm3[0].o = arg6[0].q | zmm4[0].q << 0x40
        int128_t var_340 = zmm3[0].o
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
        int128_t var_330_1 = zmm3[0].o
        zmm3[0].o = zmm1[0].q | zmm5[0] << 0x40
        int128_t var_320_1 = zmm3[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        int128_t var_310_1 = zmm1[0].o
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
        zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
        zmm4[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
        zmm5[0].o = zmm3[0].q | zmm1[0].q << 0x40
        int128_t var_300_1 = zmm5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        int128_t var_2f0_1 = zmm1[0].o
        zmm1[0].o = zmm4[0].q | zmm2[0].q << 0x40
        int128_t var_2e0_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
        int128_t var_2d0_1 = zmm1[0].o
        uint64_t j = 0xff
        zmm3[0].o = data_142d3f5b0
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        
        do
            uint64_t rcx_88
            uint64_t rflags_1
            
            if (j == 0)
                rcx_88 = 0x40
            else
                rcx_88, rflags_1 = _bit_scan_forward(j)
            double var_2a0[0x4] = zmm0
            zmm1[0].o = (&var_340)[rcx_88]
            arg1[sx.q(*(&var_2a0 + ((zx.q(rcx_88.d) & 7) << 2))) * 3] = zmm1[0].o
            j &= rol.q(-2, rcx_88.b)
        while (j != 0)
        
        r13 = zx.q(r13.d + 8)
    while (r13.d s< i)

uint64_t i_1 = zx.q(arg18)

if (r13.d s< i_1.d)
    zmm0[0].o = zx.o(r13.d)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg11[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
    arg12[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
    zmm1[0].o = zx.o(i_1.d)
    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
    arg9[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg12[0].o)
    arg10[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
    zmm1 = _mm256_insertf128_ps(arg10, arg9[0].o, 1)
    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg11[0].o, 3)
    arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg12[0].o, 3)
    arg5 = _mm256_and_ps(zmm1, _mm256_insertf128_ps(arg5, arg6[0].o, 1))
    int64_t r13_10 = sx.q(arg5[0])
    int64_t r10_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
    int64_t r11_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
    int64_t rbx_62 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    arg6 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9520)
    zmm4[0].o = zx.o(*(zx.q(arg6[0]) + arg2 + r13_10))
    int64_t rdi_79 = sx.q(arg5[0])
    uint32_t* rsi_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_51 + arg2 + r10_19), 1)
    uint32_t* rsi_52 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_52 + arg2 + r11_16), 2)
    int64_t rcx_92 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
    uint32_t* rdx_70 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_70 + arg2 + rbx_62), 3)
    arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
    zmm5[0].o = zx.o(*(zx.q(arg6[0]) + arg2 + rdi_79))
    int32_t temp0_1389 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
    uint32_t* rsi_54 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
    int64_t rax_171 = sx.q(temp0_1389)
    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_54 + arg2 + rcx_92), 1)
    uint64_t rsi_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_55 + arg2 + rax_171), 2)
    zmm0[0].o = zx.o(*(arg2 + rdi_79))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rcx_92), 1)
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rax_171), 2)
    zmm2[0].o = zx.o(*(arg2 + r13_10))
    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg2 + r10_19), 1)
    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg2 + r11_16), 2)
    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg2 + rbx_62), 3)
    float var_4a0_2[0x8] = zmm2
    int64_t rax_173 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rax_173), 3)
    double var_4c0_1[0x2] = zmm0[0].o
    uint32_t* rcx_93 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 4)
    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_93 + arg2 + rax_173), 3)
    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 4)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
    arg7 = _mm256_and_ps(zmm1, zmm0)
    arg6 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9540)
    int64_t rcx_95 = sx.q(arg7[0]) + arg3
    zmm0[0].o = zx.o(*(zx.q(arg6[0]) + rcx_95))
    arg8 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_1434423c0)
    zmm2[0].o = zx.o(*(zx.q(arg8[0]) + rcx_95))
    int64_t rax_180 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)) + arg3
    uint64_t rcx_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_96 + rax_180), 1)
    uint64_t rcx_97 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_97 + rax_180), 1)
    int64_t rax_183 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)) + arg3
    uint64_t rcx_98 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_98 + rax_183), 2)
    uint64_t rcx_99 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_99 + rax_183), 2)
    int64_t rax_186 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3)) + arg3
    uint64_t rcx_100 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
    arg14[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_100 + rax_186), 3)
    uint64_t rcx_101 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_101 + rax_186), 3)
    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
    int64_t rax_189 = sx.q(zmm2[0]) + arg3
    zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
    zmm5[0].o = zx.o(*(zx.q(zmm4[0]) + rax_189))
    arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
    arg6[0].o = zx.o(*(zx.q(arg5[0]) + rax_189))
    int64_t rax_192 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)) + arg3
    uint64_t rcx_104 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_104 + rax_192), 1)
    uint64_t rcx_105 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_105 + rax_192), 1)
    int64_t rax_195 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)) + arg3
    uint64_t rcx_106 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_106 + rax_195), 2)
    uint64_t rcx_107 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_107 + rax_195), 2)
    int64_t rax_198 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)) + arg3
    uint64_t rcx_108 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
    arg13[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_108 + rax_198), 3)
    uint64_t rcx_109 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_109 + rax_198), 3)
    float var_760_1[0x8] = _mm256_insertf128_ps(arg11, arg12[0].o, 1)
    zmm2 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
    float var_480_2[0x8] = zmm2
    arg6 = _mm256_insertf128_ps(arg14, arg13[0].o, 1)
    arg11 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
    arg8[0].o = data_142d3f5b0
    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg8[0].o)
    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
    zmm0[0].o = arg12[0].o & arg9[0].o
    zmm4[0].o = arg7[0].o & arg10[0].o
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
    zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    double var_740[0x4]
    float var_720[0x8]
    float var_700[0x8]
    int32_t var_6e0[0x8]
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
        zmm4[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
        zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
        zmm0 = _mm256_and_ps(zmm4, arg6)
        int64_t r15_16 = sx.q(zmm0[0].d)
        void* rbx_63 = arg4 + r15_16
        int32_t temp0_1456 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_1457 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_1458 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        int64_t r13_11 = sx.q(zmm0[0].d)
        void* rdi_80 = arg4 + r13_11
        int32_t temp0_1460 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_1461 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int64_t r8 = sx.q(temp0_1460)
        zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_142fc9520)
        arg9[0].o = *(zx.q(zmm5[0].d) + rbx_63)
        zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_142fc9540)
        arg5[0].o = *(zx.q(zmm4[0]) + rbx_63)
        int32_t temp0_1464 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        arg10 = arg6
        arg6[0].o = *(zx.q(zmm0[0].d) + rdi_80)
        zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        zmm3[0].o = *(zx.q(zmm2[0]) + rdi_80)
        void* rdi_81 = arg4 + r8
        uint64_t rbx_66 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_66 + rdi_81), 0x10)
        float* rbx_67 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        int64_t r14_17 = sx.q(temp0_1461)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_67 + rdi_81), 0x10)
        void* rdi_82 = arg4 + r14_17
        uint64_t rbx_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_68 + rdi_82), 0x20)
        float* rbx_69 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_69 + rdi_82), 0x20)
        uint64_t rdi_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        int64_t rax_206 = sx.q(temp0_1464)
        void* rbx_70 = arg4 + rax_206
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_83 + rbx_70), 0x30)
        float* rdi_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
        int64_t rsi_56 = sx.q(temp0_1456)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_84 + rbx_70), 0x30)
        void* rbx_71 = arg4 + rsi_56
        uint64_t rdi_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_85 + rbx_71), 0x10)
        float* rdi_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_86 + rbx_71), 0x10)
        int64_t rbx_72 = sx.q(temp0_1457)
        void* rdi_87 = arg4 + rbx_72
        uint64_t rdx_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_74 + rdi_87), 0x20)
        float* rdx_75 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
        int64_t rcx_110 = sx.q(temp0_1458)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_75 + rdi_87), 0x20)
        void* rdx_76 = arg4 + rcx_110
        uint64_t rdi_88 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_88 + rdx_76), 0x30)
        float* rdi_89 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_89 + rdx_76), 0x30)
        zmm5[0].o = *(arg4 + r15_16)
        arg5[0].o = *(arg4 + r13_11)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r8), 0x10)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r14_17), 0x20)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_206), 0x30)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rsi_56), 0x10)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rbx_72), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rcx_110), 0x30)
        arg6 = _mm256_insertf128_ps(arg7, arg12[0].o, 1)
        zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
        zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
        zmm3 = _mm256_mul_ps(zmm5, zmm5)
        zmm3 = _mm256_sub_ps(
            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), _mm256_mul_ps(zmm0, zmm0)), 
            _mm256_mul_ps(zmm2, zmm2))
        zmm4 = _mm256_sqrt_ps(zmm3)
        zmm1 = _mm256_and_ps(arg6, zmm1)
        arg6 = arg10
        var_740 = _mm256_maskstore_ps(zmm1, zmm5)
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        var_720 = _mm256_maskstore_ps(zmm1, zmm0)
        zmm0 = _mm256_cmp_ps(zmm5, zmm3, 1)
        var_700 = _mm256_maskstore_ps(zmm1, zmm2)
        zmm0 = _mm256_and_ps(zmm0, zmm4)
        var_6e0 = _mm256_maskstore_ps(zmm1, zmm0)
    
    zmm3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg8[0].o)
    zmm2 = var_760_1
    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    arg5 = var_480_2
    zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    arg9[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
    zmm0[0].o = zmm4[0].o & not.o(arg9[0].o)
    zmm5[0].o = zmm1[0].o & not.o(arg7[0].o)
    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    char temp0_1525 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
    int32_t rdx_77 = var_8d8
    
    if (temp0_1525 != 0)
        float var_860_2[0x8] = arg6
        arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
        arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm4[0].o ^= zmm2[0].o
        zmm1[0].o ^= zmm2[0].o
        zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
        int128_t var_800_1 = arg9[0].o
        zmm2 = _mm256_insertf128_ps(arg7, arg9[0].o, 1)
        arg10 = _mm256_and_ps(zmm2, zmm1)
        zmm1[0].o = data_1434422d0
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        int32_t* var_8c0
        var_8c0.o = arg5[0].o
        zmm4[0].o = arg5[0].o & zmm1[0].o
        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        char temp0_1542 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
        arg8[0].o = zx.o(0)
        zmm1[0].o = zx.o(0)
        zmm0[0].o = zx.o(arg15)
        
        if (temp0_1542 == 0)
            goto label_14011121a
        
        arg9[0].o = zx.o(0)
        arg5[0].o = zx.o(0)
        zmm1[0].o = zx.o(0)
        
        if (temp0_1525 != temp0_1542)
            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        label_14011121a:
            zmm2 = _mm256_cmp_ps(arg8, arg8, 0xf)
            arg7 = _mm256_xor_ps(zmm1, zmm2)
            zmm1[0].o = zx.o(0)
            arg9[0].o = zx.o(0)
            arg5[0].o = zx.o(0)
            
            if (not(zx.o(0) f>= zmm0[0].d))
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                
                if (zmm0[0].o f>= 1f)
                    zmm1 = _mm256_and_ps(arg7, arg10)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                    arg9 = _mm256_blendv_ps(arg8, zmm2, zmm1)
                    arg5 = arg9
                else
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                    zmm3 = _mm256_cvtepi32_ps(zmm2)
                    arg9 = _mm256_mul_ps(zmm1, zmm3)
                    arg14 = _mm256_and_ps(arg7, arg10)
                    arg11 = _mm256_round_ps(arg9, 9)
                    zmm1 = _mm256_cvttps_epi32(arg11)
                    zmm4[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm3[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                    zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                    zmm0[0].o = zx.o(0)
                    zmm3 = _mm256_blendv_ps(zmm0, zmm3, arg14)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                    
                    if (arg16 != 1)
                        arg8 = _mm256_sub_ps(arg9, arg11)
                    
                    arg9 = zmm3
                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                    zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                    zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    arg5 = _mm256_blendv_ps(zmm0, zmm1, arg14)
            
            zmm1[0].o = zx.o(0)
            zmm1 = _mm256_blendv_ps(zmm1, arg8, arg7)
        
        double var_820_1[0x4] = zmm1
        arg11 = _mm256_insertf128_ps(arg12, arg13[0].o, 1)
        zmm0 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
        var_7c0.32 = zmm0
        zmm0[0].o = zx.o(rax)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
        arg13 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
        zmm0[0].o = zx.o(rcx_1)
        arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
        uint64_t r15_17 = zx.q(rdx_77)
        uint32_t var_640_2[0x4] = arg9[0].o
        
        if (rdx_77 u> 5)
            zmm0[0].o = zx.o(0)
            var_740 = _mm256_maskstore_ps(arg10, zmm0)
            var_720 = _mm256_maskstore_ps(arg10, zmm0)
            var_700 = _mm256_maskstore_ps(arg10, zmm0)
            zmm0 = data_142fc95a0
        label_1401126a0:
            var_6e0 = _mm256_maskstore_ps(arg10, zmm0)
            arg9[0].o = var_800_1
            arg6 = var_860_2
            arg8[0].o = var_8c0.o
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg12[0].o)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            arg14 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg9 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            int32_t var_8d0
            
            switch (r15_17)
                case 0
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm4 = var_7c0.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    var_8d0.o = zmm3[0].o
                    zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm5[0].o = zx.o(0)
                    zmm0 = _mm256_blendv_ps(zmm5, zmm0, zmm3)
                    zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                    arg7 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                    zmm1 = _mm256_blendv_ps(zmm5, zmm2, arg7)
                    double r10_21 = zmm0[0]
                    void* rsi_57 = arg4 i+ r10_21
                    int64_t r11_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t r14_18 = zmm1[0].q
                    void* rdi_90 = arg4 + r14_18
                    var_8a0[0] = r15_17
                    int64_t r15_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rbx_73 = arg4 + r15_18
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r13_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t r8_1 = zmm1[0].q
                    zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg9 = _mm256_blendv_ps(zmm5, zmm1, zmm3)
                    void* rcx_114 = arg4 + r8_1
                    arg14 = _mm256_blendv_ps(zmm5, zmm1, arg7)
                    var_840 = arg11
                    arg11[0].o = *(arg14[0].q + rdi_90)
                    zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm4 = _mm256_blendv_ps(zmm5, zmm1, zmm3)
                    arg8 = _mm256_blendv_ps(zmm5, zmm1, arg7)
                    int32_t* rax_209 = arg8[0].q
                    zmm1 = _mm256_broadcast_sd(5.9287877500949585e-323)
                    zmm3 = _mm256_blendv_ps(zmm5, zmm1, zmm3)
                    zmm1 = _mm256_blendv_ps(zmm5, zmm1, arg7)
                    zmm2[0].o = *(rax_209 + rdi_90)
                    zmm5[0].o = *(zmm1[0].q + rdi_90)
                    void* rax_211 = arg4 + r13_12
                    arg7[0].o = *(arg9[0].q + rsi_57)
                    float* rdi_92 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rdi_92 + rbx_73), 0x10)
                    int64_t rdi_93 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_93 + rbx_73), 0x10)
                    float* rdi_94 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_94 + rbx_73), 0x10)
                    int64_t rdi_95 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    var_7e0 = arg13
                    arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg5[0].q + rcx_114), 0x20)
                    float* rbx_75 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg11[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_75 + rax_211), 0x30)
                    void* rbx_76 = arg4 + r11_18
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_95 + rbx_76), 0x10)
                    arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg5[0].q + rcx_114), 0x20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm1[0].q + rcx_114), 0x20)
                    arg6[0].o = *(zmm4[0].q + rsi_57)
                    float* rcx_116 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = *(zmm3[0].q + rsi_57)
                    float* rsi_58 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_116 + rax_211), 0x30)
                    float* rcx_117 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_117 + rbx_76), 0x10)
                    int64_t rcx_118 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_58 + rax_211), 0x30)
                    float* rax_212 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    double rsi_59 = zmm0[0]
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_212 + rbx_76), 0x10)
                    void* rax_213 = arg4 i+ rsi_59
                    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg5[0].q + rax_213), 0x20)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(zmm4[0].q + rax_213), 0x20)
                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(zmm3[0].q + rax_213), 0x20)
                    int64_t rax_214 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    void* rdi_102 = arg4 + rcx_118
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_214 + rdi_102), 0x30)
                    int64_t rax_215 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_215 + rdi_102), 0x30)
                    int64_t rax_216 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_216 + rdi_102), 0x30)
                    zmm3[0].o = *(arg4 i+ r10_21)
                    zmm4[0].o = *(arg4 + r14_18)
                    rdx_77 = var_8d8
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r15_18), 0x10)
                    r15_17 = var_8a0[0]
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r8_1), 0x20)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r13_12), 0x30)
                    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + r11_18), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 i+ rsi_59), 0x20)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rcx_118), 0x30)
                    var_740 = _mm256_maskstore_ps(arg10, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                    zmm3 = _mm256_insertf128_ps(arg5, arg11[0].o, 1)
                    arg13 = var_7e0
                    arg11 = var_840
                    var_720 = _mm256_maskstore_ps(arg10, zmm3)
                    zmm3[0].o = var_8d0.o
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    var_700 = _mm256_maskstore_ps(arg10, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                    goto label_1401126a0
                case 1
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm4 = var_7c0.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg8[0].o = zmm3[0].o
                    zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm5 = _mm256_blendv_ps(zmm0, zmm1, zmm3)
                    zmm1[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    zmm4 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm2, zmm4)
                    int64_t r10_22 = zmm1[0].q
                    void* rax_217 = arg4 + r10_22
                    int64_t r11_19 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rdi_103 = arg4 + r11_19
                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r14_19 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    arg7 = arg5
                    arg5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm1 = _mm256_blendv_ps(zmm0, arg5, zmm4)
                    arg6[0].o = *(zmm1[0].q + rax_217)
                    int64_t rsi_61 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r15_19 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_61 + rdi_103), 0x10)
                    int64_t r13_13 = zmm2[0].q
                    zmm2 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm4 = _mm256_blendv_ps(zmm0, zmm2, zmm4)
                    float* rdx_78 = zmm1[0].q
                    int32_t* rbx_77 = zmm4[0].q
                    float* rcx_119 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm1[0].o = *(rbx_77 + rax_217)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    float* rax_218 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    float* rbx_78 = zmm4[0].q
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_119 + rdi_103), 0x10)
                    double rcx_120 = zmm5[0]
                    void* rdi_104 = arg4 + r13_13
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_78 + rdi_104), 0x20)
                    void* rdx_79 = arg4 i+ rcx_120
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_78 + rdi_104), 0x20)
                    int64_t rdi_105 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    void* rbx_79 = arg4 + r14_19
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_19 + rbx_79), 0x30)
                    int64_t rsi_62 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_218 + rbx_79), 0x30)
                    double rax_219 = zmm5[0]
                    zmm5 = _mm256_blendv_ps(zmm0, arg5, zmm3)
                    arg5[0].o = *(zmm5[0] i+ rdx_79)
                    zmm2 = _mm256_blendv_ps(zmm0, zmm2, zmm3)
                    zmm3[0].o = *(zmm2[0].q + rdx_79)
                    void* rdx_80 = arg4 + rdi_105
                    int64_t rbx_82 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_82 + rdx_80), 0x10)
                    float* rbx_83 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_83 + rdx_80), 0x10)
                    void* rdx_81 = arg4 i+ rax_219
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm5[0] + rdx_81), 0x20)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(zmm2[0].q + rdx_81), 0x20)
                    void* rdx_82 = arg4 + rsi_62
                    int64_t rbx_86 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_86 + rdx_82), 0x30)
                    float* rbx_87 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_87 + rdx_82), 0x30)
                    zmm3[0].o = *(arg4 i+ rcx_120)
                    arg5[0].o = *(arg4 + r10_22)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r11_19), 0x10)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r13_13), 0x20)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r14_19), 0x30)
                    rdx_77 = var_8d8
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdi_105), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 i+ rax_219), 0x20)
                    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rsi_62), 0x30)
                    zmm3 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                    arg5 = arg7
                    zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2 = _mm256_mul_ps(zmm3, zmm3)
                    zmm2 = _mm256_sub_ps(
                        _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm2), 
                            _mm256_mul_ps(zmm4, zmm4)), 
                        _mm256_mul_ps(zmm1, zmm1))
                    zmm5 = _mm256_sqrt_ps(zmm2)
                    var_740 = _mm256_maskstore_ps(arg10, zmm3)
                    zmm3[0].o = arg8[0].o
                    var_720 = _mm256_maskstore_ps(arg10, zmm4)
                    zmm0 = _mm256_cmp_ps(zmm0, zmm2, 1)
                    var_700 = _mm256_maskstore_ps(arg10, zmm1)
                    zmm0 = _mm256_and_ps(zmm0, zmm5)
                    goto label_1401126a0
                case 2
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm4 = var_7c0.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    var_8d0.o = zmm3[0].o
                    zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                    arg7 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, arg7)
                    zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                    zmm5 = _mm256_blendv_ps(zmm0, zmm2, zmm3)
                    int64_t r10_23 = zmm1[0].q
                    int64_t r11_20 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rdi_106 = arg4 + r10_23
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r14_20 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rsi_63 = arg4 + r11_20
                    zmm4 = _mm256_broadcast_sd(9.8813129168249309e-324)
                    zmm2 = _mm256_blendv_ps(zmm0, zmm4, arg7)
                    int64_t rax_220 = zmm1[0].q
                    void* rdx_83 = zmm2[0].q
                    uint16_t* rbx_88 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    uint16_t* rcx_121 = zmm1[0].q
                    zmm2[0].o = zx.o(*(rdx_83 + rdi_106))
                    int64_t rdx_85 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rbx_88 + rsi_63), 1)
                    zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg8 = arg5
                    arg5 = _mm256_blendv_ps(zmm0, zmm2, arg7)
                    uint32_t rdi_107 = zx.d(*(arg5[0].q + rdi_106))
                    uint16_t* rbx_90 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg6[0].o = zx.o(rdi_107)
                    void* rdi_108 = arg4 + rax_220
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rbx_90 + rsi_63), 1)
                    void* rsi_64 = arg4 + r14_20
                    double rbx_91 = zmm5[0]
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_121 + rdi_108), 2)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg5[0].q + rdi_108), 2)
                    void* rcx_123 = arg4 i+ rbx_91
                    int64_t rdi_109 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_85 + rsi_64), 3)
                    uint16_t* rdx_86 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rdx_86 + rsi_64), 3)
                    void* rdx_87 = arg4 + rdi_109
                    zmm4 = _mm256_blendv_ps(zmm0, zmm4, zmm3)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm4[0].q + rcx_123), 4)
                    uint16_t* rsi_66 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_66 + rdx_87), 5)
                    zmm2 = _mm256_blendv_ps(zmm0, zmm2, zmm3)
                    zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm5[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(zmm2[0].q + rcx_123), 4)
                    uint16_t* rcx_124 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rcx_124 + rdx_87), 5)
                    int64_t rcx_125 = zmm3[0].q
                    void* rdx_88 = arg4 + rcx_125
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm4[0].q + rdx_88), 6)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm2[0].q + rdx_88), 6)
                    arg5[0].o = zx.o(*(arg4 + r10_23))
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r11_20), 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rax_220), 2)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r14_20), 3)
                    rdx_77 = var_8d8
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 i+ rbx_91), 4)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdi_109), 5)
                    int64_t rax_221 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rcx_125), 6)
                    void* rcx_126 = arg4 + rax_221
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rax_221), 7)
                    int64_t rax_222 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_222 + rcx_126), 7)
                    uint16_t* rax_223 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                    zmm4[0].o = zx.o(0)
                    zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                    arg5[0].o = data_1434424d0
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm3[0].o, 1))
                    zmm3 = data_1434424e0
                    zmm2 = _mm256_div_ps(zmm2, zmm3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rax_223 + rcx_126), 7)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm1[0].o, 1)), zmm3)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                    zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zx.o(0))
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    arg5 = arg8
                    zmm3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm4[0].o, 1)), zmm3)
                    zmm4 = _mm256_mul_ps(zmm2, zmm2)
                    zmm4 = _mm256_sub_ps(
                        _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm4), 
                            _mm256_mul_ps(zmm1, zmm1)), 
                        _mm256_mul_ps(zmm3, zmm3))
                    zmm5 = _mm256_sqrt_ps(zmm4)
                    var_740 = _mm256_maskstore_ps(arg10, zmm2)
                    var_720 = _mm256_maskstore_ps(arg10, zmm1)
                    zmm0 = _mm256_cmp_ps(zmm0, zmm4, 1)
                    var_700 = _mm256_maskstore_ps(arg10, zmm3)
                    zmm3[0].o = var_8d0.o
                    zmm0 = _mm256_and_ps(zmm0, zmm5)
                    goto label_1401126a0
                case 3
                    arg8[0].o = var_8c0.o
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg8[0].q)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    arg7 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, var_860_2)
                    int64_t rax_225 = sx.q(zmm0[0].d)
                    var_8a0[0] = r15_17
                    void* r15_20 = arg4 + rax_225
                    zmm1[0].o = *(arg4 + rax_225)
                    int64_t r13_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    void* r11_21 = arg4 + r13_14
                    int64_t rbx_92 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    void* r10_24 = arg4 + rbx_92
                    int64_t rax_227 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    void* r14_21 = arg4 + rax_227
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rcx_130 = sx.q(zmm0[0].d)
                    void* rdi_110 = arg4 + rcx_130
                    zmm2[0].o = *(arg4 + rcx_130)
                    int64_t rdx_90 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    void* rsi_70 = arg4 + rdx_90
                    int64_t r8_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    void* rcx_133 = arg4 + r8_3
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rdx_90), 0x10)
                    int32_t temp0_1851 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r8_3), 0x20)
                    int64_t rdx_92 = sx.q(temp0_1851)
                    void* r8_4 = arg4 + rdx_92
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_92), 0x30)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r13_14), 0x10)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_92), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_227), 0x30)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9520)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    var_840 = zmm0
                    uint64_t rax_228 = zx.q(zmm2[0])
                    uint64_t r13_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                    uint64_t rbx_93 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                    uint64_t rdx_93 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                    zmm0[0].o = *(rax_228 + r15_20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = *(zx.q(zmm1[0]) + rdi_110)
                    uint64_t rax_230 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_230 + rsi_70), 0x10)
                    uint64_t rax_231 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_231 + rcx_133), 0x20)
                    uint64_t rax_232 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_232 + r8_4), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r13_15 + r11_21), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_93 + r10_24), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_93 + r14_21), 0x30)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9540)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    var_7e0 = zmm0
                    uint64_t rax_233 = zx.q(zmm2[0])
                    uint64_t r13_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                    uint64_t rbx_94 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                    uint64_t rdx_94 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                    zmm0[0].o = *(rax_233 + r15_20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = *(zx.q(zmm1[0]) + rdi_110)
                    uint64_t rax_235 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_235 + rsi_70), 0x10)
                    uint64_t rax_236 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_236 + rcx_133), 0x20)
                    uint64_t rax_237 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_237 + r8_4), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r13_16 + r11_21), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_94 + r10_24), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_94 + r14_21), 0x30)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423c0)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    var_780 = zmm0
                    uint64_t rax_238 = zx.q(zmm2[0])
                    uint64_t r13_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                    uint64_t rbx_95 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                    uint64_t rdx_95 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                    zmm0[0].o = *(rax_238 + r15_20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = *(zx.q(zmm1[0]) + rdi_110)
                    uint64_t rax_240 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_240 + rsi_70), 0x10)
                    uint64_t rax_241 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_241 + rcx_133), 0x20)
                    float* rax_242 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_242 + r8_4), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r13_17 + r11_21), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_95 + r10_24), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_95 + r14_21), 0x30)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423e0)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    var_660 = zmm0
                    uint64_t rax_243 = zx.q(zmm2[0])
                    uint64_t r13_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                    uint64_t rbx_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                    uint64_t rdx_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                    zmm0[0].o = *(rax_243 + r15_20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = *(zx.q(zmm1[0]) + rdi_110)
                    uint64_t rax_245 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_245 + rsi_70), 0x10)
                    uint64_t rax_246 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_246 + rcx_133), 0x20)
                    float* rax_247 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_247 + r8_4), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r13_18 + r11_21), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_96 + r10_24), 0x20)
                    var_8d0.o = zmm3[0].o
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_96 + r14_21), 0x30)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442400)
                    zmm1[0].o = *(zx.q(zmm0[0].d) + r15_20)
                    var_680 = zmm1[0].o
                    uint64_t r15_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    uint64_t rax_249 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    float* r13_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int32_t* rdx_97 = zx.q(zmm0[0].d)
                    uint64_t rbx_97 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    zmm1[0].o = *(rdx_97 + rdi_110)
                    int128_t var_6a0_3 = zmm1[0].o
                    float* rdi_111 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg6 = var_7c0.32
                    zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg7 = arg5
                    arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                    zmm4 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    arg9[0].o = zx.o(0)
                    zmm1 = _mm256_blendv_ps(arg9, zmm1, zmm2)
                    zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    zmm2 = _mm256_blendv_ps(arg9, zmm4, _mm256_insertf128_ps(arg5, zmm2[0].o, 1))
                    zmm4[0].o = zx.o(*(arg4 + zmm1[0].q))
                    int64_t rdx_99 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rdx_99), 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + zmm1[0].q), 2)
                    int64_t rdx_101 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rdx_101), 3)
                    zmm1[0].o = zx.o(*(arg4 + zmm2[0].q))
                    int64_t rdx_103 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_103), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + zmm2[0].q), 2)
                    int64_t rdx_105 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_105), 3)
                    float* rdx_106 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                    zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    arg6[0].o = data_143442440
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                    zmm3[0].o = data_143442480
                    arg5[0].o &= zmm3[0].o
                    zmm3[0].o &= zmm5[0].o
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                    arg6 = var_860_2
                    zmm2 = _mm256_cvtepi32_ps(zmm2)
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                    zmm5 = data_143442460
                    zmm2 = _mm256_div_ps(zmm2, zmm5)
                    zmm3 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm3), zmm5)
                    zmm5[0].o = var_6a0_3
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_97 + rsi_70), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_111 + rcx_133), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_106 + r8_4), 0x30)
                    arg5[0].o = var_680
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_21 + r11_21), 0x10)
                    r15_17 = var_8a0[0]
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_249 + r10_24), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r13_19 + r14_21), 0x30)
                    rdx_77 = var_8d8
                    zmm5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm4, zmm1[0].o, 1), 
                        data_143442420)
                    zmm2 = __vaddps_ymmqq_ymmqq_memqq(__vmulps_ymmqq_ymmqq_memqq(zmm2, var_660), 
                        var_840)
                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg5[0].o = data_143442490
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    arg5 = arg7
                    zmm1 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm4[0].o, 1)), 
                        data_1434424a0)
                    zmm0 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm0, zmm3), var_7e0)
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm5, zmm1), var_780)
                    zmm3 = _mm256_mul_ps(zmm2, zmm2)
                    zmm3 = _mm256_sub_ps(data_142fc95a0, zmm3)
                    zmm4 = _mm256_mul_ps(zmm0, zmm0)
                    zmm3 = _mm256_sub_ps(zmm3, zmm4)
                    var_740 = _mm256_maskstore_ps(arg10, zmm2)
                    var_720 = _mm256_maskstore_ps(arg10, zmm0)
                    zmm0 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm1, zmm1))
                    zmm3[0].o = var_8d0.o
                    var_700 = _mm256_maskstore_ps(arg10, zmm1)
                    zmm1 = _mm256_cmp_ps(arg9, zmm0, 1)
                    zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                    var_6e0 = _mm256_maskstore_ps(arg10, zmm0)
                    arg9[0].o = var_800_1
                case 4
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm4 = var_7c0.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg8[0].o = zmm3[0].o
                    zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, zmm3)
                    zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    zmm2 = _mm256_blendv_ps(zmm0, zmm2, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                    int64_t r10_25 = zmm1[0].q
                    int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rcx_134 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_98 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rdi_112 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t rsi_71 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rax_250 = zmm2[0].q
                    zmm2[0].o = zx.o(*(arg4 + r10_25))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r8_5), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rdi_112), 2)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rcx_134), 3)
                    int64_t rcx_135 = zmm1[0].q
                    zmm1[0].o = zx.o(*(arg4 + rax_250))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_98), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_135), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_71), 3)
                    zmm3 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    arg7 = arg5
                    arg5[0].o = data_143442440
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    zmm4 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, zmm5[0].o, 1))
                    zmm5 = data_143442460
                    zmm4 = _mm256_div_ps(zmm4, zmm5)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    arg6[0].o = data_143442480
                    zmm1[0].o &= arg6[0].o
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm2[0].o &= arg6[0].o
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg5 = arg7
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1)), zmm5)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442420)
                    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o = data_143442490
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    zmm2 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm3[0].o, 1)), 
                        data_1434424a0)
                    zmm3 = _mm256_mul_ps(zmm4, zmm4)
                    zmm3 = _mm256_sub_ps(
                        _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), 
                            _mm256_mul_ps(zmm1, zmm1)), 
                        _mm256_mul_ps(zmm2, zmm2))
                    zmm5 = _mm256_sqrt_ps(zmm3)
                    var_740 = _mm256_maskstore_ps(arg10, zmm4)
                    var_720 = _mm256_maskstore_ps(arg10, zmm1)
                    zmm0 = _mm256_cmp_ps(zmm0, zmm3, 1)
                    zmm3[0].o = arg8[0].o
                    var_700 = _mm256_maskstore_ps(arg10, zmm2)
                    zmm0 = _mm256_and_ps(zmm0, zmm5)
                    goto label_1401126a0
                case 5
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm4 = var_7c0.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    var_8d0.o = zmm3[0].o
                    zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg7[0].o = zx.o(0)
                    zmm1 = _mm256_blendv_ps(arg7, zmm1, zmm3)
                    zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                    zmm2 = _mm256_blendv_ps(arg7, zmm2, zmm3)
                    int64_t r8_6 = zmm1[0].q
                    int64_t r10_26 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rcx_136 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_99 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rdi_113 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t rsi_72 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rax_251 = zmm2[0].q
                    zmm2[0].o = zx.o(*(arg4 + r8_6))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r10_26), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rdi_113), 2)
                    zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rcx_136), 3)
                    int64_t rcx_137 = zmm1[0].q
                    zmm1[0].o = zx.o(*(arg4 + rax_251))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_99), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_137), 2)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_72), 3)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x15)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                    zmm5 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    arg14 = arg5
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0xa)
                    arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 5)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 5)
                    zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                    arg9 = data_1434422e0
                    zmm0 = _mm256_and_ps(zmm0, arg9)
                    arg8 = data_143442300
                    zmm5 = _mm256_and_ps(zmm5, arg8)
                    zmm0 = _mm256_or_ps(zmm0, zmm5)
                    arg6[0].o = data_143442320
                    zmm2[0].o &= arg6[0].o
                    zmm5[0].o = data_143442330
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    zmm1[0].o &= arg6[0].o
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm0 = _mm256_or_ps(zmm0, zmm1)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 6)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 6)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                    zmm1 = _mm256_and_ps(zmm1, arg9)
                    arg9 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    arg8 = _mm256_and_ps(arg9, arg8)
                    zmm1 = _mm256_or_ps(zmm1, arg8)
                    zmm2[0].o &= arg6[0].o
                    arg5[0].o &= arg6[0].o
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    arg5 = arg14
                    zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                    zmm5 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x11)
                    zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x11)
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                    zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442340)
                    zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442360)
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442380)
                    zmm1 = _mm256_or_ps(zmm1, zmm2)
                    zmm2 = _mm256_or_ps(zmm3, zmm5)
                    zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm5[0].o = data_1434423a0
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    zmm2 = _mm256_or_ps(zmm2, _mm256_insertf128_ps(zmm4, zmm3[0].o, 1))
                    zmm3 = _mm256_mul_ps(zmm0, zmm0)
                    zmm3 = _mm256_sub_ps(data_142fc95a0, zmm3)
                    zmm4 = _mm256_mul_ps(zmm1, zmm1)
                    zmm3 = _mm256_sub_ps(zmm3, zmm4)
                    var_740 = _mm256_maskstore_ps(arg10, zmm0)
                    var_720 = _mm256_maskstore_ps(arg10, zmm1)
                    zmm0 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm2, zmm2))
                    zmm3[0].o = var_8d0.o
                    var_700 = _mm256_maskstore_ps(arg10, zmm2)
                    zmm1 = _mm256_cmp_ps(arg7, zmm0, 1)
                    zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                    goto label_1401126a0
        
        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0[0].o ^= zmm1[0].o
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg5[0].o, var_640_2)
        zmm1[0].o ^= zmm2[0].o
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm0[0].o &= arg8[0].o
        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            double var_600_1[0x4]
            float var_5e0_1[0x8]
            float var_5c0_1[0x8]
            
            if (rdx_77 u> 5)
                zmm0[0].o = zx.o(0)
                var_600_1 = _mm256_maskstore_ps(zmm1, zmm0)
                var_5e0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                var_5c0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = data_142fc95a0
            else
                zmm2 = _mm256_insertf128_ps(arg12, arg12[0].o, 1)
                zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                arg9 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                arg8 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                
                switch (r15_17)
                    case 0
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_7c0.32
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm5[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        arg12 = _mm256_blendv_ps(zmm2, zmm0, zmm3)
                        arg5[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        zmm4 = _mm256_blendv_ps(zmm2, zmm4, zmm5)
                        int64_t r8_7 = arg12[0].q
                        void* rcx_140 = arg4 + r8_7
                        int64_t r10_27 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        int64_t r11_22 = zmm4[0].q
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        int64_t rdi_114 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        void* rdx_107 = arg4 + r11_22
                        arg6 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg13 = _mm256_blendv_ps(zmm2, arg6, zmm3)
                        int64_t rsi_73 = zmm4[0].q
                        arg6 = _mm256_blendv_ps(zmm2, arg6, zmm5)
                        arg7[0].o = *(arg13[0].q + rcx_140)
                        int32_t* rbx_100 = arg6[0].q
                        int64_t rax_254 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg8[0].o = *(rbx_100 + rdx_107)
                        arg10 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm4 = _mm256_blendv_ps(zmm2, arg10, zmm3)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg9[0].o = *(zmm4[0].q + rcx_140)
                        arg11 = _mm256_broadcast_sd(5.9287877500949585e-323)
                        zmm3 = _mm256_blendv_ps(zmm2, arg11, zmm3)
                        arg14[0].o = *(zmm3[0].q + rcx_140)
                        float* rcx_141 = arg6[0].q
                        arg10 = _mm256_blendv_ps(zmm2, arg10, zmm5)
                        double rbx_103 = arg10[0]
                        zmm2 = _mm256_blendv_ps(zmm2, arg11, zmm5)
                        zmm5[0].o = *(rbx_103 i+ rdx_107)
                        arg5[0].o = *(zmm2[0].q + rdx_107)
                        float* rdx_108 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rbx_105 = arg4 + r10_27
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rax_254 + rbx_105), 0x10)
                        int64_t rax_255 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_255 + rbx_105), 0x10)
                        float* rax_256 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_256 + rbx_105), 0x10)
                        int64_t rax_257 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                        void* rbx_106 = arg4 + rsi_73
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_141 + rbx_106), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(zmm0[0] i+ rbx_106), 0x20)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(zmm2[0].q + rbx_106), 0x20)
                        void* rcx_144 = arg4 + rax_257
                        arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        void* rbx_107 = arg4 + rdi_114
                        arg10[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_108 + rbx_107), 0x30)
                        int64_t rdx_109 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_109 + rcx_144), 0x10)
                        float* rdx_110 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_110 + rbx_107), 0x30)
                        float* rdx_111 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdx_111 + rcx_144), 0x10)
                        float* rdx_112 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdx_112 + rbx_107), 0x30)
                        float* rdx_113 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                            *(rdx_113 + rcx_144), 0x10)
                        int64_t rcx_145 = arg5[0].q
                        void* rdx_114 = arg4 + rcx_145
                        zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(zmm2[0].q + rdx_114), 0x20)
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(zmm4[0].q + rdx_114), 0x20)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(zmm3[0].q + rdx_114), 0x20)
                        arg6[0].o = *(arg4 + r8_7)
                        zmm5[0].o = *(arg4 + r11_22)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r10_27), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rsi_73), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rdi_114), 0x30)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rax_257), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rcx_145), 0x20)
                        int64_t rax_258 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rax_258), 0x30)
                        void* rax_259 = arg4 + rax_258
                        int64_t rcx_146 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rcx_146 + rax_259), 0x30)
                        float* rcx_147 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                            *(rcx_147 + rax_259), 0x30)
                        float* rcx_148 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_148 + rax_259), 0x30)
                        var_600_1 =
                            _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(arg5, zmm5[0].o, 1))
                        var_5e0_1 =
                            _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm2, arg10[0].o, 1))
                        var_5c0_1 =
                            _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm4, arg7[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                    case 1
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_7c0.32
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm5[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        arg9 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg7[0].o = zx.o(0)
                        zmm3 = _mm256_blendv_ps(arg7, zmm3, arg9)
                        arg5[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg7, zmm4, zmm5)
                        int64_t r8_8 = zmm3[0].q
                        void* rdi_115 = arg4 + r8_8
                        int64_t r10_28 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        void* r11_23 = arg4 + r10_28
                        int64_t r14_22 = arg5[0].q
                        void* rax_260 = arg4 + r14_22
                        int64_t rcx_149 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        void* rdx_115 = arg4 + rcx_149
                        zmm4 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg6 = _mm256_blendv_ps(arg7, zmm4, zmm5)
                        zmm0[0].o = *(arg6[0].q + rax_260)
                        float* rbx_112 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_112 + rdx_115), 0x10)
                        arg8 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm5 = _mm256_blendv_ps(arg7, arg8, zmm5)
                        zmm2[0].o = *(zmm5[0] + rax_260)
                        float* rax_261 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_261 + rdx_115), 0x10)
                        int64_t rax_262 = arg5[0].q
                        void* rdx_116 = arg4 + rax_262
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(arg6[0].q + rdx_116), 0x20)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg10[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(zmm5[0] + rdx_116), 0x20)
                        int64_t rdx_117 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm4 = _mm256_blendv_ps(arg7, zmm4, arg9)
                        arg5[0].o = *(zmm4[0].q + rdi_115)
                        arg8 = _mm256_blendv_ps(arg7, arg8, arg9)
                        zmm2[0].o = *(arg8[0].q + rdi_115)
                        void* rdi_116 = arg4 + rdx_117
                        float* rbx_118 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg9[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_118 + rdi_116), 0x30)
                        int64_t rbx_119 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_119 + r11_23), 0x10)
                        float* rbx_120 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, 
                            *(rbx_120 + rdi_116), 0x30)
                        float* rdi_117 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        int64_t rbx_121 = zmm3[0].q
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_117 + r11_23), 0x10)
                        void* rdi_118 = arg4 + rbx_121
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(zmm4[0].q + rdi_118), 0x20)
                        arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(arg6[0].q + rdi_118), 0x20)
                        zmm0[0].o = *(arg4 + r8_8)
                        zmm5[0].o = *(arg4 + r14_22)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rcx_149), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_262), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rdx_117), 0x30)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r10_28), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rbx_121), 0x20)
                        int64_t rax_263 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rax_263), 0x30)
                        void* rax_264 = arg4 + rax_263
                        int64_t rcx_150 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_150 + rax_264), 0x30)
                        int64_t rcx_151 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_151 + rax_264), 0x30)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                        zmm3 = _mm256_insertf128_ps(zmm3, arg9[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg10[0].o, 1)
                        zmm4 = _mm256_mul_ps(zmm0, zmm0)
                        zmm4 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm4), 
                                _mm256_mul_ps(zmm3, zmm3)), 
                            _mm256_mul_ps(zmm2, zmm2))
                        zmm5 = _mm256_sqrt_ps(zmm4)
                        var_600_1 = _mm256_maskstore_ps(zmm1, zmm0)
                        var_5e0_1 = _mm256_maskstore_ps(zmm1, zmm3)
                        zmm0 = _mm256_cmp_ps(arg7, zmm4, 1)
                        var_5c0_1 = _mm256_maskstore_ps(zmm1, zmm2)
                        zmm0 = _mm256_and_ps(zmm0, zmm5)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_7c0.32
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm5[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg8[0].o = zx.o(0)
                        arg5 = _mm256_blendv_ps(arg8, zmm2, zmm5)
                        zmm2[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg8, zmm4, zmm2)
                        int64_t r8_9 = arg5[0].q
                        int64_t r10_29 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        void* rdi_119 = arg4 + r8_9
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t r11_24 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rsi_76 = arg4 + r10_29
                        zmm4 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg5 = _mm256_blendv_ps(arg8, zmm4, zmm5)
                        int64_t rax_265 = arg6[0].q
                        void* rcx_152 = arg5[0].q
                        uint16_t* rdx_118 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg6[0].o = zx.o(*(rcx_152 + rdi_119))
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rdx_118 + rsi_76), 1)
                        void* rcx_154 = arg4 + rax_265
                        arg7 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm5 = _mm256_blendv_ps(arg8, arg7, zmm5)
                        double rdx_119 = zmm5[0]
                        uint16_t* rbx_122 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* rdi_120 = arg4 + r11_24
                        zmm0[0].o = zx.o(*(rdx_119 i+ rdi_119))
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rbx_122 + rsi_76), 1)
                        int64_t rdx_121 = zmm3[0].q
                        void* rsi_77 = arg4 + rdx_121
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg5[0].q + rcx_154), 2)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm5[0] + rcx_154), 2)
                        int64_t rcx_155 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        int64_t rbx_125 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rbx_125 + rdi_120), 3)
                        uint16_t* rbx_126 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rbx_126 + rdi_120), 3)
                        void* rdi_121 = arg4 + rcx_155
                        zmm4 = _mm256_blendv_ps(arg8, zmm4, zmm2)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(zmm4[0].q + rsi_77), 4)
                        uint16_t* rbx_128 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_128 + rdi_121), 5)
                        zmm2 = _mm256_blendv_ps(arg8, arg7, zmm2)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rsi_77), 4)
                        uint16_t* rsi_78 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_78 + rdi_121), 5)
                        int64_t rsi_79 = zmm3[0].q
                        void* rdi_122 = arg4 + rsi_79
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm4[0].q + rdi_122), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rdi_122), 6)
                        arg5[0].o = zx.o(*(arg4 + r8_9))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_29), 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rax_265), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r11_24), 3)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdx_121), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rcx_155), 5)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rsi_79), 6)
                        int64_t rax_266 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rax_266), 7)
                        void* rax_267 = arg4 + rax_266
                        int64_t rcx_156 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rcx_156 + rax_267), 7)
                        uint16_t* rcx_157 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                        zmm5[0].o = zx.o(0)
                        zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                        arg5[0].o = data_1434424d0
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm3[0].o, 1))
                        zmm3 = data_1434424e0
                        zmm2 = _mm256_div_ps(zmm2, zmm3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_157 + rax_267), 7)
                        arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zx.o(0))
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        zmm4 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm4[0].o, 1)), zmm3)
                        arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm0[0].o, 1)), zmm3)
                        zmm3 = _mm256_mul_ps(zmm2, zmm2)
                        zmm3 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), 
                                _mm256_mul_ps(zmm4, zmm4)), 
                            _mm256_mul_ps(zmm0, zmm0))
                        zmm5 = _mm256_sqrt_ps(zmm3)
                        var_600_1 = _mm256_maskstore_ps(zmm1, zmm2)
                        var_5e0_1 = _mm256_maskstore_ps(zmm1, zmm4)
                        zmm2 = _mm256_cmp_ps(arg8, zmm3, 1)
                        var_5c0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                        zmm0 = _mm256_and_ps(zmm2, zmm5)
                    case 3
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg10 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm0 = _mm256_and_ps(arg10, arg6)
                        int64_t rax_269 = sx.q(zmm0[0].d)
                        var_860_2[0].q = rax_269
                        void* rbx_133 = arg4 + rax_269
                        var_8c0.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                        int32_t temp0_2424 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                        var_640_2[0] = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int32_t rcx_158 = zmm0[0].d
                        var_840[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                        var_8a0[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                        int32_t temp0_2429 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                        int64_t rdx_122 = sx.q(rcx_158)
                        var_680.q = rdx_122
                        zmm2 = arg11
                        arg11 = __vandps_ymmqq_ymmqq_memqq(arg10, data_142fc9520)
                        uint64_t rcx_159 = zx.q(arg11[0].d)
                        var_780[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1))
                        var_7e0[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 2))
                        zmm0[0].o = *(rcx_159 + rbx_133)
                        var_660[0].o = zmm0[0].o
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg10, data_142fc9540)
                        arg12[0].o = *(zx.q(zmm0[0].d) + rbx_133)
                        zmm3 = __vandps_ymmqq_ymmqq_memqq(arg10, data_1434423c0)
                        arg7[0].o = *(zx.q(zmm3[0]) + rbx_133)
                        zmm5 = __vandps_ymmqq_ymmqq_memqq(arg10, data_1434423e0)
                        uint64_t rdi_123 = zx.q(zmm5[0].d)
                        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        double var_6a0_4[0x2] = arg5[0].o
                        arg14[0].o = *(rdi_123 + rbx_133)
                        arg6 = __vandps_ymmqq_ymmqq_memqq(arg10, data_143442400)
                        int32_t* rcx_162 = zx.q(arg6[0])
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                        arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        arg5[0].o = *(rcx_162 + rbx_133)
                        void* rax_272 = arg4 + rdx_122
                        var_620.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 3))
                        zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        float* rcx_164 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        int32_t var_870
                        var_870.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        int32_t* rbx_134 = zx.q(zmm2[0])
                        uint64_t rcx_166 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = *(rbx_134 + rax_272)
                        float* rcx_167 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        var_8b0.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* rcx_169 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int32_t* rcx_170 = zx.q(zmm0[0].d)
                        float* rdx_123 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t rdx_124 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t rdx_125 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        var_3e0[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        uint64_t rdx_127 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        var_6b0[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm0[0].o = *(rcx_170 + rax_272)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        float* rdi_124 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        uint64_t r15_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        uint64_t rcx_171 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm3[0].o = *(zx.q(zmm3[0]) + rax_272)
                        float* rcx_172 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                        int32_t var_868
                        var_868.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                        int32_t var_798
                        var_798.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        int32_t* rcx_175 = zx.q(zmm5[0].d)
                        float* r10_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                        uint64_t rsi_80 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                        float* rbx_135 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                        float* r13_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        uint64_t rdx_129 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        zmm5[0].o = *(rcx_175 + rax_272)
                        float* rcx_176 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        float* rdx_130 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        uint64_t r8_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        int32_t* rcx_177 = zx.q(arg6[0])
                        float* r11_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = *(rcx_177 + rax_272)
                        int64_t r14_23 = sx.q(var_840[0].d)
                        void* rcx_178 = arg4 + r14_23
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_164 + rcx_178), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_123 + rcx_178), 0x10)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_124 + rcx_178), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r10_30 + rcx_178), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_130 + rcx_178), 0x10)
                        int64_t r10_31 = sx.q(var_8a0[0].d)
                        void* rdx_131 = arg4 + r10_31
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(var_870.q + rdx_131), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_124 + rdx_131), 0x20)
                        arg9[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r15_22 + rdx_131), 0x20)
                        arg11[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_80 + rdx_131), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r8_10 + rdx_131), 0x20)
                        int64_t rdx_132 = sx.q(temp0_2429)
                        void* rdi_125 = arg4 + rdx_132
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_166 + rdi_125), 0x30)
                        int32_t var_8d0_1
                        var_8d0_1.o = zmm2[0].o
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_125 + rdi_125), 0x30)
                        var_8a0[0].o = zmm0[0].o
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rcx_171 + rdi_125), 0x30)
                        var_840[0].o = zmm0[0].o
                        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                            *(rbx_135 + rdi_125), 0x30)
                        arg9[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_25 + rdi_125), 0x30)
                        int64_t rbx_136 = sx.q(var_8c0.d)
                        void* rdi_126 = arg4 + rbx_136
                        zmm0[0].o = var_660[0].o
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_780[0] + rdi_126), 0x10)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(rcx_167 + rdi_126), 0x10)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                            *(var_3e0[0] i+ rdi_126), 0x10)
                        arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                            *(rcx_172 + rdi_126), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r13_21 + rdi_126), 0x10)
                        int64_t rdi_127 = sx.q(temp0_2424)
                        void* rsi_81 = arg4 + rdi_127
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(var_7e0[0].q + rsi_81), 0x20)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(var_8b0.q + rsi_81), 0x20)
                        arg14[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_127 + rsi_81), 0x20)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(var_868.q + rsi_81), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_129 + rsi_81), 0x20)
                        int64_t rsi_82 = sx.q(var_640_2[0])
                        void* rcx_181 = arg4 + rsi_82
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(var_620.q + rcx_181), 0x30)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_169 + rcx_181), 0x30)
                        arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                            *(var_6b0[0] + rcx_181), 0x30)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_798.q + rcx_181), 0x30)
                        arg14[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_176 + rcx_181), 0x30)
                        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg10, var_6a0_4, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm5 = var_7c0.32
                        zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                        zmm3[0].o = *(arg4 + var_860_2[0].q)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg8[0].o = zx.o(0)
                        zmm4 = _mm256_blendv_ps(arg8, zmm4, zmm5)
                        zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                        zmm5[0].o = *(arg4 + var_680.q)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r14_23), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r10_31), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rdx_132), 0x30)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rbx_136), 0x10)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdi_127), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rsi_82), 0x30)
                        zmm0 = _mm256_blendv_ps(arg8, zmm0, zmm2)
                        zmm2[0].o = zx.o(*(arg4 + zmm4[0].q))
                        int64_t rax_293 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rax_293), 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + zmm4[0].q), 2)
                        int64_t rax_295 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rax_295), 3)
                        zmm4[0].o = zx.o(*(arg4 i+ zmm0[0]))
                        int64_t rax_297 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rax_297), 1)
                        zmm4[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 i+ zmm0[0]), 2)
                        int64_t rax_299 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rax_299), 3)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                        arg13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_8d0_1.o, 1)
                        arg10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg7, var_8a0[0].o, 1)
                        arg5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg12, var_840[0].o, 1)
                        arg11 = _mm256_insertf128_ps(arg6, arg11[0].o, 1)
                        arg7 = _mm256_insertf128_ps(arg14, arg9[0].o, 1)
                        arg9 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        arg9 = __vandps_ymmqq_ymmqq_memqq(arg9, data_143442420)
                        arg6[0].o = data_143442440
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm4 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm4[0].o, 1))
                        zmm5 = data_143442460
                        zmm4 = _mm256_mul_ps(arg5, _mm256_div_ps(zmm4, zmm5))
                        zmm3 = _mm256_add_ps(zmm3, zmm4)
                        zmm4[0].o = data_143442480
                        zmm0[0].o &= zmm4[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm2[0].o &= zmm4[0].o
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm0 = _mm256_add_ps(arg13, 
                            _mm256_mul_ps(arg11, 
                                _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1)), 
                                    zmm5)))
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm4[0].o = data_143442490
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                        zmm2 = _mm256_add_ps(arg10, 
                            _mm256_mul_ps(arg7, 
                                __vdivps_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, zmm2[0].o, 1)), 
                                    data_1434424a0)))
                        zmm4 = _mm256_mul_ps(zmm3, zmm3)
                        zmm4 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm4), 
                                _mm256_mul_ps(zmm0, zmm0)), 
                            _mm256_mul_ps(zmm2, zmm2))
                        zmm5 = _mm256_sqrt_ps(zmm4)
                        var_600_1 = _mm256_maskstore_ps(zmm1, zmm3)
                        var_5e0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                        zmm0 = _mm256_cmp_ps(arg8, zmm4, 1)
                        var_5c0_1 = _mm256_maskstore_ps(zmm1, zmm2)
                        zmm0 = _mm256_and_ps(zmm0, zmm5)
                    case 4
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_7c0.32
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm5[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg7[0].o = zx.o(0)
                        zmm2 = _mm256_blendv_ps(arg7, zmm2, zmm3)
                        zmm3[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm3 =
                            _mm256_blendv_ps(arg7, zmm4, _mm256_insertf128_ps(zmm3, zmm5[0].o, 1))
                        int64_t r8_11 = zmm2[0].q
                        int64_t rcx_184 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_133 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_137 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        int64_t rdi_128 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        int64_t rsi_83 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rax_300 = zmm3[0].q
                        zmm3[0].o = zx.o(*(arg4 + r8_11))
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rcx_184), 1)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdi_128), 2)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdx_133), 3)
                        int64_t rcx_185 = zmm2[0].q
                        zmm2[0].o = zx.o(*(arg4 + rax_300))
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rbx_137), 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rcx_185), 2)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rsi_83), 3)
                        zmm4 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x15)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        arg6[0].o = data_143442440
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm5 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, arg5[0].o, 1))
                        arg5 = data_143442460
                        zmm5 = _mm256_div_ps(zmm5, arg5)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0xa)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm0[0].o = data_143442480
                        zmm2[0].o &= zmm0[0].o
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm0[0].o &= zmm3[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1)), arg5)
                        zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442420)
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm4[0].o = data_143442490
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        zmm2 = __vdivps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm3[0].o, 1)), 
                            data_1434424a0)
                        zmm3 = _mm256_mul_ps(zmm5, zmm5)
                        zmm3 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), 
                                _mm256_mul_ps(zmm0, zmm0)), 
                            _mm256_mul_ps(zmm2, zmm2))
                        zmm4 = _mm256_sqrt_ps(zmm3)
                        var_600_1 = _mm256_maskstore_ps(zmm1, zmm5)
                        var_5e0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                        zmm0 = _mm256_cmp_ps(arg7, zmm3, 1)
                        var_5c0_1 = _mm256_maskstore_ps(zmm1, zmm2)
                        zmm0 = _mm256_and_ps(zmm0, zmm4)
                    case 5
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm5 = var_7c0.32
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                        arg8[0].o = zx.o(0)
                        zmm2 = _mm256_blendv_ps(arg8, zmm2, zmm4)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg8, zmm3, zmm4)
                        int64_t r8_12 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_186 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_134 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_138 = zmm2[0].q
                        int64_t rdi_129 = zmm3[0].q
                        int64_t rsi_84 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        int64_t rax_301 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm3[0].o = zx.o(*(arg4 + rcx_186))
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + r8_12), 1)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rbx_138), 2)
                        int64_t rcx_187 = zmm2[0].q
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdx_134), 3)
                        zmm3[0].o = zx.o(*(arg4 + rdi_129))
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rsi_84), 1)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rcx_187), 2)
                        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rax_301), 3)
                        arg11 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                        arg6 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        arg13[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                        arg9 = _mm256_insertf128_ps(arg7, arg13[0].o, 1)
                        arg10[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 5)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 5)
                        zmm3 = _mm256_insertf128_ps(arg10, zmm3[0].o, 1)
                        arg10 = data_1434422e0
                        zmm3 = _mm256_and_ps(zmm3, arg10)
                        arg12 = data_143442300
                        arg6 = _mm256_and_ps(arg6, arg12)
                        zmm3 = _mm256_or_ps(zmm3, arg6)
                        arg6[0].o = data_143442320
                        arg5[0].o &= arg6[0].o
                        zmm0[0].o = data_143442330
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        zmm5[0].o &= arg6[0].o
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        zmm5 = _mm256_or_ps(zmm3, _mm256_insertf128_ps(zmm5, arg5[0].o, 1))
                        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 6)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 6)
                        zmm3 = _mm256_and_ps(_mm256_insertf128_ps(zmm3, arg5[0].o, 1), arg10)
                        arg5 = _mm256_and_ps(arg9, arg12)
                        zmm3 = _mm256_or_ps(zmm3, arg5)
                        arg5[0].o = arg13[0].o & arg6[0].o
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg6[0].o &= arg7[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg11, data_143442340)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x11)
                        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x11)
                        zmm2 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm2, zmm4[0].o, 1), 
                            data_143442360)
                        zmm0 = _mm256_or_ps(zmm3, zmm0)
                        zmm3 = __vandps_ymmqq_ymmqq_memqq(arg11, data_143442380)
                        zmm2 = _mm256_or_ps(zmm2, zmm3)
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = data_1434423a0
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        zmm2 = _mm256_or_ps(zmm2, _mm256_insertf128_ps(zmm4, zmm3[0].o, 1))
                        zmm3 = _mm256_mul_ps(zmm5, zmm5)
                        zmm3 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), 
                                _mm256_mul_ps(zmm0, zmm0)), 
                            _mm256_mul_ps(zmm2, zmm2))
                        zmm4 = _mm256_sqrt_ps(zmm3)
                        var_600_1 = _mm256_maskstore_ps(zmm1, zmm5)
                        var_5e0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                        zmm0 = _mm256_cmp_ps(arg8, zmm3, 1)
                        var_5c0_1 = _mm256_maskstore_ps(zmm1, zmm2)
                        zmm0 = _mm256_and_ps(zmm0, zmm4)
            
            float var_5a0_1[0x8] = _mm256_maskstore_ps(zmm1, zmm0)
            arg11 = var_820_1
            arg8 = _mm256_add_ps(
                _mm256_add_ps(_mm256_mul_ps(var_740, var_600_1), 
                    _mm256_mul_ps(var_720, var_5e0_1)), 
                _mm256_mul_ps(var_700, var_5c0_1))
            arg9 = _mm256_mul_ps(var_6e0, var_5a0_1)
            arg8 = _mm256_add_ps(arg8, arg9)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            arg8 = _mm256_cmp_ps(arg9, arg8, 2)
            zmm5 = _mm256_mul_ps(arg11, var_600_1)
            arg5 = _mm256_mul_ps(arg11, var_5e0_1)
            arg6 = _mm256_mul_ps(arg11, var_5c0_1)
            arg7 = _mm256_mul_ps(arg11, var_5a0_1)
            arg9 = data_142fc95a0
            arg10 = data_143442520
            arg8 = _mm256_blendv_ps(arg10, arg9, arg8)
            arg9 = _mm256_sub_ps(arg9, arg11)
            arg8 = _mm256_mul_ps(arg9, arg8)
            zmm0 = _mm256_add_ps(zmm5, _mm256_mul_ps(arg8, var_740))
            zmm2 = _mm256_add_ps(arg5, _mm256_mul_ps(arg8, var_720))
            zmm3 = _mm256_add_ps(arg6, _mm256_mul_ps(arg8, var_700))
            zmm4 = _mm256_add_ps(arg7, _mm256_mul_ps(arg8, var_6e0))
            double var_280_1[0x4] = zmm0
            float var_260_1[0x8] = zmm2
            float var_240_1[0x8] = zmm3
            int32_t var_220_1[0x8] = zmm4
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            zmm2 = _mm256_mul_ps(zmm2, zmm2)
            zmm0 = _mm256_add_ps(_mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, zmm3)), 
                _mm256_add_ps(zmm2, _mm256_mul_ps(zmm4, zmm4)))
            zmm2 = data_142fc9340
            zmm3 = _mm256_cmp_ps(zmm2, zmm0, 6)
            zmm2 = _mm256_cmp_ps(zmm2, zmm0, 2)
            zmm4 = data_142fc94a0
            zmm5 = _mm256_mul_ps(zmm0, zmm4)
            double var_180_1[0x4] = zmm5
            zmm0 = _mm256_rsqrt_ps(zmm0)
            double var_160_1[0x4] = zmm5
            double var_140_1[0x4] = zmm5
            zmm0 = _mm256_add_ps(zmm0, 
                _mm256_mul_ps(_mm256_sub_ps(zmm4, _mm256_mul_ps(zmm5, _mm256_mul_ps(zmm0, zmm0))), 
                    zmm0))
            zmm0 = _mm256_add_ps(zmm0, 
                _mm256_mul_ps(zmm0, 
                    _mm256_sub_ps(zmm4, _mm256_mul_ps(zmm5, _mm256_mul_ps(zmm0, zmm0)))))
            zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_280_1)
            arg5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_260_1)
            arg6 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_240_1)
            zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_220_1)
            double var_120_1[0x4] = zmm5
            zmm4 = _mm256_and_ps(zmm4, zmm2)
            zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc95a0)
            zmm5 = _mm256_and_ps(arg5, zmm2)
            var_740 = _mm256_maskstore_ps(zmm1, zmm4)
            zmm4 = _mm256_and_ps(arg6, zmm2)
            var_720 = _mm256_maskstore_ps(zmm1, zmm5)
            zmm0 = _mm256_and_ps(zmm0, zmm2)
            var_700 = _mm256_maskstore_ps(zmm1, zmm4)
            var_6e0 = _mm256_maskstore_ps(zmm1, _mm256_or_ps(zmm0, zmm3))
            arg9[0].o = var_800_1
    
    zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_4a0_2, var_4c0_1, 1)
    zmm1[0].o = var_740[0].o
    arg7[0].o = var_740[2].o
    zmm3[0].o = var_720[0].o
    arg8[0].o = var_720[4].o
    zmm5[0].o = var_700[0].o
    arg5[0].o = var_700[4].o
    arg6[0].o = var_6e0[0].o
    zmm2[0].o = var_6e0[4].o
    zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
    zmm5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
    arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = arg6[0].q | zmm4[0].q << 0x40
    int128_t var_3c0 = zmm3[0].o
    zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
    int128_t var_3b0_1 = zmm3[0].o
    zmm3[0].o = zmm1[0].q | zmm5[0] << 0x40
    int128_t var_3a0_1 = zmm3[0].o
    zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    int128_t var_390_1 = zmm1[0].o
    zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
    zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
    zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
    zmm4[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
    zmm5[0].o = zmm3[0].q | zmm1[0].q << 0x40
    int128_t var_380_1 = zmm5[0].o
    zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    int128_t var_370_1 = zmm1[0].o
    zmm1[0].o = zmm4[0].q | zmm2[0].q << 0x40
    int128_t var_360_1 = zmm1[0].o
    zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
    int128_t var_350_1 = zmm1[0].o
    var_480_2[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(var_480_2[0].o, var_760_1[0].o)
    zmm1 = _mm256_insertf128_ps(var_480_2, arg9[0].o, 1)
    i_1 = zx.q(_mm256_movemask_ps(zmm1))
    
    do
        uint64_t rcx_188
        uint64_t rflags_2
        
        if (i_1 == 0)
            rcx_188 = 0x40
        else
            rcx_188, rflags_2 = _bit_scan_forward(i_1)
        double var_2c0[0x4] = zmm0
        zmm1[0].o = (&var_3c0)[rcx_188]
        arg1[sx.q(*(&var_2c0 + ((zx.q(rcx_188.d) & 7) << 2))) * 3] = zmm1[0].o
        i_1 &= rol.q(-2, rcx_188.b)
    while (i_1 != 0)

arg5[0].o = var_e8
arg6[0].o = var_d8
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
_mm256_zeroupper()
return i_1
