// 函数: sub_140099190
// 地址: 0x140099190
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
float zmm2[0x8]
zmm2[0].o = arg16
int32_t rsi_4 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
float var_3c0[0x8] = arg5
float var_3e0[0x8] = arg5
float var_400[0x8] = arg5
int32_t* result
double* rdi_1
double zmm1[0x4]
float zmm3[0x8]
float zmm4[0x8]
double var_420[0x4]
float var_3a0[0x8]
int32_t rbx
float zmm5[0x8]

if (rsi_4 s<= 0)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    var_420 = arg5
    rbx = 0
    rdi_1 = arg18
    result = arg17
    
    if (0 s< arg19)
    label_140099599:
        arg5[0].o = zx.o(rbx)
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, data_142e11d00)
        arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, data_142fc9500)
        zmm2[0].o = zx.o(arg19)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg10[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        arg9[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        arg11 = _mm256_insertf128_ps(arg9, arg10[0].o, 1)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
        zmm5 = _mm256_and_ps(arg11, arg5)
        int64_t r14_1 = sx.q(zmm5[0])
        void* rdi_2 = arg4 + (r14_1 << 2)
        int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
        void* r12_1 = arg4 + (r15_1 << 2)
        arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        int64_t r13_1 = sx.q(arg6[0])
        void* r10_1 = arg4 + (r13_1 << 2)
        int32_t temp0_126 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
        var_3a0[0].q = arg2
        int64_t rdx = sx.q(temp0_126)
        void* rsi_6 = arg4 + (rdx << 2)
        arg7 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9520)
        zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        arg5[0].o = *(zx.q(zmm1[0].d) + r10_1)
        arg8 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9540)
        zmm3[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm4[0].o = *(zx.q(zmm3[0]) + r10_1)
        int32_t temp0_131 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
        float* rcx = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx + rsi_6), 0x10)
        float* rcx_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_1 + rsi_6), 0x10)
        int64_t rax_6 = sx.q(temp0_131)
        void* rcx_2 = arg4 + (rax_6 << 2)
        uint64_t rsi_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_7 + rcx_2), 0x20)
        uint64_t rsi_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_8 + rcx_2), 0x20)
        int64_t rcx_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        arg6[0].o = *(zx.q(arg7[0].d) + rdi_2)
        zmm2[0].o = *(zx.q(arg8[0]) + rdi_2)
        void* rsi_11 = arg4 + (rcx_4 << 2)
        float* rdi_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + rsi_11), 0x30)
        float* rdi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_4 + rsi_11), 0x30)
        int32_t temp0_145 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
        float* rsi_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_12 + r12_1), 0x10)
        uint64_t rsi_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_13 + r12_1), 0x10)
        int64_t rdi_6 = sx.q(temp0_145)
        void* rsi_14 = arg4 + (rdi_6 << 2)
        uint64_t rbx_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_4 + rsi_14), 0x20)
        uint64_t rbx_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_5 + rsi_14), 0x20)
        zmm4[0].o = *(arg4 + (r14_1 << 2))
        arg6[0].o = *(arg4 + (r13_1 << 2))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rdx << 2)), 0x10)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rax_6 << 2)), 0x20)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rcx_4 << 2)), 0x30)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (r15_1 << 2)), 0x10)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rdi_6 << 2)), 0x20)
        int64_t rax_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rax_8 << 2)), 0x30)
        void* rax_9 = arg4 + (rax_8 << 2)
        uint64_t rcx_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_5 + rax_9), 0x30)
        float* rcx_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_6 + rax_9), 0x30)
        zmm4 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
        arg5 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        float var_280_1[0x8] = zmm4
        double var_260_1[0x4] = arg5
        float var_240_1[0x8] = zmm2
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        zmm1 = _mm256_broadcast_ss(arg3[3])
        double var_200_2[0x4] = zmm1
        double var_1e0_2[0x4] = zmm1
        double var_1c0_2[0x4] = zmm1
        double var_1a0_2[0x4] = zmm1
        zmm3 = _mm256_broadcast_ss(arg3[1])
        arg6 = _mm256_mul_ps(zmm2, zmm3)
        arg7 = _mm256_broadcast_ss(arg3[2])
        arg8 = _mm256_mul_ps(zmm4, arg7)
        arg12 = _mm256_broadcast_ss(*arg3)
        arg7 = _mm256_mul_ps(arg5, arg7)
        arg5 = _mm256_mul_ps(arg5, arg12)
        arg6 = _mm256_sub_ps(arg6, arg7)
        zmm2 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm2, arg12))
        arg5 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm4, zmm3))
        zmm3 = _mm256_add_ps(arg6, arg6)
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        arg5 = _mm256_add_ps(arg5, arg5)
        zmm4 = _mm256_broadcast_ss(arg3[1])
        arg6 = _mm256_mul_ps(arg5, zmm4)
        arg7 = _mm256_broadcast_ss(arg3[2])
        arg8 = _mm256_mul_ps(zmm3, arg7)
        arg12 = _mm256_broadcast_ss(*arg3)
        arg6 = _mm256_sub_ps(arg6, _mm256_mul_ps(zmm2, arg7))
        arg7 = _mm256_sub_ps(arg8, _mm256_mul_ps(arg5, arg12))
        arg8 = _mm256_mul_ps(zmm1, zmm5)
        arg8 = _mm256_sub_ps(arg8, arg8)
        arg8 = _mm256_add_ps(arg8, arg8)
        float var_380_2[0x8] = zmm3
        float var_360_2[0x8] = zmm2
        double var_340_2[0x4] = arg5
        int32_t var_320_2[0x8] = arg8
        arg12 = _mm256_mul_ps(zmm2, arg12)
        zmm2 = _mm256_mul_ps(zmm1, zmm2)
        arg5 = _mm256_mul_ps(zmm1, arg5)
        arg8 = _mm256_mul_ps(zmm1, arg8)
        zmm1 = _mm256_mul_ps(zmm1, zmm3)
        zmm3 = _mm256_sub_ps(arg12, _mm256_mul_ps(zmm3, zmm4))
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_280_1)
        double var_180_1[0x4] = zmm1
        zmm1 = _mm256_add_ps(zmm1, arg6)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_260_1)
        float var_160_1[0x8] = zmm2
        zmm2 = _mm256_add_ps(zmm2, arg7)
        zmm1 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg3[4]))
        arg6 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg3[5]))
        zmm2 = _mm256_broadcast_ss(arg3[6])
        arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_240_1)
        arg7 = _mm256_add_ps(_mm256_add_ps(arg5, zmm3), zmm2)
        float* rax_10 = var_3a0[0].q
        zmm2 = _mm256_sub_ps(zmm1, _mm256_broadcast_ss(*rax_10))
        zmm2 = _mm256_add_ps(_mm256_mul_ps(zmm2, zmm2), zmm5)
        zmm3 = _mm256_sub_ps(arg6, _mm256_broadcast_ss(rax_10[1]))
        zmm2 = _mm256_add_ps(zmm2, _mm256_mul_ps(zmm3, zmm3))
        zmm3 = _mm256_sub_ps(arg7, _mm256_broadcast_ss(rax_10[2]))
        zmm2 = _mm256_add_ps(zmm2, _mm256_mul_ps(zmm3, zmm3))
        zmm3 = _mm256_rsqrt_ps(zmm2)
        double var_140_1[0x4] = arg5
        arg5 = _mm256_mul_ps(zmm3, _mm256_mul_ps(zmm2, zmm3))
        arg5 = __vmulps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc9480, arg5)), 
            data_142fc94a0)
        zmm2 = _mm256_rcp_ps(arg5)
        arg5 = _mm256_mul_ps(zmm2, arg5)
        zmm3 = data_142fc94c0
        arg5 = _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm3, arg5))
        arg5 = _mm256_sub_ps(_mm256_broadcast_ss(*arg1), arg5)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg8, zmm5)
        zmm3[0].o = arg16
        zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
        zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
        zmm5 = _mm256_sub_ps(arg5, zmm3)
        arg8 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm5, data_142fc94e0, 1)
        float var_120_1[0x8] = zmm2
        arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        arg5[0].o &= arg10[0].o
        zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0)
            zmm4 = var_420
        else
            arg5 = _mm256_mul_ps(zmm1, zmm5)
            zmm1 = _mm256_mul_ps(arg6, zmm5)
            zmm2 = _mm256_mul_ps(arg7, zmm5)
            arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_400)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_3e0)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_3c0)
            zmm4 = _mm256_and_ps(arg8, arg11)
            var_400 = _mm256_maskstore_ps(zmm4, arg5)
            var_3e0 = _mm256_maskstore_ps(zmm4, zmm1)
            var_3c0 = _mm256_maskstore_ps(zmm4, zmm2)
            zmm4 = var_420
            arg5 = _mm256_add_ps(zmm4, zmm5)
            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
            zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
            zmm4 = _mm256_blendv_ps(zmm4, arg5, _mm256_insertf128_ps(zmm1, zmm2[0].o, 1))
        
        result = arg17
        rdi_1 = arg18
    else
        zmm4 = var_420
