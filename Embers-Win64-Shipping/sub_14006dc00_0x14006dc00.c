// 函数: sub_14006dc00
// 地址: 0x14006dc00
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
float zmm0[0x8] = *arg21
double zmm4[0x4]
zmm4[0].o = arg17
uint32_t result
int32_t* rcx_17
float zmm1[0x8]
uint32_t var_5e0[0x8]
float* var_4e0
float zmm3[0x8]
int32_t zmm5[0x8]

if (_mm256_movemask_ps(zmm0) != 0xff)
    int32_t r12_7 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    float var_3a0_1[0x8] = arg12
    float var_3c0_1[0x8] = arg12
    float var_3e0_1[0x8] = arg12
    float var_4c0_2[0x8] = zmm0
    double* rdx_23
    int32_t r10_3
    
    if (r12_7 s<= 0)
        r10_3 = 0
        result = arg20
        
        if (0 s< result)
        label_14006f298:
            zmm0[0].o = zx.o(r10_3)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg11[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
            arg13[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
            arg5[0].o = zx.o(result)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            float var_5e0_3[0x8] = zmm0
            arg15[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
            zmm3 = _mm256_insertf128_ps(arg12, arg15[0].o, 1)
            float temp0_666[0x8] = _mm256_maskload_ps(zmm3, *(arg16 + sx.q(r10_3 << 2)))
            zmm4[0].o = _mm256_extractf128_ps(temp0_666[0].o, 1)
            arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
            arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_666[0].o, temp0_666[0].o)
            temp0_666[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_666[0].o)
            arg5 = _mm256_insertf128_ps(temp0_666, zmm4[0].o, 1)
            zmm4 = _mm256_and_ps(zmm3, arg5)
            int64_t r14_4 = sx.q(zmm4[0].d)
            int64_t rbx_11 = arg4 + (r14_4 << 2)
            int64_t r12_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            int64_t r13_4 = arg4 + (r12_8 << 2)
            arg7[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            int64_t r11_5 = sx.q(arg7[0])
            int64_t r10_5 = arg4 + (r11_5 << 2)
            int64_t rsi_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            int64_t rdi_10 = arg4 + (rsi_6 << 2)
            arg8 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9520)
            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            zmm0[0].o = *(zx.q(arg5[0]) + r10_5)
            arg9 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9540)
            zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm1[0].o = *(zx.q(zmm5[0]) + r10_5)
            int32_t temp0_681 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
            uint64_t rdx_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_17 + rdi_10), 0x10)
            uint64_t rdx_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_18 + rdi_10), 0x10)
            int64_t rcx_14 = sx.q(temp0_681)
            int64_t rdx_19 = arg4 + (rcx_14 << 2)
            uint64_t rdi_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_11 + rdx_19), 0x20)
            uint64_t rdi_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_12 + rdx_19), 0x20)
            int64_t rdx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            arg7[0].o = *(zx.q(arg8[0]) + rbx_11)
            arg6[0].o = *(zx.q(arg9[0]) + rbx_11)
            int64_t rbx_12 = arg4 + (rdx_21 << 2)
            uint64_t rdi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_15 + rbx_12), 0x30)
            uint64_t rdi_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_16 + rbx_12), 0x30)
            int32_t temp0_695 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            uint64_t rdi_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_17 + r13_4), 0x10)
            uint64_t rdi_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_18 + r13_4), 0x10)
            int64_t rbx_14 = sx.q(temp0_695)
            int64_t rdi_19 = arg4 + (rbx_14 << 2)
            uint64_t rax_88 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_88 + rdi_19), 0x20)
            uint64_t rax_89 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_89 + rdi_19), 0x20)
            arg6[0].o = *(arg4 + (r14_4 << 2))
            arg7[0].o = *(arg4 + (r11_5 << 2))
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rsi_6 << 2)), 0x10)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rcx_14 << 2)), 0x20)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rdx_21 << 2)), 0x30)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (r12_8 << 2)), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rbx_14 << 2)), 0x20)
            int64_t rax_91 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rax_91 << 2)), 0x30)
            int64_t rax_92 = arg4 + (rax_91 << 2)
            uint64_t rcx_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_15 + rax_92), 0x30)
            uint64_t rcx_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_16 + rax_92), 0x30)
            arg10 = _mm256_insertf128_ps(arg11, arg13[0].o, 1)
            double temp0_716[0x4] = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            zmm5 = _mm256_broadcast_ss(arg3[3])
            int32_t var_5a0_4[0x8] = zmm5
            int32_t var_580_4[0x8] = zmm5
            int32_t var_560_4[0x8] = zmm5
            int32_t var_540_4[0x8] = zmm5
            float temp0_721[0x8] = _mm256_broadcast_ss(arg3[1])
            arg7 = _mm256_mul_ps(zmm1, temp0_721)
            float temp0_723[0x8] = _mm256_broadcast_ss(arg3[2])
            float temp0_724[0x8] = _mm256_mul_ps(temp0_716, temp0_723)
            float temp0_725[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_726[0x8] = _mm256_mul_ps(zmm0, temp0_723)
            float temp0_727[0x8] = _mm256_mul_ps(zmm0, temp0_725)
            float temp0_728[0x8] = _mm256_mul_ps(zmm5, arg5)
            arg7 = _mm256_sub_ps(arg7, temp0_726)
            float temp0_731[0x8] = _mm256_sub_ps(temp0_724, _mm256_mul_ps(zmm1, temp0_725))
            float temp0_733[0x8] = _mm256_sub_ps(temp0_727, _mm256_mul_ps(temp0_716, temp0_721))
            float temp0_734[0x8] = _mm256_sub_ps(temp0_728, temp0_728)
            zmm4 = _mm256_add_ps(arg7, arg7)
            float temp0_736[0x8] = _mm256_add_ps(temp0_731, temp0_731)
            float temp0_737[0x8] = _mm256_add_ps(temp0_733, temp0_733)
            float temp0_738[0x8] = _mm256_add_ps(temp0_734, temp0_734)
            double var_460_4[0x4] = zmm4
            float var_440_4[0x8] = temp0_736
            float var_420_4[0x8] = temp0_737
            float var_400_4[0x8] = temp0_738
            float temp0_739[0x8] = _mm256_mul_ps(zmm5, zmm4)
            arg7 = _mm256_mul_ps(zmm5, temp0_736)
            float temp0_741[0x8] = _mm256_mul_ps(zmm5, temp0_737)
            float temp0_742[0x8] = _mm256_mul_ps(zmm5, temp0_738)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(temp0_739, temp0_716)
            float temp0_744[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg7, zmm0)
            arg7 = __vaddps_ymmqq_ymmqq_memqq(temp0_741, zmm1)
            int32_t var_180_2[0x8] = zmm5
            float var_160_2[0x8] = temp0_744
            uint32_t var_140_2[0x8] = arg7
            float var_120_2[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_742, arg5)
            float temp0_747[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_748[0x8] = _mm256_mul_ps(temp0_737, temp0_747)
            float temp0_749[0x8] = _mm256_broadcast_ss(arg3[2])
            float temp0_751[0x8] = _mm256_sub_ps(temp0_748, _mm256_mul_ps(temp0_736, temp0_749))
            float temp0_752[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_753[0x8] = _mm256_mul_ps(temp0_736, temp0_752)
            float temp0_754[0x8] = _mm256_mul_ps(temp0_737, temp0_752)
            float temp0_756[0x8] = _mm256_sub_ps(_mm256_mul_ps(zmm4, temp0_749), temp0_754)
            float temp0_758[0x8] = _mm256_sub_ps(temp0_753, _mm256_mul_ps(zmm4, temp0_747))
            float temp0_759[0x8] = _mm256_broadcast_ss(arg3[4])
            float temp0_760[0x8] = _mm256_broadcast_ss(arg3[5])
            float temp0_761[0x8] = _mm256_broadcast_ss(arg3[6])
            zmm4 = _mm256_add_ps(zmm5, temp0_751)
            float temp0_763[0x8] = _mm256_add_ps(temp0_744, temp0_756)
            float temp0_764[0x8] = _mm256_add_ps(arg7, temp0_758)
            zmm4 = _mm256_add_ps(zmm4, temp0_759)
            arg7 = _mm256_add_ps(temp0_763, temp0_760)
            float temp0_767[0x8] = _mm256_broadcast_ss(*arg2)
            float temp0_768[0x8] = _mm256_broadcast_ss(arg2[1])
            arg11 = _mm256_broadcast_ss(arg2[2])
            zmm0 = _mm256_cmp_ps(zmm4, temp0_767, 6)
            temp0_758[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            temp0_758[0].o &= arg15[0].o
            temp0_758[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_758[0].o, arg15[0].o)
            temp0_759[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
            temp0_759[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_759[0].o, arg12[0].o)
            arg6 = _mm256_broadcast_ss(*arg1)
            zmm1 = _mm256_insertf128_ps(temp0_759, temp0_758[0].o, 1)
            float temp0_777[0x8] = _mm256_broadcast_ss(arg1[1])
            char temp0_778 = _mm256_movemask_ps(zmm1)
            float temp0_779[0x8] = _mm256_broadcast_ss(arg1[2])
            zmm1 = _mm256_insertf128_ps(var_5e0_3, var_5e0_3[0].o, 1)
            uint32_t var_5e0_4[0x8] = arg7
            float var_520_4[0x8] = arg10
            var_4e0.32 = zmm1
            
            if (temp0_778 == 0xff)
                arg10 = _mm256_cmp_ps(zmm4, temp0_767, 2)
                arg15 = _mm256_and_ps(zmm0, zmm3)
            else
                zmm0 = _mm256_cmp_ps(zmm4, temp0_767, 2)
                temp0_759[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm5 = _mm256_cmp_ps(arg7, temp0_768, 2)
                arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o &= arg7[0].o
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_759[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm0[0].o &= zmm5[0].o
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                arg10 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                arg15 = _mm256_andnot_ps(arg10, zmm3)
            
            arg5 = _mm256_add_ps(temp0_764, temp0_761)
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm3[0].o)
            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
            rcx_17 = arg18
            rdx_23 = arg19
            
            if (_mm256_movemask_ps(zmm1) != 0xff)
                zmm5 = _mm256_cmp_ps(arg5, arg11, 2)
                arg10 = _mm256_and_ps(zmm5, _mm256_and_ps(arg10, zmm3))
                arg15 = _mm256_xor_ps(arg10, zmm3)
            
            zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm3[0].o)
            
            if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1)) == 0xff)
                arg7 = var_5e0_4
            else
                arg10 = _mm256_and_ps(arg10, zmm3)
                arg13 = _mm256_cmp_ps(arg6, zmm4, 2)
                zmm0 = _mm256_and_ps(arg10, _mm256_cmp_ps(arg6, zmm4, 6))
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                
                if (_mm256_movemask_ps(zmm1) == 0xff)
                    arg7 = var_5e0_4
                else
                    arg7 = var_5e0_4
                    float temp0_857[0x8] = _mm256_cmp_ps(temp0_777, arg7, 2)
                    zmm1 = _mm256_and_ps(arg10, arg13)
                    arg13 = _mm256_and_ps(temp0_857, zmm1)
                    zmm0 = _mm256_xor_ps(arg13, arg10)
                
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                
                if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)) != 0xff)
                    float temp0_895[0x8] = _mm256_cmp_ps(temp0_779, arg5, 2)
                    zmm1 = _mm256_and_ps(arg13, arg10)
                    arg13 = _mm256_and_ps(temp0_895, zmm1)
                
                arg10 = _mm256_and_ps(arg13, arg10)
            
            float temp0_899[0x8] = _mm256_sub_ps(zmm4, temp0_767)
            arg13 = _mm256_sub_ps(arg7, temp0_768)
            arg8 = _mm256_sub_ps(arg5, arg11)
            arg14 = _mm256_sub_ps(arg6, zmm4)
            arg9 = _mm256_sub_ps(temp0_777, arg7)
            arg7 = _mm256_sub_ps(temp0_779, arg5)
            int32_t temp0_906 = _mm256_movemask_ps(_mm256_and_ps(arg10, zmm3))
            float temp0_908[0x8]
            int32_t temp0_1067
            
            if (temp0_906 != 0)
                arg6 = _mm256_max_ps(arg14, temp0_899)
                temp0_908 = _mm256_max_ps(arg9, arg13)
                arg11 = _mm256_max_ps(arg7, arg8)
                float temp0_910[0x8] = _mm256_cmp_ps(temp0_908, arg6, 1)
                zmm5 = _mm256_and_ps(arg10, temp0_910)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm3)) != 0)
                    zmm5 = _mm256_and_ps(_mm256_cmp_ps(arg11, arg6, 5), zmm5)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm3)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg11, zmm5)
                
                zmm0 = _mm256_andnot_ps(temp0_910, arg10)
                zmm1 = _mm256_and_ps(zmm0, zmm3)
                temp0_1067 = _mm256_movemask_ps(zmm1)
            
            if (temp0_906 == 0 || temp0_1067 == 0)
                arg12 = arg12
                zmm0 = _mm256_andnot_ps(arg10, zmm3)
                
                if (_mm256_movemask_ps(zmm0) == 0)
                    arg7 = var_520_4
                    arg15 = var_4e0.32
                else
                label_14006ff02:
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg10 = _mm256_xor_ps(arg10, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                    float temp0_1084[0x8] = _mm256_cmp_ps(zmm0, temp0_899, 1)
                    int32_t temp0_1085[0x8] = _mm256_and_ps(temp0_1084, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(temp0_1085, zmm3)) != 0)
                        var_5a0_4 = _mm256_maskstore_ps(temp0_1085, temp0_899)
                    
                    zmm0 = _mm256_andnot_ps(temp0_1084, arg10)
                    zmm1 = _mm256_and_ps(zmm0, zmm3)
                    arg15 = var_4e0.32
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        zmm5 = _mm256_cmp_ps(zmm1, arg14, 1)
                        arg11 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg11, zmm3)) != 0)
                            var_5a0_4 = _mm256_maskstore_ps(arg11, 
                                __vxorps_ymmqq_ymmqq_memqq(arg14, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        zmm1 = _mm256_and_ps(zmm0, zmm3)
                        
                        if (_mm256_movemask_ps(zmm1) != 0)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            var_5a0_4 = _mm256_maskstore_ps(zmm0, zmm1)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_1105[0x8] = _mm256_cmp_ps(zmm0, arg13, 1)
                    int32_t temp0_1106[0x8] = _mm256_and_ps(temp0_1105, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(temp0_1106, zmm3)) != 0)
                        var_580_4 = _mm256_maskstore_ps(temp0_1106, arg13)
                    
                    zmm0 = _mm256_andnot_ps(temp0_1105, arg10)
                    zmm1 = _mm256_and_ps(zmm0, zmm3)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        zmm5 = _mm256_cmp_ps(zmm1, arg9, 1)
                        arg11 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg11, zmm3)) != 0)
                            var_580_4 = _mm256_maskstore_ps(arg11, 
                                __vxorps_ymmqq_ymmqq_memqq(arg9, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        zmm1 = _mm256_and_ps(zmm0, zmm3)
                        
                        if (_mm256_movemask_ps(zmm1) != 0)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            var_580_4 = _mm256_maskstore_ps(zmm0, zmm1)
                    
                    arg9 = arg7
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_1126[0x8] = _mm256_cmp_ps(zmm0, arg8, 1)
                    zmm5 = _mm256_and_ps(temp0_1126, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm3)) != 0)
                        var_560_4 = _mm256_maskstore_ps(zmm5, arg8)
                    
                    zmm0 = _mm256_andnot_ps(temp0_1126, arg10)
                    zmm1 = _mm256_and_ps(zmm0, zmm3)
                    arg7 = var_520_4
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        zmm5 = _mm256_cmp_ps(zmm1, arg9, 1)
                        arg8 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg8, zmm3)) != 0)
                            var_560_4 = _mm256_maskstore_ps(arg8, 
                                __vxorps_ymmqq_ymmqq_memqq(arg9, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        zmm1 = _mm256_and_ps(zmm0, zmm3)
                        
                        if (_mm256_movemask_ps(zmm1) != 0)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            var_560_4 = _mm256_maskstore_ps(zmm0, zmm1)
                    
                    zmm0 = var_5a0_4
                    zmm1 = var_580_4
                    zmm3 = var_560_4
                    float temp0_1146[0x8] = _mm256_mul_ps(zmm0, zmm0)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    float temp0_1152[0x8] = _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(temp0_1146, zmm5), _mm256_mul_ps(zmm1, zmm1)), 
                        _mm256_mul_ps(zmm3, zmm3))
                    float temp0_1153[0x8] = _mm256_rsqrt_ps(temp0_1152)
                    float temp0_1155[0x8] =
                        _mm256_mul_ps(temp0_1153, _mm256_mul_ps(temp0_1152, temp0_1153))
                    float temp0_1158[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(temp0_1153, _mm256_sub_ps(data_142fc9480, temp0_1155)), 
                        data_142fc94a0)
                    zmm1 = _mm256_rcp_ps(temp0_1158)
                    float temp0_1160[0x8] = _mm256_mul_ps(zmm1, temp0_1158)
                    zmm3 = data_142fc94c0
                    zmm0 = _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm3, temp0_1160))
                    arg6 = _mm256_blendv_ps(arg6, zmm0, arg10)
            else
                float var_5c0_6[0x8] = arg8
                arg8 = arg9
                arg9 = arg5
                arg5 = arg7
                zmm5 = _mm256_cmp_ps(arg11, temp0_908, 1)
                arg7 = _mm256_and_ps(zmm0, zmm5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm3)) != 0)
                    arg6 = _mm256_blendv_ps(arg6, temp0_908, arg7)
                
                zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                zmm1 = _mm256_and_ps(zmm0, zmm3)
                arg12 = arg12
                arg7 = arg5
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    arg6 = _mm256_blendv_ps(arg6, arg11, zmm0)
                
                arg5 = arg9
                arg9 = arg8
                arg8 = var_5c0_6
                zmm0 = _mm256_andnot_ps(arg10, zmm3)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    goto label_14006ff02
                
                arg7 = var_520_4
                arg15 = var_4e0.32
            
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = arg17
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm0 = _mm256_sub_ps(arg6, _mm256_insertf128_ps(zmm0, zmm0[0].o, 1))
            arg6 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm1[0].o &= zmm5[0].o
            zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            result = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            
            if (result.b != 0)
                zmm1 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                zmm4 = _mm256_mul_ps(zmm4, zmm0)
                zmm5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_5e0_4)
                float temp0_1180[0x8] = _mm256_mul_ps(arg5, zmm0)
                zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_3e0_1)
                zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_3c0_1)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_1180, var_3a0_1)
                zmm1 = _mm256_and_ps(arg6, zmm1)
                var_3e0_1 = _mm256_maskstore_ps(zmm1, zmm4)
                int256_t var_3c0
                result = &var_3c0
                var_3c0_1 = _mm256_maskstore_ps(zmm1, zmm5)
                var_3a0_1 = _mm256_maskstore_ps(zmm1, arg5)
                zmm0 = _mm256_add_ps(arg12, zmm0)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0].q)
                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(arg5[0].q)
                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                arg12 = _mm256_blendv_ps(arg12, zmm0, zmm1)
        else
            rcx_17 = arg18
            rdx_23 = arg19
    else
        float temp0_402[0x8] = _mm256_broadcast_ss(arg3[3])
        temp0_402[0].o = *arg3
        zmm1[0].o = arg3[1]
        arg5[0].o = arg3[2]
        arg11 = _mm256_broadcast_ss(*arg2)
        int32_t var_220
        var_220.32 = _mm256_broadcast_ss(arg2[1])
        float temp0_405[0x8] = _mm256_broadcast_ss(arg2[2])
        float temp0_406[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_407[0x8] = _mm256_broadcast_ss(arg1[1])
        float temp0_408[0x8] = _mm256_broadcast_ss(arg1[2])
        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0)
        float var_2c0_2[0x8] = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        int32_t r13_3 = 0
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        float var_2e0_2[0x8] = zmm1
        zmm1[0].o = _mm_permute_ps(arg5[0].o, 0)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        float var_300_2[0x8] = zmm1
        temp0_402[0].o = _mm_permute_ps(temp0_402[0].o, 0)
        zmm0 = _mm256_insertf128_ps(temp0_402, temp0_402[0].o, 1)
        float var_320_2[0x8] = zmm0
        r10_3 = 0
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        float var_4a0_2[0x8] = arg11
        
        do
            int64_t rax_52 = sx.q(r13_3)
            zmm0[0].o = *(arg16 + rax_52)
            zmm1[0].o = *(arg16 + rax_52 + 0x10)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            int64_t r11_4 = sx.q(zmm0[0])
            int64_t rsi_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t rax_56 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rbx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            int64_t r14_3 = sx.q(zmm1[0])
            int64_t rdi_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int64_t rdx_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm0[0].o = *(arg4 + (r14_3 << 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rdi_9 << 2)), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (r15_4 << 2)), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rdx_14 << 2)), 0x30)
            zmm1[0].o = *(arg4 + (r14_3 << 2) + 4)
            arg5[0].o = *(arg4 + (r11_4 << 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (rsi_5 << 2)), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (rax_56 << 2)), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (rbx_10 << 2)), 0x30)
            zmm4[0].o = *(arg4 + (r11_4 << 2) + 4)
            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rdi_9 << 2) + 4), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (r15_4 << 2) + 4), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rdx_14 << 2) + 4), 0x30)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rsi_5 << 2) + 4), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (rax_56 << 2) + 4), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (rbx_10 << 2) + 4), 0x30)
            zmm4[0].o = *(arg4 + (r11_4 << 2) + 8)
            zmm5[0].o = *(arg4 + (r14_3 << 2) + 8)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rdi_9 << 2) + 8), 0x10)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (r15_4 << 2) + 8), 0x20)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rdx_14 << 2) + 8), 0x30)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rsi_5 << 2) + 8), 0x10)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rax_56 << 2) + 8), 0x20)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rbx_10 << 2) + 8), 0x30)
            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            arg5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
            float var_400_3[0x8] = arg13
            float var_5a0_3[0x8] = temp0_402
            float var_580_3[0x8] = temp0_402
            float var_560_3[0x8] = temp0_402
            float var_540_3[0x8] = temp0_402
            zmm4 = _mm256_mul_ps(arg5, var_2e0_2)
            zmm5 = _mm256_mul_ps(zmm0, var_300_2)
            float temp0_452[0x8] = _mm256_mul_ps(zmm1, var_320_2)
            float temp0_454[0x8] = _mm256_sub_ps(zmm4, _mm256_mul_ps(zmm1, var_300_2))
            float temp0_456[0x8] = _mm256_sub_ps(zmm5, _mm256_mul_ps(arg5, var_320_2))
            float temp0_458[0x8] = _mm256_sub_ps(temp0_452, _mm256_mul_ps(zmm0, var_2e0_2))
            float temp0_459[0x8] = _mm256_add_ps(temp0_454, temp0_454)
            float temp0_460[0x8] = _mm256_add_ps(temp0_456, temp0_456)
            float temp0_461[0x8] = _mm256_add_ps(temp0_458, temp0_458)
            zmm4 = _mm256_mul_ps(temp0_402, temp0_459)
            zmm5 = _mm256_mul_ps(temp0_402, temp0_460)
            zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, zmm0)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, zmm1)
            float temp0_467[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_402, temp0_461), arg5)
            arg7 = _mm256_mul_ps(temp0_461, var_2e0_2)
            float temp0_469[0x8] = _mm256_mul_ps(temp0_459, var_300_2)
            float temp0_470[0x8] = _mm256_mul_ps(temp0_460, var_320_2)
            float temp0_473[0x8] =
                _mm256_add_ps(zmm4, _mm256_sub_ps(arg7, _mm256_mul_ps(temp0_460, var_300_2)))
            float temp0_476[0x8] =
                _mm256_add_ps(zmm5, _mm256_sub_ps(temp0_469, _mm256_mul_ps(temp0_461, var_320_2)))
            float temp0_479[0x8] = _mm256_add_ps(temp0_467, 
                _mm256_sub_ps(temp0_470, _mm256_mul_ps(temp0_459, var_2e0_2)))
            arg15 = _mm256_add_ps(temp0_473, _mm256_broadcast_ss(arg3[4]))
            zmm3 = _mm256_add_ps(temp0_476, _mm256_broadcast_ss(arg3[5]))
            arg5 = _mm256_broadcast_ss(arg3[6])
            arg8 = _mm256_add_ps(temp0_479, arg5)
            zmm4 = _mm256_cmp_ps(arg15, arg11, 2)
            zmm1 = _mm256_cmp_ps(arg15, arg11, 6)
            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_476[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0xff)
                zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            label_14006ee8a:
                arg14 = var_5e0
                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_476[0].o)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg7 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
            else
                zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm3, _mm256_broadcast_ss(arg2[1]), 2), zmm4)
                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                temp0_476[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_476[0].o, temp0_476[0].o)
                zmm1[0].o = zmm4[0].o ^ temp0_476[0].o
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_476[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0xff)
                    goto label_14006ee8a
                
                float temp0_501[0x8] = _mm256_cmp_ps(arg8, _mm256_broadcast_ss(arg2[2]), 2)
                arg5[0].o = _mm256_extractf128_ps(temp0_501[0].o, 1)
                temp0_501[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_501[0].o, arg5[0].o)
                zmm5[0].o = temp0_501[0].o & zmm4[0].o
                temp0_501[0].o = zmm5[0].o ^ temp0_476[0].o
                temp0_501[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_501[0].o, temp0_476[0].o)
                char temp0_505 = __vpmovmskb_gpr32d_xmmdq(temp0_501[0].o)
                temp0_501[0].o = __vpmovsxwd_xmmdq_xmmq(zmm5[0].q)
                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(arg5[0].q)
                arg7 = _mm256_insertf128_ps(temp0_501, arg5[0].o, 1)
                
                if (temp0_505 == 0xff)
                    arg14 = var_5e0
                else
                    float temp0_510[0x8] = _mm256_broadcast_ss(*arg1)
                    float temp0_511[0x8] = _mm256_cmp_ps(temp0_510, arg15, 6)
                    arg6 = _mm256_and_ps(temp0_511, arg7)
                    temp0_511[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    temp0_511[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_511[0].o, zmm4[0].o)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, temp0_511[0].o, 1)
                    
                    if (_mm256_movemask_ps(zmm1) == 0xff)
                        zmm5 = _mm256_cmp_ps(temp0_510, arg15, 2)
                    else
                        zmm1 = _mm256_cmp_ps(temp0_510, arg15, 2)
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        arg5 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), zmm3, 2)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm1[0].o &= zmm5[0].o
                        zmm1[0].o &= arg5[0].o
                        arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg6 = _mm256_andnot_ps(zmm5, arg7)
                    
                    arg14 = var_5e0
                    arg8 = arg8
                    zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                    
                    if (_mm256_movemask_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)) != 0xff)
                        zmm5 = _mm256_and_ps(_mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg8, 2), 
                            _mm256_and_ps(zmm5, arg7))
                    
                    arg7 = _mm256_and_ps(zmm5, arg7)
            
            zmm4 = _mm256_sub_ps(arg15, arg11)
            arg9 = __vsubps_ymmqq_ymmqq_memqq(zmm3, var_220.32)
            arg6 = __vsubps_ymmqq_ymmqq_memqq(arg8, temp0_405)
            arg10 = _mm256_sub_ps(temp0_406, arg15)
            arg5 = _mm256_sub_ps(temp0_407, zmm3)
            zmm0 = temp0_408
            zmm5 = _mm256_sub_ps(zmm0, arg8)
            float var_5c0_3[0x8] = arg5
            
            if (_mm256_movemask_ps(arg7) != 0)
                float temp0_558[0x8] = _mm256_max_ps(arg10, zmm4)
                float temp0_559[0x8] = _mm256_max_ps(arg5, arg9)
                float temp0_560[0x8] = _mm256_max_ps(zmm5, arg6)
                float temp0_561[0x8] = _mm256_cmp_ps(temp0_559, temp0_558, 1)
                arg14 = _mm256_and_ps(arg7, temp0_561)
                
                if (_mm256_movemask_ps(arg14) == 0)
                    arg14 = var_5e0
                    arg13 = _mm256_andnot_ps(temp0_561, arg7)
                    
                    if (_mm256_movemask_ps(arg13) != 0)
                    label_14006f013:
                        float temp0_575[0x8] = _mm256_cmp_ps(temp0_560, temp0_559, 1)
                        arg5 = _mm256_and_ps(arg13, temp0_575)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg14 = _mm256_blendv_ps(arg14, temp0_559, arg5)
                        
                        arg12 = arg12
                        zmm1 = _mm256_andnot_ps(temp0_575, arg13)
                        
                        if (_mm256_movemask_ps(zmm1) != 0)
                            arg14 = _mm256_blendv_ps(arg14, temp0_560, zmm1)
                    else
                        arg12 = arg12
                else
                    zmm0 = arg15
                    arg5 = _mm256_cmp_ps(temp0_560, temp0_558, 1)
                    int32_t temp0_565[0x8] = _mm256_and_ps(arg14, arg5)
                    
                    if (_mm256_movemask_ps(temp0_565) != 0)
                        var_5e0 = _mm256_blendv_ps(var_5e0, temp0_558, temp0_565)
                    
                    zmm5 = zmm5
                    arg6 = arg6
                    arg15 = zmm0
                    zmm1 = _mm256_andnot_ps(arg5, arg14)
                    
                    if (_mm256_movemask_ps(zmm1) == 0)
                        arg14 = var_5e0
                    else
                        arg14 = _mm256_blendv_ps(var_5e0, temp0_560, zmm1)
                    
                    arg8 = arg8
                    arg13 = _mm256_andnot_ps(temp0_561, arg7)
                    
                    if (_mm256_movemask_ps(arg13) != 0)
                        goto label_14006f013
                    
                    arg12 = arg12
                
                arg11 = var_4a0_2
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                zmm3 = zmm3
            
            zmm1 = _mm256_cmp_ps(arg13, arg13, 0xf)
            arg7 = _mm256_xor_ps(arg7, zmm1)
            
            if (_mm256_movemask_ps(arg7) != 0)
                float temp0_586[0x8] = _mm256_cmp_ps(arg13, zmm4, 1)
                arg5 = _mm256_and_ps(temp0_586, arg7)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_5a0_3 = _mm256_maskstore_ps(arg5, zmm4)
                
                zmm4 = _mm256_andnot_ps(temp0_586, arg7)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    float temp0_592[0x8] = _mm256_cmp_ps(arg13, arg10, 1)
                    arg5 = _mm256_and_ps(zmm4, temp0_592)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_5a0_3 = _mm256_maskstore_ps(arg5, 
                            __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9460))
                    
                    zmm1 = _mm256_andnot_ps(temp0_592, zmm4)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_5a0_3 = _mm256_maskstore_ps(zmm1, arg13)
                
                float temp0_600[0x8] = _mm256_cmp_ps(arg13, arg9, 1)
                arg5 = _mm256_and_ps(temp0_600, arg7)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_580_3 = _mm256_maskstore_ps(arg5, arg9)
                
                zmm4 = _mm256_andnot_ps(temp0_600, arg7)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    arg9 = var_5c0_3
                    float temp0_606[0x8] = _mm256_cmp_ps(arg13, arg9, 1)
                    arg5 = _mm256_and_ps(zmm4, temp0_606)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_580_3 = _mm256_maskstore_ps(arg5, 
                            __vxorps_ymmqq_ymmqq_memqq(arg9, data_142fc9460))
                    
                    zmm1 = _mm256_andnot_ps(temp0_606, zmm4)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_580_3 = _mm256_maskstore_ps(zmm1, arg13)
                
                float temp0_614[0x8] = _mm256_cmp_ps(arg13, arg6, 1)
                arg5 = _mm256_and_ps(temp0_614, arg7)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_560_3 = _mm256_maskstore_ps(arg5, arg6)
                
                zmm4 = _mm256_andnot_ps(temp0_614, arg7)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    float temp0_620[0x8] = _mm256_cmp_ps(arg13, zmm5, 1)
                    arg5 = _mm256_and_ps(zmm4, temp0_620)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_560_3 = _mm256_maskstore_ps(arg5, 
                            __vxorps_ymmqq_ymmqq_memqq(zmm5, data_142fc9460))
                    
                    zmm1 = _mm256_andnot_ps(temp0_620, zmm4)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_560_3 = _mm256_maskstore_ps(zmm1, arg13)
                
                zmm4 = var_560_3
                float temp0_633[0x8] = _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(var_5a0_3, var_5a0_3), arg13), 
                        _mm256_mul_ps(var_580_3, var_580_3)), 
                    _mm256_mul_ps(zmm4, zmm4))
                float temp0_634[0x8] = _mm256_rsqrt_ps(temp0_633)
                float temp0_636[0x8] = _mm256_mul_ps(temp0_634, _mm256_mul_ps(temp0_633, temp0_634))
                float temp0_639[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_634, _mm256_sub_ps(data_142fc9480, temp0_636)), 
                    data_142fc94a0)
                arg5 = _mm256_rcp_ps(temp0_639)
                float temp0_641[0x8] = _mm256_mul_ps(arg5, temp0_639)
                zmm0 = data_142fc94c0
                zmm1 = _mm256_mul_ps(arg5, _mm256_sub_ps(zmm0, temp0_641))
                arg14 = _mm256_blendv_ps(arg14, zmm1, arg7)
            
            zmm4 = __vsubps_ymmqq_ymmqq_memqq(arg14, var_2c0_2)
            zmm5 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm4, data_142fc94e0, 1)
            
            if (_mm256_movemask_ps(zmm5) != 0)
                float temp0_648[0x8] = _mm256_mul_ps(arg15, zmm4)
                float temp0_649[0x8] = _mm256_mul_ps(zmm3, zmm4)
                float temp0_650[0x8] = _mm256_mul_ps(arg8, zmm4)
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(temp0_648, var_3e0_1)
                float temp0_652[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_649, var_3c0_1)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_650, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(zmm5, zmm1)
                var_3c0_1 = _mm256_maskstore_ps(zmm5, temp0_652)
                var_3a0_1 = _mm256_maskstore_ps(zmm5, arg5)
                zmm0 = _mm256_add_ps(arg12, zmm4)
                arg12 = _mm256_blendv_ps(arg12, zmm0, zmm5)
            
            var_5e0 = arg14
            r10_3 += 8
            r13_3 += 0x20
        while (r10_3 s< r12_7)
        
        result = arg20
        
        if (r10_3 s< result)
            goto label_14006f298
        
        rcx_17 = arg18
        rdx_23 = arg19
    zmm0[0].o = _mm256_extractf128_ps(var_4c0_2[0].o, 1)
    zmm1[0].o = zx.o(0)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    zmm0[0].o ^= arg5[0].o
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_4c0_2[0].o, zmm1[0].o)
    zmm1[0].o ^= arg5[0].o
    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
    zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_3e0_1)
    float temp0_1200[0x8] = _mm256_hadd_ps(zmm1, zmm1)
    zmm1 = _mm256_hadd_ps(temp0_1200, temp0_1200)
    arg5 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_3c0_1)
    float temp0_1203[0x8] = _mm256_hadd_ps(arg5, arg5)
    float temp0_1204[0x8] = _mm256_hadd_ps(temp0_1203, temp0_1203)
    var_4c0_2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ var_4c0_2[0]
    zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_3a0_1)
    zmm4[0].o = _mm256_extractf128_ps(temp0_1204[0].o, 1)
    float temp0_1208[0x8] = _mm256_hadd_ps(zmm3, zmm3)
    temp0_1204[0].o = temp0_1204[0].o f+ zmm4[0].d
    float temp0_1209[0x8] = _mm256_hadd_ps(temp0_1208, temp0_1208)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_1204[0].o, 0x10)
    temp0_1204[0].o = _mm256_extractf128_ps(temp0_1209[0].o, 1)
    temp0_1204[0].o = temp0_1209[0].o f+ temp0_1204[0]
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_1204[0].o, 0x20)
    temp0_1204[0].o = __vmovsd_xmmdq_memq(*rdx_23)
    temp0_1204[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1204[0].o, rdx_23[1].d, 0x20)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1204[0].o)
    *rdx_23 = zmm1[0]
    *(rdx_23 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    rdx_23[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0 = _mm256_and_ps(zmm0, arg12)
    zmm0 = _mm256_hadd_ps(zmm0, zmm0)
else
    int32_t rax_6 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    float var_340_1[0x8] = arg12
    float var_360_1[0x8] = arg12
    float var_380_1[0x8] = arg12
    double* rdx_22
    int32_t r11_1
    
    if (rax_6 s<= 0)
        r11_1 = 0
        result = arg20
        
        if (0 s< result)
        label_14006e579:
            zmm0[0].o = zx.o(r11_1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg11[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
            arg13[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
            zmm1[0].o = zx.o(result)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            float var_5e0_1[0x8] = zmm0
            arg15[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
            arg5 = _mm256_insertf128_ps(arg12, arg15[0].o, 1)
            float temp0_270[0x8] = _mm256_maskload_ps(arg5, *(arg16 + sx.q(r11_1 << 2)))
            zmm4[0].o = _mm256_extractf128_ps(temp0_270[0].o, 1)
            arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
            arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_270[0].o, temp0_270[0].o)
            temp0_270[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_270[0].o)
            zmm1 = _mm256_insertf128_ps(temp0_270, zmm4[0].o, 1)
            zmm4 = _mm256_and_ps(arg5, zmm1)
            int64_t r14_2 = sx.q(zmm4[0].d)
            int64_t r10_2 = arg4 + (r14_2 << 2)
            int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            int64_t r13_2 = arg4 + (r12_2 << 2)
            arg7[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            int64_t r11_3 = sx.q(arg7[0])
            int64_t rbx_2 = arg4 + (r11_3 << 2)
            int64_t rsi_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            int64_t rdi_2 = arg4 + (rsi_4 << 2)
            arg8 = __vandps_ymmqq_ymmqq_memqq(arg5, data_142fc9520)
            zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            zmm0[0].o = *(zx.q(zmm1[0]) + rbx_2)
            arg9 = __vandps_ymmqq_ymmqq_memqq(arg5, data_142fc9540)
            zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm3[0].o = *(zx.q(zmm5[0]) + rbx_2)
            int32_t temp0_285 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
            uint64_t rdx_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_4 + rdi_2), 0x10)
            uint64_t rdx_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_5 + rdi_2), 0x10)
            int64_t rcx_7 = sx.q(temp0_285)
            int64_t rdx_6 = arg4 + (rcx_7 << 2)
            uint64_t rbx_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_3 + rdx_6), 0x20)
            uint64_t rbx_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_4 + rdx_6), 0x20)
            int64_t rdx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            arg7[0].o = *(zx.q(arg8[0]) + r10_2)
            arg6[0].o = *(zx.q(arg9[0]) + r10_2)
            int64_t rbx_7 = arg4 + (rdx_8 << 2)
            uint64_t rdi_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_3 + rbx_7), 0x30)
            uint64_t rdi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_4 + rbx_7), 0x30)
            int32_t temp0_299 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            uint64_t rdi_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_5 + r13_2), 0x10)
            uint64_t rdi_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_6 + r13_2), 0x10)
            int64_t rbx_9 = sx.q(temp0_299)
            int64_t rdi_7 = arg4 + (rbx_9 << 2)
            uint64_t rax_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_44 + rdi_7), 0x20)
            uint64_t rax_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_45 + rdi_7), 0x20)
            arg6[0].o = *(arg4 + (r14_2 << 2))
            arg7[0].o = *(arg4 + (r11_3 << 2))
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rsi_4 << 2)), 0x10)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rcx_7 << 2)), 0x20)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rdx_8 << 2)), 0x30)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (r12_2 << 2)), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rbx_9 << 2)), 0x20)
            int64_t rax_47 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rax_47 << 2)), 0x30)
            int64_t rax_48 = arg4 + (rax_47 << 2)
            uint64_t rcx_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_8 + rax_48), 0x30)
            uint64_t rcx_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_9 + rax_48), 0x30)
            arg10 = _mm256_insertf128_ps(arg11, arg13[0].o, 1)
            double temp0_320[0x4] = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm5 = _mm256_broadcast_ss(arg3[3])
            int32_t var_5a0_2[0x8] = zmm5
            int32_t var_580_2[0x8] = zmm5
            int32_t var_560_2[0x8] = zmm5
            int32_t var_540_2[0x8] = zmm5
            float temp0_325[0x8] = _mm256_broadcast_ss(arg3[1])
            arg7 = _mm256_mul_ps(zmm1, temp0_325)
            float temp0_327[0x8] = _mm256_broadcast_ss(arg3[2])
            float temp0_328[0x8] = _mm256_mul_ps(temp0_320, temp0_327)
            float temp0_329[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_330[0x8] = _mm256_mul_ps(zmm0, temp0_327)
            float temp0_331[0x8] = _mm256_mul_ps(zmm0, temp0_329)
            float temp0_332[0x8] = _mm256_mul_ps(zmm5, zmm3)
            arg7 = _mm256_sub_ps(arg7, temp0_330)
            float temp0_335[0x8] = _mm256_sub_ps(temp0_328, _mm256_mul_ps(zmm1, temp0_329))
            float temp0_337[0x8] = _mm256_sub_ps(temp0_331, _mm256_mul_ps(temp0_320, temp0_325))
            float temp0_338[0x8] = _mm256_sub_ps(temp0_332, temp0_332)
            zmm4 = _mm256_add_ps(arg7, arg7)
            float temp0_340[0x8] = _mm256_add_ps(temp0_335, temp0_335)
            float temp0_341[0x8] = _mm256_add_ps(temp0_337, temp0_337)
            float temp0_342[0x8] = _mm256_add_ps(temp0_338, temp0_338)
            double var_460_2[0x4] = zmm4
            float var_440_2[0x8] = temp0_340
            float var_420_2[0x8] = temp0_341
            float var_400_2[0x8] = temp0_342
            float temp0_343[0x8] = _mm256_mul_ps(zmm5, zmm4)
            arg7 = _mm256_mul_ps(zmm5, temp0_340)
            float temp0_345[0x8] = _mm256_mul_ps(zmm5, temp0_341)
            float temp0_346[0x8] = _mm256_mul_ps(zmm5, temp0_342)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(temp0_343, temp0_320)
            float temp0_348[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg7, zmm0)
            arg7 = __vaddps_ymmqq_ymmqq_memqq(temp0_345, zmm1)
            int32_t var_180_1[0x8] = zmm5
            float var_160_1[0x8] = temp0_348
            uint32_t var_140_1[0x8] = arg7
            float var_120_1[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_346, zmm3)
            float temp0_351[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_352[0x8] = _mm256_mul_ps(temp0_341, temp0_351)
            float temp0_353[0x8] = _mm256_broadcast_ss(arg3[2])
            float temp0_355[0x8] = _mm256_sub_ps(temp0_352, _mm256_mul_ps(temp0_340, temp0_353))
            float temp0_356[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_357[0x8] = _mm256_mul_ps(temp0_340, temp0_356)
            float temp0_358[0x8] = _mm256_mul_ps(temp0_341, temp0_356)
            float temp0_360[0x8] = _mm256_sub_ps(_mm256_mul_ps(zmm4, temp0_353), temp0_358)
            float temp0_362[0x8] = _mm256_sub_ps(temp0_357, _mm256_mul_ps(zmm4, temp0_351))
            float temp0_363[0x8] = _mm256_broadcast_ss(arg3[4])
            float temp0_364[0x8] = _mm256_broadcast_ss(arg3[5])
            float temp0_365[0x8] = _mm256_broadcast_ss(arg3[6])
            zmm4 = _mm256_add_ps(zmm5, temp0_355)
            float temp0_367[0x8] = _mm256_add_ps(temp0_348, temp0_360)
            float temp0_368[0x8] = _mm256_add_ps(arg7, temp0_362)
            zmm4 = _mm256_add_ps(zmm4, temp0_363)
            arg7 = _mm256_add_ps(temp0_367, temp0_364)
            float temp0_371[0x8] = _mm256_broadcast_ss(*arg2)
            float temp0_372[0x8] = _mm256_broadcast_ss(arg2[1])
            arg11 = _mm256_broadcast_ss(arg2[2])
            zmm0 = _mm256_cmp_ps(zmm4, temp0_371, 6)
            temp0_362[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            temp0_362[0].o &= arg15[0].o
            temp0_362[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_362[0].o, arg15[0].o)
            temp0_363[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
            temp0_363[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_363[0].o, arg12[0].o)
            arg6 = _mm256_broadcast_ss(*arg1)
            zmm1 = _mm256_insertf128_ps(temp0_363, temp0_362[0].o, 1)
            float temp0_381[0x8] = _mm256_broadcast_ss(arg1[1])
            char temp0_382 = _mm256_movemask_ps(zmm1)
            float temp0_383[0x8] = _mm256_broadcast_ss(arg1[2])
            zmm3 = _mm256_insertf128_ps(var_5e0_1, var_5e0_1[0].o, 1)
            uint32_t var_5e0_2[0x8] = arg7
            float var_500_2[0x8] = arg10
            var_4e0.32 = zmm3
            
            if (temp0_382 == 0xff)
                arg10 = _mm256_cmp_ps(zmm4, temp0_371, 2)
                arg15 = _mm256_and_ps(zmm0, arg5)
            else
                zmm0 = _mm256_cmp_ps(zmm4, temp0_371, 2)
                var_5e0_1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                zmm5 = _mm256_cmp_ps(arg7, temp0_372, 2)
                arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm3[0].o &= arg7[0].o
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_5e0_1[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                zmm0[0].o &= zmm5[0].o
                var_5e0_1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                arg10 = _mm256_insertf128_ps(var_5e0_1, zmm0[0].o, 1)
                arg15 = _mm256_andnot_ps(arg10, arg5)
            
            zmm1 = _mm256_add_ps(temp0_368, temp0_365)
            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            zmm3[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
            zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            rcx_17 = arg18
            rdx_22 = arg19
            
            if (_mm256_movemask_ps(zmm3) != 0xff)
                zmm5 = _mm256_cmp_ps(zmm1, arg11, 2)
                arg10 = _mm256_and_ps(zmm5, _mm256_and_ps(arg10, arg5))
                arg15 = _mm256_xor_ps(arg10, arg5)
            
            zmm3[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
            
            if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm3, zmm0[0].o, 1)) == 0xff)
                arg7 = var_5e0_2
            else
                arg10 = _mm256_and_ps(arg10, arg5)
                arg13 = _mm256_cmp_ps(arg6, zmm4, 2)
                zmm0 = _mm256_and_ps(arg10, _mm256_cmp_ps(arg6, zmm4, 6))
                zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                zmm3 = _mm256_insertf128_ps(arg7, zmm3[0].o, 1)
                
                if (_mm256_movemask_ps(zmm3) == 0xff)
                    arg7 = var_5e0_2
                else
                    arg7 = var_5e0_2
                    float temp0_825[0x8] = _mm256_cmp_ps(temp0_381, arg7, 2)
                    zmm3 = _mm256_and_ps(arg10, arg13)
                    arg13 = _mm256_and_ps(temp0_825, zmm3)
                    zmm0 = _mm256_xor_ps(arg13, arg10)
                
                zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                
                if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm0, zmm3[0].o, 1)) != 0xff)
                    float temp0_866[0x8] = _mm256_cmp_ps(temp0_383, zmm1, 2)
                    zmm3 = _mm256_and_ps(arg13, arg10)
                    arg13 = _mm256_and_ps(temp0_866, zmm3)
                
                arg10 = _mm256_and_ps(arg13, arg10)
            
            float temp0_870[0x8] = _mm256_sub_ps(zmm4, temp0_371)
            arg13 = _mm256_sub_ps(arg7, temp0_372)
            arg8 = _mm256_sub_ps(zmm1, arg11)
            arg14 = _mm256_sub_ps(arg6, zmm4)
            arg9 = _mm256_sub_ps(temp0_381, arg7)
            arg7 = _mm256_sub_ps(temp0_383, zmm1)
            int32_t temp0_877 = _mm256_movemask_ps(_mm256_and_ps(arg10, arg5))
            float temp0_879[0x8]
            int32_t temp0_921
            
            if (temp0_877 != 0)
                arg6 = _mm256_max_ps(arg14, temp0_870)
                temp0_879 = _mm256_max_ps(arg9, arg13)
                arg11 = _mm256_max_ps(arg7, arg8)
                float temp0_881[0x8] = _mm256_cmp_ps(temp0_879, arg6, 1)
                zmm5 = _mm256_and_ps(arg10, temp0_881)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm5, arg5)) != 0)
                    zmm5 = _mm256_and_ps(_mm256_cmp_ps(arg11, arg6, 5), zmm5)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, arg5)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg11, zmm5)
                
                zmm0 = _mm256_andnot_ps(temp0_881, arg10)
                zmm3 = _mm256_and_ps(zmm0, arg5)
                temp0_921 = _mm256_movemask_ps(zmm3)
            
            if (temp0_877 == 0 || temp0_921 == 0)
                arg12 = arg12
                zmm0 = _mm256_andnot_ps(arg10, arg5)
                
                if (_mm256_movemask_ps(zmm0) == 0)
                    arg7 = var_500_2
                    arg15 = var_4e0.32
                else
                label_14006fb0b:
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg10 = _mm256_xor_ps(arg10, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                    float temp0_938[0x8] = _mm256_cmp_ps(zmm0, temp0_870, 1)
                    int32_t temp0_939[0x8] = _mm256_and_ps(temp0_938, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(temp0_939, arg5)) != 0)
                        var_5a0_2 = _mm256_maskstore_ps(temp0_939, temp0_870)
                    
                    zmm0 = _mm256_andnot_ps(temp0_938, arg10)
                    zmm3 = _mm256_and_ps(zmm0, arg5)
                    arg15 = var_4e0.32
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        zmm5 = _mm256_cmp_ps(zmm3, arg14, 1)
                        arg11 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg11, arg5)) != 0)
                            var_5a0_2 = _mm256_maskstore_ps(arg11, 
                                __vxorps_ymmqq_ymmqq_memqq(arg14, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        zmm3 = _mm256_and_ps(zmm0, arg5)
                        
                        if (_mm256_movemask_ps(zmm3) != 0)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            var_5a0_2 = _mm256_maskstore_ps(zmm0, zmm3)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_959[0x8] = _mm256_cmp_ps(zmm0, arg13, 1)
                    int32_t temp0_960[0x8] = _mm256_and_ps(temp0_959, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(temp0_960, arg5)) != 0)
                        var_580_2 = _mm256_maskstore_ps(temp0_960, arg13)
                    
                    zmm0 = _mm256_andnot_ps(temp0_959, arg10)
                    zmm3 = _mm256_and_ps(zmm0, arg5)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        zmm5 = _mm256_cmp_ps(zmm3, arg9, 1)
                        arg11 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg11, arg5)) != 0)
                            var_580_2 = _mm256_maskstore_ps(arg11, 
                                __vxorps_ymmqq_ymmqq_memqq(arg9, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        zmm3 = _mm256_and_ps(zmm0, arg5)
                        
                        if (_mm256_movemask_ps(zmm3) != 0)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            var_580_2 = _mm256_maskstore_ps(zmm0, zmm3)
                    
                    arg9 = arg7
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_980[0x8] = _mm256_cmp_ps(zmm0, arg8, 1)
                    zmm5 = _mm256_and_ps(temp0_980, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, arg5)) != 0)
                        var_560_2 = _mm256_maskstore_ps(zmm5, arg8)
                    
                    zmm0 = _mm256_andnot_ps(temp0_980, arg10)
                    zmm3 = _mm256_and_ps(zmm0, arg5)
                    arg7 = var_500_2
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        zmm5 = _mm256_cmp_ps(zmm3, arg9, 1)
                        arg8 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg8, arg5)) != 0)
                            var_560_2 = _mm256_maskstore_ps(arg8, 
                                __vxorps_ymmqq_ymmqq_memqq(arg9, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        arg5 = _mm256_and_ps(zmm0, arg5)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_560_2 = _mm256_maskstore_ps(zmm0, arg5)
                    
                    zmm0 = var_5a0_2
                    arg5 = var_580_2
                    zmm3 = var_560_2
                    float temp0_1000[0x8] = _mm256_mul_ps(zmm0, zmm0)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    float temp0_1006[0x8] = _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(temp0_1000, zmm5), _mm256_mul_ps(arg5, arg5)), 
                        _mm256_mul_ps(zmm3, zmm3))
                    float temp0_1007[0x8] = _mm256_rsqrt_ps(temp0_1006)
                    float temp0_1009[0x8] =
                        _mm256_mul_ps(temp0_1007, _mm256_mul_ps(temp0_1006, temp0_1007))
                    float temp0_1012[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(temp0_1007, _mm256_sub_ps(data_142fc9480, temp0_1009)), 
                        data_142fc94a0)
                    arg5 = _mm256_rcp_ps(temp0_1012)
                    float temp0_1014[0x8] = _mm256_mul_ps(arg5, temp0_1012)
                    zmm3 = data_142fc94c0
                    zmm0 = _mm256_mul_ps(arg5, _mm256_sub_ps(zmm3, temp0_1014))
                    arg6 = _mm256_blendv_ps(arg6, zmm0, arg10)
            else
                float var_5c0_5[0x8] = arg8
                arg8 = arg9
                arg9 = zmm1
                zmm1 = arg7
                zmm5 = _mm256_cmp_ps(arg11, temp0_879, 1)
                arg7 = _mm256_and_ps(zmm0, zmm5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg7, arg5)) != 0)
                    arg6 = _mm256_blendv_ps(arg6, temp0_879, arg7)
                
                zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                zmm3 = _mm256_and_ps(zmm0, arg5)
                arg12 = arg12
                arg7 = zmm1
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    arg6 = _mm256_blendv_ps(arg6, arg11, zmm0)
                
                zmm1 = arg9
                arg9 = arg8
                arg8 = var_5c0_5
                zmm0 = _mm256_andnot_ps(arg10, arg5)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    goto label_14006fb0b
                
                arg7 = var_500_2
                arg15 = var_4e0.32
            
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            arg5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            zmm0[0].o = arg17
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            float temp0_1023[0x8] = _mm256_sub_ps(arg6, _mm256_insertf128_ps(zmm0, zmm0[0].o, 1))
            arg6 = __vcmpps_ymmqq_ymmqq_memqq_immb(temp0_1023, data_142fc94e0, 1)
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            arg5[0].o &= zmm5[0].o
            zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1023[0].o)
            result = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
            
            if (result.b != 0)
                zmm3 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                zmm4 = _mm256_mul_ps(zmm4, temp0_1023)
                zmm5 = __vmulps_ymmqq_ymmqq_memqq(temp0_1023, var_5e0_2)
                float temp0_1034[0x8] = _mm256_mul_ps(zmm1, temp0_1023)
                zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_380_1)
                zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_360_1)
                float temp0_1037[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1034, var_340_1)
                zmm3 = _mm256_and_ps(arg6, zmm3)
                var_380_1 = _mm256_maskstore_ps(zmm3, zmm4)
                int256_t var_360
                result = &var_360
                var_360_1 = _mm256_maskstore_ps(zmm3, zmm5)
                var_340_1 = _mm256_maskstore_ps(zmm3, temp0_1037)
                float temp0_1042[0x8] = _mm256_add_ps(arg12, temp0_1023)
                temp0_1037[0].o = __vpmovsxwd_xmmdq_xmmq(arg5[0].q)
                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(arg5[0].q)
                arg12 = _mm256_blendv_ps(arg12, temp0_1042, 
                    _mm256_insertf128_ps(temp0_1037, arg5[0].o, 1))
        else
            rcx_17 = arg18
            rdx_22 = arg19
    else
        float temp0_2[0x8] = _mm256_broadcast_ss(arg3[3])
        temp0_2[0].o = *arg3
        zmm1[0].o = arg3[1]
        zmm3[0].o = arg3[2]
        arg11 = _mm256_broadcast_ss(*arg2)
        float temp0_4[0x8] = _mm256_broadcast_ss(arg2[1])
        float temp0_5[0x8] = _mm256_broadcast_ss(arg2[2])
        float temp0_6[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_7[0x8] = _mm256_broadcast_ss(arg1[1])
        float temp0_8[0x8] = _mm256_broadcast_ss(arg1[2])
        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0)
        float var_300_1[0x8] = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        int32_t r13_1 = 0
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        float var_320_1[0x8] = zmm1
        zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        float var_4a0_1[0x8] = zmm1
        temp0_2[0].o = _mm_permute_ps(temp0_2[0].o, 0)
        zmm0 = _mm256_insertf128_ps(temp0_2, temp0_2[0].o, 1)
        float var_4c0_1[0x8] = zmm0
        r11_1 = 0
        arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        
        do
            float* r12_1 = arg1
            int64_t rax_8 = sx.q(r13_1)
            int128_t* rcx = arg16
            zmm0[0].o = *(rcx + rax_8)
            zmm1[0].o = *(rcx + rax_8 + 0x10)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            int64_t rdi_1 = sx.q(zmm0[0])
            int64_t r14_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t rax_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rbx_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            int64_t rsi_3 = sx.q(zmm1[0])
            int64_t rcx_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int64_t rdx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm0[0].o = *(arg4 + (rsi_3 << 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rcx_1 << 2)), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (r15_2 << 2)), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rdx_2 << 2)), 0x30)
            zmm1[0].o = *(arg4 + (rsi_3 << 2) + 4)
            zmm3[0].o = *(arg4 + (rdi_1 << 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (r14_1 << 2)), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rax_12 << 2)), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rbx_1 << 2)), 0x30)
            zmm4[0].o = *(arg4 + (rdi_1 << 2) + 4)
            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rcx_1 << 2) + 4), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (r15_2 << 2) + 4), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rdx_2 << 2) + 4), 0x30)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (r14_1 << 2) + 4), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rax_12 << 2) + 4), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rbx_1 << 2) + 4), 0x30)
            zmm4[0].o = *(arg4 + (rdi_1 << 2) + 8)
            zmm5[0].o = *(arg4 + (rsi_3 << 2) + 8)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rcx_1 << 2) + 8), 0x10)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (r15_2 << 2) + 8), 0x20)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rdx_2 << 2) + 8), 0x30)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (r14_1 << 2) + 8), 0x10)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rax_12 << 2) + 8), 0x20)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rbx_1 << 2) + 8), 0x30)
            zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            zmm3 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
            float var_400_1[0x8] = arg13
            float var_5a0_1[0x8] = temp0_2
            float var_580_1[0x8] = temp0_2
            float var_560_1[0x8] = temp0_2
            float var_540_1[0x8] = temp0_2
            zmm4 = _mm256_mul_ps(zmm3, var_320_1)
            arg13 = var_4a0_1
            zmm5 = _mm256_mul_ps(zmm0, arg13)
            float temp0_53[0x8] = _mm256_mul_ps(zmm1, var_4c0_1)
            float temp0_55[0x8] = _mm256_sub_ps(zmm4, _mm256_mul_ps(zmm1, arg13))
            float temp0_57[0x8] = _mm256_sub_ps(zmm5, _mm256_mul_ps(zmm3, var_4c0_1))
            float temp0_59[0x8] = _mm256_sub_ps(temp0_53, _mm256_mul_ps(zmm0, var_320_1))
            float temp0_60[0x8] = _mm256_add_ps(temp0_55, temp0_55)
            float temp0_61[0x8] = _mm256_add_ps(temp0_57, temp0_57)
            float temp0_62[0x8] = _mm256_add_ps(temp0_59, temp0_59)
            zmm4 = _mm256_mul_ps(temp0_2, temp0_60)
            zmm5 = _mm256_mul_ps(temp0_2, temp0_61)
            zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, zmm0)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, zmm1)
            float temp0_68[0x8] = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_2, temp0_62), zmm3)
            arg7 = _mm256_mul_ps(temp0_62, var_320_1)
            float temp0_70[0x8] = _mm256_mul_ps(temp0_60, arg13)
            float temp0_71[0x8] = _mm256_mul_ps(temp0_61, var_4c0_1)
            float temp0_74[0x8] =
                _mm256_add_ps(zmm4, _mm256_sub_ps(arg7, _mm256_mul_ps(temp0_61, arg13)))
            float temp0_77[0x8] =
                _mm256_add_ps(zmm5, _mm256_sub_ps(temp0_70, _mm256_mul_ps(temp0_62, var_4c0_1)))
            float temp0_80[0x8] =
                _mm256_add_ps(temp0_68, _mm256_sub_ps(temp0_71, _mm256_mul_ps(temp0_60, var_320_1)))
            zmm4 = _mm256_broadcast_ss(arg3[4])
            arg14 = _mm256_add_ps(temp0_74, zmm4)
            arg5 = _mm256_add_ps(temp0_77, _mm256_broadcast_ss(arg3[5]))
            arg10 = _mm256_add_ps(temp0_80, _mm256_broadcast_ss(arg3[6]))
            float temp0_87[0x8] = _mm256_cmp_ps(arg14, arg11, 2)
            zmm1 = _mm256_cmp_ps(arg14, arg11, 6)
            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_77[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0xff)
                zmm1[0].o = _mm256_extractf128_ps(temp0_87[0].o, 1)
                temp0_87[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_87[0].o, zmm1[0].o)
            label_14006e13a:
                arg1 = r12_1
                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(temp0_87[0].q)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                temp0_87[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(temp0_87[0].o, temp0_77[0].o)
                temp0_87[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_87[0].o, 0x1f)
                temp0_87[0].o = __vpsrad_xmmdq_xmmdq_immb(temp0_87[0].o, 0x1f)
                arg6 = _mm256_insertf128_ps(zmm1, temp0_87[0].o, 1)
            else
                zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg5, _mm256_broadcast_ss(arg2[1]), 2), temp0_87)
                temp0_87[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                temp0_87[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_87[0].o)
                zmm1[0].o = temp0_87[0].o ^ arg15[0].o
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_77[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0xff)
                    goto label_14006e13a
                
                float temp0_101[0x8] = _mm256_cmp_ps(arg10, _mm256_broadcast_ss(arg2[2]), 2)
                zmm4[0].o = _mm256_extractf128_ps(temp0_101[0].o, 1)
                temp0_101[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_101[0].o, zmm4[0].o)
                zmm4[0].o = temp0_101[0].o & temp0_87[0].o
                temp0_101[0].o = zmm4[0].o ^ arg15[0].o
                temp0_101[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_101[0].o, temp0_77[0].o)
                char temp0_105 = __vpmovmskb_gpr32d_xmmdq(temp0_101[0].o)
                temp0_101[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
                temp0_87[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                temp0_87[0].o = __vpmovsxwd_xmmdq_xmmq(temp0_87[0].q)
                arg6 = _mm256_insertf128_ps(temp0_101, temp0_87[0].o, 1)
                
                if (temp0_105 == 0xff)
                    arg1 = r12_1
                else
                    arg1 = r12_1
                    arg7 = _mm256_broadcast_ss(*r12_1)
                    float temp0_111[0x8] = _mm256_cmp_ps(arg7, arg14, 6)
                    zmm5 = _mm256_and_ps(temp0_111, arg6)
                    temp0_111[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    temp0_87[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    temp0_111[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_111[0].o, temp0_87[0].o)
                    temp0_70[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm1 = _mm256_insertf128_ps(temp0_70, temp0_111[0].o, 1)
                    
                    if (_mm256_movemask_ps(zmm1) == 0xff)
                        zmm4 = _mm256_cmp_ps(arg7, arg14, 2)
                    else
                        zmm1 = _mm256_cmp_ps(arg7, arg14, 2)
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        zmm5 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), arg5, 2)
                        arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                        zmm1[0].o &= zmm4[0].o
                        zmm1[0].o &= zmm5[0].o
                        zmm4[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                        zmm5 = _mm256_andnot_ps(zmm4, arg6)
                    
                    zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_87[0].o)
                    temp0_87[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    
                    if (_mm256_movemask_ps(_mm256_insertf128_ps(temp0_87, zmm1[0].o, 1)) != 0xff)
                        zmm4 = _mm256_and_ps(_mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg10, 2), 
                            _mm256_and_ps(zmm4, arg6))
                    
                    arg6 = _mm256_and_ps(zmm4, arg6)
            
            float temp0_151[0x8] = _mm256_sub_ps(arg14, arg11)
            arg8 = __vsubps_ymmqq_ymmqq_memqq(arg5, temp0_4)
            zmm5 = __vsubps_ymmqq_ymmqq_memqq(arg10, temp0_5)
            arg9 = _mm256_sub_ps(temp0_6, arg14)
            float temp0_155[0x8] = _mm256_sub_ps(temp0_7, arg5)
            float var_5c0_1[0x8] = arg10
            arg7 = _mm256_sub_ps(temp0_8, arg10)
            
            if (_mm256_movemask_ps(arg6) == 0)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            else
                float var_520_1[0x8] = arg12
                arg15 = _mm256_max_ps(arg9, temp0_151)
                float temp0_159[0x8] = _mm256_max_ps(temp0_155, arg8)
                arg10 = _mm256_max_ps(arg7, zmm5)
                float temp0_161[0x8] = _mm256_cmp_ps(temp0_159, arg15, 1)
                arg13 = _mm256_and_ps(arg6, temp0_161)
                
                if (_mm256_movemask_ps(arg13) == 0)
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    arg12 = _mm256_andnot_ps(temp0_161, arg6)
                    
                    if (_mm256_movemask_ps(arg12) != 0)
                    label_14006e299:
                        float temp0_175[0x8] = _mm256_cmp_ps(arg10, temp0_159, 1)
                        zmm4 = _mm256_and_ps(arg12, temp0_175)
                        
                        if (_mm256_movemask_ps(zmm4) != 0)
                            var_5e0 = _mm256_blendv_ps(var_5e0, temp0_159, zmm4)
                        
                        arg11 = arg11
                        zmm1 = _mm256_andnot_ps(temp0_175, arg12)
                        
                        if (_mm256_movemask_ps(zmm1) != 0)
                            var_5e0 = _mm256_blendv_ps(var_5e0, arg10, zmm1)
                        
                        arg12 = var_520_1
                    else
                        arg12 = var_520_1
                        arg11 = arg11
                else
                    float temp0_164[0x8] = _mm256_cmp_ps(arg10, arg15, 1)
                    zmm4 = _mm256_and_ps(arg13, temp0_164)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_5e0 = _mm256_blendv_ps(var_5e0, arg15, zmm4)
                    
                    arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    zmm1 = _mm256_andnot_ps(temp0_164, arg13)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_5e0 = _mm256_blendv_ps(var_5e0, arg10, zmm1)
                    
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    arg7 = arg7
                    arg12 = _mm256_andnot_ps(temp0_161, arg6)
                    
                    if (_mm256_movemask_ps(arg12) != 0)
                        goto label_14006e299
                    
                    arg12 = var_520_1
                    arg11 = arg11
                
                arg5 = arg5
            
            zmm1 = _mm256_cmp_ps(arg13, arg13, 0xf)
            arg6 = _mm256_xor_ps(arg6, zmm1)
            
            if (_mm256_movemask_ps(arg6) == 0)
                zmm0 = var_5e0
            else
                float temp0_190[0x8] = _mm256_cmp_ps(arg13, temp0_151, 1)
                arg10 = _mm256_and_ps(temp0_190, arg6)
                
                if (_mm256_movemask_ps(arg10) != 0)
                    var_5a0_1 = _mm256_maskstore_ps(arg10, temp0_151)
                
                zmm3 = _mm256_andnot_ps(temp0_190, arg6)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_196[0x8] = _mm256_cmp_ps(arg13, arg9, 1)
                    arg10 = _mm256_and_ps(zmm3, temp0_196)
                    
                    if (_mm256_movemask_ps(arg10) != 0)
                        var_5a0_1 = _mm256_maskstore_ps(arg10, 
                            __vxorps_ymmqq_ymmqq_memqq(arg9, data_142fc9460))
                    
                    zmm1 = _mm256_andnot_ps(temp0_196, zmm3)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_5a0_1 = _mm256_maskstore_ps(zmm1, arg13)
                
                float temp0_204[0x8] = _mm256_cmp_ps(arg13, arg8, 1)
                zmm3 = _mm256_and_ps(temp0_204, arg6)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_580_1 = _mm256_maskstore_ps(zmm3, arg8)
                
                zmm3 = _mm256_andnot_ps(temp0_204, arg6)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_210[0x8] = _mm256_cmp_ps(arg13, temp0_155, 1)
                    arg8 = _mm256_and_ps(zmm3, temp0_210)
                    
                    if (_mm256_movemask_ps(arg8) != 0)
                        var_580_1 = _mm256_maskstore_ps(arg8, 
                            __vxorps_ymmqq_ymmqq_memqq(temp0_155, data_142fc9460))
                    
                    zmm1 = _mm256_andnot_ps(temp0_210, zmm3)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_580_1 = _mm256_maskstore_ps(zmm1, arg13)
                
                float temp0_218[0x8] = _mm256_cmp_ps(arg13, zmm5, 1)
                zmm3 = _mm256_and_ps(temp0_218, arg6)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_560_1 = _mm256_maskstore_ps(zmm3, zmm5)
                
                zmm3 = _mm256_andnot_ps(temp0_218, arg6)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_224[0x8] = _mm256_cmp_ps(arg13, arg7, 1)
                    zmm5 = _mm256_and_ps(zmm3, temp0_224)
                    
                    if (_mm256_movemask_ps(zmm5) != 0)
                        var_560_1 = _mm256_maskstore_ps(zmm5, 
                            __vxorps_ymmqq_ymmqq_memqq(arg7, data_142fc9460))
                    
                    zmm1 = _mm256_andnot_ps(temp0_224, zmm3)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_560_1 = _mm256_maskstore_ps(zmm1, arg13)
                
                zmm4 = var_560_1
                float temp0_237[0x8] = _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(var_5a0_1, var_5a0_1), arg13), 
                        _mm256_mul_ps(var_580_1, var_580_1)), 
                    _mm256_mul_ps(zmm4, zmm4))
                float temp0_238[0x8] = _mm256_rsqrt_ps(temp0_237)
                float temp0_240[0x8] = _mm256_mul_ps(temp0_238, _mm256_mul_ps(temp0_237, temp0_238))
                float temp0_243[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_238, _mm256_sub_ps(data_142fc9480, temp0_240)), 
                    data_142fc94a0)
                float temp0_244[0x8] = _mm256_rcp_ps(temp0_243)
                float temp0_245[0x8] = _mm256_mul_ps(temp0_244, temp0_243)
                zmm1 = _mm256_mul_ps(temp0_244, _mm256_sub_ps(data_142fc94c0, temp0_245))
                zmm0 = _mm256_blendv_ps(var_5e0, zmm1, arg6)
            
            var_5e0 = zmm0
            zmm3 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_300_1)
            zmm4 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm3, data_142fc94e0, 1)
            
            if (_mm256_movemask_ps(zmm4) != 0)
                float temp0_252[0x8] = _mm256_mul_ps(arg14, zmm3)
                float temp0_253[0x8] = _mm256_mul_ps(arg5, zmm3)
                zmm5 = __vmulps_ymmqq_ymmqq_memqq(zmm3, var_5c0_1)
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(temp0_252, var_380_1)
                float temp0_256[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_253, var_360_1)
                zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_340_1)
                var_380_1 = _mm256_maskstore_ps(zmm4, zmm1)
                var_360_1 = _mm256_maskstore_ps(zmm4, temp0_256)
                var_340_1 = _mm256_maskstore_ps(zmm4, zmm5)
                zmm0 = _mm256_add_ps(arg12, zmm3)
                arg12 = _mm256_blendv_ps(arg12, zmm0, zmm4)
            
            r11_1 += 8
            r13_1 += 0x20
        while (r11_1 s< rax_6)
        
        result = arg20
        
        if (r11_1 s< result)
            goto label_14006e579
        
        rcx_17 = arg18
        rdx_22 = arg19
    float temp0_1048[0x8] = _mm256_hadd_ps(var_380_1, var_380_1)
    float temp0_1049[0x8] = _mm256_hadd_ps(temp0_1048, temp0_1048)
    zmm3[0].o = _mm256_extractf128_ps(temp0_1049[0].o, 1)
    float temp0_1051[0x8] = _mm256_hadd_ps(var_360_1, var_360_1)
    temp0_1049[0].o = temp0_1049[0].o f+ zmm3[0]
    zmm1 = _mm256_hadd_ps(temp0_1051, temp0_1051)
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    float temp0_1054[0x8] = _mm256_hadd_ps(var_340_1, var_340_1)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    float temp0_1055[0x8] = _mm256_hadd_ps(temp0_1054, temp0_1054)
    temp0_1049[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_1049[0].o, zmm1[0].o, 0x10)
    zmm1[0].o = _mm256_extractf128_ps(temp0_1055[0].o, 1)
    zmm1[0].o = temp0_1055[0].o f+ zmm1[0]
    temp0_1049[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_1049[0].o, zmm1[0].o, 0x20)
    zmm1[0].o = __vmovsd_xmmdq_memq(*rdx_22)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, rdx_22[1].d, 0x20)
    temp0_1049[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_1049[0].o, zmm1[0].o)
    *rdx_22 = temp0_1049[0]
    *(rdx_22 + 4) = __vextractps_memd_xmmdq_immb(temp0_1049[0].o, 1)
    rdx_22[1].d = __vextractps_memd_xmmdq_immb(temp0_1049[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg12, arg12)
float temp0_1220[0x8] = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(temp0_1220[0].o, 1)
temp0_1220[0].o = temp0_1220[0].o f+ zmm1[0]
temp0_1220[0].o = temp0_1220[0].o f+ *rcx_17
*rcx_17 = temp0_1220[0]
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
