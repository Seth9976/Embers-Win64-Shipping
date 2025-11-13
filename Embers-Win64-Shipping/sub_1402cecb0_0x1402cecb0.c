// 函数: sub_1402cecb0
// 地址: 0x1402cecb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg16[0].o
int128_t var_68 = arg15[0].o
int128_t var_78 = arg14[0].o
int128_t var_88 = arg13[0].o
int128_t var_98 = arg12[0].o
int128_t var_a8 = arg11[0].o
int128_t var_b8 = arg10[0].o
int128_t var_c8 = arg9[0].o
int128_t var_d8 = arg8[0].o
int128_t var_e8 = arg7[0].o
int64_t r13 = arg1
int64_t rdx = sx.q(arg20)
float zmm2[0x8]
zmm2[0].o = arg18
int32_t rcx_1 = *(&data_143442ee0 + (rdx << 2)) * *(&data_143442ec0 + (rdx << 2))
int32_t i_5 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
int64_t var_668 = r13
int32_t* var_948 = arg4
uint64_t i_4
float var_900[0x8]
double var_8c0[0x4]
int64_t var_7c0
float var_620[0x8]
int64_t var_5e0
double var_540[0x4]
int64_t var_460
double var_300[0x4]
double var_2e0[0x4]
uint64_t r10
double zmm0[0x4]
float zmm1[0x8]
int32_t zmm5[0x8]

