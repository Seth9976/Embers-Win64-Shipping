// 函数: sub_1402af160
// 地址: 0x1402af160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg15[0].o
int128_t var_68 = arg14[0].o
int128_t var_78 = arg13[0].o
int128_t var_88 = arg12[0].o
int128_t var_98 = arg11[0].o
int128_t var_a8 = arg10[0].o
int128_t var_b8 = arg9[0].o
int128_t var_c8 = arg8[0].o
int128_t var_d8 = arg7[0].o
int128_t var_e8 = arg6[0].o
int128_t* r13 = arg1
int64_t rbx = sx.q(arg19)
int32_t rcx_1 = *(&data_143442ea0 + (rbx << 2)) * *(&data_143442e80 + (rbx << 2))
uint64_t rcx_2 = 0
int32_t rax = 0x18

if (rbx != 3)
    rax = 0

int32_t i = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
int32_t* var_aa0 = arg4
float var_a90[0x4]
double var_a60[0x4]
double var_a20[0x4]
int64_t var_9c0[0x2]
double var_970[0x2]
double var_960[0x4]
int32_t var_920[0x8]
int128_t var_900
int64_t var_8c0[0x2]
double var_840[0x4]
float var_800[0x8]
float var_700[0x8]
double var_6e0[0x4]
float var_580[0x8]
double var_480[0x4]
double zmm0[0x4]
double zmm1[0x4]
float zmm3[0x8]
double zmm4[0x4]
double zmm5[0x4]

