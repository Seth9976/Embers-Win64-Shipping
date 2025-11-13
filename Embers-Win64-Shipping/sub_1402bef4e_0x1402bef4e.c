// 函数: sub_1402bef4e
// 地址: 0x1402bef4e
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
float var_320[0x8]
float var_300[0x8]
float var_2e0[0x8]
uint64_t r11
float zmm0[0x8]
float zmm1[0x8]
float zmm5[0x8]

if (i_5 s<= 0)
    r11 = 0
    i_4 = zx.q(arg22)
    
    if (0 s< i_4.d)
    label_1402c21da:
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
        int64_t rax_193 = sx.q(zmm0[0])
        int32_t* rcx_52 = arg2
        int64_t rbx_30 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r11_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t r14_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        int64_t rdi_24 = sx.q(zmm0[0])
        zmm1[0].o = zx.o(*(rcx_52 + rax_193))
        int32_t temp0_1200 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        zmm2[0].o = zx.o(*(rcx_52 + rdi_24))
        int64_t rax_195 = sx.q(temp0_1200)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_52 + rbx_30), 1)
        int32_t temp0_1202 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_52 + rax_195), 1)
        int64_t rbx_32 = sx.q(temp0_1202)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_52 + r11_9), 2)
        int32_t temp0_1205 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_52 + rbx_32), 2)
        int64_t rdx_39 = sx.q(temp0_1205)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_52 + rdx_39), 3)
        double var_680_1[0x2] = zmm0[0].o
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_52 + r14_9), 3)
        float var_640_1[0x8] = zmm0
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, data_142fc9520)
        uint64_t r12_9 = zx.q(zmm0[0])
        float* r14_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = zx.o(arg4)
        int32_t* rsi_18 = zx.q(zmm1[0])
        arg5[0].o = zx.o(*(rsi_18 + rcx_52 + rdi_24))
        uint32_t* r8_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_7 + rcx_52 + rax_195), 1)
        uint32_t* r9_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_10 + rcx_52 + rbx_32), 2)
        uint64_t r11_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_10 + rcx_52 + rdx_39), 3)
        float* rbx_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        float* r10_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = zx.o(*(r12_9 + rcx_52 + rax_193))
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_10 + rcx_52 + rbx_30), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_34 + rcx_52 + r11_9), 2)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_10 + rcx_52 + r14_9), 3)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm0 = _mm256_and_ps(arg14, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
        int64_t rcx_54 = sx.q(zmm0[0])
        int64_t rdx_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm1[0].o = zx.o(*(arg3 + rcx_54))
        int32_t temp0_1230 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rdx_41), 1)
        int64_t rcx_56 = sx.q(temp0_1230)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rcx_56), 2)
        zmm2[0].o = zx.o(*(r12_9 + arg3 + rcx_54))
        int64_t rax_203 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        arg13[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rax_203), 3)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14_10 + arg3 + rdx_41), 1)
        int64_t rdx_44 = sx.q(zmm1[0])
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_34 + arg3 + rcx_56), 2)
        zmm2[0].o = zx.o(*(arg3 + rdx_44))
        int64_t rdx_46 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rdx_46), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_10 + arg3 + rax_203), 3)
        int64_t rdx_48 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rdx_48), 2)
        int64_t rbx_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rbx_36), 3)
        zmm1[0].o = zx.o(*(rsi_18 + arg3 + rdx_44))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_7 + arg3 + rdx_46), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_10 + arg3 + rdx_48), 2)
        float* var_760_1 = r11_10
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_10 + arg3 + rbx_36), 3)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
        arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
        arg9[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        zmm2[0].o = zx.o(rcx_1)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        arg16[0].o = arg19
        int32_t rax_206
        rax_206.b = arg6[0].o f>= arg16[0]
        arg6[0].o = data_1434422d0
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm5[0].o ^= arg5[0].o
        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        arg6[0].o ^= arg5[0].o
        arg6 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
        zmm5[0].o = zx.o(neg.d(rax_206))
        zmm5[0].o ^= arg5[0].o
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0)
        zmm5 = _mm256_insertf128_ps(zmm5, zmm5[0].o, 1)
        arg6 = _mm256_and_ps(arg6, zmm5)
        int32_t var_800_4[0x8] = arg6
        arg11 = _mm256_and_ps(arg6, arg14)
        int32_t temp0_1262 = _mm256_movemask_ps(arg11)
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        arg6 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        arg15[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
        double var_660_1[0x4] = arg15
        arg15[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
        double var_880_1[0x4] = arg15
        arg15 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        float var_960_2[0x8]
        void* var_940_1
        float var_900_2[0x8]
        void* var_8e0_1
        int128_t* var_850
        void* var_840_1
        int64_t var_5c0
        int32_t var_540
        
        if (temp0_1262 == 0)
            zmm0[0].o = zx.o(0)
            var_960_2 = zmm0
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            zmm0[0].o = zx.o(0)
            var_900_2 = zmm0
        else
            int32_t var_8a0_2[0x8] = arg6
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
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                int32_t rax_210 = int.d(zmm5[0])
                int32_t rcx_59 = 0
                
                if (rax_210 s>= 0)
                    rcx_59 = rax_210
                
                if (arg18 - 2 s<= rcx_59)
                    rcx_59 = arg18 - 2
                
                zmm0 = _mm256_cvttps_epi32(zmm0)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                float var_900_1[0x8] = arg7
                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                var_840_1.o = zmm2[0].o
                zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                arg7 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                var_940_1.32 = arg5
                float var_780_2[0x8] = arg7
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
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                    arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg9[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    char rsi_20 = temp0_1262.b
                    
                    if ((rsi_20 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                    
                    if ((rsi_20 & 2) != 0)
                        uint32_t rax_242 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_242, 1)
                    
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                    arg5 = var_8e0_1.32
                    var_960[0].o = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    
                    if ((rsi_20 & 4) == 0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                        
                        if ((rsi_20 & 8) != 0)
                            goto label_1402c56cf
                        
                        goto label_1402c301b
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg5[0].q), 2)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                    
                    if ((rsi_20 & 8) != 0)
                    label_1402c56cf:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint32_t rax_372 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_372, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        
                        if ((rsi_20 & 0x10) == 0)
                            goto label_1402c302b
                        
                        goto label_1402c56fb
                    
                label_1402c301b:
                    zmm1 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                    
                    if ((rsi_20 & 0x10) != 0)
                    label_1402c56fb:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                        arg6 = var_940_1.32
                        
                        if ((rsi_20 & 0x20) != 0)
                        label_1402c5716:
                            uint32_t rax_376 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_376, 5)
                            
                            if ((rsi_20 & 0x40) == 0)
                                goto label_1402c3048
                            
                            goto label_1402c5728
                    else
                    label_1402c302b:
                        arg6 = var_940_1.32
                        
                        if ((rsi_20 & 0x20) != 0)
                            goto label_1402c5716
                    
                    if ((rsi_20 & 0x40) != 0)
                    label_1402c5728:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm2[0].q), 6)
                        var_850.o = arg8[0].o
                        
                        if (temp0_1262.b s< 0)
                        label_1402c574d:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_380 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_380, 7)
                    else
                    label_1402c3048:
                        var_850.o = arg8[0].o
                        
                        if (temp0_1262.b s< 0)
                            goto label_1402c574d
                    
                    zmm0[0].o &= data_142fc92e0
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = zx.o(rcx_59)
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
                        arg15 = _mm256_blendv_ps(var_780_2, zmm5, arg5)
                        zmm1[0].o = var_850.o
                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_780_2[0].o, zmm0[0].o)
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
                            zmm0 = var_780_2
                            
                            do
                                zmm2 = arg7
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                                var_780_2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                                arg7 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                                char temp0_1591 = _mm256_movemask_ps(arg8)
                                
                                if ((temp0_1591 & 1) == 0)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(var_780_2[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(var_780_2[0].o, 0x4e)
                                    
                                    if ((temp0_1591 & 2) != 0)
                                        goto label_1402c3177
                                    
                                    goto label_1402c3288
                                
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*arg7[0].q), 0)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(var_780_2[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(var_780_2[0].o, 0x4e)
                                
                                if ((temp0_1591 & 2) != 0)
                                label_1402c3177:
                                    uint32_t rax_247 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_247, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1591 & 4) == 0)
                                        goto label_1402c329f
                                    
                                    goto label_1402c3196
                                
                            label_1402c3288:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_8e0_1.o)
                                
                                if ((temp0_1591 & 4) == 0)
                                label_1402c329f:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                    
                                    if ((temp0_1591 & 8) != 0)
                                        goto label_1402c31b7
                                    
                                    goto label_1402c32ad
                                
                            label_1402c3196:
                                zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*zmm5[0].q), 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                
                                if ((temp0_1591 & 8) != 0)
                                label_1402c31b7:
                                    zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    uint32_t rax_251 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_251, 3)
                                    arg7 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                                    
                                    if ((temp0_1591 & 0x10) == 0)
                                        goto label_1402c32bc
                                    
                                    goto label_1402c31e2
                                
                            label_1402c32ad:
                                arg7 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                                
                                if ((temp0_1591 & 0x10) == 0)
                                label_1402c32bc:
                                    
                                    if ((temp0_1591 & 0x20) != 0)
                                        goto label_1402c31f6
                                    
                                    goto label_1402c32c5
                                
                            label_1402c31e2:
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*arg7[0].q), 4)
                                
                                if ((temp0_1591 & 0x20) != 0)
                                label_1402c31f6:
                                    uint32_t rax_255 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_255, 5)
                                    
                                    if ((temp0_1591 & 0x40) == 0)
                                        goto label_1402c32ce
                                    
                                    goto label_1402c3207
                                
                            label_1402c32c5:
                                
                                if ((temp0_1591 & 0x40) != 0)
                                label_1402c3207:
                                    arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                        zx.d(*arg5[0].q), 6)
                                    
                                    if (temp0_1591 s< 0)
                                    label_1402c3222:
                                        arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                        uint32_t rax_259 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                            rax_259, 7)
                                else
                                label_1402c32ce:
                                    
                                    if (temp0_1591 s< 0)
                                        goto label_1402c3222
                                
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
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_780_2[0].o, zmm1[0].o)
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
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                arg10 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                char temp0_1658 = _mm256_movemask_ps(arg14)
                                
                                if ((temp0_1658 & 1) == 0)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((temp0_1658 & 2) != 0)
                                        goto label_1402c3406
                                    
                                    goto label_1402c3514
                                
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg10[0].q), 0)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                
                                if ((temp0_1658 & 2) != 0)
                                label_1402c3406:
                                    uint32_t rax_265 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_265, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1658 & 4) == 0)
                                        goto label_1402c352b
                                    
                                    goto label_1402c3425
                                
                            label_1402c3514:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                
                                if ((temp0_1658 & 4) == 0)
                                label_1402c352b:
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                    
                                    if ((temp0_1658 & 8) != 0)
                                        goto label_1402c3446
                                    
                                    goto label_1402c3539
                                
                            label_1402c3425:
                                zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                
                                if ((temp0_1658 & 8) != 0)
                                label_1402c3446:
                                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    uint32_t rax_269 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_269, 3)
                                    arg10 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                                    
                                    if ((temp0_1658 & 0x10) == 0)
                                        goto label_1402c3548
                                    
                                    goto label_1402c3471
                                
                            label_1402c3539:
                                arg10 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                                
                                if ((temp0_1658 & 0x10) == 0)
                                label_1402c3548:
                                    
                                    if ((temp0_1658 & 0x20) != 0)
                                        goto label_1402c3485
                                    
                                    goto label_1402c3551
                                
                            label_1402c3471:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg10[0].q), 4)
                                
                                if ((temp0_1658 & 0x20) != 0)
                                label_1402c3485:
                                    uint32_t rax_273 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_273, 5)
                                    
                                    if ((temp0_1658 & 0x40) == 0)
                                        goto label_1402c355a
                                    
                                    goto label_1402c3496
                                
                            label_1402c3551:
                                
                                if ((temp0_1658 & 0x40) != 0)
                                label_1402c3496:
                                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_1658 s< 0)
                                    label_1402c34b1:
                                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        uint32_t rax_277 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_277, 7)
                                else
                                label_1402c355a:
                                    
                                    if (temp0_1658 s< 0)
                                        goto label_1402c34b1
                                
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
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    
                    if ((rsi_20 & 1) != 0)
                        arg6[0].o = zx.o(*zmm1[0].q)
                    
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    arg14 = var_480.32
                    arg15 = var_5c0.32
                    arg12[0].o = var_6c0.o
                    arg10 = var_6e0.32
                    arg13 = var_5e0.32
                    
                    if ((rsi_20 & 2) == 0)
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_8e0_1.o)
                        
                        if ((rsi_20 & 4) != 0)
                            goto label_1402c578c
                        
                        goto label_1402c3681
                    
                    uint32_t rax_382 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_382, 1)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_8e0_1.o)
                    
                    if ((rsi_20 & 4) != 0)
                    label_1402c578c:
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm5[0].q), 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                        
                        if ((rsi_20 & 8) == 0)
                            goto label_1402c3690
                        
                        goto label_1402c57ae
                    
                label_1402c3681:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                    
                    if ((rsi_20 & 8) == 0)
                    label_1402c3690:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_20 & 0x10) != 0)
                            goto label_1402c57da
                        
                        goto label_1402c36a0
                    
                label_1402c57ae:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint32_t rax_386 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_386, 3)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_20 & 0x10) != 0)
                    label_1402c57da:
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm1[0].q), 4)
                        arg5 = var_900_1
                        
                        if ((rsi_20 & 0x20) == 0)
                            goto label_1402c36b0
                        
                        goto label_1402c57f5
                    
                label_1402c36a0:
                    arg5 = var_900_1
                    
                    if ((rsi_20 & 0x20) == 0)
                    label_1402c36b0:
                        
                        if ((rsi_20 & 0x40) != 0)
                            goto label_1402c5807
                        
                        goto label_1402c36ba
                    
                label_1402c57f5:
                    uint32_t rax_390 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_390, 5)
                    
                    if ((rsi_20 & 0x40) == 0)
                    label_1402c36ba:
                        
                        if (temp0_1262.b s< 0)
                        label_1402c5823:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_394 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_394, 7)
                    else
                    label_1402c5807:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm2[0].q), 6)
                        
                        if (temp0_1262.b s< 0)
                            goto label_1402c5823
                    
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
                            goto label_1402c5862
                        
                        goto label_1402c3795
                    
                    uint32_t rax_396 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_396, 1)
                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_20 & 4) != 0)
                    label_1402c5862:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg5[0].q), 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_960[0].o)
                        
                        if ((rsi_20 & 8) == 0)
                            goto label_1402c37a4
                        
                        goto label_1402c5884
                    
                label_1402c3795:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_960[0].o)
                    
                    if ((rsi_20 & 8) == 0)
                    label_1402c37a4:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_20 & 0x10) != 0)
                            goto label_1402c58b0
                        
                        goto label_1402c37b4
                    
                label_1402c5884:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint32_t rax_400 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_400, 3)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_20 & 0x10) != 0)
                    label_1402c58b0:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                        zmm2[0].o = arg6[0].o & data_142fc92e0
                        
                        if ((rsi_20 & 0x20) == 0)
                            goto label_1402c37c6
                        
                        goto label_1402c58cd
                    
                label_1402c37b4:
                    zmm2[0].o = arg6[0].o & data_142fc92e0
                    
                    if ((rsi_20 & 0x20) == 0)
                    label_1402c37c6:
                        arg6[0].o = zx.o(0)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        
                        if ((rsi_20 & 0x40) != 0)
                            goto label_1402c58e8
                        
                        goto label_1402c37d9
                    
                label_1402c58cd:
                    uint32_t rax_404 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_404, 5)
                    arg6[0].o = zx.o(0)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    
                    if ((rsi_20 & 0x40) == 0)
                    label_1402c37d9:
                        zmm5[0].o = zx.o(0)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        
                        if (temp0_1262.b s< 0)
                        label_1402c590c:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_408 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_408, 7)
                    else
                    label_1402c58e8:
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm5[0].q), 6)
                        zmm5[0].o = zx.o(0)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        
                        if (temp0_1262.b s< 0)
                            goto label_1402c590c
                    
                    arg6 = var_8a0_2
                    zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    zmm0[0].o &= data_142fc92e0
                else
                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    var_850.o = zmm0[0].o
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    arg9[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    char rsi_19 = temp0_1262.b
                    
                    if ((rsi_19 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0].q)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    
                    if ((rsi_19 & 2) != 0)
                        int64_t rax_213 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_213, 1)
                    
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2 = var_8e0_1.32
                    var_960[0].o = __vextractf128_memdq_ymmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    
                    if ((rsi_19 & 4) == 0)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                        
                        if ((rsi_19 & 8) != 0)
                            goto label_1402c549c
                        
                        goto label_1402c2796
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 2)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                    
                    if ((rsi_19 & 8) != 0)
                    label_1402c549c:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_350 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_350, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) == 0)
                            goto label_1402c27a6
                        
                        goto label_1402c54c2
                    
                label_1402c2796:
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_19 & 0x10) == 0)
                    label_1402c27a6:
                        
                        if ((rsi_19 & 0x20) != 0)
                            goto label_1402c54d1
                        
                        goto label_1402c27b0
                    
                label_1402c54c2:
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                    
                    if ((rsi_19 & 0x20) != 0)
                    label_1402c54d1:
                        int64_t rax_352 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_352, 5)
                        
                        if ((rsi_19 & 0x40) == 0)
                            goto label_1402c27ba
                        
                        goto label_1402c54e6
                    
                label_1402c27b0:
                    
                    if ((rsi_19 & 0x40) != 0)
                    label_1402c54e6:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                        
                        if (temp0_1262.b s< 0)
                        label_1402c54ff:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_354 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_354, 7)
                    else
                    label_1402c27ba:
                        
                        if (temp0_1262.b s< 0)
                            goto label_1402c54ff
                    
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = zx.o(rcx_59)
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
                        arg16 = _mm256_blendv_ps(var_780_2, zmm5, zmm1)
                        zmm2[0].o = var_850.o
                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_780_2[0].o, zmm0[0].o)
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
                            zmm0 = var_780_2
                            
                            do
                                arg14 = zmm5
                                zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_940_1.o)
                                arg10 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                char temp0_1378 = _mm256_movemask_ps(zmm1)
                                
                                if ((temp0_1378 & 1) == 0)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                    
                                    if ((temp0_1378 & 2) != 0)
                                        goto label_1402c28ce
                                    
                                    goto label_1402c29e3
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 0)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                
                                if ((temp0_1378 & 2) != 0)
                                label_1402c28ce:
                                    int64_t rax_216 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_216, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1378 & 4) == 0)
                                        goto label_1402c29fa
                                    
                                    goto label_1402c28f0
                                
                            label_1402c29e3:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_8e0_1.o)
                                
                                if ((temp0_1378 & 4) == 0)
                                label_1402c29fa:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                    
                                    if ((temp0_1378 & 8) != 0)
                                        goto label_1402c290e
                                    
                                    goto label_1402c2a08
                                
                            label_1402c28f0:
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg6[0].q, 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                
                                if ((temp0_1378 & 8) != 0)
                                label_1402c290e:
                                    arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_218 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_218, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                    
                                    if ((temp0_1378 & 0x10) == 0)
                                        goto label_1402c2a17
                                    
                                    goto label_1402c2933
                                
                            label_1402c2a08:
                                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                
                                if ((temp0_1378 & 0x10) == 0)
                                label_1402c2a17:
                                    
                                    if ((temp0_1378 & 0x20) != 0)
                                        goto label_1402c2941
                                    
                                    goto label_1402c2a20
                                
                            label_1402c2933:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 4)
                                
                                if ((temp0_1378 & 0x20) != 0)
                                label_1402c2941:
                                    int64_t rax_220 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_220, 5)
                                    
                                    if ((temp0_1378 & 0x40) == 0)
                                        goto label_1402c2a29
                                    
                                    goto label_1402c2955
                                
                            label_1402c2a20:
                                
                                if ((temp0_1378 & 0x40) != 0)
                                label_1402c2955:
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 6)
                                    
                                    if (temp0_1378 s< 0)
                                    label_1402c296d:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_222 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_222, 7)
                                else
                                label_1402c2a29:
                                    
                                    if (temp0_1378 s< 0)
                                        goto label_1402c296d
                                
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
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_940_1.o)
                                arg10 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                                char temp0_1447 = _mm256_movemask_ps(arg14)
                                
                                if ((temp0_1447 & 1) == 0)
                                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                    
                                    if ((temp0_1447 & 2) != 0)
                                        goto label_1402c2b4d
                                    
                                    goto label_1402c2c5e
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 0)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((temp0_1447 & 2) != 0)
                                label_1402c2b4d:
                                    int64_t rax_226 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_226, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8e0_1.o)
                                    
                                    if ((temp0_1447 & 4) == 0)
                                        goto label_1402c2c75
                                    
                                    goto label_1402c2b6f
                                
                            label_1402c2c5e:
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8e0_1.o)
                                
                                if ((temp0_1447 & 4) == 0)
                                label_1402c2c75:
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                    
                                    if ((temp0_1447 & 8) != 0)
                                        goto label_1402c2b8d
                                    
                                    goto label_1402c2c83
                                
                            label_1402c2b6f:
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg6[0].q, 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_960[0].o)
                                
                                if ((temp0_1447 & 8) != 0)
                                label_1402c2b8d:
                                    arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_228 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_228, 3)
                                    arg10 = _mm256_insertf128_ps(arg14, arg5[0].o, 1)
                                    
                                    if ((temp0_1447 & 0x10) == 0)
                                        goto label_1402c2c92
                                    
                                    goto label_1402c2bb2
                                
                            label_1402c2c83:
                                arg10 = _mm256_insertf128_ps(arg14, arg5[0].o, 1)
                                
                                if ((temp0_1447 & 0x10) == 0)
                                label_1402c2c92:
                                    
                                    if ((temp0_1447 & 0x20) != 0)
                                        goto label_1402c2bc0
                                    
                                    goto label_1402c2c9b
                                
                            label_1402c2bb2:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                                
                                if ((temp0_1447 & 0x20) != 0)
                                label_1402c2bc0:
                                    int64_t rax_230 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_230, 5)
                                    
                                    if ((temp0_1447 & 0x40) == 0)
                                        goto label_1402c2ca4
                                    
                                    goto label_1402c2bd4
                                
                            label_1402c2c9b:
                                
                                if ((temp0_1447 & 0x40) != 0)
                                label_1402c2bd4:
                                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 6)
                                    
                                    if (temp0_1447 s< 0)
                                    label_1402c2bec:
                                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_232 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_232, 7)
                                else
                                label_1402c2ca4:
                                    
                                    if (temp0_1447 s< 0)
                                        goto label_1402c2bec
                                
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
                            goto label_1402c5538
                        
                        goto label_1402c2dc9
                    
                    int64_t rax_355 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_355, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_19 & 4) != 0)
                    label_1402c5538:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg5[0].q, 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                        
                        if ((rsi_19 & 8) == 0)
                            goto label_1402c2dd8
                        
                        goto label_1402c5557
                    
                label_1402c2dc9:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                    
                    if ((rsi_19 & 8) == 0)
                    label_1402c2dd8:
                        arg6 = var_940_1.32
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) != 0)
                            goto label_1402c5583
                        
                        goto label_1402c2dee
                    
                label_1402c5557:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rax_357 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_357, 3)
                    arg6 = var_940_1.32
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    
                    if ((rsi_19 & 0x10) != 0)
                    label_1402c5583:
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0].q, 4)
                        arg5 = var_900_1
                        
                        if ((rsi_19 & 0x20) == 0)
                            goto label_1402c2dfe
                        
                        goto label_1402c5598
                    
                label_1402c2dee:
                    arg5 = var_900_1
                    
                    if ((rsi_19 & 0x20) == 0)
                    label_1402c2dfe:
                        
                        if ((rsi_19 & 0x40) != 0)
                            goto label_1402c55ad
                        
                        goto label_1402c2e08
                    
                label_1402c5598:
                    int64_t rax_359 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_359, 5)
                    
                    if ((rsi_19 & 0x40) == 0)
                    label_1402c2e08:
                        
                        if (temp0_1262.b s< 0)
                        label_1402c55c6:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_361 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_361, 7)
                    else
                    label_1402c55ad:
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm2[0].q, 6)
                        
                        if (temp0_1262.b s< 0)
                            goto label_1402c55c6
                    
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
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                            goto label_1402c55ff
                        
                        goto label_1402c2ee9
                    
                    int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_362, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1.o)
                    
                    if ((rsi_19 & 4) != 0)
                    label_1402c55ff:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 2)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                        
                        if ((rsi_19 & 8) == 0)
                            goto label_1402c2ef8
                        
                        goto label_1402c561e
                    
                label_1402c2ee9:
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_960[0].o)
                    
                    if ((rsi_19 & 8) != 0)
                    label_1402c561e:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_364 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_364, 3)
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) != 0)
                        label_1402c5644:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rsi_19 & 0x20) == 0)
                                goto label_1402c2f12
                            
                            goto label_1402c5653
                    else
                    label_1402c2ef8:
                        zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        
                        if ((rsi_19 & 0x10) != 0)
                            goto label_1402c5644
                    
                    if ((rsi_19 & 0x20) == 0)
                    label_1402c2f12:
                        arg5[0].o = zx.o(0)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                        
                        if ((rsi_19 & 0x40) != 0)
                            goto label_1402c5671
                        
                        goto label_1402c2f25
                    
                label_1402c5653:
                    int64_t rax_366 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_366, 5)
                    arg5[0].o = zx.o(0)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                    
                    if ((rsi_19 & 0x40) == 0)
                    label_1402c2f25:
                        arg6 = var_8a0_2
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        
                        if (temp0_1262.b s< 0)
                        label_1402c5697:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_368 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_368, 7)
                    else
                    label_1402c5671:
                        arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg6[0].q, 6)
                        arg6 = var_8a0_2
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        
                        if (temp0_1262.b s< 0)
                            goto label_1402c5697
                    
                    zmm5[0].o = zx.o(0)
                    zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                
                zmm2[0].o = zx.o(0)
                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
        zmm0 = var_880_1
        arg8 = _mm256_insertf128_ps(zmm0, arg9[0].o, 1)
        int32_t rcx_60 = var_808.d
        int32_t rax_284
        rax_284.b = rcx_60 == 3
        zmm0[0].o = zx.o(neg.d(rax_284))
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
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
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
        arg10 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
        zmm5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
        uint64_t r15_11 = zx.q(rcx_60)
        var_940_1.32 = arg16
        double var_660_2[0x4] = arg8
        float var_7c0_3[0x8] = arg5
        float var_8a0_3[0x8] = arg10
        float var_800_5[0x8] = arg9
        float var_780_3[0x8] = arg7
        var_880_1[0].o = zmm2[0].o
        var_840_1.o = zmm5[0].o
        float var_5a0_1[0x8]
        int32_t var_580_1[0x8]
        float var_560_1[0x8]
        
        if (rcx_60 u> 6)
        label_1402c3c44:
            zmm0[0].o = zx.o(0)
            var_5a0_1 = _mm256_maskstore_ps(arg14, zmm0)
            var_580_1 = _mm256_maskstore_ps(arg14, zmm0)
        label_1402c3f25:
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
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                    int64_t r9_11 = zmm1[0].q
                    void* rdi_28 = arg17 + r9_11
                    int64_t r11_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rsi_21 = arg17 + r11_11
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r14_12 = zmm1[0].q
                    int64_t r15_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg5 = arg12
                    arg12 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm1 = _mm256_blendv_ps(arg9, arg12, arg11)
                    arg6[0].o = *(zmm1[0].q + rdi_28)
                    int64_t rcx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r10_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_64 + rsi_21), 0x10)
                    float* rcx_65 = zmm1[0].q
                    zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm5 = _mm256_blendv_ps(arg9, zmm1, arg11)
                    arg7[0].o = *(zmm5[0].q + rdi_28)
                    float* rdx_56 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    float* rdi_29 = zmm5[0].q
                    float* rbx_39 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5 = _mm256_blendv_ps(arg9, arg10, zmm0)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_56 + rsi_21), 0x10)
                    int64_t rdx_57 = zmm5[0].q
                    void* rsi_22 = arg17 + r14_12
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_65 + rsi_22), 0x20)
                    int64_t r12_10 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_29 + rsi_22), 0x20)
                    void* rsi_23 = arg17 + rdx_57
                    void* rdi_30 = arg17 + r15_12
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r10_12 + rdi_30), 0x30)
                    void* rcx_66 = arg17 + r12_10
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_39 + rdi_30), 0x30)
                    int64_t rdi_31 = zmm5[0].q
                    zmm2 = arg15
                    arg8 = _mm256_blendv_ps(arg9, arg12, zmm0)
                    arg12 = arg5
                    int32_t* rbx_40 = arg8[0]
                    zmm0 = _mm256_blendv_ps(arg9, zmm1, zmm0)
                    zmm1[0].o = *(rbx_40 + rsi_23)
                    arg5[0].o = *(zmm0[0].q + rsi_23)
                    void* rsi_24 = arg17 + rdi_31
                    float* rbx_42 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_42 + rcx_66), 0x10)
                    float* rbx_43 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_43 + rcx_66), 0x10)
                    int64_t rcx_67 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm5[0].q + rsi_24), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm0[0].q + rsi_24), 0x20)
                    void* rsi_25 = arg17 + rcx_67
                    int64_t rbx_46 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_46 + rsi_25), 0x30)
                    float* rbx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_47 + rsi_25), 0x30)
                    arg5[0].o = *(arg17 + rdx_57)
                    zmm5[0].o = *(arg17 + r9_11)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r11_11), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r14_12), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r15_12), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + r12_10), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rdi_31), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rcx_67), 0x30)
                    arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    var_5a0_1 = _mm256_maskstore_ps(arg14, arg5)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                    var_580_1 = _mm256_maskstore_ps(arg14, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                    goto label_1402c3f25
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
                    int64_t r9_12 = zmm1[0].q
                    int64_t r10_13 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rbx_48 = arg17 + r9_12
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r11_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rsi_26 = arg17 + r10_13
                    arg7 = arg12
                    arg12 = _mm256_broadcast_sd(9.8813129168249309e-324)
                    zmm2 = _mm256_blendv_ps(zmm0, arg12, arg11)
                    int64_t r14_13 = zmm1[0].q
                    void* rdx_58 = zmm2[0].q
                    uint16_t* rax_287 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    uint16_t* rcx_68 = zmm1[0].q
                    zmm2[0].o = zx.o(*(rdx_58 + rbx_48))
                    int64_t rdx_60 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_287 + rsi_26), 1)
                    zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg5 = _mm256_blendv_ps(zmm0, zmm2, arg11)
                    uint32_t rax_289 = zx.d(*(arg5[0].q + rbx_48))
                    uint16_t* rbx_49 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg6[0].o = zx.o(rax_289)
                    uint16_t* rax_290 = arg5[0].q
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rbx_49 + rsi_26), 1)
                    uint16_t* rsi_27 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5 = _mm256_blendv_ps(zmm0, arg9, arg10)
                    void* rbx_50 = arg17 + r14_13
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_68 + rbx_50), 2)
                    void* rcx_69 = arg17 + r11_12
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rax_290 + rbx_50), 2)
                    int64_t rax_291 = arg5[0].q
                    void* rbx_51 = arg17 + rax_291
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_60 + rcx_69), 3)
                    int64_t rdx_61 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm5 = _mm256_blendv_ps(zmm0, arg12, arg10)
                    arg12 = arg7
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rsi_27 + rcx_69), 3)
                    void* rcx_70 = arg17 + rdx_61
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm5[0].q + rbx_51), 4)
                    int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_29 + rcx_70), 5)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm0 = _mm256_blendv_ps(zmm0, zmm2, arg10)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(zmm0[0].q + rbx_51), 4)
                    uint16_t* rsi_31 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rbx_52 = arg5[0].q
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_31 + rcx_70), 5)
                    void* rcx_71 = arg17 + rbx_52
                    arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg6[0].q + rcx_71), 6)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm0[0].q + rcx_71), 6)
                    zmm5[0].o = zx.o(*(arg17 + r9_12))
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r10_13), 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r14_13), 2)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r11_12), 3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rax_291), 4)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rdx_61), 5)
                    int64_t rax_292 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rbx_52), 6)
                    void* rcx_73 = arg17 + rax_292
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg17 + rax_292), 7)
                    int64_t rax_293 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_293 + rcx_73), 7)
                    int64_t rax_294 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
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
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_294 + rcx_73), 7)
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
                    goto label_1402c3f25
                case 3
                    zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm2 = var_8e0_1.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                    var_6c0.32 = arg12
                    arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0 = _mm256_and_ps(arg12, arg7)
                    int64_t rax_301 = sx.q(zmm0[0])
                    void* r9_14 = arg17 + rax_301
                    var_920.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                    var_600.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                    var_7d0[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                    zmm5 = arg10
                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    var_6e0.o = zmm2[0].o
                    zmm0[0].o = *(r12_9 + r9_14)
                    var_850.o = zmm0[0].o
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9540)
                    zmm1[0].o = *(zx.q(zmm0[0]) + r9_14)
                    var_540.o = zmm1[0].o
                    arg7 = arg9
                    arg9 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423c0)
                    zmm1[0].o = *(zx.q(arg9[0]) + r9_14)
                    var_4f0.o = zmm1[0].o
                    arg16 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423e0)
                    zmm1[0].o = *(zx.q(arg16[0]) + r9_14)
                    var_2e0[0].o = zmm1[0].o
                    arg12 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442400)
                    zmm1[0].o = *(zx.q(arg12[0]) + r9_14)
                    var_300[0].o = zmm1[0].o
                    int64_t rax_307 = sx.q(zmm2[0])
                    var_320[0].q = rax_307
                    void* rbx_60 = arg17 + rax_307
                    zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm2 = arg5
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    arg10 = arg15
                    arg15 = zmm5
                    arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                    arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg6[0].o)
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
                    int32_t temp0_2051 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 1)
                    arg11 = _mm256_blendv_ps(arg7, arg5, zmm1)
                    float temp0_2053 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    float temp0_2055 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 3)
                    arg5[0].o = *(zx.q(zmm1[0]) + rbx_60)
                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    float* rax_308 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    float* rax_309 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    float* rax_310 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = *(zx.q(zmm5[0]) + rbx_60)
                    uint64_t rsi_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t r12_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    float* rax_311 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    uint64_t r10_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    uint64_t r15_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    zmm1[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                    float* rax_312 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    int32_t* rax_313 = zx.q(zmm1[0])
                    uint64_t rdx_65 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t r11_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    zmm5[0].o = *(rax_313 + rbx_60)
                    float* rax_314 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    uint64_t rcx_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t rdi_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int32_t* rax_315 = zx.q(zmm1[0])
                    float* r14_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = *(rax_315 + rbx_60)
                    int64_t r9_15 = sx.q(temp0_2051)
                    void* rbx_62 = arg17 + r9_15
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r8_7 + rbx_62), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_42 + rbx_62), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_15 + rbx_62), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_65 + rbx_62), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_84 + rbx_62), 0x10)
                    int64_t rcx_85 = sx.q(temp0_2053)
                    void* rdx_67 = arg17 + rcx_85
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_10 + rdx_67), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_11 + rdx_67), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_13 + rdx_67), 0x20)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_14 + rdx_67), 0x20)
                    var_5c0.32 = arg10
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_34 + rdx_67), 0x20)
                    int64_t rdx_68 = sx.q(temp0_2055)
                    void* rbx_64 = arg17 + rdx_68
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_760_1 + rbx_64), 0x30)
                    arg10[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_311 + rbx_64), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_312 + rbx_64), 0x30)
                    var_760_1.o = zmm0[0].o
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_314 + rbx_64), 0x30)
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r14_15 + rbx_64), 0x30)
                    float* rbx_65 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    float* r14_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    float* r10_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    float* rsi_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 1))
                    float* rdi_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 2))
                    float* r11_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 3))
                    zmm0[0].o = *(arg17 + rax_301)
                    arg5[0].o = *(arg17 + var_320[0].q)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + r9_15), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rcx_85), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rdx_68), 0x30)
                    int64_t rax_321 = sx.q(var_920.d)
                    void* rcx_86 = arg17 + rax_321
                    zmm1[0].o = var_850.o
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14_10 + rcx_86), 0x10)
                    zmm1[0].o = var_540.o
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_308 + rcx_86), 0x10)
                    arg6[0].o = var_4f0.o
                    arg9[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_65 + rcx_86), 0x10)
                    arg6[0].o = var_2e0[0].o
                    arg16[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_43 + rcx_86), 0x10)
                    float* rdx_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                    arg6[0].o = var_300[0].o
                    arg15[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_71 + rcx_86), 0x10)
                    float* rcx_87 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    float* rdx_72 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rax_321), 0x10)
                    int64_t rax_322 = sx.q(var_600.d)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rax_322), 0x20)
                    void* rax_323 = arg17 + rax_322
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_34 + rax_323), 0x20)
                    int64_t rsi_45 = sx.q(var_7d0[0].d)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rsi_45), 0x30)
                    arg12 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    void* rsi_46 = arg17 + rsi_45
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_10 + rsi_46), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_309 + rax_323), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_310 + rsi_46), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r14_16 + rax_323), 0x20)
                    arg9[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_16 + rsi_46), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, *(rdi_36 + rax_323), 0x20)
                    arg16[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_15 + rsi_46), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, *(rcx_87 + rax_323), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_72 + rsi_46), 0x30)
                    int64_t rax_324 = arg13[0].q
                    int64_t rcx_88 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg13 = var_8e0_1.32
                    int64_t rdx_73 = arg5[0].q
                    int64_t rbx_69 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = zx.o(*(arg17 + rax_324))
                    int64_t rax_325 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rcx_88), 1)
                    int64_t rcx_89 = arg11[0].q
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rdx_73), 2)
                    int64_t rdx_74 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rbx_69), 3)
                    int64_t rbx_70 = zmm0[0].q
                    zmm0[0].o = zx.o(*(arg17 + rcx_89))
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rax_325), 1)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rbx_70), 2)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rdx_74), 3)
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
                    goto label_1402c3c44
        
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
            float var_420_1[0x8]
            float var_400_1[0x8]
            
            if (var_808.d u> 6)
            label_1402c4285:
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
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                
                switch (r15_11)
                    case 0, 1
                        zmm0[0].o = _mm256_extractf128_ps(var_660_2[0].o, 1)
                        arg10 = var_8a0_3
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(var_7c0_3[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(var_800_5[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_7c0_3[0].o, arg5[0].o)
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
                        int64_t r10_14 = zmm0[0].q
                        int64_t r9_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rsi_34 = arg17 + r10_14
                        void* r8_9 = arg17 + r9_13
                        arg10[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r11_13 = arg6[0].q
                        void* rdx_62 = arg17 + r11_13
                        int64_t r14_14 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rcx_76 = arg17 + r14_14
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg9 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg8 = _mm256_blendv_ps(arg12, arg9, arg7)
                        double rbx_53 = arg8[0]
                        zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg6 = _mm256_blendv_ps(arg12, zmm0, arg7)
                        arg7[0].o = *(rbx_53 i+ rdx_62)
                        zmm1[0].o = *(arg6[0].q + rdx_62)
                        int64_t rdx_63 = zmm5[0].q
                        float* rbx_55 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_55 + rcx_76), 0x10)
                        float* rbx_56 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_56 + rcx_76), 0x10)
                        void* rcx_77 = arg17 + rdx_63
                        arg9 = _mm256_blendv_ps(arg12, arg9, zmm2)
                        arg5[0].o = *(arg9[0].q + rsi_34)
                        zmm0 = _mm256_blendv_ps(arg12, zmm0, zmm2)
                        arg13 = var_8e0_1.32
                        zmm2[0].o = *(zmm0[0].q + rsi_34)
                        int64_t rbx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                            *(zmm5[0].q + rcx_77), 0x20)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(arg6[0].q + rcx_77), 0x20)
                        void* rcx_78 = arg17 + rbx_59
                        int64_t rsi_37 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_37 + rcx_78), 0x30)
                        int64_t rsi_38 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_38 + r8_9), 0x10)
                        float* rsi_39 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_39 + rcx_78), 0x30)
                        float* rcx_79 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_79 + r8_9), 0x10)
                        int64_t rcx_80 = arg10[0].q
                        void* rsi_40 = arg17 + rcx_80
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(arg6[0].q + rsi_40), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(zmm0[0].q + rsi_40), 0x20)
                        arg7[0].o = *(arg17 + r10_14)
                        arg8[0].o = *(arg17 + r11_13)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + r14_14), 0x10)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + rdx_63), 0x20)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + rbx_59), 0x30)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg17 + r9_13), 0x10)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg17 + rcx_80), 0x20)
                        int64_t rax_298 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg17 + rax_298), 0x30)
                        void* rax_299 = arg17 + rax_298
                        int64_t rcx_81 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_81 + rax_299), 0x30)
                        int64_t rcx_82 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_82 + rax_299), 0x30)
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
                        int64_t r10_17 = zmm0[0].q
                        void* rdi_37 = arg17 + r10_17
                        int64_t r9_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rsi_47 = arg17 + r9_16
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r8_12 = zmm0[0].q
                        int64_t r11_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rcx_90 = arg17 + r8_12
                        arg7 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg6 = _mm256_blendv_ps(arg9, arg7, zmm5)
                        void* rdx_75 = arg17 + r11_16
                        zmm0[0].o = zx.o(*(arg6[0].q + rdi_37))
                        int64_t rax_328 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rax_328 + rsi_47), 1)
                        arg8 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm5 = _mm256_blendv_ps(arg9, arg8, zmm5)
                        uint32_t rax_330 = zx.d(*(zmm5[0].q + rdi_37))
                        uint16_t* rdi_38 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o = zx.o(rax_330)
                        int64_t rax_331 = arg5[0].q
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_38 + rsi_47), 1)
                        void* rdi_39 = arg17 + rax_331
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg6[0].q + rcx_90), 2)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm5[0].q + rcx_90), 2)
                        int64_t rcx_91 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg7 = _mm256_blendv_ps(arg9, arg7, zmm2)
                        uint16_t* rsi_50 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_50 + rdx_75), 3)
                        uint16_t* rsi_51 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_51 + rdx_75), 3)
                        void* rdx_76 = arg17 + rcx_91
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7[0].q + rdi_39), 4)
                        uint16_t* rsi_53 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_53 + rdx_76), 5)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm2 = _mm256_blendv_ps(arg9, arg8, zmm2)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdi_39), 4)
                        uint16_t* rdi_40 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rsi_55 = arg5[0].q
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_40 + rdx_76), 5)
                        void* rdx_77 = arg17 + rsi_55
                        arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg6[0].q + rdx_77), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdx_77), 6)
                        zmm5[0].o = zx.o(*(arg17 + r10_17))
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r9_16), 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r8_12), 2)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + r11_16), 3)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rax_331), 4)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rcx_91), 5)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rsi_55), 6)
                        int64_t rax_332 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg17 + rax_332), 7)
                        void* rax_333 = arg17 + rax_332
                        int64_t rcx_92 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_92 + rax_333), 7)
                        int64_t rcx_93 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        arg6[0].o = zx.o(0)
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                        zmm5[0].o = data_1434424d0
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, arg5[0].o, 1))
                        arg5 = data_1434424e0
                        zmm2 = _mm256_div_ps(zmm2, arg5)
                        arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg7, zmm0[0].o, 1)), arg5)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_93 + rax_333), 7)
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
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg13 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg13, var_780_3)
                        int32_t temp0_2256 = __vextractps_gpr32_xmmdq_immb(arg10[0].o, 1)
                        var_840_1.d = __vextractps_memd_xmmdq_immb(arg10[0].o, 2)
                        var_940_1.d = __vextractps_memd_xmmdq_immb(arg10[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        int64_t rdx_79 = sx.q(zmm0[0])
                        void* rcx_95 = arg17 + rdx_79
                        zmm1[0].o = *(arg17 + rdx_79)
                        int64_t rdi_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rdx_81 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_2262 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rdi_43), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rdx_81), 0x20)
                        var_880_1[0].o = zmm0[0].o
                        arg15 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9520)
                        float* rax_334 = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 1))
                        void* rdi_44 = arg17 + rdi_43
                        var_900_2[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 2))
                        zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm1[0].o = *(zx.q(zmm0[0]) + rcx_95)
                        float* rax_336 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* r13_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* r10_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_336 + rdi_44), 0x10)
                        float* var_7a0_2
                        var_7a0_2.o = zmm0[0].o
                        var_6c0.32 = arg12
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9540)
                        var_760_1.32 = zmm0
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        uint32_t* var_8b0_1
                        var_8b0_1.o = zmm1[0].o
                        zmm0[0].o = *(zx.q(zmm1[0]) + rcx_95)
                        float* rax_338 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_338 + rdi_44), 0x10)
                        uint32_t* var_910_1
                        var_910_1.o = zmm0[0].o
                        zmm1[0].o = _mm256_extractf128_ps(var_7c0_3[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        arg6[0].o = _mm256_extractf128_ps(var_800_5[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg16 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423c0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_7c0_3[0].o, arg5[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                        int32_t* rax_339 = zx.q(arg5[0])
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_800_5[0].o, arg6[0].o)
                        zmm0 = var_660_2
                        var_800_5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_800_5[0].o, arg6[0].o)
                        var_800_5[0].o = _mm256_extractf128_ps(var_8a0_3[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_800_5[0].o, arg6[0].o)
                        float* rsi_56 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        var_800_5[0].o = *(rax_339 + rcx_95)
                        arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_800_5[0].o, 
                            *(rsi_56 + rdi_44), 0x10)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_8a0_3[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        arg6[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                        var_8a0_3[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg6, var_8a0_3[0].o, 1)
                        var_8a0_3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_8a0_3[0].o, var_8a0_3[0].o)
                        zmm2 = _mm256_blendv_ps(var_8a0_3, zmm2, arg6)
                        arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg8[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                        arg8 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423e0)
                        arg9 = _mm256_blendv_ps(var_8a0_3, zmm1, arg6)
                        var_8a0_3[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg6[0].o = *(zx.q(var_8a0_3[0]) + rcx_95)
                        float* rax_341 = zx.q(__vpextrd_gpr32d_xmmdq_immb(var_8a0_3[0].o, 1))
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_341 + rdi_44), 0x10)
                        float rax_342 = arg10[0]
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg13, data_143442400)
                        arg13[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        int32_t* rsi_57 = zx.q(arg13[0])
                        float* rbx_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1))
                        zmm0[0].o = *(rsi_57 + rcx_95)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_74 + rdi_44), 0x10)
                        var_660_2[0] = zx.q(__vextractps_gpr32_xmmdq_immb(arg15[0].o, 3))
                        int32_t* rsi_58 = zx.q(arg15[0].d)
                        void* rdx_82 = arg17 + rdx_81
                        var_800_5[0].o = var_7a0_2.o
                        arg15[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_800_5[0].o, 
                            *(r13_4 + rdx_82), 0x20)
                        zmm1[0].o = arg14[0].o
                        arg14[0].o = var_8b0_1.o
                        float* rdi_45 = zx.q(__vextractps_gpr32_xmmdq_immb(arg14[0].o, 2))
                        var_800_5[0].o = var_910_1.o
                        var_800_5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_800_5[0].o, 
                            *(rdi_45 + rdx_82), 0x20)
                        var_8a0_3[0].o = var_800_5[0].o
                        float* rdi_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        var_800_5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(rdi_46 + rdx_82), 0x20)
                        var_7c0_3[0].o = var_800_5[0].o
                        float* rdi_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(var_8a0_3[0].o, 2))
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_47 + rdx_82), 0x20)
                        var_910_1.o = arg6[0].o
                        float* rdi_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_48 + rdx_82), 0x20)
                        var_780_3[0].o = zmm0[0].o
                        int64_t rax_343 = sx.q(rax_342)
                        zmm0 = var_760_1.32
                        int32_t* rdx_83 = zx.q(zmm0[0])
                        float* rdi_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        var_800_5[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* r13_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        arg12[0].o = *(arg17 + rax_343)
                        void* rax_344 = arg17 + rax_343
                        float* r11_17 = zx.q(__vextractps_gpr32_xmmdq_immb(arg14[0].o, 3))
                        arg14[0].o = zmm1[0].o
                        zmm0[0].o = *(rsi_58 + rax_344)
                        int64_t rsi_59 = sx.q(temp0_2262)
                        arg6[0].o = var_880_1[0].o
                        var_800_5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rsi_59), 0x30)
                        void* rsi_60 = arg17 + rsi_59
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, *(r10_18 + rsi_60), 0x30)
                        var_880_1[0].o = zmm1[0].o
                        int32_t* r10_19 = zx.q(arg16[0])
                        float* r14_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 1))
                        float* r15_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 2))
                        float* rcx_98 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 3))
                        arg16[0].o = *(rdx_83 + rax_344)
                        int64_t rdx_84 = sx.q(temp0_2256)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(arg17 + rdx_84), 0x10)
                        float* r9_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = *(r10_19 + rax_344)
                        int32_t* r10_20 = zx.q(arg8[0].d)
                        float* r8_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(var_8a0_3[0].o, 3))
                        var_8a0_3[0].o = *(r10_20 + rax_344)
                        int32_t* r10_21 = zx.q(arg10[0])
                        float* rcx_99 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3))
                        arg13[0].o = *(r10_21 + rax_344)
                        void* rax_345 = arg17 + rdx_84
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_334 + rax_345), 0x10)
                        zmm1[0].o = var_8a0_3[0].o
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_17 + rsi_60), 0x30)
                        var_8a0_3[0].o = zmm1[0].o
                        arg16[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, *(rdi_49 + rax_345), 0x10)
                        zmm1[0].o = var_7c0_3[0].o
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_17 + rsi_60), 0x30)
                        var_7c0_3[0].o = zmm1[0].o
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r14_18 + rax_345), 0x10)
                        zmm1[0].o = var_910_1.o
                        arg15[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_14 + rsi_60), 0x30)
                        float* rdx_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                        zmm1[0].o = var_780_3[0].o
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_99 + rsi_60), 0x30)
                        float* r8_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                        float* rdi_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                        var_8a0_3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_3[0].o, 
                            *(rdx_86 + rax_345), 0x10)
                        float* rdx_87 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rdx_87 + rax_345), 0x10)
                        float* rax_346 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        float* rdx_88 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        int64_t rsi_61 = sx.q(var_840_1.d)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(arg17 + rsi_61), 0x20)
                        void* rsi_62 = arg17 + rsi_61
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_900_2[0].q + rsi_62), 0x20)
                        int64_t rcx_101 = sx.q(var_940_1.d)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg17 + rcx_101), 0x30)
                        arg10 = _mm256_insertf128_ps(arg8, var_800_5[0].o, 1)
                        void* rcx_102 = arg17 + rcx_101
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_660_2[0] + rcx_102), 0x30)
                        arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg16[0].o, 
                            *(var_800_5[0].q + rsi_62), 0x20)
                        arg16 = var_640_1
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r13_5 + rcx_102), 0x30)
                        r13 = var_6e8
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_14 + rsi_62), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_98 + rcx_102), 0x30)
                        var_8a0_3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_3[0].o, 
                            *(r8_15 + rsi_62), 0x20)
                        var_8a0_3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_3[0].o, 
                            *(rdi_50 + rcx_102), 0x30)
                        var_800_5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rax_346 + rsi_62), 0x20)
                        var_800_5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_800_5[0].o, 
                            *(rdx_88 + rcx_102), 0x30)
                        int64_t rax_347 = zmm2[0].q
                        int64_t rcx_103 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_89 = zmm2[0].q
                        int64_t rbx_78 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = zx.o(*(arg17 + rax_347))
                        int64_t rax_348 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rcx_103), 1)
                        int64_t rcx_104 = arg9[0].q
                        zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rdx_89), 2)
                        int64_t rdx_90 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rbx_78), 3)
                        int64_t rbx_79 = zmm1[0].q
                        zmm1[0].o = zx.o(*(arg17 + rcx_104))
                        zmm1[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rax_348), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rbx_79), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rdx_90), 3)
                        arg13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_880_1[0].o, 1)
                        arg12 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_8a0_3[0].o, 1)
                        arg5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_7c0_3[0].o, 1)
                        arg7 = _mm256_insertf128_ps(var_8a0_3, arg15[0].o, 1)
                        arg9 = _mm256_insertf128_ps(var_800_5, arg6[0].o, 1)
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
                        goto label_1402c4285
            
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
        arg5[0].o = var_5a0_1[4].o
        arg6[0].o = var_580_1[0].o
        zmm5[0].o = var_580_1[4].o
        arg7[0].o = var_560_1[0].o
        arg8[0].o = var_560_1[4].o
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
            uint64_t rcx_105
            uint64_t rflags_2
            
            if (i_4 == 0)
                rcx_105 = 0x40
            else
                rcx_105, rflags_2 = _bit_scan_forward(i_4)
            float var_140[0x8] = zmm1
            zmm0[0].o = (&var_2a0)[rcx_105]
            *(r13 + sx.q(var_140[zx.q(rcx_105.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i_4 &= rol.q(-2, rcx_105.b)
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
    float var_7c0_1[0x8] = zmm0
    zmm0[0].o = 3
    zmm1[0].o = zx.o(arg17)
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    float var_160_1[0x8] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int32_t rcx_2
    rcx_2.b = zmm0[0].o f>= zmm2[0]
    zmm0[0].o = zx.o(neg.d(rcx_2))
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_300 = zmm0
    zmm0[0].o = arg5[0].o
    zmm0[0] = float.s(arg18 - 1)
    zmm0[0].o = zmm0[0].o f* zmm2[0]
    int32_t rcx_4 = int.d(zmm0[0])
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
    float var_1a0_1[0x8] = zmm0
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
        int64_t rcx_6 = sx.q(zmm0[0])
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
        arg15[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
        float var_800_1[0x8] = zmm0
        zmm0[0].o = data_1434422d0
        arg6[0].o = zmm0[0].o
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
        zmm0 = __vorps_ymmqq_ymmqq_memqq(zmm0, var_300)
        uint32_t var_8a0[0x8]
        arg11 = var_8a0
        int32_t var_7a0_1 = r11.d
        int128_t var_680
        
        if (_mm256_movemask_ps(zmm0) != 0)
            var_680.32 = _mm256_blendv_ps(var_680.32, arg12, zmm0)
            arg11 = _mm256_blendv_ps(arg11, arg12, zmm0)
        
        zmm5 = var_7c0_1
        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
        int64_t var_6a0
        var_6a0.o = arg6[0].o
        arg6 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        arg12 = _mm256_cmp_ps(arg12, arg12, 0xf)
        int32_t var_780_1[0x8] = arg12
        arg12 = _mm256_xor_ps(zmm0, arg12)
        int32_t temp0_84 = _mm256_movemask_ps(arg12)
        var_7d0 = arg7[0].o
        var_600.32 = arg14
        void* var_8b0
        var_8b0.o = zmm5[0].o
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        int64_t var_940
        float var_900[0x8]
        double var_880[0x4]
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
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                float var_960_1[0x8] = arg5
                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                var_900[0].o = arg6[0].o
                zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                arg14 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                zmm2 = data_143442a40
                zmm1 = _mm256_and_ps(zmm1, zmm2)
                var_940.32 = zmm1
                arg16 = _mm256_and_ps(zmm0, zmm2)
                var_620.32 = arg14
                uint32_t var_8a0_1[0x8] = arg11
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
                    
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                    
                    if ((rcx_11 & 2) != 0)
                        uint32_t rax_55 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_55, 1)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg6 = var_940.32
                    arg10[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    
                    if ((rcx_11 & 4) == 0)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                        
                        if ((rcx_11 & 8) != 0)
                            goto label_1402bfed1
                        
                        goto label_1402bfae1
                    
                    arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg6[0].q), 2)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                    
                    if ((rcx_11 & 8) != 0)
                    label_1402bfed1:
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        uint32_t rax_83 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_83, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        
                        if ((rcx_11 & 0x10) == 0)
                            goto label_1402bfaf0
                        
                        goto label_1402bfefc
                    
                label_1402bfae1:
                    zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    
                    if ((rcx_11 & 0x10) == 0)
                    label_1402bfaf0:
                        
                        if ((rcx_11 & 0x20) != 0)
                            goto label_1402bff10
                        
                        goto label_1402bfaf9
                    
                label_1402bfefc:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 4)
                    
                    if ((rcx_11 & 0x20) != 0)
                    label_1402bff10:
                        uint32_t rax_87 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_87, 5)
                        
                        if ((rcx_11 & 0x40) == 0)
                            goto label_1402bfb02
                        
                        goto label_1402bff21
                    
                label_1402bfaf9:
                    
                    if ((rcx_11 & 0x40) != 0)
                    label_1402bff21:
                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm2[0].q), 6)
                        
                        if (temp0_84.b s< 0)
                        label_1402bff3d:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            uint32_t rax_91 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_91, 7)
                    else
                    label_1402bfb02:
                        
                        if (temp0_84.b s< 0)
                            goto label_1402bff3d
                    
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
                        arg13 = var_620.32
                        arg7 = _mm256_blendv_ps(arg13, var_960_1, zmm0)
                        arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
                        arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                        arg5[0].o ^= arg9[0].o
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_960_1[0].o)
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
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_880[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm5[0].o)
                                arg9 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                                char temp0_284 = _mm256_movemask_ps(zmm0)
                                
                                if ((temp0_284 & 1) == 0)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                    
                                    if ((temp0_284 & 2) != 0)
                                        goto label_1402bfc27
                                    
                                    goto label_1402bfd3f
                                
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg9[0].q), 0)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                
                                if ((temp0_284 & 2) != 0)
                                label_1402bfc27:
                                    uint16_t rax_60[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_60, 1)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                    
                                    if ((temp0_284 & 4) == 0)
                                        goto label_1402bfd54
                                    
                                    goto label_1402bfc44
                                
                            label_1402bfd3f:
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                
                                if ((temp0_284 & 4) == 0)
                                label_1402bfd54:
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
                                    
                                    if ((temp0_284 & 8) != 0)
                                        goto label_1402bfc65
                                    
                                    goto label_1402bfd62
                                
                            label_1402bfc44:
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm5[0].q), 2)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
                                
                                if ((temp0_284 & 8) != 0)
                                label_1402bfc65:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    uint16_t rax_64[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_64, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_284 & 0x10) == 0)
                                        goto label_1402bfd72
                                    
                                    goto label_1402bfc91
                                
                            label_1402bfd62:
                                zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                
                                if ((temp0_284 & 0x10) == 0)
                                label_1402bfd72:
                                    
                                    if ((temp0_284 & 0x20) != 0)
                                        goto label_1402bfca6
                                    
                                    goto label_1402bfd7c
                                
                            label_1402bfc91:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                
                                if ((temp0_284 & 0x20) != 0)
                                label_1402bfca6:
                                    uint16_t rax_68[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_68, 5)
                                    
                                    if ((temp0_284 & 0x40) == 0)
                                        goto label_1402bfd86
                                    
                                    goto label_1402bfcb8
                                
                            label_1402bfd7c:
                                
                                if ((temp0_284 & 0x40) != 0)
                                label_1402bfcb8:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm5[0].q), 6)
                                    
                                    if (temp0_284 s< 0)
                                    label_1402bfcd4:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint16_t rax_72[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_72, 7)
                                else
                                label_1402bfd86:
                                    
                                    if (temp0_284 s< 0)
                                        goto label_1402bfcd4
                                
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_840.o)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                arg8 = _mm256_and_ps(zmm0, arg5)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm5 = _mm256_and_ps(arg8, arg12)
                                
                                if (_mm256_movemask_ps(zmm5) != j)
                                    zmm0 = _mm256_xor_ps(arg8, arg5)
                                
                                arg7 = _mm256_blendv_ps(arg7, arg13, arg8)
                                var_960_1[0].o =
                                    __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_960_1[0].o, var_960_1[0].o)
                                arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, var_960_1[0].o)
                                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, var_960_1[0].o)
                                arg6 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, var_900[0].o)
                                arg5[0].o ^= var_960_1[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_960_1[0].o)
                                zmm5[0].o ^= var_960_1[0].o
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
                            arg10 = var_840.32
                            
                            do
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_880[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm5[0].o)
                                arg9 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                                char temp0_431 = _mm256_movemask_ps(zmm0)
                                void var_8d8
                                
                                if ((temp0_431 & 1) != 0)
                                    return sub_1402c0380(rcx_11, j_1, r8, arg5, rbx_4, &var_8d8, 
                                        temp0_431, temp0_84, rcx_9, r13, r15_2, zmm1, arg6, arg7, 
                                        arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, 
                                        var_8b0) __tailcall
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                
                                if ((temp0_431 & 2) == 0)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                    
                                    if ((temp0_431 & 4) != 0)
                                        goto label_1402c03e4
                                    
                                    goto label_1402c0347
                                
                                uint16_t rax_111[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                int64_t var_8e0
                                zmm2[0].o = var_8e0.o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_111, 1)
                                var_8e0.o = zmm2[0].o
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                
                                if ((temp0_431 & 4) != 0)
                                label_1402c03e4:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm2[0].o = var_8e0.o
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm5[0].q), 2)
                                    var_8e0.o = zmm2[0].o
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                                    
                                    if ((temp0_431 & 8) == 0)
                                        goto label_1402c0355
                                    
                                    goto label_1402c0417
                                
                            label_1402c0347:
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                                
                                if ((temp0_431 & 8) != 0)
                                label_1402c0417:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    uint16_t rax_115[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                    zmm2[0].o = var_8e0.o
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_115, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_431 & 0x10) != 0)
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                            zx.d(*zmm0[0].q), 4)
                                else
                                label_1402c0355:
                                    zmm2[0].o = var_8e0.o
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_431 & 0x10) != 0)
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                            zx.d(*zmm0[0].q), 4)
                                
                                if ((temp0_431 & 0x20) == 0)
                                    if ((temp0_431 & 0x40) != 0)
                                        goto label_1402c02b8
                                    
                                    goto label_1402c0461
                                
                                uint16_t rax_104[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_104, 5)
                                
                                if ((temp0_431 & 0x40) == 0)
                                label_1402c0461:
                                    
                                    if (temp0_431 s< 0)
                                    label_1402c02d4:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint16_t rax_108[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_108, 7)
                                else
                                label_1402c02b8:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm5[0].q), 6)
                                    
                                    if (temp0_431 s< 0)
                                        goto label_1402c02d4
                                
                                var_8e0.o = zmm2[0].o
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
                                zmm5[0].o ^= zmm1[0].o
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
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
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg5[0].q), 0)
                    
                    arg7[0].o = var_730.o
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    
                    if ((rcx_11 & 2) == 0)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                        
                        if ((rcx_11 & 4) != 0)
                            goto label_1402bf17c
                        
                        goto label_1402c094d
                    
                    uint16_t rax_9[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_9, 1)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                    
                    if ((rcx_11 & 4) != 0)
                    label_1402bf17c:
                        zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm5[0].q), 2)
                        zmm5[0].o = var_8b0.o
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg6[0].o)
                        
                        if ((rcx_11 & 8) == 0)
                            goto label_1402c0963
                        
                        goto label_1402bf1a5
                    
                label_1402c094d:
                    zmm5[0].o = var_8b0.o
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg6[0].o)
                    
                    if ((rcx_11 & 8) == 0)
                    label_1402c0963:
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        
                        if ((rcx_11 & 0x10) != 0)
                            goto label_1402bf1d0
                        
                        goto label_1402c0972
                    
                label_1402bf1a5:
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    uint16_t rax_13[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_13, 3)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                    
                    if ((rcx_11 & 0x10) != 0)
                    label_1402bf1d0:
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0].q), 4)
                        
                        if ((rcx_11 & 0x20) == 0)
                            goto label_1402c097b
                        
                        goto label_1402bf1e4
                    
                label_1402c0972:
                    
                    if ((rcx_11 & 0x20) == 0)
                    label_1402c097b:
                        
                        if ((rcx_11 & 0x40) != 0)
                            goto label_1402bf1f5
                        
                        goto label_1402c0984
                    
                label_1402bf1e4:
                    uint16_t rax_17[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_17, 5)
                    
                    if ((rcx_11 & 0x40) == 0)
                    label_1402c0984:
                        arg5 = var_960_1
                        
                        if (temp0_84.b s< 0)
                        label_1402bf216:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            uint16_t rax_21[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_21, 7)
                    else
                    label_1402bf1f5:
                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg5[0].q), 6)
                        arg5 = var_960_1
                        
                        if (temp0_84.b s< 0)
                            goto label_1402bf216
                    
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
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_880[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    
                    if ((rcx_11 & 1) != 0)
                        arg14[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*zmm1[0].q), 0)
                    
                    arg6[0].o = var_7e0.o
                    arg16[0].o = var_740.o
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    
                    if ((rcx_11 & 2) != 0)
                        uint32_t rax_142 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_142, 1)
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                        uint32_t rax_146 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_146, 3)
                    
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
                            goto label_1402bf24b
                        
                        goto label_1402c0aca
                    
                    uint32_t rax_23 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_23, 5)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    
                    if ((rcx_11 & 0x40) == 0)
                    label_1402c0aca:
                        arg5[0].o = var_910.o
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        
                        if (temp0_84.b s< 0)
                        label_1402bf272:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_27 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_27, 7)
                    else
                    label_1402bf24b:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg14[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg5[0].q), 6)
                        arg5[0].o = var_910.o
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        
                        if (temp0_84.b s< 0)
                            goto label_1402bf272
                    
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm0[0].o = arg14[0].o & data_142fc92e0
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg5[0].q, 0)
                    
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    var_880[0].o = zmm2[0].o
                    
                    if ((rcx_10 & 2) != 0)
                        int64_t rax_41 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_41, 1)
                    
                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0 = var_940.32
                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    
                    if ((rcx_10 & 4) == 0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                        
                        if ((rcx_10 & 8) != 0)
                            goto label_1402bfe3b
                        
                        goto label_1402bf6ce
                    
                    arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 2)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                    
                    if ((rcx_10 & 8) != 0)
                    label_1402bfe3b:
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rax_75 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_75, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        
                        if ((rcx_10 & 0x10) == 0)
                            goto label_1402bf6dd
                        
                        goto label_1402bfe60
                    
                label_1402bf6ce:
                    zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                    
                    if ((rcx_10 & 0x10) == 0)
                    label_1402bf6dd:
                        
                        if ((rcx_10 & 0x20) != 0)
                            goto label_1402bfe6e
                        
                        goto label_1402bf6e6
                    
                label_1402bfe60:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 4)
                    
                    if ((rcx_10 & 0x20) != 0)
                    label_1402bfe6e:
                        int64_t rax_77 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_77, 5)
                        
                        if ((rcx_10 & 0x40) == 0)
                            goto label_1402bf6ef
                        
                        goto label_1402bfe82
                    
                label_1402bf6e6:
                    
                    if ((rcx_10 & 0x40) != 0)
                    label_1402bfe82:
                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg5[0].q, 6)
                        
                        if (temp0_84.b s< 0)
                        label_1402bfe9b:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_79 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_79, 7)
                    else
                    label_1402bf6ef:
                        
                        if (temp0_84.b s< 0)
                            goto label_1402bfe9b
                    
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
                        arg10 = _mm256_blendv_ps(arg14, var_960_1, zmm0)
                        arg6[0].o = var_3c0
                        arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
                        arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg9[0].o)
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_900[0].o)
                        zmm5[0].o ^= arg9[0].o
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_960_1[0].o)
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
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_880[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg7[0].o)
                                arg9 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                                char temp0_189 = _mm256_movemask_ps(zmm0)
                                int128_t var_660
                                var_960_1[0].o = var_660
                                
                                if ((temp0_189 & 1) == 0)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                    
                                    if ((temp0_189 & 2) != 0)
                                        goto label_1402bf7ee
                                    
                                    goto label_1402bf910
                                
                                var_960_1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_960_1[0].o, *arg9[0].q, 0)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                
                                if ((temp0_189 & 2) != 0)
                                label_1402bf7ee:
                                    int64_t rax_44 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    var_960_1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_960_1[0].o, *rax_44, 1)
                                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                    
                                    if ((temp0_189 & 4) == 0)
                                        goto label_1402bf925
                                    
                                    goto label_1402bf80e
                                
                            label_1402bf910:
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                
                                if ((temp0_189 & 4) == 0)
                                label_1402bf925:
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                                    
                                    if ((temp0_189 & 8) != 0)
                                        goto label_1402bf82c
                                    
                                    goto label_1402bf933
                                
                            label_1402bf80e:
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                var_960_1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_960_1[0].o, *zmm5[0].q, 2)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                                
                                if ((temp0_189 & 8) != 0)
                                label_1402bf82c:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    int64_t rax_46 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    var_960_1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_960_1[0].o, *rax_46, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_189 & 0x10) == 0)
                                        goto label_1402bf943
                                    
                                    goto label_1402bf852
                                
                            label_1402bf933:
                                zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                
                                if ((temp0_189 & 0x10) == 0)
                                label_1402bf943:
                                    
                                    if ((temp0_189 & 0x20) != 0)
                                        goto label_1402bf861
                                    
                                    goto label_1402bf94d
                                
                            label_1402bf852:
                                var_960_1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_960_1[0].o, *zmm0[0].q, 4)
                                
                                if ((temp0_189 & 0x20) != 0)
                                label_1402bf861:
                                    int64_t rax_48 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    var_960_1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_960_1[0].o, *rax_48, 5)
                                    
                                    if ((temp0_189 & 0x40) == 0)
                                        goto label_1402bf957
                                    
                                    goto label_1402bf876
                                
                            label_1402bf94d:
                                
                                if ((temp0_189 & 0x40) != 0)
                                label_1402bf876:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    var_960_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        var_960_1[0].o, *zmm5[0].q, 6)
                                    
                                    if (temp0_189 s< 0)
                                    label_1402bf88f:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        int64_t rax_50 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        var_960_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            var_960_1[0].o, *rax_50, 7)
                                else
                                label_1402bf957:
                                    
                                    if (temp0_189 s< 0)
                                        goto label_1402bf88f
                                
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(var_960_1[0].o, zx.o(0))
                                var_660 = var_960_1[0].o
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(var_960_1[0].q)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_840.o)
                                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                arg8 = _mm256_and_ps(zmm0, arg11)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm5 = _mm256_and_ps(arg8, arg12)
                                
                                if (_mm256_movemask_ps(zmm5) != j_2)
                                    zmm0 = _mm256_xor_ps(arg8, arg11)
                                
                                arg10 = _mm256_blendv_ps(arg10, arg13, arg8)
                                var_960_1[0].o =
                                    __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_960_1[0].o, var_960_1[0].o)
                                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, var_960_1[0].o)
                                arg7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg14[0].o, var_960_1[0].o)
                                arg6 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_900[0].o)
                                zmm5[0].o ^= var_960_1[0].o
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg7[0].o, var_960_1[0].o)
                                arg7[0].o ^= var_960_1[0].o
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
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
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
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                    
                                    if ((temp0_372 & 2) != 0)
                                        rax_100 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_100, 1)
                                else
                                    arg7[0].o = var_640
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                    arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                    
                                    if ((temp0_372 & 2) != 0)
                                        rax_100 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_100, 1)
                                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_940.o)
                                
                                if ((temp0_372 & 4) == 0)
                                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                                    
                                    if ((temp0_372 & 8) != 0)
                                        goto label_1402c000e
                                    
                                    goto label_1402c0141
                                
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm5[0].q, 2)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                                
                                if ((temp0_372 & 8) != 0)
                                label_1402c000e:
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    int64_t rax_94 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_94, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                    
                                    if ((temp0_372 & 0x10) == 0)
                                        goto label_1402c0151
                                    
                                    goto label_1402c0034
                                
                            label_1402c0141:
                                zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                                
                                if ((temp0_372 & 0x10) == 0)
                                label_1402c0151:
                                    
                                    if ((temp0_372 & 0x20) != 0)
                                        goto label_1402c0043
                                    
                                    goto label_1402c015b
                                
                            label_1402c0034:
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 4)
                                
                                if ((temp0_372 & 0x20) != 0)
                                label_1402c0043:
                                    int64_t rax_96 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_96, 5)
                                    
                                    if ((temp0_372 & 0x40) == 0)
                                        goto label_1402c0165
                                    
                                    goto label_1402c0058
                                
                            label_1402c015b:
                                
                                if ((temp0_372 & 0x40) != 0)
                                label_1402c0058:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm5[0].q, 6)
                                    
                                    if (temp0_372 s< 0)
                                    label_1402c0071:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        int64_t rax_98 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_98, 7)
                                else
                                label_1402c0165:
                                    
                                    if (temp0_372 s< 0)
                                        goto label_1402c0071
                                
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg15[0].o)
                                var_640 = arg7[0].o
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(arg7[0].q)
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
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
                    arg6 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                    arg5 = zmm5
                    
                    if ((rcx_10 & 1) != 0)
                        zmm5[0].o = var_920
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 0)
                        var_920 = zmm5[0].o
                    
                    arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    
                    if ((rcx_10 & 2) != 0)
                        int64_t rax_120 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm5[0].o = var_920
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_120, 1)
                        var_920 = zmm5[0].o
                    
                    arg10 = arg5
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, var_940.o)
                    
                    if ((rcx_10 & 4) != 0)
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm5[0].o = var_920
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm5[0].q, 2)
                        var_920 = zmm5[0].o
                    
                    zmm5[0].o = var_8b0.o
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                    
                    if ((rcx_10 & 8) != 0)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        int64_t rax_122 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg6[0].o = var_920
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_122, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        
                        if ((rcx_10 & 0x10) != 0)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 4)
                    else
                        arg6[0].o = var_920
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        
                        if ((rcx_10 & 0x10) != 0)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 4)
                    
                    if ((rcx_10 & 0x20) == 0)
                        if ((rcx_10 & 0x40) != 0)
                            goto label_1402c0774
                        
                        goto label_1402c068f
                    
                    int64_t rax_126 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_126, 5)
                    
                    if ((rcx_10 & 0x40) == 0)
                    label_1402c068f:
                        
                        if (temp0_84.b s< 0)
                        label_1402c078d:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_128 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_128, 7)
                    else
                    label_1402c0774:
                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg5[0].q, 6)
                        
                        if (temp0_84.b s< 0)
                            goto label_1402c078d
                    
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    arg11 = _mm256_blendv_ps(arg11, zmm0, arg12)
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_900[0].o)
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg11[0].o, var_960_1[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg12)
                    bool cond:19_1 = _mm256_movemask_ps(zmm0) == 0
                    var_920 = arg6[0].o
                    
                    if (not(cond:19_1))
                        arg11 = _mm256_blendv_ps(arg11, var_960_1, zmm0)
                    
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    var_960_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
                    zmm1 = _mm256_insertf128_ps(var_960_1, zmm2[0].o, 1)
                    
                    if ((rcx_10 & 1) != 0)
                        zmm2[0].o = var_7e0.o
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 0)
                        var_7e0.o = zmm2[0].o
                    
                    arg16[0].o = var_740.o
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    
                    if ((rcx_10 & 2) != 0)
                        int64_t rax_129 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg6[0].o = var_7e0.o
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_129, 1)
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_940.o)
                        
                        if ((rcx_10 & 4) != 0)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 2)
                    else
                        arg6[0].o = var_7e0.o
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_940.o)
                        
                        if ((rcx_10 & 4) != 0)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 2)
                    
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                    
                    if ((rcx_10 & 8) != 0)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_131 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_131, 3)
                        arg5[0].o = var_910.o
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        
                        if ((rcx_10 & 0x10) != 0)
                        label_1402c0858:
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 4)
                            
                            if ((rcx_10 & 0x20) == 0)
                                goto label_1402c07f6
                            
                            goto label_1402c0862
                    else
                        arg5[0].o = var_910.o
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        
                        if ((rcx_10 & 0x10) != 0)
                            goto label_1402c0858
                    
                    if ((rcx_10 & 0x20) == 0)
                    label_1402c07f6:
                        zmm1[0].o = __vpmovzxwd_xmmdq_memq(var_920.q)
                        
                        if ((rcx_10 & 0x40) != 0)
                            goto label_1402c0879
                        
                        goto label_1402c0802
                    
                label_1402c0862:
                    int64_t rax_133 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_133, 5)
                    zmm1[0].o = __vpmovzxwd_xmmdq_memq(var_920.q)
                    
                    if ((rcx_10 & 0x40) == 0)
                    label_1402c0802:
                        zmm2[0].o = var_920
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        
                        if (temp0_84.b s< 0)
                        label_1402c089d:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_135 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_135, 7)
                    else
                    label_1402c0879:
                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 6)
                        zmm2[0].o = var_920
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
                        
                        if (temp0_84.b s< 0)
                            goto label_1402c089d
                    
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
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
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
        arg14 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        arg16[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
        uint64_t r11_3 = zx.q(r8.d)
        var_8a0 = arg11
        var_680.32 = arg10
        var_900 = arg13
        var_960 = arg14
        var_880 = arg8
        float var_4e0_1[0x8]
        float var_4c0_1[0x8]
        float var_4a0_1[0x8]
        
        if (r8.d u> 6)
        label_1402c0df0:
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
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
            zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (r11_3)
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
                    int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t r14_2 = zmm0[0].q
                    int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rsi_2 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    int64_t rcx_13 = zmm5[0].q
                    int64_t rax_151 = arg6[0].q
                    int64_t rdx_3 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm0[0].o = *(arg17 + rcx_13)
                    zmm1[0].o = *(arg17 + rcx_13 + 4)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rsi_2), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rax_151), 0x20)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + rdx_3), 0x30)
                    zmm2[0].o = *(arg17 + rdi_6)
                    arg6[0].o = *(arg17 + rdi_6 + 4)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + r9_2), 0x10)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + r14_2), 0x20)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + r10_3), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rsi_2 + 4), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rax_151 + 4), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rdx_3 + 4), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r9_2 + 4), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r14_2 + 4), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r10_3 + 4), 0x30)
                    arg13 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                    zmm0[0].o = *(arg17 + rdi_6 + 8)
                    zmm2[0].o = *(arg17 + rcx_13 + 8)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rsi_2 + 8), 0x10)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rax_151 + 8), 0x20)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rdx_3 + 8), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r9_2 + 8), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r14_2 + 8), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r10_3 + 8), 0x30)
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
                    int64_t rcx_14 = zmm1[0].q
                    int64_t r15_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_6 = zmm0[0].q
                    int64_t rdi_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t r10_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    int64_t rax_152 = zmm5[0].q
                    int64_t r14_3 = arg6[0].q
                    int64_t r9_3 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm0[0].o = zx.o(*(arg17 + rcx_14))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + r15_3), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + rbx_6), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + rdi_7), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + rax_152), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + r10_4), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + r14_3), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg17 + r9_3), 7)
                    zmm1[0].o = zx.o(*(arg17 + rcx_14 + 2))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + r15_3 + 2), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + rbx_6 + 2), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + rdi_7 + 2), 3)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + rax_152 + 2), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + r10_4 + 2), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + r14_3 + 2), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg17 + r9_3 + 2), 7)
                    zmm2[0].o = zx.o(*(arg17 + rcx_14 + 4))
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r15_3 + 4), 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rbx_6 + 4), 2)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rdi_7 + 4), 3)
                    zmm2[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rax_152 + 4), 4)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r10_4 + 4), 5)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r14_3 + 4), 6)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r9_3 + 4), 7)
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
                    float var_800_2[0x8] = zmm0
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
                    int64_t rax_154 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rcx_17 = zmm2[0].q
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + r15_2 + 0x14), 0x30)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                    int64_t rdx_7 = arg6[0].q
                    int64_t rdi_9 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    int64_t r10_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t r9_5 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    int64_t rsi_5 = zmm2[0].q
                    zmm2[0].o = zx.o(*(arg17 + rcx_17))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rax_154), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rdx_7), 2)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rdi_9), 3)
                    int64_t rax_155 = zmm5[0].q
                    arg6[0].o = zx.o(*(arg17 + rsi_5))
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r10_5), 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rax_155), 2)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r9_5), 3)
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
                    goto label_1402c0df0
            
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
            float var_3a0_1[0x8]
            float var_380_1[0x8]
            
            if (r8.d u> 6)
            label_1402c1670:
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
                
                switch (r11_3)
                    case 0, 1
                        zmm0[0].o = _mm256_extractf128_ps(var_900[0].o, 1)
                        arg13[0].o = arg8[0].o
                        arg8 = var_960
                        zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg10 = var_880
                        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg14[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg6[0].o)
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_900[0].o, arg5[0].o)
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
                        int64_t r9_6 = zmm0[0].q
                        int64_t r11_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rsi_6 = arg17 + r9_6
                        void* r15_4 = arg17 + r11_4
                        arg10 = arg9
                        arg9[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r14_4 = zmm2[0].q
                        void* rdx_8 = arg17 + r14_4
                        int64_t r10_6 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        void* rax_159 = arg17 + r10_6
                        zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg7 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm0 = _mm256_blendv_ps(arg11, arg7, arg6)
                        zmm2[0].o = *(zmm0[0].q + rdx_8)
                        float* rbx_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t r12_3 = zmm5[0].q
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_8 + rax_159), 0x10)
                        arg8 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg6 = _mm256_blendv_ps(arg11, arg8, arg6)
                        zmm1[0].o = *(arg6[0].q + rdx_8)
                        float* rdx_9 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_9 + rax_159), 0x10)
                        void* rax_160 = arg17 + r12_3
                        int64_t rdx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(zmm0[0].q + rax_160), 0x20)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(arg6[0].q + rax_160), 0x20)
                        void* rax_161 = arg17 + rdx_10
                        float* rbx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_12 + rax_161), 0x30)
                        float* rbx_13 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_13 + rax_161), 0x30)
                        int64_t rdi_11 = arg9[0].q
                        zmm2 = _mm256_blendv_ps(arg11, arg7, arg5)
                        arg6[0].o = *(zmm2[0].q + rsi_6)
                        arg5 = _mm256_blendv_ps(arg11, arg8, arg5)
                        arg8[0].o = arg13[0].o
                        zmm5[0].o = *(arg5[0].q + rsi_6)
                        void* rsi_7 = arg17 + rdi_11
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
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg5[0].q + rsi_7), 0x20)
                        void* rax_164 = arg17 + rbx_18
                        float* rsi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_8 + rax_164), 0x30)
                        float* rsi_9 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_9 + rax_164), 0x30)
                        arg6[0].o = *(arg17 + r9_6)
                        zmm5[0].o = *(arg17 + r14_4)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r10_6), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + r12_3), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg17 + rdx_10), 0x30)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + r11_4), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rdi_11), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rbx_18), 0x30)
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
                        zmm2[0].o = _mm256_extractf128_ps(var_960[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_960[0].o, zmm2[0].o)
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
                        int64_t r9_7 = zmm5[0].q
                        void* rbx_19 = arg17 + r9_7
                        int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* r14_5 = arg17 + r8_3
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        int64_t r10_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg7 = _mm256_blendv_ps(arg8, zmm2, arg5)
                        zmm5 = _mm256_blendv_ps(arg8, zmm2, arg6)
                        int64_t r15_5 = zmm0[0].q
                        void* rdx_11 = arg7[0].q
                        uint16_t* rcx_19 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        uint16_t* r11_5 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg5 = _mm256_blendv_ps(arg8, zmm2, arg5)
                        zmm2 = _mm256_blendv_ps(arg8, zmm2, arg6)
                        arg8[0].o = arg10[0].o
                        arg6[0].o = zx.o(*(rdx_11 + rbx_19))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rcx_19 + r14_5), 1)
                        uint16_t* rsi_10 = zmm0[0].q
                        void* rdx_13 = arg5[0].q
                        uint16_t* rcx_20 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        uint16_t* rdi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        uint16_t* rbx_20 = zmm0[0].q
                        zmm0[0].o = zx.o(*(rdx_13 + rbx_19))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_20 + r14_5), 1)
                        void* rcx_21 = arg17 + r15_5
                        void* rdx_15 = arg17 + r10_7
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rsi_10 + rcx_21), 2)
                        int64_t r14_6 = zmm1[0].q
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rbx_20 + rcx_21), 2)
                        void* rcx_22 = arg17 + r14_6
                        int64_t rbx_21 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r11_5 + rdx_15), 3)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(zmm5[0].q + rcx_22), 4)
                        int64_t rsi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_12 + rdx_15), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rcx_22), 4)
                        int64_t rcx_23 = zmm1[0].q
                        void* rdx_17 = arg17 + rbx_21
                        uint16_t* rdi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rdi_13 + rdx_17), 5)
                        uint16_t* rdi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_14 + rdx_17), 5)
                        void* rdx_18 = arg17 + rcx_23
                        arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg5[0].q + rdx_18), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rdx_18), 6)
                        void* rdx_19 = arg17 + rsi_12
                        uint16_t* rdi_17 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_17 + rdx_19), 7)
                        uint16_t* rdi_18 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_18 + rdx_19), 7)
                        zmm2[0].o = zx.o(*(arg17 + r9_7))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r8_3), 1)
                        r8 = var_808
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r15_5), 2)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r10_7), 3)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + r14_6), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rbx_21), 5)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg17 + rcx_23), 6)
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
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                        int64_t rax_167 = sx.q(zmm0[0])
                        void* r8_4 = arg17 + rax_167
                        int32_t temp0_998 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = *(arg17 + rax_167)
                        int64_t r15_6 = sx.q(temp0_998)
                        void* r10_8 = arg17 + r15_6
                        int64_t rsi_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* rdx_21 = arg17 + rsi_13
                        int64_t rax_168 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        void* r9_8 = arg17 + rax_168
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rcx_29 = sx.q(zmm0[0])
                        void* r14_7 = arg17 + rcx_29
                        zmm2[0].o = *(arg17 + rcx_29)
                        int64_t rbx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        void* r11_6 = arg17 + rbx_22
                        int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* rdi_20 = arg17 + r12_4
                        int32_t temp0_1004 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + rbx_22), 0x10)
                        int64_t rbx_23 = sx.q(temp0_1004)
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
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + rax_168), 0x30)
                        zmm2 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9520)
                        int32_t* rax_169 = zx.q(zmm2[0])
                        uint64_t r15_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        float* r12_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        float* rsi_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        arg6[0].o = *(rax_169 + r8_4)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o = *(zx.q(zmm2[0]) + r14_7)
                        float* rax_171 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        float* rbx_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        var_7d0[0] = r11_6
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_171 + r11_6), 0x10)
                        float* rax_172 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        var_6e0 = rdi_20
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_24 + rdi_20), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_172 + r13_2), 0x30)
                        var_6c0 = r13_2
                        var_780_1[0].q = r10_8
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_7 + r10_8), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r12_5 + rdx_21), 0x20)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        float var_800_3[0x8] = zmm0
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_14 + r9_8), 0x30)
                        var_6a0.32 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg13, data_142fc9540)
                        int32_t* rax_173 = zx.q(zmm0[0])
                        uint64_t r15_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* r12_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* rsi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm1[0].o = *(rax_173 + r8_4)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = *(zx.q(zmm0[0]) + r14_7)
                        float* rax_175 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* rbx_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_175 + r11_6), 0x10)
                        float* rax_176 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_25 + rdi_20), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_176 + r13_2), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_8 + r10_8), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_6 + rdx_21), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_15 + r9_8), 0x30)
                        var_760.32 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423c0)
                        arg11[0].o = *(zx.q(zmm0[0]) + r8_4)
                        uint64_t rax_178 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t rax_179 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t rax_180 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        var_600.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg13, data_1434423e0)
                        zmm0[0].o = *(zx.q(arg10[0]) + r8_4)
                        var_620.o = zmm0[0].o
                        arg16 = arg9
                        arg9 = __vandps_ymmqq_ymmqq_memqq(arg13, data_143442400)
                        int32_t* rax_183 = zx.q(arg9[0])
                        arg7 = var_880
                        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm5[0].o = *(rax_183 + r8_4)
                        uint64_t rsi_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int32_t* rdx_22 = zx.q(zmm1[0])
                        uint64_t rdi_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm0[0].o = *(rdx_22 + r14_7)
                        uint64_t rcx_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
                        var_440.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        var_460.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        int32_t* r8_5 = zx.q(zmm1[0])
                        uint64_t r9_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        uint64_t r10_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        uint64_t r11_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        uint64_t rbx_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                        float* r15_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                        float* r14_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                        zmm1[0].o = *(r8_5 + r14_7)
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        float* r8_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        uint64_t rcx_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        uint64_t rdx_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = *(zx.q(zmm2[0]) + r14_7)
                        double rax_185 = var_7d0[0]
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_600.q i+ rax_185), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_9 i+ rax_185), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r8_6 i+ rax_185), 0x10)
                        r8 = var_808
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_16 + var_6e0), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_9 + var_6e0), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_43 + var_6e0), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_21 + var_6c0), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_7 + var_6c0), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_23 + var_6c0), 0x30)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
                        arg13[0].o = arg8[0].o
                        arg8[0].o = _mm256_extractf128_ps(var_900[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                        arg8[0].o = _mm256_extractf128_ps(var_960[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_900[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_960[0].o, arg5[0].o)
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
                        int64_t rax_188 = var_780_1[0].q
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                            *(rax_178 + rax_188), 0x10)
                        arg8[0].o = var_620.o
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rcx_40 + rax_188), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_26 + rax_188), 0x10)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_179 + rdx_21), 0x20)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_180 + r9_8), 0x30)
                        arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, 
                            *(var_440.q + rdx_21), 0x20)
                        r13 = var_6e8
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(var_460.q + r9_8), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_9 + rdx_21), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r14_8 + r9_8), 0x30)
                        int64_t rax_190 = arg5[0].q
                        int64_t rcx_48 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rdx_27 = arg5[0].q
                        int64_t rbx_27 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = zx.o(*(arg17 + rax_190))
                        int64_t rax_191 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rcx_48), 1)
                        int64_t rcx_49 = arg6[0].q
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rdx_27), 2)
                        int64_t rdx_28 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg17 + rbx_27), 3)
                        int64_t rbx_28 = arg6[0].q
                        arg6[0].o = zx.o(*(arg17 + rcx_49))
                        arg6[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rax_191), 1)
                        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rbx_28), 2)
                        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg17 + rdx_28), 3)
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
                        goto label_1402c1670
            
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
            uint64_t rcx_50
            uint64_t rflags_1
            
            if (j_4 == 0)
                rcx_50 = 0x40
            else
                rcx_50, rflags_1 = _bit_scan_forward(j_4)
            float var_120[0x8] = zmm2
            zmm0[0].o = (&var_220)[rcx_50]
            *(r13 + sx.q(var_120[zx.q(rcx_50.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            j_4 &= rol.q(-2, rcx_50.b)
        while (j_4 != 0)
        
        r11 = zx.q(var_7a0_1 + 8)
    while (r11.d s< i_5)
    
    i_4 = zx.q(arg22)
    
    if (r11.d s< i_4.d)
        goto label_1402c21da
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