if (i_5 s<= 0)
    r10 = 0
    i_4 = zx.q(arg21)
    
    if (0 s< i_4.d)
    label_1402d1f6a:
        zmm0[0].o = zx.o(r10.d)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        arg10[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
        arg16[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
        zmm0[0].o = zx.o(i_4.d)
        arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg16[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg10[0].o)
        arg14 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg10[0].o, 3)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(arg16[0].o, 3)
        zmm0 = _mm256_and_ps(arg14, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
        int64_t rax_180 = sx.q(zmm0[0].d)
        int32_t* rdi_23 = arg2
        int64_t rcx_50 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r15_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t rdx_56 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        int64_t rbx_31 = sx.q(zmm0[0].d)
        zmm1[0].o = zx.o(*(rdi_23 + rbx_31))
        int64_t rbx_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_23 + rbx_33), 1)
        zmm2[0].o = zx.o(*(rdi_23 + rax_180))
        int32_t temp0_1206 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_23 + rcx_50), 1)
        int64_t rax_182 = sx.q(temp0_1206)
        int64_t rcx_52 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_23 + rax_182), 2)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_23 + rcx_52), 3)
        double var_6e0_1[0x2] = zmm0[0].o
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_23 + r15_6), 2)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_23 + rdx_56), 3)
        double var_6c0_2[0x4] = zmm0
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, data_142fc9520)
        uint64_t rdi_24 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
        uint32_t* r12_10 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
        uint64_t r9_2 = zx.q(zmm0[0].d)
        zmm1[0].o = zx.o(*(r9_2 + rdi_23 + rax_180))
        float* r15_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_24 + rdi_23 + rcx_50), 1)
        int32_t* rdx_59 = zx.q(zmm0[0].d)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_10 + rdi_23 + r15_6), 2)
        uint32_t* rsi_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_7 + rdi_23 + rdx_56), 3)
        uint32_t* r11_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm2[0].o = zx.o(*(rdx_59 + rdi_23 + rbx_31))
        uint32_t* r10_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 4)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_17 + rdi_23 + rbx_33), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_11 + rdi_23 + rax_182), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_10 + rdi_23 + rcx_52), 3)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 4)
        zmm0 = _mm256_and_ps(arg14, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
        int64_t rcx_54 = sx.q(zmm0[0].d)
        int64_t rdx_61 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm1[0].o = zx.o(*(arg3 + rcx_54))
        int32_t temp0_1232 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rdx_61), 1)
        int64_t rcx_56 = sx.q(temp0_1232)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rcx_56), 2)
        zmm2[0].o = zx.o(*(r9_2 + arg3 + rcx_54))
        int64_t rax_187 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        arg9[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rax_187), 3)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_24 + arg3 + rdx_61), 1)
        int64_t rdx_64 = sx.q(zmm1[0])
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r12_10 + arg3 + rcx_56), 2)
        zmm2[0].o = zx.o(*(arg3 + rdx_64))
        int64_t rdx_66 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rdx_66), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_7 + arg3 + rax_187), 3)
        int64_t rdx_68 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rdx_68), 2)
        int64_t rbx_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        arg8[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rbx_36), 3)
        zmm1[0].o = zx.o(*(rdx_59 + arg3 + rdx_64))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_17 + arg3 + rdx_66), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_11 + arg3 + rdx_68), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_10 + arg3 + rbx_36), 3)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        int64_t var_880_2[0x2] = zmm2[0].o
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        int64_t var_660_1[0x2] = zmm2[0].o
        zmm2[0].o = zx.o(rcx_1)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        arg7[0].o = arg18
        int32_t rax_190
        rax_190.b = arg6[0].o f>= arg7[0].d
        arg6[0].o = data_1434422d0
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm5[0].o ^= arg5[0].o
        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        arg6[0].o ^= arg5[0].o
        arg6 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
        zmm5[0].o = zx.o(neg.d(rax_190))
        zmm5[0].o ^= arg5[0].o
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0)
        zmm5 = _mm256_insertf128_ps(zmm5, zmm5[0].o, 1)
        arg6 = _mm256_and_ps(arg6, zmm5)
        zmm5[0].o = arg8[0].o
        double var_7e0_3[0x4] = arg6
        arg11 = _mm256_and_ps(arg6, arg14)
        int32_t temp0_1264 = _mm256_movemask_ps(arg11)
        arg8[0].o = zx.o(0)
        arg6 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        arg15[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
        double var_860_2[0x4] = arg15
        arg15[0].o = __vpmovsxdq_xmmdq_xmmq(arg9[0].q)
        double var_6a0_1[0x4] = arg15
        arg15 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        double var_940_2[0x4]
        void* var_8e0_1
        void* var_8a0_1
        int128_t* var_820
        int32_t var_560
        int32_t* r8_5
        int32_t r9_3
        
        if (temp0_1264 == 0)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            arg5[0].o = zx.o(0)
            zmm0[0].o = zx.o(0)
            var_940_2 = zmm0
            r8_5 = var_948
            r9_3 = rdx.d
        else
            double var_840_3[0x4] = arg6
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            
            if (arg7[0].o f>= 1f)
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                arg5 = _mm256_blendv_ps(arg7, arg5, arg11)
                var_940_2 = arg5
                r8_5 = var_948
                r9_3 = rdx.d
                arg6 = var_840_3
            else
                int128_t var_810_2 = zmm5[0].o
                var_620 = arg9
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                arg8 = arg5
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                arg6[0].o = 3
                r8_5 = var_948
                zmm5[0].o = zx.o(r8_5)
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x44)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_860_2[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_880_2)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_6a0_1[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_660_1)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm2 = data_143442a40
                var_8e0_1.32 = _mm256_and_ps(zmm1, zmm2)
                arg5 = _mm256_and_ps(zmm0, zmm2)
                zmm0[0].o = _mm_permute_ps(arg7[0].o, 0)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                zmm1 = _mm256_cvtepi32_ps(arg8)
                zmm0 = _mm256_mul_ps(zmm0, zmm1)
                zmm1[0].o = arg10[0].o
                zmm1[0] = float.s(arg17 - 1)
                zmm5[0].o = zmm1[0].o f* arg7[0].d
                int32_t rax_194 = int.d(zmm5[0])
                int32_t rcx_59 = 0
                
                if (rax_194 s>= 0)
                    rcx_59 = rax_194
                
                if (arg17 - 2 s<= rcx_59)
                    rcx_59 = arg17 - 2
                
                zmm0 = _mm256_cvttps_epi32(zmm0)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                double var_940_1[0x4] = arg8
                zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                var_8c0[0].o = zmm2[0].o
                zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                arg7 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                r9_3 = rdx.d
                var_8a0_1.32 = arg5
                double var_720_1[0x4] = arg7
                var_460.32 = arg14
                double var_640_2[0x4] = arg15
                var_5e0.32 = arg10
                var_7c0.o = arg16[0].o
                int64_t var_600
                var_600.32 = arg13
                var_540[0].o = zmm5[0].o
                
                if (arg17 s< 0x100)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg9[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    char rsi_19 = temp0_1264.b
                    
                    if ((rsi_19 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                    
                    if ((rsi_19 & 2) != 0)
                        uint32_t rax_226 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_226, 1)
                    
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                    arg5 = var_8e0_1.32
                    var_900[0].o = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    
                    if ((rsi_19 & 4) == 0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                        
                        if ((rsi_19 & 8) != 0)
                            goto label_1402d362b
                        
                        goto label_1402d2de7
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg5[0].q), 2)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                    
                    if ((rsi_19 & 8) != 0)
                    label_1402d362b:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint32_t rax_286 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_286, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        
                        if ((rsi_19 & 0x10) == 0)
                            goto label_1402d2df7
                        
                        goto label_1402d3657
                    
                label_1402d2de7:
                    zmm1 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                    
                    if ((rsi_19 & 0x10) != 0)
                    label_1402d3657:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                        arg6 = var_8a0_1.32
                        
                        if ((rsi_19 & 0x20) != 0)
                        label_1402d3675:
                            uint32_t rax_290 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_290, 5)
                            
                            if ((rsi_19 & 0x40) == 0)
                                goto label_1402d2e17
                            
                            goto label_1402d3687
                    else
                    label_1402d2df7:
                        arg6 = var_8a0_1.32
                        
                        if ((rsi_19 & 0x20) != 0)
                            goto label_1402d3675
                    
                    if ((rsi_19 & 0x40) != 0)
                    label_1402d3687:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm2[0].q), 6)
                        var_820.o = arg8[0].o
                        
                        if (temp0_1264.b s< 0)
                        label_1402d36ac:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_294 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_294, 7)
                    else
                    label_1402d2e17:
                        var_820.o = arg8[0].o
                        
                        if (temp0_1264.b s< 0)
                            goto label_1402d36ac
                    
                    zmm0[0].o &= data_142fc92e0
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = zx.o(rcx_59)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    arg16 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm5[0].o ^= zmm0[0].o
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg5[0].o ^= zmm0[0].o
                    arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    var_560.32 = arg5
                    arg5 = _mm256_and_ps(arg11, arg5)
                    arg15 = arg7
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        arg12[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                        zmm2[0].o ^= zmm0[0].o
                        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg16[0].o)
                        zmm1[0].o ^= zmm0[0].o
                        arg5 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm5 = var_940_1
                        arg10 = var_720_1
                        arg15 = _mm256_blendv_ps(arg10, zmm5, arg5)
                        zmm1[0].o = var_820.o
                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_8c0[0].o)
                        arg7[0].o ^= zmm0[0].o
                        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm0[0].o ^= arg8[0].o
                        arg13 = _mm256_and_ps(arg5, _mm256_insertf128_ps(zmm0, arg7[0].o, 1))
                        arg8 = _mm256_and_ps(arg11, arg13)
                        int32_t i = _mm256_movemask_ps(arg8)
                        
                        if (i != 0)
                            arg7 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            zmm0 = arg10
                            
                            do
                                zmm2 = arg7
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                arg10[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                                arg7 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                                char temp0_1595 = _mm256_movemask_ps(arg8)
                                
                                if ((temp0_1595 & 1) == 0)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                                    
                                    if ((temp0_1595 & 2) != 0)
                                        goto label_1402d2f47
                                    
                                    goto label_1402d3058
                                
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg7[0]), 0)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                                
                                if ((temp0_1595 & 2) != 0)
                                label_1402d2f47:
                                    uint32_t rax_231 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_231, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1595 & 4) == 0)
                                        goto label_1402d306f
                                    
                                    goto label_1402d2f66
                                
                            label_1402d3058:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_8e0_1.o)
                                
                                if ((temp0_1595 & 4) == 0)
                                label_1402d306f:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                    
                                    if ((temp0_1595 & 8) != 0)
                                        goto label_1402d2f88
                                    
                                    goto label_1402d307e
                                
                            label_1402d2f66:
                                zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*zmm5[0].q), 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                
                                if ((temp0_1595 & 8) != 0)
                                label_1402d2f88:
                                    zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    uint32_t rax_235 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_235, 3)
                                    arg7 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                                    
                                    if ((temp0_1595 & 0x10) == 0)
                                        goto label_1402d308d
                                    
                                    goto label_1402d2fb3
                                
                            label_1402d307e:
                                arg7 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                                
                                if ((temp0_1595 & 0x10) == 0)
                                label_1402d308d:
                                    
                                    if ((temp0_1595 & 0x20) != 0)
                                        goto label_1402d2fc7
                                    
                                    goto label_1402d3096
                                
                            label_1402d2fb3:
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg7[0]), 4)
                                
                                if ((temp0_1595 & 0x20) != 0)
                                label_1402d2fc7:
                                    uint32_t rax_239 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_239, 5)
                                    
                                    if ((temp0_1595 & 0x40) == 0)
                                        goto label_1402d309f
                                    
                                    goto label_1402d2fd8
                                
                            label_1402d3096:
                                
                                if ((temp0_1595 & 0x40) != 0)
                                label_1402d2fd8:
                                    arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                        zx.d(*arg5[0].q), 6)
                                    
                                    if (temp0_1595 s< 0)
                                    label_1402d2ff3:
                                        arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                        uint32_t rax_243 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                            rax_243, 7)
                                else
                                label_1402d309f:
                                    
                                    if (temp0_1595 s< 0)
                                        goto label_1402d2ff3
                                
                                arg5[0].o = arg14[0].o & data_142fc92e0
                                zmm5[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_memdq(arg5[0].o, data_142d8f750)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg16[0].o)
                                arg5 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm5[0].o, 1), arg13)
                                arg8[0].o = zx.o(0)
                                zmm5 = _mm256_and_ps(arg5, arg11)
                                
                                if (_mm256_movemask_ps(zmm5) != i)
                                    arg8 = _mm256_xor_ps(arg5, arg13)
                                
                                arg15 = _mm256_blendv_ps(arg15, zmm0, arg5)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                                arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                arg7 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_8c0[0].o)
                                zmm0[0].o ^= zmm1[0].o
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, var_940_1[0].o)
                                arg5[0].o ^= zmm1[0].o
                                arg13 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg8)
                                arg8 = _mm256_and_ps(arg13, arg11)
                                i = _mm256_movemask_ps(arg8)
                                zmm0 = zmm2
                            while (i != 0)
                    
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    zmm1 = var_560.32
                    zmm0 = _mm256_andnot_ps(zmm1, arg11)
                    
                    if (_mm256_movemask_ps(zmm0) == 0)
                        arg7 = var_7e0_3
                    else
                        zmm0 = _mm256_cmp_ps(arg5, arg5, 0xf)
                        zmm2 = _mm256_xor_ps(zmm1, zmm0)
                        arg15 = _mm256_blendv_ps(arg15, arg5, zmm2)
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg7[0].o, var_820.o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg7[0].o, var_720_1[0].o)
                        zmm5[0].o = zx.o(0)
                        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                        arg13 = _mm256_and_ps(arg5, zmm2)
                        arg14 = _mm256_and_ps(arg13, arg11)
                        int32_t i_1 = _mm256_movemask_ps(arg14)
                        
                        if (i_1 != 0)
                            arg8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            arg12[0].o = data_142fc92e0
                            
                            do
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                arg10 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                char temp0_1662 = _mm256_movemask_ps(arg14)
                                
                                if ((temp0_1662 & 1) == 0)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((temp0_1662 & 2) != 0)
                                        goto label_1402d31d6
                                    
                                    goto label_1402d32e4
                                
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg10[0].q), 0)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                
                                if ((temp0_1662 & 2) != 0)
                                label_1402d31d6:
                                    uint32_t rax_249 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_249, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1662 & 4) == 0)
                                        goto label_1402d32fb
                                    
                                    goto label_1402d31f5
                                
                            label_1402d32e4:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                
                                if ((temp0_1662 & 4) == 0)
                                label_1402d32fb:
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                    
                                    if ((temp0_1662 & 8) != 0)
                                        goto label_1402d3217
                                    
                                    goto label_1402d330a
                                
                            label_1402d31f5:
                                zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                
                                if ((temp0_1662 & 8) != 0)
                                label_1402d3217:
                                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    uint32_t rax_253 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_253, 3)
                                    arg10 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                                    
                                    if ((temp0_1662 & 0x10) == 0)
                                        goto label_1402d3319
                                    
                                    goto label_1402d3242
                                
                            label_1402d330a:
                                arg10 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                                
                                if ((temp0_1662 & 0x10) == 0)
                                label_1402d3319:
                                    
                                    if ((temp0_1662 & 0x20) != 0)
                                        goto label_1402d3256
                                    
                                    goto label_1402d3322
                                
                            label_1402d3242:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg10[0].q), 4)
                                
                                if ((temp0_1662 & 0x20) != 0)
                                label_1402d3256:
                                    uint32_t rax_257 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_257, 5)
                                    
                                    if ((temp0_1662 & 0x40) == 0)
                                        goto label_1402d332b
                                    
                                    goto label_1402d3267
                                
                            label_1402d3322:
                                
                                if ((temp0_1662 & 0x40) != 0)
                                label_1402d3267:
                                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_1662 s< 0)
                                    label_1402d3282:
                                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        uint32_t rax_261 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_261, 7)
                                else
                                label_1402d332b:
                                    
                                    if (temp0_1662 s< 0)
                                        goto label_1402d3282
                                
                                zmm1[0].o = zmm2[0].o & arg12[0].o
                                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                arg6[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                                arg5[0].o ^= arg7[0].o
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg16[0].o)
                                zmm1[0].o ^= arg7[0].o
                                zmm1 =
                                    _mm256_and_ps(_mm256_insertf128_ps(zmm1, arg5[0].o, 1), arg13)
                                arg10[0].o = zx.o(0)
                                arg5 = _mm256_and_ps(zmm1, arg11)
                                
                                if (_mm256_movemask_ps(arg5) != i_1)
                                    arg10 = _mm256_xor_ps(zmm1, arg13)
                                
                                arg15 = _mm256_blendv_ps(arg15, arg8, zmm1)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                                arg8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg13 = _mm256_and_ps(zmm0, arg10)
                                arg14 = _mm256_and_ps(arg13, arg11)
                                i_1 = _mm256_movemask_ps(arg14)
                                arg6 = var_8a0_1.32
                            while (i_1 != 0)
                        
                        arg7 = var_7e0_3
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    
                    arg5 = _mm256_blendv_ps(arg5, arg15, arg11)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    var_7e0_3 = arg5
                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    
                    if ((rsi_19 & 1) != 0)
                        arg6[0].o = zx.o(*zmm1[0].q)
                    
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    arg14 = var_460.32
                    arg15 = var_640_2
                    arg10 = var_5e0.32
                    arg16[0].o = var_7c0.o
                    arg13 = var_600.32
                    arg8[0].o = zx.o(0)
                    
                    if ((rsi_19 & 2) == 0)
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_8e0_1.o)
                        
                        if ((rsi_19 & 4) != 0)
                            goto label_1402d5573
                        
                        goto label_1402d376f
                    
                    uint32_t rax_374 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_374, 1)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_8e0_1.o)
                    
                    if ((rsi_19 & 4) != 0)
                    label_1402d5573:
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm5[0].q), 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                        
                        if ((rsi_19 & 8) == 0)
                            goto label_1402d377f
                        
                        goto label_1402d5596
                    
                label_1402d376f:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                    
                    if ((rsi_19 & 8) == 0)
                    label_1402d377f:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) != 0)
                            goto label_1402d55c2
                        
                        goto label_1402d378f
                    
                label_1402d5596:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint32_t rax_378 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_378, 3)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_19 & 0x10) != 0)
                    label_1402d55c2:
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm1[0].q), 4)
                        arg5 = var_940_1
                        
                        if ((rsi_19 & 0x20) == 0)
                            goto label_1402d379f
                        
                        goto label_1402d55dd
                    
                label_1402d378f:
                    arg5 = var_940_1
                    
                    if ((rsi_19 & 0x20) == 0)
                    label_1402d379f:
                        
                        if ((rsi_19 & 0x40) != 0)
                            goto label_1402d55ef
                        
                        goto label_1402d37a9
                    
                label_1402d55dd:
                    uint32_t rax_382 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_382, 5)
                    
                    if ((rsi_19 & 0x40) == 0)
                    label_1402d37a9:
                        
                        if (temp0_1264.b s< 0)
                        label_1402d560b:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_386 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_386, 7)
                    else
                    label_1402d55ef:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm2[0].q), 6)
                        
                        if (temp0_1264.b s< 0)
                            goto label_1402d560b
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_7e0_3[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    zmm2 = _mm256_blendv_ps(zmm1, zmm0, arg11)
                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_8c0[0].o)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm2 = _mm256_blendv_ps(zmm2, arg5, zmm0)
                    
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    var_940_2 = zmm2
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_8a0_1.o)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    
                    if ((rsi_19 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    arg9 = var_620
                    
                    if ((rsi_19 & 2) == 0)
                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                        
                        if ((rsi_19 & 4) != 0)
                            goto label_1402d564a
                        
                        goto label_1402d3878
                    
                    uint32_t rax_388 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_388, 1)
                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_19 & 4) != 0)
                    label_1402d564a:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg5[0].q), 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_900[0].o)
                        
                        if ((rsi_19 & 8) == 0)
                            goto label_1402d3888
                        
                        goto label_1402d566d
                    
                label_1402d3878:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_900[0].o)
                    
                    if ((rsi_19 & 8) == 0)
                    label_1402d3888:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) != 0)
                            goto label_1402d5699
                        
                        goto label_1402d3898
                    
                label_1402d566d:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint32_t rax_392 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_392, 3)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_19 & 0x10) != 0)
                    label_1402d5699:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                        zmm2[0].o = arg6[0].o & data_142fc92e0
                        
                        if ((rsi_19 & 0x20) == 0)
                            goto label_1402d38aa
                        
                        goto label_1402d56b6
                    
                label_1402d3898:
                    zmm2[0].o = arg6[0].o & data_142fc92e0
                    
                    if ((rsi_19 & 0x20) == 0)
                    label_1402d38aa:
                        arg6[0].o = zx.o(0)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        
                        if ((rsi_19 & 0x40) != 0)
                            goto label_1402d56d1
                        
                        goto label_1402d38bd
                    
                label_1402d56b6:
                    uint32_t rax_396 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_396, 5)
                    arg6[0].o = zx.o(0)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    
                    if ((rsi_19 & 0x40) == 0)
                    label_1402d38bd:
                        zmm5[0].o = var_810_2
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        
                        if (temp0_1264.b s< 0)
                        label_1402d56fa:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_400 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_400, 7)
                    else
                    label_1402d56d1:
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm5[0].q), 6)
                        zmm5[0].o = var_810_2
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        
                        if (temp0_1264.b s< 0)
                            goto label_1402d56fa
                    
                    arg6 = var_840_3
                    zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    zmm0[0].o &= data_142fc92e0
                else
                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    var_820.o = zmm0[0].o
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    arg9[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    char rsi_18 = temp0_1264.b
                    
                    if ((rsi_18 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    
                    if ((rsi_18 & 2) != 0)
                        int64_t rax_197 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_197, 1)
                    
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2 = var_8e0_1.32
                    var_900[0].o = __vextractf128_memdq_ymmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    
                    if ((rsi_18 & 4) == 0)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                        
                        if ((rsi_18 & 8) != 0)
                            goto label_1402d33ee
                        
                        goto label_1402d2525
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 2)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                    
                    if ((rsi_18 & 8) != 0)
                    label_1402d33ee:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_264 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_264, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_18 & 0x10) == 0)
                            goto label_1402d2535
                        
                        goto label_1402d3414
                    
                label_1402d2525:
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_18 & 0x10) == 0)
                    label_1402d2535:
                        
                        if ((rsi_18 & 0x20) != 0)
                            goto label_1402d3423
                        
                        goto label_1402d253f
                    
                label_1402d3414:
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                    
                    if ((rsi_18 & 0x20) != 0)
                    label_1402d3423:
                        int64_t rax_266 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_266, 5)
                        
                        if ((rsi_18 & 0x40) == 0)
                            goto label_1402d2549
                        
                        goto label_1402d3438
                    
                label_1402d253f:
                    
                    if ((rsi_18 & 0x40) != 0)
                    label_1402d3438:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                        
                        if (temp0_1264.b s< 0)
                        label_1402d3451:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_268 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_268, 7)
                    else
                    label_1402d2549:
                        
                        if (temp0_1264.b s< 0)
                            goto label_1402d3451
                    
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = zx.o(rcx_59)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    arg15 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg6[0].o ^= zmm0[0].o
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg5[0].o ^= zmm0[0].o
                    arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    var_560.32 = arg5
                    arg5 = _mm256_and_ps(arg11, arg5)
                    arg16 = arg7
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        zmm2[0].o ^= zmm0[0].o
                        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
                        zmm1[0].o ^= zmm0[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm5 = var_940_1
                        arg10 = var_720_1
                        arg16 = _mm256_blendv_ps(arg10, zmm5, zmm1)
                        zmm2[0].o = var_820.o
                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm2[0].o, var_8c0[0].o)
                        arg6[0].o ^= zmm0[0].o
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm0[0].o ^= zmm5[0].o
                        arg13 = _mm256_and_ps(zmm1, _mm256_insertf128_ps(zmm0, arg6[0].o, 1))
                        zmm1 = _mm256_and_ps(arg11, arg13)
                        int32_t i_2 = _mm256_movemask_ps(zmm1)
                        
                        if (i_2 != 0)
                            zmm5 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            zmm0 = arg10
                            
                            do
                                arg14 = zmm5
                                zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_1.o)
                                arg10 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                char temp0_1379 = _mm256_movemask_ps(zmm1)
                                
                                if ((temp0_1379 & 1) == 0)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                    
                                    if ((temp0_1379 & 2) != 0)
                                        goto label_1402d265e
                                    
                                    goto label_1402d2776
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 0)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                
                                if ((temp0_1379 & 2) != 0)
                                label_1402d265e:
                                    int64_t rax_200 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_200, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1379 & 4) == 0)
                                        goto label_1402d278d
                                    
                                    goto label_1402d2680
                                
                            label_1402d2776:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                
                                if ((temp0_1379 & 4) == 0)
                                label_1402d278d:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                    
                                    if ((temp0_1379 & 8) != 0)
                                        goto label_1402d269f
                                    
                                    goto label_1402d279c
                                
                            label_1402d2680:
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg6[0], 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                
                                if ((temp0_1379 & 8) != 0)
                                label_1402d269f:
                                    arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_202 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_202, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                    
                                    if ((temp0_1379 & 0x10) == 0)
                                        goto label_1402d27ab
                                    
                                    goto label_1402d26c4
                                
                            label_1402d279c:
                                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                
                                if ((temp0_1379 & 0x10) == 0)
                                label_1402d27ab:
                                    
                                    if ((temp0_1379 & 0x20) != 0)
                                        goto label_1402d26d2
                                    
                                    goto label_1402d27b4
                                
                            label_1402d26c4:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 4)
                                
                                if ((temp0_1379 & 0x20) != 0)
                                label_1402d26d2:
                                    int64_t rax_204 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_204, 5)
                                    
                                    if ((temp0_1379 & 0x40) == 0)
                                        goto label_1402d27bd
                                    
                                    goto label_1402d26e6
                                
                            label_1402d27b4:
                                
                                if ((temp0_1379 & 0x40) != 0)
                                label_1402d26e6:
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 6)
                                    
                                    if (temp0_1379 s< 0)
                                    label_1402d26fe:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_206 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_206, 7)
                                else
                                label_1402d27bd:
                                    
                                    if (temp0_1379 s< 0)
                                        goto label_1402d26fe
                                
                                zmm1[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_memdq(zmm2[0].o, data_142d8f750)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg15[0].o)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                arg5 = _mm256_and_ps(zmm1, arg13)
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg6 = _mm256_and_ps(arg5, arg11)
                                
                                if (_mm256_movemask_ps(arg6) != i_2)
                                    zmm1 = _mm256_xor_ps(arg5, arg13)
                                
                                arg16 = _mm256_blendv_ps(arg16, zmm0, arg5)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg8[0].o)
                                arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg8[0].o)
                                zmm5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_8c0[0].o)
                                zmm0[0].o ^= arg8[0].o
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, var_940_1[0].o)
                                arg5[0].o ^= arg8[0].o
                                arg13 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1), zmm1)
                                zmm1 = _mm256_and_ps(arg13, arg11)
                                i_2 = _mm256_movemask_ps(zmm1)
                                zmm0 = arg14
                            while (i_2 != 0)
                    
                    arg13[0].o = zx.o(0)
                    zmm1 = var_560.32
                    zmm0 = _mm256_andnot_ps(zmm1, arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0 = _mm256_cmp_ps(arg13, arg13, 0xf)
                        zmm2 = _mm256_xor_ps(zmm1, zmm0)
                        arg16 = _mm256_blendv_ps(arg16, arg13, zmm2)
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_820.o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_720_1[0].o)
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                        arg8 = _mm256_and_ps(arg5, zmm2)
                        arg14 = _mm256_and_ps(arg8, arg11)
                        int32_t i_3 = _mm256_movemask_ps(arg14)
                        
                        if (i_3 != 0)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            do
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_8a0_1.o)
                                arg10 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                                char temp0_1449 = _mm256_movemask_ps(arg14)
                                
                                if ((temp0_1449 & 1) == 0)
                                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                    
                                    if ((temp0_1449 & 2) != 0)
                                        goto label_1402d28ed
                                    
                                    goto label_1402d2a01
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 0)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((temp0_1449 & 2) != 0)
                                label_1402d28ed:
                                    int64_t rax_210 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_210, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1449 & 4) == 0)
                                        goto label_1402d2a18
                                    
                                    goto label_1402d290f
                                
                            label_1402d2a01:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8e0_1.o)
                                
                                if ((temp0_1449 & 4) == 0)
                                label_1402d2a18:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                    
                                    if ((temp0_1449 & 8) != 0)
                                        goto label_1402d292e
                                    
                                    goto label_1402d2a27
                                
                            label_1402d290f:
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg6[0], 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                
                                if ((temp0_1449 & 8) != 0)
                                label_1402d292e:
                                    arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_212 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_212, 3)
                                    arg10 = _mm256_insertf128_ps(arg14, arg5[0].o, 1)
                                    
                                    if ((temp0_1449 & 0x10) == 0)
                                        goto label_1402d2a36
                                    
                                    goto label_1402d2953
                                
                            label_1402d2a27:
                                arg10 = _mm256_insertf128_ps(arg14, arg5[0].o, 1)
                                
                                if ((temp0_1449 & 0x10) == 0)
                                label_1402d2a36:
                                    
                                    if ((temp0_1449 & 0x20) != 0)
                                        goto label_1402d2961
                                    
                                    goto label_1402d2a3f
                                
                            label_1402d2953:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                                
                                if ((temp0_1449 & 0x20) != 0)
                                label_1402d2961:
                                    int64_t rax_214 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_214, 5)
                                    
                                    if ((temp0_1449 & 0x40) == 0)
                                        goto label_1402d2a48
                                    
                                    goto label_1402d2975
                                
                            label_1402d2a3f:
                                
                                if ((temp0_1449 & 0x40) != 0)
                                label_1402d2975:
                                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 6)
                                    
                                    if (temp0_1449 s< 0)
                                    label_1402d298d:
                                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_216 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_216, 7)
                                else
                                label_1402d2a48:
                                    
                                    if (temp0_1449 s< 0)
                                        goto label_1402d298d
                                
                                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                                arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                arg5[0].o ^= zmm5[0].o
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
                                arg6[0].o ^= zmm5[0].o
                                arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                arg6 = _mm256_and_ps(arg5, arg8)
                                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                arg7 = _mm256_and_ps(arg6, arg11)
                                
                                if (_mm256_movemask_ps(arg7) != i_3)
                                    arg5 = _mm256_xor_ps(arg6, arg8)
                                
                                arg16 = _mm256_blendv_ps(arg16, zmm1, arg6)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                                zmm1 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
                                zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                                arg8 = _mm256_and_ps(zmm0, arg5)
                                arg14 = _mm256_and_ps(arg8, arg11)
                                i_3 = _mm256_movemask_ps(arg14)
                            while (i_3 != 0)
                    
                    arg7 = var_7e0_3
                    arg6 = var_8a0_1.32
                    zmm1 = _mm256_blendv_ps(arg13, arg16, arg11)
                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_7e0_3 = zmm1
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    
                    if ((rsi_18 & 1) != 0)
                        zmm5[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    arg14 = var_460.32
                    arg15 = var_640_2
                    arg10 = var_5e0.32
                    arg16[0].o = var_7c0.o
                    arg13 = var_600.32
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    
                    if ((rsi_18 & 2) == 0)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                        
                        if ((rsi_18 & 4) != 0)
                            goto label_1402d348a
                        
                        goto label_1402d2b85
                    
                    uint16_t* rax_269 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_269, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_18 & 4) != 0)
                    label_1402d348a:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg5[0].q, 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                        
                        if ((rsi_18 & 8) == 0)
                            goto label_1402d2b95
                        
                        goto label_1402d34aa
                    
                label_1402d2b85:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                    
                    if ((rsi_18 & 8) == 0)
                    label_1402d2b95:
                        arg12 = var_8a0_1.32
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_18 & 0x10) != 0)
                            goto label_1402d34d9
                        
                        goto label_1402d2bae
                    
                label_1402d34aa:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint16_t* rax_271 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_271, 3)
                    arg12 = var_8a0_1.32
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_18 & 0x10) != 0)
                    label_1402d34d9:
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0].q, 4)
                        arg5 = var_940_1
                        
                        if ((rsi_18 & 0x20) == 0)
                            goto label_1402d2bbe
                        
                        goto label_1402d34ee
                    
                label_1402d2bae:
                    arg5 = var_940_1
                    
                    if ((rsi_18 & 0x20) == 0)
                    label_1402d2bbe:
                        
                        if ((rsi_18 & 0x40) != 0)
                            goto label_1402d3503
                        
                        goto label_1402d2bc8
                    
                label_1402d34ee:
                    uint16_t* rax_273 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_273, 5)
                    
                    if ((rsi_18 & 0x40) == 0)
                    label_1402d2bc8:
                        arg6 = arg7
                        
                        if (temp0_1264.b s< 0)
                        label_1402d3520:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint16_t* rax_275 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_275, 7)
                    else
                    label_1402d3503:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm2[0].q, 6)
                        arg6 = arg7
                        
                        if (temp0_1264.b s< 0)
                            goto label_1402d3520
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm2 = var_7e0_3
                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    arg7 = _mm256_blendv_ps(zmm1, zmm0, arg11)
                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_8c0[0].o)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg7 = _mm256_blendv_ps(arg7, arg5, zmm0)
                    
                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_940_2 = arg7
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    
                    if ((rsi_18 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    arg9 = var_620
                    arg7 = arg6
                    
                    if ((rsi_18 & 2) == 0)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                        
                        if ((rsi_18 & 4) != 0)
                            goto label_1402d3559
                        
                        goto label_1402d2ca2
                    
                    int64_t rax_276 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_276, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_18 & 4) != 0)
                    label_1402d3559:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                        
                        if ((rsi_18 & 8) == 0)
                            goto label_1402d2cb2
                        
                        goto label_1402d3579
                    
                label_1402d2ca2:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                    
                    if ((rsi_18 & 8) != 0)
                    label_1402d3579:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_278 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_278, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_18 & 0x10) != 0)
                        label_1402d359f:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rsi_18 & 0x20) == 0)
                                goto label_1402d2ccc
                            
                            goto label_1402d35ae
                    else
                    label_1402d2cb2:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_18 & 0x10) != 0)
                            goto label_1402d359f
                    
                    if ((rsi_18 & 0x20) == 0)
                    label_1402d2ccc:
                        arg5[0].o = zx.o(0)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                        
                        if ((rsi_18 & 0x40) != 0)
                            goto label_1402d35cc
                        
                        goto label_1402d2cdf
                    
                label_1402d35ae:
                    int64_t rax_280 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_280, 5)
                    arg5[0].o = zx.o(0)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                    
                    if ((rsi_18 & 0x40) == 0)
                    label_1402d2cdf:
                        arg6 = var_840_3
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        
                        if (temp0_1264.b s< 0)
                        label_1402d35f2:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_282 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_282, 7)
                    else
                    label_1402d35cc:
                        arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg6[0], 6)
                        arg6 = var_840_3
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        
                        if (temp0_1264.b s< 0)
                            goto label_1402d35f2
                    
                    zmm5[0].o = var_810_2
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                
                zmm2[0].o = zx.o(0)
                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                zmm0[0].o = zx.o(0)
                arg5[0].o = zx.o(0)
                
                if (arg19 != 1)
                    arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg6[0].o = data_142d3f5b0
                    arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg6 = var_840_3
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    arg5[0].o = __vpermilps_xmmdq_memdq_immb(var_540[0].o, 0)
                    zmm1 = _mm256_sub_ps(_mm256_insertf128_ps(arg5, arg5[0].o, 1), 
                        _mm256_cvtepi32_ps(zmm1))
                    zmm2 = _mm256_cvtepi32_ps(zmm2)
                    arg5 = _mm256_div_ps(zmm1, zmm2)
                
                arg7 = _mm256_blendv_ps(zmm0, arg5, arg7)
                arg5 = var_7e0_3
        
        double var_8c0_1[0x4] = _mm256_insertf128_ps(arg10, arg16[0].o, 1)
        var_8e0_1.32 = _mm256_insertf128_ps(arg13, arg13[0].o, 1)
        zmm5 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
        arg9 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_860_2, var_880_2, 1)
        arg10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_6a0_1, var_660_1, 1)
        int32_t rax_300
        rax_300.b = r9_3 == 3
        var_6a0_1[0].o = zx.o(neg.d(rax_300))
        var_6a0_1[0].o = __vpshufd_xmmdq_xmmdq_immb(var_6a0_1[0].o, 0)
        zmm0 = _mm256_insertf128_ps(var_6a0_1, var_6a0_1[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm2[0].o = data_142d3f5b0
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm0 = _mm256_and_ps(zmm1, zmm0)
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, data_143442540, zmm0)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        arg16 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        uint64_t r12_11 = zx.q(r9_3)
        double var_900_1[0x4] = arg7
        var_660_1.32 = arg10
        float var_860_3[0x8] = arg9
        double var_6a0_2[0x4] = arg8
        double var_840_4[0x4] = arg16
        int32_t var_720_2[0x8] = zmm5
        int32_t var_880_3[0x4] = zmm2[0].o
        uint64_t var_910_1
        uint32_t* var_800_1
        float var_5c0_1[0x8]
        double var_5a0_1[0x4]
        int32_t var_580_1[0x8]
        
        if (r9_3 u> 6)
        label_1402d3d37:
            zmm0[0].o = zx.o(0)
            var_5c0_1 = _mm256_maskstore_ps(arg14, zmm0)
            var_5a0_1 = _mm256_maskstore_ps(arg14, zmm0)
        label_1402d4026:
            var_580_1 = _mm256_maskstore_ps(arg14, zmm0)
            arg16 = var_6c0_2
            arg13 = var_8c0_1
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, arg15[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
            var_8a0_1.o = arg6[0].o
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            arg13 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
            arg6[0].o = var_8a0_1.o
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg11 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (r12_11)
                case 0, 1
                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg13[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm5[0].o)
                    arg6 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                    arg10 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                    zmm1[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg9[0].o = zx.o(0)
                    zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                    arg11 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg9, arg6, arg11)
                    int64_t r10_11 = zmm1[0].q
                    void* rdi_26 = r8_5 + r10_11
                    int64_t r11_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rsi_20 = r8_5 + r11_12
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r14_11 = zmm1[0].q
                    int64_t r15_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg12 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm1 = _mm256_blendv_ps(arg9, arg12, arg11)
                    arg6[0].o = *(zmm1[0].q + rdi_26)
                    int64_t rcx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rax_302 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_63 + rsi_20), 0x10)
                    float* rcx_64 = zmm1[0].q
                    zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm5 = _mm256_blendv_ps(arg9, zmm1, arg11)
                    arg7[0].o = *(zmm5[0].q + rdi_26)
                    float* rdx_76 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    float* rdi_27 = zmm5[0].q
                    float* rbx_39 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5 = _mm256_blendv_ps(arg9, arg10, zmm0)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_76 + rsi_20), 0x10)
                    int64_t rdx_77 = zmm5[0].q
                    void* rsi_21 = r8_5 + r14_11
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_64 + rsi_21), 0x20)
                    int64_t rcx_65 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_27 + rsi_21), 0x20)
                    void* rsi_22 = r8_5 + rdx_77
                    void* rdi_28 = r8_5 + r15_8
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_302 + rdi_28), 0x30)
                    void* rax_303 = r8_5 + rcx_65
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_39 + rdi_28), 0x30)
                    int64_t rdi_29 = zmm5[0].q
                    arg8 = _mm256_blendv_ps(arg9, arg12, zmm0)
                    int32_t* rbx_40 = arg8[0]
                    zmm0 = _mm256_blendv_ps(arg9, zmm1, zmm0)
                    zmm1[0].o = *(rbx_40 + rsi_22)
                    arg5[0].o = *(zmm0[0] + rsi_22)
                    void* rsi_23 = r8_5 + rdi_29
                    float* rbx_42 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_42 + rax_303), 0x10)
                    float* rbx_43 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_43 + rax_303), 0x10)
                    int64_t rax_304 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm5[0].q + rsi_23), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm0[0] + rsi_23), 0x20)
                    void* rsi_24 = r8_5 + rax_304
                    int64_t rbx_46 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_46 + rsi_24), 0x30)
                    float* rbx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_47 + rsi_24), 0x30)
                    arg5[0].o = *(r8_5 + rdx_77)
                    zmm5[0].o = *(r8_5 + r10_11)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r8_5 + r11_12), 0x10)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r8_5 + r14_11), 0x20)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r8_5 + r15_8), 0x30)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + rcx_65), 0x10)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + rdi_29), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + rax_304), 0x30)
                    var_5c0_1 = _mm256_maskstore_ps(arg14, _mm256_insertf128_ps(arg5, zmm5[0].o, 1))
                    zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                    arg6[0].o = var_8a0_1.o
                    var_5a0_1 = _mm256_maskstore_ps(arg14, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                    goto label_1402d4026
                case 2
                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm5 = arg8
                    arg8 = arg5
                    arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg13[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg5[0].o)
                    arg9 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                    arg11 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, arg11)
                    arg5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    arg10 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    int64_t r10_12 = zmm1[0].q
                    int64_t r9_4 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rbx_48 = r8_5 + r10_12
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r11_13 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rsi_25 = r8_5 + r9_4
                    arg12 = _mm256_broadcast_sd(9.8813129168249309e-324)
                    zmm2 = _mm256_blendv_ps(zmm0, arg12, arg11)
                    int64_t rdi_30 = zmm1[0].q
                    void* rdx_78 = zmm2[0].q
                    uint16_t* rax_305 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    uint16_t* rcx_66 = zmm1[0].q
                    zmm2[0].o = zx.o(*(rdx_78 + rbx_48))
                    int64_t rdx_80 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_305 + rsi_25), 1)
                    zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg5 = _mm256_blendv_ps(zmm0, zmm2, arg11)
                    uint32_t rax_307 = zx.d(*(arg5[0].q + rbx_48))
                    uint16_t* rbx_49 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg6[0].o = zx.o(rax_307)
                    uint16_t* rax_308 = arg5[0].q
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rbx_49 + rsi_25), 1)
                    int64_t rsi_26 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5 = _mm256_blendv_ps(zmm0, arg9, arg10)
                    void* rbx_50 = r8_5 + rdi_30
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_66 + rbx_50), 2)
                    void* rcx_67 = r8_5 + r11_13
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rax_308 + rbx_50), 2)
                    int64_t rax_309 = arg5[0].q
                    void* rbx_51 = r8_5 + rax_309
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_80 + rcx_67), 3)
                    int64_t rdx_81 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm5 = _mm256_blendv_ps(zmm0, arg12, arg10)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rsi_26 + rcx_67), 3)
                    void* rcx_68 = r8_5 + rdx_81
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm5[0].q + rbx_51), 4)
                    int64_t rsi_28 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_28 + rcx_68), 5)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm0 = _mm256_blendv_ps(zmm0, zmm2, arg10)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(zmm0[0] + rbx_51), 4)
                    uint16_t* rsi_30 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rbx_52 = arg5[0].q
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_30 + rcx_68), 5)
                    void* rcx_69 = r8_5 + rbx_52
                    arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg6[0] i+ rcx_69), 6)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm0[0] + rcx_69), 6)
                    zmm5[0].o = zx.o(*(r8_5 + r10_12))
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r8_5 + r9_4), 1)
                    r9_3 = rdx.d
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r8_5 + rdi_30), 2)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r8_5 + r11_13), 3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r8_5 + rax_309), 4)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r8_5 + rdx_81), 5)
                    int64_t rax_310 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r8_5 + rbx_52), 6)
                    void* rcx_71 = r8_5 + rax_310
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r8_5 + rax_310), 7)
                    int64_t rax_311 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_311 + rcx_71), 7)
                    int64_t rax_312 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                    arg6[0].o = zx.o(0)
                    arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                    zmm5[0].o = data_1434424d0
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, arg5[0].o, 1))
                    arg5 = data_1434424e0
                    zmm0 = _mm256_div_ps(zmm0, arg5)
                    arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg7, zmm1[0].o, 1)), arg5)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_312 + rcx_71), 7)
                    arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                    zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                    arg6[0].o = var_8a0_1.o
                    zmm2 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm2), arg5)
                    arg5 = data_143442560
                    var_5c0_1 = _mm256_maskstore_ps(arg14, _mm256_mul_ps(zmm0, arg5))
                    var_5a0_1 = _mm256_maskstore_ps(arg14, _mm256_mul_ps(zmm1, arg5))
                    zmm0 = _mm256_mul_ps(zmm2, arg5)
                    arg5 = arg8
                    goto label_1402d4026
                case 3
                    zmm0[0].o = _mm256_extractf128_ps(var_8c0_1[0].o, 1)
                    zmm2 = var_8e0_1.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_8c0_1[0].o)
                    arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0 = _mm256_and_ps(arg12, zmm5)
                    int64_t rax_319 = sx.q(zmm0[0].d)
                    var_620[0].q = r11_11
                    void* r11_15 = r8_5 + rax_319
                    var_7c0.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                    var_5e0.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                    var_948.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                    zmm2 = arg10
                    arg10[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm0[0].o = *(r9_2 + r11_15)
                    var_910_1.o = zmm0[0].o
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9540)
                    zmm1[0].o = *(zx.q(zmm0[0].d) + r11_15)
                    int128_t var_810_3 = zmm1[0].o
                    zmm5 = arg9
                    arg9 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423c0)
                    zmm1[0].o = *(zx.q(arg9[0]) + r11_15)
                    var_540[0].o = zmm1[0].o
                    arg7 = arg16
                    arg16 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423e0)
                    zmm1[0].o = *(zx.q(arg16[0].d) + r11_15)
                    var_820.o = zmm1[0].o
                    arg12 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442400)
                    zmm1[0].o = *(zx.q(arg12[0]) + r11_15)
                    var_560.o = zmm1[0].o
                    int64_t rax_326 = sx.q(arg10[0])
                    var_2e0[0] = rax_326
                    void* rbx_60 = r8_5 + rax_326
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    var_7e0_3 = arg5
                    arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    var_8c0_1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_8c0_1[0].o)
                    var_8c0_1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_8c0_1[0].o, arg5[0].o)
                    var_8c0_1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                    arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_8c0_1[0].o, zmm1[0].o)
                    var_8c0_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
                    var_8c0_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, var_8c0_1[0].o)
                    zmm1 = _mm256_insertf128_ps(var_8c0_1, zmm1[0].o, 1)
                    var_8c0_1[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                    zmm5[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                    arg6 = _mm256_insertf128_ps(var_8c0_1, zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg7[0].o = zx.o(0)
                    arg13 = _mm256_blendv_ps(arg7, zmm1, arg6)
                    zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                    arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                    arg6[0].o = *(rdx_59 + rbx_60)
                    int32_t temp0_2112 = __vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1)
                    arg11 = _mm256_blendv_ps(arg7, arg5, zmm1)
                    int32_t temp0_2114 = __vpextrd_memd_xmmdq_immb(arg10[0].o, 2)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int32_t temp0_2116 = __vpextrd_memd_xmmdq_immb(arg10[0].o, 3)
                    arg5[0].o = *(zx.q(zmm1[0]) + rbx_60)
                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    uint64_t rax_327 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    var_300[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    float* rax_329 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = *(zx.q(zmm5[0]) + rbx_60)
                    uint64_t rdi_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t rax_330 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    uint64_t rax_331 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    uint64_t r10_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    uint64_t r15_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    zmm1[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    uint64_t rax_332 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    int32_t* rax_333 = zx.q(zmm1[0])
                    uint64_t rdx_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t r11_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    zmm5[0].o = *(rax_333 + rbx_60)
                    uint64_t rax_334 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    uint64_t rcx_81 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t rsi_41 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int32_t* rax_335 = zx.q(zmm1[0])
                    uint64_t r14_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = *(rax_335 + rbx_60)
                    int64_t r9_7 = sx.q(temp0_2112)
                    void* rbx_61 = r8_5 + r9_7
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_17 + rbx_61), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_33 + rbx_61), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_14 + rbx_61), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_84 + rbx_61), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_81 + rbx_61), 0x10)
                    int64_t rcx_82 = sx.q(temp0_2114)
                    void* rdx_85 = r8_5 + rcx_82
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_620[0].q + rdx_85), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_330 + rdx_85), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_9 + rdx_85), 0x20)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_16 + rdx_85), 0x20)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_41 + rdx_85), 0x20)
                    int64_t rdx_86 = sx.q(temp0_2116)
                    void* rbx_62 = r8_5 + rdx_86
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r10_10 + rbx_62), 0x30)
                    arg10[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_331 + rbx_62), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_332 + rbx_62), 0x30)
                    var_800_1.o = zmm0[0].o
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_334 + rbx_62), 0x30)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r14_13 + rbx_62), 0x30)
                    uint64_t rbx_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    uint64_t r10_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    float* r14_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    uint64_t rsi_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 1))
                    uint64_t rdi_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 2))
                    float* r11_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 3))
                    zmm0[0].o = *(r8_5 + rax_319)
                    arg5[0].o = *(r8_5 i+ var_2e0[0])
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + r9_7), 0x10)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + rcx_82), 0x20)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + rdx_86), 0x30)
                    int64_t rax_345 = sx.q(var_7c0.d)
                    void* rcx_83 = r8_5 + rax_345
                    zmm1[0].o = var_910_1.o
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_24 + rcx_83), 0x10)
                    zmm1[0].o = var_810_3
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_327 + rcx_83), 0x10)
                    arg6[0].o = var_540[0].o
                    arg9[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_63 + rcx_83), 0x10)
                    arg6[0].o = var_820.o
                    arg16[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_42 + rcx_83), 0x10)
                    float* rdx_89 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                    arg6[0].o = var_560.o
                    arg15[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_89 + rcx_83), 0x10)
                    uint64_t rcx_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    float* rdx_90 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_5 + rax_345), 0x10)
                    int64_t rax_346 = sx.q(var_5e0.d)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_5 + rax_346), 0x20)
                    void* rax_347 = r8_5 + rax_346
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r12_10 + rax_347), 0x20)
                    int64_t rsi_44 = sx.q(var_948.d)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_5 + rsi_44), 0x30)
                    arg12 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    void* rsi_45 = r8_5 + rsi_44
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_7 + rsi_45), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_300[0] i+ rax_347), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_329 + rsi_45), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r10_15 + rax_347), 0x20)
                    arg9[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r14_14 + rsi_45), 0x30)
                    r9_3 = rdx.d
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, *(rdi_34 + rax_347), 0x20)
                    arg16[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_17 + rsi_45), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, *(rcx_84 + rax_347), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_90 + rsi_45), 0x30)
                    int64_t rax_348 = arg13[0].q
                    int64_t rcx_85 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg13 = var_8c0_1
                    int64_t rdx_91 = arg5[0].q
                    int64_t rbx_67 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = zx.o(*(r8_5 + rax_348))
                    int64_t rax_349 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + rcx_85), 1)
                    int64_t rcx_86 = arg11[0].q
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + rdx_91), 2)
                    int64_t rdx_92 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_5 + rbx_67), 3)
                    double rbx_68 = zmm0[0]
                    zmm0[0].o = zx.o(*(r8_5 + rcx_86))
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_5 + rax_349), 1)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_5 i+ rbx_68), 2)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_5 + rdx_92), 3)
                    arg11 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                    arg10 = _mm256_insertf128_ps(zmm1, arg10[0].o, 1)
                    zmm5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg9, var_800_1.o, 1)
                    arg7 = _mm256_insertf128_ps(arg16, arg7[0].o, 1)
                    arg16 = var_6c0_2
                    arg9 = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
                    arg8 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg5, zmm0[0].o, 1), 
                        data_143442420)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                    zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg6[0].o = data_143442490
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
                    arg8[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                    zmm2 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm2[0].o, 1)), 
                        data_1434424a0)
                    arg6[0].o = data_143442480
                    arg8[0].o &= arg6[0].o
                    zmm1[0].o &= arg6[0].o
                    arg6[0].o = data_143442440
                    arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, arg8[0].o, 1))
                    arg8 = data_143442460
                    zmm1 = _mm256_div_ps(zmm1, arg8)
                    zmm2 = _mm256_add_ps(arg12, _mm256_mul_ps(zmm5, zmm2))
                    zmm1 = _mm256_mul_ps(arg7, zmm1)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    arg6[0].o = var_8a0_1.o
                    zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    arg5 = var_7e0_3
                    zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm0), arg8)
                    zmm1 = _mm256_add_ps(arg11, zmm1)
                    var_5c0_1 = _mm256_maskstore_ps(arg14, zmm2)
                    zmm0 = _mm256_mul_ps(arg9, zmm0)
                    var_5a0_1 = _mm256_maskstore_ps(arg14, zmm1)
                    zmm0 = _mm256_add_ps(arg10, zmm0)
                    var_580_1 = _mm256_maskstore_ps(arg14, zmm0)
                case 4, 5, 6
                    goto label_1402d3d37
        
        arg8 = var_940_2
        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
        zmm2 = var_8e0_1.32
        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
        zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
        arg5[0].o = zmm2[0].o & not.o(arg14[0].o)
        arg6[0].o = arg7[0].o & not.o(zmm5[0].o)
        arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            zmm0 = _mm256_insertf128_ps(zmm5, arg14[0].o, 1)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            zmm2[0].o ^= arg5[0].o
            arg5[0].o ^= arg7[0].o
            zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
            arg11 = _mm256_and_ps(zmm2, zmm0)
            double var_440_1[0x4]
            float var_420_1[0x8]
            
            if (r9_3 u> 6)
            label_1402d4376:
                zmm0[0].o = zx.o(0)
                var_440_1 = _mm256_maskstore_ps(arg11, zmm0)
                var_420_1 = _mm256_maskstore_ps(arg11, zmm0)
            else
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg15[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_880_3)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                arg5 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                
                switch (r12_11)
                    case 0, 1
                        arg8 = var_660_1.32
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg10 = var_6a0_2
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(var_860_3[0].o, 1)
                        arg13 = var_840_4
                        zmm5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_860_3[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                        arg6 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        zmm0 = _mm256_blendv_ps(arg12, zmm0, zmm2)
                        zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        arg7 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                        arg6 = _mm256_blendv_ps(arg12, arg6, arg7)
                        double r9_5 = zmm0[0]
                        int64_t r10_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rsi_33 = r8_5 i+ r9_5
                        void* r8_6 = r8_5 + r10_13
                        arg10[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        double r11_14 = arg6[0]
                        void* rdx_82 = r8_5 i+ r11_14
                        int64_t r14_12 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rcx_74 = r8_5 + r14_12
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg9 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg8 = _mm256_blendv_ps(arg12, arg9, arg7)
                        double rbx_53 = arg8[0]
                        zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg6 = _mm256_blendv_ps(arg12, zmm0, arg7)
                        arg7[0].o = *(rbx_53 i+ rdx_82)
                        zmm1[0].o = *(arg6[0] + rdx_82)
                        int64_t rdx_83 = zmm5[0].q
                        float* rbx_55 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_55 + rcx_74), 0x10)
                        float* rbx_56 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_56 + rcx_74), 0x10)
                        void* rcx_75 = r8_5 + rdx_83
                        arg9 = _mm256_blendv_ps(arg12, arg9, zmm2)
                        arg5[0].o = *(arg9[0].q + rsi_33)
                        zmm0 = _mm256_blendv_ps(arg12, zmm0, zmm2)
                        arg13 = var_8c0_1
                        zmm2[0].o = *(zmm0[0] + rsi_33)
                        int64_t rbx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                            *(zmm5[0].q + rcx_75), 0x20)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg6[0] + rcx_75), 0x20)
                        void* rcx_76 = r8_5 + rbx_59
                        int64_t rsi_36 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_36 + rcx_76), 0x30)
                        int64_t rsi_37 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_37 + r8_6), 0x10)
                        float* rsi_38 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_38 + rcx_76), 0x30)
                        float* rcx_77 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_77 + r8_6), 0x10)
                        int64_t rcx_78 = arg10[0].q
                        void* rsi_39 = r8_5 + rcx_78
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg6[0] i+ rsi_39), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(zmm0[0] + rsi_39), 0x20)
                        arg7[0].o = *(r8_5 i+ r9_5)
                        arg8[0].o = *(r8_5 i+ r11_14)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r8_5 + r14_12), 0x10)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r8_5 + rdx_83), 0x20)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r8_5 + rbx_59), 0x30)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r8_5 + r10_13), 0x10)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r8_5 + rcx_78), 0x20)
                        int64_t rax_316 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r8_5 + rax_316), 0x30)
                        void* rax_317 = r8_5 + rax_316
                        int64_t rcx_79 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_79 + rax_317), 0x30)
                        float* rcx_80 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_80 + rax_317), 0x30)
                        var_440_1 =
                            _mm256_maskstore_ps(arg11, _mm256_insertf128_ps(arg7, arg8[0].o, 1))
                        var_420_1 =
                            _mm256_maskstore_ps(arg11, _mm256_insertf128_ps(arg5, zmm5[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    case 2
                        arg8 = var_660_1.32
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg10 = var_6a0_2
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg9 = var_860_3
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg15 = var_840_4
                        zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg9[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(arg9, zmm0, zmm5)
                        arg6[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg9, arg5, zmm2)
                        double r9_8 = zmm0[0]
                        void* rdi_35 = r8_5 i+ r9_8
                        int64_t r10_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rsi_46 = r8_5 + r10_16
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        uint16_t* rbx_69 = r8_5
                        double r8_7 = zmm0[0]
                        int64_t r11_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rcx_87 = rbx_69 i+ r8_7
                        arg7 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg6 = _mm256_blendv_ps(arg9, arg7, zmm5)
                        void* rdx_93 = rbx_69 + r11_18
                        zmm0[0].o = zx.o(*(arg6[0] i+ rdi_35))
                        int64_t rax_352 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rax_352 + rsi_46), 1)
                        arg8 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm5 = _mm256_blendv_ps(arg9, arg8, zmm5)
                        uint32_t rax_354 = zx.d(*(zmm5[0].q + rdi_35))
                        uint16_t* rdi_36 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o = zx.o(rax_354)
                        int64_t rax_355 = arg5[0].q
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_36 + rsi_46), 1)
                        void* rdi_37 = rbx_69 + rax_355
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg6[0] i+ rcx_87), 2)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm5[0].q + rcx_87), 2)
                        int64_t rcx_88 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg7 = _mm256_blendv_ps(arg9, arg7, zmm2)
                        uint16_t* rsi_49 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_49 + rdx_93), 3)
                        uint16_t* rsi_50 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_50 + rdx_93), 3)
                        void* rdx_94 = rbx_69 + rcx_88
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7[0] i+ rdi_37), 4)
                        uint16_t* rsi_52 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_52 + rdx_94), 5)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm2 = _mm256_blendv_ps(arg9, arg8, zmm2)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdi_37), 4)
                        uint16_t* rdi_38 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rsi_54 = arg5[0].q
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_38 + rdx_94), 5)
                        void* rdx_95 = rbx_69 + rsi_54
                        arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg6[0] i+ rdx_95), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdx_95), 6)
                        zmm5[0].o = zx.o(*(rbx_69 i+ r9_8))
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_69 + r10_16), 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_69 i+ r8_7), 2)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_69 + r11_18), 3)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_69 + rax_355), 4)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_69 + rcx_88), 5)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_69 + rsi_54), 6)
                        int64_t rax_356 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_69 + rax_356), 7)
                        void* rax_357 = rbx_69 + rax_356
                        int64_t rcx_89 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_89 + rax_357), 7)
                        uint16_t* rcx_90 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        arg6[0].o = zx.o(0)
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                        zmm5[0].o = data_1434424d0
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, arg5[0].o, 1))
                        arg5 = data_1434424e0
                        zmm2 = _mm256_div_ps(zmm2, arg5)
                        arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg7, zmm0[0].o, 1)), arg5)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_90 + rax_357), 7)
                        arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm1[0].o, 1)), arg5)
                        arg5 = data_143442560
                        var_440_1 = _mm256_maskstore_ps(arg11, _mm256_mul_ps(zmm2, arg5))
                        var_420_1 = _mm256_maskstore_ps(arg11, _mm256_mul_ps(zmm0, arg5))
                        zmm0 = _mm256_mul_ps(zmm1, arg5)
                    case 3
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0])
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg13 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg13, var_720_2)
                        int32_t temp0_2317 = __vextractps_gpr32_xmmdq_immb(arg10[0].o, 1)
                        var_940_2[0].d = __vextractps_memd_xmmdq_immb(arg10[0].o, 2)
                        var_8a0_1.d = __vextractps_memd_xmmdq_immb(arg10[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        int64_t rdx_97 = sx.q(zmm0[0].d)
                        void* rcx_92 = r8_5 + rdx_97
                        zmm1[0].o = *(r8_5 + rdx_97)
                        int64_t rdi_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rdx_99 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_2323 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_5 + rdi_41), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_5 + rdx_99), 0x20)
                        var_7e0_3[0].o = zmm0[0].o
                        arg15 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9520)
                        uint64_t rax_358 = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 1))
                        void* rdi_42 = r8_5 + rdi_41
                        var_880_3[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 2))
                        zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm1[0].o = *(zx.q(zmm0[0].d) + rcx_92)
                        uint64_t rax_360 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t r13_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t r9_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_360 + rdi_42), 0x10)
                        float* var_780_1
                        var_780_1.o = zmm0[0].o
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9540)
                        uint32_t* var_700_1
                        var_700_1.32 = zmm0
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        var_800_1.o = zmm1[0].o
                        zmm0[0].o = *(zx.q(zmm1[0]) + rcx_92)
                        uint64_t rax_362 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_362 + rdi_42), 0x10)
                        var_910_1.o = zmm0[0].o
                        zmm0 = var_860_3
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm5 = var_840_4
                        arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg16 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423c0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                        uint64_t rax_363 = zx.q(arg5[0])
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm0 = var_660_1.32
                        zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm5[0].o = _mm256_extractf128_ps(var_6a0_2[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        uint64_t rsi_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        zmm5[0].o = *(rax_363 + rcx_92)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_55 + rdi_42), 0x10)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_6a0_2[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        arg6[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                        var_6a0_2[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg6, var_6a0_2[0].o, 1)
                        var_6a0_2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_6a0_2[0].o, var_6a0_2[0].o)
                        zmm2 = _mm256_blendv_ps(var_6a0_2, zmm2, arg6)
                        arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg8[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                        arg8 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423e0)
                        arg9 = _mm256_blendv_ps(var_6a0_2, zmm1, arg6)
                        var_6a0_2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg6[0].o = *(zx.q(var_6a0_2[0].d) + rcx_92)
                        float* rax_365 = zx.q(__vpextrd_gpr32d_xmmdq_immb(var_6a0_2[0].o, 1))
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_365 + rdi_42), 0x10)
                        float rax_366 = arg10[0]
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg13, data_143442400)
                        arg13[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        int32_t* rsi_56 = zx.q(arg13[0])
                        float* rbx_72 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1))
                        zmm0[0].o = *(rsi_56 + rcx_92)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_72 + rdi_42), 0x10)
                        var_6a0_2[0] = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 3))
                        uint64_t rsi_57 = zx.q(arg15[0].d)
                        void* rdx_100 = r8_5 + rdx_99
                        zmm5[0].o = var_780_1.o
                        arg15[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r13_5 + rdx_100), 0x20)
                        zmm1[0].o = arg14[0].o
                        arg14[0].o = var_800_1.o
                        uint64_t rdi_43 = zx.q(__vextractps_gpr32_xmmdq_immb(arg14[0].o, 2))
                        zmm5[0].o = var_910_1.o
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_43 + rdx_100), 0x20)
                        var_840_4[0].o = zmm5[0].o
                        uint64_t rdi_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(rdi_44 + rdx_100), 0x20)
                        var_860_3[0].o = zmm5[0].o
                        uint64_t rdi_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(var_6a0_2[0].o, 2))
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_45 + rdx_100), 0x20)
                        var_910_1.o = arg6[0].o
                        float* rdi_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_46 + rdx_100), 0x20)
                        int64_t var_7f0
                        var_7f0.o = zmm0[0].o
                        int64_t rax_367 = sx.q(rax_366)
                        zmm0 = var_700_1.32
                        int32_t* rdx_101 = zx.q(zmm0[0].d)
                        uint64_t rbx_73 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* rcx_94 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* r13_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        arg12[0].o = *(r8_5 + rax_367)
                        void* rax_368 = r8_5 + rax_367
                        uint64_t rdi_47 = zx.q(__vextractps_gpr32_xmmdq_immb(arg14[0].o, 3))
                        arg14[0].o = zmm1[0].o
                        zmm0[0].o = *(rsi_57 + rax_368)
                        int64_t rsi_58 = sx.q(temp0_2323)
                        arg6[0].o = var_7e0_3[0].o
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r8_5 + rsi_58), 0x30)
                        void* rsi_59 = r8_5 + rsi_58
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, *(r9_9 + rsi_59), 0x30)
                        double var_660_2[0x2] = zmm1[0].o
                        int32_t* r9_10 = zx.q(arg16[0].d)
                        uint64_t r14_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 1))
                        float* r15_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 2))
                        float* r12_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 3))
                        arg16[0].o = *(rdx_101 + rax_368)
                        int64_t rdx_102 = sx.q(temp0_2317)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r8_5 + rdx_102), 0x10)
                        uint64_t r11_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = *(r9_10 + rax_368)
                        int32_t* r9_11 = zx.q(arg8[0].d)
                        uint64_t r10_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(var_6a0_2[0].o, 3))
                        var_6a0_2[0].o = *(r9_11 + rax_368)
                        int32_t* r9_12 = zx.q(arg10[0])
                        float* rcx_95 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3))
                        arg13[0].o = *(r9_12 + rax_368)
                        void* rax_369 = r8_5 + rdx_102
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_358 + rax_369), 0x10)
                        zmm1[0].o = var_840_4[0].o
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_47 + rsi_59), 0x30)
                        var_840_4[0].o = zmm1[0].o
                        arg16[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, *(rbx_73 + rax_369), 0x10)
                        zmm1[0].o = var_860_3[0].o
                        arg15[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_19 + rsi_59), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r14_16 + rax_369), 0x10)
                        zmm1[0].o = var_910_1.o
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_18 + rsi_59), 0x30)
                        var_860_3[0].o = zmm1[0].o
                        float* rdx_104 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                        zmm1[0].o = var_7f0.o
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_95 + rsi_59), 0x30)
                        float* rbx_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                        float* r9_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                        var_6a0_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_6a0_2[0].o, 
                            *(rdx_104 + rax_369), 0x10)
                        float* rdx_105 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
                        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                            *(rdx_105 + rax_369), 0x10)
                        float* rax_370 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        float* rdx_106 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        int64_t rsi_60 = sx.q(var_940_2[0].d)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r8_5 + rsi_60), 0x20)
                        void* rsi_61 = r8_5 + rsi_60
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_880_3[0].q + rsi_61), 0x20)
                        int64_t rcx_97 = sx.q(var_8a0_1.d)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r8_5 + rcx_97), 0x30)
                        arg10 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                        void* rcx_98 = r8_5 + rcx_97
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_6a0_2[0] + rcx_98), 0x30)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, *(rcx_94 + rsi_61), 0x20)
                        arg16 = var_6c0_2
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r13_6 + rcx_98), 0x30)
                        r13 = var_668
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_10 + rsi_61), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_13 + rcx_98), 0x30)
                        var_6a0_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_6a0_2[0].o, 
                            *(rbx_74 + rsi_61), 0x20)
                        var_6a0_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_6a0_2[0].o, 
                            *(r9_13 + rcx_98), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rax_370 + rsi_61), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_106 + rcx_98), 0x30)
                        int64_t rax_371 = zmm2[0].q
                        int64_t rcx_99 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_107 = zmm2[0].q
                        int64_t rbx_75 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = zx.o(*(r8_5 + rax_371))
                        int64_t rax_372 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r8_5 + rcx_99), 1)
                        int64_t rcx_100 = arg9[0].q
                        zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r8_5 + rdx_107), 2)
                        int64_t rdx_108 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r8_5 + rbx_75), 3)
                        int64_t rbx_76 = zmm1[0].q
                        zmm1[0].o = zx.o(*(r8_5 + rcx_100))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_5 + rax_372), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_5 + rbx_76), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_5 + rdx_108), 3)
                        arg13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_660_2, 1)
                        arg12 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_840_4[0].o, 1)
                        arg5 = _mm256_insertf128_ps(arg5, arg15[0].o, 1)
                        arg7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_6a0_2, var_860_3[0].o, 1)
                        arg9 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        zmm5 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), 
                            data_143442420)
                        arg8[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg6[0].o = data_143442490
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        zmm0 = __vdivps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm0[0].o, 1)), 
                            data_1434424a0)
                        arg6[0].o = data_143442480
                        zmm5[0].o &= arg6[0].o
                        arg6[0].o &= arg8[0].o
                        arg8[0].o = data_143442440
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg8[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                        arg6 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm5[0].o, 1))
                        zmm5 = data_143442460
                        arg6 = _mm256_div_ps(arg6, zmm5)
                        zmm0 = _mm256_add_ps(arg10, _mm256_mul_ps(arg5, zmm0))
                        arg5 = _mm256_mul_ps(arg7, arg6)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1)), zmm5)
                        zmm2 = _mm256_add_ps(arg13, arg5)
                        arg13 = var_8c0_1
                        var_440_1 = _mm256_maskstore_ps(arg11, zmm0)
                        zmm0 = _mm256_mul_ps(arg9, zmm1)
                        var_420_1 = _mm256_maskstore_ps(arg11, zmm2)
                        zmm0 = _mm256_add_ps(arg12, zmm0)
                    case 4, 5, 6
                        goto label_1402d4376
            
            float var_400_1[0x8] = _mm256_maskstore_ps(arg11, zmm0)
            arg7 = var_900_1
            arg5 = var_5c0_1
            arg6 = var_5a0_1
            zmm5 = var_580_1
            zmm0 = _mm256_sub_ps(var_440_1, arg5)
            zmm1 = _mm256_sub_ps(var_420_1, arg6)
            zmm2 = _mm256_sub_ps(var_400_1, zmm5)
            zmm0 = _mm256_mul_ps(arg7, zmm0)
            zmm1 = _mm256_mul_ps(arg7, zmm1)
            zmm2 = _mm256_mul_ps(arg7, zmm2)
            var_5c0_1 = _mm256_maskstore_ps(arg11, _mm256_add_ps(arg5, zmm0))
            var_5a0_1 = _mm256_maskstore_ps(arg11, _mm256_add_ps(arg6, zmm1))
            zmm0 = _mm256_add_ps(zmm5, zmm2)
            var_580_1 = _mm256_maskstore_ps(arg11, zmm0)
        
        zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg16, var_6e0_1, 1)
        zmm2[0].o = var_5c0_1[0].o
        arg5[0].o = var_5c0_1[4].o
        arg6[0].o = var_5a0_1[0].o
        zmm5[0].o = var_5a0_1[2].o
        arg7[0].o = var_580_1[0].o
        arg8[0].o = var_580_1[4].o
        arg9[0].o = zx.o(0)
        arg11[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        arg10[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg7[0].o, 0x28)
        int128_t var_2a0 = arg6[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
        int128_t var_290_1 = zmm0[0].o
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 0xa8)
        int128_t var_280_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
        int128_t var_270_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        arg5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg8[0].o, 0x28)
        int128_t var_260_1 = zmm5[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg8[0].o, 0xa8)
        int128_t var_240_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0 = var_8e0_1.32
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
        zmm0 = _mm256_insertf128_ps(zmm0, arg14[0].o, 1)
        i_4 = zx.q(_mm256_movemask_ps(zmm0))
        
        do
            uint64_t rcx_101
            uint64_t rflags_2
            
            if (i_4 == 0)
                rcx_101 = 0x40
            else
                rcx_101, rflags_2 = _bit_scan_forward(i_4)
            float var_140[0x8] = zmm1
            zmm0[0].o = (&var_2a0)[rcx_101]
            *(r13 + sx.q(var_140[zx.q(rcx_101.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            i_4 &= rol.q(-2, rcx_101.b)
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(rcx_1)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_6c0_1[0x4] = zmm0
    zmm0[0].o = 3
    zmm1[0].o = zx.o(arg4)
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_160_1[0x4] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int32_t rcx_2
    rcx_2.b = zmm0[0].o f>= zmm2[0]
    zmm0[0].o = zx.o(neg.d(rcx_2))
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_2e0 = zmm0
    zmm0[0].o = arg5[0].o
    zmm0[0].d = float.s(arg17 - 1)
    zmm0[0].o = zmm0[0].o f* zmm2[0]
    int32_t rcx_4 = int.d(zmm0[0].d)
    r10 = 0
    
    if (rcx_4 s< 0)
        rcx_4 = 0
    
    zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0)
    
    if (arg17 - 2 s<= rcx_4)
        rcx_4 = arg17 - 2
    
    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    float var_180_1[0x8] = zmm1
    zmm1[0].o = zx.o(rcx_4)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
    arg15 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_1a0_1[0x4] = zmm0
    int32_t rax_6
    rax_6.b = rdx.d == 3
    zmm0[0].o = zx.o(neg.d(rax_6))
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_300 = zmm0
    arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
    int32_t* var_7b0_1 = arg3
    int64_t var_8a0
    var_8a0.32 = arg15
    
    do
        int64_t rax_15 = sx.q((r10 << 3).d)
        arg7[0].o = *(arg2 + rax_15)
        arg8[0].o = *(arg2 + rax_15 + 0x10)
        zmm2[0].o = *(arg2 + rax_15 + 0x20)
        zmm0[0].o = *(arg2 + rax_15 + 0x30)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg8[0].o, 0xdd)
        void* var_700
        var_700.o = zmm0[0].o
        int64_t var_780
        var_780.o = zmm2[0].o
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0xdd)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 4)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 4)
        int64_t rax_17 = sx.q(zmm1[0])
        int32_t temp0_37 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int64_t r15_1 = sx.q(*(arg3 + rax_17))
        int64_t rdx_1 = sx.q(temp0_37)
        int32_t temp0_38 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int64_t r12_1 = sx.q(*(arg3 + rdx_1))
        int64_t rbx_1 = sx.q(temp0_38)
        int32_t temp0_39 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        int64_t r14_1 = sx.q(*(arg3 + rbx_1))
        int64_t r11_1 = sx.q(temp0_39)
        int64_t rdi_2 = sx.q(zmm0[0].d)
        int64_t rcx_9 = sx.q(*(arg3 + rdi_2))
        zmm1[0].o = zx.o(*(arg3 + rax_17 + 4))
        int64_t rsi_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rdx_1 + 4), 1)
        int64_t rax_19 = sx.q(*(arg3 + rsi_1))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rbx_1 + 4), 2)
        int64_t rdx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm2[0].o = zx.o(*(arg3 + rdi_2 + 4))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rsi_1 + 4), 1)
        int64_t rsi_2 = sx.q(*(arg3 + rdx_3))
        int64_t rdi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rdx_3 + 4), 2)
        int64_t rbx_3 = sx.q(*(arg3 + rdi_3))
        zmm2[0].o = zx.o(rcx_9.d)
        var_620[0].q = rax_19
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_19.d, 1)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rsi_2.d, 2)
        arg11[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rbx_3.d, 3)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + r11_1 + 4), 3)
        int64_t r11_2 = sx.q(*(arg3 + r11_1))
        zmm2[0].o = zx.o(r15_1.d)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, r12_1.d, 1)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, r14_1.d, 2)
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, r11_2.d, 3)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdi_3 + 4), 3)
        arg16[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
        double var_7e0_1[0x4] = zmm0
        var_540 = arg6
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
        zmm0[0].o = data_1434422d0
        arg6[0].o = zmm0[0].o
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm0 = __vorps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg6, zmm0[0].o, 1), var_2e0)
        double var_860[0x4]
        
        if (_mm256_movemask_ps(zmm0) != 0)
            arg14 = _mm256_blendv_ps(arg14, arg9, zmm0)
            var_860 = _mm256_blendv_ps(var_860, arg9, zmm0)
        
        arg6 = var_6c0_1
        arg9[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
        zmm5 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        arg12 = _mm256_cmp_ps(arg12, arg12, 0xf)
        float var_640_1[0x8] = arg12
        zmm0 = _mm256_xor_ps(zmm0, arg12)
        int32_t temp0_73 = _mm256_movemask_ps(zmm0)
        int128_t var_880_1 = arg13[0].o
        double var_810_1[0x2] = arg11[0].o
        int64_t var_800
        var_800.o = arg9[0].o
        double var_940[0x4]
        float* var_910
        int64_t var_8e0
        int64_t var_720[0x2]
        int32_t var_6e0[0x4]
        
        if (temp0_73 == 0)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            var_8c0 = zmm0
            arg15 = var_860
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        else
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            var_8c0 = arg12
            var_910.o = arg6[0].o
            var_720 = arg5[0].o
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
            arg12 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            arg5[0].o = arg18
            
            if (arg5[0].o f>= 1f)
                arg14 = _mm256_blendv_ps(arg14, arg12, zmm0)
                arg15 = _mm256_blendv_ps(var_860, arg12, zmm0)
                arg5[0].o = var_720
                arg6[0].o = var_910.o
                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            else
                int64_t var_480
                var_480.32 = zmm5
                int32_t var_500
                var_500.o = arg8[0].o
                int64_t var_4f0
                var_4f0.o = arg7[0].o
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_6c0_1[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                arg7 = var_160_1
                int64_t var_320
                var_320.32 = arg16
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg16[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_7e0_1[0].o)
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_720)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_910.o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                arg5 = _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg12), 
                    var_180_1))
                zmm5[0].o = zx.o(0)
                arg6[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                arg16[0].o = zx.o(0)
                arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                arg6[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
                var_6e0.32 = arg12
                zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                var_8c0[0].o = zmm5[0].o
                arg5[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                arg12 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                arg5 = data_143442a40
                zmm2 = _mm256_and_ps(zmm2, arg5)
                uint64_t var_7a0
                var_7a0.32 = zmm2
                zmm5 = _mm256_and_ps(zmm1, arg5)
                var_8e0.32 = zmm5
                float var_840_1[0x8] = arg14
                int64_t var_3a0
                var_3a0.32 = arg12
                int64_t var_750
                int64_t var_740
                int32_t var_730
                int32_t var_3c0[0x4]
                
                if (arg17 s< 0x100)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    arg8[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    var_900[0].o = arg5[0].o
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    char rcx_12 = temp0_73.b
                    int128_t var_2b0
                    arg7[0].o = var_2b0
                    
                    if ((rcx_12 & 1) != 0)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm1[0].q), 0)
                    
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                    
                    if ((rcx_12 & 2) != 0)
                        uint32_t rax_24 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_24, 1)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg6 = var_7a0.32
                    var_940[0].o = __vextractf128_memdq_ymmdq_immb(arg6[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                    
                    if ((rcx_12 & 4) == 0)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_940[0].o)
                        
                        if ((rcx_12 & 8) != 0)
                            goto label_1402cfb5f
                        
                        goto label_1402cf42b
                    
                    arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*arg6[0]), 2)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_940[0].o)
                    
                    if ((rcx_12 & 8) != 0)
                    label_1402cfb5f:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint32_t rax_54 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_54, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rcx_12 & 0x10) == 0)
                            goto label_1402cf43a
                        
                        goto label_1402cfb8a
                    
                label_1402cf42b:
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rcx_12 & 0x10) == 0)
                    label_1402cf43a:
                        
                        if ((rcx_12 & 0x20) != 0)
                            goto label_1402cfb9e
                        
                        goto label_1402cf443
                    
                label_1402cfb8a:
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm1[0].q), 4)
                    
                    if ((rcx_12 & 0x20) != 0)
                    label_1402cfb9e:
                        uint32_t rax_58 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_58, 5)
                        
                        if ((rcx_12 & 0x40) == 0)
                            goto label_1402cf44c
                        
                        goto label_1402cfbaf
                    
                label_1402cf443:
                    
                    if ((rcx_12 & 0x40) != 0)
                    label_1402cfbaf:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm2[0].q), 6)
                        
                        if (temp0_73.b s< 0)
                        label_1402cfbcb:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_62 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_62, 7)
                    else
                    label_1402cf44c:
                        
                        if (temp0_73.b s< 0)
                            goto label_1402cfbcb
                    
                    zmm1[0].o = arg7[0].o & data_142fc92e0
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    arg14[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                    arg6[0].o ^= arg10[0].o
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg15[0].o)
                    zmm5[0].o ^= arg10[0].o
                    zmm1 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                    var_3c0.32 = zmm1
                    arg6 = _mm256_and_ps(zmm1, zmm0)
                    bool cond:12_1 = _mm256_movemask_ps(arg6) == 0
                    var_2b0 = arg7[0].o
                    int32_t var_2c0_1[0x4] = arg8[0].o
                    
                    if (cond:12_1)
                        zmm5 = arg12
                        arg9 = var_7a0.32
                        zmm1 = var_8e0.32
                    else
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                        arg5[0].o ^= arg10[0].o
                        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        zmm2[0].o ^= arg10[0].o
                        zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        zmm1 = var_6e0.32
                        zmm5 = _mm256_blendv_ps(arg12, zmm1, zmm2)
                        arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
                        arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg10[0].o)
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, var_8c0[0].o)
                        arg7[0].o ^= arg10[0].o
                        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg8[0].o ^= arg10[0].o
                        arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        zmm2 = _mm256_and_ps(zmm2, arg7)
                        arg8 = _mm256_and_ps(zmm2, zmm0)
                        int32_t j = _mm256_movemask_ps(arg8)
                        
                        if (j == 0)
                            arg9 = var_7a0.32
                            zmm1 = var_8e0.32
                        else
                            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            arg9 = var_7a0.32
                            zmm1 = var_8e0.32
                            
                            do
                                arg11 = arg5
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_900[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                arg15 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                char temp0_181 = _mm256_movemask_ps(arg8)
                                int128_t var_6a0
                                uint32_t rax_39
                                
                                if ((temp0_181 & 1) != 0)
                                    arg6[0].o = var_6a0
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*arg15[0]), 0)
                                    arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                    
                                    if ((temp0_181 & 2) != 0)
                                        rax_39 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_39, 1)
                                else
                                    arg6[0].o = var_6a0
                                    arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                    
                                    if ((temp0_181 & 2) != 0)
                                        rax_39 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_39, 1)
                                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
                                
                                if ((temp0_181 & 4) != 0)
                                    arg7[0].o = arg6[0].o
                                    arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    arg6[0].o = arg7[0].o
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, 
                                        zx.d(*arg6[0]), 2)
                                    arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, var_940[0].o)
                                    
                                    if ((temp0_181 & 8) != 0)
                                    label_1402cf6a3:
                                        zmm1[0].o = arg6[0].o
                                        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                        int64_t rax_40 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        arg6[0].o = zmm1[0].o
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*rax_40), 3)
                                else
                                    arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, var_940[0].o)
                                    
                                    if ((temp0_181 & 8) != 0)
                                        goto label_1402cf6a3
                                
                                arg15 = var_8a0.32
                                arg13[0].o = var_880_1
                                arg8 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                                
                                if ((temp0_181 & 0x10) != 0)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*arg8[0]), 4)
                                    
                                    if ((temp0_181 & 0x20) != 0)
                                    label_1402cf58d:
                                        uint32_t rax_31 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_31, 5)
                                        
                                        if ((temp0_181 & 0x40) == 0)
                                            goto label_1402cf6f5
                                        
                                        goto label_1402cf59f
                                else if ((temp0_181 & 0x20) != 0)
                                    goto label_1402cf58d
                                
                                if ((temp0_181 & 0x40) != 0)
                                label_1402cf59f:
                                    zmm1[0].o = arg6[0].o
                                    arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    arg6[0].o = zmm1[0].o
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*arg6[0]), 6)
                                    zmm1 = var_8e0.32
                                    
                                    if (temp0_181 s< 0)
                                    label_1402cf5cc:
                                        zmm1[0].o = arg6[0].o
                                        arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        int64_t rax_34 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        arg6[0].o = zmm1[0].o
                                        zmm1 = var_8e0.32
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*rax_34), 7)
                                else
                                label_1402cf6f5:
                                    zmm1 = var_8e0.32
                                    
                                    if (temp0_181 s< 0)
                                        goto label_1402cf5cc
                                
                                var_6a0 = arg6[0].o
                                arg6[0].o &= data_142fc92e0
                                arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zx.o(0))
                                arg6[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0])
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
                                arg6 = _mm256_and_ps(_mm256_insertf128_ps(arg6, arg7[0].o, 1), zmm2)
                                arg7[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(_mm256_and_ps(arg6, zmm0)) != j)
                                    arg7 = _mm256_xor_ps(arg6, zmm2)
                                
                                zmm5 = _mm256_blendv_ps(zmm5, arg12, arg6)
                                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
                                arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg10[0].o)
                                arg5 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                                zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm2[0].o, var_8c0[0].o)
                                zmm2[0].o ^= arg10[0].o
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_6e0)
                                arg6[0].o ^= arg10[0].o
                                zmm2 = _mm256_and_ps(_mm256_insertf128_ps(arg6, zmm2[0].o, 1), arg7)
                                arg8 = _mm256_and_ps(zmm2, zmm0)
                                j = _mm256_movemask_ps(arg8)
                                arg12 = arg11
                            while (j != 0)
                    
                    arg5 = var_3c0.32
                    zmm2 = _mm256_andnot_ps(arg5, zmm0)
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        arg6 = __vxorps_ymmqq_ymmqq_memqq(arg5, var_640_1)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        zmm5 = _mm256_blendv_ps(zmm5, zmm2, arg6)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg10[0].o, var_2c0_1)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg10[0].o, var_3a0.o)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                        arg16[0].o = zx.o(0)
                        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                        arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        arg11 = _mm256_and_ps(arg7, arg6)
                        arg8 = _mm256_and_ps(arg11, zmm0)
                        int32_t j_1 = _mm256_movemask_ps(arg8)
                        
                        if (j_1 != 0)
                            zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            
                            do
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_900[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                arg12 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                char temp0_364 = _mm256_movemask_ps(arg8)
                                
                                if ((temp0_364 & 1) == 0)
                                    arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                    
                                    if ((temp0_364 & 2) != 0)
                                        goto label_1402cfd37
                                    
                                    goto label_1402cfe47
                                
                                arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, 
                                    zx.d(*arg12[0].q), 0)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((temp0_364 & 2) != 0)
                                label_1402cfd37:
                                    uint32_t rax_67 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                    arg13[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_67, 1)
                                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
                                    
                                    if ((temp0_364 & 4) == 0)
                                        goto label_1402cfe5a
                                    
                                    goto label_1402cfd52
                                
                            label_1402cfe47:
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
                                
                                if ((temp0_364 & 4) == 0)
                                label_1402cfe5a:
                                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                                    
                                    if ((temp0_364 & 8) != 0)
                                        goto label_1402cfd75
                                    
                                    goto label_1402cfe6a
                                
                            label_1402cfd52:
                                arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                arg13[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*arg7[0]), 2)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                                
                                if ((temp0_364 & 8) != 0)
                                label_1402cfd75:
                                    arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    uint32_t rax_71 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg13[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_71, 3)
                                    arg8 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                                    
                                    if ((temp0_364 & 0x10) == 0)
                                        goto label_1402cfe7a
                                    
                                    goto label_1402cfda1
                                
                            label_1402cfe6a:
                                arg8 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                                
                                if ((temp0_364 & 0x10) == 0)
                                label_1402cfe7a:
                                    
                                    if ((temp0_364 & 0x20) != 0)
                                        goto label_1402cfdb6
                                    
                                    goto label_1402cfe84
                                
                            label_1402cfda1:
                                arg13[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*arg8[0]), 4)
                                
                                if ((temp0_364 & 0x20) != 0)
                                label_1402cfdb6:
                                    uint32_t rax_75 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                    arg13[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_75, 5)
                                    
                                    if ((temp0_364 & 0x40) == 0)
                                        goto label_1402cfe8e
                                    
                                    goto label_1402cfdc8
                                
                            label_1402cfe84:
                                
                                if ((temp0_364 & 0x40) != 0)
                                label_1402cfdc8:
                                    arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, 
                                        zx.d(*arg6[0]), 6)
                                    
                                    if (temp0_364 s< 0)
                                    label_1402cfde4:
                                        arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        uint32_t rax_79 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                        arg13[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_79, 7)
                                else
                                label_1402cfe8e:
                                    
                                    if (temp0_364 s< 0)
                                        goto label_1402cfde4
                                
                                arg6[0].o = arg13[0].o & data_142fc92e0
                                arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg16[0].o)
                                arg6[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0])
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                                arg7[0].o ^= arg10[0].o
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
                                arg6[0].o ^= arg10[0].o
                                arg6 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg6, arg7[0].o, 1), arg11)
                                arg7[0].o = zx.o(0)
                                arg8 = _mm256_and_ps(arg6, zmm0)
                                
                                if (_mm256_movemask_ps(arg8) != j_1)
                                    arg7 = _mm256_xor_ps(arg6, arg11)
                                
                                zmm5 = _mm256_blendv_ps(zmm5, zmm2, arg6)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                                zmm2 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                                arg16[0].o = zx.o(0)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                                arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                arg11 = _mm256_and_ps(arg5, arg7)
                                arg8 = _mm256_and_ps(arg11, zmm0)
                                j_1 = _mm256_movemask_ps(arg8)
                            while (j_1 != 0)
                    
                    arg12[0].o = zx.o(0)
                    arg11[0].o = var_730.o
                    int128_t var_510
                    arg8[0].o = var_510
                    arg6 = _mm256_blendv_ps(var_840_1, zmm5, zmm0)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    arg7 = arg6
                    zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_8e0.o)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rcx_12 & 1) == 0)
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        
                        if ((rcx_12 & 2) != 0)
                            goto label_1402d0190
                        
                        goto label_1402cff8e
                    
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm2[0].q), 0)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                    
                    if ((rcx_12 & 2) == 0)
                    label_1402cff8e:
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        
                        if ((rcx_12 & 4) != 0)
                            zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm5[0].q), 2)
                    else
                    label_1402d0190:
                        uint16_t rax_93[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_93, 1)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        
                        if ((rcx_12 & 4) != 0)
                            zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm5[0].q), 2)
                    
                    zmm5 = var_480.32
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                    
                    if ((rcx_12 & 8) == 0)
                        zmm2 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        
                        if ((rcx_12 & 0x10) != 0)
                            goto label_1402d01da
                        
                        goto label_1402cffdf
                    
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    uint16_t rax_95[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_95, 3)
                    zmm2 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    
                    if ((rcx_12 & 0x10) != 0)
                    label_1402d01da:
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm2[0].q), 4)
                        
                        if ((rcx_12 & 0x20) == 0)
                            goto label_1402cffe8
                        
                        goto label_1402d01ee
                    
                label_1402cffdf:
                    
                    if ((rcx_12 & 0x20) == 0)
                    label_1402cffe8:
                        
                        if ((rcx_12 & 0x40) != 0)
                            goto label_1402d01ff
                        
                        goto label_1402cfff1
                    
                label_1402d01ee:
                    uint16_t rax_99[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_99, 5)
                    
                    if ((rcx_12 & 0x40) == 0)
                    label_1402cfff1:
                        
                        if (temp0_73.b s< 0)
                        label_1402d021b:
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            uint16_t rax_103[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_103, 7)
                    else
                    label_1402d01ff:
                        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg5[0].q), 6)
                        
                        if (temp0_73.b s< 0)
                            goto label_1402d021b
                    
                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    arg15 = _mm256_blendv_ps(var_860, zmm1, zmm0)
                    zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_8c0[0].o)
                    arg5 = var_6e0.32
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                    zmm1 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), zmm0)
                    bool cond:17_1 = _mm256_movemask_ps(zmm1) == 0
                    var_510 = arg8[0].o
                    
                    if (not(cond:17_1))
                        arg15 = _mm256_blendv_ps(arg15, arg5, zmm1)
                    
                    arg8[0].o = var_740.o
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0])
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0.o)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    
                    if ((rcx_12 & 1) != 0)
                        arg11[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*zmm1[0].q), 0)
                    
                    arg14 = arg7
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    
                    if ((rcx_12 & 2) == 0)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        
                        if ((rcx_12 & 4) != 0)
                            goto label_1402d0254
                        
                        goto label_1402d00bc
                    
                    uint32_t rax_105 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, rax_105, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                    
                    if ((rcx_12 & 4) != 0)
                    label_1402d0254:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg11[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*arg5[0].q), 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                        
                        if ((rcx_12 & 8) == 0)
                            goto label_1402d00cb
                        
                        goto label_1402d0276
                    
                label_1402d00bc:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                    
                    if ((rcx_12 & 8) == 0)
                    label_1402d00cb:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rcx_12 & 0x10) != 0)
                            goto label_1402d02a1
                        
                        goto label_1402d00da
                    
                label_1402d0276:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint32_t rax_109 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, rax_109, 3)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rcx_12 & 0x10) != 0)
                    label_1402d02a1:
                        arg11[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*zmm1[0].q), 4)
                        zmm2[0].o = var_510
                        arg5[0].o = zmm2[0].o & data_142fc92e0
                        
                        if ((rcx_12 & 0x20) == 0)
                            goto label_1402d00f4
                        
                        goto label_1402d02c6
                    
                label_1402d00da:
                    zmm2[0].o = var_510
                    arg5[0].o = zmm2[0].o & data_142fc92e0
                    
                    if ((rcx_12 & 0x20) != 0)
                    label_1402d02c6:
                        uint32_t rax_113 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, rax_113, 5)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        
                        if ((rcx_12 & 0x40) != 0)
                            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg11[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*arg6[0]), 6)
                    else
                    label_1402d00f4:
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        
                        if ((rcx_12 & 0x40) != 0)
                            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg11[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*arg6[0]), 6)
                    
                    arg6[0].o = var_910.o
                    arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg16[0].o)
                    var_880_1 = arg13[0].o
                    
                    if (temp0_73.b s< 0)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint16_t rax_89[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, rax_89, 7)
                    
                    arg13[0].o = var_750.o
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    zmm2[0].o = arg11[0].o & data_142fc92e0
                    arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg16[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                else
                    zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    var_3c0 = zmm1[0].o
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    var_900[0].o = zmm1[0].o
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                    char rcx_11 = temp0_73.b
                    int128_t var_3d0
                    int64_t rdx_5
                    
                    if ((rcx_11 & 1) != 0)
                        zmm1[0].o = var_3d0
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 0)
                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                        
                        if ((rcx_11 & 2) != 0)
                            rdx_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_5, 1)
                    else
                        zmm1[0].o = var_3d0
                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                        
                        if ((rcx_11 & 2) != 0)
                            rdx_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_5, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5 = var_7a0.32
                    var_940[0].o = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                    
                    if ((rcx_11 & 4) == 0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                        
                        if ((rcx_11 & 8) != 0)
                            goto label_1402cfc03
                        
                        goto label_1402cf7ff
                    
                    arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg7[0], 2)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                    
                    if ((rcx_11 & 8) != 0)
                    label_1402cfc03:
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_8, 3)
                        zmm2 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        
                        if ((rcx_11 & 0x10) == 0)
                            goto label_1402cf80e
                        
                        goto label_1402cfc28
                    
                label_1402cf7ff:
                    zmm2 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    
                    if ((rcx_11 & 0x10) == 0)
                    label_1402cf80e:
                        
                        if ((rcx_11 & 0x20) != 0)
                            goto label_1402cfc36
                        
                        goto label_1402cf817
                    
                label_1402cfc28:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                    
                    if ((rcx_11 & 0x20) != 0)
                    label_1402cfc36:
                        int64_t rdx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_10, 5)
                        
                        if ((rcx_11 & 0x40) == 0)
                            goto label_1402cf820
                        
                        goto label_1402cfc4a
                    
                label_1402cf817:
                    
                    if ((rcx_11 & 0x40) != 0)
                    label_1402cfc4a:
                        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg5[0].q, 6)
                        
                        if (temp0_73.b s< 0)
                        label_1402cfc63:
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rdx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_12, 7)
                    else
                    label_1402cf820:
                        
                        if (temp0_73.b s< 0)
                            goto label_1402cfc63
                    
                    arg9 = var_7a0.32
                    zmm2 = var_6e0.32
                    arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    var_3d0 = zmm1[0].o
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    arg10[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg7[0].o ^= zmm1[0].o
                    arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
                    arg8[0].o ^= zmm1[0].o
                    zmm5 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                    arg7 = _mm256_and_ps(zmm5, zmm0)
                    var_7a0.32 = zmm5
                    
                    if (_mm256_movemask_ps(arg7) == 0)
                        arg13 = arg12
                    else
                        arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                        arg6[0].o ^= zmm1[0].o
                        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg15[0].o)
                        arg5[0].o ^= zmm1[0].o
                        arg7 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        arg13 = _mm256_blendv_ps(arg12, zmm2, arg7)
                        arg5[0].o = var_3c0
                        arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, var_8c0[0].o)
                        arg8[0].o ^= zmm1[0].o
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        zmm5[0].o ^= zmm1[0].o
                        zmm5 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                        arg11 = _mm256_and_ps(arg7, zmm5)
                        arg8 = _mm256_and_ps(arg11, zmm0)
                        int32_t j_2 = _mm256_movemask_ps(arg8)
                        
                        if (j_2 != 0)
                            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            zmm1 = var_8e0.32
                            
                            do
                                arg14 = arg5
                                arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                                arg15 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                char temp0_273 = _mm256_movemask_ps(arg8)
                                int128_t var_660
                                zmm1[0].o = var_660
                                
                                if ((temp0_273 & 1) == 0)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                    
                                    if ((temp0_273 & 2) != 0)
                                        goto label_1402cf930
                                    
                                    goto label_1402cfa4d
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg15[0], 0)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                
                                if ((temp0_273 & 2) != 0)
                                label_1402cf930:
                                    int64_t rax_43 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_43, 1)
                                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
                                    
                                    if ((temp0_273 & 4) == 0)
                                        goto label_1402cfa60
                                    
                                    goto label_1402cf94e
                                
                            label_1402cfa4d:
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
                                
                                if ((temp0_273 & 4) == 0)
                                label_1402cfa60:
                                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                                    
                                    if ((temp0_273 & 8) != 0)
                                        goto label_1402cf96e
                                    
                                    goto label_1402cfa70
                                
                            label_1402cf94e:
                                zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm5[0].q, 2)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                                
                                if ((temp0_273 & 8) != 0)
                                label_1402cf96e:
                                    zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    int64_t rax_45 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_45, 3)
                                    arg15 = var_8a0.32
                                    arg8 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                                    
                                    if ((temp0_273 & 0x10) == 0)
                                        goto label_1402cfa89
                                    
                                    goto label_1402cf99d
                                
                            label_1402cfa70:
                                arg15 = var_8a0.32
                                arg8 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                                
                                if ((temp0_273 & 0x10) == 0)
                                label_1402cfa89:
                                    
                                    if ((temp0_273 & 0x20) != 0)
                                        goto label_1402cf9ac
                                    
                                    goto label_1402cfa93
                                
                            label_1402cf99d:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg8[0], 4)
                                
                                if ((temp0_273 & 0x20) != 0)
                                label_1402cf9ac:
                                    int64_t rax_47 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_47, 5)
                                    
                                    if ((temp0_273 & 0x40) == 0)
                                        goto label_1402cfa9d
                                    
                                    goto label_1402cf9c1
                                
                            label_1402cfa93:
                                
                                if ((temp0_273 & 0x40) != 0)
                                label_1402cf9c1:
                                    arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0], 6)
                                    
                                    if (temp0_273 s< 0)
                                    label_1402cf9da:
                                        arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        int64_t rax_49 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_49, 7)
                                else
                                label_1402cfa9d:
                                    
                                    if (temp0_273 s< 0)
                                        goto label_1402cf9da
                                
                                arg6[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                                var_660 = zmm1[0].o
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg15[0].o)
                                arg6 =
                                    _mm256_and_ps(_mm256_insertf128_ps(zmm5, arg6[0].o, 1), arg11)
                                arg7[0].o = zx.o(0)
                                zmm5 = _mm256_and_ps(arg6, zmm0)
                                
                                if (_mm256_movemask_ps(zmm5) != j_2)
                                    arg7 = _mm256_xor_ps(arg6, arg11)
                                
                                arg13 = _mm256_blendv_ps(arg13, arg12, arg6)
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                                arg5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_8c0[0].o)
                                arg6[0].o ^= zmm1[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                zmm5[0].o ^= zmm1[0].o
                                arg6 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                arg11 = _mm256_and_ps(arg6, arg7)
                                arg8 = _mm256_and_ps(arg11, zmm0)
                                j_2 = _mm256_movemask_ps(arg8)
                                arg12 = arg14
                                zmm1 = var_8e0.32
                            while (j_2 != 0)
                    
                    zmm1 = var_7a0.32
                    arg5 = _mm256_andnot_ps(zmm1, zmm0)
                    int128_t var_520
                    
                    if (_mm256_movemask_ps(arg5) == 0)
                        arg12[0].o = zx.o(0)
                        arg14 = var_840_1
                        arg11[0].o = var_730.o
                        zmm1[0].o = var_520
                    else
                        zmm5 = __vxorps_ymmqq_ymmqq_memqq(zmm1, var_640_1)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg13 = _mm256_blendv_ps(arg13, zmm1, zmm5)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_3c0)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_3a0.o)
                        zmm1[0].o = zx.o(0)
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                        arg16[0].o = zx.o(0)
                        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zx.o(0))
                        arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        arg14 = _mm256_and_ps(arg7, zmm5)
                        arg8 = _mm256_and_ps(arg14, zmm0)
                        int32_t j_3 = _mm256_movemask_ps(arg8)
                        
                        if (j_3 == 0)
                            zmm1[0].o = var_520
                        else
                            arg11 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            zmm1[0].o = var_520
                            
                            do
                                arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_8e0.o)
                                arg12 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                char temp0_511 = _mm256_movemask_ps(arg8)
                                
                                if ((temp0_511 & 1) == 0)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                    
                                    if ((temp0_511 & 2) != 0)
                                        goto label_1402d038e
                                    
                                    goto label_1402d04a5
                                
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg12[0].q, 0)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                
                                if ((temp0_511 & 2) != 0)
                                label_1402d038e:
                                    int64_t rax_115 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_115, 1)
                                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
                                    
                                    if ((temp0_511 & 4) == 0)
                                        goto label_1402d04b8
                                    
                                    goto label_1402d03ac
                                
                            label_1402d04a5:
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
                                
                                if ((temp0_511 & 4) == 0)
                                label_1402d04b8:
                                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                                    
                                    if ((temp0_511 & 8) != 0)
                                        goto label_1402d03cc
                                    
                                    goto label_1402d04c8
                                
                            label_1402d03ac:
                                zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm5[0].q, 2)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                                
                                if ((temp0_511 & 8) != 0)
                                label_1402d03cc:
                                    zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    int64_t rax_117 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_117, 3)
                                    arg8 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                                    
                                    if ((temp0_511 & 0x10) == 0)
                                        goto label_1402d04d8
                                    
                                    goto label_1402d03f2
                                
                            label_1402d04c8:
                                arg8 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                                
                                if ((temp0_511 & 0x10) == 0)
                                label_1402d04d8:
                                    
                                    if ((temp0_511 & 0x20) != 0)
                                        goto label_1402d0401
                                    
                                    goto label_1402d04e2
                                
                            label_1402d03f2:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg8[0], 4)
                                
                                if ((temp0_511 & 0x20) != 0)
                                label_1402d0401:
                                    int64_t rax_119 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_119, 5)
                                    
                                    if ((temp0_511 & 0x40) == 0)
                                        goto label_1402d04ec
                                    
                                    goto label_1402d0416
                                
                            label_1402d04e2:
                                
                                if ((temp0_511 & 0x40) != 0)
                                label_1402d0416:
                                    arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0], 6)
                                    
                                    if (temp0_511 s< 0)
                                    label_1402d042f:
                                        arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        int64_t rax_121 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_121, 7)
                                else
                                label_1402d04ec:
                                    
                                    if (temp0_511 s< 0)
                                        goto label_1402d042f
                                
                                arg6[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg16[0].o)
                                zmm2[0].o = zmm1[0].o
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg6[0].o ^= zmm1[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg15[0].o)
                                zmm5[0].o ^= zmm1[0].o
                                arg6 =
                                    _mm256_and_ps(_mm256_insertf128_ps(zmm5, arg6[0].o, 1), arg14)
                                arg7[0].o = zx.o(0)
                                zmm5 = _mm256_and_ps(arg6, zmm0)
                                
                                if (_mm256_movemask_ps(zmm5) != j_3)
                                    arg7 = _mm256_xor_ps(arg6, arg14)
                                
                                arg13 = _mm256_blendv_ps(arg13, arg11, arg6)
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                                arg11 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                zmm1[0].o = zx.o(0)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                                arg16[0].o = zx.o(0)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zx.o(0))
                                arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                arg14 = _mm256_and_ps(arg5, arg7)
                                arg8 = _mm256_and_ps(arg14, zmm0)
                                j_3 = _mm256_movemask_ps(arg8)
                                zmm1[0].o = zmm2[0].o
                            while (j_3 != 0)
                        
                        arg12[0].o = zx.o(0)
                        arg14 = var_840_1
                        arg11[0].o = var_730.o
                    
                    arg14 = _mm256_blendv_ps(arg14, arg13, zmm0)
                    zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8e0.o)
                    arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                    int64_t rax_124
                    
                    if ((rcx_11 & 1) != 0)
                        arg13[0].o = var_750.o
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *arg5[0].q, 0)
                        arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                        
                        if ((rcx_11 & 2) != 0)
                            rax_124 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_124, 1)
                    else
                        arg13[0].o = var_750.o
                        arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                        
                        if ((rcx_11 & 2) != 0)
                            rax_124 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_124, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
                    
                    if ((rcx_11 & 4) != 0)
                        zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm5[0].q, 2)
                    
                    zmm5 = var_480.32
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                    
                    if ((rcx_11 & 8) == 0)
                        arg5 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                        
                        if ((rcx_11 & 0x10) != 0)
                            goto label_1402d0789
                        
                        goto label_1402d0697
                    
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    int64_t rax_127 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_127, 3)
                    arg5 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                    
                    if ((rcx_11 & 0x10) != 0)
                    label_1402d0789:
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *arg5[0].q, 4)
                        
                        if ((rcx_11 & 0x20) == 0)
                            goto label_1402d06a0
                        
                        goto label_1402d0797
                    
                label_1402d0697:
                    
                    if ((rcx_11 & 0x20) == 0)
                    label_1402d06a0:
                        
                        if ((rcx_11 & 0x40) != 0)
                            goto label_1402d07ab
                        
                        goto label_1402d06ac
                    
                label_1402d0797:
                    int64_t rax_129 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_129, 5)
                    
                    if ((rcx_11 & 0x40) == 0)
                    label_1402d06ac:
                        var_520 = zmm1[0].o
                        
                        if (temp0_73.b s< 0)
                        label_1402d07cd:
                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            int64_t rax_131 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_131, 7)
                    else
                    label_1402d07ab:
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *arg6[0], 6)
                        var_520 = zmm1[0].o
                        
                        if (temp0_73.b s< 0)
                            goto label_1402d07cd
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    arg15 = _mm256_blendv_ps(var_860, zmm2, zmm0)
                    zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm2[0].o, var_8c0[0].o)
                    zmm1 = var_6e0.32
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                    zmm2 = _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm2[0].o, 1), zmm0)
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        arg15 = _mm256_blendv_ps(arg15, zmm1, zmm2)
                    
                    zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8e0.o)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    int64_t rax_133
                    
                    if ((rcx_11 & 1) != 0)
                        arg8[0].o = var_740.o
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm1[0].q, 0)
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                        
                        if ((rcx_11 & 2) != 0)
                            rax_133 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_133, 1)
                    else
                        arg8[0].o = var_740.o
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                        
                        if ((rcx_11 & 2) != 0)
                            rax_133 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_133, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                    
                    if ((rcx_11 & 4) == 0)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                        
                        if ((rcx_11 & 8) != 0)
                            goto label_1402ceeb2
                        
                        goto label_1402d0831
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg5[0].q, 2)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940[0].o)
                    
                    if ((rcx_11 & 8) != 0)
                    label_1402ceeb2:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_9 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_9, 3)
                        arg6[0].o = var_910.o
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rcx_11 & 0x10) == 0)
                            goto label_1402d0846
                        
                        goto label_1402ceedd
                    
                label_1402d0831:
                    arg6[0].o = var_910.o
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rcx_11 & 0x10) == 0)
                    label_1402d0846:
                        
                        if ((rcx_11 & 0x20) != 0)
                            goto label_1402ceeeb
                        
                        goto label_1402d084f
                    
                label_1402ceedd:
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm1[0].q, 4)
                    
                    if ((rcx_11 & 0x20) != 0)
                    label_1402ceeeb:
                        int64_t rax_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_11, 5)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                        
                        if ((rcx_11 & 0x40) == 0)
                            goto label_1402d085d
                        
                        goto label_1402cef04
                    
                label_1402d084f:
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                    
                    if ((rcx_11 & 0x40) != 0)
                    label_1402cef04:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg5[0].q, 6)
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg16[0].o)
                        
                        if (temp0_73.b s< 0)
                        label_1402cef22:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_13 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_13, 7)
                    else
                    label_1402d085d:
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg16[0].o)
                        
                        if (temp0_73.b s< 0)
                            goto label_1402cef22
                    
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg16[0].o)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg8[0])
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                var_750.o = arg13[0].o
                var_740.o = arg8[0].o
                var_730.o = arg11[0].o
                arg5[0].o = zx.o(0)
                arg7[0].o = var_4f0.o
                arg8[0].o = var_500.o
                arg16 = var_320.32
                
                if (arg19 != 1)
                    arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg6[0].o = data_142d3f5b0
                    arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg6[0].o = var_910.o
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    zmm1 = _mm256_sub_ps(var_1a0_1, _mm256_cvtepi32_ps(zmm1))
                    zmm2 = _mm256_cvtepi32_ps(zmm2)
                    arg5 = _mm256_div_ps(zmm1, zmm2)
                
                var_8c0 = _mm256_blendv_ps(arg12, arg5, zmm0)
                arg9[0].o = var_800.o
                arg5[0].o = var_720
        
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg8[0].o, 0x88)
        arg11 = _mm256_insertf128_ps(arg16, arg5[0].o, 1)
        arg16 = _mm256_insertf128_ps(var_7e0_1, arg6[0].o, 1)
        var_7e0_1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        zmm1[0].o = data_142d3f5b0
        var_7e0_1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_7e0_1[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm1, var_7e0_1[0].o, 1), var_300)
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg12, data_143442540, zmm0)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        arg13 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg10 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        int32_t rax_134 = rdx.d
        uint64_t r10_2 = zx.q(rax_134)
        var_8e0.32 = arg7
        var_940 = arg16
        float var_4e0_1[0x8]
        float var_4c0_1[0x8]
        double var_4a0_1[0x4]
        
        if (rax_134 u> 6)
        label_1402d0b80:
            arg16[0].o = zx.o(0)
            var_4a0_1 = arg16
            var_4c0_1 = arg16
            var_4e0_1 = arg16
            zmm1[0].o = zx.o(0)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            arg7[0].o = var_700.o
            zmm5[0].o = var_780.o
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg14[0].o, var_6c0_1[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            arg12 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (r10_2)
                case 0, 1
                    zmm1[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg8[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                    arg8[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                    double rdi_8 = zmm0[0]
                    int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t r14_2 = zmm1[0].q
                    int64_t rbx_4 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rsi_3 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    double rcx_13 = arg7[0]
                    arg7[0].o = var_700.o
                    double rax_137 = arg6[0]
                    int64_t rdx_14 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm0[0].o = *(arg4 i+ rcx_13)
                    zmm1[0].o = *(arg4 i+ rcx_13 + 4)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rsi_3), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 i+ rax_137), 0x20)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_14), 0x30)
                    arg5[0].o = *(arg4 i+ rdi_8)
                    arg6[0].o = *(arg4 i+ rdi_8 + 4)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r11_3), 0x10)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r14_2), 0x20)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rbx_4), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_3 + 4), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rax_137 + 4), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_14 + 4), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r11_3 + 4), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r14_2 + 4), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rbx_4 + 4), 0x30)
                    arg12 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                    zmm0[0].o = *(arg4 i+ rdi_8 + 8)
                    arg5[0].o = *(arg4 i+ rcx_13 + 8)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_3 + 8), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 i+ rax_137 + 8), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdx_14 + 8), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r11_3 + 8), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r14_2 + 8), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rbx_4 + 8), 0x30)
                    arg16 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    var_4e0_1 = arg12
                    var_4c0_1 = zmm1
                    var_4a0_1 = arg16
                    zmm5[0].o = var_780.o
                case 2
                    zmm1[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg8[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                    arg8[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                    double rcx_14 = zmm0[0]
                    int64_t r12_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rbx_5 = zmm1[0].q
                    int64_t rdi_9 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rsi_4 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    double rax_138 = arg7[0]
                    double r14_3 = arg6[0]
                    int64_t r11_4 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm0[0].o = zx.o(*(arg4 i+ rcx_14))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_3), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_5), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_9), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 i+ rax_138), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_4), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 i+ r14_3), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_4), 7)
                    zmm1[0].o = zx.o(*(arg4 i+ rcx_14 + 2))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r12_3 + 2), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rbx_5 + 2), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdi_9 + 2), 3)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 i+ rax_138 + 2), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_4 + 2), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 i+ r14_3 + 2), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r11_4 + 2), 7)
                    arg5[0].o = zx.o(*(arg4 i+ rcx_14 + 4))
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r12_3 + 4), 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rbx_5 + 4), 2)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdi_9 + 4), 3)
                    arg5[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 i+ rax_138 + 4), 4)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rsi_4 + 4), 5)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 i+ r14_3 + 4), 6)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    arg7[0].o = zx.o(0)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                    arg8[0].o = data_1434424d0
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm0[0].o, 1))
                    arg6 = data_1434424e0
                    arg9 = arg6
                    zmm0 = _mm256_div_ps(zmm0, arg6)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r11_4 + 4), 7)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm1[0].o, 1)), arg9)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                    arg7[0].o = var_700.o
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    arg5 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, arg5[0].o, 1)), arg9)
                    zmm5[0].o = var_780.o
                    arg6 = data_143442560
                    arg12 = _mm256_mul_ps(zmm0, arg6)
                    zmm1 = _mm256_mul_ps(zmm1, arg6)
                    arg16 = _mm256_mul_ps(arg5, arg6)
                label_1402d10da:
                    var_4e0_1 = arg12
                    var_4c0_1 = zmm1
                    var_4a0_1 = arg16
                case 3
                    zmm1[0].o = *(arg4 + rcx_9)
                    int64_t rsi_5 = var_620[0].q
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_5), 0x10)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_2), 0x20)
                    arg5[0].o = *(arg4 + rcx_9 + 4)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_3), 0x30)
                    arg6[0].o = *(arg4 + r15_1)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r12_1), 0x10)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r14_1), 0x20)
                    arg7[0].o = *(arg4 + r15_1 + 4)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r11_2), 0x30)
                    zmm5 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_5 + 4), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_2 + 4), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_3 + 4), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + r12_1 + 4), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r14_1 + 4), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r11_2 + 4), 0x30)
                    arg6[0].o = *(arg4 + r15_1 + 8)
                    arg7[0].o = *(arg4 + rcx_9 + 8)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + rsi_5 + 8), 0x10)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + rsi_2 + 8), 0x20)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + rbx_3 + 8), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r12_1 + 8), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r14_1 + 8), 0x20)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    float var_860_1[0x8] = zmm1
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r11_2 + 8), 0x30)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg7[0].o, 1)
                    var_900 = zmm1
                    zmm1[0].o = *(arg4 + r15_1 + 0xc)
                    arg5[0].o = *(arg4 + rcx_9 + 0xc)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_5 + 0xc), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_2 + 0xc), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rbx_3 + 0xc), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r12_1 + 0xc), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r14_1 + 0xc), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r11_2 + 0xc), 0x30)
                    arg6[0].o = *(arg4 + r15_1 + 0x10)
                    arg7[0].o = *(arg4 + rcx_9 + 0x10)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + rsi_5 + 0x10), 0x10)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + rsi_2 + 0x10), 0x20)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + rbx_3 + 0x10), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r12_1 + 0x10), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r14_1 + 0x10), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r11_2 + 0x10), 0x30)
                    arg9 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    zmm1 = arg16
                    arg16 = arg14
                    arg14 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                    arg6[0].o = *(arg4 + r15_1 + 0x14)
                    arg7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg8[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                    arg8[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                    arg8[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
                    arg8[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                    arg8[0].o = *(arg4 + rcx_9 + 0x14)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + rsi_5 + 0x14), 0x10)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + rsi_2 + 0x14), 0x20)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + rbx_3 + 0x14), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r12_1 + 0x14), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r14_1 + 0x14), 0x20)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                    int64_t rax_140 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    double rcx_17 = zmm0[0]
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r11_2 + 0x14), 0x30)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg6[0].o)
                    double rdx_18 = arg7[0]
                    int64_t rbx_7 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    int64_t rdi_11 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    int64_t r11_5 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    double rsi_6 = arg6[0]
                    arg6[0].o = zx.o(*(arg4 i+ rcx_17))
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rax_140), 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 i+ rdx_18), 2)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rbx_7), 3)
                    int64_t rax_141 = arg5[0].q
                    arg5[0].o = zx.o(*(arg4 i+ rsi_6))
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdi_11), 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_141), 2)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r11_5), 3)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                    arg7 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg6, arg5[0].o, 1), 
                        data_143442420)
                    arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm1[0].o = data_143442490
                    arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                    arg7 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg7, arg8[0].o, 1)), 
                        data_1434424a0)
                    zmm1 = _mm256_mul_ps(arg9, arg7)
                    arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0xa)
                    arg12 = _mm256_add_ps(zmm5, zmm1)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                    arg8[0].o = data_143442480
                    zmm1[0].o &= arg8[0].o
                    zmm5[0].o = data_143442440
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    arg7[0].o &= arg8[0].o
                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                    zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg7, zmm1[0].o, 1))
                    arg7 = data_143442460
                    zmm1 = _mm256_mul_ps(arg14, _mm256_div_ps(zmm1, arg7))
                    arg14 = arg16
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_860_1)
                    arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0x15)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                    zmm5[0].o = var_780.o
                    arg5 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, arg5[0].o, 1)), arg7)
                    arg7[0].o = var_700.o
                    zmm0 = _mm256_mul_ps(zmm0, arg5)
                    arg16 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_900)
                    goto label_1402d10da
                case 4, 5, 6
                    goto label_1402d0b80
        
        arg9[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg7[0].o, 0x88)
        arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        arg5[0].o = zmm2[0].o ^ zmm0[0].o
        var_860 = arg15
        float var_840_2[0x8] = arg14
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg15[0].o)
        arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        zmm2[0].o ^= zmm0[0].o
        arg14 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
        
        if (_mm256_movemask_ps(arg14) != 0)
            zmm5 = var_860
            double var_380_1[0x4]
            float var_360_1[0x8]
            
            if (rdx.d u> 6)
            label_1402d1400:
                zmm0[0].o = zx.o(0)
                var_380_1 = _mm256_maskstore_ps(arg14, zmm0)
                var_360_1 = _mm256_maskstore_ps(arg14, zmm0)
            else
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm5[0].o, var_6c0_1[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg7[0].o, var_800.o)
                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                arg16 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                
                switch (r10_2)
                    case 0, 1
                        zmm1[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg8[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg16[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                        arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        arg11[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(arg11, zmm1, zmm2)
                        zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        arg6 = _mm256_blendv_ps(arg11, arg6, arg5)
                        int64_t r10_3 = zmm1[0].q
                        int64_t r11_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rsi_7 = arg4 + r10_3
                        void* r12_4 = arg4 + r11_6
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        double r14_5 = arg6[0]
                        void* rdx_19 = arg4 i+ r14_5
                        int64_t r15_2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rcx_18 = arg4 + r15_2
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg10 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg8 = _mm256_blendv_ps(arg11, arg10, arg5)
                        arg6[0].o = *(arg8[0] + rdx_19)
                        float* rbx_8 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        int64_t rdi_13 = zmm5[0].q
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_8 + rcx_18), 0x10)
                        arg7 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg5 = _mm256_blendv_ps(arg11, arg7, arg5)
                        var_940[0].o = *(arg5[0].q + rdx_19)
                        float* rdx_20 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        var_940[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, 
                            *(rdx_20 + rcx_18), 0x10)
                        void* rcx_19 = arg4 + rdi_13
                        int64_t rdx_21 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(zmm5[0].q + rcx_19), 0x20)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        var_940[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, 
                            *(arg5[0].q + rcx_19), 0x20)
                        void* rcx_20 = arg4 + rdx_21
                        float* rbx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_12 + rcx_20), 0x30)
                        float* rbx_13 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        var_940[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, 
                            *(rbx_13 + rcx_20), 0x30)
                        int64_t rcx_21 = zmm1[0].q
                        arg5 = _mm256_blendv_ps(arg11, arg10, zmm2)
                        zmm5[0].o = *(arg5[0].q + rsi_7)
                        zmm2 = _mm256_blendv_ps(arg11, arg7, zmm2)
                        arg7[0].o = *(zmm2[0].q + rsi_7)
                        void* rsi_8 = arg4 + rcx_21
                        float* rbx_16 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_16 + r12_4), 0x10)
                        float* rbx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_17 + r12_4), 0x10)
                        int64_t rbx_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm1[0].q + rsi_8), 0x20)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(zmm2[0].q + rsi_8), 0x20)
                        void* rax_147 = arg4 + rbx_18
                        float* rsi_9 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_9 + rax_147), 0x30)
                        float* rsi_10 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_10 + rax_147), 0x30)
                        arg5[0].o = *(arg4 + r10_3)
                        zmm5[0].o = *(arg4 i+ r14_5)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r15_2), 0x10)
                        arg3 = var_7b0_1
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rdi_13), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rdx_21), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r11_6), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_21), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rbx_18), 0x30)
                        var_380_1 =
                            _mm256_maskstore_ps(arg14, _mm256_insertf128_ps(arg5, zmm5[0].o, 1))
                        var_360_1 =
                            _mm256_maskstore_ps(arg14, _mm256_insertf128_ps(zmm1, arg6[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm2, var_940[0].o, 1)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg16[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                        arg5[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        arg8[0].o = zx.o(0)
                        arg6 = _mm256_blendv_ps(arg8, zmm1, zmm2)
                        zmm1[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg8, zmm0, arg5)
                        double r10_4 = arg6[0]
                        void* rbx_19 = arg4 i+ r10_4
                        int64_t r8 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* r14_6 = var_948 + r8
                        zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        int64_t r12_5 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg7 = _mm256_blendv_ps(arg8, arg6, zmm2)
                        zmm5 = _mm256_blendv_ps(arg8, arg6, arg5)
                        double r15_3 = zmm0[0]
                        double rdx_22 = arg7[0]
                        uint16_t* rax_149 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        uint16_t* r11_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm2 = _mm256_blendv_ps(arg8, arg6, zmm2)
                        arg5 = _mm256_blendv_ps(arg8, arg6, arg5)
                        arg6[0].o = zx.o(*(rdx_22 i+ rbx_19))
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rax_149 + r14_6), 1)
                        uint16_t* rax_150 = zmm0[0]
                        void* rdx_24 = zmm2[0].q
                        uint16_t* rcx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        uint16_t* rdi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        uint16_t* rbx_20 = zmm0[0]
                        zmm0[0].o = zx.o(*(rdx_24 + rbx_19))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_22 + r14_6), 1)
                        void* rcx_24 = var_948 i+ r15_3
                        void* rdx_27 = var_948 + r12_5
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rax_150 + rcx_24), 2)
                        int64_t rax_151 = zmm1[0].q
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rbx_20 + rcx_24), 2)
                        void* rcx_26 = var_948 + rax_151
                        int64_t rbx_21 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r11_7 + rdx_27), 3)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm5[0].q + rcx_26), 4)
                        int64_t rsi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_14 + rdx_27), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg5[0].q + rcx_26), 4)
                        int64_t rcx_27 = zmm1[0].q
                        void* rdx_30 = var_948 + rbx_21
                        uint16_t* rdi_15 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rdi_15 + rdx_30), 5)
                        uint16_t* rdi_16 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_16 + rdx_30), 5)
                        void* rdx_32 = var_948 + rcx_27
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdx_32), 6)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg5[0].q + rdx_32), 6)
                        void* rdx_34 = var_948 + rsi_12
                        uint16_t* rdi_19 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_19 + rdx_34), 7)
                        uint16_t* rdi_20 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_20 + rdx_34), 7)
                        zmm2[0].o = zx.o(*(var_948 i+ r10_4))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(var_948 + r8), 1)
                        arg4 = var_948
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 i+ r15_3), 2)
                        arg3 = var_7b0_1
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r12_5), 3)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rax_151), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rbx_21), 5)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rcx_27), 6)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rsi_12), 7)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                        zmm5[0].o = data_1434424d0
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        zmm2 = _mm256_cvtepi32_ps(zmm2)
                        arg5 = data_1434424e0
                        zmm2 = _mm256_div_ps(zmm2, arg5)
                        arg6 = data_143442560
                        var_380_1 = _mm256_maskstore_ps(arg14, _mm256_mul_ps(zmm2, arg6))
                        var_360_1 = _mm256_maskstore_ps(arg14, 
                            _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm1), arg5), arg6))
                        zmm0 = _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm0), arg5), arg6)
                    case 3
                        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_540, var_810_1, 1)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm5[0].o, var_840_2[0].o)
                        zmm1[0].o ^= arg8[0].o
                        arg12 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        zmm0 = _mm256_and_ps(arg12, zmm0)
                        int64_t rax_153 = sx.q(zmm0[0].d)
                        void* r11_8 = arg4 + rax_153
                        int32_t temp0_1001 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                        arg5[0].o = *(arg4 + rax_153)
                        int64_t r12_6 = sx.q(temp0_1001)
                        void* rdi_21 = arg4 + r12_6
                        int64_t rsi_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_1003 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        var_900[0].q = arg4 + rsi_13
                        int64_t rax_155 = sx.q(temp0_1003)
                        var_6e0[0].q = arg4 + rax_155
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rcx_33 = sx.q(zmm0[0].d)
                        void* rdx_38 = arg4 + rcx_33
                        zmm1[0].o = *(arg4 + rcx_33)
                        int64_t rbx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        void* r14_7 = arg4 + rbx_22
                        int64_t r13_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* r15_4 = arg4 + r13_1
                        int32_t temp0_1007 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_22), 0x10)
                        int64_t rbx_23 = sx.q(temp0_1007)
                        void* r10_5 = arg4 + rbx_23
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r13_1), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rbx_23), 0x30)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r12_6), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rsi_13), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rax_155), 0x30)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9520)
                        uint64_t rax_156 = zx.q(arg5[0])
                        uint64_t r12_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        uint64_t r13_2 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        uint64_t r8_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg6[0].o = *(rax_156 + r11_8)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg7[0].o = *(zx.q(arg5[0]) + rdx_38)
                        uint64_t rax_158 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        uint64_t rbx_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        var_7c0 = r14_7
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_158 + r14_7), 0x10)
                        float* rax_159 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        var_5e0 = r15_4
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_24 + r15_4), 0x20)
                        var_460 = r10_5
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_159 + r10_5), 0x30)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r12_7 + rdi_21), 0x10)
                        int64_t rdx_39 = var_900[0].q
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r13_2 + rdx_39), 0x20)
                        arg15 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        int64_t rbx_25 = var_6e0[0].q
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r8_1 + rbx_25), 0x30)
                        double var_7e0_2[0x4] = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9540)
                        uint64_t rax_160 = zx.q(zmm0[0].d)
                        float* r12_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t r13_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t r8_2 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm1[0].o = *(rax_160 + r11_8)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg5[0].o = *(zx.q(zmm0[0].d) + rdx_38)
                        float* rax_162 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* r10_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_162 + r14_7), 0x10)
                        float* rax_163 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_6 + r15_4), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_163 + r10_5), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_8 + rdi_21), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r13_3 + rdx_39), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_2 + rbx_25), 0x30)
                        var_780.32 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423c0)
                        zmm1[0].o = *(zx.q(zmm0[0].d) + r11_8)
                        var_800.o = zmm1[0].o
                        var_910 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        var_720[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        var_640_1[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        uint64_t rax_168 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423e0)
                        zmm0[0].o = *(zx.q(arg5[0]) + r11_8)
                        var_620[0].o = zmm0[0].o
                        arg12 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442400)
                        int32_t* rax_170 = zx.q(arg12[0])
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        arg6[0].o = *(rax_170 + r11_8)
                        uint64_t rsi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int32_t* rdx_40 = zx.q(zmm1[0])
                        uint64_t rdi_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = *(rdx_40 + rdx_38)
                        float* r13_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        var_540[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        uint64_t rcx_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        uint64_t r8_3 = zx.q(arg5[0])
                        uint64_t r9_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        uint64_t r10_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        uint64_t r11_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        float* r14_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                        uint64_t r15_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                        var_810_1[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                        arg5[0].o = *(r8_3 + rdx_38)
                        arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        uint64_t r8_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                        uint64_t rax_172 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                        uint64_t rcx_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                        arg7[0].o = *(zx.q(arg7[0].d) + rdx_38)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_168 + var_7c0), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_1 + var_7c0), 0x10)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r8_4 + var_7c0), 0x10)
                        arg4 = var_948
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_15 + var_5e0), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_7 + var_5e0), 0x20)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_172 + var_5e0), 0x20)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_22 + var_460), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_9 + var_460), 0x30)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_40 + var_460), 0x30)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg16[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                        zmm5 = var_940
                        zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                        arg7[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(arg7, zmm1, zmm2)
                        zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg7, zmm0, zmm2)
                        zmm2[0].o = var_800.o
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_910 + rdi_21), 0x10)
                        zmm5[0].o = var_620[0].o
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r13_4 + rdi_21), 0x10)
                        arg3 = var_7b0_1
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14_8 + rdi_21), 0x10)
                        int64_t rax_175 = var_900[0].q
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(var_720[0] + rax_175), 0x20)
                        int64_t rcx_43 = var_6e0[0].q
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(var_640_1[0].q + rcx_43), 0x30)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(var_540[0] i+ rax_175), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_38 + rcx_43), 0x30)
                        r13 = var_668
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_5 + rax_175), 0x20)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(var_810_1[0] i+ rcx_43), 0x30)
                        int64_t rax_177 = zmm1[0].q
                        int64_t rcx_44 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_47 = zmm1[0].q
                        int64_t rbx_27 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = zx.o(*(arg4 + rax_177))
                        int64_t rax_178 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_44), 1)
                        double rcx_45 = zmm0[0]
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_47), 2)
                        int64_t rdx_48 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_27), 3)
                        double rbx_28 = zmm0[0]
                        zmm0[0].o = zx.o(*(arg4 i+ rcx_45))
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rax_178), 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 i+ rbx_28), 2)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_48), 3)
                        arg11 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                        arg10 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        arg12[0].o = arg9[0].o
                        arg9 = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg7[0].o, 0xa)
                        arg6 = __vandps_ymmqq_ymmqq_memqq(arg6, data_143442420)
                        arg8[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = data_143442490
                        arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg6 = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
                        arg8[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        zmm1[0].o = data_143442480
                        zmm2[0].o = zmm1[0].o
                        arg8[0].o &= zmm1[0].o
                        arg5[0].o = data_143442440
                        zmm1[0].o = arg5[0].o
                        arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                        zmm5[0].o &= zmm2[0].o
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                        arg6 = __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg6), data_1434424a0)
                        zmm5 = _mm256_cvtepi32_ps(zmm5)
                        zmm2 = data_143442460
                        arg8 = zmm2
                        zmm5 = _mm256_div_ps(zmm5, zmm2)
                        zmm2 = _mm256_add_ps(arg15, _mm256_mul_ps(arg11, arg6))
                        arg5 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg10, zmm5), var_7e0_2)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg7[0].o, 0x15)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                        var_380_1 = _mm256_maskstore_ps(arg14, zmm2)
                        zmm0 = _mm256_mul_ps(arg9, _mm256_div_ps(_mm256_cvtepi32_ps(zmm0), arg8))
                        arg9[0].o = arg12[0].o
                        var_360_1 = _mm256_maskstore_ps(arg14, arg5)
                        zmm0 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_780.32)
                    case 4, 5, 6
                        goto label_1402d1400
            
            float var_340_1[0x8] = _mm256_maskstore_ps(arg14, zmm0)
            arg7 = var_8c0
            arg5 = var_4e0_1
            arg6 = var_4c0_1
            zmm5 = var_4a0_1
            zmm0 = _mm256_sub_ps(var_380_1, arg5)
            zmm1 = _mm256_sub_ps(var_360_1, arg6)
            zmm2 = _mm256_sub_ps(var_340_1, zmm5)
            zmm0 = _mm256_mul_ps(arg7, zmm0)
            zmm1 = _mm256_mul_ps(arg7, zmm1)
            zmm2 = _mm256_mul_ps(arg7, zmm2)
            arg12 = _mm256_maskstore_ps(arg14, _mm256_add_ps(arg5, zmm0))
            zmm1 = _mm256_maskstore_ps(arg14, _mm256_add_ps(arg6, zmm1))
            arg16 = _mm256_maskstore_ps(arg14, _mm256_add_ps(zmm5, zmm2))
        
        zmm0 = _mm256_insertf128_ps(var_8e0.32, arg9[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        arg6[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg9[0].o)
        arg10[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg9[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg16[0].o, 0x28)
        int128_t var_220 = arg7[0].o
        zmm5[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
        int128_t var_210_1 = zmm5[0].o
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg16[0].o, 0xa8)
        int128_t var_200_1 = zmm5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
        int128_t var_1f0_1 = zmm1[0].o
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        zmm5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg6[0].o, 0x28)
        int128_t var_1e0_1 = arg5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        int128_t var_1d0_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg6[0].o, 0xa8)
        int128_t var_1c0_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
        int128_t var_1b0_1 = zmm1[0].o
        uint64_t j_4 = 0xff
        arg15 = var_8a0.32
        arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        arg14 = var_840_2
        arg13[0].o = var_880_1
        
        do
            uint64_t rcx_46
            uint64_t rflags_1
            
            if (j_4 == 0)
                rcx_46 = 0x40
            else
                rcx_46, rflags_1 = _bit_scan_forward(j_4)
            double var_120[0x4] = zmm0
            zmm1[0].o = (&var_220)[rcx_46]
            *(r13 + sx.q(*(&var_120 + ((zx.q(rcx_46.d) & 7) << 2))) * 0x30 + 0x10) = zmm1[0].o
            j_4 &= rol.q(-2, rcx_46.b)
        while (j_4 != 0)
        
        r10 = zx.q(r10.d + 8)
    while (r10.d s< i_5)
    
    i_4 = zx.q(arg21)
    
    if (r10.d s< i_4.d)
        goto label_1402d1f6a
arg7[0].o = var_e8
arg8[0].o = var_d8
arg9[0].o = var_c8
arg10[0].o = var_b8
arg11[0].o = var_a8
arg12[0].o = var_98
arg13[0].o = var_88
arg14[0].o = var_78
arg15[0].o = var_68
arg16[0].o = var_58
_mm256_zeroupper()
return i_4
