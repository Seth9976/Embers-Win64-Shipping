// 函数: sub_1402d5790
// 地址: 0x1402d5790
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
int64_t r8 = sx.q(arg21)
float zmm2[0x8]
zmm2[0].o = arg19
int32_t rcx_1 = *(&data_143442ee0 + (r8 << 2)) * *(&data_143442ec0 + (r8 << 2))
int32_t i_5 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
int64_t var_6e8 = r13
int64_t var_808 = r8
uint64_t i_4
float var_960[0x8]
int128_t var_920
double var_7d0[0x2]
int64_t var_6e0
int64_t var_6c0
int128_t var_600
int32_t var_4f0
double var_320[0x4]
double var_300[0x4]
double var_2e0[0x4]
uint64_t r11
double zmm0[0x4]
float zmm1[0x8]
double zmm5[0x4]

if (i_5 s<= 0)
    r11 = 0
    i_4 = zx.q(arg22)
    
    if (0 s< i_4.d)
    label_1402d8a1a:
        zmm0[0].o = zx.o(r11.d)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
        arg12[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
        zmm0[0].o = zx.o(i_4.d)
        arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg12[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
        arg14 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        float var_7c0_2[0x8] = zmm2
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 3)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(arg12[0].o, 3)
        zmm0 = _mm256_and_ps(arg14, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
        int64_t rax_194 = sx.q(zmm0[0].d)
        int32_t* rcx_51 = arg2
        int64_t rbx_30 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t r14_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        int64_t rdi_24 = sx.q(zmm0[0].d)
        zmm1[0].o = zx.o(*(rcx_51 + rax_194))
        int32_t temp0_1203 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        zmm2[0].o = zx.o(*(rcx_51 + rdi_24))
        int64_t rax_196 = sx.q(temp0_1203)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_51 + rbx_30), 1)
        int32_t temp0_1205 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_51 + rax_196), 1)
        int64_t rbx_32 = sx.q(temp0_1205)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_51 + r11_8), 2)
        int32_t temp0_1208 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_51 + rbx_32), 2)
        int64_t rdx_38 = sx.q(temp0_1208)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_51 + rdx_38), 3)
        double var_680_1[0x2] = zmm0[0].o
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_51 + r14_9), 3)
        float var_640_1[0x8] = zmm0
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, data_142fc9520)
        uint64_t r12_9 = zx.q(zmm0[0].d)
        uint64_t r14_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = zx.o(arg4)
        int32_t* rsi_18 = zx.q(zmm1[0])
        arg5[0].o = zx.o(*(rsi_18 + rcx_51 + rdi_24))
        uint32_t* r8_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_6 + rcx_51 + rax_196), 1)
        uint32_t* r9_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_9 + rcx_51 + rbx_32), 2)
        uint64_t r11_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_9 + rcx_51 + rdx_38), 3)
        uint64_t rbx_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        float* r10_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = zx.o(*(r12_9 + rcx_51 + rax_194))
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_10 + rcx_51 + rbx_30), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_34 + rcx_51 + r11_8), 2)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_9 + rcx_51 + r14_9), 3)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm0 = _mm256_and_ps(arg14, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
        int64_t rcx_53 = sx.q(zmm0[0].d)
        int64_t rdx_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm1[0].o = zx.o(*(arg3 + rcx_53))
        int32_t temp0_1233 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rdx_40), 1)
        int64_t rcx_55 = sx.q(temp0_1233)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rcx_55), 2)
        zmm2[0].o = zx.o(*(r12_9 + arg3 + rcx_53))
        int64_t rax_204 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        arg13[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rax_204), 3)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14_10 + arg3 + rdx_40), 1)
        int64_t rdx_43 = sx.q(zmm1[0])
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_34 + arg3 + rcx_55), 2)
        zmm2[0].o = zx.o(*(arg3 + rdx_43))
        int64_t rdx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rdx_45), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_9 + arg3 + rax_204), 3)
        int64_t rdx_47 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rdx_47), 2)
        int64_t rbx_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rbx_36), 3)
        zmm1[0].o = zx.o(*(rsi_18 + arg3 + rdx_43))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_6 + arg3 + rdx_45), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_9 + arg3 + rdx_47), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_9 + arg3 + rbx_36), 3)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
        arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
        arg9[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        zmm2[0].o = zx.o(rcx_1)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        arg16[0].o = arg19
        int32_t rax_207
        rax_207.b = arg6[0].o f>= arg16[0]
        arg6[0].o = data_1434422d0
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm5[0].o ^= arg5[0].o
        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        arg6[0].o ^= arg5[0].o
        arg6 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
        zmm5[0].o = zx.o(neg.d(rax_207))
        zmm5[0].o ^= arg5[0].o
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0)
        zmm5 = _mm256_insertf128_ps(zmm5, zmm5[0].o, 1)
        arg6 = _mm256_and_ps(arg6, zmm5)
        double var_800_4[0x4] = arg6
        arg11 = _mm256_and_ps(arg6, arg14)
        int32_t temp0_1265 = _mm256_movemask_ps(arg11)
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        arg6 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        arg15[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
        double var_660_1[0x4] = arg15
        arg15[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
        double var_880_1[0x4] = arg15
        arg15 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        double var_960_2[0x4]
        void* var_940_1
        float var_900_2[0x8]
        void* var_8e0_1
        int128_t* var_850
        void* var_840_1
        int64_t var_5c0
        int32_t var_540
        
        if (temp0_1265 == 0)
            zmm0[0].o = zx.o(0)
            var_960_2 = zmm0
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            zmm0[0].o = zx.o(0)
            var_900_2 = zmm0
        else
            double var_8a0_2[0x4] = arg6
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            
            if (arg16[0].o f>= 1f)
                zmm1[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_960_2 = zmm0
                arg16 = _mm256_blendv_ps(zmm1, arg5, arg11)
                var_900_2 = arg16
                arg6 = var_8a0_2
            else
                var_7d0 = arg7[0].o
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                arg7 = arg5
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                arg6[0].o = 3
                zmm5[0].o = zx.o(arg17)
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x44)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_660_1[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                var_600 = arg8[0].o
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_880_1[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                var_920 = arg9[0].o
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm2 = data_143442a40
                var_8e0_1.32 = _mm256_and_ps(zmm1, zmm2)
                arg5 = _mm256_and_ps(zmm0, zmm2)
                zmm0[0].o = _mm_permute_ps(arg16[0].o, 0)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                zmm1 = _mm256_cvtepi32_ps(arg7)
                zmm0 = _mm256_mul_ps(zmm0, zmm1)
                zmm1[0].o = arg10[0].o
                zmm1[0] = float.s(arg18 - 1)
                zmm5[0].o = zmm1[0].o f* arg16[0]
                int32_t rax_211 = int.d(zmm5[0].d)
                int32_t rcx_58 = 0
                
                if (rax_211 s>= 0)
                    rcx_58 = rax_211
                
                if (arg18 - 2 s<= rcx_58)
                    rcx_58 = arg18 - 2
                
                zmm0 = _mm256_cvttps_epi32(zmm0)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                double var_900_1[0x4] = arg7
                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                var_840_1.o = zmm2[0].o
                zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                arg7 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                var_940_1.32 = arg5
                double var_780_2[0x4] = arg7
                int64_t var_480
                var_480.32 = arg14
                var_5c0.32 = arg15
                var_6c0.o = arg12[0].o
                var_6e0.32 = arg10
                int64_t var_5e0
                var_5e0.32 = arg13
                int32_t* var_710
                var_710.o = zmm5[0].o
                
                if (arg18 s< 0x100)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg9[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    char rsi_20 = temp0_1265.b
                    
                    if ((rsi_20 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                    
                    if ((rsi_20 & 2) != 0)
                        uint32_t rax_243 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_243, 1)
                    
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                    arg5 = var_8e0_1.32
                    var_960[0].o = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    
                    if ((rsi_20 & 4) == 0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                        
                        if ((rsi_20 & 8) != 0)
                            goto label_1402dbf0f
                        
                        goto label_1402d985b
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg5[0]), 2)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                    
                    if ((rsi_20 & 8) != 0)
                    label_1402dbf0f:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint32_t rax_373 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_373, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        
                        if ((rsi_20 & 0x10) == 0)
                            goto label_1402d986b
                        
                        goto label_1402dbf3b
                    
                label_1402d985b:
                    zmm1 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                    
                    if ((rsi_20 & 0x10) != 0)
                    label_1402dbf3b:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                        arg6 = var_940_1.32
                        
                        if ((rsi_20 & 0x20) != 0)
                        label_1402dbf56:
                            uint32_t rax_377 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_377, 5)
                            
                            if ((rsi_20 & 0x40) == 0)
                                goto label_1402d9888
                            
                            goto label_1402dbf68
                    else
                    label_1402d986b:
                        arg6 = var_940_1.32
                        
                        if ((rsi_20 & 0x20) != 0)
                            goto label_1402dbf56
                    
                    if ((rsi_20 & 0x40) != 0)
                    label_1402dbf68:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm2[0].q), 6)
                        var_850.o = arg8[0].o
                        
                        if (temp0_1265.b s< 0)
                        label_1402dbf8d:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_381 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_381, 7)
                    else
                    label_1402d9888:
                        var_850.o = arg8[0].o
                        
                        if (temp0_1265.b s< 0)
                            goto label_1402dbf8d
                    
                    zmm0[0].o &= data_142fc92e0
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = zx.o(rcx_58)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    arg16 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm5[0].o ^= zmm0[0].o
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg5[0].o ^= zmm0[0].o
                    arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    var_540.32 = arg5
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
                        zmm5 = var_900_1
                        arg10 = var_780_2
                        arg15 = _mm256_blendv_ps(arg10, zmm5, arg5)
                        zmm1[0].o = var_850.o
                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_840_1.o)
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
                                char temp0_1594 = _mm256_movemask_ps(arg8)
                                
                                if ((temp0_1594 & 1) == 0)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                                    
                                    if ((temp0_1594 & 2) != 0)
                                        goto label_1402d99b7
                                    
                                    goto label_1402d9ac8
                                
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg7[0]), 0)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                                
                                if ((temp0_1594 & 2) != 0)
                                label_1402d99b7:
                                    uint16_t rax_248[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_248, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1594 & 4) == 0)
                                        goto label_1402d9adf
                                    
                                    goto label_1402d99d6
                                
                            label_1402d9ac8:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_8e0_1.o)
                                
                                if ((temp0_1594 & 4) == 0)
                                label_1402d9adf:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                    
                                    if ((temp0_1594 & 8) != 0)
                                        goto label_1402d99f7
                                    
                                    goto label_1402d9aed
                                
                            label_1402d99d6:
                                zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*zmm5[0]), 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                
                                if ((temp0_1594 & 8) != 0)
                                label_1402d99f7:
                                    zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    uint16_t rax_252[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_252, 3)
                                    arg7 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                                    
                                    if ((temp0_1594 & 0x10) == 0)
                                        goto label_1402d9afc
                                    
                                    goto label_1402d9a22
                                
                            label_1402d9aed:
                                arg7 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                                
                                if ((temp0_1594 & 0x10) == 0)
                                label_1402d9afc:
                                    
                                    if ((temp0_1594 & 0x20) != 0)
                                        goto label_1402d9a36
                                    
                                    goto label_1402d9b05
                                
                            label_1402d9a22:
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg7[0]), 4)
                                
                                if ((temp0_1594 & 0x20) != 0)
                                label_1402d9a36:
                                    uint16_t rax_256[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_256, 5)
                                    
                                    if ((temp0_1594 & 0x40) == 0)
                                        goto label_1402d9b0e
                                    
                                    goto label_1402d9a47
                                
                            label_1402d9b05:
                                
                                if ((temp0_1594 & 0x40) != 0)
                                label_1402d9a47:
                                    arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                        zx.d(*arg5[0]), 6)
                                    
                                    if (temp0_1594 s< 0)
                                    label_1402d9a62:
                                        arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                        uint16_t rax_260[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                            rax_260, 7)
                                else
                                label_1402d9b0e:
                                    
                                    if (temp0_1594 s< 0)
                                        goto label_1402d9a62
                                
                                arg5[0].o = arg14[0].o & data_142fc92e0
                                zmm5[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_memdq(arg5[0].o, data_142d8f750)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0])
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
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_840_1.o)
                                zmm0[0].o ^= zmm1[0].o
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, var_900_1[0].o)
                                arg5[0].o ^= zmm1[0].o
                                arg13 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg8)
                                arg8 = _mm256_and_ps(arg13, arg11)
                                i = _mm256_movemask_ps(arg8)
                                zmm0 = zmm2
                            while (i != 0)
                    
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    zmm1 = var_540.32
                    zmm0 = _mm256_andnot_ps(zmm1, arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0 = _mm256_cmp_ps(arg5, arg5, 0xf)
                        zmm2 = _mm256_xor_ps(zmm1, zmm0)
                        arg15 = _mm256_blendv_ps(arg15, arg5, zmm2)
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg7[0].o, var_850.o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg7[0].o, var_780_2[0].o)
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
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                arg10 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                char temp0_1661 = _mm256_movemask_ps(arg14)
                                
                                if ((temp0_1661 & 1) == 0)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((temp0_1661 & 2) != 0)
                                        goto label_1402d9c46
                                    
                                    goto label_1402d9d54
                                
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg10[0].q), 0)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                
                                if ((temp0_1661 & 2) != 0)
                                label_1402d9c46:
                                    uint32_t rax_266 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_266, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                    arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1661 & 4) == 0)
                                        goto label_1402d9d6b
                                    
                                    goto label_1402d9c65
                                
                            label_1402d9d54:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                
                                if ((temp0_1661 & 4) == 0)
                                label_1402d9d6b:
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                    
                                    if ((temp0_1661 & 8) != 0)
                                        goto label_1402d9c86
                                    
                                    goto label_1402d9d79
                                
                            label_1402d9c65:
                                zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                
                                if ((temp0_1661 & 8) != 0)
                                label_1402d9c86:
                                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    uint32_t rax_270 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_270, 3)
                                    arg10 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                                    
                                    if ((temp0_1661 & 0x10) == 0)
                                        goto label_1402d9d88
                                    
                                    goto label_1402d9cb1
                                
                            label_1402d9d79:
                                arg10 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                                
                                if ((temp0_1661 & 0x10) == 0)
                                label_1402d9d88:
                                    
                                    if ((temp0_1661 & 0x20) != 0)
                                        goto label_1402d9cc5
                                    
                                    goto label_1402d9d91
                                
                            label_1402d9cb1:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg10[0].q), 4)
                                
                                if ((temp0_1661 & 0x20) != 0)
                                label_1402d9cc5:
                                    uint32_t rax_274 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_274, 5)
                                    
                                    if ((temp0_1661 & 0x40) == 0)
                                        goto label_1402d9d9a
                                    
                                    goto label_1402d9cd6
                                
                            label_1402d9d91:
                                
                                if ((temp0_1661 & 0x40) != 0)
                                label_1402d9cd6:
                                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_1661 s< 0)
                                    label_1402d9cf1:
                                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        uint32_t rax_278 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_278, 7)
                                else
                                label_1402d9d9a:
                                    
                                    if (temp0_1661 s< 0)
                                        goto label_1402d9cf1
                                
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
                                arg6 = var_940_1.32
                            while (i_1 != 0)
                        
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    
                    arg16 = _mm256_blendv_ps(arg5, arg15, arg11)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg16[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg16[0].o, 0x4e)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    
                    if ((rsi_20 & 1) != 0)
                        arg6[0].o = zx.o(*zmm1[0].q)
                    
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    arg14 = var_480.32
                    arg15 = var_5c0.32
                    arg12[0].o = var_6c0.o
                    arg10 = var_6e0.32
                    arg13 = var_5e0.32
                    
                    if ((rsi_20 & 2) == 0)
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_8e0_1.o)
                        
                        if ((rsi_20 & 4) != 0)
                            goto label_1402dbfcc
                        
                        goto label_1402d9ec1
                    
                    uint32_t rax_383 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_383, 1)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_8e0_1.o)
                    
                    if ((rsi_20 & 4) != 0)
                    label_1402dbfcc:
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm5[0]), 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                        
                        if ((rsi_20 & 8) == 0)
                            goto label_1402d9ed0
                        
                        goto label_1402dbfee
                    
                label_1402d9ec1:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                    
                    if ((rsi_20 & 8) == 0)
                    label_1402d9ed0:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_20 & 0x10) != 0)
                            goto label_1402dc01a
                        
                        goto label_1402d9ee0
                    
                label_1402dbfee:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint32_t rax_387 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_387, 3)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_20 & 0x10) != 0)
                    label_1402dc01a:
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm1[0].q), 4)
                        arg5 = var_900_1
                        
                        if ((rsi_20 & 0x20) == 0)
                            goto label_1402d9ef0
                        
                        goto label_1402dc035
                    
                label_1402d9ee0:
                    arg5 = var_900_1
                    
                    if ((rsi_20 & 0x20) == 0)
                    label_1402d9ef0:
                        
                        if ((rsi_20 & 0x40) != 0)
                            goto label_1402dc047
                        
                        goto label_1402d9efa
                    
                label_1402dc035:
                    uint32_t rax_391 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_391, 5)
                    
                    if ((rsi_20 & 0x40) == 0)
                    label_1402d9efa:
                        
                        if (temp0_1265.b s< 0)
                        label_1402dc063:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_395 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_395, 7)
                    else
                    label_1402dc047:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm2[0].q), 6)
                        
                        if (temp0_1265.b s< 0)
                            goto label_1402dc063
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    zmm2 = _mm256_blendv_ps(zmm1, zmm0, arg11)
                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_840_1.o)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm2 = _mm256_blendv_ps(zmm2, arg5, zmm0)
                    
                    arg11 = var_800_4
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    var_900_2 = zmm2
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940_1.o)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    
                    if ((rsi_20 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    arg7[0].o = var_7d0
                    arg8[0].o = var_600
                    arg9[0].o = var_920
                    
                    if ((rsi_20 & 2) == 0)
                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                        
                        if ((rsi_20 & 4) != 0)
                            goto label_1402dc0a2
                        
                        goto label_1402d9fd5
                    
                    uint32_t rax_397 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_397, 1)
                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_20 & 4) != 0)
                    label_1402dc0a2:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg5[0]), 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_960[0].o)
                        
                        if ((rsi_20 & 8) == 0)
                            goto label_1402d9fe4
                        
                        goto label_1402dc0c4
                    
                label_1402d9fd5:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_960[0].o)
                    
                    if ((rsi_20 & 8) == 0)
                    label_1402d9fe4:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_20 & 0x10) != 0)
                            goto label_1402dc0f0
                        
                        goto label_1402d9ff4
                    
                label_1402dc0c4:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint32_t rax_401 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_401, 3)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_20 & 0x10) != 0)
                    label_1402dc0f0:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                        zmm2[0].o = arg6[0].o & data_142fc92e0
                        
                        if ((rsi_20 & 0x20) == 0)
                            goto label_1402da006
                        
                        goto label_1402dc10d
                    
                label_1402d9ff4:
                    zmm2[0].o = arg6[0].o & data_142fc92e0
                    
                    if ((rsi_20 & 0x20) == 0)
                    label_1402da006:
                        arg6[0].o = zx.o(0)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        
                        if ((rsi_20 & 0x40) != 0)
                            goto label_1402dc128
                        
                        goto label_1402da019
                    
                label_1402dc10d:
                    uint32_t rax_405 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_405, 5)
                    arg6[0].o = zx.o(0)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    
                    if ((rsi_20 & 0x40) == 0)
                    label_1402da019:
                        zmm5[0].o = zx.o(0)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        
                        if (temp0_1265.b s< 0)
                        label_1402dc14c:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_409 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_409, 7)
                    else
                    label_1402dc128:
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm5[0]), 6)
                        zmm5[0].o = zx.o(0)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        
                        if (temp0_1265.b s< 0)
                            goto label_1402dc14c
                    
                    arg6 = var_8a0_2
                    zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    zmm0[0].o &= data_142fc92e0
                else
                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    var_850.o = zmm0[0].o
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    arg9[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    char rsi_19 = temp0_1265.b
                    
                    if ((rsi_19 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    
                    if ((rsi_19 & 2) != 0)
                        int64_t rax_214 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_214, 1)
                    
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2 = var_8e0_1.32
                    var_960[0].o = __vextractf128_memdq_ymmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    
                    if ((rsi_19 & 4) == 0)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                        
                        if ((rsi_19 & 8) != 0)
                            goto label_1402dbcdc
                        
                        goto label_1402d8fd6
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0], 2)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                    
                    if ((rsi_19 & 8) != 0)
                    label_1402dbcdc:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_351 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_351, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) == 0)
                            goto label_1402d8fe6
                        
                        goto label_1402dbd02
                    
                label_1402d8fd6:
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_19 & 0x10) == 0)
                    label_1402d8fe6:
                        
                        if ((rsi_19 & 0x20) != 0)
                            goto label_1402dbd11
                        
                        goto label_1402d8ff0
                    
                label_1402dbd02:
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                    
                    if ((rsi_19 & 0x20) != 0)
                    label_1402dbd11:
                        int64_t rax_353 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_353, 5)
                        
                        if ((rsi_19 & 0x40) == 0)
                            goto label_1402d8ffa
                        
                        goto label_1402dbd26
                    
                label_1402d8ff0:
                    
                    if ((rsi_19 & 0x40) != 0)
                    label_1402dbd26:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                        
                        if (temp0_1265.b s< 0)
                        label_1402dbd3f:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_355 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_355, 7)
                    else
                    label_1402d8ffa:
                        
                        if (temp0_1265.b s< 0)
                            goto label_1402dbd3f
                    
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = zx.o(rcx_58)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    arg15 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg6[0].o ^= zmm0[0].o
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg5[0].o ^= zmm0[0].o
                    arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    var_540.32 = arg5
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
                        zmm5 = var_900_1
                        arg10 = var_780_2
                        arg16 = _mm256_blendv_ps(arg10, zmm5, zmm1)
                        zmm2[0].o = var_850.o
                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm2[0].o, var_840_1.o)
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
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940_1.o)
                                arg10 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                char temp0_1381 = _mm256_movemask_ps(zmm1)
                                
                                if ((temp0_1381 & 1) == 0)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                    
                                    if ((temp0_1381 & 2) != 0)
                                        goto label_1402d910e
                                    
                                    goto label_1402d9223
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 0)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                
                                if ((temp0_1381 & 2) != 0)
                                label_1402d910e:
                                    int64_t rax_217 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_217, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1381 & 4) == 0)
                                        goto label_1402d923a
                                    
                                    goto label_1402d9130
                                
                            label_1402d9223:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                
                                if ((temp0_1381 & 4) == 0)
                                label_1402d923a:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                    
                                    if ((temp0_1381 & 8) != 0)
                                        goto label_1402d914e
                                    
                                    goto label_1402d9248
                                
                            label_1402d9130:
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg6[0], 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                
                                if ((temp0_1381 & 8) != 0)
                                label_1402d914e:
                                    arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_219 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_219, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                    
                                    if ((temp0_1381 & 0x10) == 0)
                                        goto label_1402d9257
                                    
                                    goto label_1402d9173
                                
                            label_1402d9248:
                                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                
                                if ((temp0_1381 & 0x10) == 0)
                                label_1402d9257:
                                    
                                    if ((temp0_1381 & 0x20) != 0)
                                        goto label_1402d9181
                                    
                                    goto label_1402d9260
                                
                            label_1402d9173:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 4)
                                
                                if ((temp0_1381 & 0x20) != 0)
                                label_1402d9181:
                                    int64_t rax_221 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_221, 5)
                                    
                                    if ((temp0_1381 & 0x40) == 0)
                                        goto label_1402d9269
                                    
                                    goto label_1402d9195
                                
                            label_1402d9260:
                                
                                if ((temp0_1381 & 0x40) != 0)
                                label_1402d9195:
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0], 6)
                                    
                                    if (temp0_1381 s< 0)
                                    label_1402d91ad:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_223 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_223, 7)
                                else
                                label_1402d9269:
                                    
                                    if (temp0_1381 s< 0)
                                        goto label_1402d91ad
                                
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
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_840_1.o)
                                zmm0[0].o ^= arg8[0].o
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, var_900_1[0].o)
                                arg5[0].o ^= arg8[0].o
                                arg13 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1), zmm1)
                                zmm1 = _mm256_and_ps(arg13, arg11)
                                i_2 = _mm256_movemask_ps(zmm1)
                                zmm0 = arg14
                            while (i_2 != 0)
                    
                    arg13[0].o = zx.o(0)
                    zmm1 = var_540.32
                    zmm0 = _mm256_andnot_ps(zmm1, arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0 = _mm256_cmp_ps(arg13, arg13, 0xf)
                        zmm2 = _mm256_xor_ps(zmm1, zmm0)
                        arg16 = _mm256_blendv_ps(arg16, arg13, zmm2)
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_850.o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_780_2[0].o)
                        arg12[0].o = zx.o(0)
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
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_940_1.o)
                                arg10 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                                char temp0_1450 = _mm256_movemask_ps(arg14)
                                
                                if ((temp0_1450 & 1) == 0)
                                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                    
                                    if ((temp0_1450 & 2) != 0)
                                        goto label_1402d938d
                                    
                                    goto label_1402d949e
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 0)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((temp0_1450 & 2) != 0)
                                label_1402d938d:
                                    int64_t rax_227 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_227, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                    arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1450 & 4) == 0)
                                        goto label_1402d94b5
                                    
                                    goto label_1402d93af
                                
                            label_1402d949e:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8e0_1.o)
                                
                                if ((temp0_1450 & 4) == 0)
                                label_1402d94b5:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                    
                                    if ((temp0_1450 & 8) != 0)
                                        goto label_1402d93cd
                                    
                                    goto label_1402d94c3
                                
                            label_1402d93af:
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg6[0], 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                
                                if ((temp0_1450 & 8) != 0)
                                label_1402d93cd:
                                    arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_229 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_229, 3)
                                    arg10 = _mm256_insertf128_ps(arg14, arg5[0].o, 1)
                                    
                                    if ((temp0_1450 & 0x10) == 0)
                                        goto label_1402d94d2
                                    
                                    goto label_1402d93f2
                                
                            label_1402d94c3:
                                arg10 = _mm256_insertf128_ps(arg14, arg5[0].o, 1)
                                
                                if ((temp0_1450 & 0x10) == 0)
                                label_1402d94d2:
                                    
                                    if ((temp0_1450 & 0x20) != 0)
                                        goto label_1402d9400
                                    
                                    goto label_1402d94db
                                
                            label_1402d93f2:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                                
                                if ((temp0_1450 & 0x20) != 0)
                                label_1402d9400:
                                    int64_t rax_231 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_231, 5)
                                    
                                    if ((temp0_1450 & 0x40) == 0)
                                        goto label_1402d94e4
                                    
                                    goto label_1402d9414
                                
                            label_1402d94db:
                                
                                if ((temp0_1450 & 0x40) != 0)
                                label_1402d9414:
                                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0], 6)
                                    
                                    if (temp0_1450 s< 0)
                                    label_1402d942c:
                                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_233 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_233, 7)
                                else
                                label_1402d94e4:
                                    
                                    if (temp0_1450 s< 0)
                                        goto label_1402d942c
                                
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
                    
                    arg6 = var_940_1.32
                    arg16 = _mm256_blendv_ps(arg13, arg16, arg11)
                    zmm0[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    
                    if ((rsi_19 & 1) != 0)
                        zmm5[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    arg14 = var_480.32
                    arg15 = var_5c0.32
                    arg12[0].o = var_6c0.o
                    arg10 = var_6e0.32
                    arg13 = var_5e0.32
                    
                    if ((rsi_19 & 2) == 0)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                        
                        if ((rsi_19 & 4) != 0)
                            goto label_1402dbd78
                        
                        goto label_1402d9609
                    
                    int64_t rax_356 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_356, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_19 & 4) != 0)
                    label_1402dbd78:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg5[0], 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                        
                        if ((rsi_19 & 8) == 0)
                            goto label_1402d9618
                        
                        goto label_1402dbd97
                    
                label_1402d9609:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                    
                    if ((rsi_19 & 8) == 0)
                    label_1402d9618:
                        arg6 = var_940_1.32
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) != 0)
                            goto label_1402dbdc3
                        
                        goto label_1402d962e
                    
                label_1402dbd97:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rax_358 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_358, 3)
                    arg6 = var_940_1.32
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_19 & 0x10) != 0)
                    label_1402dbdc3:
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0].q, 4)
                        arg5 = var_900_1
                        
                        if ((rsi_19 & 0x20) == 0)
                            goto label_1402d963e
                        
                        goto label_1402dbdd8
                    
                label_1402d962e:
                    arg5 = var_900_1
                    
                    if ((rsi_19 & 0x20) == 0)
                    label_1402d963e:
                        
                        if ((rsi_19 & 0x40) != 0)
                            goto label_1402dbded
                        
                        goto label_1402d9648
                    
                label_1402dbdd8:
                    int64_t rax_360 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_360, 5)
                    
                    if ((rsi_19 & 0x40) == 0)
                    label_1402d9648:
                        
                        if (temp0_1265.b s< 0)
                        label_1402dbe06:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_362, 7)
                    else
                    label_1402dbded:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm2[0].q, 6)
                        
                        if (temp0_1265.b s< 0)
                            goto label_1402dbe06
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    arg7 = _mm256_blendv_ps(zmm1, zmm0, arg11)
                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_840_1.o)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg7 = _mm256_blendv_ps(arg7, arg5, zmm0)
                    
                    arg11 = var_800_4
                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_900_2 = arg7
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    
                    if ((rsi_19 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    arg7[0].o = var_7d0
                    arg8[0].o = var_600
                    arg9[0].o = var_920
                    
                    if ((rsi_19 & 2) == 0)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                        
                        if ((rsi_19 & 4) != 0)
                            goto label_1402dbe3f
                        
                        goto label_1402d9729
                    
                    int64_t rax_363 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_363, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_19 & 4) != 0)
                    label_1402dbe3f:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0], 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                        
                        if ((rsi_19 & 8) == 0)
                            goto label_1402d9738
                        
                        goto label_1402dbe5e
                    
                label_1402d9729:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                    
                    if ((rsi_19 & 8) != 0)
                    label_1402dbe5e:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_365 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_365, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) != 0)
                        label_1402dbe84:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rsi_19 & 0x20) == 0)
                                goto label_1402d9752
                            
                            goto label_1402dbe93
                    else
                    label_1402d9738:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) != 0)
                            goto label_1402dbe84
                    
                    if ((rsi_19 & 0x20) == 0)
                    label_1402d9752:
                        arg5[0].o = zx.o(0)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                        
                        if ((rsi_19 & 0x40) != 0)
                            goto label_1402dbeb1
                        
                        goto label_1402d9765
                    
                label_1402dbe93:
                    int64_t rax_367 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_367, 5)
                    arg5[0].o = zx.o(0)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                    
                    if ((rsi_19 & 0x40) == 0)
                    label_1402d9765:
                        arg6 = var_8a0_2
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        
                        if (temp0_1265.b s< 0)
                        label_1402dbed7:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_369 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_369, 7)
                    else
                    label_1402dbeb1:
                        arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg6[0], 6)
                        arg6 = var_8a0_2
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        
                        if (temp0_1265.b s< 0)
                            goto label_1402dbed7
                    
                    zmm5[0].o = zx.o(0)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                
                zmm2[0].o = zx.o(0)
                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                zmm0[0].o = zx.o(0)
                arg5[0].o = zx.o(0)
                
                if (arg20 != 1)
                    arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg6[0].o = data_142d3f5b0
                    arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg6 = var_8a0_2
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    arg5[0].o = __vpermilps_xmmdq_memdq_immb(var_710.o, 0)
                    zmm1 = _mm256_sub_ps(_mm256_insertf128_ps(arg5, arg5[0].o, 1), 
                        _mm256_cvtepi32_ps(zmm1))
                    zmm2 = _mm256_cvtepi32_ps(zmm2)
                    arg5 = _mm256_div_ps(zmm1, zmm2)
                
                var_960_2 = _mm256_blendv_ps(zmm0, arg5, arg11)
        
        arg12 = _mm256_insertf128_ps(var_7c0_2, arg12[0].o, 1)
        var_8e0_1.32 = _mm256_insertf128_ps(arg10, arg10[0].o, 1)
        arg7 = _mm256_insertf128_ps(arg13, arg7[0].o, 1)
        arg5 = _mm256_insertf128_ps(var_660_1, arg8[0].o, 1)
        arg8 = _mm256_insertf128_ps(var_880_1, arg9[0].o, 1)
        int32_t rcx_59 = var_808.d
        int32_t rax_285
        rax_285.b = rcx_59 == 3
        var_880_1[0].o = zx.o(neg.d(rax_285))
        var_880_1[0].o = __vpshufd_xmmdq_xmmdq_immb(var_880_1[0].o, 0)
        zmm0 = _mm256_insertf128_ps(var_880_1, var_880_1[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm2[0].o = data_142d3f5b0
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm0 = _mm256_and_ps(zmm1, zmm0)
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, data_143442540, zmm0)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        arg9 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg10 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
        zmm5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
        uint64_t r15_11 = zx.q(rcx_59)
        var_940_1.32 = arg16
        int32_t var_660_2[0x8] = arg8
        double var_7c0_3[0x4] = arg5
        int32_t var_8a0_3[0x8] = arg10
        float var_800_5[0x8] = arg9
        double var_780_3[0x4] = arg7
        var_880_1[0].o = zmm2[0].o
        var_840_1.o = zmm5[0].o
        uint64_t var_760_1
        double var_5a0_1[0x4]
        double var_580_1[0x4]
        double var_560_1[0x4]
        
        if (rcx_59 u> 6)
        label_1402da484:
            zmm0[0].o = zx.o(0)
            var_5a0_1 = _mm256_maskstore_ps(arg14, zmm0)
            var_580_1 = _mm256_maskstore_ps(arg14, zmm0)
        label_1402da765:
            var_560_1 = _mm256_maskstore_ps(arg14, zmm0)
            arg16 = var_640_1
            arg13 = var_8e0_1.32
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg16[0].o, arg15[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            arg13 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg11 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (r15_11)
                case 0, 1
                    zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm5[0].o)
                    arg6 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
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
                    int64_t r9_10 = zmm1[0].q
                    void* rdi_28 = arg17 + r9_10
                    int64_t r11_10 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rsi_21 = arg17 + r11_10
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r14_12 = zmm1[0].q
                    int64_t r15_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg5 = arg12
                    arg12 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm1 = _mm256_blendv_ps(arg9, arg12, arg11)
                    arg6[0].o = *(zmm1[0].q + rdi_28)
                    int64_t rcx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r10_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_63 + rsi_21), 0x10)
                    float* rcx_64 = zmm1[0].q
                    zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm5 = _mm256_blendv_ps(arg9, zmm1, arg11)
                    arg7[0].o = *(zmm5[0] + rdi_28)
                    float* rdx_55 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    double rdi_29 = zmm5[0]
                    float* rbx_39 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5 = _mm256_blendv_ps(arg9, arg10, zmm0)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_55 + rsi_21), 0x10)
                    double rdx_56 = zmm5[0]
                    void* rsi_22 = arg17 + r14_12
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_64 + rsi_22), 0x20)
                    int64_t r12_10 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_29 i+ rsi_22), 0x20)
                    void* rsi_23 = arg17 i+ rdx_56
                    void* rdi_30 = arg17 + r15_12
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r10_11 + rdi_30), 0x30)
                    void* rcx_65 = arg17 + r12_10
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_39 + rdi_30), 0x30)
                    double rdi_31 = zmm5[0]
                    zmm2 = arg15
                    arg8 = _mm256_blendv_ps(arg9, arg12, zmm0)
                    arg12 = arg5
                    int32_t* rbx_40 = arg8[0].q
                    zmm0 = _mm256_blendv_ps(arg9, zmm1, zmm0)
                    zmm1[0].o = *(rbx_40 + rsi_23)
                    arg5[0].o = *(zmm0[0] + rsi_23)
                    void* rsi_24 = arg17 i+ rdi_31
                    int64_t rbx_42 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_42 + rcx_65), 0x10)
                    float* rbx_43 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_43 + rcx_65), 0x10)
                    int64_t rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm5[0] + rsi_24), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm0[0] + rsi_24), 0x20)
                    void* rsi_25 = arg17 + rcx_66
                    int64_t rbx_46 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_46 + rsi_25), 0x30)
                    float* rbx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_47 + rsi_25), 0x30)
                    arg5[0].o = *(arg17 i+ rdx_56)
                    zmm5[0].o = *(arg17 + r9_10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r11_10), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r14_12), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r15_12), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + r12_10), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 i+ rdi_31), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rcx_66), 0x30)
                    arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    var_5a0_1 = _mm256_maskstore_ps(arg14, arg5)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                    var_580_1 = _mm256_maskstore_ps(arg14, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                    goto label_1402da765
                case 2
                    zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                    arg9 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
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
                    int64_t r9_11 = zmm1[0].q
                    int64_t r10_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rbx_48 = arg17 + r9_11
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r11_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rsi_26 = arg17 + r10_12
                    arg7 = arg12
                    arg12 = _mm256_broadcast_sd(9.8813129168249309e-324)
                    zmm2 = _mm256_blendv_ps(zmm0, arg12, arg11)
                    int64_t r14_13 = zmm1[0].q
                    void* rdx_57 = zmm2[0].q
                    uint16_t* rax_288 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    uint16_t* rcx_67 = zmm1[0].q
                    zmm2[0].o = zx.o(*(rdx_57 + rbx_48))
                    int64_t rdx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_288 + rsi_26), 1)
                    zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg5 = _mm256_blendv_ps(zmm0, zmm2, arg11)
                    uint32_t rax_290 = zx.d(*(arg5[0] i+ rbx_48))
                    uint16_t* rbx_49 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg6[0].o = zx.o(rax_290)
                    double rax_291 = arg5[0]
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rbx_49 + rsi_26), 1)
                    int64_t rsi_27 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5 = _mm256_blendv_ps(zmm0, arg9, arg10)
                    void* rbx_50 = arg17 + r14_13
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_67 + rbx_50), 2)
                    void* rcx_68 = arg17 + r11_11
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rax_291 i+ rbx_50), 2)
                    double rax_292 = arg5[0]
                    void* rbx_51 = arg17 i+ rax_292
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_59 + rcx_68), 3)
                    int64_t rdx_60 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm5 = _mm256_blendv_ps(zmm0, arg12, arg10)
                    arg12 = arg7
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rsi_27 + rcx_68), 3)
                    void* rcx_69 = arg17 + rdx_60
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm5[0] i+ rbx_51), 4)
                    int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_29 + rcx_69), 5)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm0 = _mm256_blendv_ps(zmm0, zmm2, arg10)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(zmm0[0] + rbx_51), 4)
                    uint16_t* rsi_31 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    double rbx_52 = arg5[0]
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_31 + rcx_69), 5)
                    void* rcx_70 = arg17 i+ rbx_52
                    arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg6[0] i+ rcx_70), 6)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm0[0] + rcx_70), 6)
                    zmm5[0].o = zx.o(*(arg17 + r9_11))
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r10_12), 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r14_13), 2)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r11_11), 3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 i+ rax_292), 4)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rdx_60), 5)
                    int64_t rax_293 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 i+ rbx_52), 6)
                    void* rcx_72 = arg17 + rax_293
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg17 + rax_293), 7)
                    int64_t rax_294 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_294 + rcx_72), 7)
                    int64_t rax_295 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0])
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
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_295 + rcx_72), 7)
                    arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                    zmm2 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm2[0].o, 1)), arg5)
                    arg5 = data_143442560
                    var_5a0_1 = _mm256_maskstore_ps(arg14, _mm256_mul_ps(zmm0, arg5))
                    var_580_1 = _mm256_maskstore_ps(arg14, _mm256_mul_ps(zmm1, arg5))
                    zmm0 = _mm256_mul_ps(zmm2, arg5)
                    goto label_1402da765
                case 3
                    zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm2 = var_8e0_1.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                    var_6c0.32 = arg12
                    arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0 = _mm256_and_ps(arg12, arg7)
                    int64_t rax_302 = sx.q(zmm0[0].d)
                    void* r9_13 = arg17 + rax_302
                    var_920.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                    var_600.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                    var_7d0[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                    zmm5 = arg10
                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    var_6e0.o = zmm2[0].o
                    zmm0[0].o = *(r12_9 + r9_13)
                    var_850.o = zmm0[0].o
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9540)
                    zmm1[0].o = *(zx.q(zmm0[0].d) + r9_13)
                    var_540.o = zmm1[0].o
                    arg7 = arg9
                    arg9 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423c0)
                    zmm1[0].o = *(zx.q(arg9[0]) + r9_13)
                    var_4f0.o = zmm1[0].o
                    arg16 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423e0)
                    zmm1[0].o = *(zx.q(arg16[0]) + r9_13)
                    var_2e0[0].o = zmm1[0].o
                    arg12 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442400)
                    zmm1[0].o = *(zx.q(arg12[0]) + r9_13)
                    var_300[0].o = zmm1[0].o
                    int64_t rax_308 = sx.q(zmm2[0])
                    var_320[0] = rax_308
                    void* rbx_60 = arg17 + rax_308
                    zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm2 = arg5
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    arg10 = arg15
                    arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                    arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                    arg6[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                    zmm5[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                    arg6 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg7[0].o = zx.o(0)
                    arg13 = _mm256_blendv_ps(arg7, zmm1, arg6)
                    zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                    arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                    arg6[0].o = *(rsi_18 + rbx_60)
                    zmm2[0].o = var_6e0.o
                    int32_t temp0_2054 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 1)
                    arg11 = _mm256_blendv_ps(arg7, arg5, zmm1)
                    float temp0_2056 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    float temp0_2058 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 3)
                    arg5[0].o = *(zx.q(zmm1[0]) + rbx_60)
                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    uint64_t rax_309 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    uint64_t rax_310 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    float* rax_311 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = *(zx.q(zmm5[0].d) + rbx_60)
                    uint64_t rsi_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t r12_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    uint64_t rax_312 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    uint64_t r10_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    uint64_t r15_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    zmm1[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    uint64_t rax_313 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    int32_t* rax_314 = zx.q(zmm1[0])
                    uint64_t rdx_64 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t r11_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    zmm5[0].o = *(rax_314 + rbx_60)
                    uint64_t rax_315 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    uint64_t rcx_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t rdi_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int32_t* rax_316 = zx.q(zmm1[0])
                    uint64_t r14_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = *(rax_316 + rbx_60)
                    int64_t r9_14 = sx.q(temp0_2054)
                    void* rbx_62 = arg17 + r9_14
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r8_6 + rbx_62), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_42 + rbx_62), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_14 + rbx_62), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_64 + rbx_62), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_83 + rbx_62), 0x10)
                    int64_t rcx_84 = sx.q(temp0_2056)
                    void* rdx_66 = arg17 + rcx_84
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_9 + rdx_66), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_11 + rdx_66), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_13 + rdx_66), 0x20)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_13 + rdx_66), 0x20)
                    var_5c0.32 = arg10
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_34 + rdx_66), 0x20)
                    int64_t rdx_67 = sx.q(temp0_2058)
                    void* rbx_64 = arg17 + rdx_67
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_9 + rbx_64), 0x30)
                    arg10[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_312 + rbx_64), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_313 + rbx_64), 0x30)
                    var_760_1.o = zmm0[0].o
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_315 + rbx_64), 0x30)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r14_15 + rbx_64), 0x30)
                    uint64_t rbx_65 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    float* r14_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    float* r10_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    uint64_t rsi_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 1))
                    float* rdi_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 2))
                    float* r11_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 3))
                    zmm0[0].o = *(arg17 + rax_302)
                    arg5[0].o = *(arg17 i+ var_320[0])
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + r9_14), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rcx_84), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rdx_67), 0x30)
                    int64_t rax_322 = sx.q(var_920.d)
                    void* rcx_85 = arg17 + rax_322
                    zmm1[0].o = var_850.o
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14_10 + rcx_85), 0x10)
                    zmm1[0].o = var_540.o
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_309 + rcx_85), 0x10)
                    arg6[0].o = var_4f0.o
                    arg9[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_65 + rcx_85), 0x10)
                    arg6[0].o = var_2e0[0].o
                    arg16[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_43 + rcx_85), 0x10)
                    float* rdx_70 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                    arg6[0].o = var_300[0].o
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_70 + rcx_85), 0x10)
                    float* rcx_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    float* rdx_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rax_322), 0x10)
                    int64_t rax_323 = sx.q(var_600.d)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rax_323), 0x20)
                    void* rax_324 = arg17 + rax_323
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_34 + rax_324), 0x20)
                    int64_t rsi_45 = sx.q(var_7d0[0].d)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rsi_45), 0x30)
                    arg12 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    void* rsi_46 = arg17 + rsi_45
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_9 + rsi_46), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_310 + rax_324), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_311 + rsi_46), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r14_16 + rax_324), 0x20)
                    arg9[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_15 + rsi_46), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, *(rdi_36 + rax_324), 0x20)
                    arg16[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_14 + rsi_46), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_86 + rax_324), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_71 + rsi_46), 0x30)
                    int64_t rax_325 = arg13[0].q
                    int64_t rcx_87 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg13 = var_8e0_1.32
                    double rdx_72 = arg5[0]
                    int64_t rbx_69 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = zx.o(*(arg17 + rax_325))
                    int64_t rax_326 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rcx_87), 1)
                    int64_t rcx_88 = arg11[0].q
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 i+ rdx_72), 2)
                    int64_t rdx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rbx_69), 3)
                    double rbx_70 = zmm0[0]
                    zmm0[0].o = zx.o(*(arg17 + rcx_88))
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rax_326), 1)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 i+ rbx_70), 2)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rdx_73), 3)
                    arg11 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                    arg10 = _mm256_insertf128_ps(zmm1, arg10[0].o, 1)
                    zmm5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg9, var_760_1.o, 1)
                    arg7 = _mm256_insertf128_ps(arg16, arg7[0].o, 1)
                    arg16 = var_640_1
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
                    arg12 = var_6c0.32
                    zmm1 = _mm256_mul_ps(arg7, zmm1)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm0 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1)), arg8)
                    arg15 = var_5c0.32
                    zmm1 = _mm256_add_ps(arg11, zmm1)
                    var_5a0_1 = _mm256_maskstore_ps(arg14, zmm2)
                    zmm0 = _mm256_mul_ps(arg9, zmm0)
                    var_580_1 = _mm256_maskstore_ps(arg14, zmm1)
                    zmm0 = _mm256_add_ps(arg10, zmm0)
                    var_560_1 = _mm256_maskstore_ps(arg14, zmm0)
                case 4, 5, 6
                    goto label_1402da484
        
        arg8 = var_900_2
        zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
        arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
        zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_840_1.o)
        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_940_1.o)
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
            double var_420_1[0x4]
            float var_400_1[0x8]
            
            if (var_808.d u> 6)
            label_1402daac5:
                zmm0[0].o = zx.o(0)
                var_420_1 = _mm256_maskstore_ps(arg11, zmm0)
                var_400_1 = _mm256_maskstore_ps(arg11, zmm0)
            else
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg15[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_880_1[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                arg5 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                
                switch (r15_11)
                    case 0, 1
                        zmm0[0].o = _mm256_extractf128_ps(var_660_2[0].o, 1)
                        arg10 = var_8a0_3
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg9 = var_7c0_3
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(var_800_5[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_800_5[0].o, arg5[0].o)
                        arg6 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_660_2[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg12[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(arg12, zmm0, zmm2)
                        zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        arg7 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                        arg6 = _mm256_blendv_ps(arg12, arg6, arg7)
                        double r10_13 = zmm0[0]
                        int64_t r9_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rsi_34 = arg17 i+ r10_13
                        void* r8_8 = arg17 + r9_12
                        arg10[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        double r11_12 = arg6[0]
                        void* rdx_61 = arg17 i+ r11_12
                        int64_t r14_14 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rcx_75 = arg17 + r14_14
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg9 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg8 = _mm256_blendv_ps(arg12, arg9, arg7)
                        int32_t* rbx_53 = arg8[0].q
                        zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg6 = _mm256_blendv_ps(arg12, zmm0, arg7)
                        arg7[0].o = *(rbx_53 + rdx_61)
                        zmm1[0].o = *(arg6[0] + rdx_61)
                        double rdx_62 = zmm5[0]
                        float* rbx_55 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_55 + rcx_75), 0x10)
                        float* rbx_56 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_56 + rcx_75), 0x10)
                        void* rcx_76 = arg17 i+ rdx_62
                        arg9 = _mm256_blendv_ps(arg12, arg9, zmm2)
                        arg5[0].o = *(arg9[0].q + rsi_34)
                        zmm0 = _mm256_blendv_ps(arg12, zmm0, zmm2)
                        arg13 = var_8e0_1.32
                        zmm2[0].o = *(zmm0[0] + rsi_34)
                        int64_t rbx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(zmm5[0] + rcx_76), 0x20)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg6[0] + rcx_76), 0x20)
                        void* rcx_77 = arg17 + rbx_59
                        int64_t rsi_37 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_37 + rcx_77), 0x30)
                        int64_t rsi_38 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_38 + r8_8), 0x10)
                        float* rsi_39 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_39 + rcx_77), 0x30)
                        float* rcx_78 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_78 + r8_8), 0x10)
                        int64_t rcx_79 = arg10[0].q
                        void* rsi_40 = arg17 + rcx_79
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg6[0] i+ rsi_40), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(zmm0[0] + rsi_40), 0x20)
                        arg7[0].o = *(arg17 i+ r10_13)
                        arg8[0].o = *(arg17 i+ r11_12)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + r14_14), 0x10)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 i+ rdx_62), 0x20)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + rbx_59), 0x30)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg17 + r9_12), 0x10)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg17 + rcx_79), 0x20)
                        int64_t rax_299 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg17 + rax_299), 0x30)
                        void* rax_300 = arg17 + rax_299
                        int64_t rcx_80 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_80 + rax_300), 0x30)
                        float* rcx_81 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_81 + rax_300), 0x30)
                        var_420_1 =
                            _mm256_maskstore_ps(arg11, _mm256_insertf128_ps(arg7, arg8[0].o, 1))
                        var_400_1 =
                            _mm256_maskstore_ps(arg11, _mm256_insertf128_ps(arg5, zmm5[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(var_660_2[0].o, 1)
                        arg10 = var_8a0_3
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg9 = var_7c0_3
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg15 = var_800_5
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
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_660_2[0].o, zmm2[0].o)
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
                        double r10_16 = zmm0[0]
                        void* rdi_37 = arg17 i+ r10_16
                        int64_t r9_15 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rsi_47 = arg17 + r9_15
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        double r8_11 = zmm0[0]
                        int64_t r11_15 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rcx_89 = arg17 i+ r8_11
                        arg7 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg6 = _mm256_blendv_ps(arg9, arg7, zmm5)
                        void* rdx_74 = arg17 + r11_15
                        zmm0[0].o = zx.o(*(arg6[0] i+ rdi_37))
                        int64_t rax_329 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rax_329 + rsi_47), 1)
                        arg8 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm5 = _mm256_blendv_ps(arg9, arg8, zmm5)
                        uint32_t rax_331 = zx.d(*(zmm5[0] i+ rdi_37))
                        uint16_t* rdi_38 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o = zx.o(rax_331)
                        double rax_332 = arg5[0]
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_38 + rsi_47), 1)
                        void* rdi_39 = arg17 i+ rax_332
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg6[0] i+ rcx_89), 2)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm5[0] + rcx_89), 2)
                        int64_t rcx_90 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg7 = _mm256_blendv_ps(arg9, arg7, zmm2)
                        int64_t rsi_50 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_50 + rdx_74), 3)
                        uint16_t* rsi_51 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_51 + rdx_74), 3)
                        void* rdx_75 = arg17 + rcx_90
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7[0] i+ rdi_39), 4)
                        int64_t rsi_53 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_53 + rdx_75), 5)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm2 = _mm256_blendv_ps(arg9, arg8, zmm2)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdi_39), 4)
                        uint16_t* rdi_40 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        double rsi_55 = arg5[0]
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_40 + rdx_75), 5)
                        void* rdx_76 = arg17 i+ rsi_55
                        arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg6[0] i+ rdx_76), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdx_76), 6)
                        zmm5[0].o = zx.o(*(arg17 i+ r10_16))
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r9_15), 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 i+ r8_11), 2)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r11_15), 3)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 i+ rax_332), 4)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rcx_90), 5)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 i+ rsi_55), 6)
                        int64_t rax_333 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rax_333), 7)
                        void* rax_334 = arg17 + rax_333
                        int64_t rcx_91 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_91 + rax_334), 7)
                        int64_t rcx_92 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0])
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
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_92 + rax_334), 7)
                        arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm1[0].o, 1)), arg5)
                        arg5 = data_143442560
                        var_420_1 = _mm256_maskstore_ps(arg11, _mm256_mul_ps(zmm2, arg5))
                        var_400_1 = _mm256_maskstore_ps(arg11, _mm256_mul_ps(zmm0, arg5))
                        zmm0 = _mm256_mul_ps(zmm1, arg5)
                    case 3
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0])
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg13 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg13, var_780_3)
                        int32_t temp0_2259 = __vextractps_gpr32_xmmdq_immb(arg10[0].o, 1)
                        var_840_1.d = __vextractps_memd_xmmdq_immb(arg10[0].o, 2)
                        var_940_1.d = __vextractps_memd_xmmdq_immb(arg10[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        int64_t rdx_78 = sx.q(zmm0[0].d)
                        float* r12_13 = arg17
                        void* rcx_94 = r12_13 + rdx_78
                        zmm1[0].o = *(r12_13 + rdx_78)
                        int64_t rdi_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rdx_80 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_2265 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_13 + rdi_43), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r12_13 + rdx_80), 0x20)
                        var_880_1[0].o = zmm0[0].o
                        arg15 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9520)
                        float* rax_335 = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 1))
                        void* rdi_44 = r12_13 + rdi_43
                        var_900_2[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 2))
                        zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm1[0].o = *(zx.q(zmm0[0].d) + rcx_94)
                        float* rax_337 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* r13_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* r10_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_337 + rdi_44), 0x10)
                        uint64_t var_7a0_2
                        var_7a0_2.o = zmm0[0].o
                        var_6c0.32 = arg12
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9540)
                        var_760_1.32 = zmm0
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        uint32_t* var_8b0_1
                        var_8b0_1.o = zmm1[0].o
                        zmm0[0].o = *(zx.q(zmm1[0]) + rcx_94)
                        float* rax_339 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_339 + rdi_44), 0x10)
                        uint32_t* var_910_1
                        var_910_1.o = zmm0[0].o
                        zmm1[0].o = _mm256_extractf128_ps(var_7c0_3[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm5 = var_800_5
                        arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg16 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423c0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_7c0_3[0].o, arg5[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                        int32_t* rax_340 = zx.q(arg5[0].d)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm0 = var_660_2
                        zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        arg7 = var_8a0_3
                        zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        float* rsi_56 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        zmm5[0].o = *(rax_340 + rcx_94)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_56 + rdi_44), 0x10)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        arg6[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                        arg7[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm2 = _mm256_blendv_ps(arg7, zmm2, arg6)
                        arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg8[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                        arg8 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423e0)
                        arg9 = _mm256_blendv_ps(arg7, zmm1, arg6)
                        arg7[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg6[0].o = *(zx.q(arg7[0].d) + rcx_94)
                        float* rax_342 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_342 + rdi_44), 0x10)
                        int32_t rax_343 = arg10[0]
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg13, data_143442400)
                        arg13[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        int32_t* rsi_57 = zx.q(arg13[0])
                        float* rbx_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1))
                        zmm0[0].o = *(rsi_57 + rcx_94)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_74 + rdi_44), 0x10)
                        var_660_2[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 3))
                        int32_t* rsi_58 = zx.q(arg15[0].d)
                        void* rdx_81 = r12_13 + rdx_80
                        zmm5[0].o = var_7a0_2.o
                        arg15[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r13_4 + rdx_81), 0x20)
                        zmm1[0].o = arg14[0].o
                        arg14[0].o = var_8b0_1.o
                        float* rdi_45 = zx.q(__vextractps_gpr32_xmmdq_immb(arg14[0].o, 2))
                        zmm5[0].o = var_910_1.o
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_45 + rdx_81), 0x20)
                        var_8a0_3[0].o = zmm5[0].o
                        float* rdi_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(rdi_46 + rdx_81), 0x20)
                        var_7c0_3[0].o = zmm5[0].o
                        float* rdi_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_47 + rdx_81), 0x20)
                        var_910_1.o = arg6[0].o
                        float* rdi_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_48 + rdx_81), 0x20)
                        var_780_3[0].o = zmm0[0].o
                        int64_t rax_344 = sx.q(rax_343)
                        zmm0 = var_760_1.32
                        int32_t* rdx_82 = zx.q(zmm0[0].d)
                        float* rdi_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        var_800_5[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* r13_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        arg12[0].o = *(r12_13 + rax_344)
                        void* rax_345 = r12_13 + rax_344
                        float* r11_16 = zx.q(__vextractps_gpr32_xmmdq_immb(arg14[0].o, 3))
                        arg14[0].o = zmm1[0].o
                        zmm0[0].o = *(rsi_58 + rax_345)
                        int64_t rsi_59 = sx.q(temp0_2265)
                        arg6[0].o = var_880_1[0].o
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r12_13 + rsi_59), 0x30)
                        void* rsi_60 = r12_13 + rsi_59
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, *(r10_17 + rsi_60), 0x30)
                        var_880_1[0].o = zmm1[0].o
                        uint64_t r10_18 = zx.q(arg16[0])
                        uint64_t r14_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 1))
                        uint64_t r15_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 2))
                        uint64_t rcx_97 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 3))
                        arg16[0].o = *(rdx_82 + rax_345)
                        int64_t rdx_83 = sx.q(temp0_2259)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r12_13 + rdx_83), 0x10)
                        float* r9_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = *(r10_18 + rax_345)
                        int32_t* r10_19 = zx.q(arg8[0])
                        float* r8_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                        arg7[0].o = *(r10_19 + rax_345)
                        int32_t* r10_20 = zx.q(arg10[0])
                        float* rcx_98 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3))
                        arg13[0].o = *(r10_20 + rax_345)
                        void* rax_346 = r12_13 + rdx_83
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_335 + rax_346), 0x10)
                        zmm1[0].o = var_8a0_3[0].o
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_16 + rsi_60), 0x30)
                        var_8a0_3[0].o = zmm1[0].o
                        arg16[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, *(rdi_49 + rax_346), 0x10)
                        zmm1[0].o = var_7c0_3[0].o
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_16 + rsi_60), 0x30)
                        var_7c0_3[0].o = zmm1[0].o
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r14_18 + rax_346), 0x10)
                        zmm1[0].o = var_910_1.o
                        arg15[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_13 + rsi_60), 0x30)
                        float* rdx_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                        zmm1[0].o = var_780_3[0].o
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_98 + rsi_60), 0x30)
                        float* r8_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                        float* rdi_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_85 + rax_346), 0x10)
                        float* rdx_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rdx_86 + rax_346), 0x10)
                        float* rax_347 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        float* rdx_87 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        int64_t rsi_61 = sx.q(var_840_1.d)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r12_13 + rsi_61), 0x20)
                        void* rsi_62 = r12_13 + rsi_61
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_900_2[0].q + rsi_62), 0x20)
                        int64_t rcx_100 = sx.q(var_940_1.d)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r12_13 + rcx_100), 0x30)
                        arg10 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                        void* rcx_101 = r12_13 + rcx_100
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_660_2[0].q + rcx_101), 0x30)
                        arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, 
                            *(var_800_5[0].q + rsi_62), 0x20)
                        arg16 = var_640_1
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r13_5 + rcx_101), 0x30)
                        r13 = var_6e8
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_14 + rsi_62), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_97 + rcx_101), 0x30)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r8_14 + rsi_62), 0x20)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_50 + rcx_101), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rax_347 + rsi_62), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_87 + rcx_101), 0x30)
                        int64_t rax_348 = zmm2[0].q
                        int64_t rcx_102 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_88 = zmm2[0].q
                        int64_t rbx_78 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = zx.o(*(r12_13 + rax_348))
                        int64_t rax_349 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r12_13 + rcx_102), 1)
                        int64_t rcx_103 = arg9[0].q
                        zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r12_13 + rdx_88), 2)
                        int64_t rdx_89 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r12_13 + rbx_78), 3)
                        int64_t rbx_79 = zmm1[0].q
                        zmm1[0].o = zx.o(*(r12_13 + rcx_103))
                        zmm1[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_13 + rax_349), 1)
                        zmm1[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_13 + rbx_79), 2)
                        zmm1[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_13 + rdx_89), 3)
                        arg13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_880_1[0].o, 1)
                        arg12 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_8a0_3[0].o, 1)
                        arg5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_7c0_3[0].o, 1)
                        arg7 = _mm256_insertf128_ps(arg7, arg15[0].o, 1)
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
                        arg13 = var_8e0_1.32
                        var_420_1 = _mm256_maskstore_ps(arg11, zmm0)
                        zmm0 = _mm256_mul_ps(arg9, zmm1)
                        var_400_1 = _mm256_maskstore_ps(arg11, zmm2)
                        zmm0 = _mm256_add_ps(arg12, zmm0)
                        arg12 = var_6c0.32
                    case 4, 5, 6
                        goto label_1402daac5
            
            float var_3e0_1[0x8] = _mm256_maskstore_ps(arg11, zmm0)
            arg7 = var_960_2
            arg5 = var_5a0_1
            arg6 = var_580_1
            zmm5 = var_560_1
            zmm0 = _mm256_sub_ps(var_420_1, arg5)
            zmm1 = _mm256_sub_ps(var_400_1, arg6)
            zmm2 = _mm256_sub_ps(var_3e0_1, zmm5)
            zmm0 = _mm256_mul_ps(arg7, zmm0)
            zmm1 = _mm256_mul_ps(arg7, zmm1)
            zmm2 = _mm256_mul_ps(arg7, zmm2)
            var_5a0_1 = _mm256_maskstore_ps(arg11, _mm256_add_ps(arg5, zmm0))
            var_580_1 = _mm256_maskstore_ps(arg11, _mm256_add_ps(arg6, zmm1))
            zmm0 = _mm256_add_ps(zmm5, zmm2)
            var_560_1 = _mm256_maskstore_ps(arg11, zmm0)
        
        zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg16, var_680_1, 1)
        zmm2[0].o = var_5a0_1[0].o
        arg5[0].o = var_5a0_1[2].o
        arg6[0].o = var_580_1[0].o
        zmm5[0].o = var_580_1[2].o
        arg7[0].o = var_560_1[0].o
        arg8[0].o = var_560_1[2].o
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
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
        zmm0 = _mm256_insertf128_ps(zmm0, arg14[0].o, 1)
        i_4 = zx.q(_mm256_movemask_ps(zmm0))
        
        do
            uint64_t rcx_104
            uint64_t rflags_2
            
            if (i_4 == 0)
                rcx_104 = 0x40
            else
                rcx_104, rflags_2 = _bit_scan_forward(i_4)
            float var_140[0x8] = zmm1
            zmm0[0].o = (&var_2a0)[rcx_104]
            *(r13 + sx.q(var_140[zx.q(rcx_104.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i_4 &= rol.q(-2, rcx_104.b)
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_2e0 = zmm0
    zmm0[0].o = zx.o(rcx_1)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_7c0_1[0x4] = zmm0
    zmm0[0].o = 3
    zmm1[0].o = zx.o(arg17)
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
    var_300 = zmm0
    zmm0[0].o = arg5[0].o
    zmm0[0].d = float.s(arg18 - 1)
    zmm0[0].o = zmm0[0].o f* zmm2[0]
    int32_t rcx_4 = int.d(zmm0[0].d)
    r11 = 0
    
    if (rcx_4 s< 0)
        rcx_4 = 0
    
    zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0)
    
    if (arg18 - 2 s<= rcx_4)
        rcx_4 = arg18 - 2
    
    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    float var_180_1[0x8] = zmm1
    zmm1[0].o = zx.o(rcx_4)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
    arg10 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_1a0_1[0x4] = zmm0
    int32_t rax_6
    rax_6.b = r8.d == 3
    zmm0[0].o = zx.o(neg.d(rax_6))
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_320 = zmm0
    arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    var_4f0 = arg4
    int64_t var_840
    var_840.32 = arg10
    
    do
        int64_t rax_29 = sx.q((r11 << 3).d)
        arg16[0].o = *(arg2 + rax_29)
        arg8[0].o = *(arg2 + rax_29 + 0x10)
        zmm2[0].o = *(arg2 + rax_29 + 0x20)
        zmm1[0].o = *(arg2 + rax_29 + 0x30)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg16[0].o, arg8[0].o, 0xdd)
        arg13[0].o = zmm1[0].o
        int64_t var_760
        var_760.o = zmm2[0].o
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0xdd)
        arg5 = var_2e0
        zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        int64_t rcx_6 = sx.q(zmm0[0].d)
        int32_t temp0_49 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int64_t r14_1 = sx.q(*(arg3 + rcx_6))
        int64_t rbx_1 = sx.q(temp0_49)
        int32_t temp0_50 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int64_t r8_1 = sx.q(*(arg3 + rbx_1))
        int64_t rdi_1 = sx.q(temp0_50)
        int32_t temp0_51 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        int64_t r10_1 = sx.q(*(arg3 + rdi_1))
        int64_t r15_1 = sx.q(temp0_51)
        int64_t rax_35 = sx.q(zmm1[0])
        int64_t rdx_1 = sx.q(*(arg3 + rax_35))
        zmm0[0].o = zx.o(*(arg3 + rcx_6 + 4))
        int64_t rcx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rbx_1 + 4), 1)
        int64_t r12_1 = sx.q(*(arg3 + rcx_8))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdi_1 + 4), 2)
        int64_t rbx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm2[0].o = zx.o(*(arg3 + rax_35 + 4))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rcx_8 + 4), 1)
        int64_t rcx_9 = sx.q(*(arg3 + rbx_3))
        int64_t rax_37 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rbx_3 + 4), 2)
        int64_t rbx_4 = sx.q(*(arg3 + rax_37))
        zmm1[0].o = zx.o(rdx_1.d)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, r12_1.d, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_9.d, 2)
        arg7[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rbx_4.d, 3)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r15_1 + 4), 3)
        int64_t r15_2 = sx.q(*(arg3 + r15_1))
        zmm0[0].o = zx.o(r14_1.d)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r8_1.d, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r10_1.d, 2)
        arg14[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r15_2.d, 3)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rax_37 + 4), 3)
        arg15[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
        double var_800_1[0x4] = zmm0
        zmm0[0].o = data_1434422d0
        arg6[0].o = zmm0[0].o
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
        zmm0 = __vorps_ymmqq_ymmqq_memqq(zmm0, var_300)
        int32_t var_8a0[0x8]
        arg11 = var_8a0
        int128_t var_680
        
        if (_mm256_movemask_ps(zmm0) != 0)
            var_680.32 = _mm256_blendv_ps(var_680.32, arg12, zmm0)
            arg11 = _mm256_blendv_ps(arg11, arg12, zmm0)
        
        zmm5 = var_7c0_1
        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
        int64_t var_6a0
        var_6a0.o = arg6[0].o
        arg6 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        arg12 = _mm256_cmp_ps(arg12, arg12, 0xf)
        float var_780_1[0x8] = arg12
        arg12 = _mm256_xor_ps(zmm0, arg12)
        int32_t temp0_84 = _mm256_movemask_ps(arg12)
        var_7d0 = arg7[0].o
        var_600.32 = arg14
        void* var_8b0
        var_8b0.o = zmm5[0].o
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        int64_t var_940
        float var_900[0x8]
        int32_t var_880[0x8]
        int64_t var_620
        int32_t var_460
        int32_t var_440
        
        if (temp0_84 == 0)
            var_940.32 = zmm0
            arg10 = var_680.32
            arg7[0].o = arg13[0].o
            zmm2[0].o = zx.o(0)
        else
            var_940.32 = zmm0
            void* var_910
            var_910.o = arg5[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
            arg5 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
            zmm0[0].o = arg19
            
            if (zmm0[0].o f>= 1f)
                arg10 = _mm256_blendv_ps(var_680.32, arg5, arg12)
                arg11 = _mm256_blendv_ps(arg11, arg5, arg12)
                arg5[0].o = var_910.o
                arg7[0].o = arg13[0].o
                zmm2[0].o = zx.o(0)
            else
                var_460.32 = arg6
                uint64_t var_700
                var_700.o = arg8[0].o
                int64_t var_740
                var_740.o = arg16[0].o
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_7c0_1[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm5 = var_160_1
                var_440.32 = arg15
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg15[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_800_1[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_910.o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_6a0.o)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm2 = _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg5), 
                    var_180_1))
                arg6[0].o = zx.o(0)
                arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                arg15[0].o = zx.o(0)
                zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                arg5[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                double var_960_1[0x4] = arg5
                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                var_900[0].o = arg6[0].o
                zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                arg14 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                zmm2 = data_143442a40
                zmm1 = _mm256_and_ps(zmm1, zmm2)
                var_940.32 = zmm1
                arg16 = _mm256_and_ps(zmm0, zmm2)
                var_620.32 = arg14
                int32_t var_8a0_1[0x8] = arg11
                int64_t var_730
                var_730.o = arg13[0].o
                int64_t var_7e0
                int64_t var_720
                int32_t var_3c0[0x4]
                int32_t var_340[0x4]
                
                if (arg18 s< 0x100)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    arg8[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    var_880[0].o = zmm1[0].o
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    char rcx_11 = temp0_84.b
                    int128_t var_2c0
                    zmm1[0].o = var_2c0
                    
                    if ((rcx_11 & 1) != 0)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm2[0].q), 0)
                    
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                    
                    if ((rcx_11 & 2) != 0)
                        uint32_t rax_55 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_55, 1)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                    arg6 = var_940.32
                    arg10[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    
                    if ((rcx_11 & 4) == 0)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                        
                        if ((rcx_11 & 8) != 0)
                            goto label_1402d6711
                        
                        goto label_1402d6321
                    
                    arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg6[0]), 2)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                    
                    if ((rcx_11 & 8) != 0)
                    label_1402d6711:
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        uint32_t rax_83 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_83, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        
                        if ((rcx_11 & 0x10) == 0)
                            goto label_1402d6330
                        
                        goto label_1402d673c
                    
                label_1402d6321:
                    zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    
                    if ((rcx_11 & 0x10) == 0)
                    label_1402d6330:
                        
                        if ((rcx_11 & 0x20) != 0)
                            goto label_1402d6750
                        
                        goto label_1402d6339
                    
                label_1402d673c:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0]), 4)
                    
                    if ((rcx_11 & 0x20) != 0)
                    label_1402d6750:
                        uint32_t rax_87 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_87, 5)
                        
                        if ((rcx_11 & 0x40) == 0)
                            goto label_1402d6342
                        
                        goto label_1402d6761
                    
                label_1402d6339:
                    
                    if ((rcx_11 & 0x40) != 0)
                    label_1402d6761:
                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm2[0].q), 6)
                        
                        if (temp0_84.b s< 0)
                        label_1402d677d:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            uint32_t rax_91 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_91, 7)
                    else
                    label_1402d6342:
                        
                        if (temp0_84.b s< 0)
                            goto label_1402d677d
                    
                    var_2c0 = zmm1[0].o
                    zmm2[0].o = zmm1[0].o & data_142fc92e0
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    zmm1 = var_840.32
                    arg14[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                    arg6[0].o ^= arg9[0].o
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    zmm5[0].o ^= arg9[0].o
                    zmm2 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                    arg6 = _mm256_and_ps(zmm2, arg12)
                    bool cond:12_1 = _mm256_movemask_ps(arg6) == 0
                    var_340 = arg8[0].o
                    var_3c0.32 = zmm2
                    int128_t var_510
                    
                    if (cond:12_1)
                        arg7 = var_620.32
                        zmm2[0].o = var_510
                    else
                        zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                        arg5[0].o ^= arg9[0].o
                        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm0[0].o ^= arg9[0].o
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        zmm1 = var_960_1
                        arg13 = var_620.32
                        arg7 = _mm256_blendv_ps(arg13, zmm1, zmm0)
                        arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
                        arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                        arg5[0].o ^= arg9[0].o
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                        zmm5[0].o ^= arg9[0].o
                        arg5 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm5, arg5[0].o, 1))
                        zmm0 = _mm256_and_ps(arg5, arg12)
                        int32_t j = _mm256_movemask_ps(zmm0)
                        
                        if (j == 0)
                            zmm2[0].o = var_510
                        else
                            arg6 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                            zmm2[0].o = var_510
                            
                            do
                                arg11 = arg6
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_880[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm5[0].o)
                                arg9 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                                char temp0_284 = _mm256_movemask_ps(zmm0)
                                
                                if ((temp0_284 & 1) == 0)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                    
                                    if ((temp0_284 & 2) != 0)
                                        goto label_1402d6467
                                    
                                    goto label_1402d657f
                                
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg9[0].q), 0)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                
                                if ((temp0_284 & 2) != 0)
                                label_1402d6467:
                                    uint32_t rax_60 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_60, 1)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                    
                                    if ((temp0_284 & 4) == 0)
                                        goto label_1402d6594
                                    
                                    goto label_1402d6484
                                
                            label_1402d657f:
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                
                                if ((temp0_284 & 4) == 0)
                                label_1402d6594:
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
                                    
                                    if ((temp0_284 & 8) != 0)
                                        goto label_1402d64a5
                                    
                                    goto label_1402d65a2
                                
                            label_1402d6484:
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0]), 2)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
                                
                                if ((temp0_284 & 8) != 0)
                                label_1402d64a5:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    uint32_t rax_64 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_64, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_284 & 0x10) == 0)
                                        goto label_1402d65b2
                                    
                                    goto label_1402d64d1
                                
                            label_1402d65a2:
                                zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                
                                if ((temp0_284 & 0x10) == 0)
                                label_1402d65b2:
                                    
                                    if ((temp0_284 & 0x20) != 0)
                                        goto label_1402d64e6
                                    
                                    goto label_1402d65bc
                                
                            label_1402d64d1:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0]), 4)
                                
                                if ((temp0_284 & 0x20) != 0)
                                label_1402d64e6:
                                    uint32_t rax_68 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_68, 5)
                                    
                                    if ((temp0_284 & 0x40) == 0)
                                        goto label_1402d65c6
                                    
                                    goto label_1402d64f8
                                
                            label_1402d65bc:
                                
                                if ((temp0_284 & 0x40) != 0)
                                label_1402d64f8:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm5[0]), 6)
                                    
                                    if (temp0_284 s< 0)
                                    label_1402d6514:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint32_t rax_72 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_72, 7)
                                else
                                label_1402d65c6:
                                    
                                    if (temp0_284 s< 0)
                                        goto label_1402d6514
                                
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_840.o)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                arg8 = _mm256_and_ps(zmm0, arg5)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm5 = _mm256_and_ps(arg8, arg12)
                                
                                if (_mm256_movemask_ps(zmm5) != j)
                                    zmm0 = _mm256_xor_ps(arg8, arg5)
                                
                                arg7 = _mm256_blendv_ps(arg7, arg13, arg8)
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                                arg6 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                arg5[0].o ^= zmm1[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_960_1[0].o)
                                zmm5[0].o ^= zmm1[0].o
                                arg5 = _mm256_and_ps(_mm256_insertf128_ps(zmm5, arg5[0].o, 1), zmm0)
                                zmm0 = _mm256_and_ps(arg5, arg12)
                                j = _mm256_movemask_ps(zmm0)
                                arg13 = arg11
                            while (j != 0)
                    
                    zmm1 = var_3c0.32
                    zmm0 = _mm256_andnot_ps(zmm1, arg12)
                    bool cond:21_1 = _mm256_movemask_ps(zmm0) == 0
                    var_510 = zmm2[0].o
                    int128_t var_500
                    
                    if (cond:21_1)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg9 = var_680.32
                        arg14[0].o = var_720.o
                        arg8[0].o = var_500
                        arg13[0].o = arg10[0].o
                    else
                        zmm0 = __vxorps_ymmqq_ymmqq_memqq(zmm1, var_780_1)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg7 = _mm256_blendv_ps(arg7, zmm1, zmm0)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_340)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_620.o)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                        arg15[0].o = zx.o(0)
                        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                        zmm5 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                        arg11 = _mm256_and_ps(zmm5, zmm0)
                        zmm0 = _mm256_and_ps(arg11, arg12)
                        int32_t j_1 = _mm256_movemask_ps(zmm0)
                        
                        if (j_1 == 0)
                            arg13[0].o = arg10[0].o
                        else
                            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            arg13[0].o = arg10[0].o
                            
                            do
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_880[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm5[0].o)
                                arg9 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                                char temp0_431 = _mm256_movemask_ps(zmm0)
                                
                                if ((temp0_431 & 1) == 0)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                    
                                    if ((temp0_431 & 2) != 0)
                                        goto label_1402d6bf5
                                    
                                    goto label_1402d6b72
                                
                                int64_t var_8e0
                                zmm0[0].o = var_8e0.o
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*arg9[0].q), 0)
                                var_8e0.o = zmm0[0].o
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                
                                if ((temp0_431 & 2) != 0)
                                label_1402d6bf5:
                                    uint32_t rax_112 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                    zmm2[0].o = var_8e0.o
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_112, 1)
                                    var_8e0.o = zmm2[0].o
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                    
                                    if ((temp0_431 & 4) == 0)
                                        goto label_1402d6b87
                                    
                                    goto label_1402d6c24
                                
                            label_1402d6b72:
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                
                                if ((temp0_431 & 4) == 0)
                                label_1402d6b87:
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                                    
                                    if ((temp0_431 & 8) != 0)
                                        goto label_1402d6c57
                                    
                                    goto label_1402d6b95
                                
                            label_1402d6c24:
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o = var_8e0.o
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0]), 2)
                                var_8e0.o = zmm2[0].o
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                                
                                if ((temp0_431 & 8) == 0)
                                label_1402d6b95:
                                    zmm2[0].o = var_8e0.o
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_431 & 0x10) != 0)
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                            zx.d(*zmm0[0]), 4)
                                else
                                label_1402d6c57:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    uint32_t rax_116 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                    zmm2[0].o = var_8e0.o
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_116, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_431 & 0x10) != 0)
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                            zx.d(*zmm0[0]), 4)
                                
                                if ((temp0_431 & 0x20) == 0)
                                    if ((temp0_431 & 0x40) != 0)
                                        goto label_1402d6af8
                                    
                                    goto label_1402d6ca1
                                
                                uint32_t rax_104 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_104, 5)
                                
                                if ((temp0_431 & 0x40) == 0)
                                label_1402d6ca1:
                                    
                                    if (temp0_431 s< 0)
                                    label_1402d6b14:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint32_t rax_108 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_108, 7)
                                else
                                label_1402d6af8:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm5[0]), 6)
                                    
                                    if (temp0_431 s< 0)
                                        goto label_1402d6b14
                                
                                var_8e0.o = zmm2[0].o
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
                                zmm5[0].o ^= zmm1[0].o
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_840.32[0].o)
                                zmm0[0].o ^= zmm1[0].o
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                arg8 = _mm256_and_ps(zmm0, arg11)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm5 = _mm256_and_ps(arg8, arg12)
                                
                                if (_mm256_movemask_ps(zmm5) != j_1)
                                    zmm0 = _mm256_xor_ps(arg8, arg11)
                                
                                arg7 = _mm256_blendv_ps(arg7, arg5, arg8)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                arg5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                                arg15[0].o = zx.o(0)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg8[0].o)
                                arg6 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                arg11 = _mm256_and_ps(arg6, zmm0)
                                zmm0 = _mm256_and_ps(arg11, arg12)
                                j_1 = _mm256_movemask_ps(zmm0)
                            while (j_1 != 0)
                        
                        arg9 = var_680.32
                        arg14[0].o = var_720.o
                        arg8[0].o = var_500
                    
                    arg9 = _mm256_blendv_ps(arg9, arg7, arg12)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg9[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_880[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
                    arg5 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    
                    if ((rcx_11 & 1) != 0)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg5[0]), 0)
                    
                    arg7[0].o = var_730.o
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    
                    if ((rcx_11 & 2) == 0)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                        
                        if ((rcx_11 & 4) != 0)
                            goto label_1402d59bc
                        
                        goto label_1402d718d
                    
                    uint32_t rax_9 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_9, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                    
                    if ((rcx_11 & 4) != 0)
                    label_1402d59bc:
                        zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm5[0]), 2)
                        zmm5[0].o = var_8b0.o
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg6[0].o)
                        
                        if ((rcx_11 & 8) == 0)
                            goto label_1402d71a3
                        
                        goto label_1402d59e5
                    
                label_1402d718d:
                    zmm5[0].o = var_8b0.o
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg6[0].o)
                    
                    if ((rcx_11 & 8) == 0)
                    label_1402d71a3:
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        
                        if ((rcx_11 & 0x10) != 0)
                            goto label_1402d5a10
                        
                        goto label_1402d71b2
                    
                label_1402d59e5:
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    uint32_t rax_13 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_13, 3)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                    
                    if ((rcx_11 & 0x10) != 0)
                    label_1402d5a10:
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0]), 4)
                        
                        if ((rcx_11 & 0x20) == 0)
                            goto label_1402d71bb
                        
                        goto label_1402d5a24
                    
                label_1402d71b2:
                    
                    if ((rcx_11 & 0x20) == 0)
                    label_1402d71bb:
                        
                        if ((rcx_11 & 0x40) != 0)
                            goto label_1402d5a35
                        
                        goto label_1402d71c4
                    
                label_1402d5a24:
                    uint32_t rax_17 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_17, 5)
                    
                    if ((rcx_11 & 0x40) == 0)
                    label_1402d71c4:
                        arg5 = var_960_1
                        
                        if (temp0_84.b s< 0)
                        label_1402d5a56:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            uint32_t rax_21 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_21, 7)
                    else
                    label_1402d5a35:
                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg5[0]), 6)
                        arg5 = var_960_1
                        
                        if (temp0_84.b s< 0)
                            goto label_1402d5a56
                    
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    arg11 = _mm256_blendv_ps(var_8a0_1, zmm0, arg12)
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_900[0].o)
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1), arg12)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg11 = _mm256_blendv_ps(arg11, arg5, zmm0)
                    
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_880[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    
                    if ((rcx_11 & 1) != 0)
                        arg14[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*zmm1[0].q), 0)
                    
                    arg6[0].o = var_7e0.o
                    arg16[0].o = var_740.o
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    
                    if ((rcx_11 & 2) != 0)
                        uint16_t rax_143[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_143, 1)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_940.o)
                    
                    if ((rcx_11 & 4) != 0)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg14[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*zmm2[0].q), 2)
                    
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                    var_500 = arg8[0].o
                    arg8 = arg9
                    
                    if ((rcx_11 & 8) != 0)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint16_t rax_147[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_147, 3)
                    
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    
                    if ((rcx_11 & 0x10) != 0)
                        arg14[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*zmm1[0].q), 4)
                    
                    arg10 = arg8
                    zmm0[0].o = var_500
                    zmm2[0].o = zmm0[0].o & data_142fc92e0
                    
                    if ((rcx_11 & 0x20) == 0)
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        
                        if ((rcx_11 & 0x40) != 0)
                            goto label_1402d5a8b
                        
                        goto label_1402d730a
                    
                    uint16_t rax_23[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_23, 5)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    
                    if ((rcx_11 & 0x40) == 0)
                    label_1402d730a:
                        arg5[0].o = var_910.o
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        
                        if (temp0_84.b s< 0)
                        label_1402d5ab2:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint16_t rax_27[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_27, 7)
                    else
                    label_1402d5a8b:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg14[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg5[0]), 6)
                        arg5[0].o = var_910.o
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        
                        if (temp0_84.b s< 0)
                            goto label_1402d5ab2
                    
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm0[0].o = arg14[0].o & data_142fc92e0
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                else
                    zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    var_3c0 = zmm0[0].o
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg5[0].o)
                    arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    char rcx_10 = temp0_84.b
                    int128_t var_2b0
                    zmm1[0].o = var_2b0
                    
                    if ((rcx_10 & 1) != 0)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg5[0], 0)
                    
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    var_880[0].o = zmm2[0].o
                    
                    if ((rcx_10 & 2) != 0)
                        int64_t rax_41 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_41, 1)
                    
                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0 = var_940.32
                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    
                    if ((rcx_10 & 4) == 0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                        
                        if ((rcx_10 & 8) != 0)
                            goto label_1402d667b
                        
                        goto label_1402d5f0e
                    
                    arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0], 2)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                    
                    if ((rcx_10 & 8) != 0)
                    label_1402d667b:
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rax_75 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_75, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        
                        if ((rcx_10 & 0x10) == 0)
                            goto label_1402d5f1d
                        
                        goto label_1402d66a0
                    
                label_1402d5f0e:
                    zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                    
                    if ((rcx_10 & 0x10) == 0)
                    label_1402d5f1d:
                        
                        if ((rcx_10 & 0x20) != 0)
                            goto label_1402d66ae
                        
                        goto label_1402d5f26
                    
                label_1402d66a0:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 4)
                    
                    if ((rcx_10 & 0x20) != 0)
                    label_1402d66ae:
                        int64_t rax_77 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_77, 5)
                        
                        if ((rcx_10 & 0x40) == 0)
                            goto label_1402d5f2f
                        
                        goto label_1402d66c2
                    
                label_1402d5f26:
                    
                    if ((rcx_10 & 0x40) != 0)
                    label_1402d66c2:
                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg5[0], 6)
                        
                        if (temp0_84.b s< 0)
                        label_1402d66db:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_79 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_79, 7)
                    else
                    label_1402d5f2f:
                        
                        if (temp0_84.b s< 0)
                            goto label_1402d66db
                    
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    var_2b0 = zmm1[0].o
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    arg7 = var_840.32
                    arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                    arg8[0].o ^= arg9[0].o
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                    zmm5[0].o ^= arg9[0].o
                    arg13 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                    zmm5 = _mm256_and_ps(arg13, arg12)
                    var_340.32 = arg13
                    
                    if (_mm256_movemask_ps(zmm5) == 0)
                        arg10 = arg14
                    else
                        zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        arg6[0].o ^= arg9[0].o
                        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        zmm0[0].o ^= arg9[0].o
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        zmm1 = var_960_1
                        arg10 = _mm256_blendv_ps(arg14, zmm1, zmm0)
                        arg6[0].o = var_3c0
                        arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
                        arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg9[0].o)
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                        zmm5[0].o ^= arg9[0].o
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                        arg7[0].o ^= arg9[0].o
                        zmm5 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                        arg11 = _mm256_and_ps(zmm0, zmm5)
                        zmm0 = _mm256_and_ps(arg11, arg12)
                        int32_t j_2 = _mm256_movemask_ps(zmm0)
                        
                        if (j_2 != 0)
                            arg6 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                            arg13 = arg14
                            
                            do
                                arg14 = arg6
                                arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_880[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg7[0].o)
                                arg9 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                                char temp0_189 = _mm256_movemask_ps(zmm0)
                                int128_t var_660
                                zmm1[0].o = var_660
                                
                                if ((temp0_189 & 1) == 0)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                    
                                    if ((temp0_189 & 2) != 0)
                                        goto label_1402d602e
                                    
                                    goto label_1402d6150
                                
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg9[0].q, 0)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                
                                if ((temp0_189 & 2) != 0)
                                label_1402d602e:
                                    int64_t rax_44 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_44, 1)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                    
                                    if ((temp0_189 & 4) == 0)
                                        goto label_1402d6165
                                    
                                    goto label_1402d604e
                                
                            label_1402d6150:
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                
                                if ((temp0_189 & 4) == 0)
                                label_1402d6165:
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                                    
                                    if ((temp0_189 & 8) != 0)
                                        goto label_1402d606c
                                    
                                    goto label_1402d6173
                                
                            label_1402d604e:
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm5[0], 2)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                                
                                if ((temp0_189 & 8) != 0)
                                label_1402d606c:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    int64_t rax_46 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_46, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_189 & 0x10) == 0)
                                        goto label_1402d6183
                                    
                                    goto label_1402d6092
                                
                            label_1402d6173:
                                zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                
                                if ((temp0_189 & 0x10) == 0)
                                label_1402d6183:
                                    
                                    if ((temp0_189 & 0x20) != 0)
                                        goto label_1402d60a1
                                    
                                    goto label_1402d618d
                                
                            label_1402d6092:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 4)
                                
                                if ((temp0_189 & 0x20) != 0)
                                label_1402d60a1:
                                    int64_t rax_48 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_48, 5)
                                    
                                    if ((temp0_189 & 0x40) == 0)
                                        goto label_1402d6197
                                    
                                    goto label_1402d60b6
                                
                            label_1402d618d:
                                
                                if ((temp0_189 & 0x40) != 0)
                                label_1402d60b6:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm5[0], 6)
                                    
                                    if (temp0_189 s< 0)
                                    label_1402d60cf:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        int64_t rax_50 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_50, 7)
                                else
                                label_1402d6197:
                                    
                                    if (temp0_189 s< 0)
                                        goto label_1402d60cf
                                
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                                var_660 = zmm1[0].o
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_840.o)
                                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                arg8 = _mm256_and_ps(zmm0, arg11)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm5 = _mm256_and_ps(arg8, arg12)
                                
                                if (_mm256_movemask_ps(zmm5) != j_2)
                                    zmm0 = _mm256_xor_ps(arg8, arg11)
                                
                                arg10 = _mm256_blendv_ps(arg10, arg13, arg8)
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                arg7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                                arg6 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_900[0].o)
                                zmm5[0].o ^= zmm1[0].o
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg7[0].o, var_960_1[0].o)
                                arg7[0].o ^= zmm1[0].o
                                zmm5 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                                arg11 = _mm256_and_ps(zmm5, zmm0)
                                zmm0 = _mm256_and_ps(arg11, arg12)
                                j_2 = _mm256_movemask_ps(zmm0)
                                arg13 = arg14
                            while (j_2 != 0)
                    
                    zmm1 = var_340.32
                    zmm0 = _mm256_andnot_ps(zmm1, arg12)
                    
                    if (_mm256_movemask_ps(zmm0) == 0)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg11 = var_8a0_1
                        arg14[0].o = var_720.o
                        arg7[0].o = var_730.o
                        arg13[0].o = zmm2[0].o
                        zmm2[0].o = var_880[0].o
                    else
                        zmm0 = __vxorps_ymmqq_ymmqq_memqq(zmm1, var_780_1)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg10 = _mm256_blendv_ps(arg10, zmm1, zmm0)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_3c0)
                        arg8[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_620.o)
                        arg7[0].o = zx.o(0)
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg15[0].o = zx.o(0)
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                        zmm5 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                        arg14 = _mm256_and_ps(zmm5, zmm0)
                        zmm0 = _mm256_and_ps(arg14, arg12)
                        int32_t j_3 = _mm256_movemask_ps(zmm0)
                        
                        if (j_3 == 0)
                            arg13[0].o = zmm2[0].o
                            zmm2[0].o = var_880[0].o
                        else
                            arg11 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                            arg13[0].o = zmm2[0].o
                            zmm2[0].o = var_880[0].o
                            
                            do
                                arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg7[0].o)
                                arg9 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                                char temp0_372 = _mm256_movemask_ps(zmm0)
                                int128_t var_640
                                int64_t rax_100
                                
                                if ((temp0_372 & 1) != 0)
                                    arg7[0].o = var_640
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg9[0].q, 0)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                    
                                    if ((temp0_372 & 2) != 0)
                                        rax_100 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_100, 1)
                                else
                                    arg7[0].o = var_640
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                    
                                    if ((temp0_372 & 2) != 0)
                                        rax_100 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_100, 1)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                
                                if ((temp0_372 & 4) == 0)
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                                    
                                    if ((temp0_372 & 8) != 0)
                                        goto label_1402d684e
                                    
                                    goto label_1402d6981
                                
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm5[0], 2)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                                
                                if ((temp0_372 & 8) != 0)
                                label_1402d684e:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    uint16_t* rax_94 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_94, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_372 & 0x10) == 0)
                                        goto label_1402d6991
                                    
                                    goto label_1402d6874
                                
                            label_1402d6981:
                                zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                
                                if ((temp0_372 & 0x10) == 0)
                                label_1402d6991:
                                    
                                    if ((temp0_372 & 0x20) != 0)
                                        goto label_1402d6883
                                    
                                    goto label_1402d699b
                                
                            label_1402d6874:
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0], 4)
                                
                                if ((temp0_372 & 0x20) != 0)
                                label_1402d6883:
                                    uint16_t* rax_96 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_96, 5)
                                    
                                    if ((temp0_372 & 0x40) == 0)
                                        goto label_1402d69a5
                                    
                                    goto label_1402d6898
                                
                            label_1402d699b:
                                
                                if ((temp0_372 & 0x40) != 0)
                                label_1402d6898:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm5[0], 6)
                                    
                                    if (temp0_372 s< 0)
                                    label_1402d68b1:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint16_t* rax_98 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_98, 7)
                                else
                                label_1402d69a5:
                                    
                                    if (temp0_372 s< 0)
                                        goto label_1402d68b1
                                
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg15[0].o)
                                var_640 = arg7[0].o
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(arg7[0])
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm0[0].o ^= zmm1[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_840.o)
                                zmm5[0].o ^= zmm1[0].o
                                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                arg8 = _mm256_and_ps(zmm0, arg14)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm5 = _mm256_and_ps(arg8, arg12)
                                
                                if (_mm256_movemask_ps(zmm5) != j_3)
                                    zmm0 = _mm256_xor_ps(arg8, arg14)
                                
                                arg10 = _mm256_blendv_ps(arg10, arg11, arg8)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                                arg11 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                arg7[0].o = zx.o(0)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zx.o(0))
                                arg15[0].o = zx.o(0)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zx.o(0))
                                arg6 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                arg14 = _mm256_and_ps(arg6, zmm0)
                                zmm0 = _mm256_and_ps(arg14, arg12)
                                j_3 = _mm256_movemask_ps(zmm0)
                            while (j_3 != 0)
                        
                        arg11 = var_8a0_1
                        arg14[0].o = var_720.o
                        arg7[0].o = var_730.o
                    
                    zmm5 = _mm256_blendv_ps(var_680.32, arg10, arg12)
                    arg9[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
                    arg6 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                    arg5 = zmm5
                    
                    if ((rcx_10 & 1) != 0)
                        zmm5[0].o = var_920
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0], 0)
                        var_920 = zmm5[0].o
                    
                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    
                    if ((rcx_10 & 2) != 0)
                        int64_t rax_121 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm5[0].o = var_920
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_121, 1)
                        var_920 = zmm5[0].o
                    
                    arg10 = arg5
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_940.o)
                    
                    if ((rcx_10 & 4) != 0)
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm5[0].o = var_920
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm5[0], 2)
                        var_920 = zmm5[0].o
                    
                    zmm5[0].o = var_8b0.o
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                    
                    if ((rcx_10 & 8) != 0)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        int64_t rax_123 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg6[0].o = var_920
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_123, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        
                        if ((rcx_10 & 0x10) != 0)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0], 4)
                    else
                        arg6[0].o = var_920
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        
                        if ((rcx_10 & 0x10) != 0)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0], 4)
                    
                    if ((rcx_10 & 0x20) == 0)
                        if ((rcx_10 & 0x40) != 0)
                            goto label_1402d6fb4
                        
                        goto label_1402d6ecf
                    
                    int64_t rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_127, 5)
                    
                    if ((rcx_10 & 0x40) == 0)
                    label_1402d6ecf:
                        
                        if (temp0_84.b s< 0)
                        label_1402d6fcd:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_129 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_129, 7)
                    else
                    label_1402d6fb4:
                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg5[0], 6)
                        
                        if (temp0_84.b s< 0)
                            goto label_1402d6fcd
                    
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    arg11 = _mm256_blendv_ps(arg11, zmm0, arg12)
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_900[0].o)
                    zmm1 = var_960_1
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg12)
                    bool cond:19_1 = _mm256_movemask_ps(zmm0) == 0
                    var_920 = arg6[0].o
                    
                    if (not(cond:19_1))
                        arg11 = _mm256_blendv_ps(arg11, zmm1, zmm0)
                    
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    
                    if ((rcx_10 & 1) != 0)
                        zmm2[0].o = var_7e0.o
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 0)
                        var_7e0.o = zmm2[0].o
                    
                    arg16[0].o = var_740.o
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    
                    if ((rcx_10 & 2) != 0)
                        int64_t rax_130 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg6[0].o = var_7e0.o
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_130, 1)
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_940.o)
                        
                        if ((rcx_10 & 4) != 0)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 2)
                    else
                        arg6[0].o = var_7e0.o
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_940.o)
                        
                        if ((rcx_10 & 4) != 0)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 2)
                    
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                    
                    if ((rcx_10 & 8) != 0)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_132 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_132, 3)
                        arg5[0].o = var_910.o
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        
                        if ((rcx_10 & 0x10) != 0)
                        label_1402d7098:
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0], 4)
                            
                            if ((rcx_10 & 0x20) == 0)
                                goto label_1402d7036
                            
                            goto label_1402d70a2
                    else
                        arg5[0].o = var_910.o
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        
                        if ((rcx_10 & 0x10) != 0)
                            goto label_1402d7098
                    
                    if ((rcx_10 & 0x20) == 0)
                    label_1402d7036:
                        zmm1[0].o = __vpmovzxwd_xmmdq_memq(var_920.q)
                        
                        if ((rcx_10 & 0x40) != 0)
                            goto label_1402d70b9
                        
                        goto label_1402d7042
                    
                label_1402d70a2:
                    int64_t rax_134 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_134, 5)
                    zmm1[0].o = __vpmovzxwd_xmmdq_memq(var_920.q)
                    
                    if ((rcx_10 & 0x40) == 0)
                    label_1402d7042:
                        zmm2[0].o = var_920
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        
                        if (temp0_84.b s< 0)
                        label_1402d70dd:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_136 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_136, 7)
                    else
                    label_1402d70b9:
                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 6)
                        zmm2[0].o = var_920
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        
                        if (temp0_84.b s< 0)
                            goto label_1402d70dd
                    
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0])
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                var_7e0.o = arg6[0].o
                var_720.o = arg14[0].o
                zmm0[0].o = zx.o(0)
                arg8[0].o = var_700.o
                arg15 = var_440.32
                
                if (arg20 != 1)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg5[0].o = data_142d3f5b0
                    zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                    zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg5[0].o = var_910.o
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm2 = var_1a0_1
                    zmm1 = _mm256_sub_ps(zmm2, _mm256_cvtepi32_ps(zmm1))
                    zmm0 = _mm256_div_ps(zmm1, _mm256_cvtepi32_ps(zmm0))
                
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                var_940.32 = _mm256_blendv_ps(zmm1, zmm0, arg12)
                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                arg6 = var_460.32
        
        arg9[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg16[0].o, arg8[0].o, 0x88)
        arg8 = _mm256_insertf128_ps(arg15, arg5[0].o, 1)
        arg13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_800_1, var_6a0.o, 1)
        var_800_1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm1[0].o = data_142d3f5b0
        var_800_1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_800_1[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm1, var_800_1[0].o, 1), var_320)
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm2, data_143442540, zmm0)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        arg15 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg14 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        arg16[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
        uint64_t r11_2 = zx.q(r8.d)
        var_8a0 = arg11
        var_680.32 = arg10
        var_900 = arg13
        var_960 = arg14
        var_880 = arg8
        float var_4e0_1[0x8]
        float var_4c0_1[0x8]
        float var_4a0_1[0x8]
        
        if (r8.d u> 6)
        label_1402d7630:
            arg14[0].o = zx.o(0)
            var_4a0_1 = arg14
            var_4c0_1 = arg14
            var_4e0_1 = arg14
            zmm1[0].o = zx.o(0)
            arg13[0].o = zx.o(0)
            arg8[0].o = var_760.o
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg10[0].o, var_7c0_1[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm5[0].o)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            arg12 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (r11_2)
                case 0, 1
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg5[0].o = arg7[0].o
                    arg7 = arg8
                    arg8[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm5[0].o)
                    arg8[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                    arg8[0].o = var_760.o
                    arg7[0].o = arg5[0].o
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                    int64_t rdi_6 = zmm1[0].q
                    int64_t r9_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    double r14_2 = zmm0[0]
                    int64_t r10_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rsi_2 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    double rcx_12 = zmm5[0]
                    double rax_152 = arg6[0]
                    int64_t rdx_2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm0[0].o = *(arg17 i+ rcx_12)
                    zmm1[0].o = *(arg17 i+ rcx_12 + 4)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rsi_2), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 i+ rax_152), 0x20)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rdx_2), 0x30)
                    zmm2[0].o = *(arg17 + rdi_6)
                    arg6[0].o = *(arg17 + rdi_6 + 4)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + r9_1), 0x10)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 i+ r14_2), 0x20)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + r10_2), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rsi_2 + 4), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 i+ rax_152 + 4), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rdx_2 + 4), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r9_1 + 4), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 i+ r14_2 + 4), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r10_2 + 4), 0x30)
                    arg13 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                    zmm0[0].o = *(arg17 + rdi_6 + 8)
                    zmm2[0].o = *(arg17 i+ rcx_12 + 8)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rsi_2 + 8), 0x10)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 i+ rax_152 + 8), 0x20)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rdx_2 + 8), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r9_1 + 8), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 i+ r14_2 + 8), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r10_2 + 8), 0x30)
                    arg14 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                case 2
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    arg8[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm5[0].o)
                    arg8[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                    int64_t rcx_13 = zmm1[0].q
                    int64_t r15_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    double rbx_6 = zmm0[0]
                    int64_t rdi_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    double rax_153 = zmm5[0]
                    double r14_3 = arg6[0]
                    int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm0[0].o = zx.o(*(arg17 + rcx_13))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + r15_3), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 i+ rbx_6), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + rdi_7), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 i+ rax_153), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + r10_3), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 i+ r14_3), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + r9_2), 7)
                    zmm1[0].o = zx.o(*(arg17 + rcx_13 + 2))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + r15_3 + 2), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 i+ rbx_6 + 2), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + rdi_7 + 2), 3)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 i+ rax_153 + 2), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + r10_3 + 2), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 i+ r14_3 + 2), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + r9_2 + 2), 7)
                    zmm2[0].o = zx.o(*(arg17 + rcx_13 + 4))
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r15_3 + 4), 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 i+ rbx_6 + 4), 2)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rdi_7 + 4), 3)
                    zmm2[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 i+ rax_153 + 4), 4)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r10_3 + 4), 5)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 i+ r14_3 + 4), 6)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm5[0].o = zx.o(0)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                    arg8[0].o = data_1434424d0
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm0[0].o, 1))
                    arg6 = data_1434424e0
                    arg5 = arg9
                    arg9 = arg6
                    zmm0 = _mm256_div_ps(zmm0, arg6)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r9_2 + 4), 7)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm1[0].o, 1)), arg9)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    arg8[0].o = var_760.o
                    zmm2 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm2[0].o, 1)), arg9)
                    arg9 = arg5
                    arg6 = data_143442560
                    arg13 = _mm256_mul_ps(zmm0, arg6)
                    zmm1 = _mm256_mul_ps(zmm1, arg6)
                    arg14 = _mm256_mul_ps(zmm2, arg6)
                case 3
                    zmm0[0].o = *(arg17 + rdx_1)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r12_1), 0x10)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rcx_9), 0x20)
                    zmm1[0].o = *(arg17 + rdx_1 + 4)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rbx_4), 0x30)
                    arg6[0].o = *(arg17 + r14_1)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r8_1), 0x10)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r10_1), 0x20)
                    zmm5[0].o = *(arg17 + r14_1 + 4)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r15_2), 0x30)
                    arg5 = arg13
                    arg13 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + r12_1 + 4), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rcx_9 + 4), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rbx_4 + 4), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r8_1 + 4), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + r10_1 + 4), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + r15_2 + 4), 0x30)
                    arg6[0].o = *(arg17 + r14_1 + 8)
                    zmm5[0].o = *(arg17 + rdx_1 + 8)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r12_1 + 8), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + rcx_9 + 8), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + rbx_4 + 8), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r8_1 + 8), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r10_1 + 8), 0x20)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    var_6a0.32 = zmm0
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r15_2 + 8), 0x30)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                    double var_800_2[0x4] = zmm0
                    zmm0[0].o = *(arg17 + r14_1 + 0xc)
                    zmm1[0].o = *(arg17 + rdx_1 + 0xc)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + r12_1 + 0xc), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rcx_9 + 0xc), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rbx_4 + 0xc), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r8_1 + 0xc), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r10_1 + 0xc), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r15_2 + 0xc), 0x30)
                    arg6[0].o = *(arg17 + r14_1 + 0x10)
                    zmm5[0].o = *(arg17 + rdx_1 + 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r12_1 + 0x10), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + rcx_9 + 0x10), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + rbx_4 + 0x10), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r8_1 + 0x10), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r10_1 + 0x10), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r15_2 + 0x10), 0x30)
                    arg11[0].o = arg7[0].o
                    arg7 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    arg10 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                    zmm0[0].o = *(arg17 + r14_1 + 0x14)
                    arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm1 = arg8
                    arg8[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg8[0].o)
                    arg8[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                    arg8[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                    arg8[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
                    arg8[0].o = *(arg17 + rdx_1 + 0x14)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + r12_1 + 0x14), 0x10)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + rcx_9 + 0x14), 0x20)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + rbx_4 + 0x14), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r8_1 + 0x14), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r10_1 + 0x14), 0x20)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                    int64_t rax_155 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rcx_16 = zmm2[0].q
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r15_2 + 0x14), 0x30)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                    double rdx_6 = arg6[0]
                    int64_t rdi_9 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    int64_t r10_4 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t r9_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    int64_t rsi_5 = zmm2[0].q
                    zmm2[0].o = zx.o(*(arg17 + rcx_16))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rax_155), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 i+ rdx_6), 2)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rdi_9), 3)
                    double rax_156 = zmm5[0]
                    arg6[0].o = zx.o(*(arg17 + rsi_5))
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r10_4), 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 i+ rax_156), 2)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r9_4), 3)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm2, arg6[0].o, 1), 
                        data_143442420)
                    arg8[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm1[0].o = data_143442490
                    arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    zmm5 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, arg8[0].o, 1)), 
                        data_1434424a0)
                    zmm1 = _mm256_mul_ps(arg7, zmm5)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                    arg13 = _mm256_add_ps(arg13, zmm1)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0xa)
                    arg8[0].o = data_143442480
                    zmm1[0].o &= arg8[0].o
                    arg7[0].o = data_143442440
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                    zmm5[0].o &= arg8[0].o
                    arg8[0].o = var_760.o
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm1[0].o, 1))
                    zmm5 = data_143442460
                    zmm1 = _mm256_mul_ps(arg10, _mm256_div_ps(zmm1, zmm5))
                    arg10 = var_680.32
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_6a0.32)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                    arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0x15)
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                    arg7[0].o = arg11[0].o
                    arg11 = var_8a0
                    zmm2 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, arg6[0].o, 1)), zmm5)
                    zmm0 = _mm256_mul_ps(zmm0, zmm2)
                    arg14 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_800_2)
                case 4, 5, 6
                    goto label_1402d7630
            
            var_4e0_1 = arg13
            var_4c0_1 = zmm1
            var_4a0_1 = arg14
        
        arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg7[0].o, 0x88)
        zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm2[0].o)
        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        zmm0[0].o ^= zmm5[0].o
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        arg5[0].o ^= zmm5[0].o
        arg12 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
        
        if (_mm256_movemask_ps(arg12) != 0)
            double var_3a0_1[0x4]
            float var_380_1[0x8]
            
            if (r8.d u> 6)
            label_1402d7eb0:
                zmm0[0].o = zx.o(0)
                var_3a0_1 = _mm256_maskstore_ps(arg12, zmm0)
                var_380_1 = _mm256_maskstore_ps(arg12, zmm0)
            else
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg11[0].o, var_7c0_1[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm2[0].o, var_8b0.o)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                arg14 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                arg5 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                
                switch (r11_2)
                    case 0, 1
                        arg7 = var_900
                        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg13[0].o = arg8[0].o
                        arg8 = var_960
                        zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(var_880[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_880[0].o, arg14[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg6[0].o)
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, arg5)
                        arg6[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                        zmm2 = _mm256_blendv_ps(arg11, zmm2, arg6)
                        double r9_5 = zmm0[0]
                        int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        float* rcx_17 = arg17
                        void* rsi_6 = rcx_17 i+ r9_5
                        void* r15_4 = rcx_17 + r11_3
                        arg10 = arg9
                        arg9[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r14_4 = zmm2[0].q
                        void* rdx_7 = rcx_17 + r14_4
                        int64_t r10_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        void* rax_160 = rcx_17 + r10_5
                        zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg7 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm0 = _mm256_blendv_ps(arg11, arg7, arg6)
                        zmm2[0].o = *(zmm0[0] + rdx_7)
                        float* rbx_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double r12_3 = zmm5[0]
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_8 + rax_160), 0x10)
                        arg8 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg6 = _mm256_blendv_ps(arg11, arg8, arg6)
                        zmm1[0].o = *(arg6[0] + rdx_7)
                        float* rdx_8 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_8 + rax_160), 0x10)
                        void* rax_161 = rcx_17 i+ r12_3
                        int64_t rdx_9 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(zmm0[0] + rax_161), 0x20)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg6[0] + rax_161), 0x20)
                        void* rax_162 = rcx_17 + rdx_9
                        float* rbx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_12 + rax_162), 0x30)
                        float* rbx_13 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_13 + rax_162), 0x30)
                        int64_t rdi_11 = arg9[0].q
                        zmm2 = _mm256_blendv_ps(arg11, arg7, arg5)
                        arg6[0].o = *(zmm2[0].q + rsi_6)
                        arg5 = _mm256_blendv_ps(arg11, arg8, arg5)
                        arg8[0].o = arg13[0].o
                        zmm5[0].o = *(arg5[0] + rsi_6)
                        void* rsi_7 = rcx_17 + rdi_11
                        float* rbx_16 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_16 + r15_4), 0x10)
                        float* rbx_17 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_17 + r15_4), 0x10)
                        int64_t rbx_18 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        arg9 = arg10
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm2[0].q + rsi_7), 0x20)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg5[0] + rsi_7), 0x20)
                        void* rax_165 = rcx_17 + rbx_18
                        float* rsi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_8 + rax_165), 0x30)
                        float* rsi_9 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_9 + rax_165), 0x30)
                        arg6[0].o = *(rcx_17 i+ r9_5)
                        zmm5[0].o = *(rcx_17 + r14_4)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_17 + r10_5), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_17 i+ r12_3), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_17 + rdx_9), 0x30)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_17 + r11_3), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_17 + rdi_11), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_17 + rbx_18), 0x30)
                        var_3a0_1 =
                            _mm256_maskstore_ps(arg12, _mm256_insertf128_ps(arg6, zmm5[0].o, 1))
                        var_380_1 =
                            _mm256_maskstore_ps(arg12, _mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    case 2
                        zmm2 = var_880
                        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                        arg6 = var_900
                        zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm5 = var_960
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg10[0].o = arg8[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        zmm5 = _mm256_blendv_ps(arg8, zmm1, arg5)
                        zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg8, zmm0, arg6)
                        double r9_6 = zmm5[0]
                        void* rbx_19 = arg17 i+ r9_6
                        int64_t r8_2 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* r14_5 = arg17 + r8_2
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        int64_t r10_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg7 = _mm256_blendv_ps(arg8, zmm2, arg5)
                        zmm5 = _mm256_blendv_ps(arg8, zmm2, arg6)
                        double r15_5 = zmm0[0]
                        double rdx_10 = arg7[0]
                        uint16_t* rcx_18 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        uint16_t* r11_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg5 = _mm256_blendv_ps(arg8, zmm2, arg5)
                        zmm2 = _mm256_blendv_ps(arg8, zmm2, arg6)
                        arg8[0].o = arg10[0].o
                        arg6[0].o = zx.o(*(rdx_10 i+ rbx_19))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rcx_18 + r14_5), 1)
                        uint16_t* rsi_10 = zmm0[0]
                        double rdx_12 = arg5[0]
                        uint16_t* rcx_19 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        uint16_t* rdi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        uint16_t* rbx_20 = zmm0[0]
                        zmm0[0].o = zx.o(*(rdx_12 i+ rbx_19))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_19 + r14_5), 1)
                        void* rcx_20 = arg17 i+ r15_5
                        void* rdx_14 = arg17 + r10_6
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rsi_10 + rcx_20), 2)
                        int64_t r14_6 = zmm1[0].q
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rbx_20 + rcx_20), 2)
                        void* rcx_21 = arg17 + r14_6
                        int64_t rbx_21 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r11_4 + rdx_14), 3)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(zmm5[0] + rcx_21), 4)
                        int64_t rsi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_12 + rdx_14), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rcx_21), 4)
                        int64_t rcx_22 = zmm1[0].q
                        void* rdx_16 = arg17 + rbx_21
                        uint16_t* rdi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rdi_13 + rdx_16), 5)
                        uint16_t* rdi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_14 + rdx_16), 5)
                        void* rdx_17 = arg17 + rcx_22
                        arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg5[0] + rdx_17), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rdx_17), 6)
                        void* rdx_18 = arg17 + rsi_12
                        uint16_t* rdi_17 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_17 + rdx_18), 7)
                        uint16_t* rdi_18 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_18 + rdx_18), 7)
                        zmm2[0].o = zx.o(*(arg17 i+ r9_6))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r8_2), 1)
                        r8 = var_808
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 i+ r15_5), 2)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r10_6), 3)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r14_6), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rbx_21), 5)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rcx_22), 6)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rsi_12), 7)
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
                        var_3a0_1 = _mm256_maskstore_ps(arg12, _mm256_mul_ps(zmm2, arg6))
                        var_380_1 = _mm256_maskstore_ps(arg12, 
                            _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm1), arg5), arg6))
                        zmm0 = _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm0), arg5), arg6)
                    case 3
                        zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_600.32, var_7d0, 1)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                        zmm2[0].o ^= arg6[0].o
                        arg13 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0 = _mm256_and_ps(arg13, zmm1)
                        int64_t rax_168 = sx.q(zmm0[0].d)
                        void* r8_3 = arg17 + rax_168
                        int32_t temp0_1001 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = *(arg17 + rax_168)
                        int64_t r15_6 = sx.q(temp0_1001)
                        void* r10_7 = arg17 + r15_6
                        int64_t rsi_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* rdx_20 = arg17 + rsi_13
                        int64_t rax_169 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        void* r9_7 = arg17 + rax_169
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rcx_28 = sx.q(zmm0[0].d)
                        void* r14_7 = arg17 + rcx_28
                        zmm2[0].o = *(arg17 + rcx_28)
                        int64_t rbx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        void* r11_5 = arg17 + rbx_22
                        int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* rdi_20 = arg17 + r12_4
                        int32_t temp0_1007 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rbx_22), 0x10)
                        int64_t rbx_23 = sx.q(temp0_1007)
                        void* r13_2 = arg17 + rbx_23
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r12_4), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rbx_23), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + r15_6), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rsi_13), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rax_169), 0x30)
                        zmm2 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9520)
                        uint64_t rax_170 = zx.q(zmm2[0])
                        uint64_t r15_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        uint64_t r12_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        uint64_t rsi_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        arg6[0].o = *(rax_170 + r8_3)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o = *(zx.q(zmm2[0]) + r14_7)
                        uint64_t rax_172 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        uint64_t rbx_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        var_7d0[0] = r11_5
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_172 + r11_5), 0x10)
                        float* rax_173 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        var_6e0 = rdi_20
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_24 + rdi_20), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_173 + r13_2), 0x30)
                        var_6c0 = r13_2
                        var_780_1[0].q = r10_7
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_7 + r10_7), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r12_5 + rdx_20), 0x20)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        double var_800_3[0x4] = zmm0
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_14 + r9_7), 0x30)
                        var_6a0.32 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9540)
                        uint64_t rax_174 = zx.q(zmm0[0].d)
                        float* r15_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* r12_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* rsi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm1[0].o = *(rax_174 + r8_3)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = *(zx.q(zmm0[0].d) + r14_7)
                        float* rax_176 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* rbx_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_176 + r11_5), 0x10)
                        float* rax_177 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_25 + rdi_20), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_177 + r13_2), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_8 + r10_7), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_6 + rdx_20), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_15 + r9_7), 0x30)
                        var_760.32 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423c0)
                        arg11[0].o = *(zx.q(zmm0[0].d) + r8_3)
                        uint64_t rax_179 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t rax_180 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t rax_181 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        var_600.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423e0)
                        zmm0[0].o = *(zx.q(arg10[0]) + r8_3)
                        var_620.o = zmm0[0].o
                        arg16 = arg9
                        arg9 = __vandps_ymmqq_ymmqq_memqq(arg13, data_143442400)
                        int32_t* rax_184 = zx.q(arg9[0])
                        arg7 = var_880
                        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm5[0].o = *(rax_184 + r8_3)
                        uint64_t rsi_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int32_t* rdx_21 = zx.q(zmm1[0])
                        uint64_t rdi_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm0[0].o = *(rdx_21 + r14_7)
                        uint64_t rcx_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
                        var_440.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        var_460.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        uint64_t r8_4 = zx.q(zmm1[0])
                        uint64_t r9_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        uint64_t r10_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        uint64_t r11_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        uint64_t rbx_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                        float* r15_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                        float* r14_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                        zmm1[0].o = *(r8_4 + r14_7)
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        float* r8_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        uint64_t rcx_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        uint64_t rdx_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = *(zx.q(zmm2[0]) + r14_7)
                        double rax_186 = var_7d0[0]
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_600.q i+ rax_186), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_8 i+ rax_186), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r8_5 i+ rax_186), 0x10)
                        r8 = var_808
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_16 + var_6e0), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_8 + var_6e0), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_42 + var_6e0), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_21 + var_6c0), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_6 + var_6c0), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_22 + var_6c0), 0x30)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
                        arg13[0].o = arg8[0].o
                        arg8[0].o = _mm256_extractf128_ps(var_900[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                        arg10 = var_960
                        arg8[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_900[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                        arg7[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                        arg8[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                        arg7 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
                        var_900[0].o = zx.o(0)
                        arg5 = _mm256_blendv_ps(var_900, arg5, arg7)
                        arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg8[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                        arg7[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                        arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        arg6 = _mm256_blendv_ps(var_900, arg6, arg7)
                        int64_t rax_189 = var_780_1[0].q
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                            *(rax_179 + rax_189), 0x10)
                        arg8[0].o = var_620.o
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rcx_39 + rax_189), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_26 + rax_189), 0x10)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_180 + rdx_20), 0x20)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_181 + r9_7), 0x30)
                        arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, 
                            *(var_440.q + rdx_20), 0x20)
                        r13 = var_6e8
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(var_460.q + r9_7), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_9 + rdx_20), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r14_8 + r9_7), 0x30)
                        double rax_191 = arg5[0]
                        int64_t rcx_47 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        double rdx_26 = arg5[0]
                        int64_t rbx_27 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = zx.o(*(arg17 i+ rax_191))
                        int64_t rax_192 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rcx_47), 1)
                        double rcx_48 = arg6[0]
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg5[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 i+ rdx_26), 2)
                        int64_t rdx_27 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rbx_27), 3)
                        double rbx_28 = arg6[0]
                        arg6[0].o = zx.o(*(arg17 i+ rcx_48))
                        arg6[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rax_192), 1)
                        arg6[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 i+ rbx_28), 2)
                        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rdx_27), 3)
                        arg11 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        arg10 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                        arg9 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                        zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                        arg8[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = data_143442490
                        arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg8[0].o, 1)
                        arg8[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0xa)
                        zmm0[0].o = data_143442480
                        arg8[0].o &= zmm0[0].o
                        zmm1[0].o = data_143442440
                        arg7[0].o = zmm1[0].o
                        arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                        zmm5[0].o &= zmm0[0].o
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                        arg8[0].o = arg13[0].o
                        zmm2 = __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), data_1434424a0)
                        zmm5 = _mm256_cvtepi32_ps(zmm5)
                        zmm0 = data_143442460
                        zmm5 = _mm256_div_ps(zmm5, zmm0)
                        zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg11, zmm2), var_800_3)
                        zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg10, zmm5), var_6a0.32)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0x15)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        var_3a0_1 = _mm256_maskstore_ps(arg12, zmm2)
                        zmm0 = _mm256_mul_ps(arg9, _mm256_div_ps(_mm256_cvtepi32_ps(arg5), zmm0))
                        arg9 = arg16
                        var_380_1 = _mm256_maskstore_ps(arg12, zmm1)
                        zmm0 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_760.32)
                    case 4, 5, 6
                        goto label_1402d7eb0
            
            float var_360_1[0x8] = _mm256_maskstore_ps(arg12, zmm0)
            arg5 = var_4e0_1
            arg6 = var_4c0_1
            zmm5 = var_4a0_1
            zmm0 = _mm256_sub_ps(var_3a0_1, arg5)
            zmm1 = _mm256_sub_ps(var_380_1, arg6)
            zmm2 = _mm256_sub_ps(var_360_1, zmm5)
            arg7 = var_940.32
            zmm0 = _mm256_mul_ps(arg7, zmm0)
            zmm1 = _mm256_mul_ps(arg7, zmm1)
            zmm2 = _mm256_mul_ps(arg7, zmm2)
            float var_4e0_2[0x8] = _mm256_maskstore_ps(arg12, _mm256_add_ps(arg5, zmm0))
            float var_4c0_2[0x8] = _mm256_maskstore_ps(arg12, _mm256_add_ps(arg6, zmm1))
            zmm0 = _mm256_add_ps(zmm5, zmm2)
            arg13 = var_4e0_2
            zmm1 = var_4c0_2
            arg14 = _mm256_maskstore_ps(arg12, zmm0)
        
        zmm2 = _mm256_insertf128_ps(arg9, arg8[0].o, 1)
        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        arg6[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        arg10[0].o = zx.o(0)
        zmm5[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
        arg9[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
        arg8[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg14[0].o, 0x28)
        int128_t var_220 = arg7[0].o
        zmm5[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
        int128_t var_210_1 = zmm5[0].o
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg14[0].o, 0xa8)
        int128_t var_200_1 = zmm5[0].o
        zmm1[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
        int128_t var_1f0_1 = zmm1[0].o
        zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
        zmm5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg6[0].o, 0x28)
        int128_t var_1e0_1 = arg5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        int128_t var_1d0_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6[0].o, 0xa8)
        int128_t var_1c0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
        int128_t var_1b0_1 = zmm0[0].o
        uint64_t j_4 = 0xff
        arg4 = var_4f0
        arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        
        do
            uint64_t rcx_49
            uint64_t rflags_1
            
            if (j_4 == 0)
                rcx_49 = 0x40
            else
                rcx_49, rflags_1 = _bit_scan_forward(j_4)
            float var_120[0x8] = zmm2
            zmm0[0].o = (&var_220)[rcx_49]
            *(r13 + sx.q(var_120[zx.q(rcx_49.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            j_4 &= rol.q(-2, rcx_49.b)
        while (j_4 != 0)
        
        r11 = zx.q(r11.d + 8)
    while (r11.d s< i_5)
    
    i_4 = zx.q(arg22)
    
    if (r11.d s< i_4.d)
        goto label_1402d8a1a
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
