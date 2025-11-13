// 函数: sub_140089b80
// 地址: 0x140089b80
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
int32_t r15_4 = ((arg17 s>> 0x1f u>> 0x1d) + arg17) & 0xfffffff8
int32_t result
uint64_t rbx
float zmm0[0x8]
float zmm1[0x8]
float zmm2[0x8]
float zmm3[0x8]
float zmm4[0x8]
float zmm5[0x8]

if (r15_4 s<= 0)
    rbx = 0
    result = 0
else
    result = 0
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    arg9 = data_142fc9480
    arg10 = data_142fc94a0
    arg11 = data_142fc94c0
    rbx = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            int64_t rax_2 = sx.q((rbx << 2).d * 3)
            arg5[0].o = *(arg4 + rax_2)
            arg6[0].o = *(arg4 + rax_2 + 0x10)
            zmm0[0].o = *(arg4 + rax_2 + 0x20)
            zmm1[0].o = *(arg4 + rax_2 + 0x30)
            zmm3[0].o = *(arg4 + rax_2 + 0x40)
            zmm4[0].o = *(arg4 + rax_2 + 0x50)
            zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 0xec)
            zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0x44)
            arg13[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 8)
            zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0xec)
            zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0x44)
            arg14[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 8)
            zmm5[0].o = _mm_permute_ps(arg5[0].o, 0xe5)
            zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xf0)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 1)
            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xa4)
            arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
            zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0xe5)
            arg7[0].o = _mm_permute_ps(zmm3[0].o, 0xf0)
            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 1)
            zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xa4)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 8)
            zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x4e)
            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg6[0].o, 2)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm0[0].o, 0xc4)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x4e)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 2)
            zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 0xc4)
            zmm3 = _mm256_insertf128_ps(arg13, arg14[0].o, 1)
            zmm2 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            float var_380_1[0x8] = zmm3
            float var_360_1[0x8] = zmm2
            float var_340_1[0x8] = zmm0
            float var_320_1[0x8] = arg12
            zmm1 = _mm256_broadcast_ss(arg3[3])
            float var_200_1[0x8] = zmm1
            float var_1e0_1[0x8] = zmm1
            float var_1c0_1[0x8] = zmm1
            float var_1a0_1[0x8] = zmm1
            zmm4 = _mm256_broadcast_ss(arg3[1])
            zmm5 = _mm256_mul_ps(zmm4, zmm0)
            arg5 = _mm256_broadcast_ss(arg3[2])
            arg6 = _mm256_mul_ps(arg5, zmm3)
            arg7 = _mm256_broadcast_ss(*arg3)
            arg8 = _mm256_mul_ps(arg7, zmm2)
            zmm2 = _mm256_sub_ps(zmm5, _mm256_mul_ps(arg5, zmm2))
            zmm0 = _mm256_sub_ps(arg6, _mm256_mul_ps(arg7, zmm0))
            zmm3 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm4, zmm3))
            zmm2 = _mm256_add_ps(zmm2, zmm2)
            zmm0 = _mm256_add_ps(zmm0, zmm0)
            zmm3 = _mm256_add_ps(zmm3, zmm3)
            zmm5 = _mm256_mul_ps(zmm1, zmm2)
            arg6 = _mm256_mul_ps(zmm1, zmm0)
            zmm1 = _mm256_mul_ps(zmm1, zmm3)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_380_1)
            arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_360_1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_340_1)
            arg8 = _mm256_mul_ps(zmm3, zmm4)
            arg13 = _mm256_mul_ps(zmm2, arg5)
            arg14 = _mm256_mul_ps(zmm0, arg7)
            zmm0 = _mm256_add_ps(zmm5, _mm256_sub_ps(arg8, _mm256_mul_ps(zmm0, arg5)))
            zmm3 = _mm256_add_ps(arg6, _mm256_sub_ps(arg13, _mm256_mul_ps(zmm3, arg7)))
            zmm1 = _mm256_add_ps(zmm1, _mm256_sub_ps(arg14, _mm256_mul_ps(zmm2, zmm4)))
            zmm0 = _mm256_add_ps(zmm0, _mm256_broadcast_ss(arg3[4]))
            zmm2 = _mm256_add_ps(zmm3, _mm256_broadcast_ss(arg3[5]))
            zmm1 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg3[6]))
            zmm0 = _mm256_sub_ps(zmm0, _mm256_broadcast_ss(*arg2))
            zmm2 = _mm256_sub_ps(zmm2, _mm256_broadcast_ss(arg2[1]))
            zmm3 = _mm256_broadcast_ss(arg2[2])
            zmm1 = _mm256_sub_ps(zmm1, zmm3)
            zmm0 = _mm256_add_ps(
                _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(zmm0, zmm0), arg12), 
                    _mm256_mul_ps(zmm2, zmm2)), 
                _mm256_mul_ps(zmm1, zmm1))
            zmm1 = _mm256_broadcast_ss(*arg1)
            zmm2 = _mm256_rsqrt_ps(zmm0)
            zmm0 = _mm256_mul_ps(
                _mm256_mul_ps(zmm2, 
                    _mm256_sub_ps(arg9, _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm0, zmm2)))), 
                arg10)
            zmm2 = _mm256_rcp_ps(zmm0)
            arg5 = _mm256_sub_ps(zmm1, 
                _mm256_mul_ps(zmm2, _mm256_sub_ps(arg11, _mm256_mul_ps(zmm2, zmm0))))
            zmm0 = _mm256_cmp_ps(arg5, _mm256_broadcast_ss(*arg16), 1)
            char i_2 = _mm256_movemask_ps(zmm0)
            
            if (i_2 == 0)
                result = 0
                rbx = zx.q(rbx.d + 8)
                
                if (rbx.d s>= r15_4)
                    break
                
                continue
            else
                zmm0[0].o = zx.o(rbx.d)
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
                arg6 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                uint64_t i = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rdi_1
                    
                    if (i == 0)
                        rdi_1 = 0x40
                        i &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_140089ed1:
                            float var_2c0[0x8] = arg5
                            uint64_t rdi_2 = zx.q(rdi_1.d) & 7
                            zmm0[0].o = zx.o(var_2c0[rdi_2])
                            *arg16 = zmm0[0]
                            float var_2a0[0x8] = arg6
                            *arg15 = var_2a0[rdi_2]
                    else
                        uint64_t rflags_1
                        rdi_1, rflags_1 = _bit_scan_forward(i)
                        i &= not.q(1 << (rdi_1 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_140089ed1
                    result.b = 1
                while (i != 0)
        
        rbx = zx.q(rbx.d + 8)
        
        if (rbx.d s>= r15_4)
            break

if (rbx.d s< arg17)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm0[0].o = zx.o(rbx.d)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
        arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm1[0].o = zx.o(arg17)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm3[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
        arg11 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg12[0].o)
        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        arg8 = _mm256_and_ps(arg11, zmm2)
        int64_t rax_5 = sx.q(arg8[0].d)
        void* r13_1 = arg4 + (rax_5 << 2)
        int64_t rax_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
        void* rax_8 = arg4 + (rax_7 << 2)
        zmm3[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        int64_t r12_1 = sx.q(zmm3[0])
        void* rbx_1 = arg4 + (r12_1 << 2)
        int64_t r15_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        void* rdi_3 = arg4 + (r15_5 << 2)
        zmm4 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9520)
        zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        arg7[0].o = *(zx.q(zmm5[0]) + rbx_1)
        arg5 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9540)
        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        arg6[0].o = *(zx.q(zmm1[0]) + rbx_1)
        int32_t temp0_121 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        float* rbx_2 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_2 + rdi_3), 0x10)
        float* rbx_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_3 + rdi_3), 0x10)
        int64_t r14_2 = sx.q(temp0_121)
        void* rdi_4 = arg4 + (r14_2 << 2)
        float* rbx_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_4 + rdi_4), 0x20)
        float* rbx_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_5 + rdi_4), 0x20)
        int64_t rdi_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = *(zx.q(zmm4[0]) + r13_1)
        zmm0[0].o = *(zx.q(arg5[0]) + r13_1)
        void* rbx_8 = arg4 + (rdi_6 << 2)
        uint64_t rsi_2 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_2 + rbx_8), 0x30)
        float* rsi_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_3 + rbx_8), 0x30)
        int32_t temp0_135 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
        uint64_t rbx_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_9 + rax_8), 0x10)
        uint64_t rbx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_10 + rax_8), 0x10)
        int64_t rsi_5 = sx.q(temp0_135)
        void* rbx_11 = arg4 + (rsi_5 << 2)
        uint64_t rax_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_13 + rbx_11), 0x20)
        float* rax_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_14 + rbx_11), 0x20)
        zmm5[0].o = *(arg4 + (rax_5 << 2))
        arg6[0].o = *(arg4 + (r12_1 << 2))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (r15_5 << 2)), 0x10)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (r14_2 << 2)), 0x20)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rdi_6 << 2)), 0x30)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rax_7 << 2)), 0x10)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rsi_5 << 2)), 0x20)
        int64_t rax_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rax_18 << 2)), 0x30)
        void* rax_19 = arg4 + (rax_18 << 2)
        uint64_t rbx_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_12 + rax_19), 0x30)
        float* rbx_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_13 + rax_19), 0x30)
        zmm3 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
        zmm4 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
        zmm5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        zmm2 = _mm256_broadcast_ss(arg3[3])
        arg5 = _mm256_broadcast_ss(arg3[1])
        zmm0 = _mm256_mul_ps(zmm5, arg5)
        arg6 = _mm256_broadcast_ss(arg3[2])
        arg8 = _mm256_broadcast_ss(*arg3)
        arg7 = _mm256_sub_ps(zmm0, _mm256_mul_ps(zmm4, arg6))
        arg9 = _mm256_broadcast_ss(arg3[1])
        arg10 = _mm256_broadcast_ss(arg3[2])
        zmm0 = _mm256_broadcast_ss(*arg3)
        zmm1 = _mm256_broadcast_ss(arg3[4])
        arg13 = _mm256_broadcast_ss(arg3[5])
        arg14 = _mm256_broadcast_ss(arg3[6])
        float var_280_1[0x8] = zmm3
        float var_260_1[0x8] = zmm4
        float var_240_1[0x8] = zmm5
        zmm4 = _mm256_mul_ps(zmm4, arg8)
        zmm5 = _mm256_mul_ps(zmm5, arg8)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        float var_200_2[0x8] = zmm2
        float var_1e0_2[0x8] = zmm2
        float var_1c0_2[0x8] = zmm2
        float var_1a0_2[0x8] = zmm2
        zmm5 = _mm256_sub_ps(_mm256_mul_ps(zmm3, arg6), zmm5)
        arg6 = _mm256_mul_ps(zmm2, arg8)
        zmm3 = _mm256_sub_ps(zmm4, _mm256_mul_ps(zmm3, arg5))
        zmm4 = _mm256_sub_ps(arg6, arg6)
        arg5 = _mm256_add_ps(arg7, arg7)
        zmm5 = _mm256_add_ps(zmm5, zmm5)
        zmm3 = _mm256_add_ps(zmm3, zmm3)
        zmm4 = _mm256_add_ps(zmm4, zmm4)
        float var_380_2[0x8] = arg5
        float var_360_2[0x8] = zmm5
        float var_340_2[0x8] = zmm3
        float var_320_2[0x8] = zmm4
        arg6 = _mm256_sub_ps(_mm256_mul_ps(zmm3, arg9), _mm256_mul_ps(zmm5, arg10))
        arg7 = _mm256_mul_ps(zmm2, zmm5)
        zmm5 = _mm256_mul_ps(zmm5, zmm0)
        zmm0 = _mm256_mul_ps(zmm3, zmm0)
        zmm3 = _mm256_mul_ps(zmm2, zmm3)
        zmm4 = _mm256_mul_ps(zmm2, zmm4)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm2, arg5), var_280_1)
        arg7 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_260_1)
        zmm0 = _mm256_sub_ps(_mm256_mul_ps(arg5, arg10), zmm0)
        zmm5 = _mm256_sub_ps(zmm5, _mm256_mul_ps(arg5, arg9))
        arg5 = _mm256_broadcast_ss(*arg2)
        arg9 = _mm256_broadcast_ss(arg2[1])
        arg10 = _mm256_broadcast_ss(arg2[2])
        zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_240_1)
        float var_180_1[0x8] = zmm2
        zmm2 = _mm256_add_ps(zmm2, arg6)
        zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, arg8)
        zmm0 = _mm256_add_ps(arg7, zmm0)
        zmm5 = _mm256_add_ps(zmm3, zmm5)
        zmm1 = _mm256_add_ps(zmm2, zmm1)
        zmm0 = _mm256_add_ps(zmm0, arg13)
        zmm2 = _mm256_add_ps(zmm5, arg14)
        zmm1 = _mm256_sub_ps(zmm1, arg5)
        zmm0 = _mm256_sub_ps(zmm0, arg9)
        zmm2 = _mm256_sub_ps(zmm2, arg10)
        zmm0 = _mm256_add_ps(
            _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(zmm1, zmm1), arg8), 
                _mm256_mul_ps(zmm0, zmm0)), 
            _mm256_mul_ps(zmm2, zmm2))
        zmm1 = _mm256_rsqrt_ps(zmm0)
        float var_160_1[0x8] = arg7
        zmm0 = _mm256_mul_ps(zmm1, _mm256_mul_ps(zmm0, zmm1))
        zmm0 = __vmulps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm1, _mm256_sub_ps(data_142fc9480, zmm0)), 
            data_142fc94a0)
        float var_140_1[0x8] = zmm3
        zmm1 = _mm256_rcp_ps(zmm0)
        float var_120_1[0x8] = zmm4
        zmm2 = _mm256_broadcast_ss(*arg1)
        zmm0 = _mm256_mul_ps(zmm1, zmm0)
        zmm2 = _mm256_sub_ps(zmm2, _mm256_mul_ps(zmm1, _mm256_sub_ps(data_142fc94c0, zmm0)))
        zmm0 = _mm256_and_ps(_mm256_cmp_ps(zmm2, _mm256_broadcast_ss(*arg16), 1), arg11)
        int32_t i_3 = _mm256_movemask_ps(zmm0)
        
        if (i_3 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(i_3)
            result = 0
            
            do
                uint64_t rdx
                
                if (i_1 == 0)
                    rdx = 0x40
                    i_1 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_14008a391:
                        float var_300[0x8] = zmm2
                        uint64_t rdx_1 = zx.q(rdx.d) & 7
                        zmm0[0].o = var_300[rdx_1]
                        *arg16 = zmm0[0]
                        float var_2e0[0x8] = arg12
                        *arg15 = var_2e0[rdx_1]
                else
                    uint64_t rflags_2
                    rdx, rflags_2 = _bit_scan_forward(i_1)
                    i_1 &= not.q(1 << (rdx u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_14008a391
                result.b = 1
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
return result