else
    arg8 = _mm256_broadcast_ss(arg3[3])
    arg11[0].o = *arg3
    zmm1[0].o = arg3[1]
    arg5[0].o = arg3[2]
    var_3a0 = _mm256_broadcast_ss(*arg1)
    float var_2a0_1[0x8] = _mm256_broadcast_ss(*arg2)
    float var_2c0_1[0x8] = _mm256_broadcast_ss(arg2[1])
    zmm3 = _mm256_broadcast_ss(arg2[2])
    float var_2e0_1[0x8] = zmm3
    arg7[0].o = _mm_permute_ps(zmm2[0].o, 0)
    zmm2 = _mm256_insertf128_ps(arg7, arg7[0].o, 1)
    float var_300_1[0x8] = zmm2
    int32_t rdi = 0
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
    arg9 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    arg5[0].o = _mm_permute_ps(arg5[0].o, 0)
    arg10 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
    arg5[0].o = _mm_permute_ps(arg11[0].o, 0)
    arg11 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
    rbx = 0
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    var_420 = arg5
    
    do
        int64_t rax_1 = sx.q(rdi)
        zmm1[0].o = *(arg4 + rax_1)
        arg5[0].o = *(arg4 + rax_1 + 0x10)
        zmm3[0].o = *(arg4 + rax_1 + 0x20)
        zmm4[0].o = *(arg4 + rax_1 + 0x30)
        zmm5[0].o = *(arg4 + rax_1 + 0x40)
        arg6[0].o = *(arg4 + rax_1 + 0x50)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0xec)
        zmm2[0].o = _mm_permute_ps(zmm3[0].o, 0x44)
        arg12[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm2[0].o, 8)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0xec)
        zmm2[0].o = _mm_permute_ps(arg6[0].o, 0x44)
        arg13[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm2[0].o, 8)
        arg7[0].o = _mm_permute_ps(zmm1[0].o, 0xe5)
        zmm2[0].o = _mm_permute_ps(arg5[0].o, 0xf0)
        zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 1)
        arg7[0].o = _mm_permute_ps(zmm3[0].o, 0xa4)
        arg14[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 8)
        arg7[0].o = _mm_permute_ps(zmm4[0].o, 0xe5)
        zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0xf0)
        zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 1)
        arg7[0].o = _mm_permute_ps(arg6[0].o, 0xa4)
        zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 8)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x4e)
        arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 2)
        arg5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm3[0].o, 0xc4)
        zmm1[0].o = _mm_permute_ps(zmm4[0].o, 0x4e)
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 2)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 0xc4)
        zmm3 = _mm256_insertf128_ps(arg12, arg13[0].o, 1)
        zmm2 = _mm256_insertf128_ps(arg14, zmm2[0].o, 1)
        arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
        float var_360_1[0x8] = zmm2
        double var_340_1[0x4] = arg5
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        float var_320_1[0x8] = arg6
        zmm1 = _mm256_mul_ps(arg9, arg5)
        zmm4 = _mm256_mul_ps(arg10, zmm3)
        zmm5 = _mm256_mul_ps(arg11, zmm2)
        zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(arg10, zmm2))
        arg5 = _mm256_sub_ps(zmm4, _mm256_mul_ps(arg11, arg5))
        zmm2 = _mm256_sub_ps(zmm5, _mm256_mul_ps(arg9, zmm3))
        zmm1 = _mm256_add_ps(zmm1, zmm1)
        arg5 = _mm256_add_ps(arg5, arg5)
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg8, zmm1), zmm3)
        zmm4 = _mm256_sub_ps(_mm256_mul_ps(zmm2, arg9), _mm256_mul_ps(arg5, arg10))
        zmm5 = _mm256_mul_ps(zmm1, arg10)
        zmm3 = _mm256_add_ps(zmm3, zmm4)
        zmm4 = _mm256_sub_ps(zmm5, _mm256_mul_ps(zmm2, arg11))
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg8, arg5), var_360_1)
        zmm4 = _mm256_add_ps(zmm5, zmm4)
        int32_t var_200_1[0x8] = arg8
        int32_t var_1e0_1[0x8] = arg8
        int32_t var_1c0_1[0x8] = arg8
        int32_t var_1a0_1[0x8] = arg8
        arg5 = _mm256_add_ps(__vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg8, zmm2), var_340_1), 
            _mm256_sub_ps(_mm256_mul_ps(arg5, arg11), _mm256_mul_ps(zmm1, arg9)))
        zmm1 = _mm256_add_ps(zmm3, _mm256_broadcast_ss(arg3[4]))
        arg12 = _mm256_add_ps(zmm4, _mm256_broadcast_ss(arg3[5]))
        arg13 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg3[6]))
        arg5 = __vsubps_ymmqq_ymmqq_memqq(zmm1, var_2a0_1)
        zmm2 = __vsubps_ymmqq_ymmqq_memqq(arg12, var_2c0_1)
        arg5 =
            _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg5, arg5), arg6), _mm256_mul_ps(zmm2, zmm2))
        zmm2 = __vsubps_ymmqq_ymmqq_memqq(arg13, var_2e0_1)
        arg5 = _mm256_add_ps(arg5, _mm256_mul_ps(zmm2, zmm2))
        zmm2 = _mm256_rsqrt_ps(arg5)
        arg5 = _mm256_mul_ps(zmm2, _mm256_mul_ps(arg5, zmm2))
        arg5 = __vmulps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, arg5)), 
            data_142fc94a0)
        zmm2 = _mm256_rcp_ps(arg5)
        arg5 = _mm256_mul_ps(zmm2, arg5)
        zmm3 = data_142fc94c0
        arg5 = _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm3, arg5))
        zmm2 = var_3a0
        arg5 = _mm256_sub_ps(zmm2, arg5)
        arg14 = __vsubps_ymmqq_ymmqq_memqq(arg5, var_300_1)
        arg15 = __vcmpps_ymmqq_ymmqq_memqq_immb(arg14, data_142fc94e0, 1)
        
        if (_mm256_movemask_ps(arg15) != 0)
            arg5 = _mm256_mul_ps(zmm1, arg14)
            zmm1 = _mm256_mul_ps(arg12, arg14)
            zmm2 = _mm256_mul_ps(arg13, arg14)
            arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_400)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_3e0)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_3c0)
            var_400 = _mm256_maskstore_ps(arg15, arg5)
            var_3e0 = _mm256_maskstore_ps(arg15, zmm1)
            var_3c0 = _mm256_maskstore_ps(arg15, zmm2)
            arg5 = _mm256_add_ps(var_420, arg14)
            zmm1 = _mm256_blendv_ps(var_420, arg5, arg15)
            var_420 = zmm1
        
        rbx += 8
        rdi += 0x60
    while (rbx s< rsi_4)
    
    rdi_1 = arg18
    result = arg17
    
    if (rbx s< arg19)
        goto label_140099599
    
    zmm4 = var_420
arg5 = var_400
zmm1 = var_3e0
arg5 = _mm256_hadd_ps(arg5, arg5)
arg5 = _mm256_hadd_ps(arg5, arg5)
zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
arg5[0].o = arg5[0].o f+ zmm3[0]
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm2 = _mm256_hadd_ps(var_3c0, var_3c0)
zmm1[0].o = zmm1[0].o f+ zmm3[0]
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 0x10)
zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm1[0].o = zmm2[0].o f+ zmm1[0].d
arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(*rdi_1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, rdi_1[1].d, 0x20)
arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
*rdi_1 = arg5[0].d
*(rdi_1 + 4) = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
rdi_1[1].d = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
arg5 = _mm256_hadd_ps(zmm4, zmm4)
arg5 = _mm256_hadd_ps(arg5, arg5)
zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
arg5[0].o = arg5[0].o f+ zmm1[0].d
arg5[0].o = arg5[0].o f+ *result
*result = arg5[0].d
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
return result