if (i s> 0)
    zmm0[0].o = zx.o(arg4)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_2e0_1[0x4] = zmm0
    zmm0[0].o = zx.o(rax)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_6e0 = zmm0
    zmm0[0].o = rcx_1
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_860_1[0x4] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm1[0].o = arg17
    int32_t rax_5
    rax_5.b = zmm0[0].o f>= zmm1[0].d
    zmm0[0].o = zx.o(neg.d(rax_5))
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_480 = zmm0
    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_300_1[0x4] = zmm0
    zmm0[0].o = arg5[0].o
    zmm0[0].d = float.s(arg16 - 1)
    zmm0[0].o = zmm0[0].o f* zmm1[0].d
    int32_t rcx_5 = int.d(zmm0[0].d)
    
    if (rcx_5 s< 0)
        rcx_5 = 0
    
    if (arg16 - 2 s<= rcx_5)
        rcx_5 = arg16 - 2
    
    zmm1[0].o = zx.o(rcx_5)
    rcx_2 = 0
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
    arg8 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_320_1[0x4] = zmm0
    arg5[0].o = data_142d3f5b0
    var_920 = arg8
    int128_t* var_628_1 = r13
    
    do
        int64_t rax_9 = sx.q((rcx_2 << 3).d)
        zmm0[0].o = *(arg2 + rax_9)
        zmm1[0].o = *(arg2 + rax_9 + 0x10)
        arg10[0].o = *(arg2 + rax_9 + 0x20)
        arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
        arg11[0].o = *(arg2 + rax_9 + 0x30)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x88)
        int128_t var_7c0
        var_7c0.32 = zmm3
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xdd)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg10[0].o, arg11[0].o, 0xdd)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 4)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 4)
        int64_t r14_1 = sx.q(zmm0[0].d)
        int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int32_t temp0_24 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_25 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        int64_t rdx_3 = sx.q(temp0_24)
        int64_t rdi_2 = sx.q(zmm1[0].d)
        int64_t rsi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t rbx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int32_t temp0_28 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm0[0].o = zx.o(*(arg3 + rdi_2 + 8))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rsi_2 + 8), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rbx_2 + 8), 2)
        int64_t rax_12 = sx.q(temp0_28)
        arg13[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rax_12 + 8), 3)
        zmm0[0].o = zx.o(*(arg3 + r14_1 + 8))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r15_1 + 8), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdx_3 + 8), 2)
        int64_t rcx_8 = sx.q(temp0_25)
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rcx_8 + 8), 3)
        zmm0[0].o = zx.o(*(arg3 + r14_1 + 0xc))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r15_1 + 0xc), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdx_3 + 0xc), 2)
        arg9 = _mm256_insertf128_ps(arg6, arg13[0].o, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rcx_8 + 0xc), 3)
        zmm1[0].o = zx.o(*(arg3 + rdi_2 + 0xc))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rsi_2 + 0xc), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rbx_2 + 0xc), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rax_12 + 0xc), 3)
        arg12 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        double var_620[0x4]
        double var_600[0x4]
        float var_5e0[0x8]
        double var_5c0[0x4]
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
            arg8 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
            arg7 = _mm256_and_ps(arg8, arg9)
            int64_t r12_1 = sx.q(arg7[0].d)
            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            int64_t rbx_3 = sx.q(zmm1[0].d)
            int32_t temp0_53 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_54 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            void* rax_16 = arg4 + rbx_3
            int32_t temp0_55 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            arg5 = arg9
            arg9 = __vandps_ymmqq_ymmqq_memqq(arg8, data_142fc9520)
            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            uint64_t rsi_3 = zx.q(zmm1[0].d)
            uint64_t rcx_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdi_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            uint64_t rdx_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = *(rsi_3 + rax_16)
            arg8 = __vandps_ymmqq_ymmqq_memqq(arg8, data_142fc9540)
            zmm3[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            zmm5[0].o = *(zx.q(zmm3[0]) + rax_16)
            void* rax_17 = arg4 + r12_1
            int64_t r15_3 = sx.q(temp0_53)
            void* rsi_5 = arg4 + r15_3
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_9 + rsi_5), 0x10)
            uint64_t rcx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_10 + rsi_5), 0x10)
            int32_t temp0_66 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
            int64_t r10_3 = sx.q(temp0_54)
            void* rsi_6 = arg4 + r10_3
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_3 + rsi_6), 0x20)
            uint64_t rdi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_4 + rsi_6), 0x20)
            int32_t temp0_70 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
            int64_t r14_3 = sx.q(temp0_55)
            void* rdi_5 = arg4 + r14_3
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_4 + rdi_5), 0x30)
            float* rdx_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_5 + rdi_5), 0x30)
            int32_t temp0_74 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3)
            int64_t rcx_12 = sx.q(temp0_66)
            zmm5[0].o = *(zx.q(arg9[0].d) + rax_17)
            arg7[0].o = *(zx.q(arg8[0]) + rax_17)
            void* rax_18 = arg4 + rcx_12
            uint64_t rdi_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_8 + rax_18), 0x10)
            float* rdi_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
            int64_t rsi_8 = sx.q(temp0_70)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_9 + rax_18), 0x10)
            void* rax_19 = arg4 + rsi_8
            uint64_t rdi_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_10 + rax_19), 0x20)
            float* rdi_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_11 + rax_19), 0x20)
            int64_t rax_20 = sx.q(temp0_74)
            void* rdx_7 = arg4 + rax_20
            uint64_t rdi_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            arg9 = arg5
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_12 + rdx_7), 0x30)
            uint64_t rdi_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_13 + rdx_7), 0x30)
            arg5[0].o = *(arg4 + r12_1)
            zmm4[0].o = *(arg4 + rbx_3)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r15_3), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r10_3), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r14_3), 0x30)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_12), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_8), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_20), 0x30)
            arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
            zmm3 = _mm256_insertf128_ps(arg7, zmm3[0].o, 1)
            arg8 = var_920
            zmm4 = _mm256_mul_ps(arg5, arg5)
            zmm4 = _mm256_sub_ps(
                _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm4), _mm256_mul_ps(zmm1, zmm1)), 
                _mm256_mul_ps(zmm3, zmm3))
            zmm5 = _mm256_sqrt_ps(zmm4)
            var_620 = _mm256_maskstore_ps(zmm0, arg5)
            var_600 = _mm256_maskstore_ps(zmm0, zmm1)
            zmm1 = _mm256_cmp_ps(arg15, zmm4, 1)
            var_5e0 = _mm256_maskstore_ps(zmm0, zmm3)
            var_5c0 = _mm256_maskstore_ps(zmm0, _mm256_and_ps(zmm1, zmm5))
        
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg10[0].o, arg11[0].o, 0x88)
        zmm1 = _mm256_cmp_ps(arg15, arg15, 0xf)
        arg10 = _mm256_xor_ps(zmm0, zmm1)
        bool cond:3_1 = _mm256_movemask_ps(arg10) == 0
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        
        if (cond:3_1)
            arg12 = var_7c0.32
        else
            var_960 = zmm1
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0])
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            zmm3 = var_6e0
            zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            int64_t var_8a0[0x2]
            var_8a0.32 = arg5
            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm1[0].o = data_1434422d0
            arg5[0].o = zmm1[0].o
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
            arg5 = __vorps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg5, zmm1[0].o, 1), var_480)
            zmm1 = _mm256_and_ps(arg5, arg10)
            bool cond:5_1 = _mm256_movemask_ps(zmm1) == 0
            int128_t var_820 = arg7[0].o
            var_840 = arg9
            int128_t var_9a0
            
            if (cond:5_1)
                arg15 = data_142fc95a0
                arg9 = var_9a0.32
            else
                arg9 = _mm256_blendv_ps(var_9a0.32, arg11, zmm1)
                arg14 = _mm256_blendv_ps(arg14, arg11, zmm1)
                arg15 = data_142fc95a0
            
            zmm1 = var_860_1
            double var_8e0[0x2] = __vextractf128_memdq_ymmdq_immb(zmm1[0].o, 1)
            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
            arg13 = _mm256_andnot_ps(arg5, arg10)
            int32_t temp0_140 = _mm256_movemask_ps(arg13)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            double var_a80_1[0x4] = zmm1
            int32_t var_540[0x4]
            
            if (temp0_140 == 0)
                arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            else
                var_800 = arg5
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                arg7 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                zmm1[0].o = arg17
                
                if (zmm1[0].o f>= 1f)
                    arg9 = _mm256_blendv_ps(arg9, arg7, arg13)
                    arg14 = _mm256_blendv_ps(arg14, arg7, arg13)
                    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                else
                    var_700 = arg10
                    var_900.32 = arg14
                    zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg12[0].o, var_860_1[0].o)
                    zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_8e0)
                    arg5[0].o = _mm256_extractf128_ps(var_2e0_1[0].o, 1)
                    var_580 = zmm3
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_2e0_1[0].o)
                    var_2e0_1[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_2e0_1[0].o, var_8a0)
                    var_8c0 = zmm5[0].o
                    arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm5[0].o = arg6[0].o
                    arg6[0].o = data_143442a20
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                    var_2e0_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_2e0_1[0].o, arg6[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_2e0_1[0].o)
                    var_970 = zmm5[0].o
                    var_2e0_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                    var_2e0_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_2e0_1[0].o, arg6[0].o)
                    var_2e0_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_2e0_1[0].o)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_8c0)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, var_2e0_1[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                    arg5 = _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg7), 
                        var_300_1))
                    var_2e0_1[0].o = zx.o(0)
                    zmm3[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                    zmm3[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
                    var_2e0_1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    var_a60[0].o = var_2e0_1[0].o
                    arg5[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_2e0_1[0].o)
                    arg15 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                    arg5 = data_143442a40
                    arg10 = _mm256_and_ps(zmm1, arg5)
                    zmm0 = _mm256_and_ps(zmm0, arg5)
                    double var_a80_2[0x4] = zmm0
                    double var_940_1[0x4] = arg7
                    var_9a0.32 = arg9
                    var_540 = arg15[0].o
                    
                    if (arg16 s< 0x100)
                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                        arg11[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        var_a20[0].o = arg5[0].o
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        char r12_2 = temp0_140.b
                        arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        int128_t var_550
                        
                        if ((r12_2 & 1) != 0)
                            arg6[0].o = var_550
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm0[0]), 0)
                        else
                            arg6[0].o = var_550
                        
                        int128_t var_a30
                        arg5[0].o = var_a30
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                        
                        if ((r12_2 & 2) != 0)
                            uint32_t rax_45 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_45, 1)
                        
                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                        zmm3 = var_a80_2
                        arg9[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        var_2e0_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        
                        if ((r12_2 & 4) == 0)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm5[0].o)
                            
                            if ((r12_2 & 8) != 0)
                                goto label_1402b0215
                            
                            goto label_1402afeaf
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm1[0]), 2)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm5[0].o)
                        
                        if ((r12_2 & 8) != 0)
                        label_1402b0215:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            uint32_t rax_67 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_67, 3)
                            zmm0 = _mm256_insertf128_ps(var_2e0_1, zmm1[0].o, 1)
                            
                            if ((r12_2 & 0x10) == 0)
                                goto label_1402afebf
                            
                            goto label_1402b0241
                        
                    label_1402afeaf:
                        zmm0 = _mm256_insertf128_ps(var_2e0_1, zmm1[0].o, 1)
                        
                        if ((r12_2 & 0x10) == 0)
                        label_1402afebf:
                            
                            if ((r12_2 & 0x20) != 0)
                                goto label_1402b0256
                            
                            goto label_1402afec9
                        
                    label_1402b0241:
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm0[0]), 4)
                        
                        if ((r12_2 & 0x20) != 0)
                        label_1402b0256:
                            uint32_t rax_71 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_71, 5)
                            
                            if ((r12_2 & 0x40) == 0)
                                goto label_1402afed3
                            
                            goto label_1402b0268
                        
                    label_1402afec9:
                        
                        if ((r12_2 & 0x40) != 0)
                        label_1402b0268:
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm1[0]), 6)
                            
                            if (temp0_140.b s< 0)
                            label_1402b0283:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint32_t rax_75 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_75, 7)
                        else
                        label_1402afed3:
                            
                            if (temp0_140.b s< 0)
                                goto label_1402b0283
                        
                        var_550 = arg6[0].o
                        zmm1[0].o = arg6[0].o & data_142fc92e0
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                        arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm3[0].o ^= arg12[0].o
                        var_2e0_1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                        var_2e0_1[0].o ^= arg12[0].o
                        zmm4 = _mm256_insertf128_ps(var_2e0_1, zmm3[0].o, 1)
                        zmm3 = _mm256_and_ps(arg13, zmm4)
                        bool cond:18_1 = _mm256_movemask_ps(zmm3) == 0
                        int32_t var_640_2[0x4] = arg11[0].o
                        double var_4a0_2[0x4] = zmm4
                        
                        if (cond:18_1)
                            zmm5 = arg15
                        else
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                            zmm1[0].o ^= arg12[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                            zmm0[0].o ^= arg12[0].o
                            zmm3 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm5 = _mm256_blendv_ps(arg15, arg7, zmm3)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_a60[0].o)
                            zmm4[0].o ^= arg12[0].o
                            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                            arg7[0].o ^= arg12[0].o
                            zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
                            arg7 = arg15
                            arg15 = _mm256_and_ps(zmm3, zmm4)
                            arg11 = _mm256_and_ps(arg13, arg15)
                            int32_t j = _mm256_movemask_ps(arg11)
                            
                            if (j != 0)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm4 = arg7
                                arg7 = var_920
                                
                                do
                                    arg8 = zmm0
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                    arg12[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    char temp0_351 = _mm256_movemask_ps(arg11)
                                    int128_t var_720
                                    uint32_t rax_62
                                    
                                    if ((temp0_351 & 1) != 0)
                                        zmm3[0].o = var_720
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*zmm0[0]), 0)
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                        
                                        if ((temp0_351 & 2) != 0)
                                            rax_62 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rax_62, 1)
                                    else
                                        zmm3[0].o = var_720
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                        
                                        if ((temp0_351 & 2) != 0)
                                            rax_62 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rax_62, 1)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    arg11[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a80_2[0].o)
                                    
                                    if ((temp0_351 & 4) == 0)
                                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                                        
                                        if ((temp0_351 & 8) != 0)
                                            goto label_1402affe0
                                        
                                        goto label_1402b0125
                                    
                                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm1[0]), 2)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                                    
                                    if ((temp0_351 & 8) != 0)
                                    label_1402affe0:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint32_t rax_50 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rax_50, 3)
                                        arg5[0].o = var_a30
                                        zmm0 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                        
                                        if ((temp0_351 & 0x10) == 0)
                                            goto label_1402b013a
                                        
                                        goto label_1402b0011
                                    
                                label_1402b0125:
                                    arg5[0].o = var_a30
                                    zmm0 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                    
                                    if ((temp0_351 & 0x10) == 0)
                                    label_1402b013a:
                                        
                                        if ((temp0_351 & 0x20) != 0)
                                            goto label_1402b0025
                                        
                                        goto label_1402b0143
                                    
                                label_1402b0011:
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm0[0]), 4)
                                    
                                    if ((temp0_351 & 0x20) != 0)
                                    label_1402b0025:
                                        uint32_t rax_54 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rax_54, 5)
                                        
                                        if ((temp0_351 & 0x40) == 0)
                                            goto label_1402b014c
                                        
                                        goto label_1402b0036
                                    
                                label_1402b0143:
                                    
                                    if ((temp0_351 & 0x40) != 0)
                                    label_1402b0036:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*zmm1[0]), 6)
                                        
                                        if (temp0_351 s< 0)
                                        label_1402b0051:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            uint32_t rax_58 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rax_58, 7)
                                    else
                                    label_1402b014c:
                                        
                                        if (temp0_351 s< 0)
                                            goto label_1402b0051
                                    
                                    var_720 = zmm3[0].o
                                    zmm0[0].o = zmm3[0].o & data_142fc92e0
                                    zmm1[0].o =
                                        __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), 
                                        arg15)
                                    zmm1[0].o = zx.o(0)
                                    zmm3 = _mm256_and_ps(zmm0, arg13)
                                    
                                    if (_mm256_movemask_ps(zmm3) != j)
                                        zmm1 = _mm256_xor_ps(zmm0, arg15)
                                    
                                    zmm5 = _mm256_blendv_ps(zmm5, zmm4, zmm0)
                                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                    arg12[0].o =
                                        __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                    zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
                                    zmm0 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                    zmm3[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_memdq(zmm3[0].o, var_a60[0].o)
                                    zmm3[0].o ^= arg12[0].o
                                    zmm4[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_memdq(zmm4[0].o, var_940_1[0].o)
                                    zmm4[0].o ^= arg12[0].o
                                    zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                    arg15 = _mm256_and_ps(zmm3, zmm1)
                                    arg11 = _mm256_and_ps(arg15, arg13)
                                    j = _mm256_movemask_ps(arg11)
                                    zmm4 = arg8
                                while (j != 0)
                        
                        zmm1 = var_4a0_2
                        zmm0 = _mm256_andnot_ps(zmm1, arg13)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            zmm3 = __vxorps_ymmqq_ymmqq_memqq(zmm1, var_960)
                            zmm5 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, data_142fc9440, zmm3)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg12[0].o, var_640_2)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg12[0].o, var_540)
                            arg7[0].o = zx.o(0)
                            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                            arg14[0].o = zx.o(0)
                            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                            zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
                            arg8 = _mm256_and_ps(zmm4, zmm3)
                            arg11 = _mm256_and_ps(arg8, arg13)
                            int32_t j_1 = _mm256_movemask_ps(arg11)
                            
                            if (j_1 != 0)
                                arg15 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                
                                do
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
                                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                    zmm4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    char temp0_433 = _mm256_movemask_ps(arg11)
                                    
                                    if ((temp0_433 & 1) == 0)
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                                        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_433 & 2) != 0)
                                            goto label_1402b0356
                                        
                                        goto label_1402b046a
                                    
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm0[0]), 0)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                    
                                    if ((temp0_433 & 2) != 0)
                                    label_1402b0356:
                                        uint32_t rax_80 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_80, 1)
                                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                        arg11[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a80_2[0].o)
                                        
                                        if ((temp0_433 & 4) == 0)
                                            goto label_1402b047e
                                        
                                        goto label_1402b0372
                                    
                                label_1402b046a:
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    arg11[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a80_2[0].o)
                                    
                                    if ((temp0_433 & 4) == 0)
                                    label_1402b047e:
                                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                                        
                                        if ((temp0_433 & 8) != 0)
                                            goto label_1402b0392
                                        
                                        goto label_1402b048b
                                    
                                label_1402b0372:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm1[0]), 2)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                                    
                                    if ((temp0_433 & 8) != 0)
                                    label_1402b0392:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint32_t rax_84 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_84, 3)
                                        zmm0 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                        
                                        if ((temp0_433 & 0x10) == 0)
                                            goto label_1402b049a
                                        
                                        goto label_1402b03bd
                                    
                                label_1402b048b:
                                    zmm0 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                    
                                    if ((temp0_433 & 0x10) == 0)
                                    label_1402b049a:
                                        
                                        if ((temp0_433 & 0x20) != 0)
                                            goto label_1402b03d1
                                        
                                        goto label_1402b04a3
                                    
                                label_1402b03bd:
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm0[0]), 4)
                                    
                                    if ((temp0_433 & 0x20) != 0)
                                    label_1402b03d1:
                                        uint32_t rax_88 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_88, 5)
                                        
                                        if ((temp0_433 & 0x40) == 0)
                                            goto label_1402b04ac
                                        
                                        goto label_1402b03e2
                                    
                                label_1402b04a3:
                                    
                                    if ((temp0_433 & 0x40) != 0)
                                    label_1402b03e2:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                            zx.d(*zmm1[0]), 6)
                                        
                                        if (temp0_433 s< 0)
                                        label_1402b03fd:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            uint32_t rax_92 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, rax_92, 7)
                                    else
                                    label_1402b04ac:
                                        
                                        if (temp0_433 s< 0)
                                            goto label_1402b03fd
                                    
                                    zmm0[0].o = arg5[0].o & data_142fc92e0
                                    zmm1[0].o =
                                        __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                    zmm1[0].o ^= arg12[0].o
                                    zmm0[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_920[0].o)
                                    zmm0[0].o ^= arg12[0].o
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    zmm1 = _mm256_and_ps(zmm0, arg8)
                                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm3 = _mm256_and_ps(zmm1, arg13)
                                    
                                    if (_mm256_movemask_ps(zmm3) != j_1)
                                        zmm0 = _mm256_xor_ps(zmm1, arg8)
                                    
                                    zmm5 = _mm256_blendv_ps(zmm5, arg15, zmm1)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg12[0].o)
                                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                                    arg15 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    zmm4[0].o = zx.o(0)
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                                    arg14[0].o = zx.o(0)
                                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    arg8 = _mm256_and_ps(zmm1, zmm0)
                                    arg11 = _mm256_and_ps(arg8, arg13)
                                    j_1 = _mm256_movemask_ps(arg11)
                                while (j_1 != 0)
                        
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        arg7 = var_940_1
                        zmm4 = _mm256_blendv_ps(var_9a0.32, zmm5, arg13)
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        arg6 = zmm4
                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a20[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        int64_t var_9f0
                        
                        if ((r12_2 & 1) != 0)
                            zmm1[0].o = var_9f0.o
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm4[0]), 0)
                            var_9f0.o = zmm1[0].o
                        
                        arg15 = data_142fc95a0
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                        
                        if ((r12_2 & 2) == 0)
                            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a80_2[0].o)
                            
                            if ((r12_2 & 4) != 0)
                                goto label_1402b062c
                            
                            goto label_1402b05d3
                        
                        uint16_t rax_97[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1))
                        zmm5[0].o = var_9f0.o
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_97, 1)
                        var_9f0.o = zmm5[0].o
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a80_2[0].o)
                        
                        if ((r12_2 & 4) != 0)
                        label_1402b062c:
                            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm1[0].o = var_9f0.o
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm1[0]), 2)
                            var_9f0.o = zmm1[0].o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                            
                            if ((r12_2 & 8) == 0)
                                goto label_1402b05dd
                            
                            goto label_1402b065b
                        
                    label_1402b05d3:
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                        
                        if ((r12_2 & 8) != 0)
                        label_1402b065b:
                            zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            uint32_t rax_101 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            zmm3[0].o = var_9f0.o
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rax_101, 3)
                            zmm4 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            
                            if ((r12_2 & 0x10) != 0)
                                zmm3[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm4[0]), 4)
                        else
                        label_1402b05dd:
                            zmm3[0].o = var_9f0.o
                            zmm4 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            
                            if ((r12_2 & 0x10) != 0)
                                zmm3[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm4[0]), 4)
                        
                        if ((r12_2 & 0x20) == 0)
                            if ((r12_2 & 0x40) != 0)
                                goto label_1402b0759
                            
                            goto label_1402b06a5
                        
                        uint32_t rax_106 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1))
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rax_106, 5)
                        
                        if ((r12_2 & 0x40) == 0)
                        label_1402b06a5:
                            
                            if (temp0_140.b s< 0)
                            label_1402b0774:
                                zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                uint32_t rax_110 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rax_110, 7)
                        else
                        label_1402b0759:
                            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm3[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm1[0]), 6)
                            
                            if (temp0_140.b s< 0)
                                goto label_1402b0774
                        
                        var_9f0.o = zmm3[0].o
                        zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm4 = _mm256_blendv_ps(var_900.32, zmm0, arg13)
                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_a60[0].o)
                        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg13)
                        bool cond:23_1 = _mm256_movemask_ps(zmm0) == 0
                        var_a30 = arg5[0].o
                        
                        if (not(cond:23_1))
                            zmm4 = _mm256_blendv_ps(zmm4, arg7, zmm0)
                        
                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                        zmm5 = zmm4
                        zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a20[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        int128_t var_560
                        
                        if ((r12_2 & 1) != 0)
                            arg7[0].o = var_560
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm0[0]), 0)
                        else
                            arg7[0].o = var_560
                        
                        arg10 = var_700
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        
                        if ((r12_2 & 2) == 0)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a80_2[0].o)
                            
                            if ((r12_2 & 4) != 0)
                                goto label_1402b089f
                            
                            goto label_1402b07d5
                        
                        uint32_t rax_116 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_116, 1)
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a80_2[0].o)
                        
                        if ((r12_2 & 4) == 0)
                        label_1402b07d5:
                            zmm3[0].o = var_9f0.o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                            
                            if ((r12_2 & 8) != 0)
                            label_1402b07e8:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint32_t rax_114 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_114, 3)
                        else
                        label_1402b089f:
                            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm3[0].q), 2)
                            zmm3[0].o = var_9f0.o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                            
                            if ((r12_2 & 8) != 0)
                                goto label_1402b07e8
                        
                        arg9 = arg6
                        arg6[0].o = var_970
                        zmm0 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        
                        if ((r12_2 & 0x10) == 0)
                            zmm4[0].o = zmm3[0].o & data_142fc92e0
                            
                            if ((r12_2 & 0x20) != 0)
                                goto label_1402b08f3
                            
                            goto label_1402b082b
                        
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm0[0]), 4)
                        zmm4[0].o = zmm3[0].o & data_142fc92e0
                        
                        if ((r12_2 & 0x20) != 0)
                        label_1402b08f3:
                            uint32_t rax_122 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_122, 5)
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                            
                            if ((r12_2 & 0x40) == 0)
                                goto label_1402b083a
                            
                            goto label_1402b090a
                        
                    label_1402b082b:
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                        
                        if ((r12_2 & 0x40) != 0)
                        label_1402b090a:
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm1[0]), 6)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                            
                            if (temp0_140.b s< 0)
                            label_1402b092a:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint32_t rax_126 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_126, 7)
                        else
                        label_1402b083a:
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                            
                            if (temp0_140.b s< 0)
                                goto label_1402b092a
                        
                        zmm4 = var_960
                        zmm0 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        var_560 = arg7[0].o
                        zmm1[0].o = arg7[0].o & data_142fc92e0
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    else
                        arg11[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        char rsi_9 = temp0_140.b
                        arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        int128_t var_430
                        zmm5[0].o = var_430
                        
                        if ((rsi_9 & 1) != 0)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm0[0], 0)
                        
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                        
                        if ((rsi_9 & 2) != 0)
                            int64_t rax_25 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_25, 1)
                        
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        arg5 = var_a80_2
                        var_a20[0].o = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
                        var_2e0_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        int128_t var_880
                        
                        if ((rsi_9 & 4) == 0)
                            arg5[0].o = var_880
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a20[0].o)
                            
                            if ((rsi_9 & 8) != 0)
                                goto label_1402afdcf
                            
                            goto label_1402afa00
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0], 2)
                        arg5[0].o = var_880
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a20[0].o)
                        
                        if ((rsi_9 & 8) != 0)
                        label_1402afdcf:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_37 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_37, 3)
                            zmm0 = _mm256_insertf128_ps(var_2e0_1, zmm1[0].o, 1)
                            
                            if ((rsi_9 & 0x10) == 0)
                                goto label_1402afa10
                            
                            goto label_1402afdf5
                        
                    label_1402afa00:
                        zmm0 = _mm256_insertf128_ps(var_2e0_1, zmm1[0].o, 1)
                        
                        if ((rsi_9 & 0x10) == 0)
                        label_1402afa10:
                            
                            if ((rsi_9 & 0x20) != 0)
                                goto label_1402afe04
                            
                            goto label_1402afa1a
                        
                    label_1402afdf5:
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm0[0], 4)
                        
                        if ((rsi_9 & 0x20) != 0)
                        label_1402afe04:
                            int64_t rax_39 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_39, 5)
                            
                            if ((rsi_9 & 0x40) == 0)
                                goto label_1402afa24
                            
                            goto label_1402afe19
                        
                    label_1402afa1a:
                        
                        if ((rsi_9 & 0x40) != 0)
                        label_1402afe19:
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0], 6)
                            
                            if (temp0_140.b s< 0)
                            label_1402afe31:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_41 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_41, 7)
                        else
                        label_1402afa24:
                            
                            if (temp0_140.b s< 0)
                                goto label_1402afe31
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
                        var_430 = zmm5[0].o
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm3[0].o ^= arg12[0].o
                        var_2e0_1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                        var_2e0_1[0].o ^= arg12[0].o
                        zmm4 = _mm256_insertf128_ps(var_2e0_1, zmm3[0].o, 1)
                        zmm3 = _mm256_and_ps(arg13, zmm4)
                        bool cond:19_1 = _mm256_movemask_ps(zmm3) == 0
                        int32_t var_640_1[0x4] = arg11[0].o
                        double var_4a0_1[0x4] = zmm4
                        
                        if (cond:19_1)
                            arg9 = arg15
                        else
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                            zmm1[0].o ^= arg12[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                            zmm0[0].o ^= arg12[0].o
                            zmm3 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            arg9 = _mm256_blendv_ps(arg15, arg7, zmm3)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_a60[0].o)
                            zmm4[0].o ^= arg12[0].o
                            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                            arg7[0].o ^= arg12[0].o
                            zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
                            arg8 = _mm256_and_ps(zmm3, zmm4)
                            arg11 = _mm256_and_ps(arg13, arg8)
                            int32_t j_2 = _mm256_movemask_ps(arg11)
                            
                            if (j_2 == 0)
                                arg7 = var_940_1
                            else
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm4 = arg15
                                
                                do
                                    arg15 = zmm0
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                    arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg7[0].o)
                                    arg12 = _mm256_insertf128_ps(arg7, zmm3[0].o, 1)
                                    char temp0_240 = _mm256_movemask_ps(arg11)
                                    
                                    if ((temp0_240 & 1) != 0)
                                        arg5[0].o = var_9c0
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg12[0], 0)
                                        var_9c0 = arg5[0].o
                                    
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                    
                                    if ((temp0_240 & 2) != 0)
                                        int64_t rax_32 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        arg5[0].o = var_9c0
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_32, 1)
                                        var_9c0 = arg5[0].o
                                    
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                    arg11[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_2[0].o)
                                    
                                    if ((temp0_240 & 4) != 0)
                                        zmm3[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                        zmm3[0].o = var_9c0
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *zmm3[0].q, 2)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                                        
                                        if ((temp0_240 & 8) != 0)
                                        label_1402afc47:
                                            arg5[0].o = zmm3[0].o
                                            zmm3[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                            int64_t rax_34 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                            zmm3[0].o = arg5[0].o
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                                *rax_34, 3)
                                    else
                                        zmm3[0].o = var_9c0
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                                        
                                        if ((temp0_240 & 8) != 0)
                                            goto label_1402afc47
                                    
                                    arg12[0].o =
                                        __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                    arg5[0].o = var_880
                                    arg11 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                    
                                    if ((temp0_240 & 0x10) == 0)
                                        if ((temp0_240 & 0x20) != 0)
                                            goto label_1402afb13
                                        
                                        goto label_1402afc86
                                    
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg11[0].q, 4)
                                    
                                    if ((temp0_240 & 0x20) != 0)
                                    label_1402afb13:
                                        int64_t rax_28 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_28, 5)
                                        
                                        if ((temp0_240 & 0x40) == 0)
                                            goto label_1402afc8f
                                        
                                        goto label_1402afb27
                                    
                                label_1402afc86:
                                    
                                    if ((temp0_240 & 0x40) != 0)
                                    label_1402afb27:
                                        zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm1[0], 6)
                                        
                                        if (temp0_240 s< 0)
                                        label_1402afb3f:
                                            zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                            int64_t rax_30 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rax_30, 7)
                                    else
                                    label_1402afc8f:
                                        
                                        if (temp0_240 s< 0)
                                            goto label_1402afb3f
                                    
                                    zmm1[0].o =
                                        __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
                                    var_9c0 = zmm3[0].o
                                    zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                                    zmm3[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_920[0].o)
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    zmm3 = _mm256_and_ps(zmm1, arg8)
                                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                    
                                    if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != j_2)
                                        zmm1 = _mm256_xor_ps(zmm3, arg8)
                                    
                                    arg9 = _mm256_blendv_ps(arg9, zmm4, zmm3)
                                    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                                    zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                                    zmm0 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                    zmm3[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_memdq(zmm3[0].o, var_a60[0].o)
                                    zmm3[0].o ^= arg12[0].o
                                    arg7 = var_940_1
                                    zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                                    zmm4[0].o ^= arg12[0].o
                                    zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                    arg8 = _mm256_and_ps(zmm3, zmm1)
                                    arg11 = _mm256_and_ps(arg8, arg13)
                                    j_2 = _mm256_movemask_ps(arg11)
                                    zmm4 = arg15
                                while (j_2 != 0)
                        
                        zmm1 = var_4a0_1
                        zmm0 = _mm256_andnot_ps(zmm1, arg13)
                        
                        if (_mm256_movemask_ps(zmm0) == 0)
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        else
                            zmm3 = __vxorps_ymmqq_ymmqq_memqq(zmm1, var_960)
                            arg9 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, data_142fc9440, zmm3)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg12[0].o, var_640_1)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg12[0].o, var_540)
                            arg7[0].o = zx.o(0)
                            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                            arg14[0].o = zx.o(0)
                            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                            zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
                            arg15 = _mm256_and_ps(zmm4, zmm3)
                            arg11 = _mm256_and_ps(arg15, arg13)
                            int32_t j_3 = _mm256_movemask_ps(arg11)
                            
                            if (j_3 != 0)
                                arg8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                
                                do
                                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                                    zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                    char temp0_578 = _mm256_movemask_ps(arg11)
                                    
                                    if ((temp0_578 & 1) == 0)
                                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                        
                                        if ((temp0_578 & 2) != 0)
                                            goto label_1402b09ed
                                        
                                        goto label_1402b0afd
                                    
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0], 0)
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                    
                                    if ((temp0_578 & 2) != 0)
                                    label_1402b09ed:
                                        int64_t rax_129 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_129, 1)
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                        arg11[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_2[0].o)
                                        
                                        if ((temp0_578 & 4) == 0)
                                            goto label_1402b0b11
                                        
                                        goto label_1402b0a0c
                                    
                                label_1402b0afd:
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                    arg11[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_2[0].o)
                                    
                                    if ((temp0_578 & 4) == 0)
                                    label_1402b0b11:
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                                        
                                        if ((temp0_578 & 8) != 0)
                                            goto label_1402b0a2e
                                        
                                        goto label_1402b0b23
                                    
                                label_1402b0a0c:
                                    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm3[0].q, 2)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                                    
                                    if ((temp0_578 & 8) != 0)
                                    label_1402b0a2e:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        int64_t rax_131 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_131, 3)
                                        zmm0 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                        
                                        if ((temp0_578 & 0x10) == 0)
                                            goto label_1402b0b32
                                        
                                        goto label_1402b0a53
                                    
                                label_1402b0b23:
                                    zmm0 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                    
                                    if ((temp0_578 & 0x10) == 0)
                                    label_1402b0b32:
                                        
                                        if ((temp0_578 & 0x20) != 0)
                                            goto label_1402b0a61
                                        
                                        goto label_1402b0b3b
                                    
                                label_1402b0a53:
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0], 4)
                                    
                                    if ((temp0_578 & 0x20) != 0)
                                    label_1402b0a61:
                                        int64_t rax_133 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_133, 5)
                                        
                                        if ((temp0_578 & 0x40) == 0)
                                            goto label_1402b0b44
                                        
                                        goto label_1402b0a75
                                    
                                label_1402b0b3b:
                                    
                                    if ((temp0_578 & 0x40) != 0)
                                    label_1402b0a75:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0], 6)
                                        
                                        if (temp0_578 s< 0)
                                        label_1402b0a8d:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            int64_t rax_135 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                                *rax_135, 7)
                                    else
                                    label_1402b0b44:
                                        
                                        if (temp0_578 s< 0)
                                            goto label_1402b0a8d
                                    
                                    zmm0[0].o =
                                        __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                    zmm0[0].o ^= arg12[0].o
                                    zmm1[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_920[0].o)
                                    zmm1[0].o ^= arg12[0].o
                                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    zmm1 = _mm256_and_ps(zmm0, arg15)
                                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm3 = _mm256_and_ps(zmm1, arg13)
                                    
                                    if (_mm256_movemask_ps(zmm3) != j_3)
                                        zmm0 = _mm256_xor_ps(zmm1, arg15)
                                    
                                    arg9 = _mm256_blendv_ps(arg9, arg8, zmm1)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg12[0].o)
                                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
                                    arg8 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    zmm4[0].o = zx.o(0)
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                                    arg14[0].o = zx.o(0)
                                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    arg15 = _mm256_and_ps(zmm1, zmm0)
                                    arg11 = _mm256_and_ps(arg15, arg13)
                                    j_3 = _mm256_movemask_ps(arg11)
                                while (j_3 != 0)
                            
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            arg7 = var_940_1
                        
                        zmm0 = _mm256_blendv_ps(var_9a0.32, arg9, arg13)
                        arg9 = zmm0
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        int64_t var_9e0
                        
                        if ((rsi_9 & 1) != 0)
                            zmm3[0].o = var_9e0.o
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm4[0], 0)
                            var_9e0.o = zmm3[0].o
                        
                        arg15 = data_142fc95a0
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        
                        if ((rsi_9 & 2) != 0)
                            int64_t rax_138 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm5[0].o = var_9e0.o
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_138, 1)
                            var_9e0.o = zmm5[0].o
                        
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_2[0].o)
                        
                        if ((rsi_9 & 4) != 0)
                            zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm3[0].o = var_9e0.o
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm3[0].q, 2)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                            
                            if ((rsi_9 & 8) != 0)
                            label_1402b0cca:
                                arg7[0].o = zmm3[0].o
                                zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                int64_t rax_140 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                zmm3[0].o = arg7[0].o
                                arg7 = var_940_1
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_140, 3)
                        else
                            zmm3[0].o = var_9e0.o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                            
                            if ((rsi_9 & 8) != 0)
                                goto label_1402b0cca
                        
                        zmm4 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                        
                        if ((rsi_9 & 0x10) == 0)
                            if ((rsi_9 & 0x20) != 0)
                                goto label_1402b0e72
                            
                            goto label_1402b0d06
                        
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm4[0], 4)
                        
                        if ((rsi_9 & 0x20) != 0)
                        label_1402b0e72:
                            int64_t rax_144 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_144, 5)
                            
                            if ((rsi_9 & 0x40) == 0)
                                goto label_1402b0d10
                            
                            goto label_1402b0e87
                        
                    label_1402b0d06:
                        
                        if ((rsi_9 & 0x40) != 0)
                        label_1402b0e87:
                            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm1[0], 6)
                            
                            if (temp0_140.b s< 0)
                            label_1402b0e9f:
                                zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                int64_t rax_146 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_146, 7)
                        else
                        label_1402b0d10:
                            
                            if (temp0_140.b s< 0)
                                goto label_1402b0e9f
                        
                        var_9e0.o = zmm3[0].o
                        zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm3 = _mm256_blendv_ps(var_900.32, zmm0, arg13)
                        zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_a60[0].o)
                        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
                        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg13)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            zmm3 = _mm256_blendv_ps(zmm3, arg7, zmm0)
                        
                        zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm5 = zmm3
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        
                        if ((rsi_9 & 1) != 0)
                            zmm3[0].o = var_a90
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm0[0], 0)
                            var_a90 = zmm3[0].o
                        
                        arg10 = var_700
                        arg6[0].o = var_970
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        
                        if ((rsi_9 & 2) == 0)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_2[0].o)
                            
                            if ((rsi_9 & 4) != 0)
                                goto label_1402b0ee1
                            
                            goto label_1402b0def
                        
                        int64_t rax_147 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o = var_a90
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_147, 1)
                        var_a90 = zmm4[0].o
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_2[0].o)
                        
                        if ((rsi_9 & 4) != 0)
                        label_1402b0ee1:
                            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm3[0].o = var_a90
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm3[0].q, 2)
                            var_a90 = zmm3[0].o
                            zmm3[0].o = var_9e0.o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                            
                            if ((rsi_9 & 8) == 0)
                                goto label_1402b0e0b
                            
                            goto label_1402b0f19
                        
                    label_1402b0def:
                        zmm3[0].o = var_9e0.o
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20[0].o)
                        
                        if ((rsi_9 & 8) == 0)
                        label_1402b0e0b:
                            zmm0 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            
                            if ((rsi_9 & 0x10) != 0)
                                goto label_1402b0f4b
                            
                            goto label_1402b0e1b
                        
                    label_1402b0f19:
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_149 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = var_a90
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_149, 3)
                        var_a90 = zmm0[0].o
                        zmm0 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                        
                        if ((rsi_9 & 0x10) != 0)
                        label_1402b0f4b:
                            zmm1[0].o = var_a90
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 4)
                            var_a90 = zmm1[0].o
                            zmm4 = var_960
                            var_880 = arg5[0].o
                            
                            if ((rsi_9 & 0x20) == 0)
                                goto label_1402b0e37
                            
                            goto label_1402b0f78
                        
                    label_1402b0e1b:
                        zmm4 = var_960
                        var_880 = arg5[0].o
                        
                        if ((rsi_9 & 0x20) == 0)
                        label_1402b0e37:
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                            
                            if ((rsi_9 & 0x40) != 0)
                                goto label_1402b0f9e
                            
                            goto label_1402b0e46
                        
                    label_1402b0f78:
                        int64_t rax_151 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = var_a90
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_151, 5)
                        var_a90 = zmm1[0].o
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                        
                        if ((rsi_9 & 0x40) == 0)
                        label_1402b0e46:
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
                            
                            if (temp0_140.b s< 0)
                            label_1402b0fc7:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint16_t* rax_153 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm3[0].o = var_a90
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_153, 7)
                            else
                                zmm3[0].o = var_a90
                        else
                        label_1402b0f9e:
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm1[0].o = var_a90
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm1[0], 6)
                            var_a90 = zmm1[0].o
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
                            
                            if (temp0_140.b s< 0)
                                goto label_1402b0fc7
                            
                            zmm3[0].o = var_a90
                        
                        zmm0 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
                        var_a90 = zmm3[0].o
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                        arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    
                    zmm1 = __vxorps_ymmqq_ymmqq_memqq(zmm4, var_800)
                    zmm3[0].o = zx.o(0)
                    arg14 = zmm5
                    
                    if (arg18 != 1)
                        zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        zmm4[0].o = data_142d3f5b0
                        zmm3[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        arg5 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                        zmm0 = _mm256_sub_ps(var_320_1, _mm256_cvtepi32_ps(zmm0))
                        arg5 = _mm256_cvtepi32_ps(arg5)
                        zmm3 = _mm256_div_ps(zmm0, arg5)
                    
                    var_a80_1 = _mm256_blendv_ps(arg11, zmm3, zmm1)
                    zmm3 = var_580
                    zmm5[0].o = var_8c0
            
            zmm0 = var_8a0.32
            zmm4 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
            zmm3 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
            arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            int32_t rax_154 = rbx.d
            uint64_t r12_3 = zx.q(rax_154)
            var_9a0.32 = arg9
            var_a60 = zmm4
            float var_940_2[0x8] = zmm3
            
            if (rax_154 u> 5)
                var_620 = _mm256_maskstore_ps(arg10, arg11)
                var_600 = _mm256_maskstore_ps(arg10, arg11)
                var_5e0 = _mm256_maskstore_ps(arg10, arg11)
                var_5c0 = _mm256_maskstore_ps(arg10, arg15)
            else
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg9[0].o, var_860_1[0].o)
                zmm5[0].o = var_8e0
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                arg8 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                arg13 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                
                switch (r12_3)
                    case 0
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg13[0].o = zx.o(0)
                        arg11 = _mm256_blendv_ps(arg13, arg5, zmm0)
                        arg5[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg13, zmm1, arg6)
                        int64_t rax_157 = arg11[0].q
                        var_960[0] = rax_157
                        void* rbx_8 = arg4 + rax_157
                        int64_t rax_158 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                        var_800[0].q = rax_158
                        void* rcx_14 = arg4 + rax_158
                        double r14_4 = zmm1[0]
                        void* rdx_8 = arg4 i+ r14_4
                        var_a20[0] = r12_3
                        int64_t r12_4 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* r15_4 = arg4 + r12_4
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t r11_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        double rdi_14 = zmm1[0]
                        zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg8 = _mm256_blendv_ps(arg13, zmm1, zmm0)
                        var_900.32 = arg14
                        var_8a0 = arg7[0].o
                        arg7 = _mm256_blendv_ps(arg13, zmm1, arg6)
                        arg5[0].o = *(arg7[0] i+ rdx_8)
                        arg9 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        var_8e0 = zmm5[0].o
                        arg14 = arg10
                        arg10 = _mm256_blendv_ps(arg13, arg9, arg6)
                        zmm1[0].o = *(arg10[0].q + rdx_8)
                        zmm3 = _mm256_broadcast_sd(5.9287877500949585e-323)
                        zmm5 = _mm256_blendv_ps(arg13, zmm3, arg6)
                        arg6[0].o = *(zmm5[0] + rdx_8)
                        int64_t rax_161 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        int32_t* r10_5 = arg8[0].q
                        arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_161 + r15_4), 0x10)
                        int64_t rax_162 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_162 + r15_4), 0x10)
                        float* rax_163 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_163 + r15_4), 0x10)
                        float* rax_164 = arg7[0]
                        int64_t r15_5 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        arg7[0].o = *(r10_5 + rbx_8)
                        void* rdx_9 = arg4 i+ rdi_14
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_164 + rdx_9), 0x20)
                        void* rax_165 = arg4 + r11_1
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_5 + rax_165), 0x30)
                        int64_t rsi_10 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_10 + rcx_14), 0x10)
                        arg9 = _mm256_blendv_ps(arg13, arg9, zmm0)
                        zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg10 = arg14
                        arg15 = data_142fc95a0
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm4[0] + rdx_9), 0x20)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm5[0] + rdx_9), 0x20)
                        double rdx_10 = arg9[0]
                        float* rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o = *(rdx_10 i+ rbx_8)
                        zmm0 = _mm256_blendv_ps(arg13, zmm3, zmm0)
                        zmm3[0].o = *(zmm0[0] + rbx_8)
                        float* rdx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_13 + rax_165), 0x30)
                        int64_t rbx_9 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_9 + rcx_14), 0x10)
                        int64_t rbx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_12 + rax_165), 0x30)
                        float* rax_166 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rdx_13 = zmm5[0]
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_166 + rcx_14), 0x10)
                        void* rax_167 = arg4 i+ rdx_13
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                            *(zmm5[0] i+ rax_167), 0x20)
                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg9 = var_9a0.32
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(arg5[0].q + rax_167), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(zmm0[0] + rax_167), 0x20)
                        int64_t rax_168 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* rcx_18 = arg4 + rbx_10
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_168 + rcx_18), 0x30)
                        arg7[0].o = var_8a0
                        arg14 = var_900.32
                        int64_t rax_169 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_169 + rcx_18), 0x30)
                        float* rax_170 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_170 + rcx_18), 0x30)
                        zmm3[0].o = *(arg4 i+ var_960[0])
                        zmm4[0].o = *(arg4 i+ r14_4)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r12_4), 0x10)
                        r12_3 = var_a20[0]
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 i+ rdi_14), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r11_1), 0x30)
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(arg4 + var_800[0].q), 0x10)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 i+ rdx_13), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rbx_10), 0x30)
                        var_620 =
                            _mm256_maskstore_ps(arg10, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                        zmm3 = _mm256_insertf128_ps(zmm5, arg12[0].o, 1)
                        arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        var_600 = _mm256_maskstore_ps(arg10, zmm3)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        var_5e0 = _mm256_maskstore_ps(arg10, zmm1)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                    case 1
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                        zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        arg5[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, zmm4)
                        zmm3[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg11, zmm1, arg6)
                        double r10_6 = zmm0[0]
                        int64_t r14_5 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        double r15_6 = zmm1[0]
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t r12_5 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rsi_14 = arg4 i+ r15_6
                        arg5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm3 = _mm256_blendv_ps(arg11, arg5, arg6)
                        double rax_173 = zmm1[0]
                        int32_t* rcx_19 = zmm3[0].q
                        int64_t rdx_14 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm1[0].o = *(rcx_19 + rsi_14)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        int64_t rcx_20 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        float* rbx_11 = zmm3[0].q
                        zmm3 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm5 = _mm256_blendv_ps(arg11, zmm3, arg6)
                        arg6[0].o = *(zmm5[0] + rsi_14)
                        int64_t rsi_15 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rdi_16 = arg4 + r14_5
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_14 + rdi_16), 0x10)
                        void* rdx_15 = arg4 i+ rax_173
                        arg5 = _mm256_blendv_ps(arg11, arg5, zmm4)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_11 + rdx_15), 0x20)
                        float* rbx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_12 + rdi_16), 0x10)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm5[0] + rdx_15), 0x20)
                        void* rdx_16 = arg4 i+ r10_6
                        int32_t* rdi_18 = arg5[0].q
                        zmm3 = _mm256_blendv_ps(arg11, zmm3, zmm4)
                        zmm4[0].o = *(rdi_18 + rdx_16)
                        int32_t* rdi_19 = zmm3[0].q
                        int64_t rbx_13 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = *(rdi_19 + rdx_16)
                        void* rdx_17 = arg4 + rsi_15
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        void* rdi_20 = arg4 + r12_5
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_20 + rdi_20), 0x30)
                        int64_t rcx_21 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_21 + rdx_17), 0x10)
                        int64_t rcx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_13 + rdi_20), 0x30)
                        float* rdi_21 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        double rbx_14 = zmm0[0]
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_21 + rdx_17), 0x10)
                        void* rdx_18 = arg4 i+ rbx_14
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(arg5[0].q + rdx_18), 0x20)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(zmm3[0].q + rdx_18), 0x20)
                        void* rdx_19 = arg4 + rcx_22
                        int64_t rdi_24 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_24 + rdx_19), 0x30)
                        int64_t rdi_25 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_25 + rdx_19), 0x30)
                        zmm3[0].o = *(arg4 i+ r10_6)
                        zmm4[0].o = *(arg4 i+ r15_6)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r14_5), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 i+ rax_173), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r12_5), 0x30)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rsi_15), 0x10)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 i+ rbx_14), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rcx_22), 0x30)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        arg5 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(zmm3, zmm3)), 
                                _mm256_mul_ps(zmm1, zmm1)), 
                            _mm256_mul_ps(zmm0, zmm0))
                        zmm4 = _mm256_sqrt_ps(arg5)
                        var_620 = _mm256_maskstore_ps(arg10, zmm3)
                        var_600 = _mm256_maskstore_ps(arg10, zmm1)
                        zmm1 = _mm256_cmp_ps(arg11, arg5, 1)
                        var_5e0 = _mm256_maskstore_ps(arg10, zmm0)
                        zmm0 = _mm256_and_ps(zmm1, zmm4)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg11, zmm1, arg6)
                        zmm3[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                        double r10_7 = zmm1[0]
                        int64_t r14_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rdi_26 = arg4 i+ r10_7
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t r15_7 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rsi_16 = arg4 + r14_6
                        arg5 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        zmm3 = _mm256_blendv_ps(arg11, arg5, arg6)
                        double rax_174 = zmm1[0]
                        void* rdx_20 = zmm3[0].q
                        int64_t rbx_15 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        double rcx_23 = zmm1[0]
                        zmm3[0].o = zx.o(*(rdx_20 + rdi_26))
                        int64_t rdx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(rbx_15 + rsi_16), 1)
                        zmm3 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm5 = _mm256_blendv_ps(arg11, zmm3, arg6)
                        uint32_t rdi_27 = zx.d(*(zmm5[0] i+ rdi_26))
                        uint16_t* rbx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg6[0].o = zx.o(rdi_27)
                        double rdi_28 = zmm5[0]
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rbx_17 + rsi_16), 1)
                        int64_t rsi_17 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, zmm4)
                        void* rbx_18 = arg4 i+ rax_174
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_23 i+ rbx_18), 2)
                        void* rcx_24 = arg4 + r15_7
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rdi_28 i+ rbx_18), 2)
                        double rdi_29 = zmm0[0]
                        void* rbx_19 = arg4 i+ rdi_29
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_22 + rcx_24), 3)
                        int64_t rdx_23 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg11, arg5, zmm4)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rsi_17 + rcx_24), 3)
                        void* rcx_25 = arg4 + rdx_23
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg5[0].q + rbx_19), 4)
                        int64_t rsi_19 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_19 + rcx_25), 5)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg11, zmm3, zmm4)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm3[0].q + rbx_19), 4)
                        uint16_t* rsi_21 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        double rbx_20 = zmm0[0]
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rsi_21 + rcx_25), 5)
                        void* rcx_26 = arg4 i+ rbx_20
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg5[0].q + rcx_26), 6)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        arg13[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(zmm3[0].q + rcx_26), 6)
                        zmm5[0].o = zx.o(*(arg4 i+ r10_7))
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r14_6), 1)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 i+ rax_174), 2)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r15_7), 3)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 i+ rdi_29), 4)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rdx_23), 5)
                        int64_t rax_175 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 i+ rbx_20), 6)
                        void* rcx_28 = arg4 + rax_175
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_175), 7)
                        uint16_t* rax_176 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_176 + rcx_28), 7)
                        uint16_t* rax_177 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm5[0].o = zx.o(0)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm3[0].o = data_1434424d0
                        arg6[0].o = zmm3[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1))
                        arg5 = data_1434424e0
                        zmm4[0].o = arg7[0].o
                        arg7 = arg5
                        zmm0 = _mm256_div_ps(zmm0, arg5)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)), arg7)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(rax_177 + rcx_28), 7)
                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                        arg5 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, arg5[0].o, 1)), arg7)
                        arg7[0].o = zmm4[0].o
                        zmm3 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(zmm0, zmm0)), 
                                _mm256_mul_ps(zmm1, zmm1)), 
                            _mm256_mul_ps(arg5, arg5))
                        zmm4 = _mm256_sqrt_ps(zmm3)
                        var_620 = _mm256_maskstore_ps(arg10, zmm0)
                        var_600 = _mm256_maskstore_ps(arg10, zmm1)
                        zmm0 = _mm256_cmp_ps(arg11, zmm3, 1)
                        var_5e0 = _mm256_maskstore_ps(arg10, arg5)
                        zmm0 = _mm256_and_ps(zmm0, zmm4)
                    case 3
                        arg5[0].o = zx.o(0)
                        arg11 = arg10
                        arg10 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg5, var_840, arg10)
                        int32_t temp0_934 = __vextractps_gpr32_xmmdq_immb(arg10[0].o, 1)
                        var_960[0].d = __vextractps_memd_xmmdq_immb(arg10[0].o, 2)
                        var_800[0] = __vextractps_memd_xmmdq_immb(arg10[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        int64_t rcx_29 = sx.q(zmm0[0].d)
                        var_8c0[0] = rcx_29
                        int32_t temp0_938 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                        var_a20[0] = r12_3
                        void* r12_6 = arg4 + rcx_29
                        int64_t rcx_30 = sx.q(temp0_938)
                        var_580[0].q = rcx_30
                        void* r14_7 = arg4 + rcx_30
                        int64_t r15_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* rcx_31 = arg4 + r15_8
                        int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        arg9 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg5, data_142fc9520, arg11)
                        void* rdi_30 = arg4 + r10_8
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm1[0].o = *(sx.q(zmm0[0].d) + r12_6)
                        int64_t rdx_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_944 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_28 + r14_7), 0x10)
                        int64_t rsi_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(sx.q(temp0_944) + rcx_31), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_26 + rdi_30), 0x30)
                        var_700[0].o = zmm0[0].o
                        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg5, data_142fc9540, arg11)
                        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = *(sx.q(zmm4[0].d) + r12_6)
                        int64_t rdx_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                        int64_t rsi_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_33 + r14_7), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_28 + rcx_31), 0x20)
                        int128_t var_970_1 = zmm1[0].o
                        arg12 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg5, data_1434423c0, arg11)
                        var_900.32 = arg14
                        arg14[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        int64_t rdx_35 = sx.q(arg14[0].d)
                        int32_t temp0_957 = __vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 1)
                        zmm1[0].o = *(rdx_35 + r12_6)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(sx.q(temp0_957) + r14_7), 0x10)
                        float rdx_37 = arg10[0]
                        int64_t rsi_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 2))
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_31 + rcx_31), 0x20)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg15 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm1, data_1434423e0, arg11)
                        int64_t rdx_38 = sx.q(rdx_37)
                        arg5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm1[0].o = *(sx.q(arg5[0]) + r12_6)
                        int64_t rsi_35 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_35 + r14_7), 0x10)
                        zmm3[0].o = zx.o(0)
                        arg10 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm3, data_143442400, arg11)
                        zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        var_8a0 = arg7[0].o
                        arg7[0].o = *(sx.q(zmm3[0]) + r12_6)
                        void* rsi_38 = arg4 + rdx_38
                        int64_t rbx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_22 + rcx_31), 0x20)
                        int64_t r12_7 = sx.q(temp0_934)
                        float* rbx_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_24 + r14_7), 0x10)
                        void* rbx_25 = arg4 + r12_7
                        float* rax_182 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_182 + rcx_31), 0x20)
                        int32_t temp0_974 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
                        int32_t rcx_32 = arg9[0].d
                        zmm4[0].o = var_970_1
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(sx.q(temp0_974) + rdi_30), 0x30)
                        int64_t rcx_34 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 3))
                        arg14[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_34 + rdi_30), 0x30)
                        int32_t temp0_978 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
                        zmm4[0].o = *(sx.q(rcx_32) + rsi_38)
                        float* rax_187 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_187 + rdi_30), 0x30)
                        var_540 = zmm1[0].o
                        float* rax_189 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_189 + rdi_30), 0x30)
                        var_970 = zmm1[0].o
                        int32_t temp0_983 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
                        int32_t temp0_984 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(sx.q(temp0_978) + rbx_25), 0x10)
                        zmm3[0].o = *(sx.q(zmm0[0].d) + rsi_38)
                        float* rcx_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        arg9[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_40 + rbx_25), 0x10)
                        zmm4[0].o = *(sx.q(arg12[0].d) + rsi_38)
                        int64_t rcx_44 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_44 + rbx_25), 0x10)
                        zmm5[0].o = *(sx.q(arg15[0]) + rsi_38)
                        int64_t rcx_48 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 1))
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_48 + rbx_25), 0x10)
                        int64_t rcx_50 = sx.q(arg10[0])
                        int32_t temp0_992 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int32_t temp0_993 = __vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1)
                        zmm3[0].o = *(rcx_50 + rsi_38)
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(sx.q(temp0_993) + rbx_25), 0x10)
                        int32_t temp0_995 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        int32_t temp0_996 = __vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2)
                        zmm0[0].o = *(arg4 + rdx_38)
                        int32_t temp0_997 = __vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3)
                        arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        zmm1[0].o = *(arg4 + var_8c0[0])
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(arg4 + var_580[0].q), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r15_8), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r10_8), 0x30)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r12_7), 0x10)
                        r12_3 = var_a20[0]
                        int64_t rsi_39 = sx.q(var_960[0].d)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rsi_39), 0x20)
                        void* rsi_40 = arg4 + rsi_39
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(sx.q(temp0_983) + rsi_40), 0x20)
                        int64_t rax_192 = sx.q(var_800[0])
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rax_192), 0x30)
                        void* rax_193 = arg4 + rax_192
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(sx.q(temp0_984) + rax_193), 0x30)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, 
                            *(sx.q(temp0_992) + rsi_40), 0x20)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(sx.q(temp0_995) + rax_193), 0x30)
                        arg9 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(sx.q(temp0_996) + rsi_40), 0x20)
                        var_800 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_700[0].o, 1)
                        float* rcx_56 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 2))
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_56 + rsi_40), 0x20)
                        int32_t temp0_1014 = __vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2)
                        var_960 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(sx.q(temp0_1014) + rsi_40), 0x20)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(sx.q(temp0_997) + rax_193), 0x30)
                        arg5 = _mm256_insertf128_ps(zmm1, arg14[0].o, 1)
                        int32_t temp0_1019 = __vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 3)
                        arg15 = data_142fc95a0
                        zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm0 = var_940_2
                        zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(var_a60[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60[0].o, arg13[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                        zmm5[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg8[0].o = zx.o(0)
                        zmm3 = _mm256_blendv_ps(arg8, zmm3, zmm5)
                        zmm5[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(sx.q(temp0_1019) + rax_193), 0x30)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        zmm1 = _mm256_blendv_ps(arg6, zmm1, zmm5)
                        zmm5[0].o = zx.o(*(arg4 + zmm3[0].q))
                        int64_t rcx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rcx_63), 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm5[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + zmm3[0].q), 2)
                        int64_t rcx_65 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rcx_65), 3)
                        zmm5[0].o = zx.o(*(arg4 i+ zmm1[0]))
                        int64_t rcx_67 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rcx_67), 1)
                        zmm5[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 i+ zmm1[0]), 2)
                        int64_t rcx_69 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rcx_69), 3)
                        int32_t temp0_1049 = __vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3)
                        arg10 = arg11
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x15)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        var_a60[0].o = data_143442440
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, var_a60[0].o)
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_a60[0].o)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                            *(sx.q(temp0_1049) + rax_193), 0x30)
                        zmm5 = _mm256_cvtepi32_ps(zmm5)
                        arg7 = data_143442460
                        arg8 = arg7
                        zmm5 = _mm256_div_ps(zmm5, arg7)
                        zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, var_540, 1)
                        arg6 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg6, var_970, 1)
                        zmm5 = _mm256_mul_ps(arg5, zmm5)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        zmm5 = _mm256_add_ps(arg9, zmm5)
                        arg9 = var_9a0.32
                        arg7 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0xa)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        arg5[0].o = data_143442480
                        zmm1[0].o &= arg5[0].o
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_a60[0].o)
                        zmm3[0].o &= arg5[0].o
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_a60[0].o)
                        zmm1 = _mm256_mul_ps(zmm4, 
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 1)), arg8))
                        zmm3 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442420)
                        arg7[0].o = var_8a0
                        zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_800)
                        arg14 = var_900.32
                        arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        var_a60[0].o = data_143442490
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_a60[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_a60[0].o)
                        zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                            _mm256_mul_ps(arg6, 
                                __vdivps_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, arg5[0].o, 1)), 
                                    data_1434424a0)), 
                            var_960)
                        arg5 = _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(zmm5, zmm5)), 
                            _mm256_mul_ps(zmm1, zmm1))
                        var_620 = _mm256_maskstore_ps(arg10, zmm5)
                    label_1402b23a5:
                        var_600 = _mm256_maskstore_ps(arg10, zmm1)
                        zmm1 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm0, zmm0))
                        var_5e0 = _mm256_maskstore_ps(arg10, zmm0)
                        zmm0 = _mm256_cmp_ps(arg11, zmm1, 1)
                        zmm1 = _mm256_sqrt_ps(zmm1)
                        zmm0 = _mm256_and_ps(zmm0, zmm1)
                    case 4
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg11, zmm1, arg5)
                        arg5[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                        zmm0 =
                            _mm256_blendv_ps(arg11, zmm0, _mm256_insertf128_ps(arg5, zmm3[0].o, 1))
                        double r10_9 = zmm1[0]
                        int64_t rcx_72 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_43 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_27 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rdi_32 = zmm1[0]
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_41 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        double rax_194 = zmm0[0]
                        zmm0[0].o = zx.o(*(arg4 i+ r10_9))
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rcx_72), 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 i+ rdi_32), 2)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_43), 3)
                        double rcx_73 = zmm1[0]
                        zmm1[0].o = zx.o(*(arg4 i+ rax_194))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_27), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rcx_73), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_41), 3)
                        arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        zmm5[0].o = data_143442440
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm3 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                        zmm4 = data_143442460
                        zmm3 = _mm256_div_ps(zmm3, zmm4)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                        arg6[0].o = data_143442480
                        zmm1[0].o &= arg6[0].o
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        zmm0[0].o &= arg6[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)), zmm4)
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = data_143442490
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        zmm1 = __vdivps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)), 
                            data_1434424a0)
                        arg5 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(zmm3, zmm3)), 
                                _mm256_mul_ps(zmm0, zmm0)), 
                            _mm256_mul_ps(zmm1, zmm1))
                        zmm4 = _mm256_sqrt_ps(arg5)
                        var_620 = _mm256_maskstore_ps(arg10, zmm3)
                        var_600 = _mm256_maskstore_ps(arg10, zmm0)
                        zmm0 = _mm256_cmp_ps(arg11, arg5, 1)
                        var_5e0 = _mm256_maskstore_ps(arg10, zmm1)
                        zmm0 = _mm256_and_ps(zmm0, zmm4)
                    case 5
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg11, zmm1, arg5)
                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm3[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, arg5)
                        int64_t r10_10 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        double rcx_74 = zmm1[0]
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_44 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        double rbx_28 = zmm1[0]
                        double rdi_33 = zmm0[0]
                        int64_t rsi_42 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_195 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = zx.o(*(arg4 i+ rcx_74))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r10_10), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rbx_28), 2)
                        double rcx_75 = zmm0[0]
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_44), 3)
                        zmm1[0].o = zx.o(*(arg4 i+ rdi_33))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_42), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rcx_75), 2)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_195), 3)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                        zmm4 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 5)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 5)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        arg13 = arg14
                        arg14[0].o = arg7[0].o
                        arg7 = data_1434422e0
                        zmm5 = _mm256_and_ps(zmm5, arg7)
                        arg8 = data_143442300
                        zmm4 = _mm256_and_ps(zmm4, arg8)
                        arg11 = arg10
                        arg10 = _mm256_or_ps(zmm5, zmm4)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                        arg7[0].o = data_143442320
                        zmm3[0].o &= arg7[0].o
                        zmm4[0].o = data_143442330
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        zmm1[0].o &= arg7[0].o
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        arg10 = _mm256_or_ps(arg10, zmm1)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
                        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 6)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        zmm3 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        zmm1 = _mm256_and_ps(zmm1, arg7)
                        arg9 = var_9a0.32
                        zmm3 = _mm256_and_ps(zmm3, arg8)
                        zmm1 = _mm256_or_ps(zmm1, zmm3)
                        zmm3[0].o = zmm5[0].o & arg7[0].o
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        zmm5[0].o = arg6[0].o & arg7[0].o
                        arg7[0].o = arg14[0].o
                        arg14 = arg13
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        zmm1 = _mm256_or_ps(zmm1, _mm256_insertf128_ps(zmm5, zmm3[0].o, 1))
                        zmm3 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x11)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x11)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442340)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442360)
                        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442380)
                        zmm0 = _mm256_or_ps(zmm0, zmm3)
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = data_1434423a0
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        zmm0 = _mm256_or_ps(zmm0, _mm256_insertf128_ps(arg5, zmm3[0].o, 1))
                        arg5 = _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(arg10, arg10)), 
                            _mm256_mul_ps(zmm1, zmm1))
                        var_620 = _mm256_maskstore_ps(arg11, arg10)
                        arg10 = arg11
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        goto label_1402b23a5
                
                var_5c0 = _mm256_maskstore_ps(arg10, zmm0)
            
            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            zmm1[0].o ^= arg12[0].o
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg14[0].o)
            arg5[0].o ^= arg12[0].o
            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            zmm3 = _mm256_and_ps(zmm1, arg10)
            
            if (_mm256_movemask_ps(zmm3) == 0)
                arg12 = var_7c0.32
            else
                double var_520_1[0x4]
                double var_500_1[0x4]
                double var_4e0_1[0x4]
                int32_t var_4c0_1[0x8]
                
                if (rbx.d u> 5)
                    var_520_1 = _mm256_maskstore_ps(zmm3, arg11)
                    var_500_1 = _mm256_maskstore_ps(zmm3, arg11)
                    var_4e0_1 = _mm256_maskstore_ps(zmm3, arg11)
                    var_4c0_1 = _mm256_maskstore_ps(zmm3, arg15)
                else
                    zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg14[0].o, var_860_1[0].o)
                    zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_8e0)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    arg7 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                    arg6 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    
                    switch (r12_3)
                        case 0
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(var_940_2[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, arg7[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            var_940_2[0].o = _mm256_extractf128_ps(var_a60[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, zmm0[0].o)
                            var_940_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60[0].o, arg6[0].o)
                            arg5 = _mm256_insertf128_ps(var_940_2, zmm0[0].o, 1)
                            zmm0[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            var_a60[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            arg13 = _mm256_insertf128_ps(zmm0, var_a60[0].o, 1)
                            var_a60[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            arg12 = _mm256_blendv_ps(arg11, arg5, arg13)
                            zmm5[0].o = _mm_permute_ps(var_a60[0].o, 0x50)
                            var_a60[0].o = _mm_permute_ps(var_a60[0].o, 0xfa)
                            zmm4 = _mm256_insertf128_ps(zmm5, var_a60[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg11, zmm1, zmm4)
                            double r10_11 = arg12[0]
                            void* rbx_29 = arg4 i+ r10_11
                            int64_t r11_6 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                            void* rcx_76 = arg4 + r11_6
                            double r14_9 = zmm1[0]
                            void* rsi_43 = arg4 i+ r14_9
                            int64_t r15_9 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            void* rdx_45 = arg4 + r15_9
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t r12_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            double rdi_34 = zmm1[0]
                            zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            var_900.32 = arg14
                            arg14 = _mm256_blendv_ps(arg11, zmm1, arg13)
                            arg6 = _mm256_blendv_ps(arg11, zmm1, zmm4)
                            double rax_199 = arg6[0]
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            arg11[0].o = *(rax_199 i+ rsi_43)
                            arg8 = _mm256_broadcast_sd(3.9525251667299724e-323)
                            arg9 = _mm256_blendv_ps(zmm5, arg8, zmm4)
                            zmm1[0].o = *(arg9[0] i+ rsi_43)
                            arg10 = _mm256_broadcast_sd(5.9287877500949585e-323)
                            zmm4 = _mm256_blendv_ps(zmm5, arg10, zmm4)
                            arg7[0].o = *(zmm4[0] + rsi_43)
                            int64_t rax_202 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            int32_t* rsi_44 = arg14[0]
                            arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                                *(rax_202 + rdx_45), 0x10)
                            int64_t rax_203 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rax_203 + rdx_45), 0x10)
                            float* rax_204 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                *(rax_204 + rdx_45), 0x10)
                            float* rax_205 = arg6[0]
                            int64_t rdx_46 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg6[0].o = *(rsi_44 + rbx_29)
                            void* rsi_45 = arg4 i+ rdi_34
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(rax_205 + rsi_45), 0x20)
                            void* rax_206 = arg4 + r12_8
                            arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(rdx_46 + rax_206), 0x30)
                            float* rdx_47 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(rdx_47 + rcx_76), 0x10)
                            arg8 = _mm256_blendv_ps(zmm5, arg8, arg13)
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(zmm0[0] + rsi_45), 0x20)
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                *(zmm4[0] + rsi_45), 0x20)
                            int32_t* rdx_50 = arg8[0].q
                            float* rsi_46 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = *(rdx_50 + rbx_29)
                            arg9 = _mm256_blendv_ps(zmm5, arg10, arg13)
                            zmm5[0].o = *(arg9[0] + rbx_29)
                            float* rdx_52 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rsi_46 + rax_206), 0x30)
                            float* rsi_47 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rsi_47 + rcx_76), 0x10)
                            int64_t rsi_48 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                *(rdx_52 + rax_206), 0x30)
                            float* rax_207 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            double rdx_53 = zmm4[0]
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rax_207 + rcx_76), 0x10)
                            void* rax_208 = arg4 i+ rdx_53
                            zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg14 = var_900.32
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(zmm5[0] i+ rax_208), 0x20)
                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(arg5[0].q + rax_208), 0x20)
                            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(zmm1[0] + rax_208), 0x20)
                            int64_t rax_209 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            void* rcx_80 = arg4 + rsi_48
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(rax_209 + rcx_80), 0x30)
                            int64_t rax_210 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rax_210 + rcx_80), 0x30)
                            float* rax_211 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rax_211 + rcx_80), 0x30)
                            arg5[0].o = *(arg4 i+ r10_11)
                            zmm4[0].o = *(arg4 i+ r14_9)
                            zmm4[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r15_9), 0x10)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(arg4 i+ rdi_34), 0x20)
                            zmm4[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r12_8), 0x30)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r11_6), 0x10)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(arg4 i+ rdx_53), 0x20)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_48), 0x30)
                            var_520_1 =
                                _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(arg5, zmm4[0].o, 1))
                            arg5 = _mm256_insertf128_ps(zmm5, arg11[0].o, 1)
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            var_500_1 = _mm256_maskstore_ps(zmm3, arg5)
                            var_4e0_1 =
                                _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(zmm0, arg10[0].o, 1))
                            zmm0 = _mm256_insertf128_ps(zmm1, arg7[0].o, 1)
                        case 1
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(var_940_2[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, arg7[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            var_940_2[0].o = _mm256_extractf128_ps(var_a60[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, zmm0[0].o)
                            var_940_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60[0].o, arg6[0].o)
                            zmm0 = _mm256_insertf128_ps(var_940_2, zmm0[0].o, 1)
                            var_940_2[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            var_a60[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(var_940_2, var_a60[0].o, 1)
                            var_a60[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm0 = _mm256_blendv_ps(arg11, zmm0, arg5)
                            zmm5[0].o = _mm_permute_ps(var_a60[0].o, 0x50)
                            var_a60[0].o = _mm_permute_ps(var_a60[0].o, 0xfa)
                            zmm4 = _mm256_insertf128_ps(zmm5, var_a60[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg11, zmm1, zmm4)
                            double r10_12 = zmm0[0]
                            int64_t r11_7 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            double r14_10 = zmm1[0]
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t r15_10 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            void* rsi_49 = arg4 i+ r14_10
                            zmm5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            arg6 = _mm256_blendv_ps(arg11, zmm5, zmm4)
                            double rax_212 = zmm1[0]
                            int32_t* rcx_81 = arg6[0]
                            int64_t rdx_54 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm1[0].o = *(rcx_81 + rsi_49)
                            arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            int64_t rcx_82 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            double rbx_30 = arg6[0]
                            arg6 = _mm256_broadcast_sd(3.9525251667299724e-323)
                            zmm4 = _mm256_blendv_ps(arg11, arg6, zmm4)
                            arg7[0].o = *(zmm4[0] + rsi_49)
                            int64_t rsi_50 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            void* rdi_36 = arg4 + r11_7
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rdx_54 + rdi_36), 0x10)
                            void* rdx_55 = arg4 i+ rax_212
                            zmm5 = _mm256_blendv_ps(arg11, zmm5, arg5)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rbx_30 i+ rdx_55), 0x20)
                            float* rbx_31 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                *(rbx_31 + rdi_36), 0x10)
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                *(zmm4[0] + rdx_55), 0x20)
                            void* rdx_56 = arg4 i+ r10_12
                            double rdi_38 = zmm5[0]
                            arg5 = _mm256_blendv_ps(arg11, arg6, arg5)
                            arg6[0].o = *(rdi_38 i+ rdx_56)
                            int32_t* rdi_39 = arg5[0].q
                            int64_t rbx_32 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm4[0].o = *(rdi_39 + rdx_56)
                            void* rdx_57 = arg4 + rsi_50
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            void* rdi_40 = arg4 + r15_10
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rcx_82 + rdi_40), 0x30)
                            int64_t rcx_83 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(rcx_83 + rdx_57), 0x10)
                            int64_t rcx_84 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                *(rbx_32 + rdi_40), 0x30)
                            float* rdi_41 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            double rbx_33 = zmm0[0]
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rdi_41 + rdx_57), 0x10)
                            void* rdx_58 = arg4 i+ rbx_33
                            zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                                *(zmm4[0] i+ rdx_58), 0x20)
                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(arg5[0].q + rdx_58), 0x20)
                            void* rdx_59 = arg4 + rcx_84
                            int64_t rdi_44 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rdi_44 + rdx_59), 0x30)
                            int64_t rdi_45 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rdi_45 + rdx_59), 0x30)
                            arg5[0].o = *(arg4 i+ r10_12)
                            zmm5[0].o = *(arg4 i+ r14_10)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r11_7), 0x10)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(arg4 i+ rax_212), 0x20)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r15_10), 0x30)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_50), 0x10)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(arg4 i+ rbx_33), 0x20)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_84), 0x30)
                            arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                            zmm4 = _mm256_sub_ps(
                                _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(arg5, arg5)), 
                                    _mm256_mul_ps(zmm1, zmm1)), 
                                _mm256_mul_ps(zmm0, zmm0))
                            zmm5 = _mm256_sqrt_ps(zmm4)
                            var_520_1 = _mm256_maskstore_ps(zmm3, arg5)
                            var_500_1 = _mm256_maskstore_ps(zmm3, zmm1)
                            zmm1 = _mm256_cmp_ps(arg11, zmm4, 1)
                            var_4e0_1 = _mm256_maskstore_ps(zmm3, zmm0)
                            zmm0 = _mm256_and_ps(zmm1, zmm5)
                        case 2
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(var_940_2[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, arg7[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            var_940_2[0].o = _mm256_extractf128_ps(var_a60[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, zmm1[0].o)
                            var_940_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60[0].o, arg6[0].o)
                            zmm1 = _mm256_insertf128_ps(var_940_2, zmm1[0].o, 1)
                            var_940_2[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            var_a60[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            zmm4 = _mm256_insertf128_ps(var_940_2, var_a60[0].o, 1)
                            var_940_2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg11, zmm1, zmm4)
                            zmm5[0].o = _mm_permute_ps(var_940_2[0].o, 0x50)
                            var_940_2[0].o = _mm_permute_ps(var_940_2[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(zmm5, var_940_2[0].o, 1)
                            double r10_13 = zmm1[0]
                            int64_t r11_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            void* rdi_46 = arg4 i+ r10_13
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t r14_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            void* rsi_51 = arg4 + r11_8
                            zmm5 = _mm256_broadcast_sd(9.8813129168249309e-324)
                            arg6 = _mm256_blendv_ps(arg11, zmm5, zmm4)
                            double rax_213 = zmm1[0]
                            double rdx_60 = arg6[0]
                            int64_t rbx_34 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            double rcx_85 = zmm1[0]
                            arg6[0].o = zx.o(*(rdx_60 i+ rdi_46))
                            int64_t rdx_62 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rbx_34 + rsi_51), 1)
                            arg6 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            zmm4 = _mm256_blendv_ps(arg11, arg6, zmm4)
                            uint32_t rdi_47 = zx.d(*(zmm4[0] i+ rdi_46))
                            uint16_t* rbx_36 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg7[0].o = zx.o(rdi_47)
                            double rdi_48 = zmm4[0]
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(rbx_36 + rsi_51), 1)
                            int64_t rsi_52 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0 = _mm256_blendv_ps(arg11, zmm0, arg5)
                            void* rbx_37 = arg4 i+ rax_213
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_85 i+ rbx_37), 2)
                            void* rcx_86 = arg4 + r14_11
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(rdi_48 i+ rbx_37), 2)
                            double rdi_49 = zmm0[0]
                            void* rbx_38 = arg4 i+ rdi_49
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_62 + rcx_86), 3)
                            int64_t rdx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm5 = _mm256_blendv_ps(arg11, zmm5, arg5)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rsi_52 + rcx_86), 3)
                            void* rcx_87 = arg4 + rdx_63
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm5[0] i+ rbx_38), 4)
                            int64_t rsi_54 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_54 + rcx_87), 5)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg5 = _mm256_blendv_ps(arg11, arg6, arg5)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg5[0].q + rbx_38), 4)
                            uint16_t* rsi_56 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            double rbx_39 = zmm0[0]
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rsi_56 + rcx_87), 5)
                            void* rcx_88 = arg4 i+ rbx_39
                            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm5[0] i+ rcx_88), 6)
                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg5[0].q + rcx_88), 6)
                            arg6[0].o = zx.o(*(arg4 i+ r10_13))
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_8), 1)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 i+ rax_213), 2)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_11), 3)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 i+ rdi_49), 4)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdx_63), 5)
                            int64_t rax_214 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 i+ rbx_39), 6)
                            void* rcx_90 = arg4 + rax_214
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_214), 7)
                            int64_t rax_215 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_215 + rcx_90), 7)
                            uint16_t* rax_216 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                            arg6[0].o = data_1434424d0
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1))
                            arg5 = data_1434424e0
                            arg7 = arg5
                            zmm0 = _mm256_div_ps(zmm0, arg5)
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm1 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)), arg7)
                            arg5[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rax_216 + rcx_90), 7)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                            arg5 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, arg5[0].o, 1)), arg7)
                            zmm4 = _mm256_sub_ps(
                                _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(zmm0, zmm0)), 
                                    _mm256_mul_ps(zmm1, zmm1)), 
                                _mm256_mul_ps(arg5, arg5))
                            zmm5 = _mm256_sqrt_ps(zmm4)
                            var_520_1 = _mm256_maskstore_ps(zmm3, zmm0)
                            var_500_1 = _mm256_maskstore_ps(zmm3, zmm1)
                            zmm0 = _mm256_cmp_ps(arg11, zmm4, 1)
                            var_4e0_1 = _mm256_maskstore_ps(zmm3, arg5)
                            zmm0 = _mm256_and_ps(zmm0, zmm5)
                        case 3
                            zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg11, var_840, zmm3)
                            int64_t rax_218 = sx.q(zmm0[0].d)
                            void* r10_14 = arg4 + rax_218
                            zmm1[0].o = *(arg4 + rax_218)
                            int64_t r9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            var_8a0[0] = var_aa0 + r9
                            int64_t rdx_64 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            var_a20[0] = var_aa0 + rdx_64
                            int64_t rsi_59 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            var_8e0[0] = var_aa0 + rsi_59
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rcx_94 = sx.q(zmm0[0].d)
                            void* r12_9 = var_aa0 + rcx_94
                            int32_t temp0_1470 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            arg5[0].o = *(var_aa0 + rcx_94)
                            int64_t rbx_41 = sx.q(temp0_1470)
                            void* r11_9 = var_aa0 + rbx_41
                            int64_t rax_229 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            void* r14_12 = var_aa0 + rax_229
                            int64_t rcx_96 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(var_aa0 + rbx_41), 0x10)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(var_aa0 + rax_229), 0x20)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(var_aa0 + rcx_96), 0x30)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_aa0 + r9), 0x10)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(var_aa0 + rdx_64), 0x20)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(var_aa0 + rsi_59), 0x30)
                            double var_960_1[0x4] = zmm0
                            zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg11, data_142fc9520, zmm3)
                            void* r9_1 = var_aa0 + rcx_96
                            int32_t* rax_236 = sx.q(zmm0[0].d)
                            var_840[0] = r10_14
                            zmm1[0].o = *(rax_236 + r10_14)
                            int32_t temp0_1480 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            float* rcx_98 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            float* rdx_66 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg5[0].o = *(sx.q(zmm0[0].d) + r12_9)
                            float* rbx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int32_t temp0_1485 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(rbx_45 + r11_9), 0x10)
                            float* rbx_47 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            var_8c0[0] = r14_12
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(sx.q(temp0_1485) + r14_12), 0x20)
                            arg10[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_47 + r9_1), 0x30)
                            int64_t r14_13 = var_8a0[0]
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(sx.q(temp0_1480) + r14_13), 0x10)
                            double r13_1 = var_a20[0]
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rcx_98 i+ r13_1), 0x20)
                            double rdi_53 = var_8e0[0]
                            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rdx_66 i+ rdi_53), 0x30)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm0, data_142fc9540, zmm3)
                            zmm1[0].o = *(sx.q(zmm0[0].d) + r10_14)
                            int32_t temp0_1495 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            float* r10_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            float* rdx_68 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg5[0].o = *(sx.q(zmm0[0].d) + r12_9)
                            float* rsi_65 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int32_t temp0_1500 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(rsi_65 + r11_9), 0x10)
                            float* rbx_50 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(sx.q(temp0_1500) + r14_12), 0x20)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_50 + r9_1), 0x30)
                            var_800[0].o = zmm0[0].o
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(sx.q(temp0_1495) + r14_13), 0x10)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(r10_15 i+ r13_1), 0x20)
                            r13 = var_628_1
                            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rdx_68 i+ rdi_53), 0x30)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg13 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm0, data_1434423c0, zmm3)
                            zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm1[0].o = *(sx.q(zmm0[0].d) + r12_9)
                            float* rax_246 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int32_t temp0_1512 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            int32_t temp0_1513 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rax_246 + r11_9), 0x10)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            var_900.32 = arg14
                            arg14 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm1, data_1434423e0, zmm3)
                            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg5[0].o = *(sx.q(zmm1[0].d) + r12_9)
                            float* rcx_101 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                            int32_t temp0_1519 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                            int32_t temp0_1520 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(rcx_101 + r11_9), 0x10)
                            zmm1[0].o = zx.o(0)
                            arg15 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm1, data_143442400, zmm3)
                            zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            int32_t* rcx_103 = sx.q(zmm1[0].d)
                            int32_t temp0_1524 = __vextractps_gpr32_xmmdq_immb(arg13[0].o, 1)
                            float* rbx_53 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                            zmm5[0].o = *(rcx_103 + r12_9)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rbx_53 + r11_9), 0x10)
                            int32_t temp0_1527 = __vextractps_gpr32_xmmdq_immb(arg13[0].o, 2)
                            int32_t temp0_1528 = __vextractps_gpr32_xmmdq_immb(arg13[0].o, 3)
                            int32_t rax_251 = arg13[0]
                            int64_t rdi_55 = var_8c0[0]
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_1512) + rdi_55), 0x20)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(sx.q(temp0_1513) + r9_1), 0x30)
                            double rsi_68 = var_840[0]
                            zmm4[0].o = *(sx.q(rax_251) i+ rsi_68)
                            int64_t r15_14 = var_8a0[0]
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(sx.q(temp0_1524) + r15_14), 0x10)
                            arg11 = _mm256_insertf128_ps(var_960_1, arg12[0].o, 1)
                            double rdx_72 = var_a20[0]
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(sx.q(temp0_1527) i+ rdx_72), 0x20)
                            double r11_11 = var_8e0[0]
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(sx.q(temp0_1528) i+ r11_11), 0x30)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(sx.q(temp0_1519) + rdi_55), 0x20)
                            int32_t temp0_1536 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                            arg12 = _mm256_insertf128_ps(arg8, arg10[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(sx.q(temp0_1536) + rdi_55), 0x20)
                            int32_t* rax_257 = sx.q(arg14[0].d)
                            int32_t temp0_1539 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                            zmm5[0].o = *(rax_257 i+ rsi_68)
                            arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(sx.q(temp0_1520) + r9_1), 0x30)
                            zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg9, var_800[0].o, 1)
                            var_960 = zmm1
                            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(sx.q(temp0_1539) + r9_1), 0x30)
                            arg4 = var_aa0
                            int32_t temp0_1543 = __vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 1)
                            zmm1[0].o = *(sx.q(arg15[0]) i+ rsi_68)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(sx.q(temp0_1543) + r15_14), 0x10)
                            arg9 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
                            float* rax_263 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 1))
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rax_263 + r15_14), 0x10)
                            int32_t temp0_1548 = __vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 2)
                            int32_t temp0_1549 = __vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 3)
                            arg14 = var_900.32
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm4 = var_940_2
                            arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(sx.q(temp0_1548) i+ rdx_72), 0x20)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg7[0].o = _mm256_extractf128_ps(var_a60[0].o, 1)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                            float* rax_267 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 2))
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rax_267 i+ rdx_72), 0x20)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60[0].o, arg6[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                            arg6[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            arg7[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                            arg7[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                            zmm0 = _mm256_blendv_ps(arg13, zmm0, arg6)
                            arg6[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                            arg7[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                *(sx.q(temp0_1549) i+ r11_11), 0x30)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            zmm1 = _mm256_blendv_ps(arg7, zmm1, arg6)
                            arg6[0].o = zx.o(*(arg4 i+ zmm0[0]))
                            int64_t rax_270 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg6[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rax_270), 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg6[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 i+ zmm0[0]), 2)
                            int64_t rax_272 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rax_272), 3)
                            arg6[0].o = zx.o(*(arg4 i+ zmm1[0]))
                            int64_t rax_274 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rax_274), 1)
                            arg6[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 i+ zmm1[0]), 2)
                            int64_t rax_276 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rax_276), 3)
                            int32_t temp0_1583 = __vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 3)
                            arg15 = data_142fc95a0
                            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                            arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                            var_a60[0].o = data_143442440
                            arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, var_a60[0].o)
                            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, var_a60[0].o)
                            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(sx.q(temp0_1583) i+ r11_11), 0x30)
                            arg6 = _mm256_cvtepi32_ps(arg6)
                            arg7 = data_143442460
                            arg13 = arg7
                            arg6 = _mm256_div_ps(arg6, arg7)
                            arg5 = _mm256_insertf128_ps(arg5, arg10[0].o, 1)
                            arg8 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                            zmm5 = _mm256_add_ps(arg11, _mm256_mul_ps(arg9, arg6))
                            arg6 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                            zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                            arg7[0].o = data_143442480
                            zmm1[0].o &= arg7[0].o
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_a60[0].o)
                            zmm0[0].o &= arg7[0].o
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_a60[0].o)
                            zmm0 = _mm256_mul_ps(arg5, 
                                _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)), 
                                    arg13))
                            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg6, data_143442420)
                            zmm0 = _mm256_add_ps(arg12, zmm0)
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            var_a60[0].o = data_143442490
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_a60[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_a60[0].o)
                            zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                                _mm256_mul_ps(arg8, 
                                    __vdivps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, arg5[0].o, 
                                            1)), 
                                        data_1434424a0)), 
                                var_960)
                            arg5 = _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(zmm5, zmm5)), 
                                _mm256_mul_ps(zmm0, zmm0))
                            var_520_1 = _mm256_maskstore_ps(zmm3, zmm5)
                            var_500_1 = _mm256_maskstore_ps(zmm3, zmm0)
                            zmm0 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm1, zmm1))
                            var_4e0_1 = _mm256_maskstore_ps(zmm3, zmm1)
                            zmm0 =
                                _mm256_and_ps(_mm256_cmp_ps(arg11, zmm0, 1), _mm256_sqrt_ps(zmm0))
                        case 4
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(var_940_2[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, arg7[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            var_940_2[0].o = _mm256_extractf128_ps(var_a60[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, zmm1[0].o)
                            var_940_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60[0].o, arg6[0].o)
                            zmm1 = _mm256_insertf128_ps(var_940_2, zmm1[0].o, 1)
                            var_940_2[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            var_a60[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(var_940_2, var_a60[0].o, 1)
                            var_a60[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg11, zmm1, arg5)
                            arg5[0].o = _mm_permute_ps(var_a60[0].o, 0x50)
                            var_a60[0].o = _mm_permute_ps(var_a60[0].o, 0xfa)
                            zmm0 = _mm256_blendv_ps(arg11, zmm0, 
                                _mm256_insertf128_ps(arg5, var_a60[0].o, 1))
                            double r10_17 = zmm1[0]
                            int64_t rcx_111 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rdx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rdi_57 = zmm1[0]
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rsi_69 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            double rax_279 = zmm0[0]
                            zmm0[0].o = zx.o(*(arg4 i+ r10_17))
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rcx_111), 1)
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 i+ rdi_57), 2)
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_73), 3)
                            double rcx_112 = zmm1[0]
                            zmm1[0].o = zx.o(*(arg4 i+ rax_279))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_55), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rcx_112), 2)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_69), 3)
                            arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            var_a60[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                            arg6[0].o = data_143442440
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            var_a60[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_a60[0].o, arg6[0].o)
                            zmm4 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(var_a60, zmm5[0].o, 1))
                            zmm5 = data_143442460
                            zmm4 = _mm256_div_ps(zmm4, zmm5)
                            zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                            arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                            arg7[0].o = data_143442480
                            zmm1[0].o &= arg7[0].o
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                            zmm0[0].o &= arg7[0].o
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                            zmm0 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)), zmm5)
                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm5[0].o = data_143442490
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                            zmm1 = __vdivps_ymmqq_ymmqq_memqq(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)), 
                                data_1434424a0)
                            arg5 = _mm256_sub_ps(
                                _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(zmm4, zmm4)), 
                                    _mm256_mul_ps(zmm0, zmm0)), 
                                _mm256_mul_ps(zmm1, zmm1))
                            zmm5 = _mm256_sqrt_ps(arg5)
                            var_520_1 = _mm256_maskstore_ps(zmm3, zmm4)
                            var_500_1 = _mm256_maskstore_ps(zmm3, zmm0)
                            zmm0 = _mm256_cmp_ps(arg11, arg5, 1)
                            var_4e0_1 = _mm256_maskstore_ps(zmm3, zmm1)
                            zmm0 = _mm256_and_ps(zmm0, zmm5)
                        case 5
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(var_940_2[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, arg7[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            var_940_2[0].o = _mm256_extractf128_ps(var_a60[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940_2[0].o, zmm1[0].o)
                            var_940_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60[0].o, arg6[0].o)
                            zmm1 = _mm256_insertf128_ps(var_940_2, zmm1[0].o, 1)
                            var_940_2[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            var_a60[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(var_940_2, var_a60[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg11, zmm1, arg5)
                            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            var_a60[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                            arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(var_a60, arg5[0].o, 1)
                            zmm0 = _mm256_blendv_ps(arg11, zmm0, arg5)
                            int64_t r9_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            double rcx_113 = zmm1[0]
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t r10_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            double rbx_56 = zmm1[0]
                            double rdi_58 = zmm0[0]
                            int64_t rsi_70 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_280 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = zx.o(*(var_aa0 i+ rcx_113))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_aa0 + r9_3), 1)
                            arg4 = var_aa0
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rbx_56), 2)
                            double rcx_115 = zmm0[0]
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r10_18), 3)
                            zmm1[0].o = zx.o(*(arg4 i+ rdi_58))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_70), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 i+ rcx_115), 2)
                            arg5[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_280), 3)
                            zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                            var_a60[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                            zmm5 = _mm256_insertf128_ps(zmm1, var_a60[0].o, 1)
                            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 5)
                            arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 5)
                            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                            arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                            arg8 = data_1434422e0
                            arg6 = _mm256_and_ps(arg6, arg8)
                            arg9 = data_143442300
                            zmm5 = _mm256_and_ps(zmm5, arg9)
                            arg10 = _mm256_or_ps(arg6, zmm5)
                            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                            zmm5[0].o = data_143442320
                            arg12[0].o = zmm5[0].o
                            var_a60[0].o &= zmm5[0].o
                            zmm5[0].o = data_143442330
                            arg13[0].o = zmm5[0].o
                            var_a60[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_a60[0].o, zmm5[0].o)
                            zmm1[0].o &= arg12[0].o
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, var_a60[0].o, 1)
                            zmm4 = _mm256_or_ps(arg10, zmm1)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 6)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            zmm1 = _mm256_and_ps(zmm1, arg8)
                            zmm5 = _mm256_and_ps(zmm5, arg9)
                            zmm1 = _mm256_or_ps(zmm1, zmm5)
                            zmm5[0].o = arg6[0].o & arg12[0].o
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                            arg6[0].o = arg7[0].o & arg12[0].o
                            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
                            zmm1 = _mm256_or_ps(zmm1, _mm256_insertf128_ps(arg6, zmm5[0].o, 1))
                            zmm5 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x11)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x11)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                            arg5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442340)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442360)
                            zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442380)
                            zmm0 = _mm256_or_ps(zmm0, zmm5)
                            zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg6[0].o = data_1434423a0
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm0 = _mm256_or_ps(zmm0, _mm256_insertf128_ps(arg5, zmm5[0].o, 1))
                            arg5 = _mm256_sub_ps(_mm256_sub_ps(arg15, _mm256_mul_ps(zmm4, zmm4)), 
                                _mm256_mul_ps(zmm1, zmm1))
                            var_520_1 = _mm256_maskstore_ps(zmm3, zmm4)
                            var_500_1 = _mm256_maskstore_ps(zmm3, zmm1)
                            zmm1 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm0, zmm0))
                            var_4e0_1 = _mm256_maskstore_ps(zmm3, zmm0)
                            zmm0 =
                                _mm256_and_ps(_mm256_cmp_ps(arg11, zmm1, 1), _mm256_sqrt_ps(zmm1))
                    
                    var_4c0_1 = _mm256_maskstore_ps(zmm3, zmm0)
                
                arg12 = var_7c0.32
                arg9 = _mm256_cmp_ps(arg11, 
                    _mm256_add_ps(
                        _mm256_add_ps(
                            _mm256_add_ps(_mm256_mul_ps(var_620, var_520_1), 
                                _mm256_mul_ps(var_600, var_500_1)), 
                            _mm256_mul_ps(var_5e0, var_4e0_1)), 
                        _mm256_mul_ps(var_5c0, var_4c0_1)), 
                    2)
                arg11 = var_a80_1
                zmm5 = _mm256_mul_ps(arg11, var_520_1)
                arg6 = _mm256_mul_ps(arg11, var_500_1)
                arg7 = _mm256_mul_ps(arg11, var_4e0_1)
                arg8 = _mm256_mul_ps(arg11, var_4c0_1)
                arg9 = _mm256_blendv_ps(data_143442520, arg15, arg9)
                arg10 = _mm256_sub_ps(arg15, arg11)
                arg9 = _mm256_mul_ps(arg10, arg9)
                zmm5 = _mm256_add_ps(zmm5, _mm256_mul_ps(arg9, var_620))
                zmm0 = _mm256_add_ps(arg6, _mm256_mul_ps(arg9, var_600))
                arg5 = _mm256_add_ps(arg7, _mm256_mul_ps(arg9, var_5e0))
                zmm4 = _mm256_add_ps(arg8, _mm256_mul_ps(arg9, var_5c0))
                zmm1 = _mm256_mul_ps(zmm5, zmm5)
                arg6 = _mm256_mul_ps(zmm0, zmm0)
                zmm1 = _mm256_add_ps(_mm256_add_ps(zmm1, _mm256_mul_ps(arg5, arg5)), 
                    _mm256_add_ps(arg6, _mm256_mul_ps(zmm4, zmm4)))
                arg6 = data_142fc94a0
                arg9 = arg6
                arg6 = _mm256_mul_ps(zmm1, arg6)
                arg7 = _mm256_rsqrt_ps(zmm1)
                arg7 = _mm256_add_ps(arg7, 
                    _mm256_mul_ps(
                        _mm256_sub_ps(arg9, _mm256_mul_ps(arg6, _mm256_mul_ps(arg7, arg7))), arg7))
                double var_200_1[0x4] = zmm5
                double var_1e0_1[0x4] = zmm0
                float var_1c0_1[0x8] = arg5
                double var_1a0_1[0x4] = zmm4
                arg6 = _mm256_add_ps(arg7, 
                    _mm256_mul_ps(
                        _mm256_sub_ps(arg9, _mm256_mul_ps(arg6, _mm256_mul_ps(arg7, arg7))), arg7))
                arg7 = data_142fc9340
                arg8 = arg7
                arg7 = _mm256_cmp_ps(arg7, zmm1, 2)
                zmm5 = _mm256_and_ps(_mm256_mul_ps(arg6, zmm5), arg7)
                var_620 = _mm256_maskstore_ps(zmm3, zmm5)
                var_600 = _mm256_maskstore_ps(zmm3, _mm256_and_ps(_mm256_mul_ps(arg6, zmm0), arg7))
                var_5e0 = _mm256_maskstore_ps(zmm3, _mm256_and_ps(_mm256_mul_ps(arg6, arg5), arg7))
                zmm0 = _mm256_and_ps(_mm256_mul_ps(arg6, zmm4), arg7)
                zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg8, zmm1, 6), arg15)
                var_5c0 = _mm256_maskstore_ps(zmm3, _mm256_or_ps(zmm0, zmm1))
            
            arg7[0].o = var_820
        
        zmm0 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
        zmm1[0].o = var_620[0].o
        arg8[0].o = var_620[2].o
        zmm3[0].o = var_600[0].o
        arg9[0].o = var_600[2].o
        zmm5[0].o = var_5e0[0].o
        arg6[0].o = var_5e0[4].o
        arg7[0].o = var_5c0[0].o
        arg5[0].o = var_5c0[2].o
        zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        zmm5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm3[0].o = arg7[0] | zmm4[0] << 0x40
        int128_t var_3a0 = zmm3[0].o
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
        int128_t var_390_1 = zmm3[0].o
        zmm3[0].o = zmm1[0] | zmm5[0] << 0x40
        int128_t var_380_1 = zmm3[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        int128_t var_370_1 = zmm1[0].o
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
        arg5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
        zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        zmm4[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        zmm5[0].o = zmm3[0].q | zmm1[0] << 0x40
        int128_t var_360_1 = zmm5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        int128_t var_350_1 = zmm1[0].o
        zmm1[0].o = zmm4[0] | arg5[0].q << 0x40
        int128_t var_340_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
        int128_t var_330_1 = zmm1[0].o
        uint64_t j_4 = 0xff
        arg8 = var_920
        arg5[0].o = data_142d3f5b0
        
        do
            uint64_t rcx_116
            uint64_t rflags_1
            
            if (j_4 == 0)
                rcx_116 = 0x40
            else
                rcx_116, rflags_1 = _bit_scan_forward(j_4)
            double var_2a0[0x4] = zmm0
            zmm1[0].o = (&var_3a0)[rcx_116]
            r13[sx.q(*(&var_2a0 + ((zx.q(rcx_116.d) & 7) << 2))) * 3] = zmm1[0].o
            j_4 &= rol.q(-2, rcx_116.b)
        while (j_4 != 0)
        
        rcx_2 = zx.q(rcx_2.d + 8)
    while (rcx_2.d s< i)

uint64_t i_5 = zx.q(arg20)

if (rcx_2.d s< i_5.d)
    zmm0[0].o = zx.o(rcx_2.d)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg11[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
    arg12[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
    zmm1[0].o = zx.o(i_5.d)
    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
    arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg12[0].o)
    arg10[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
    zmm1 = _mm256_insertf128_ps(arg10, arg8[0].o, 1)
    zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(arg11[0].o, 3)
    zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(arg12[0].o, 3)
    zmm4 = _mm256_and_ps(zmm1, _mm256_insertf128_ps(zmm4, zmm5[0].o, 1))
    int64_t r15_15 = sx.q(zmm4[0].d)
    int64_t r12_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
    int64_t r10_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
    int64_t rbx_59 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
    zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9520)
    arg7[0].o = zx.o(*(zx.q(zmm5[0].d) + arg2 + r15_15))
    int64_t rdi_61 = sx.q(zmm4[0].d)
    uint32_t* rsi_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
    arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_71 + arg2 + r12_11), 1)
    uint32_t* rsi_72 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
    arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_72 + arg2 + r10_19), 2)
    float* r9_5 = var_aa0
    int64_t rcx_121 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
    uint32_t* rdx_81 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
    arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_81 + arg2 + rbx_59), 3)
    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    arg6[0].o = zx.o(*(zx.q(zmm5[0].d) + arg2 + rdi_61))
    int32_t temp0_1863 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
    uint32_t* rsi_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
    int64_t rax_286 = sx.q(temp0_1863)
    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_74 + arg2 + rcx_121), 1)
    uint64_t rsi_75 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_75 + arg2 + rax_286), 2)
    zmm0[0].o = zx.o(*(arg2 + rdi_61))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rcx_121), 1)
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rax_286), 2)
    arg5[0].o = zx.o(*(arg2 + r15_15))
    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg2 + r12_11), 1)
    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg2 + r10_19), 2)
    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg2 + rbx_59), 3)
    float var_460_1[0x8] = arg5
    int64_t rax_288 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rax_288), 3)
    double var_7c0_1[0x2] = zmm0[0].o
    uint32_t* rcx_122 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 4)
    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_122 + arg2 + rax_288), 3)
    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 4)
    zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
    zmm5 = _mm256_and_ps(zmm1, zmm0)
    zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9540)
    int64_t rcx_124 = sx.q(zmm5[0].d) + arg3
    zmm0[0].o = zx.o(*(zx.q(zmm4[0].d) + rcx_124))
    arg7 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_1434423c0)
    arg5[0].o = zx.o(*(zx.q(arg7[0].d) + rcx_124))
    int64_t rax_295 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)) + arg3
    uint64_t rcx_125 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_125 + rax_295), 1)
    uint64_t rcx_126 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_126 + rax_295), 1)
    int64_t rax_298 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)) + arg3
    uint64_t rcx_127 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_127 + rax_298), 2)
    uint64_t rcx_128 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_128 + rax_298), 2)
    int64_t rax_301 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)) + arg3
    uint64_t rcx_129 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
    arg9[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_129 + rax_301), 3)
    uint64_t rcx_130 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_130 + rax_301), 3)
    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    int64_t rax_304 = sx.q(zmm0[0].d) + arg3
    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
    zmm5[0].o = zx.o(*(zx.q(zmm4[0].d) + rax_304))
    arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
    arg7[0].o = zx.o(*(zx.q(arg6[0].d) + rax_304))
    int64_t rax_307 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)) + arg3
    uint64_t rcx_133 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_133 + rax_307), 1)
    uint64_t rcx_134 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
    arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_134 + rax_307), 1)
    int64_t rax_310 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)) + arg3
    uint64_t rcx_135 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_135 + rax_310), 2)
    uint64_t rcx_136 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
    arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_136 + rax_310), 2)
    int64_t rax_313 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)) + arg3
    uint64_t rcx_137 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
    arg13[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_137 + rax_313), 3)
    uint64_t rcx_138 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_138 + rax_313), 3)
    zmm4 = _mm256_insertf128_ps(arg11, arg12[0].o, 1)
    double var_940_3[0x4] = zmm4
    zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
    float var_720_1[0x8] = zmm3
    arg15 = _mm256_insertf128_ps(arg9, arg13[0].o, 1)
    arg11 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
    zmm5[0].o = data_142d3f5b0
    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
    arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    zmm3[0].o = arg12[0].o & arg8[0].o
    arg6[0].o = arg14[0].o & arg10[0].o
    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
    arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    double var_7a0[0x4]
    double var_780[0x4]
    float var_760[0x8]
    float var_740[0x8]
    
    if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
        arg6[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0].q)
        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
        zmm3[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0].q)
        zmm3 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
        arg6 = _mm256_and_ps(zmm3, arg15)
        int64_t r11_13 = sx.q(arg6[0].d)
        void* rbx_60 = r9_5 + r11_13
        int32_t temp0_1930 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
        int32_t temp0_1931 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
        int32_t temp0_1932 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
        arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        int64_t r15_16 = sx.q(arg7[0].d)
        void* rdi_62 = var_aa0 + r15_16
        int32_t temp0_1934 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
        int32_t temp0_1935 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
        int64_t r12_12 = sx.q(temp0_1934)
        arg6 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9520)
        arg8[0].o = *(zx.q(arg6[0].d) + rbx_60)
        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9540)
        zmm4[0].o = *(zx.q(zmm3[0]) + rbx_60)
        int32_t temp0_1938 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3)
        arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        arg10[0].o = zmm5[0].o
        zmm5[0].o = *(zx.q(arg7[0].d) + rdi_62)
        zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        arg5[0].o = *(zx.q(zmm0[0].d) + rdi_62)
        void* rbx_63 = var_aa0 + r12_12
        uint64_t rdi_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_63 + rbx_63), 0x10)
        float* rdi_64 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r14_17 = sx.q(temp0_1935)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_64 + rbx_63), 0x10)
        void* rdi_65 = var_aa0 + r14_17
        uint64_t rbx_64 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_64 + rdi_65), 0x20)
        float* rbx_65 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_65 + rdi_65), 0x20)
        uint64_t rdi_66 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
        int64_t rax_320 = sx.q(temp0_1938)
        void* rbx_66 = var_aa0 + rax_320
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_66 + rbx_66), 0x30)
        float* rdi_67 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        int64_t rsi_76 = sx.q(temp0_1930)
        r9_5 = var_aa0
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_67 + rbx_66), 0x30)
        void* rbx_67 = r9_5 + rsi_76
        uint64_t rdi_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_68 + rbx_67), 0x10)
        float* rdi_69 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_69 + rbx_67), 0x10)
        int64_t rbx_68 = sx.q(temp0_1931)
        void* rdi_70 = r9_5 + rbx_68
        uint64_t rdx_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_86 + rdi_70), 0x20)
        float* rdx_87 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        int64_t rcx_142 = sx.q(temp0_1932)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_87 + rdi_70), 0x20)
        void* rdx_88 = r9_5 + rcx_142
        uint64_t rdi_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_71 + rdx_88), 0x30)
        uint64_t rdi_72 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_72 + rdx_88), 0x30)
        zmm4[0].o = *(r9_5 + r11_13)
        arg6[0].o = *(r9_5 + r15_16)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 + r12_12), 0x10)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 + r14_17), 0x20)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 + rax_320), 0x30)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + rsi_76), 0x10)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + rbx_68), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + rcx_142), 0x30)
        arg7 = _mm256_insertf128_ps(arg14, arg12[0].o, 1)
        zmm4 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
        arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
        zmm3 = _mm256_mul_ps(zmm4, zmm4)
        zmm3 = _mm256_sub_ps(
            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), _mm256_mul_ps(arg5, arg5)), 
            _mm256_mul_ps(zmm0, zmm0))
        zmm5 = _mm256_sqrt_ps(zmm3)
        zmm1 = _mm256_and_ps(arg7, zmm1)
        var_7a0 = _mm256_maskstore_ps(zmm1, zmm4)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        var_780 = _mm256_maskstore_ps(zmm1, arg5)
        arg5 = _mm256_cmp_ps(zmm4, zmm3, 1)
        var_760 = _mm256_maskstore_ps(zmm1, zmm0)
        zmm0 = _mm256_and_ps(arg5, zmm5)
        zmm5[0].o = arg10[0].o
        var_740 = _mm256_maskstore_ps(zmm1, zmm0)
    
    float var_8e0_1[0x8] = arg15
    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm5[0].o)
    arg15 = var_940_3
    arg5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    arg14 = var_720_1
    arg6[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
    arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg15[0].o)
    arg5[0].o = zmm1[0].o & not.o(arg12[0].o)
    arg7[0].o = zmm3[0].o & not.o(arg6[0].o)
    zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
    int32_t r11_14 = rbx.d
    
    if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
        int128_t var_a30_1 = zmm4[0].o
        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg9[0])
        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
        zmm4 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
        zmm5 = _mm256_insertf128_ps(zmm5, arg7[0].o, 1)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        zmm1[0].o ^= arg5[0].o
        zmm3[0].o ^= arg5[0].o
        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
        int128_t var_9a0_1 = arg12[0].o
        zmm3 = _mm256_insertf128_ps(arg6, arg12[0].o, 1)
        arg7 = _mm256_and_ps(zmm3, zmm1)
        zmm1[0].o = zx.o(rax)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        zmm3[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0])
        zmm1[0].o = rcx_1
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
        arg13 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
        double var_860_2[0x4] = zmm4
        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
        int64_t var_8a0_1[0x2] = zmm4[0].o
        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o)
        float var_880_1[0x8] = zmm3
        zmm3[0].o = zx.o(0)
        arg6[0].o = arg17
        int32_t rax_322
        rax_322.b = zx.o(0) f>= arg6[0].d
        zmm3[0].o = zx.o(neg.d(rax_322))
        zmm3[0].o ^= arg5[0].o
        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
        zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
        zmm4[0].o = data_1434422d0
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        zmm5[0].o ^= arg5[0].o
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
        zmm4[0].o ^= arg5[0].o
        zmm4 = _mm256_and_ps(_mm256_insertf128_ps(zmm4, zmm5[0].o, 1), zmm3)
        arg12 = _mm256_and_ps(zmm4, arg7)
        int32_t temp0_2029 = _mm256_movemask_ps(arg12)
        double var_820_1[0x4] = arg7
        double var_a80_4[0x4]
        int128_t* var_7e0
        int32_t var_5a0
        
        if (temp0_2029 == 0)
            zmm0[0].o = zx.o(0)
            var_a80_4 = zmm0
            arg11[0].o = zx.o(0)
            arg9[0].o = zx.o(0)
            arg12[0].o = var_9a0_1
            arg8 = var_8e0_1
        else
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
            arg7 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
            
            if (arg6[0].o f>= 1f)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm0[0].o = zx.o(0)
                var_a80_4 = zmm0
                arg11 = _mm256_blendv_ps(zmm1, arg7, arg12)
                arg9 = arg11
                arg12[0].o = var_9a0_1
                arg8 = var_8e0_1
            else
                var_960 = zmm4
                arg9[0].o = arg6[0].o
                arg5[0].o = zx.o(r9_5)
                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x44)
                arg5 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_8a0_1)
                var_a20 = arg7
                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_880_1[0].o)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_860_2[0].o)
                zmm0[0].o = data_143442a20
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                arg7 = var_a20
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                arg5 = data_143442a40
                zmm0 = _mm256_and_ps(zmm0, arg5)
                double var_a80_3[0x4] = zmm0
                zmm3 = _mm256_and_ps(zmm1, arg5)
                zmm0[0].o = _mm_permute_ps(arg9[0].o, 0)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                zmm1 = _mm256_cvtepi32_ps(arg7)
                zmm0 = _mm256_mul_ps(zmm0, zmm1)
                zmm1[0].o = arg11[0].o
                zmm1[0].d = float.s(arg16 - 1)
                arg6[0].o = zmm1[0].o f* arg9[0].d
                int32_t rax_326 = int.d(arg6[0].d)
                int32_t rbx_69 = 0
                
                if (rax_326 s>= 0)
                    rbx_69 = rax_326
                
                if (arg16 - 2 s<= rbx_69)
                    rbx_69 = arg16 - 2
                
                zmm0 = _mm256_cvttps_epi32(zmm0)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                var_920[0].o = arg5[0].o
                zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                arg8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                var_9c0.32 = zmm3
                var_7e0.32 = arg8
                var_5a0.32 = arg13
                var_900 = arg10[0].o
                var_a90 = arg6[0].o
                
                if (arg16 s< 0x100)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                    arg7[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg15[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    char rdx_91 = temp0_2029.b
                    
                    if ((rdx_91 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0])
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                    
                    if ((rdx_91 & 2) != 0)
                        uint32_t rax_353 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_353, 1)
                    
                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                    var_a60[0].o = __vextractf128_memdq_ymmdq_immb(var_a80_3[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a80_3[0].o, arg5[0].o)
                    
                    if ((rdx_91 & 4) == 0)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a60[0].o)
                        zmm4 = var_9c0.32
                        
                        if ((rdx_91 & 8) != 0)
                            goto label_1402b4dec
                        
                        goto label_1402b49da
                    
                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm5[0]), 2)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a60[0].o)
                    zmm4 = var_9c0.32
                    
                    if ((rdx_91 & 8) != 0)
                    label_1402b4dec:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint32_t rax_381 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_381, 3)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        
                        if ((rdx_91 & 0x10) == 0)
                            goto label_1402b49e9
                        
                        goto label_1402b4e17
                    
                label_1402b49da:
                    zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    
                    if ((rdx_91 & 0x10) != 0)
                    label_1402b4e17:
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0]), 4)
                        
                        if ((rdx_91 & 0x20) != 0)
                        label_1402b4e2b:
                            uint32_t rax_385 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_385, 5)
                            
                            if ((rdx_91 & 0x40) == 0)
                                goto label_1402b49fd
                            
                            goto label_1402b4e3c
                    else
                    label_1402b49e9:
                        
                        if ((rdx_91 & 0x20) != 0)
                            goto label_1402b4e2b
                    
                    if ((rdx_91 & 0x40) != 0)
                    label_1402b4e3c:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg5[0].q), 6)
                        var_840[0].o = arg7[0].o
                        
                        if (temp0_2029.b s< 0)
                        label_1402b4e60:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_389 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_389, 7)
                    else
                    label_1402b49fd:
                        var_840[0].o = arg7[0].o
                        
                        if (temp0_2029.b s< 0)
                            goto label_1402b4e60
                    
                    zmm0[0].o &= data_142fc92e0
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = zx.o(rbx_69)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    arg11 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm5[0].o ^= zmm0[0].o
                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                    zmm3[0].o ^= zmm0[0].o
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                    var_6e0 = zmm3
                    zmm3 = _mm256_and_ps(arg12, zmm3)
                    arg9 = arg8
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                        zmm3[0].o ^= zmm0[0].o
                        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                        zmm1[0].o ^= zmm0[0].o
                        zmm5 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        arg8 = var_7e0.32
                        arg9 = _mm256_blendv_ps(arg8, var_a20, zmm5)
                        zmm1[0].o = var_840[0].o
                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_920[0].o)
                        arg6[0].o ^= zmm0[0].o
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_a20[0].o)
                        zmm0[0].o ^= arg7[0].o
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        arg6 = _mm256_and_ps(zmm5, zmm0)
                        arg13 = _mm256_and_ps(arg12, arg6)
                        int32_t i_1 = _mm256_movemask_ps(arg13)
                        
                        if (i_1 == 0)
                            zmm4 = var_9c0.32
                        else
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm4 = var_9c0.32
                            
                            do
                                zmm1 = zmm3
                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                arg10[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm5[0].o)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                                zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                                char temp0_2312 = _mm256_movemask_ps(arg13)
                                
                                if ((temp0_2312 & 1) == 0)
                                    arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                                    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                                    
                                    if ((temp0_2312 & 2) != 0)
                                        goto label_1402b4b38
                                    
                                    goto label_1402b4c4b
                                
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*zmm3[0].q), 0)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                                
                                if ((temp0_2312 & 2) != 0)
                                label_1402b4b38:
                                    uint32_t rax_358 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_358, 1)
                                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                    arg13[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_a80_3[0].o)
                                    
                                    if ((temp0_2312 & 4) == 0)
                                        goto label_1402b4c60
                                    
                                    goto label_1402b4b55
                                
                            label_1402b4c4b:
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_a80_3[0].o)
                                
                                if ((temp0_2312 & 4) == 0)
                                label_1402b4c60:
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60[0].o)
                                    
                                    if ((temp0_2312 & 8) != 0)
                                        goto label_1402b4b78
                                    
                                    goto label_1402b4c70
                                
                            label_1402b4b55:
                                arg7[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg7[0]), 2)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60[0].o)
                                
                                if ((temp0_2312 & 8) != 0)
                                label_1402b4b78:
                                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    uint32_t rax_362 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_362, 3)
                                    zmm3 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
                                    
                                    if ((temp0_2312 & 0x10) == 0)
                                        goto label_1402b4c80
                                    
                                    goto label_1402b4ba4
                                
                            label_1402b4c70:
                                zmm3 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
                                
                                if ((temp0_2312 & 0x10) == 0)
                                label_1402b4c80:
                                    
                                    if ((temp0_2312 & 0x20) != 0)
                                        goto label_1402b4bb9
                                    
                                    goto label_1402b4c8a
                                
                            label_1402b4ba4:
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*zmm3[0].q), 4)
                                
                                if ((temp0_2312 & 0x20) != 0)
                                label_1402b4bb9:
                                    uint32_t rax_366 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_366, 5)
                                    
                                    if ((temp0_2312 & 0x40) == 0)
                                        goto label_1402b4c94
                                    
                                    goto label_1402b4bcb
                                
                            label_1402b4c8a:
                                
                                if ((temp0_2312 & 0x40) != 0)
                                label_1402b4bcb:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                        zx.d(*zmm5[0]), 6)
                                    
                                    if (temp0_2312 s< 0)
                                    label_1402b4be7:
                                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        uint32_t rax_370 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                            rax_370, 7)
                                else
                                label_1402b4c94:
                                    
                                    if (temp0_2312 s< 0)
                                        goto label_1402b4be7
                                
                                zmm3[0].o = arg14[0].o & data_142fc92e0
                                zmm5[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d8f750)
                                zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                                zmm3 = _mm256_and_ps(_mm256_insertf128_ps(zmm3, zmm5[0].o, 1), arg6)
                                arg7[0].o = zx.o(0)
                                zmm5 = _mm256_and_ps(zmm3, arg12)
                                
                                if (_mm256_movemask_ps(zmm5) != i_1)
                                    arg7 = _mm256_xor_ps(zmm3, arg6)
                                
                                arg9 = _mm256_blendv_ps(arg9, arg8, zmm3)
                                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                                arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm3 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_920[0].o)
                                zmm5[0].o ^= zmm0[0].o
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_a20[0].o)
                                arg6[0].o ^= zmm0[0].o
                                zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                arg6 = _mm256_and_ps(zmm5, arg7)
                                arg13 = _mm256_and_ps(arg6, arg12)
                                i_1 = _mm256_movemask_ps(arg13)
                                arg8 = zmm1
                            while (i_1 != 0)
                    
                    arg5[0].o = zx.o(0)
                    zmm0 = _mm256_andnot_ps(var_6e0, arg12)
                    
                    if (_mm256_movemask_ps(zmm0) == 0)
                        arg8 = var_8e0_1
                    else
                        zmm0 = _mm256_cmp_ps(arg5, arg5, 0xf)
                        zmm3 = _mm256_xor_ps(var_6e0, zmm0)
                        arg9 = _mm256_blendv_ps(arg9, arg5, zmm3)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_840[0].o)
                        var_6e0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_7e0.o)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_6e0[0].o, arg6[0].o)
                        zmm5 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                        arg13 = _mm256_and_ps(zmm5, zmm3)
                        arg14 = _mm256_and_ps(arg13, arg12)
                        int32_t i_2 = _mm256_movemask_ps(arg14)
                        
                        if (i_2 != 0)
                            zmm3 = _mm256_insertf128_ps(var_6e0, zmm0[0].o, 1)
                            arg8[0].o = data_142fc92e0
                            
                            do
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                arg10 = _mm256_insertf128_ps(zmm5, arg7[0].o, 1)
                                char temp0_2481 = _mm256_movemask_ps(arg14)
                                
                                if ((temp0_2481 & 1) == 0)
                                    arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((temp0_2481 & 2) != 0)
                                        goto label_1402b5297
                                    
                                    goto label_1402b53a6
                                
                                var_6e0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_6e0[0].o, 
                                    zx.d(*arg10[0].q), 0)
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                
                                if ((temp0_2481 & 2) != 0)
                                label_1402b5297:
                                    uint32_t rax_413 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    var_6e0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_6e0[0].o, rax_413, 1)
                                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                    arg14[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_a80_3[0].o)
                                    
                                    if ((temp0_2481 & 4) == 0)
                                        goto label_1402b53bb
                                    
                                    goto label_1402b52b4
                                
                            label_1402b53a6:
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_a80_3[0].o)
                                
                                if ((temp0_2481 & 4) == 0)
                                label_1402b53bb:
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60[0].o)
                                    
                                    if ((temp0_2481 & 8) != 0)
                                        goto label_1402b52d7
                                    
                                    goto label_1402b53cb
                                
                            label_1402b52b4:
                                arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                var_6e0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_6e0[0].o, 
                                    zx.d(*arg7[0]), 2)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60[0].o)
                                
                                if ((temp0_2481 & 8) != 0)
                                label_1402b52d7:
                                    arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    uint32_t rax_417 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    var_6e0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_6e0[0].o, rax_417, 3)
                                    arg10 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                                    
                                    if ((temp0_2481 & 0x10) == 0)
                                        goto label_1402b53db
                                    
                                    goto label_1402b5303
                                
                            label_1402b53cb:
                                arg10 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                                
                                if ((temp0_2481 & 0x10) == 0)
                                label_1402b53db:
                                    
                                    if ((temp0_2481 & 0x20) != 0)
                                        goto label_1402b5318
                                    
                                    goto label_1402b53e5
                                
                            label_1402b5303:
                                var_6e0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_6e0[0].o, 
                                    zx.d(*arg10[0].q), 4)
                                
                                if ((temp0_2481 & 0x20) != 0)
                                label_1402b5318:
                                    uint32_t rax_421 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    var_6e0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_6e0[0].o, rax_421, 5)
                                    
                                    if ((temp0_2481 & 0x40) == 0)
                                        goto label_1402b53ef
                                    
                                    goto label_1402b532a
                                
                            label_1402b53e5:
                                
                                if ((temp0_2481 & 0x40) != 0)
                                label_1402b532a:
                                    zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    var_6e0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_6e0[0].o, 
                                        zx.d(*zmm5[0]), 6)
                                    
                                    if (temp0_2481 s< 0)
                                    label_1402b5346:
                                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        uint32_t rax_425 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                        var_6e0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            var_6e0[0].o, rax_425, 7)
                                else
                                label_1402b53ef:
                                    
                                    if (temp0_2481 s< 0)
                                        goto label_1402b5346
                                
                                zmm5[0].o = var_6e0[0].o & arg8[0].o
                                arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                                zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                                zmm4[0].o ^= arg5[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                                zmm5[0].o ^= arg5[0].o
                                zmm5 =
                                    _mm256_and_ps(_mm256_insertf128_ps(zmm5, zmm4[0].o, 1), arg13)
                                arg7[0].o = zx.o(0)
                                zmm4 = _mm256_and_ps(zmm5, arg12)
                                
                                if (_mm256_movemask_ps(zmm4) != i_2)
                                    arg7 = _mm256_xor_ps(zmm5, arg13)
                                
                                arg9 = _mm256_blendv_ps(arg9, zmm3, zmm5)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                                zmm3 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                arg13 = _mm256_and_ps(zmm0, arg7)
                                arg14 = _mm256_and_ps(arg13, arg12)
                                i_2 = _mm256_movemask_ps(arg14)
                                zmm4 = var_9c0.32
                            while (i_2 != 0)
                        
                        arg8 = var_8e0_1
                        arg5[0].o = zx.o(0)
                    
                    arg11 = _mm256_blendv_ps(arg5, arg9, arg12)
                    var_6e0[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                    var_6e0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_6e0[0].o)
                    zmm1 = _mm256_insertf128_ps(var_6e0, arg5[0].o, 1)
                    
                    if ((rdx_91 & 1) != 0)
                        arg6[0].o = zx.o(*zmm1[0])
                    
                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    arg14 = var_720_1
                    arg13 = var_5a0.32
                    arg10[0].o = var_900
                    
                    if ((rdx_91 & 2) == 0)
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a80_3[0].o)
                        
                        if ((rdx_91 & 4) != 0)
                            goto label_1402b824f
                        
                        goto label_1402b5514
                    
                    uint32_t rax_564 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_564, 1)
                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a80_3[0].o)
                    
                    if ((rdx_91 & 4) != 0)
                    label_1402b824f:
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        double rax_565 = zmm4[0]
                        zmm4 = var_9c0.32
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*rax_565), 2)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a60[0].o)
                        
                        if ((rdx_91 & 8) == 0)
                            goto label_1402b5523
                        
                        goto label_1402b827a
                    
                label_1402b5514:
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a60[0].o)
                    
                    if ((rdx_91 & 8) == 0)
                    label_1402b5523:
                        zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        
                        if ((rdx_91 & 0x10) != 0)
                            goto label_1402b82a5
                        
                        goto label_1402b5532
                    
                label_1402b827a:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    uint32_t rax_568 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_568, 3)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    
                    if ((rdx_91 & 0x10) != 0)
                    label_1402b82a5:
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm1[0]), 4)
                        
                        if ((rdx_91 & 0x20) == 0)
                            goto label_1402b553b
                        
                        goto label_1402b82b9
                    
                label_1402b5532:
                    
                    if ((rdx_91 & 0x20) == 0)
                    label_1402b553b:
                        
                        if ((rdx_91 & 0x40) != 0)
                            goto label_1402b82ca
                        
                        goto label_1402b5544
                    
                label_1402b82b9:
                    uint32_t rax_572 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_572, 5)
                    
                    if ((rdx_91 & 0x40) == 0)
                    label_1402b5544:
                        
                        if (temp0_2029.b s< 0)
                        label_1402b82e5:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_576 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_576, 7)
                    else
                    label_1402b82ca:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*arg5[0].q), 6)
                        
                        if (temp0_2029.b s< 0)
                            goto label_1402b82e5
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    arg9 = _mm256_blendv_ps(zmm1, zmm0, arg12)
                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_920[0].o)
                    arg5 = var_a20
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg12)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg9 = _mm256_blendv_ps(arg9, arg5, zmm0)
                    
                    arg12[0].o = var_9a0_1
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg9[0])
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    
                    if ((rdx_91 & 1) == 0)
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                        
                        if ((rdx_91 & 2) != 0)
                            goto label_1402b8323
                        
                        goto label_1402b55e6
                    
                    zmm0[0].o = zx.o(*zmm1[0])
                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    
                    if ((rdx_91 & 2) != 0)
                    label_1402b8323:
                        uint32_t rax_580 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_580, 1)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_3[0].o)
                        
                        if ((rdx_91 & 4) == 0)
                            goto label_1402b55fa
                        
                        goto label_1402b833f
                    
                label_1402b55e6:
                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_3[0].o)
                    
                    if ((rdx_91 & 4) == 0)
                    label_1402b55fa:
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60[0].o)
                        
                        if ((rdx_91 & 8) != 0)
                            goto label_1402b8361
                        
                        goto label_1402b5609
                    
                label_1402b833f:
                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm3[0].q), 2)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60[0].o)
                    
                    if ((rdx_91 & 8) != 0)
                    label_1402b8361:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint32_t rax_584 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_584, 3)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        
                        if ((rdx_91 & 0x10) == 0)
                            goto label_1402b5618
                        
                        goto label_1402b838c
                    
                label_1402b5609:
                    zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    
                    if ((rdx_91 & 0x10) == 0)
                    label_1402b5618:
                        arg5[0].o = arg6[0].o & data_142fc92e0
                        
                        if ((rdx_91 & 0x20) != 0)
                            goto label_1402b83a8
                        
                        goto label_1402b5629
                    
                label_1402b838c:
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0]), 4)
                    arg5[0].o = arg6[0].o & data_142fc92e0
                    
                    if ((rdx_91 & 0x20) != 0)
                    label_1402b83a8:
                        uint32_t rax_588 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_588, 5)
                        zmm4[0].o = zx.o(0)
                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        
                        if ((rdx_91 & 0x40) == 0)
                            goto label_1402b563b
                        
                        goto label_1402b83c2
                    
                label_1402b5629:
                    zmm4[0].o = zx.o(0)
                    zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                    
                    if ((rdx_91 & 0x40) != 0)
                    label_1402b83c2:
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm5[0]), 6)
                        zmm5[0].o = data_142d3f5b0
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        
                        if (temp0_2029.b s< 0)
                        label_1402b83e9:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_592 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_592, 7)
                    else
                    label_1402b563b:
                        zmm5[0].o = data_142d3f5b0
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        
                        if (temp0_2029.b s< 0)
                            goto label_1402b83e9
                    
                    zmm1 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                    zmm0[0].o &= data_142fc92e0
                else
                    zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    var_840[0].o = zmm0[0].o
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    arg10[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    char rdx_90 = temp0_2029.b
                    
                    if ((rdx_90 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0])
                    
                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    
                    if ((rdx_90 & 2) != 0)
                        int64_t rax_329 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_329, 1)
                    
                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5 = var_a80_3
                    var_a60[0].o = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                    
                    if ((rdx_90 & 4) == 0)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60[0].o)
                        
                        if ((rdx_90 & 8) != 0)
                            goto label_1402b4d4c
                        
                        goto label_1402b4339
                    
                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm3[0].q, 2)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60[0].o)
                    
                    if ((rdx_90 & 8) != 0)
                    label_1402b4d4c:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_373 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_373, 3)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        
                        if ((rdx_90 & 0x10) == 0)
                            goto label_1402b4348
                        
                        goto label_1402b4d71
                    
                label_1402b4339:
                    zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    
                    if ((rdx_90 & 0x10) == 0)
                    label_1402b4348:
                        
                        if ((rdx_90 & 0x20) != 0)
                            goto label_1402b4d7f
                        
                        goto label_1402b4351
                    
                label_1402b4d71:
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0], 4)
                    
                    if ((rdx_90 & 0x20) != 0)
                    label_1402b4d7f:
                        int64_t rax_375 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_375, 5)
                        
                        if ((rdx_90 & 0x40) == 0)
                            goto label_1402b435a
                        
                        goto label_1402b4d93
                    
                label_1402b4351:
                    
                    if ((rdx_90 & 0x40) != 0)
                    label_1402b4d93:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 6)
                        
                        if (temp0_2029.b s< 0)
                        label_1402b4dab:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_377 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_377, 7)
                    else
                    label_1402b435a:
                        
                        if (temp0_2029.b s< 0)
                            goto label_1402b4dab
                    
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = zx.o(rbx_69)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    arg9 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
                    zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm4[0].o ^= zmm0[0].o
                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                    zmm3[0].o ^= zmm0[0].o
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                    var_6e0 = zmm3
                    zmm3 = _mm256_and_ps(arg12, zmm3)
                    arg11 = arg8
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                        zmm3[0].o ^= zmm0[0].o
                        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                        zmm1[0].o ^= zmm0[0].o
                        zmm4 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        arg8 = var_7e0.32
                        arg11 = _mm256_blendv_ps(arg8, arg7, zmm4)
                        zmm1[0].o = var_840[0].o
                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_920[0].o)
                        zmm5[0].o ^= zmm0[0].o
                        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
                        zmm0[0].o ^= arg6[0].o
                        arg14 = _mm256_and_ps(zmm4, _mm256_insertf128_ps(zmm0, zmm5[0].o, 1))
                        zmm0 = _mm256_and_ps(arg12, arg14)
                        int32_t i_3 = _mm256_movemask_ps(zmm0)
                        
                        if (i_3 != 0)
                            zmm4 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            
                            do
                                arg13 = zmm4
                                zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                arg15[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_9c0)
                                arg6 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                char temp0_2145 = _mm256_movemask_ps(zmm0)
                                
                                if ((temp0_2145 & 1) == 0)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
                                    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                                    
                                    if ((temp0_2145 & 2) != 0)
                                        goto label_1402b445f
                                    
                                    goto label_1402b4588
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0], 0)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                                
                                if ((temp0_2145 & 2) != 0)
                                label_1402b445f:
                                    int64_t rax_332 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_332, 1)
                                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                    zmm0[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_a80_3[0].o)
                                    
                                    if ((temp0_2145 & 4) == 0)
                                        goto label_1402b459d
                                    
                                    goto label_1402b447f
                                
                            label_1402b4588:
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_a80_3[0].o)
                                
                                if ((temp0_2145 & 4) == 0)
                                label_1402b459d:
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60[0].o)
                                    
                                    if ((temp0_2145 & 8) != 0)
                                        goto label_1402b44a8
                                    
                                    goto label_1402b45ad
                                
                            label_1402b447f:
                                arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                double rax_333 = arg7[0]
                                arg7 = var_a20
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_333, 2)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60[0].o)
                                
                                if ((temp0_2145 & 8) != 0)
                                label_1402b44a8:
                                    arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                    int64_t rax_334 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_334, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                    
                                    if ((temp0_2145 & 0x10) == 0)
                                        goto label_1402b45bd
                                    
                                    goto label_1402b44ce
                                
                            label_1402b45ad:
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                
                                if ((temp0_2145 & 0x10) == 0)
                                label_1402b45bd:
                                    
                                    if ((temp0_2145 & 0x20) != 0)
                                        goto label_1402b44dd
                                    
                                    goto label_1402b45c7
                                
                            label_1402b44ce:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 4)
                                
                                if ((temp0_2145 & 0x20) != 0)
                                label_1402b44dd:
                                    int64_t rax_336 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_336, 5)
                                    
                                    if ((temp0_2145 & 0x40) == 0)
                                        goto label_1402b45d1
                                    
                                    goto label_1402b44f2
                                
                            label_1402b45c7:
                                
                                if ((temp0_2145 & 0x40) != 0)
                                label_1402b44f2:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm5[0], 6)
                                    
                                    if (temp0_2145 s< 0)
                                    label_1402b450b:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        int64_t rax_338 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_338, 7)
                                else
                                label_1402b45d1:
                                    
                                    if (temp0_2145 s< 0)
                                        goto label_1402b450b
                                
                                zmm0[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d8f750)
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                zmm5 = _mm256_and_ps(zmm0, arg14)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg6 = _mm256_and_ps(zmm5, arg12)
                                
                                if (_mm256_movemask_ps(arg6) != i_3)
                                    zmm0 = _mm256_xor_ps(zmm5, arg14)
                                
                                arg11 = _mm256_blendv_ps(arg11, arg8, zmm5)
                                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                                arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
                                zmm4 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_920[0].o)
                                zmm5[0].o ^= zmm3[0].o
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                                arg6[0].o ^= zmm3[0].o
                                zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                arg14 = _mm256_and_ps(zmm5, zmm0)
                                zmm0 = _mm256_and_ps(arg14, arg12)
                                i_3 = _mm256_movemask_ps(zmm0)
                                arg8 = arg13
                            while (i_3 != 0)
                    
                    arg5[0].o = zx.o(0)
                    zmm0 = _mm256_andnot_ps(var_6e0, arg12)
                    
                    if (_mm256_movemask_ps(zmm0) == 0)
                        arg8 = var_8e0_1
                        zmm5[0].o = data_142d3f5b0
                        zmm4 = var_9c0.32
                    else
                        zmm0 = _mm256_cmp_ps(arg5, arg5, 0xf)
                        zmm3 = _mm256_xor_ps(var_6e0, zmm0)
                        arg11 = _mm256_blendv_ps(arg11, arg5, zmm3)
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_840[0].o)
                        var_6e0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_7e0.o)
                        arg14[0].o = zx.o(0)
                        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_6e0[0].o, arg14[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                        zmm3 = _mm256_and_ps(zmm4, zmm3)
                        arg13 = _mm256_and_ps(zmm3, arg12)
                        int32_t i_4 = _mm256_movemask_ps(arg13)
                        
                        if (i_4 != 0)
                            zmm0 = _mm256_insertf128_ps(var_6e0, zmm0[0].o, 1)
                            
                            do
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_9c0)
                                arg8 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                                char temp0_2214 = _mm256_movemask_ps(arg13)
                                
                                if ((temp0_2214 & 1) == 0)
                                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                    arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                    
                                    if ((temp0_2214 & 2) != 0)
                                        goto label_1402b46fe
                                    
                                    goto label_1402b4813
                                
                                var_6e0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_6e0[0].o, *arg8[0].q, 0)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                
                                if ((temp0_2214 & 2) != 0)
                                label_1402b46fe:
                                    int64_t rax_342 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                    var_6e0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_6e0[0].o, *rax_342, 1)
                                    arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                    arg13[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a80_3[0].o)
                                    
                                    if ((temp0_2214 & 4) == 0)
                                        goto label_1402b4828
                                    
                                    goto label_1402b471e
                                
                            label_1402b4813:
                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a80_3[0].o)
                                
                                if ((temp0_2214 & 4) == 0)
                                label_1402b4828:
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_a60[0].o)
                                    
                                    if ((temp0_2214 & 8) != 0)
                                        goto label_1402b473e
                                    
                                    goto label_1402b4838
                                
                            label_1402b471e:
                                arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                var_6e0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_6e0[0].o, *arg5[0].q, 2)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_a60[0].o)
                                
                                if ((temp0_2214 & 8) != 0)
                                label_1402b473e:
                                    arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    int64_t rax_344 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    var_6e0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_6e0[0].o, *rax_344, 3)
                                    arg8 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
                                    
                                    if ((temp0_2214 & 0x10) == 0)
                                        goto label_1402b4848
                                    
                                    goto label_1402b4764
                                
                            label_1402b4838:
                                arg8 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
                                
                                if ((temp0_2214 & 0x10) == 0)
                                label_1402b4848:
                                    
                                    if ((temp0_2214 & 0x20) != 0)
                                        goto label_1402b4773
                                    
                                    goto label_1402b4852
                                
                            label_1402b4764:
                                var_6e0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_6e0[0].o, *arg8[0].q, 4)
                                
                                if ((temp0_2214 & 0x20) != 0)
                                label_1402b4773:
                                    int64_t rax_346 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                    var_6e0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_6e0[0].o, *rax_346, 5)
                                    
                                    if ((temp0_2214 & 0x40) == 0)
                                        goto label_1402b485c
                                    
                                    goto label_1402b4788
                                
                            label_1402b4852:
                                
                                if ((temp0_2214 & 0x40) != 0)
                                label_1402b4788:
                                    arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    var_6e0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_6e0[0].o, *arg5[0].q, 6)
                                    
                                    if (temp0_2214 s< 0)
                                    label_1402b47a1:
                                        arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        int64_t rax_348 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        var_6e0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            var_6e0[0].o, *rax_348, 7)
                                else
                                label_1402b485c:
                                    
                                    if (temp0_2214 s< 0)
                                        goto label_1402b47a1
                                
                                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(var_6e0[0].o, arg14[0].o)
                                zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(var_6e0[0])
                                arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                arg5[0].o ^= arg6[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                                zmm5[0].o ^= arg6[0].o
                                zmm5 = _mm256_and_ps(_mm256_insertf128_ps(zmm5, arg5[0].o, 1), zmm3)
                                arg7[0].o = zx.o(0)
                                arg5 = _mm256_and_ps(zmm5, arg12)
                                
                                if (_mm256_movemask_ps(arg5) != i_4)
                                    arg7 = _mm256_xor_ps(zmm5, zmm3)
                                
                                arg11 = _mm256_blendv_ps(arg11, zmm0, zmm5)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
                                arg5 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                                zmm3 = _mm256_and_ps(arg5, arg7)
                                arg13 = _mm256_and_ps(zmm3, arg12)
                                i_4 = _mm256_movemask_ps(arg13)
                            while (i_4 != 0)
                        
                        arg8 = var_8e0_1
                        zmm5[0].o = data_142d3f5b0
                        zmm4 = var_9c0.32
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    
                    arg11 = _mm256_blendv_ps(arg5, arg11, arg12)
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_6e0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(var_6e0[0])
                    var_6e0[0].o = __vpshufd_xmmdq_xmmdq_immb(var_6e0[0].o, 0x4e)
                    var_6e0[0].o = __vpmovsxdq_xmmdq_xmmq(var_6e0[0])
                    var_6e0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_6e0[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm3, var_6e0[0].o, 1)
                    
                    if ((rdx_90 & 1) != 0)
                        arg6[0].o = zx.o(*zmm1[0])
                    
                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    arg14 = var_720_1
                    arg13 = var_5a0.32
                    
                    if ((rdx_90 & 2) == 0)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_3[0].o)
                        
                        if ((rdx_90 & 4) != 0)
                            goto label_1402b5086
                        
                        goto label_1402b4f0f
                    
                    int64_t rax_395 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_395, 1)
                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_3[0].o)
                    
                    if ((rdx_90 & 4) != 0)
                    label_1402b5086:
                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm3[0].q, 2)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60[0].o)
                        
                        if ((rdx_90 & 8) == 0)
                            goto label_1402b4f1e
                        
                        goto label_1402b50a5
                    
                label_1402b4f0f:
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60[0].o)
                    
                    if ((rdx_90 & 8) == 0)
                    label_1402b4f1e:
                        zmm4 = var_9c0.32
                        zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        
                        if ((rdx_90 & 0x10) != 0)
                            goto label_1402b50d3
                        
                        goto label_1402b4f36
                    
                label_1402b50a5:
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rax_397 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_397, 3)
                    zmm4 = var_9c0.32
                    zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    
                    if ((rdx_90 & 0x10) != 0)
                    label_1402b50d3:
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0], 4)
                        
                        if ((rdx_90 & 0x20) == 0)
                            goto label_1402b4f3f
                        
                        goto label_1402b50e1
                    
                label_1402b4f36:
                    
                    if ((rdx_90 & 0x20) == 0)
                    label_1402b4f3f:
                        
                        if ((rdx_90 & 0x40) != 0)
                            goto label_1402b50f5
                        
                        goto label_1402b4f48
                    
                label_1402b50e1:
                    int64_t rax_399 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_399, 5)
                    
                    if ((rdx_90 & 0x40) == 0)
                    label_1402b4f48:
                        
                        if (temp0_2029.b s< 0)
                        label_1402b510d:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_401 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_401, 7)
                    else
                    label_1402b50f5:
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg5[0].q, 6)
                        
                        if (temp0_2029.b s< 0)
                            goto label_1402b510d
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    arg9 = _mm256_blendv_ps(zmm1, zmm0, arg12)
                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_920[0].o)
                    arg5 = var_a20
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg12)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg9 = _mm256_blendv_ps(arg9, arg5, zmm0)
                    
                    arg12[0].o = var_9a0_1
                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    
                    if ((rdx_90 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm1[0])
                    
                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                    arg10[0].o = var_900
                    
                    if ((rdx_90 & 2) == 0)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_3[0].o)
                        
                        if ((rdx_90 & 4) != 0)
                            goto label_1402b5142
                        
                        goto label_1402b5017
                    
                    int64_t rax_402 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_402, 1)
                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, var_a80_3[0].o)
                    
                    if ((rdx_90 & 4) != 0)
                    label_1402b5142:
                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm3[0].q, 2)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60[0].o)
                        
                        if ((rdx_90 & 8) == 0)
                            goto label_1402b5026
                        
                        goto label_1402b5161
                    
                label_1402b5017:
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60[0].o)
                    
                    if ((rdx_90 & 8) != 0)
                    label_1402b5161:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_404 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_404, 3)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        
                        if ((rdx_90 & 0x10) != 0)
                        label_1402b5186:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0], 4)
                            
                            if ((rdx_90 & 0x20) == 0)
                                goto label_1402b503e
                            
                            goto label_1402b5194
                    else
                    label_1402b5026:
                        zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        
                        if ((rdx_90 & 0x10) != 0)
                            goto label_1402b5186
                    
                    if ((rdx_90 & 0x20) == 0)
                    label_1402b503e:
                        zmm3[0].o = zx.o(0)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0])
                        
                        if ((rdx_90 & 0x40) != 0)
                            goto label_1402b51b1
                        
                        goto label_1402b5050
                    
                label_1402b5194:
                    int64_t rax_406 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_406, 5)
                    zmm3[0].o = zx.o(0)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0])
                    
                    if ((rdx_90 & 0x40) == 0)
                    label_1402b5050:
                        zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                        
                        if (temp0_2029.b s< 0)
                        label_1402b51cd:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_408 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_408, 7)
                    else
                    label_1402b51b1:
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0], 6)
                        zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                        
                        if (temp0_2029.b s< 0)
                            goto label_1402b51cd
                    
                    zmm1 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                
                arg5[0].o = zx.o(0)
                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                arg5[0].o = zx.o(0)
                zmm3[0].o = zx.o(0)
                
                if (arg18 != 1)
                    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                    zmm3[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                    zmm3[0].o = __vpermilps_xmmdq_memdq_immb(var_a90, 0)
                    zmm1 = _mm256_sub_ps(_mm256_insertf128_ps(zmm3, zmm3[0].o, 1), 
                        _mm256_cvtepi32_ps(zmm1))
                    zmm3 = _mm256_div_ps(zmm1, _mm256_cvtepi32_ps(zmm0))
                
                var_a80_4 = _mm256_blendv_ps(arg5, zmm3, var_960)
        
        zmm4 = _mm256_insertf128_ps(var_860_2, arg10[0].o, 1)
        zmm0 = var_880_1
        zmm3 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_8a0_1, 1)
        zmm5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
        arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        double r12_13 = zx.q(r11_14)
        float var_920_1[0x8] = zmm3
        double var_a60_1[0x4] = zmm4
        int32_t var_9c0_1[0x4] = zmm5[0].o
        
        if (r11_14 u> 5)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm1 = var_820_1
            var_7a0 = _mm256_maskstore_ps(zmm1, zmm0)
            var_780 = _mm256_maskstore_ps(zmm1, zmm0)
            var_760 = _mm256_maskstore_ps(zmm1, zmm0)
            zmm0 = data_142fc95a0
            var_740 = _mm256_maskstore_ps(zmm1, zmm0)
            arg15[0].o = var_a30_1
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg11[0].o, arg13[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
            arg6 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg10 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (r12_13)
                case 0
                    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    var_a20 = arg11
                    arg11 = var_820_1
                    arg5[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg6[0].o = zx.o(0)
                    arg5 = _mm256_blendv_ps(arg6, zmm1, zmm3)
                    zmm1[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    var_860_2[0].o = arg7[0].o
                    arg8 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                    zmm0 = _mm256_blendv_ps(arg6, zmm0, arg8)
                    int64_t r10_21 = arg5[0].q
                    void* rsi_77 = r9_5 + r10_21
                    int64_t r9_7 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    double r14_18 = zmm0[0]
                    void* rdi_78 = var_aa0 i+ r14_18
                    int64_t r15_17 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    void* rbx_70 = var_aa0 + r15_17
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t r12_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    double rdx_92 = zmm0[0]
                    zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm0 = _mm256_blendv_ps(arg6, zmm1, zmm3)
                    void* rcx_146 = var_aa0 i+ rdx_92
                    arg10 = _mm256_blendv_ps(arg6, zmm1, arg8)
                    zmm4[0].o = *(arg10[0].q + rdi_78)
                    zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    arg12 = _mm256_blendv_ps(arg6, zmm1, zmm3)
                    arg15 = arg13
                    arg13 = _mm256_blendv_ps(arg6, zmm1, arg8)
                    int32_t* rax_434 = arg13[0].q
                    zmm1 = _mm256_broadcast_sd(5.9287877500949585e-323)
                    zmm3 = _mm256_blendv_ps(arg6, zmm1, zmm3)
                    zmm1 = _mm256_blendv_ps(arg6, zmm1, arg8)
                    arg6[0].o = *(rax_434 + rdi_78)
                    zmm5[0].o = *(zmm1[0] + rdi_78)
                    void* rax_437 = var_aa0 + r12_14
                    arg8[0].o = *(zmm0[0] + rsi_77)
                    int64_t rdi_80 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_80 + rbx_70), 0x10)
                    float* rdi_81 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_81 + rbx_70), 0x10)
                    float* rdi_82 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_82 + rbx_70), 0x10)
                    float* rbx_71 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg7[0] + rcx_146), 0x20)
                    int64_t rdi_84 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg10[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_84 + rax_437), 0x30)
                    void* rdi_86 = var_aa0 + r9_7
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rbx_71 + rdi_86), 0x10)
                    zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg13 = arg15
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm4[0] + rcx_146), 0x20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm1[0] + rcx_146), 0x20)
                    arg7[0].o = *(arg12[0] i+ rsi_77)
                    int64_t rcx_148 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = *(zmm3[0].q + rsi_77)
                    float* rbx_75 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg15[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_148 + rax_437), 0x30)
                    int64_t rcx_149 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_149 + rdi_86), 0x10)
                    int64_t rcx_150 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_75 + rax_437), 0x30)
                    float* rax_438 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    double rbx_76 = zmm1[0]
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_438 + rdi_86), 0x10)
                    void* rax_440 = var_aa0 i+ rbx_76
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(zmm0[0] + rax_440), 0x20)
                    arg7[0].o = var_860_2[0].o
                    arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    arg12[0].o = var_9a0_1
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg5[0].q + rax_440), 0x20)
                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm3[0].q + rax_440), 0x20)
                    float* rax_441 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    void* rdi_91 = var_aa0 + rcx_150
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_441 + rdi_91), 0x30)
                    float* rax_442 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_442 + rdi_91), 0x30)
                    float* rax_443 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_443 + rdi_91), 0x30)
                    zmm3[0].o = *(var_aa0 + r10_21)
                    arg6[0].o = *(var_aa0 i+ r14_18)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_aa0 + r15_17), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_aa0 i+ rdx_92), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_aa0 + r12_14), 0x30)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(var_aa0 + r9_7), 0x10)
                    r9_5 = var_aa0
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r9_5 i+ rbx_76), 0x20)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r9_5 + rcx_150), 0x30)
                    zmm3 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
                    var_7a0 = _mm256_maskstore_ps(arg11, zmm3)
                    var_780 = _mm256_maskstore_ps(arg11, _mm256_insertf128_ps(zmm0, arg10[0].o, 1))
                    var_760 = _mm256_maskstore_ps(arg11, _mm256_insertf128_ps(zmm4, arg15[0].o, 1))
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                label_1402b6aa3:
                    var_740 = _mm256_maskstore_ps(arg11, zmm0)
                    arg11 = var_a20
                    arg15[0].o = var_a30_1
                case 1
                    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                    zmm3 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    arg10[0].o = arg7[0].o
                    arg8 = var_820_1
                    zmm0[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    zmm3 = _mm256_blendv_ps(arg5, zmm3, zmm0)
                    zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    arg6 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg5, zmm1, arg6)
                    double r9_8 = zmm1[0]
                    void* rax_451 = var_aa0 i+ r9_8
                    int64_t r10_22 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rdi_92 = var_aa0 + r10_22
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r11_15 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm4 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm5 = _mm256_blendv_ps(arg5, zmm4, arg6)
                    arg7[0].o = *(zmm5[0] i+ rax_451)
                    int64_t rsi_79 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    float* r14_19 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_79 + rdi_92), 0x10)
                    double r15_18 = zmm1[0]
                    zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    arg6 = _mm256_blendv_ps(arg5, zmm1, arg6)
                    double rdx_93 = zmm5[0]
                    int32_t* rbx_77 = arg6[0]
                    float* rcx_152 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm5[0].o = *(rbx_77 + rax_451)
                    arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    float* rax_452 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    float* rbx_78 = arg6[0]
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_152 + rdi_92), 0x10)
                    int64_t rcx_153 = zmm3[0].q
                    void* rdi_94 = var_aa0 i+ r15_18
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_93 i+ rdi_94), 0x20)
                    void* rdx_95 = var_aa0 + rcx_153
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_78 + rdi_94), 0x20)
                    int64_t rdi_95 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    void* rbx_80 = var_aa0 + r11_15
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14_19 + rbx_80), 0x30)
                    int64_t rsi_80 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_452 + rbx_80), 0x30)
                    int64_t rax_453 = zmm3[0].q
                    zmm3 = _mm256_blendv_ps(arg5, zmm4, zmm0)
                    zmm4[0].o = *(zmm3[0].q + rdx_95)
                    zmm0 = _mm256_blendv_ps(arg5, zmm1, zmm0)
                    zmm1[0].o = *(zmm0[0] + rdx_95)
                    void* rdx_97 = var_aa0 + rdi_95
                    float* rbx_83 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_83 + rdx_97), 0x10)
                    float* rbx_84 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_84 + rdx_97), 0x10)
                    void* rdx_99 = var_aa0 + rax_453
                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(zmm3[0].q + rdx_99), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm0[0] + rdx_99), 0x20)
                    void* rdx_101 = var_aa0 + rsi_80
                    float* rbx_87 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_87 + rdx_101), 0x30)
                    float* rbx_88 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_88 + rdx_101), 0x30)
                    zmm1[0].o = *(var_aa0 + rcx_153)
                    zmm4[0].o = *(var_aa0 i+ r9_8)
                    r9_5 = var_aa0
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + r10_22), 0x10)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 i+ r15_18), 0x20)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + r11_15), 0x30)
                    r11_14 = rbx.d
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rdi_95), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rax_453), 0x20)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rsi_80), 0x30)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                    zmm3 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                    zmm4 = _mm256_mul_ps(zmm1, zmm1)
                    zmm4 = _mm256_sub_ps(
                        _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm4), 
                            _mm256_mul_ps(zmm3, zmm3)), 
                        _mm256_mul_ps(zmm0, zmm0))
                    zmm5 = _mm256_sqrt_ps(zmm4)
                    var_7a0 = _mm256_maskstore_ps(arg8, zmm1)
                    var_780 = _mm256_maskstore_ps(arg8, zmm3)
                    zmm1 = _mm256_cmp_ps(arg5, zmm4, 1)
                    var_760 = _mm256_maskstore_ps(arg8, zmm0)
                    zmm0 = _mm256_and_ps(zmm1, zmm5)
                label_1402b6841:
                    var_740 = _mm256_maskstore_ps(arg8, zmm0)
                    arg7[0].o = arg10[0].o
                    arg15[0].o = var_a30_1
                case 2
                    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                    zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    arg10[0].o = arg7[0].o
                    arg8 = var_820_1
                    arg5[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                    arg6 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    zmm4 = _mm256_blendv_ps(arg5, zmm0, arg6)
                    zmm0[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm3 = _mm256_blendv_ps(arg5, zmm1, zmm0)
                    double r10_23 = zmm4[0]
                    int64_t r9_9 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    void* rdi_96 = var_aa0 i+ r10_23
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    int64_t r11_16 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rsi_81 = var_aa0 + r9_9
                    zmm4 = _mm256_broadcast_sd(9.8813129168249309e-324)
                    zmm5 = _mm256_blendv_ps(arg5, zmm4, arg6)
                    double rax_456 = zmm1[0]
                    double rdx_103 = zmm5[0]
                    int64_t rbx_89 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    double rcx_155 = zmm1[0]
                    zmm5[0].o = zx.o(*(rdx_103 i+ rdi_96))
                    int64_t rdx_105 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rbx_89 + rsi_81), 1)
                    zmm5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg6 = _mm256_blendv_ps(arg5, zmm5, arg6)
                    uint32_t rdi_97 = zx.d(*(arg6[0] i+ rdi_96))
                    uint16_t* rbx_91 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    arg7[0].o = zx.o(rdi_97)
                    void* rdi_99 = var_aa0 i+ rax_456
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(rbx_91 + rsi_81), 1)
                    void* rsi_82 = var_aa0 + r11_16
                    int64_t rbx_93 = zmm3[0].q
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_155 i+ rdi_99), 2)
                    arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg6[0] + rdi_99), 2)
                    void* rcx_158 = var_aa0 + rbx_93
                    int64_t rdi_100 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_105 + rsi_82), 3)
                    uint16_t* rdx_106 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(rdx_106 + rsi_82), 3)
                    void* rdx_108 = var_aa0 + rdi_100
                    zmm4 = _mm256_blendv_ps(arg5, zmm4, zmm0)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm4[0] + rcx_158), 4)
                    uint16_t* rsi_84 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_84 + rdx_108), 5)
                    zmm0 = _mm256_blendv_ps(arg5, zmm5, zmm0)
                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(zmm0[0] + rcx_158), 4)
                    uint16_t* rcx_159 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rcx_159 + rdx_108), 5)
                    int64_t rcx_160 = zmm3[0].q
                    void* rdx_110 = var_aa0 + rcx_160
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm4[0] + rdx_110), 6)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm0[0] + rdx_110), 6)
                    arg6[0].o = zx.o(*(var_aa0 i+ r10_23))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(var_aa0 + r9_9), 1)
                    r9_5 = var_aa0
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 i+ rax_456), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + r11_16), 3)
                    r11_14 = rbx.d
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + rbx_93), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + rdi_100), 5)
                    int64_t rax_457 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + rcx_160), 6)
                    void* rcx_161 = r9_5 + rax_457
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(r9_5 + rax_457), 7)
                    uint16_t* rax_458 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_458 + rcx_161), 7)
                    uint16_t* rax_459 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                    zmm4[0].o = zx.o(0)
                    zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                    arg6[0].o = data_1434424d0
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm3[0].o, 1))
                    zmm3 = data_1434424e0
                    zmm0 = _mm256_div_ps(zmm0, zmm3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rax_459 + rcx_161), 7)
                    arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg7, zmm1[0].o, 1)), zmm3)
                    arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                    zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zx.o(0))
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                    zmm3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm4[0].o, 1)), zmm3)
                    zmm4 = _mm256_mul_ps(zmm0, zmm0)
                    zmm4 = _mm256_sub_ps(
                        _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm4), 
                            _mm256_mul_ps(zmm1, zmm1)), 
                        _mm256_mul_ps(zmm3, zmm3))
                    zmm5 = _mm256_sqrt_ps(zmm4)
                    var_7a0 = _mm256_maskstore_ps(arg8, zmm0)
                    var_780 = _mm256_maskstore_ps(arg8, zmm1)
                    zmm0 = _mm256_cmp_ps(arg5, zmm4, 1)
                    var_760 = _mm256_maskstore_ps(arg8, zmm3)
                label_1402b683d:
                    zmm0 = _mm256_and_ps(zmm0, zmm5)
                    goto label_1402b6841
                case 3
                    arg15[0].o = var_a30_1
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg15[0].q)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    var_860_2[0].o = arg7[0].o
                    arg5 = arg8
                    arg8 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0 = _mm256_and_ps(arg8, arg5)
                    int64_t rax_461 = sx.q(zmm0[0].d)
                    void* rbx_94 = r9_5 + rax_461
                    zmm1[0].o = *(r9_5 + rax_461)
                    int64_t r11_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    void* r9_10 = var_aa0 + r11_17
                    int64_t r15_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    void* r10_24 = var_aa0 + r15_19
                    int64_t rdx_114 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    void* r14_20 = var_aa0 + rdx_114
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rcx_165 = sx.q(zmm0[0].d)
                    void* rdi_101 = var_aa0 + rcx_165
                    int32_t temp0_2815 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                    arg5[0].o = *(var_aa0 + rcx_165)
                    int64_t rcx_166 = sx.q(temp0_2815)
                    void* r8_3 = var_aa0 + rcx_166
                    int64_t rax_469 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(var_aa0 + rcx_166), 0x10)
                    var_a20[0] = r12_13
                    void* r12_15 = var_aa0 + rax_469
                    int64_t rsi_92 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(var_aa0 + rax_469), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_aa0 + rsi_92), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_aa0 + r11_17), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_aa0 + r15_19), 0x20)
                    arg7 = zmm3
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_aa0 + rdx_114), 0x30)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg8, data_142fc9520)
                    void* rdx_115 = var_aa0 + rsi_92
                    int32_t* rax_475 = zx.q(zmm0[0].d)
                    uint64_t r11_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    uint64_t r15_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    uint64_t rsi_93 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm1[0].o = *(rax_475 + rbx_94)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg14 = zmm4
                    zmm4[0].o = *(zx.q(zmm0[0].d) + rdi_101)
                    uint64_t rax_477 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_477 + r8_3), 0x10)
                    uint64_t rax_478 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_478 + r12_15), 0x20)
                    float* rax_479 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_479 + rdx_115), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_18 + r9_10), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_20 + r10_24), 0x20)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_93 + r14_20), 0x30)
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(arg8, data_142fc9540)
                    arg5 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                    var_8a0_1.32 = arg5
                    int32_t* rax_480 = zx.q(zmm1[0].d)
                    uint64_t r11_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t r15_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    uint64_t rsi_94 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm3[0].o = *(rax_480 + rbx_94)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg5[0].o = *(zx.q(zmm1[0].d) + rdi_101)
                    uint64_t rax_482 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_482 + r8_3), 0x10)
                    float* rax_483 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_483 + r12_15), 0x20)
                    float* rax_484 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_484 + rdx_115), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r11_19 + r9_10), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_21 + r10_24), 0x20)
                    arg12[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_94 + r14_20), 0x30)
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(arg8, data_1434423c0)
                    zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                    var_880_1 = zmm0
                    int32_t* rax_485 = zx.q(zmm1[0].d)
                    uint64_t r11_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    uint64_t r15_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    uint64_t rsi_95 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm0[0].o = *(rax_485 + rbx_94)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm3[0].o = *(zx.q(zmm1[0].d) + rdi_101)
                    uint64_t rax_487 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_487 + r8_3), 0x10)
                    float* rax_488 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_488 + r12_15), 0x20)
                    float* rax_489 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_489 + rdx_115), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_20 + r9_10), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_22 + r10_24), 0x20)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_95 + r14_20), 0x30)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg8, data_1434423e0)
                    zmm1 = _mm256_insertf128_ps(arg12, arg5[0].o, 1)
                    var_7e0.32 = zmm1
                    int32_t* rax_490 = zx.q(zmm0[0].d)
                    uint64_t r11_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    uint64_t r15_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    uint64_t rsi_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm1[0].o = *(rax_490 + rbx_94)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg5[0].o = *(zx.q(zmm0[0].d) + rdi_101)
                    uint64_t rax_492 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_492 + r8_3), 0x10)
                    float* rax_493 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_493 + r12_15), 0x20)
                    float* rax_494 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_494 + rdx_115), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_21 + r9_10), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_23 + r10_24), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_96 + r14_20), 0x30)
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(arg8, data_143442400)
                    var_900.32 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                    int32_t* rax_495 = zx.q(zmm5[0].d)
                    float* r15_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    uint64_t rcx_169 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    float* r11_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    arg12[0].o = *(rax_495 + rbx_94)
                    arg5 = arg13
                    arg13[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm3[0].o = *(zx.q(arg13[0]) + rdi_101)
                    float* rdi_102 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1))
                    float* rbx_95 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                    zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
                    zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                    arg8 = arg11
                    arg11 = var_820_1
                    arg6[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                    arg7[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                    arg7 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    zmm5 = _mm256_blendv_ps(arg6, zmm5, arg7)
                    arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg10[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                    arg7[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                    arg7 = _mm256_blendv_ps(arg6, zmm4, _mm256_insertf128_ps(arg10, arg7[0].o, 1))
                    zmm4[0].o = zx.o(*(var_aa0 i+ zmm5[0]))
                    int64_t rax_498 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(var_aa0 + rax_498), 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(var_aa0 i+ zmm5[0]), 2)
                    int64_t rax_500 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(var_aa0 + rax_500), 3)
                    zmm5[0].o = zx.o(*(var_aa0 i+ arg7[0]))
                    int64_t rax_502 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(var_aa0 + rax_502), 1)
                    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(var_aa0 i+ arg7[0]), 2)
                    int64_t rax_504 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(var_aa0 + rax_504), 3)
                    float* rax_505 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3))
                    arg10 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                    arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x15)
                    arg13[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0xa)
                    arg14[0].o = data_143442440
                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg7[0].o, 1)
                    arg7[0].o = data_143442480
                    zmm0[0].o &= arg7[0].o
                    arg7[0].o &= arg13[0].o
                    arg13 = arg5
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                    arg14 = var_720_1
                    zmm1 = _mm256_cvtepi32_ps(zmm1)
                    zmm0 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                    arg7 = data_143442460
                    zmm1 = _mm256_div_ps(zmm1, arg7)
                    zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm0), arg7)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_102 + r8_3), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_95 + r12_15), 0x20)
                    r12_13 = var_a20[0]
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_505 + rdx_115), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r15_24 + r9_10), 0x10)
                    r9_5 = var_aa0
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_169 + r10_24), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_22 + r14_20), 0x30)
                    r11_14 = rbx.d
                    arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    zmm3 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm4, zmm5[0].o, 1), 
                        data_143442420)
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(__vmulps_ymmqq_ymmqq_memqq(zmm1, var_900.32), 
                        var_8a0_1.32)
                    zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm5[0].o = data_143442490
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm3 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm4[0].o, 1)), 
                        data_1434424a0)
                    zmm0 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg10, zmm0), var_880_1)
                    arg5 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg5, zmm3), var_7e0.32)
                    arg12[0].o = var_9a0_1
                    zmm3 = _mm256_mul_ps(zmm1, zmm1)
                    zmm3 = _mm256_sub_ps(data_142fc95a0, zmm3)
                    zmm4 = _mm256_mul_ps(zmm0, zmm0)
                    zmm3 = _mm256_sub_ps(zmm3, zmm4)
                    var_7a0 = _mm256_maskstore_ps(arg11, zmm1)
                    var_780 = _mm256_maskstore_ps(arg11, zmm0)
                    zmm0 = _mm256_sub_ps(zmm3, _mm256_mul_ps(arg5, arg5))
                    var_760 = _mm256_maskstore_ps(arg11, arg5)
                    zmm1 = _mm256_cmp_ps(arg6, zmm0, 1)
                    zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                    var_740 = _mm256_maskstore_ps(arg11, zmm0)
                    arg11 = arg8
                    arg7[0].o = var_860_2[0].o
                case 4
                    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                    arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    arg10[0].o = arg7[0].o
                    arg8 = var_820_1
                    zmm0[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg5 = _mm256_blendv_ps(zmm0, arg5, zmm3)
                    zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                    int64_t r9_11 = arg5[0].q
                    int64_t r8_4 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    int64_t rdx_116 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    int64_t rbx_96 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rdi_103 = arg5[0].q
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rsi_105 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    double rax_506 = zmm1[0]
                    zmm1[0].o = zx.o(*(var_aa0 + r9_11))
                    r9_5 = var_aa0
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + r8_4), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rdi_103), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rdx_116), 3)
                    int64_t rcx_171 = arg5[0].q
                    arg5[0].o = zx.o(*(r9_5 i+ rax_506))
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rbx_96), 1)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rcx_171), 2)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rsi_105), 3)
                    zmm3 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                    arg6[0].o = data_143442440
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm4 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, zmm5[0].o, 1))
                    zmm5 = data_143442460
                    zmm4 = _mm256_div_ps(zmm4, zmm5)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                    arg7[0].o = data_143442480
                    arg5[0].o &= arg7[0].o
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm1[0].o &= arg7[0].o
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, arg5[0].o, 1)), zmm5)
                    arg5 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442420)
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm5[0].o = data_143442490
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    arg5 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm3[0].o, 1)), 
                        data_1434424a0)
                    zmm3 = _mm256_mul_ps(zmm4, zmm4)
                    zmm3 = _mm256_sub_ps(
                        _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), 
                            _mm256_mul_ps(zmm1, zmm1)), 
                        _mm256_mul_ps(arg5, arg5))
                    zmm5 = _mm256_sqrt_ps(zmm3)
                    var_7a0 = _mm256_maskstore_ps(arg8, zmm4)
                    var_780 = _mm256_maskstore_ps(arg8, zmm1)
                    zmm0 = _mm256_cmp_ps(zmm0, zmm3, 1)
                    var_760 = _mm256_maskstore_ps(arg8, arg5)
                    goto label_1402b683d
                case 5
                    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    var_a20 = arg11
                    arg11 = var_820_1
                    arg5[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg8[0].o = arg7[0].o
                    arg15[0].o = zx.o(0)
                    zmm1 = _mm256_blendv_ps(arg15, zmm1, zmm3)
                    zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                    zmm0 = _mm256_blendv_ps(arg15, zmm0, zmm3)
                    double r8_5 = zmm1[0]
                    int64_t rcx_172 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rdx_117 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_97 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    double rdi_104 = zmm1[0]
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rsi_106 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    double rax_507 = zmm0[0]
                    zmm0[0].o = zx.o(*(r9_5 i+ r8_5))
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_5 + rcx_172), 1)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_5 i+ rdi_104), 2)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_5 + rdx_117), 3)
                    double rcx_173 = zmm1[0]
                    zmm1[0].o = zx.o(*(r9_5 i+ rax_507))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rbx_97), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 i+ rcx_173), 2)
                    zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rsi_106), 3)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x15)
                    zmm5 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                    arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                    arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 5)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 5)
                    arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                    arg12 = data_1434422e0
                    arg5 = _mm256_and_ps(arg5, arg12)
                    arg10 = data_143442300
                    zmm5 = _mm256_and_ps(zmm5, arg10)
                    arg5 = _mm256_or_ps(arg5, zmm5)
                    zmm5[0].o = data_143442320
                    zmm4[0].o &= zmm5[0].o
                    arg7[0].o = data_143442330
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                    zmm1[0].o &= zmm5[0].o
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                    zmm4 = _mm256_or_ps(arg5, zmm1)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 6)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0xa)
                    zmm1 = _mm256_and_ps(zmm1, arg12)
                    arg12 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                    arg10 = _mm256_and_ps(arg12, arg10)
                    arg12[0].o = var_9a0_1
                    zmm1 = _mm256_or_ps(zmm1, arg10)
                    arg5[0].o &= zmm5[0].o
                    zmm5[0].o &= arg6[0].o
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                    zmm5 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x11)
                    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x11)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442340)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442360)
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442380)
                    zmm1 = _mm256_or_ps(zmm1, arg5)
                    zmm0 = _mm256_or_ps(zmm0, zmm5)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm5[0].o = data_1434423a0
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm0 = _mm256_or_ps(zmm0, _mm256_insertf128_ps(zmm3, arg5[0].o, 1))
                    arg5 = _mm256_mul_ps(zmm4, zmm4)
                    arg5 = _mm256_sub_ps(data_142fc95a0, arg5)
                    zmm3 = _mm256_mul_ps(zmm1, zmm1)
                    arg5 = _mm256_sub_ps(arg5, zmm3)
                    var_7a0 = _mm256_maskstore_ps(arg11, zmm4)
                    var_780 = _mm256_maskstore_ps(arg11, zmm1)
                    zmm1 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm0, zmm0))
                    var_760 = _mm256_maskstore_ps(arg11, zmm0)
                    zmm0 = _mm256_cmp_ps(arg15, zmm1, 1)
                    arg7[0].o = arg8[0].o
                    zmm1 = _mm256_sqrt_ps(zmm1)
                    zmm0 = _mm256_and_ps(zmm0, zmm1)
                    goto label_1402b6aa3
        
        zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        zmm0[0].o ^= arg5[0].o
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg9[0].o)
        arg5[0].o ^= zmm3[0].o
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        zmm0[0].o &= arg15[0].o
        arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
        arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        arg15 = var_940_3
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
            arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
            zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
            zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
            zmm5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
            double var_6c0_1[0x4]
            double var_6a0_1[0x4]
            double var_680_1[0x4]
            
            if (r11_14 u> 5)
                zmm0[0].o = zx.o(0)
                var_6c0_1 = _mm256_maskstore_ps(zmm5, zmm0)
                var_6a0_1 = _mm256_maskstore_ps(zmm5, zmm0)
                var_680_1 = _mm256_maskstore_ps(zmm5, zmm0)
                zmm0 = data_142fc95a0
            else
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, arg13[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_9c0_1)
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0])
                arg13 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                arg11 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                
                switch (r12_13)
                    case 0
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_a60_1
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_920_1[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_920_1[0].o, arg11[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        var_920_1[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(arg5, var_920_1[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg13 = _mm256_blendv_ps(arg5, zmm1, zmm3)
                        arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg5, zmm0, zmm4)
                        int64_t r8_6 = arg13[0].q
                        void* rcx_176 = r9_5 + r8_6
                        int64_t r10_25 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double r9_12 = zmm0[0]
                        arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r11_23 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rdx_118 = r9_5 i+ r9_12
                        arg7 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg14 = _mm256_blendv_ps(arg5, arg7, zmm3)
                        double rsi_107 = arg6[0]
                        arg6 = _mm256_blendv_ps(arg5, arg7, zmm4)
                        arg8[0].o = *(arg14[0] i+ rcx_176)
                        int32_t* rbx_98 = arg6[0]
                        float* rax_510 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg9[0].o = *(rbx_98 + rdx_118)
                        arg11 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg7 = _mm256_blendv_ps(arg5, arg11, zmm3)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg10[0].o = *(arg7[0] + rcx_176)
                        arg12 = _mm256_broadcast_sd(5.9287877500949585e-323)
                        zmm3 = _mm256_blendv_ps(arg5, arg12, zmm3)
                        arg15[0].o = *(zmm3[0].q + rcx_176)
                        float* rcx_177 = arg6[0]
                        arg11 = _mm256_blendv_ps(arg5, arg11, zmm4)
                        int32_t* rbx_101 = arg11[0].q
                        arg5 = _mm256_blendv_ps(arg5, arg12, zmm4)
                        zmm4[0].o = *(rbx_101 + rdx_118)
                        zmm0[0].o = *(arg5[0].q + rdx_118)
                        float* rdx_119 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rbx_103 = r9_5 + r10_25
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_510 + rbx_103), 0x10)
                        float* rax_511 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_511 + rbx_103), 0x10)
                        float* rax_512 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_512 + rbx_103), 0x10)
                        int64_t rax_513 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                        void* rbx_104 = r9_5 i+ rsi_107
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_177 + rbx_104), 0x20)
                        zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(zmm1[0] + rbx_104), 0x20)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(arg5[0].q + rbx_104), 0x20)
                        void* rcx_180 = r9_5 + rax_513
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        void* rbx_105 = r9_5 + r11_23
                        arg11[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_119 + rbx_105), 0x30)
                        float* rdx_120 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdx_120 + rcx_180), 0x10)
                        float* rdx_121 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_121 + rbx_105), 0x30)
                        float* rdx_122 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, 
                            *(rdx_122 + rcx_180), 0x10)
                        float* rdx_123 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg9[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdx_123 + rbx_105), 0x30)
                        float* rdx_124 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, 
                            *(rdx_124 + rcx_180), 0x10)
                        arg15 = var_940_3
                        double rcx_181 = zmm0[0]
                        void* rdx_125 = r9_5 i+ rcx_181
                        arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        arg14 = var_720_1
                        arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(arg5[0].q + rdx_125), 0x20)
                        arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg7[0] + rdx_125), 0x20)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(zmm3[0].q + rdx_125), 0x20)
                        arg6[0].o = *(r9_5 + r8_6)
                        zmm4[0].o = *(r9_5 i+ r9_12)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + r10_25), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 i+ rsi_107), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + r11_23), 0x30)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 + rax_513), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 i+ rcx_181), 0x20)
                        int64_t rax_514 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 + rax_514), 0x30)
                        void* rax_515 = r9_5 + rax_514
                        float* rcx_182 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, 
                            *(rcx_182 + rax_515), 0x30)
                        float* rcx_183 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(rcx_183 + rax_515), 0x30)
                        arg12[0].o = var_9a0_1
                        float* rcx_184 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_184 + rax_515), 0x30)
                        var_6c0_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(zmm0, zmm4[0].o, 1))
                        var_6a0_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(arg5, arg11[0].o, 1))
                        var_680_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(arg6, arg8[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm1, arg9[0].o, 1)
                    case 1
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_a60_1
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                        arg6 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(var_920_1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_920_1[0].o, arg11[0].o)
                        arg5 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        arg10 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        arg5 = _mm256_blendv_ps(arg8, arg5, arg10)
                        zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        arg7 = _mm256_blendv_ps(arg8, arg6, zmm3)
                        int64_t r10_26 = arg5[0].q
                        void* rsi_108 = r9_5 + r10_26
                        int64_t r8_7 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        void* r9_13 = r9_5 + r8_7
                        double r11_24 = arg7[0]
                        void* rax_516 = r9_5 i+ r11_24
                        int64_t r14_21 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        void* rdx_126 = r9_5 + r14_21
                        zmm4 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg6 = _mm256_blendv_ps(arg8, zmm4, zmm3)
                        zmm1[0].o = *(arg6[0] + rax_516)
                        float* rbx_110 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_110 + rdx_126), 0x10)
                        arg9 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm3 = _mm256_blendv_ps(arg8, arg9, zmm3)
                        zmm0[0].o = *(zmm3[0].q + rax_516)
                        float* rax_517 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_517 + rdx_126), 0x10)
                        double rax_518 = arg7[0]
                        void* rdx_127 = r9_5 i+ rax_518
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg6[0] + rdx_127), 0x20)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(zmm3[0].q + rdx_127), 0x20)
                        int64_t rdx_128 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4 = _mm256_blendv_ps(arg8, zmm4, arg10)
                        arg7[0].o = *(zmm4[0] + rsi_108)
                        arg9 = _mm256_blendv_ps(arg8, arg9, arg10)
                        zmm0[0].o = *(arg9[0] + rsi_108)
                        void* rbx_116 = r9_5 + rdx_128
                        float* rsi_109 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg10[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_109 + rbx_116), 0x30)
                        float* rsi_110 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_110 + r9_13), 0x10)
                        float* rsi_111 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                            *(rsi_111 + rbx_116), 0x30)
                        float* rbx_117 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        int64_t rsi_112 = arg5[0].q
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_117 + r9_13), 0x10)
                        void* rbx_118 = r9_5 + rsi_112
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm4[0] + rbx_118), 0x20)
                        arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg7[0] + rbx_118), 0x20)
                        zmm1[0].o = *(r9_5 + r10_26)
                        zmm3[0].o = *(r9_5 i+ r11_24)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r9_5 + r14_21), 0x10)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r9_5 i+ rax_518), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r9_5 + rdx_128), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + r8_7), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rsi_112), 0x20)
                        int64_t rax_519 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rax_519), 0x30)
                        void* rax_520 = r9_5 + rax_519
                        float* rcx_186 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_186 + rax_520), 0x30)
                        float* rcx_187 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_187 + rax_520), 0x30)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        arg5 = _mm256_insertf128_ps(arg5, arg10[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg11[0].o, 1)
                        zmm3 = _mm256_mul_ps(zmm1, zmm1)
                        zmm3 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), 
                                _mm256_mul_ps(arg5, arg5)), 
                            _mm256_mul_ps(zmm0, zmm0))
                        zmm4 = _mm256_sqrt_ps(zmm3)
                        var_6c0_1 = _mm256_maskstore_ps(zmm5, zmm1)
                        var_6a0_1 = _mm256_maskstore_ps(zmm5, arg5)
                        zmm1 = _mm256_cmp_ps(arg8, zmm3, 1)
                        var_680_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        zmm0 = _mm256_and_ps(zmm1, zmm4)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_a60_1
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                        arg5 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(var_920_1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_920_1[0].o, arg11[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        var_920_1[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm1, var_920_1[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        arg6 = _mm256_blendv_ps(arg8, zmm0, zmm3)
                        zmm0[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg8, arg5, zmm0)
                        double r8_8 = arg6[0]
                        int64_t r9_14 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rdi_108 = r9_5 i+ r8_8
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        int64_t r10_27 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        void* rcx_188 = r9_5 + r9_14
                        zmm4 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg7 = _mm256_blendv_ps(arg8, zmm4, zmm3)
                        double r14_22 = arg6[0]
                        double rdx_129 = arg7[0]
                        uint16_t* rbx_119 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        uint16_t* r11_25 = arg6[0]
                        arg7[0].o = zx.o(*(rdx_129 i+ rdi_108))
                        uint16_t* rdx_131 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(rbx_119 + rcx_188), 1)
                        arg7 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm3 = _mm256_blendv_ps(arg8, arg7, zmm3)
                        uint32_t rbx_121 = zx.d(*(zmm3[0].q + rdi_108))
                        uint16_t* rdi_109 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm1[0].o = zx.o(rbx_121)
                        void* rbx_122 = r9_5 i+ r14_22
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_109 + rcx_188), 1)
                        void* rdi_110 = r9_5 + r10_27
                        int64_t rax_521 = arg5[0].q
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r11_25 + rbx_122), 2)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm3[0].q + rbx_122), 2)
                        void* rcx_190 = r9_5 + rax_521
                        int64_t rbx_123 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(rdx_131 + rdi_110), 3)
                        uint16_t* rdx_132 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_132 + rdi_110), 3)
                        void* rdx_133 = r9_5 + rbx_123
                        zmm3 = _mm256_blendv_ps(arg8, zmm4, zmm0)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(zmm3[0].q + rcx_190), 4)
                        uint16_t* rdi_112 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rdi_112 + rdx_133), 5)
                        zmm0 = _mm256_blendv_ps(arg8, arg7, zmm0)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm0[0] + rcx_190), 4)
                        uint16_t* rcx_191 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_191 + rdx_133), 5)
                        int64_t rcx_192 = arg5[0].q
                        void* rdx_134 = r9_5 + rcx_192
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(zmm3[0].q + rdx_134), 6)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm0[0] + rdx_134), 6)
                        arg6[0].o = zx.o(*(r9_5 i+ r8_8))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + r9_14), 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 i+ r14_22), 2)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + r10_27), 3)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + rax_521), 4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + rbx_123), 5)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + rcx_192), 6)
                        int64_t rax_522 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9_5 + rax_522), 7)
                        void* rax_523 = r9_5 + rax_522
                        uint16_t* rcx_193 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rcx_193 + rax_523), 7)
                        uint16_t* rcx_194 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        zmm4[0].o = zx.o(0)
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                        arg6[0].o = data_1434424d0
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, arg5[0].o, 1))
                        arg5 = data_1434424e0
                        zmm0 = _mm256_div_ps(zmm0, arg5)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_194 + rax_523), 7)
                        arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                        zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        zmm3 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg7, zmm3[0].o, 1)), arg5)
                        arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, zmm1[0].o, 1)), arg5)
                        arg5 = _mm256_mul_ps(zmm0, zmm0)
                        arg5 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, arg5), 
                                _mm256_mul_ps(zmm3, zmm3)), 
                            _mm256_mul_ps(zmm1, zmm1))
                        zmm4 = _mm256_sqrt_ps(arg5)
                        var_6c0_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        var_6a0_1 = _mm256_maskstore_ps(zmm5, zmm3)
                        zmm0 = _mm256_cmp_ps(arg8, arg5, 1)
                        var_680_1 = _mm256_maskstore_ps(zmm5, zmm1)
                        zmm0 = _mm256_and_ps(zmm0, zmm4)
                    case 3
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg5, var_8e0_1)
                        int64_t rax_525 = sx.q(zmm0[0].d)
                        var_9c0_1[0].q = rax_525
                        var_860_2[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                        var_8e0_1[0] = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                        var_a20[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                        void* rdi_116 = r9_5 + rax_525
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_527 = sx.q(zmm0[0].d)
                        var_8a0_1[0] = rax_527
                        var_aa0.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                        var_a30_1.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                        var_880_1[0] = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                        arg9 = __vandps_ymmqq_ymmqq_memqq(arg5, data_142fc9520)
                        void* rdx_136 = r9_5 + rax_527
                        uint64_t rax_528 = zx.q(arg9[0].d)
                        var_820_1[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                        arg15[0].o = *(rax_528 + rdi_116)
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg5, data_142fc9540)
                        zmm0[0].o = *(zx.q(arg10[0]) + rdi_116)
                        int64_t var_8b0
                        var_8b0.o = zmm0[0].o
                        arg12 = __vandps_ymmqq_ymmqq_memqq(arg5, data_1434423c0)
                        zmm0[0].o = *(zx.q(arg12[0].d) + rdi_116)
                        var_7e0.o = zmm0[0].o
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg5, data_1434423e0)
                        zmm1[0].o = *(zx.q(zmm0[0].d) + rdi_116)
                        var_5a0.o = zmm1[0].o
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442400)
                        arg14[0].o = *(zx.q(arg5[0]) + rdi_116)
                        var_960[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                        zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg8[0].o = *(zx.q(zmm1[0].d) + rdx_136)
                        var_900.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                        uint64_t r15_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        uint64_t rax_536 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        var_8c0[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        var_480[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        var_840[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        arg9[0].o = *(zx.q(zmm1[0].d) + rdx_136)
                        var_a90[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        uint64_t rdi_118 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        var_700[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        var_580[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        arg10[0].o = *(zx.q(arg7[0].d) + rdx_136)
                        float* rax_543 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                        var_800[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                        var_6e0[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                        uint64_t rsi_115 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                        uint64_t rbx_124 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                        var_970[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                        arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int32_t* rax_547 = zx.q(arg7[0].d)
                        float* r10_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                        uint64_t r11_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                        float* r14_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                        arg12[0].o = *(rax_547 + rdx_136)
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        uint64_t rcx_196 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        uint64_t rdx_137 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        float* r8_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = *(zx.q(zmm1[0].d) + rdx_136)
                        int64_t r12_17 = sx.q(var_aa0.d)
                        void* rax_549 = r9_5 + r12_17
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r15_25 + rax_549), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_118 + rax_549), 0x10)
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, 
                            *(rsi_115 + rax_549), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r10_28 + rax_549), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_196 + rax_549), 0x10)
                        int64_t r15_26 = sx.q(var_a30_1.d)
                        void* rax_550 = r9_5 + r15_26
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_536 + rax_550), 0x20)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(var_700[0].q + rax_550), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_124 + rax_550), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_26 + rax_550), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_137 + rax_550), 0x20)
                        int64_t rsi_116 = sx.q(var_880_1[0])
                        void* rax_551 = r9_5 + rsi_116
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                            *(var_8c0[0] + rax_551), 0x30)
                        var_880_1[0].o = arg7[0].o
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(var_580[0].q + rax_551), 0x30)
                        double var_a30_2[0x2] = zmm4[0].o
                        arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(var_970[0] + rax_551), 0x30)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14_23 + rax_551), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_9 + rax_551), 0x30)
                        var_aa0.o = zmm1[0].o
                        int64_t rax_552 = sx.q(var_860_2[0].d)
                        void* rcx_202 = r9_5 + rax_552
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, 
                            *(var_820_1[0] i+ rcx_202), 0x10)
                        zmm1[0].o = var_8b0.o
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(var_480[0] i+ rcx_202), 0x10)
                        zmm1[0].o = var_7e0.o
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_543 + rcx_202), 0x10)
                        float* rdx_141 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o = var_5a0.o
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_141 + rcx_202), 0x10)
                        float* rdx_142 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                            *(rdx_142 + rcx_202), 0x10)
                        int64_t rcx_203 = sx.q(var_8e0_1[0])
                        void* rdx_143 = r9_5 + rcx_203
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(var_960[0] i+ rdx_143), 0x20)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(var_840[0] i+ rdx_143), 0x20)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(var_800[0].q + rdx_143), 0x20)
                        float* rbx_128 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        arg15[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_128 + rdx_143), 0x20)
                        float* rbx_129 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                            *(rbx_129 + rdx_143), 0x20)
                        int64_t rdx_144 = sx.q(var_a20[0].d)
                        void* rbx_130 = r9_5 + rdx_144
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(var_900.q + rbx_130), 0x30)
                        arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(var_a90[0].q + rbx_130), 0x30)
                        arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(var_6e0[0] + rbx_130), 0x30)
                        float* rdi_122 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        arg15[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, 
                            *(rdi_122 + rbx_130), 0x30)
                        float* rdi_123 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                            *(rdi_123 + rbx_130), 0x30)
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm3 = var_a60_1
                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = *(r9_5 + var_9c0_1[0].q)
                        arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
                        arg13 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm4 = var_920_1
                        zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg11[0].o = zx.o(0)
                        zmm3 = _mm256_blendv_ps(arg11, zmm3, arg6)
                        arg6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                        arg6[0].o = *(r9_5 + var_8a0_1[0])
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 + r12_17), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 + r15_26), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_5 + rsi_116), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rax_552), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rcx_203), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rdx_144), 0x30)
                        zmm0 = _mm256_blendv_ps(arg11, arg13, zmm0)
                        zmm4[0].o = zx.o(*(r9_5 + zmm3[0].q))
                        int64_t rax_554 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + rax_554), 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm4[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + zmm3[0].q), 2)
                        int64_t rax_556 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + rax_556), 3)
                        zmm4[0].o = zx.o(*(r9_5 i+ zmm0[0]))
                        int64_t rax_558 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + rax_558), 1)
                        zmm4[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 i+ zmm0[0]), 2)
                        int64_t rax_560 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_5 + rax_560), 3)
                        zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                        arg14 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg7, var_880_1[0].o, 1)
                        arg13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_a30_2, 1)
                        arg7 = _mm256_insertf128_ps(arg9, arg10[0].o, 1)
                        arg8 = _mm256_insertf128_ps(arg15, arg12[0].o, 1)
                        arg12[0].o = var_9a0_1
                        arg15 = var_940_3
                        arg10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_aa0.o, 1)
                        arg9 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x15)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0xa)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        arg9 = __vandps_ymmqq_ymmqq_memqq(arg9, data_143442420)
                        zmm4[0].o = data_143442440
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        arg5 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, arg5[0].o, 1))
                        arg6 = data_143442460
                        arg5 = _mm256_mul_ps(arg7, _mm256_div_ps(arg5, arg6))
                        zmm1 = _mm256_add_ps(zmm1, arg5)
                        arg5[0].o = data_143442480
                        zmm0[0].o &= arg5[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        arg5[0].o &= zmm3[0].o
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        zmm0 = _mm256_add_ps(arg14, 
                            _mm256_mul_ps(arg8, 
                                _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1)), 
                                    arg6)))
                        arg14 = var_720_1
                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm3[0].o = data_143442490
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                        arg5 = _mm256_add_ps(arg13, 
                            _mm256_mul_ps(arg10, 
                                __vdivps_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, arg5[0].o, 1)), 
                                    data_1434424a0)))
                        zmm3 = _mm256_mul_ps(zmm1, zmm1)
                        zmm3 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm3), 
                                _mm256_mul_ps(zmm0, zmm0)), 
                            _mm256_mul_ps(arg5, arg5))
                        zmm4 = _mm256_sqrt_ps(zmm3)
                        var_6c0_1 = _mm256_maskstore_ps(zmm5, zmm1)
                        var_6a0_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        zmm0 = _mm256_cmp_ps(arg11, zmm3, 1)
                        var_680_1 = _mm256_maskstore_ps(zmm5, arg5)
                        zmm0 = _mm256_and_ps(zmm0, zmm4)
                    case 4
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_a60_1
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_920_1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_920_1[0].o, arg11[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        var_920_1[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm0, var_920_1[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        arg5 = _mm256_blendv_ps(arg8, arg5, zmm3)
                        zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        zmm1 =
                            _mm256_blendv_ps(arg8, zmm1, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                        int64_t r8_10 = arg5[0].q
                        int64_t rcx_204 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rdx_145 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rbx_133 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rdi_124 = arg5[0].q
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rsi_117 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        double rax_561 = zmm1[0]
                        zmm1[0].o = zx.o(*(r9_5 + r8_10))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rcx_204), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rdi_124), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rdx_145), 3)
                        int64_t rcx_205 = arg5[0].q
                        arg5[0].o = zx.o(*(r9_5 i+ rax_561))
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rbx_133), 1)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rcx_205), 2)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rsi_117), 3)
                        zmm3 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                        arg7[0].o = data_143442440
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                        zmm4 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, arg6[0].o, 1))
                        arg6 = data_143442460
                        zmm4 = _mm256_div_ps(zmm4, arg6)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                        zmm0[0].o = data_143442480
                        arg5[0].o &= zmm0[0].o
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, arg5[0].o, 1)), arg6)
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442420)
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm3[0].o = data_143442490
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                        zmm1 = __vdivps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, arg5[0].o, 1)), 
                            data_1434424a0)
                        arg5 = _mm256_mul_ps(zmm4, zmm4)
                        arg5 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, arg5), 
                                _mm256_mul_ps(zmm0, zmm0)), 
                            _mm256_mul_ps(zmm1, zmm1))
                        zmm3 = _mm256_sqrt_ps(arg5)
                        var_6c0_1 = _mm256_maskstore_ps(zmm5, zmm4)
                        var_6a0_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        zmm0 = _mm256_cmp_ps(arg8, arg5, 1)
                        var_680_1 = _mm256_maskstore_ps(zmm5, zmm1)
                        zmm0 = _mm256_and_ps(zmm0, zmm3)
                    case 5
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_a60_1
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_920_1[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_920_1[0].o, arg11[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        var_920_1[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm1, var_920_1[0].o, 1)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        arg5 = _mm256_blendv_ps(arg9, arg5, zmm3)
                        zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg9, zmm0, zmm3)
                        int64_t r8_11 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rcx_206 = arg5[0].q
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rdx_146 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rbx_134 = arg5[0].q
                        double rdi_125 = zmm0[0]
                        int64_t rsi_118 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_562 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg5[0].o = zx.o(*(r9_5 + rcx_206))
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + r8_11), 1)
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rbx_134), 2)
                        double rcx_207 = zmm0[0]
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rdx_146), 3)
                        arg5[0].o = zx.o(*(r9_5 i+ rdi_125))
                        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rsi_118), 1)
                        arg5[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 i+ rcx_207), 2)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_5 + rax_562), 3)
                        arg12 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x15)
                        arg7 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
                        arg8[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        arg14[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0xa)
                        arg10 = _mm256_insertf128_ps(arg8, arg14[0].o, 1)
                        arg11[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 5)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 5)
                        arg5 = _mm256_insertf128_ps(arg11, arg5[0].o, 1)
                        arg11 = data_1434422e0
                        arg5 = _mm256_and_ps(arg5, arg11)
                        arg13 = data_143442300
                        arg7 = _mm256_and_ps(arg7, arg13)
                        arg5 = _mm256_or_ps(arg5, arg7)
                        arg7[0].o = data_143442320
                        arg6[0].o &= arg7[0].o
                        zmm1[0].o = data_143442330
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        zmm4[0].o &= arg7[0].o
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        zmm4 = _mm256_or_ps(arg5, _mm256_insertf128_ps(zmm4, arg6[0].o, 1))
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
                        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 6)
                        arg5 = _mm256_and_ps(_mm256_insertf128_ps(arg5, arg6[0].o, 1), arg11)
                        arg6 = _mm256_and_ps(arg10, arg13)
                        arg5 = _mm256_or_ps(arg5, arg6)
                        arg6[0].o = arg14[0].o & arg7[0].o
                        arg14 = var_720_1
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        arg7[0].o &= arg8[0].o
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                        arg6 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442340)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x11)
                        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x11)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, zmm3[0].o, 1), 
                            data_143442360)
                        zmm1 = _mm256_or_ps(arg5, zmm1)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442380)
                        arg12[0].o = var_9a0_1
                        zmm0 = _mm256_or_ps(zmm0, arg5)
                        arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm3[0].o = data_1434423a0
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                        zmm0 = _mm256_or_ps(zmm0, _mm256_insertf128_ps(zmm3, arg5[0].o, 1))
                        arg5 = _mm256_mul_ps(zmm4, zmm4)
                        arg5 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, arg5), 
                                _mm256_mul_ps(zmm1, zmm1)), 
                            _mm256_mul_ps(zmm0, zmm0))
                        zmm3 = _mm256_sqrt_ps(arg5)
                        var_6c0_1 = _mm256_maskstore_ps(zmm5, zmm4)
                        var_6a0_1 = _mm256_maskstore_ps(zmm5, zmm1)
                        zmm1 = _mm256_cmp_ps(arg9, arg5, 1)
                        var_680_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        zmm0 = _mm256_and_ps(zmm1, zmm3)
            
            int32_t var_660_1[0x8] = _mm256_maskstore_ps(zmm5, zmm0)
            arg13 = var_a80_4
            arg9 = _mm256_add_ps(
                _mm256_add_ps(_mm256_mul_ps(var_7a0, var_6c0_1), 
                    _mm256_mul_ps(var_780, var_6a0_1)), 
                _mm256_mul_ps(var_760, var_680_1))
            arg10 = _mm256_mul_ps(var_740, var_660_1)
            arg9 = _mm256_add_ps(arg9, arg10)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            arg9 = _mm256_cmp_ps(arg10, arg9, 2)
            zmm4 = _mm256_mul_ps(arg13, var_6c0_1)
            arg6 = _mm256_mul_ps(arg13, var_6a0_1)
            arg7 = _mm256_mul_ps(arg13, var_680_1)
            arg8 = _mm256_mul_ps(arg13, var_660_1)
            arg10 = data_142fc95a0
            arg11 = data_143442520
            arg9 = _mm256_blendv_ps(arg11, arg10, arg9)
            arg10 = _mm256_sub_ps(arg10, arg13)
            arg9 = _mm256_mul_ps(arg10, arg9)
            zmm0 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg9, var_7a0))
            zmm1 = _mm256_add_ps(arg6, _mm256_mul_ps(arg9, var_780))
            arg5 = _mm256_add_ps(arg7, _mm256_mul_ps(arg9, var_760))
            zmm3 = _mm256_add_ps(arg8, _mm256_mul_ps(arg9, var_740))
            double var_280_1[0x4] = zmm0
            double var_260_1[0x4] = zmm1
            float var_240_1[0x8] = arg5
            float var_220_1[0x8] = zmm3
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            zmm0 = _mm256_add_ps(_mm256_add_ps(zmm0, _mm256_mul_ps(arg5, arg5)), 
                _mm256_add_ps(zmm1, _mm256_mul_ps(zmm3, zmm3)))
            zmm1 = data_142fc9340
            arg5 = _mm256_cmp_ps(zmm1, zmm0, 6)
            zmm1 = _mm256_cmp_ps(zmm1, zmm0, 2)
            zmm3 = data_142fc94a0
            zmm4 = _mm256_mul_ps(zmm0, zmm3)
            double var_180_1[0x4] = zmm4
            zmm0 = _mm256_rsqrt_ps(zmm0)
            double var_160_1[0x4] = zmm4
            double var_140_1[0x4] = zmm4
            zmm0 = _mm256_add_ps(zmm0, 
                _mm256_mul_ps(_mm256_sub_ps(zmm3, _mm256_mul_ps(zmm4, _mm256_mul_ps(zmm0, zmm0))), 
                    zmm0))
            zmm0 = _mm256_add_ps(zmm0, 
                _mm256_mul_ps(zmm0, 
                    _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm4, _mm256_mul_ps(zmm0, zmm0)))))
            zmm3 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_280_1)
            arg6 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_260_1)
            arg7 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_240_1)
            zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_220_1)
            double var_120_1[0x4] = zmm4
            zmm3 = _mm256_and_ps(zmm3, zmm1)
            arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_142fc95a0)
            zmm4 = _mm256_and_ps(arg6, zmm1)
            var_7a0 = _mm256_maskstore_ps(zmm5, zmm3)
            zmm3 = _mm256_and_ps(arg7, zmm1)
            var_780 = _mm256_maskstore_ps(zmm5, zmm4)
            zmm0 = _mm256_and_ps(zmm0, zmm1)
            var_760 = _mm256_maskstore_ps(zmm5, zmm3)
            var_740 = _mm256_maskstore_ps(zmm5, _mm256_or_ps(zmm0, arg5))
    
    zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_460_1, var_7c0_1, 1)
    zmm1[0].o = var_7a0[0].o
    arg8[0].o = var_7a0[2].o
    zmm3[0].o = var_780[0].o
    arg9[0].o = var_780[2].o
    zmm5[0].o = var_760[0].o
    arg6[0].o = var_760[4].o
    arg7[0].o = var_740[0].o
    arg5[0].o = var_740[4].o
    zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
    zmm5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
    arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = arg7[0] | zmm4[0] << 0x40
    int128_t var_420 = zmm3[0].o
    zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
    int128_t var_410_1 = zmm3[0].o
    zmm3[0].o = zmm1[0] | zmm5[0] << 0x40
    int128_t var_400_1 = zmm3[0].o
    zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    int128_t var_3f0_1 = zmm1[0].o
    zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
    arg5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
    zmm3[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
    zmm4[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
    zmm5[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    int128_t var_3e0_1 = zmm5[0].o
    zmm1[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    int128_t var_3d0_1 = zmm1[0].o
    zmm1[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
    int128_t var_3c0_1 = zmm1[0].o
    zmm1[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
    int128_t var_3b0_1 = zmm1[0].o
    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg15[0].o)
    zmm1 = _mm256_insertf128_ps(zmm1, arg12[0].o, 1)
    i_5 = zx.q(_mm256_movemask_ps(zmm1))
    
    do
        uint64_t rcx_208
        uint64_t rflags_2
        
        if (i_5 == 0)
            rcx_208 = 0x40
        else
            rcx_208, rflags_2 = _bit_scan_forward(i_5)
        double var_2c0[0x4] = zmm0
        zmm1[0].o = (&var_420)[rcx_208]
        r13[sx.q(*(&var_2c0 + ((zx.q(rcx_208.d) & 7) << 2))) * 3] = zmm1[0].o
        i_5 &= rol.q(-2, rcx_208.b)
    while (i_5 != 0)

arg6[0].o = var_e8
arg7[0].o = var_d8
arg8[0].o = var_c8
arg9[0].o = var_b8
arg10[0].o = var_a8
arg11[0].o = var_98
arg12[0].o = var_88
arg13[0].o = var_78
arg14[0].o = var_68
arg15[0].o = var_58
_mm256_zeroupper()
return i_5
