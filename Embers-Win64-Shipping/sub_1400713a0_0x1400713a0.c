// 函数: sub_1400713a0
// 地址: 0x1400713a0
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
float zmm0[0x8] = *arg21
double* r11 = arg19
int32_t* r10 = arg18
double zmm4[0x4]
zmm4[0].o = arg17
float var_1a0[0x8] = zmm0
int32_t result = _mm256_movemask_ps(zmm0)
double var_5c0[0x4]
float zmm3[0x8]
float zmm5[0x8]

if (result != 0xff)
    int32_t rdi_9 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
    float var_3c0_1[0x8] = arg13
    float var_3e0_1[0x8] = arg13
    float var_400_1[0x8] = arg13
    int32_t rsi_1
    
    if (rdi_9 s<= 0)
        rsi_1 = 0
        
        if (0 s< arg20)
        label_140072943:
            zmm0[0].o = zx.o(rsi_1)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg12[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, data_142e11d00)
            arg14[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, data_142fc9500)
            arg6[0].o = zx.o(arg20)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg14[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg12[0].o)
            arg6 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
            float var_5c0_3[0x8] = zmm0
            arg16[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
            arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
            zmm3 = _mm256_insertf128_ps(arg13, arg16[0].o, 1)
            zmm4 = _mm256_and_ps(zmm3, arg6)
            int64_t r14_2 = sx.q(zmm4[0].d)
            void* rdi_15 = arg4 + (r14_2 << 2)
            int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            void* r13_2 = arg4 + (r12_2 << 2)
            arg8[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            int64_t r15_2 = sx.q(arg8[0])
            void* r10_2 = arg4 + (r15_2 << 2)
            int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
            void* rbx_12 = arg4 + (r11_3 << 2)
            int32_t temp0_663[0x8] = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9520)
            arg6[0].o = _mm256_extractf128_ps(temp0_663[0].o, 1)
            zmm5[0].o = *(zx.q(arg6[0]) + r10_2)
            arg10 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9540)
            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            zmm0[0].o = *(zx.q(arg7[0]) + r10_2)
            int32_t temp0_667 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            uint64_t rsi_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_13 + rbx_12), 0x10)
            float* rsi_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_14 + rbx_12), 0x10)
            int64_t r10_3 = sx.q(temp0_667)
            void* rbx_13 = arg4 + (r10_3 << 2)
            uint64_t rsi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_15 + rbx_13), 0x20)
            float* rsi_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_16 + rbx_13), 0x20)
            int64_t rbx_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
            arg8[0].o = *(zx.q(temp0_663[0]) + rdi_15)
            arg5[0].o = *(zx.q(arg10[0]) + rdi_15)
            void* rsi_19 = arg4 + (rbx_15 << 2)
            uint64_t rdi_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_16 + rsi_19), 0x30)
            float* rdi_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_17 + rsi_19), 0x30)
            int32_t temp0_681 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            uint64_t rsi_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_663[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rsi_20 + r13_2), 0x10)
            uint64_t rsi_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_21 + r13_2), 0x10)
            int64_t rdi_19 = sx.q(temp0_681)
            void* rsi_22 = arg4 + (rdi_19 << 2)
            uint64_t rax_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_663[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_71 + rsi_22), 0x20)
            uint64_t rax_72 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_72 + rsi_22), 0x20)
            arg7[0].o = *(arg4 + (r14_2 << 2))
            arg8[0].o = *(arg4 + (r15_2 << 2))
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + (r11_3 << 2)), 0x10)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + (r10_3 << 2)), 0x20)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + (rbx_15 << 2)), 0x30)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (r12_2 << 2)), 0x10)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rdi_19 << 2)), 0x20)
            int64_t rax_74 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rax_74 << 2)), 0x30)
            void* rax_75 = arg4 + (rax_74 << 2)
            uint64_t rbx_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_663[0].o, 3))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_16 + rax_75), 0x30)
            float* rbx_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_17 + rax_75), 0x30)
            arg11 = _mm256_insertf128_ps(arg12, arg14[0].o, 1)
            double temp0_702[0x4] = _mm256_insertf128_ps(zmm4, arg8[0].o, 1)
            arg6 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_706[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_580_4[0x8] = temp0_706
            float var_560_4[0x8] = temp0_706
            float var_540_4[0x8] = temp0_706
            float var_520_4[0x8] = temp0_706
            float temp0_707[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_708[0x8] = _mm256_mul_ps(zmm0, temp0_707)
            arg9 = _mm256_broadcast_ss(arg3[2])
            float temp0_710[0x8] = _mm256_mul_ps(temp0_702, arg9)
            float temp0_711[0x8] = _mm256_broadcast_ss(*arg3)
            arg9 = _mm256_mul_ps(arg6, arg9)
            float temp0_713[0x8] = _mm256_mul_ps(arg6, temp0_711)
            float temp0_714[0x8] = _mm256_mul_ps(temp0_706, arg5)
            float temp0_715[0x8] = _mm256_sub_ps(temp0_708, arg9)
            float temp0_717[0x8] = _mm256_sub_ps(temp0_710, _mm256_mul_ps(zmm0, temp0_711))
            float temp0_719[0x8] = _mm256_sub_ps(temp0_713, _mm256_mul_ps(temp0_702, temp0_707))
            float temp0_720[0x8] = _mm256_sub_ps(temp0_714, temp0_714)
            zmm4 = _mm256_add_ps(temp0_715, temp0_715)
            float temp0_722[0x8] = _mm256_add_ps(temp0_717, temp0_717)
            float temp0_723[0x8] = _mm256_add_ps(temp0_719, temp0_719)
            float temp0_724[0x8] = _mm256_add_ps(temp0_720, temp0_720)
            double var_480_4[0x4] = zmm4
            float var_460_4[0x8] = temp0_722
            float var_440_4[0x8] = temp0_723
            float var_420_4[0x8] = temp0_724
            float temp0_725[0x8] = _mm256_mul_ps(temp0_706, zmm4)
            float temp0_726[0x8] = _mm256_mul_ps(temp0_706, temp0_722)
            arg9 = _mm256_mul_ps(temp0_706, temp0_723)
            float temp0_728[0x8] = _mm256_mul_ps(temp0_706, temp0_724)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(temp0_725, temp0_702)
            float temp0_730[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_726, arg6)
            float temp0_731[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg9, zmm0)
            float var_180_2[0x8] = zmm5
            float var_160_2[0x8] = temp0_730
            float var_140_2[0x8] = temp0_731
            float var_120_2[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_728, arg5)
            float temp0_733[0x8] = _mm256_broadcast_ss(arg3[1])
            arg9 = _mm256_mul_ps(temp0_723, temp0_733)
            float temp0_735[0x8] = _mm256_broadcast_ss(arg3[2])
            arg9 = _mm256_sub_ps(arg9, _mm256_mul_ps(temp0_722, temp0_735))
            float temp0_738[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_739[0x8] = _mm256_mul_ps(temp0_722, temp0_738)
            float temp0_740[0x8] = _mm256_mul_ps(temp0_723, temp0_738)
            float temp0_742[0x8] = _mm256_sub_ps(_mm256_mul_ps(zmm4, temp0_735), temp0_740)
            float temp0_744[0x8] = _mm256_sub_ps(temp0_739, _mm256_mul_ps(zmm4, temp0_733))
            float temp0_745[0x8] = _mm256_broadcast_ss(arg3[4])
            float temp0_746[0x8] = _mm256_broadcast_ss(arg3[5])
            float temp0_747[0x8] = _mm256_broadcast_ss(arg3[6])
            zmm4 = _mm256_add_ps(zmm5, arg9)
            float temp0_749[0x8] = _mm256_add_ps(temp0_730, temp0_742)
            float temp0_750[0x8] = _mm256_add_ps(temp0_731, temp0_744)
            zmm4 = _mm256_add_ps(zmm4, temp0_745)
            float temp0_752[0x8] = _mm256_add_ps(temp0_749, temp0_746)
            float temp0_753[0x8] = _mm256_broadcast_ss(*arg2)
            arg9 = _mm256_broadcast_ss(arg2[1])
            arg12 = _mm256_broadcast_ss(arg2[2])
            zmm0 = _mm256_cmp_ps(zmm4, temp0_753, 6)
            temp0_745[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            temp0_745[0].o &= arg16[0].o
            temp0_745[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_745[0].o, arg16[0].o)
            temp0_749[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            temp0_749[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_749[0].o, arg13[0].o)
            arg7 = _mm256_broadcast_ss(*arg1)
            arg5 = _mm256_insertf128_ps(temp0_749, temp0_745[0].o, 1)
            float temp0_763[0x8] = _mm256_broadcast_ss(arg1[1])
            char temp0_764 = _mm256_movemask_ps(arg5)
            float temp0_765[0x8] = _mm256_broadcast_ss(arg1[2])
            arg5 = _mm256_insertf128_ps(var_5c0_3, var_5c0_3[0].o, 1)
            float var_500_4[0x8] = arg11
            float var_4c0_4[0x8] = arg5
            
            if (temp0_764 == 0xff)
                arg11 = _mm256_cmp_ps(zmm4, temp0_753, 2)
                arg16 = _mm256_and_ps(zmm0, zmm3)
            else
                zmm0 = _mm256_cmp_ps(zmm4, temp0_753, 2)
                temp0_749[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                zmm5 = _mm256_cmp_ps(temp0_752, arg9, 2)
                temp0_752[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_752[0].o)
                temp0_752[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                arg5[0].o &= temp0_752[0].o
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_749[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                zmm0[0].o &= zmm5[0].o
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                arg11 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                arg16 = _mm256_andnot_ps(arg11, zmm3)
            
            arg6 = _mm256_add_ps(temp0_750, temp0_747)
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm3[0].o)
            arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
            r10 = arg18
            r11 = arg19
            
            if (_mm256_movemask_ps(arg5) != 0xff)
                zmm5 = _mm256_cmp_ps(arg6, arg12, 2)
                arg11 = _mm256_and_ps(zmm5, _mm256_and_ps(arg11, zmm3))
                arg16 = _mm256_xor_ps(arg11, zmm3)
            
            arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm3[0].o)
            
            if (_mm256_movemask_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1)) == 0xff)
                arg8 = temp0_752
            else
                arg11 = _mm256_and_ps(arg11, zmm3)
                arg14 = _mm256_cmp_ps(arg7, zmm4, 2)
                zmm0 = _mm256_and_ps(arg11, _mm256_cmp_ps(arg7, zmm4, 6))
                arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                temp0_752[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                arg5 = _mm256_insertf128_ps(temp0_752, arg5[0].o, 1)
                
                if (_mm256_movemask_ps(arg5) == 0xff)
                    arg8 = temp0_752
                else
                    arg8 = temp0_752
                    float temp0_843[0x8] = _mm256_cmp_ps(temp0_763, arg8, 2)
                    arg5 = _mm256_and_ps(arg11, arg14)
                    arg14 = _mm256_and_ps(temp0_843, arg5)
                    zmm0 = _mm256_xor_ps(arg14, arg11)
                
                arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                
                if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm0, arg5[0].o, 1)) != 0xff)
                    float temp0_881[0x8] = _mm256_cmp_ps(temp0_765, arg6, 2)
                    arg5 = _mm256_and_ps(arg14, arg11)
                    arg14 = _mm256_and_ps(temp0_881, arg5)
                
                arg11 = _mm256_and_ps(arg14, arg11)
            
            float temp0_885[0x8] = _mm256_sub_ps(zmm4, temp0_753)
            arg14 = _mm256_sub_ps(arg8, arg9)
            arg9 = _mm256_sub_ps(arg6, arg12)
            arg15 = _mm256_sub_ps(arg7, zmm4)
            arg10 = _mm256_sub_ps(temp0_763, arg8)
            arg8 = _mm256_sub_ps(temp0_765, arg6)
            int32_t temp0_892 = _mm256_movemask_ps(_mm256_and_ps(arg11, zmm3))
            float temp0_894[0x8]
            int32_t temp0_1053
            
            if (temp0_892 != 0)
                arg7 = _mm256_max_ps(arg15, temp0_885)
                temp0_894 = _mm256_max_ps(arg10, arg14)
                arg12 = _mm256_max_ps(arg8, arg9)
                float temp0_896[0x8] = _mm256_cmp_ps(temp0_894, arg7, 1)
                zmm5 = _mm256_and_ps(arg11, temp0_896)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm3)) != 0)
                    zmm5 = _mm256_and_ps(_mm256_cmp_ps(arg12, arg7, 5), zmm5)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm3)) != 0)
                        arg7 = _mm256_blendv_ps(arg7, arg12, zmm5)
                
                zmm0 = _mm256_andnot_ps(temp0_896, arg11)
                arg5 = _mm256_and_ps(zmm0, zmm3)
                temp0_1053 = _mm256_movemask_ps(arg5)
            
            if (temp0_892 == 0 || temp0_1053 == 0)
                arg13 = arg13
                zmm0 = _mm256_andnot_ps(arg11, zmm3)
                
                if (_mm256_movemask_ps(zmm0) == 0)
                    arg8 = var_500_4
                    arg16 = var_4c0_4
                else
                label_14007354c:
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg11 = _mm256_xor_ps(arg11, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                    float temp0_1070[0x8] = _mm256_cmp_ps(zmm0, temp0_885, 1)
                    zmm5 = _mm256_and_ps(temp0_1070, arg11)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm3)) != 0)
                        var_580_4 = _mm256_maskstore_ps(zmm5, temp0_885)
                    
                    zmm0 = _mm256_andnot_ps(temp0_1070, arg11)
                    arg5 = _mm256_and_ps(zmm0, zmm3)
                    arg16 = var_4c0_4
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_1079[0x8] = _mm256_cmp_ps(arg5, arg15, 1)
                        arg12 = _mm256_and_ps(zmm0, temp0_1079)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm3)) != 0)
                            var_580_4 = _mm256_maskstore_ps(arg12, 
                                __vxorps_ymmqq_ymmqq_memqq(arg15, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(temp0_1079, zmm0)
                        arg5 = _mm256_and_ps(zmm0, zmm3)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_580_4 = _mm256_maskstore_ps(zmm0, arg5)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_1091[0x8] = _mm256_cmp_ps(zmm0, arg14, 1)
                    zmm5 = _mm256_and_ps(temp0_1091, arg11)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm3)) != 0)
                        var_560_4 = _mm256_maskstore_ps(zmm5, arg14)
                    
                    zmm0 = _mm256_andnot_ps(temp0_1091, arg11)
                    arg5 = _mm256_and_ps(zmm0, zmm3)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_1100[0x8] = _mm256_cmp_ps(arg5, arg10, 1)
                        arg12 = _mm256_and_ps(zmm0, temp0_1100)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm3)) != 0)
                            var_560_4 = _mm256_maskstore_ps(arg12, 
                                __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(temp0_1100, zmm0)
                        arg5 = _mm256_and_ps(zmm0, zmm3)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_560_4 = _mm256_maskstore_ps(zmm0, arg5)
                    
                    arg10 = arg8
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_1112[0x8] = _mm256_cmp_ps(zmm0, arg9, 1)
                    zmm5 = _mm256_and_ps(temp0_1112, arg11)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm3)) != 0)
                        var_540_4 = _mm256_maskstore_ps(zmm5, arg9)
                    
                    zmm0 = _mm256_andnot_ps(temp0_1112, arg11)
                    arg5 = _mm256_and_ps(zmm0, zmm3)
                    arg8 = var_500_4
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm5 = _mm256_cmp_ps(arg5, arg10, 1)
                        arg9 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm3)) != 0)
                            var_540_4 = _mm256_maskstore_ps(arg9, 
                                __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        arg5 = _mm256_and_ps(zmm0, zmm3)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_540_4 = _mm256_maskstore_ps(zmm0, arg5)
                    
                    float temp0_1132[0x8] = _mm256_mul_ps(var_580_4, var_580_4)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    float temp0_1138[0x8] = _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(temp0_1132, zmm5), 
                            _mm256_mul_ps(var_560_4, var_560_4)), 
                        _mm256_mul_ps(var_540_4, var_540_4))
                    float temp0_1139[0x8] = _mm256_rsqrt_ps(temp0_1138)
                    float temp0_1141[0x8] =
                        _mm256_mul_ps(temp0_1139, _mm256_mul_ps(temp0_1138, temp0_1139))
                    float temp0_1144[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(temp0_1139, _mm256_sub_ps(data_142fc9480, temp0_1141)), 
                        data_142fc94a0)
                    arg5 = _mm256_rcp_ps(temp0_1144)
                    float temp0_1146[0x8] = _mm256_mul_ps(arg5, temp0_1144)
                    zmm3 = data_142fc94c0
                    zmm0 = _mm256_mul_ps(arg5, _mm256_sub_ps(zmm3, temp0_1146))
                    arg7 = _mm256_blendv_ps(arg7, zmm0, arg11)
            else
                int32_t var_5a0_5[0x8] = arg9
                arg9 = arg10
                arg10 = arg6
                arg6 = arg8
                zmm5 = _mm256_cmp_ps(arg12, temp0_894, 1)
                arg8 = _mm256_and_ps(zmm0, zmm5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg8, zmm3)) != 0)
                    arg7 = _mm256_blendv_ps(arg7, temp0_894, arg8)
                
                zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                arg5 = _mm256_and_ps(zmm0, zmm3)
                arg13 = arg13
                arg8 = arg6
                
                if (_mm256_movemask_ps(arg5) != 0)
                    arg7 = _mm256_blendv_ps(arg7, arg12, zmm0)
                
                arg6 = arg10
                arg10 = arg9
                arg9 = var_5a0_5
                zmm0 = _mm256_andnot_ps(arg11, zmm3)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    goto label_14007354c
                
                arg8 = var_500_4
                arg16 = var_4c0_4
            
            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            zmm0[0].o = arg17
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm0 = _mm256_sub_ps(arg7, _mm256_insertf128_ps(zmm0, zmm0[0].o, 1))
            arg7 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
            arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg8[0].o)
            arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            arg5[0].o &= zmm5[0].o
            zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            result = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
            
            if (result.b != 0)
                arg5 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                zmm4 = _mm256_mul_ps(zmm4, zmm0)
                float temp0_1165[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_752)
                float temp0_1166[0x8] = _mm256_mul_ps(arg6, zmm0)
                zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_400_1)
                float temp0_1168[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1165, var_3e0_1)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(temp0_1166, var_3c0_1)
                arg5 = _mm256_and_ps(arg7, arg5)
                var_400_1 = _mm256_maskstore_ps(arg5, zmm4)
                var_3e0_1 = _mm256_maskstore_ps(arg5, temp0_1168)
                var_3c0_1 = _mm256_maskstore_ps(arg5, arg6)
                zmm0 = _mm256_add_ps(arg13, zmm0)
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0].q)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                arg6[0].o = __vpmovsxwd_xmmdq_xmmq(arg6[0].q)
                arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                arg13 = _mm256_blendv_ps(arg13, zmm0, arg5)
    else
        float temp0_260[0x8] = _mm256_broadcast_ss(arg3[3])
        temp0_260[0].o = *arg3
        arg5[0].o = arg3[1]
        arg6[0].o = arg3[2]
        arg12 = _mm256_broadcast_ss(*arg2)
        float temp0_262[0x8] = _mm256_broadcast_ss(arg2[1])
        float temp0_263[0x8] = _mm256_broadcast_ss(arg2[2])
        float temp0_264[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_265[0x8] = _mm256_broadcast_ss(arg1[1])
        float temp0_266[0x8] = _mm256_broadcast_ss(arg1[2])
        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0)
        zmm3 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
        float var_2c0_2[0x8] = zmm3
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int32_t rbx_2 = 0
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0)
        arg5 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
        float var_2e0_2[0x8] = arg5
        arg5[0].o = _mm_permute_ps(arg6[0].o, 0)
        arg5 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
        float var_300_2[0x8] = arg5
        temp0_260[0].o = _mm_permute_ps(temp0_260[0].o, 0)
        zmm0 = _mm256_insertf128_ps(temp0_260, temp0_260[0].o, 1)
        float var_320_2[0x8] = zmm0
        rsi_1 = 0
        arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        float var_4a0_2[0x8] = arg12
        
        do
            int64_t rax_28 = sx.q(rbx_2)
            zmm0[0].o = *(arg4 + rax_28)
            arg5[0].o = *(arg4 + rax_28 + 0x10)
            arg6[0].o = *(arg4 + rax_28 + 0x20)
            zmm4[0].o = *(arg4 + rax_28 + 0x30)
            zmm5[0].o = *(arg4 + rax_28 + 0x40)
            arg7[0].o = *(arg4 + rax_28 + 0x50)
            arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0xec)
            zmm3[0].o = _mm_permute_ps(arg6[0].o, 0x44)
            arg9[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, zmm3[0].o, 8)
            arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0xec)
            zmm3[0].o = _mm_permute_ps(arg7[0].o, 0x44)
            arg10[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, zmm3[0].o, 8)
            arg8[0].o = _mm_permute_ps(zmm0[0].o, 0xe5)
            zmm3[0].o = _mm_permute_ps(arg5[0].o, 0xf0)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg8[0].o, 1)
            arg8[0].o = _mm_permute_ps(arg6[0].o, 0xa4)
            arg11[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg8[0].o, 8)
            arg8[0].o = _mm_permute_ps(zmm4[0].o, 0xe5)
            zmm3[0].o = _mm_permute_ps(zmm5[0].o, 0xf0)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg8[0].o, 1)
            arg8[0].o = _mm_permute_ps(arg7[0].o, 0xa4)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg8[0].o, 8)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 2)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6[0].o, 0xc4)
            arg5[0].o = _mm_permute_ps(zmm4[0].o, 0x4e)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm5[0].o, 2)
            arg5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg7[0].o, 0xc4)
            arg6 = _mm256_insertf128_ps(arg9, arg10[0].o, 1)
            zmm3 = _mm256_insertf128_ps(arg11, zmm3[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
            float var_420_2[0x8] = arg14
            float temp0_303[0x8] = _mm256_mul_ps(var_2e0_2, zmm0)
            arg9 = var_300_2
            zmm4 = _mm256_mul_ps(arg9, arg6)
            float temp0_305[0x8] = _mm256_mul_ps(var_320_2, zmm3)
            float temp0_307[0x8] = _mm256_sub_ps(temp0_303, _mm256_mul_ps(arg9, zmm3))
            float temp0_309[0x8] = _mm256_sub_ps(zmm4, _mm256_mul_ps(var_320_2, zmm0))
            float temp0_311[0x8] = _mm256_sub_ps(temp0_305, _mm256_mul_ps(var_2e0_2, arg6))
            float temp0_312[0x8] = _mm256_add_ps(temp0_307, temp0_307)
            float temp0_313[0x8] = _mm256_add_ps(temp0_309, temp0_309)
            float temp0_315[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_260, temp0_312), arg6)
            float temp0_316[0x8] = _mm256_add_ps(temp0_311, temp0_311)
            zmm4 =
                _mm256_sub_ps(_mm256_mul_ps(temp0_316, var_2e0_2), _mm256_mul_ps(temp0_313, arg9))
            float temp0_320[0x8] = _mm256_mul_ps(temp0_312, arg9)
            float temp0_321[0x8] = _mm256_add_ps(temp0_315, zmm4)
            zmm4 = _mm256_sub_ps(temp0_320, _mm256_mul_ps(temp0_316, var_320_2))
            float temp0_325[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_260, temp0_313), zmm3)
            zmm4 = _mm256_add_ps(temp0_325, zmm4)
            float temp0_332[0x8] = _mm256_add_ps(
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_260, temp0_316), zmm0), 
                _mm256_sub_ps(_mm256_mul_ps(temp0_313, var_320_2), 
                    _mm256_mul_ps(temp0_312, var_2e0_2)))
            arg16 = _mm256_add_ps(temp0_321, _mm256_broadcast_ss(arg3[4]))
            float temp0_335[0x8] = _mm256_broadcast_ss(arg3[5])
            arg9 = _mm256_add_ps(zmm4, temp0_335)
            arg6 = _mm256_broadcast_ss(arg3[6])
            float temp0_338[0x8] = _mm256_add_ps(temp0_332, arg6)
            float temp0_339[0x8] = _mm256_cmp_ps(arg16, arg12, 6)
            arg6[0].o = _mm256_extractf128_ps(temp0_339[0].o, 1)
            temp0_339[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_339[0].o, arg6[0].o)
            float var_580_2[0x8] = temp0_260
            float var_560_2[0x8] = temp0_260
            float var_540_2[0x8] = temp0_260
            float var_520_2[0x8] = temp0_260
            temp0_339[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_339[0].o, temp0_335[0].o)
            char temp0_343 = __vpmovmskb_gpr32d_xmmdq(temp0_339[0].o)
            arg5 = _mm256_cmp_ps(arg16, arg12, 2)
            
            if (temp0_343 == 0xff)
                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            label_1400720ba:
                zmm5 = var_5c0
                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg6[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_335[0].o)
                arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                arg8 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            else
                arg6 = _mm256_cmp_ps(arg9, _mm256_broadcast_ss(arg2[1]), 2)
                arg5 = _mm256_and_ps(arg6, arg5)
                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                arg5[0].o = zmm4[0].o ^ arg15[0].o
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_335[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0xff)
                    goto label_1400720ba
                
                float temp0_353[0x8] = _mm256_cmp_ps(temp0_338, _mm256_broadcast_ss(arg2[2]), 2)
                arg6[0].o = _mm256_extractf128_ps(temp0_353[0].o, 1)
                temp0_353[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_353[0].o, arg6[0].o)
                temp0_325[0].o = temp0_353[0].o & zmm4[0].o
                temp0_353[0].o = temp0_325[0].o ^ arg15[0].o
                temp0_353[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_353[0].o, temp0_335[0].o)
                char temp0_357 = __vpmovmskb_gpr32d_xmmdq(temp0_353[0].o)
                temp0_353[0].o = __vpmovsxwd_xmmdq_xmmq(temp0_325[0].q)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_325[0].o, 0x4e)
                arg6[0].o = __vpmovsxwd_xmmdq_xmmq(arg6[0].q)
                arg8 = _mm256_insertf128_ps(temp0_353, arg6[0].o, 1)
                
                if (temp0_357 != 0xff)
                    zmm0 = arg9
                    arg9 = _mm256_broadcast_ss(*arg1)
                    float temp0_363[0x8] = _mm256_cmp_ps(arg9, arg16, 6)
                    arg7 = _mm256_and_ps(temp0_363, arg8)
                    temp0_363[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    temp0_363[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_363[0].o, zmm4[0].o)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
                    arg5 = _mm256_insertf128_ps(arg6, temp0_363[0].o, 1)
                    
                    if (_mm256_movemask_ps(arg5) == 0xff)
                        zmm5 = _mm256_cmp_ps(arg9, arg16, 2)
                        arg9 = zmm0
                    else
                        arg5 = _mm256_cmp_ps(arg9, arg16, 2)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        arg9 = zmm0
                        arg6 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), zmm0, 2)
                        temp0_321[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_321[0].o)
                        arg5[0].o &= temp0_325[0].o
                        arg5[0].o &= arg6[0].o
                        arg6[0].o = __vpmovsxwd_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                        arg5[0].o = __vpmovsxwd_xmmdq_xmmq(arg5[0].q)
                        zmm5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                        arg7 = _mm256_andnot_ps(zmm5, arg8)
                    
                    arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
                    
                    if (_mm256_movemask_ps(_mm256_insertf128_ps(arg6, arg5[0].o, 1)) != 0xff)
                        float temp0_399[0x8] =
                            _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), temp0_338, 2)
                        arg6 = _mm256_and_ps(zmm5, arg8)
                        zmm5 = _mm256_and_ps(temp0_399, arg6)
                    
                    arg8 = _mm256_and_ps(zmm5, arg8)
                
                zmm5 = var_5c0
            
            zmm4 = _mm256_sub_ps(arg16, arg12)
            arg10 = __vsubps_ymmqq_ymmqq_memqq(arg9, temp0_262)
            arg7 = __vsubps_ymmqq_ymmqq_memqq(temp0_338, temp0_263)
            arg11 = _mm256_sub_ps(temp0_264, arg16)
            zmm3 = _mm256_sub_ps(temp0_265, arg9)
            zmm0 = _mm256_sub_ps(temp0_266, temp0_338)
            
            if (_mm256_movemask_ps(arg8) != 0)
                float temp0_410[0x8] = _mm256_max_ps(arg11, zmm4)
                float temp0_411[0x8] = _mm256_max_ps(zmm3, arg10)
                float temp0_412[0x8] = _mm256_max_ps(zmm0, arg7)
                float temp0_413[0x8] = _mm256_cmp_ps(temp0_411, temp0_410, 1)
                arg15 = _mm256_and_ps(arg8, temp0_413)
                
                if (_mm256_movemask_ps(arg15) != 0)
                    float var_340_2[0x8] = arg10
                    arg10 = arg11
                    arg11 = zmm3
                    zmm3 = arg16
                    arg16 = arg7
                    arg6 = _mm256_cmp_ps(temp0_412, temp0_410, 1)
                    int32_t temp0_417[0x8] = _mm256_and_ps(arg15, arg6)
                    
                    if (_mm256_movemask_ps(temp0_417) == 0)
                        zmm5 = var_5c0
                    else
                        zmm5 = _mm256_blendv_ps(var_5c0, temp0_410, temp0_417)
                    
                    arg9 = arg9
                    zmm0 = zmm0
                    arg7 = arg16
                    arg16 = zmm3
                    zmm3 = arg11
                    arg11 = arg10
                    arg10 = var_340_2
                    arg5 = _mm256_andnot_ps(arg6, arg15)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        zmm5 = _mm256_blendv_ps(zmm5, temp0_412, arg5)
                
                arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                arg14 = _mm256_andnot_ps(temp0_413, arg8)
                
                if (_mm256_movemask_ps(arg14) == 0)
                    arg13 = arg13
                else
                    float temp0_426[0x8] = _mm256_cmp_ps(temp0_412, temp0_411, 1)
                    arg6 = _mm256_and_ps(arg14, temp0_426)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        zmm5 = _mm256_blendv_ps(zmm5, temp0_411, arg6)
                    
                    arg13 = arg13
                    arg5 = _mm256_andnot_ps(temp0_426, arg14)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        zmm5 = _mm256_blendv_ps(zmm5, temp0_412, arg5)
                
                arg12 = var_4a0_2
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            
            arg5 = _mm256_cmp_ps(arg14, arg14, 0xf)
            arg8 = _mm256_xor_ps(arg8, arg5)
            
            if (_mm256_movemask_ps(arg8) == 0)
                arg10 = temp0_338
            else
                float temp0_437[0x8] = _mm256_cmp_ps(arg14, zmm4, 1)
                arg6 = _mm256_and_ps(temp0_437, arg8)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_580_2 = _mm256_maskstore_ps(arg6, zmm4)
                
                zmm4 = _mm256_andnot_ps(temp0_437, arg8)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    float temp0_443[0x8] = _mm256_cmp_ps(arg14, arg11, 1)
                    arg6 = _mm256_and_ps(zmm4, temp0_443)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        arg15 = arg10
                        arg10 = arg11
                        arg11 = zmm3
                        zmm3 = __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9460)
                        arg10 = arg15
                        arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                        var_580_2 = _mm256_maskstore_ps(arg6, zmm3)
                        zmm3 = arg11
                    
                    arg5 = _mm256_andnot_ps(temp0_443, zmm4)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_580_2 = _mm256_maskstore_ps(arg5, arg14)
                
                float temp0_452[0x8] = _mm256_cmp_ps(arg14, arg10, 1)
                arg6 = _mm256_and_ps(temp0_452, arg8)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_560_2 = _mm256_maskstore_ps(arg6, arg10)
                
                zmm4 = _mm256_andnot_ps(temp0_452, arg8)
                arg10 = temp0_338
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    float temp0_458[0x8] = _mm256_cmp_ps(arg14, zmm3, 1)
                    arg6 = _mm256_and_ps(zmm4, temp0_458)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        var_560_2 = _mm256_maskstore_ps(arg6, 
                            __vxorps_ymmqq_ymmqq_memqq(zmm3, data_142fc9460))
                    
                    arg5 = _mm256_andnot_ps(temp0_458, zmm4)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_560_2 = _mm256_maskstore_ps(arg5, arg14)
                
                float temp0_466[0x8] = _mm256_cmp_ps(arg14, arg7, 1)
                arg6 = _mm256_and_ps(temp0_466, arg8)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_540_2 = _mm256_maskstore_ps(arg6, arg7)
                
                zmm4 = _mm256_andnot_ps(temp0_466, arg8)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    float temp0_472[0x8] = _mm256_cmp_ps(arg14, zmm0, 1)
                    arg6 = _mm256_and_ps(zmm4, temp0_472)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        var_540_2 = _mm256_maskstore_ps(arg6, 
                            __vxorps_ymmqq_ymmqq_memqq(zmm0, data_142fc9460))
                    
                    arg5 = _mm256_andnot_ps(temp0_472, zmm4)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_540_2 = _mm256_maskstore_ps(arg5, arg14)
                
                zmm3 = var_540_2
                float temp0_485[0x8] = _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(var_580_2, var_580_2), arg14), 
                        _mm256_mul_ps(var_560_2, var_560_2)), 
                    _mm256_mul_ps(zmm3, zmm3))
                float temp0_486[0x8] = _mm256_rsqrt_ps(temp0_485)
                float temp0_488[0x8] = _mm256_mul_ps(temp0_486, _mm256_mul_ps(temp0_485, temp0_486))
                float temp0_491[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_486, _mm256_sub_ps(data_142fc9480, temp0_488)), 
                    data_142fc94a0)
                arg6 = _mm256_rcp_ps(temp0_491)
                float temp0_493[0x8] = _mm256_mul_ps(arg6, temp0_491)
                zmm0 = data_142fc94c0
                arg5 = _mm256_mul_ps(arg6, _mm256_sub_ps(zmm0, temp0_493))
                zmm5 = _mm256_blendv_ps(zmm5, arg5, arg8)
            
            var_5c0 = zmm5
            zmm4 = __vsubps_ymmqq_ymmqq_memqq(zmm5, var_2c0_2)
            zmm5 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm4, data_142fc94e0, 1)
            result = _mm256_movemask_ps(zmm5)
            
            if (result.b != 0)
                float temp0_500[0x8] = _mm256_mul_ps(arg16, zmm4)
                float temp0_501[0x8] = _mm256_mul_ps(arg9, zmm4)
                float temp0_502[0x8] = _mm256_mul_ps(arg10, zmm4)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_500, var_400_1)
                float temp0_504[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_501, var_3e0_1)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(temp0_502, var_3c0_1)
                var_400_1 = _mm256_maskstore_ps(zmm5, arg5)
                var_3e0_1 = _mm256_maskstore_ps(zmm5, temp0_504)
                var_3c0_1 = _mm256_maskstore_ps(zmm5, arg6)
                zmm0 = _mm256_add_ps(arg13, zmm4)
                arg13 = _mm256_blendv_ps(arg13, zmm0, zmm5)
            
            rsi_1 += 8
            rbx_2 += 0x60
        while (rsi_1 s< rdi_9)
        
        if (rsi_1 s< arg20)
            goto label_140072943
    zmm0[0].o = _mm256_extractf128_ps(var_1a0[0].o, 1)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    zmm0[0].o ^= arg6[0].o
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_1a0[0].o, arg5[0].o)
    arg5[0].o ^= arg6[0].o
    zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
    arg5 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_400_1)
    float temp0_1187[0x8] = _mm256_hadd_ps(arg5, arg5)
    arg5 = _mm256_hadd_ps(temp0_1187, temp0_1187)
    arg6 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_3e0_1)
    float temp0_1190[0x8] = _mm256_hadd_ps(arg6, arg6)
    float temp0_1191[0x8] = _mm256_hadd_ps(temp0_1190, temp0_1190)
    var_1a0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    arg5[0].o = arg5[0].o f+ var_1a0[0]
    zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_3c0_1)
    zmm4[0].o = _mm256_extractf128_ps(temp0_1191[0].o, 1)
    float temp0_1195[0x8] = _mm256_hadd_ps(zmm3, zmm3)
    temp0_1191[0].o = temp0_1191[0].o f+ zmm4[0].d
    float temp0_1196[0x8] = _mm256_hadd_ps(temp0_1195, temp0_1195)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_1191[0].o, 0x10)
    temp0_1191[0].o = _mm256_extractf128_ps(temp0_1196[0].o, 1)
    temp0_1191[0].o = temp0_1196[0].o f+ temp0_1191[0]
    arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_1191[0].o, 0x20)
    temp0_1191[0].o = __vmovsd_xmmdq_memq(*r11)
    temp0_1191[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1191[0].o, r11[1].d, 0x20)
    arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1191[0].o)
    *r11 = arg5[0]
    *(r11 + 4) = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
    r11[1].d = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
    zmm0 = _mm256_and_ps(zmm0, arg13)
    zmm0 = _mm256_hadd_ps(zmm0, zmm0)
else
    int32_t rdi_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
    float var_360_1[0x8] = arg13
    float var_380_1[0x8] = arg13
    float var_3a0_1[0x8] = arg13
    float var_5a0[0x8]
    int32_t rsi
    
    if (rdi_4 s<= 0)
        rsi = 0
        
        if (0 s< arg20)
        label_1400724e2:
            zmm0[0].o = zx.o(rsi)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg12[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, data_142e11d00)
            arg14[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, data_142fc9500)
            arg5[0].o = zx.o(arg20)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
            float var_5c0_1[0x8] = zmm0
            arg16[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
            arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
            arg6 = _mm256_insertf128_ps(arg13, arg16[0].o, 1)
            zmm4 = _mm256_and_ps(arg6, arg5)
            int64_t rax_55 = sx.q(zmm4[0].d)
            var_5a0[0].q = rax_55
            void* r14_1 = arg4 + (rax_55 << 2)
            int64_t r12_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            void* r13_1 = arg4 + (r12_1 << 2)
            arg8[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            int64_t r15_1 = sx.q(arg8[0])
            void* rax_58 = arg4 + (r15_1 << 2)
            int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
            void* rbx_3 = arg4 + (r10_1 << 2)
            int32_t temp0_527[0x8] = __vandps_ymmqq_ymmqq_memqq(arg6, data_142fc9520)
            arg5[0].o = _mm256_extractf128_ps(temp0_527[0].o, 1)
            zmm5[0].o = *(zx.q(arg5[0]) + rax_58)
            arg10 = __vandps_ymmqq_ymmqq_memqq(arg6, data_142fc9540)
            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            zmm0[0].o = *(zx.q(arg7[0]) + rax_58)
            int32_t temp0_531 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            uint64_t rsi_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_3 + rbx_3), 0x10)
            float* rsi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_4 + rbx_3), 0x10)
            int64_t r11_2 = sx.q(temp0_531)
            void* rbx_4 = arg4 + (r11_2 << 2)
            uint64_t rsi_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_5 + rbx_4), 0x20)
            float* rsi_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_6 + rbx_4), 0x20)
            int64_t rbx_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
            arg8[0].o = *(zx.q(temp0_527[0]) + r14_1)
            zmm3[0].o = *(zx.q(arg10[0]) + r14_1)
            void* rsi_9 = arg4 + (rbx_6 << 2)
            uint64_t rdi_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_11 + rsi_9), 0x30)
            float* rdi_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_12 + rsi_9), 0x30)
            int32_t temp0_545 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            uint64_t rsi_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_527[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rsi_10 + r13_1), 0x10)
            uint64_t rsi_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_11 + r13_1), 0x10)
            int64_t rdi_14 = sx.q(temp0_545)
            void* rsi_12 = arg4 + (rdi_14 << 2)
            uint64_t rax_60 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_527[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_60 + rsi_12), 0x20)
            uint64_t rax_61 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_61 + rsi_12), 0x20)
            arg7[0].o = *(arg4 + (var_5a0[0].q << 2))
            arg8[0].o = *(arg4 + (r15_1 << 2))
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + (r10_1 << 2)), 0x10)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + (r11_2 << 2)), 0x20)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg4 + (rbx_6 << 2)), 0x30)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (r12_1 << 2)), 0x10)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rdi_14 << 2)), 0x20)
            int64_t rax_64 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + (rax_64 << 2)), 0x30)
            void* rax_65 = arg4 + (rax_64 << 2)
            uint64_t rbx_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_527[0].o, 3))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_7 + rax_65), 0x30)
            float* rbx_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_8 + rax_65), 0x30)
            arg11 = _mm256_insertf128_ps(arg12, arg14[0].o, 1)
            double temp0_566[0x4] = _mm256_insertf128_ps(zmm4, arg8[0].o, 1)
            arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_570[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_580_3[0x8] = temp0_570
            float var_560_3[0x8] = temp0_570
            float var_540_3[0x8] = temp0_570
            float var_520_3[0x8] = temp0_570
            float temp0_571[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_572[0x8] = _mm256_mul_ps(zmm0, temp0_571)
            arg9 = _mm256_broadcast_ss(arg3[2])
            float temp0_574[0x8] = _mm256_mul_ps(temp0_566, arg9)
            float temp0_575[0x8] = _mm256_broadcast_ss(*arg3)
            arg9 = _mm256_mul_ps(arg5, arg9)
            float temp0_577[0x8] = _mm256_mul_ps(arg5, temp0_575)
            float temp0_578[0x8] = _mm256_mul_ps(temp0_570, zmm3)
            float temp0_579[0x8] = _mm256_sub_ps(temp0_572, arg9)
            float temp0_581[0x8] = _mm256_sub_ps(temp0_574, _mm256_mul_ps(zmm0, temp0_575))
            float temp0_583[0x8] = _mm256_sub_ps(temp0_577, _mm256_mul_ps(temp0_566, temp0_571))
            float temp0_584[0x8] = _mm256_sub_ps(temp0_578, temp0_578)
            zmm4 = _mm256_add_ps(temp0_579, temp0_579)
            float temp0_586[0x8] = _mm256_add_ps(temp0_581, temp0_581)
            float temp0_587[0x8] = _mm256_add_ps(temp0_583, temp0_583)
            float temp0_588[0x8] = _mm256_add_ps(temp0_584, temp0_584)
            double var_480_3[0x4] = zmm4
            float var_460_3[0x8] = temp0_586
            float var_440_3[0x8] = temp0_587
            float var_420_3[0x8] = temp0_588
            float temp0_589[0x8] = _mm256_mul_ps(temp0_570, zmm4)
            float temp0_590[0x8] = _mm256_mul_ps(temp0_570, temp0_586)
            arg9 = _mm256_mul_ps(temp0_570, temp0_587)
            float temp0_592[0x8] = _mm256_mul_ps(temp0_570, temp0_588)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(temp0_589, temp0_566)
            float temp0_594[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_590, arg5)
            float temp0_595[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg9, zmm0)
            float var_180_1[0x8] = zmm5
            float var_160_1[0x8] = temp0_594
            float var_140_1[0x8] = temp0_595
            float var_120_1[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_592, zmm3)
            float temp0_597[0x8] = _mm256_broadcast_ss(arg3[1])
            arg9 = _mm256_mul_ps(temp0_587, temp0_597)
            float temp0_599[0x8] = _mm256_broadcast_ss(arg3[2])
            arg9 = _mm256_sub_ps(arg9, _mm256_mul_ps(temp0_586, temp0_599))
            float temp0_602[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_603[0x8] = _mm256_mul_ps(temp0_586, temp0_602)
            float temp0_604[0x8] = _mm256_mul_ps(temp0_587, temp0_602)
            float temp0_606[0x8] = _mm256_sub_ps(_mm256_mul_ps(zmm4, temp0_599), temp0_604)
            float temp0_608[0x8] = _mm256_sub_ps(temp0_603, _mm256_mul_ps(zmm4, temp0_597))
            float temp0_609[0x8] = _mm256_broadcast_ss(arg3[4])
            float temp0_610[0x8] = _mm256_broadcast_ss(arg3[5])
            float temp0_611[0x8] = _mm256_broadcast_ss(arg3[6])
            zmm4 = _mm256_add_ps(zmm5, arg9)
            float temp0_613[0x8] = _mm256_add_ps(temp0_594, temp0_606)
            float temp0_614[0x8] = _mm256_add_ps(temp0_595, temp0_608)
            zmm4 = _mm256_add_ps(zmm4, temp0_609)
            float temp0_616[0x8] = _mm256_add_ps(temp0_613, temp0_610)
            float temp0_617[0x8] = _mm256_broadcast_ss(*arg2)
            arg9 = _mm256_broadcast_ss(arg2[1])
            arg12 = _mm256_broadcast_ss(arg2[2])
            zmm0 = _mm256_cmp_ps(zmm4, temp0_617, 6)
            temp0_613[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            temp0_613[0].o &= arg16[0].o
            temp0_613[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_613[0].o, arg16[0].o)
            temp0_609[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            temp0_609[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_609[0].o, arg13[0].o)
            arg7 = _mm256_broadcast_ss(*arg1)
            arg5 = _mm256_insertf128_ps(temp0_609, temp0_613[0].o, 1)
            float temp0_627[0x8] = _mm256_broadcast_ss(arg1[1])
            char temp0_628 = _mm256_movemask_ps(arg5)
            float temp0_629[0x8] = _mm256_broadcast_ss(arg1[2])
            zmm3 = _mm256_insertf128_ps(var_5c0_1, var_5c0_1[0].o, 1)
            float var_4e0_3[0x8] = arg11
            float var_4c0_3[0x8] = zmm3
            
            if (temp0_628 == 0xff)
                arg11 = _mm256_cmp_ps(zmm4, temp0_617, 2)
                arg16 = _mm256_and_ps(zmm0, arg6)
            else
                zmm0 = _mm256_cmp_ps(zmm4, temp0_617, 2)
                var_5c0_1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                zmm5 = _mm256_cmp_ps(temp0_616, arg9, 2)
                temp0_616[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_616[0].o)
                temp0_616[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm3[0].o &= temp0_616[0].o
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_5c0_1[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                zmm0[0].o &= zmm5[0].o
                var_5c0_1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                arg11 = _mm256_insertf128_ps(var_5c0_1, zmm0[0].o, 1)
                arg16 = _mm256_andnot_ps(arg11, arg6)
            
            arg5 = _mm256_add_ps(temp0_614, temp0_611)
            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm3[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            r10 = arg18
            r11 = arg19
            
            if (_mm256_movemask_ps(zmm3) != 0xff)
                zmm5 = _mm256_cmp_ps(arg5, arg12, 2)
                arg11 = _mm256_and_ps(zmm5, _mm256_and_ps(arg11, arg6))
                arg16 = _mm256_xor_ps(arg11, arg6)
            
            zmm3[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            
            if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm3, zmm0[0].o, 1)) == 0xff)
                arg8 = temp0_616
            else
                arg11 = _mm256_and_ps(arg11, arg6)
                arg14 = _mm256_cmp_ps(arg7, zmm4, 2)
                zmm0 = _mm256_and_ps(arg11, _mm256_cmp_ps(arg7, zmm4, 6))
                zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                temp0_616[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                zmm3 = _mm256_insertf128_ps(temp0_616, zmm3[0].o, 1)
                
                if (_mm256_movemask_ps(zmm3) == 0xff)
                    arg8 = temp0_616
                else
                    arg8 = temp0_616
                    float temp0_811[0x8] = _mm256_cmp_ps(temp0_627, arg8, 2)
                    zmm3 = _mm256_and_ps(arg11, arg14)
                    arg14 = _mm256_and_ps(temp0_811, zmm3)
                    zmm0 = _mm256_xor_ps(arg14, arg11)
                
                zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                
                if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm0, zmm3[0].o, 1)) != 0xff)
                    float temp0_852[0x8] = _mm256_cmp_ps(temp0_629, arg5, 2)
                    zmm3 = _mm256_and_ps(arg14, arg11)
                    arg14 = _mm256_and_ps(temp0_852, zmm3)
                
                arg11 = _mm256_and_ps(arg14, arg11)
            
            float temp0_856[0x8] = _mm256_sub_ps(zmm4, temp0_617)
            arg14 = _mm256_sub_ps(arg8, arg9)
            arg9 = _mm256_sub_ps(arg5, arg12)
            arg15 = _mm256_sub_ps(arg7, zmm4)
            arg10 = _mm256_sub_ps(temp0_627, arg8)
            arg8 = _mm256_sub_ps(temp0_629, arg5)
            int32_t temp0_863 = _mm256_movemask_ps(_mm256_and_ps(arg11, arg6))
            float temp0_865[0x8]
            int32_t temp0_907
            
            if (temp0_863 != 0)
                arg7 = _mm256_max_ps(arg15, temp0_856)
                temp0_865 = _mm256_max_ps(arg10, arg14)
                arg12 = _mm256_max_ps(arg8, arg9)
                float temp0_867[0x8] = _mm256_cmp_ps(temp0_865, arg7, 1)
                zmm5 = _mm256_and_ps(arg11, temp0_867)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm5, arg6)) != 0)
                    zmm5 = _mm256_and_ps(_mm256_cmp_ps(arg12, arg7, 5), zmm5)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, arg6)) != 0)
                        arg7 = _mm256_blendv_ps(arg7, arg12, zmm5)
                
                zmm0 = _mm256_andnot_ps(temp0_867, arg11)
                zmm3 = _mm256_and_ps(zmm0, arg6)
                temp0_907 = _mm256_movemask_ps(zmm3)
            
            if (temp0_863 == 0 || temp0_907 == 0)
                arg13 = arg13
                zmm0 = _mm256_andnot_ps(arg11, arg6)
                
                if (_mm256_movemask_ps(zmm0) == 0)
                    arg8 = var_4e0_3
                    arg16 = var_4c0_3
                else
                label_14007315b:
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg11 = _mm256_xor_ps(arg11, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                    float temp0_924[0x8] = _mm256_cmp_ps(zmm0, temp0_856, 1)
                    zmm5 = _mm256_and_ps(temp0_924, arg11)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, arg6)) != 0)
                        var_580_3 = _mm256_maskstore_ps(zmm5, temp0_856)
                    
                    zmm0 = _mm256_andnot_ps(temp0_924, arg11)
                    zmm3 = _mm256_and_ps(zmm0, arg6)
                    arg16 = var_4c0_3
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        float temp0_933[0x8] = _mm256_cmp_ps(zmm3, arg15, 1)
                        arg12 = _mm256_and_ps(zmm0, temp0_933)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg12, arg6)) != 0)
                            var_580_3 = _mm256_maskstore_ps(arg12, 
                                __vxorps_ymmqq_ymmqq_memqq(arg15, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(temp0_933, zmm0)
                        zmm3 = _mm256_and_ps(zmm0, arg6)
                        
                        if (_mm256_movemask_ps(zmm3) != 0)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            var_580_3 = _mm256_maskstore_ps(zmm0, zmm3)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_945[0x8] = _mm256_cmp_ps(zmm0, arg14, 1)
                    zmm5 = _mm256_and_ps(temp0_945, arg11)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, arg6)) != 0)
                        var_560_3 = _mm256_maskstore_ps(zmm5, arg14)
                    
                    zmm0 = _mm256_andnot_ps(temp0_945, arg11)
                    zmm3 = _mm256_and_ps(zmm0, arg6)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        float temp0_954[0x8] = _mm256_cmp_ps(zmm3, arg10, 1)
                        arg12 = _mm256_and_ps(zmm0, temp0_954)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg12, arg6)) != 0)
                            var_560_3 = _mm256_maskstore_ps(arg12, 
                                __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(temp0_954, zmm0)
                        zmm3 = _mm256_and_ps(zmm0, arg6)
                        
                        if (_mm256_movemask_ps(zmm3) != 0)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            var_560_3 = _mm256_maskstore_ps(zmm0, zmm3)
                    
                    arg10 = arg8
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_966[0x8] = _mm256_cmp_ps(zmm0, arg9, 1)
                    zmm5 = _mm256_and_ps(temp0_966, arg11)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(zmm5, arg6)) != 0)
                        var_540_3 = _mm256_maskstore_ps(zmm5, arg9)
                    
                    zmm0 = _mm256_andnot_ps(temp0_966, arg11)
                    zmm3 = _mm256_and_ps(zmm0, arg6)
                    arg8 = var_4e0_3
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        zmm5 = _mm256_cmp_ps(zmm3, arg10, 1)
                        arg9 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg9, arg6)) != 0)
                            var_540_3 = _mm256_maskstore_ps(arg9, 
                                __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9460))
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        arg6 = _mm256_and_ps(zmm0, arg6)
                        
                        if (_mm256_movemask_ps(arg6) != 0)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            var_540_3 = _mm256_maskstore_ps(zmm0, arg6)
                    
                    float temp0_986[0x8] = _mm256_mul_ps(var_580_3, var_580_3)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    float temp0_992[0x8] = _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(temp0_986, zmm5), 
                            _mm256_mul_ps(var_560_3, var_560_3)), 
                        _mm256_mul_ps(var_540_3, var_540_3))
                    float temp0_993[0x8] = _mm256_rsqrt_ps(temp0_992)
                    float temp0_995[0x8] =
                        _mm256_mul_ps(temp0_993, _mm256_mul_ps(temp0_992, temp0_993))
                    float temp0_998[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(temp0_993, _mm256_sub_ps(data_142fc9480, temp0_995)), 
                        data_142fc94a0)
                    arg6 = _mm256_rcp_ps(temp0_998)
                    float temp0_1000[0x8] = _mm256_mul_ps(arg6, temp0_998)
                    zmm3 = data_142fc94c0
                    zmm0 = _mm256_mul_ps(arg6, _mm256_sub_ps(zmm3, temp0_1000))
                    arg7 = _mm256_blendv_ps(arg7, zmm0, arg11)
            else
                int32_t var_5a0_4[0x8] = arg9
                arg9 = arg10
                arg10 = arg5
                arg5 = arg8
                zmm5 = _mm256_cmp_ps(arg12, temp0_865, 1)
                arg8 = _mm256_and_ps(zmm0, zmm5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg8, arg6)) != 0)
                    arg7 = _mm256_blendv_ps(arg7, temp0_865, arg8)
                
                zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                zmm3 = _mm256_and_ps(zmm0, arg6)
                arg13 = arg13
                arg8 = arg5
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    arg7 = _mm256_blendv_ps(arg7, arg12, zmm0)
                
                arg5 = arg10
                arg10 = arg9
                arg9 = var_5a0_4
                zmm0 = _mm256_andnot_ps(arg11, arg6)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    goto label_14007315b
                
                arg8 = var_4e0_3
                arg16 = var_4c0_3
            
            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            zmm0[0].o = arg17
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            float temp0_1009[0x8] = _mm256_sub_ps(arg7, _mm256_insertf128_ps(zmm0, zmm0[0].o, 1))
            arg7 = __vcmpps_ymmqq_ymmqq_memqq_immb(temp0_1009, data_142fc94e0, 1)
            arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg8[0].o)
            arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            arg6[0].o &= zmm5[0].o
            zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1009[0].o)
            result = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
            
            if (result.b != 0)
                zmm3 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                zmm4 = _mm256_mul_ps(zmm4, temp0_1009)
                float temp0_1019[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_1009, temp0_616)
                float temp0_1020[0x8] = _mm256_mul_ps(arg5, temp0_1009)
                zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_3a0_1)
                float temp0_1022[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1019, var_380_1)
                float temp0_1023[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1020, var_360_1)
                zmm3 = _mm256_and_ps(arg7, zmm3)
                var_3a0_1 = _mm256_maskstore_ps(zmm3, zmm4)
                var_380_1 = _mm256_maskstore_ps(zmm3, temp0_1022)
                var_360_1 = _mm256_maskstore_ps(zmm3, temp0_1023)
                float temp0_1028[0x8] = _mm256_add_ps(arg13, temp0_1009)
                temp0_1023[0].o = __vpmovsxwd_xmmdq_xmmq(arg6[0].q)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                arg6[0].o = __vpmovsxwd_xmmdq_xmmq(arg6[0].q)
                arg13 = _mm256_blendv_ps(arg13, temp0_1028, 
                    _mm256_insertf128_ps(temp0_1023, arg6[0].o, 1))
    else
        float temp0_2[0x8] = _mm256_broadcast_ss(arg3[3])
        temp0_2[0].o = *arg3
        arg5[0].o = arg3[1]
        zmm3[0].o = arg3[2]
        arg12 = _mm256_broadcast_ss(*arg2)
        float temp0_4[0x8] = _mm256_broadcast_ss(arg2[1])
        float temp0_5[0x8] = _mm256_broadcast_ss(arg2[2])
        float temp0_6[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_7[0x8] = _mm256_broadcast_ss(arg1[1])
        float temp0_8[0x8] = _mm256_broadcast_ss(arg1[2])
        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0)
        arg6 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
        float var_2e0_1[0x8] = arg6
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int32_t rbx_1 = 0
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0)
        arg5 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
        float var_300_1[0x8] = arg5
        arg5[0].o = _mm_permute_ps(zmm3[0].o, 0)
        arg5 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
        float var_320_1[0x8] = arg5
        temp0_2[0].o = _mm_permute_ps(temp0_2[0].o, 0)
        zmm0 = _mm256_insertf128_ps(temp0_2, temp0_2[0].o, 1)
        float var_340_1[0x8] = zmm0
        rsi = 0
        arg16[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        float var_4a0_1[0x8] = arg12
        
        do
            int64_t rax_1 = sx.q(rbx_1)
            zmm0[0].o = *(arg4 + rax_1)
            arg5[0].o = *(arg4 + rax_1 + 0x10)
            zmm3[0].o = *(arg4 + rax_1 + 0x20)
            zmm4[0].o = *(arg4 + rax_1 + 0x30)
            zmm5[0].o = *(arg4 + rax_1 + 0x40)
            arg7[0].o = *(arg4 + rax_1 + 0x50)
            arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0xec)
            arg6[0].o = _mm_permute_ps(zmm3[0].o, 0x44)
            arg9[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg6[0].o, 8)
            arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0xec)
            arg6[0].o = _mm_permute_ps(arg7[0].o, 0x44)
            arg10[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg6[0].o, 8)
            arg8[0].o = _mm_permute_ps(zmm0[0].o, 0xe5)
            arg6[0].o = _mm_permute_ps(arg5[0].o, 0xf0)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg8[0].o, 1)
            arg8[0].o = _mm_permute_ps(zmm3[0].o, 0xa4)
            arg11[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg8[0].o, 8)
            arg8[0].o = _mm_permute_ps(zmm4[0].o, 0xe5)
            arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xf0)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg8[0].o, 1)
            arg8[0].o = _mm_permute_ps(arg7[0].o, 0xa4)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg8[0].o, 8)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 2)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0xc4)
            arg5[0].o = _mm_permute_ps(zmm4[0].o, 0x4e)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm5[0].o, 2)
            arg5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg7[0].o, 0xc4)
            zmm3 = _mm256_insertf128_ps(arg9, arg10[0].o, 1)
            arg6 = _mm256_insertf128_ps(arg11, arg6[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
            float var_420_1[0x8] = arg14
            float temp0_45[0x8] = _mm256_mul_ps(var_300_1, zmm0)
            arg9 = var_320_1
            zmm4 = _mm256_mul_ps(arg9, zmm3)
            float temp0_47[0x8] = _mm256_mul_ps(var_340_1, arg6)
            float temp0_49[0x8] = _mm256_sub_ps(temp0_45, _mm256_mul_ps(arg9, arg6))
            float temp0_51[0x8] = _mm256_sub_ps(zmm4, _mm256_mul_ps(var_340_1, zmm0))
            float temp0_53[0x8] = _mm256_sub_ps(temp0_47, _mm256_mul_ps(var_300_1, zmm3))
            float temp0_54[0x8] = _mm256_add_ps(temp0_49, temp0_49)
            float temp0_55[0x8] = _mm256_add_ps(temp0_51, temp0_51)
            float temp0_57[0x8] = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_2, temp0_54), zmm3)
            float temp0_58[0x8] = _mm256_add_ps(temp0_53, temp0_53)
            zmm4 = _mm256_sub_ps(_mm256_mul_ps(temp0_58, var_300_1), _mm256_mul_ps(temp0_55, arg9))
            float temp0_62[0x8] = _mm256_mul_ps(temp0_54, arg9)
            float temp0_63[0x8] = _mm256_add_ps(temp0_57, zmm4)
            zmm4 = _mm256_sub_ps(temp0_62, _mm256_mul_ps(temp0_58, var_340_1))
            zmm4 = _mm256_add_ps(
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_2, temp0_55), arg6), zmm4)
            float temp0_74[0x8] = _mm256_add_ps(
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_2, temp0_58), zmm0), 
                _mm256_sub_ps(_mm256_mul_ps(temp0_55, var_340_1), 
                    _mm256_mul_ps(temp0_54, var_300_1)))
            arg15 = _mm256_add_ps(temp0_63, _mm256_broadcast_ss(arg3[4]))
            float temp0_77[0x8] = _mm256_broadcast_ss(arg3[5])
            arg8 = _mm256_add_ps(zmm4, temp0_77)
            arg6 = _mm256_broadcast_ss(arg3[6])
            arg11 = _mm256_add_ps(temp0_74, arg6)
            float temp0_81[0x8] = _mm256_cmp_ps(arg15, arg12, 6)
            arg6[0].o = _mm256_extractf128_ps(temp0_81[0].o, 1)
            temp0_81[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_81[0].o, arg6[0].o)
            float var_580_1[0x8] = temp0_2
            float var_560_1[0x8] = temp0_2
            float var_540_1[0x8] = temp0_2
            float var_520_1[0x8] = temp0_2
            temp0_81[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_81[0].o, temp0_77[0].o)
            char temp0_85 = __vpmovmskb_gpr32d_xmmdq(temp0_81[0].o)
            arg5 = _mm256_cmp_ps(arg15, arg12, 2)
            
            if (temp0_85 == 0xff)
                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                temp0_63[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            label_14007186a:
                zmm4 = var_5c0
                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(temp0_63[0].q)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg6[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(temp0_63[0].o, temp0_77[0].o)
                arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                arg7 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            else
                arg6 = _mm256_cmp_ps(arg8, _mm256_broadcast_ss(arg2[1]), 2)
                arg5 = _mm256_and_ps(arg6, arg5)
                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                temp0_63[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                arg5[0].o = temp0_63[0].o ^ arg16[0].o
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_77[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0xff)
                    goto label_14007186a
                
                float temp0_95[0x8] = _mm256_cmp_ps(arg11, _mm256_broadcast_ss(arg2[2]), 2)
                arg6[0].o = _mm256_extractf128_ps(temp0_95[0].o, 1)
                temp0_95[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_95[0].o, arg6[0].o)
                zmm4[0].o = temp0_95[0].o & temp0_63[0].o
                temp0_95[0].o = zmm4[0].o ^ arg16[0].o
                temp0_95[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_95[0].o, temp0_77[0].o)
                char temp0_99 = __vpmovmskb_gpr32d_xmmdq(temp0_95[0].o)
                temp0_95[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                arg6[0].o = __vpmovsxwd_xmmdq_xmmq(arg6[0].q)
                arg7 = _mm256_insertf128_ps(temp0_95, arg6[0].o, 1)
                
                if (temp0_99 != 0xff)
                    zmm0 = arg8
                    float temp0_104[0x8] = _mm256_broadcast_ss(*arg1)
                    float temp0_105[0x8] = _mm256_cmp_ps(temp0_104, arg15, 6)
                    zmm5 = _mm256_and_ps(temp0_105, arg7)
                    temp0_105[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    temp0_63[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    temp0_105[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_105[0].o, temp0_63[0].o)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    arg5 = _mm256_insertf128_ps(arg6, temp0_105[0].o, 1)
                    
                    if (_mm256_movemask_ps(arg5) == 0xff)
                        zmm4 = _mm256_cmp_ps(temp0_104, arg15, 2)
                        arg8 = zmm0
                    else
                        arg5 = _mm256_cmp_ps(temp0_104, arg15, 2)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        arg8 = zmm0
                        arg6 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), zmm0, 2)
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                        arg5[0].o &= zmm4[0].o
                        arg5[0].o &= arg6[0].o
                        arg6[0].o = __vpmovsxwd_xmmdq_xmmq(arg5[0].q)
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                        arg5[0].o = __vpmovsxwd_xmmdq_xmmq(arg5[0].q)
                        zmm4 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                        zmm5 = _mm256_andnot_ps(zmm4, arg7)
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_63[0].o)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    
                    if (_mm256_movemask_ps(_mm256_insertf128_ps(arg6, arg5[0].o, 1)) != 0xff)
                        zmm4 = _mm256_and_ps(_mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg11, 2), 
                            _mm256_and_ps(zmm4, arg7))
                    
                    arg7 = _mm256_and_ps(zmm4, arg7)
                
                zmm4 = var_5c0
            
            float temp0_145[0x8] = _mm256_sub_ps(arg15, arg12)
            arg9 = __vsubps_ymmqq_ymmqq_memqq(arg8, temp0_4)
            zmm5 = __vsubps_ymmqq_ymmqq_memqq(arg11, temp0_5)
            arg10 = _mm256_sub_ps(temp0_6, arg15)
            float temp0_149[0x8] = _mm256_sub_ps(temp0_7, arg8)
            zmm0 = temp0_8
            var_5a0 = arg11
            arg6 = _mm256_sub_ps(zmm0, arg11)
            
            if (_mm256_movemask_ps(arg7) == 0)
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            else
                float var_500_1[0x8] = arg13
                arg16 = _mm256_max_ps(arg10, temp0_145)
                float temp0_153[0x8] = _mm256_max_ps(temp0_149, arg9)
                arg11 = _mm256_max_ps(arg6, zmm5)
                float temp0_155[0x8] = _mm256_cmp_ps(temp0_153, arg16, 1)
                arg14 = _mm256_and_ps(arg7, temp0_155)
                
                if (_mm256_movemask_ps(arg14) == 0)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg16[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    arg13 = _mm256_andnot_ps(temp0_155, arg7)
                    
                    if (_mm256_movemask_ps(arg13) != 0)
                    label_140071a0d:
                        arg16 = zmm4
                        float temp0_175[0x8] = _mm256_cmp_ps(arg11, temp0_153, 1)
                        zmm4 = _mm256_and_ps(arg13, temp0_175)
                        
                        if (_mm256_movemask_ps(zmm4) == 0)
                            arg12 = var_4a0_1
                            zmm4 = arg16
                        else
                            arg16 = _mm256_blendv_ps(arg16, temp0_153, zmm4)
                            zmm4 = arg16
                            arg12 = var_4a0_1
                        
                        arg16[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                        arg5 = _mm256_andnot_ps(temp0_175, arg13)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            zmm4 = _mm256_blendv_ps(zmm4, arg11, arg5)
                        
                        arg13 = var_500_1
                    else
                        arg13 = var_500_1
                        arg12 = var_4a0_1
                else
                    zmm0 = arg15
                    arg15 = zmm5
                    zmm5 = arg6
                    arg6 = arg8
                    float temp0_158[0x8] = _mm256_cmp_ps(arg11, arg16, 1)
                    arg8 = _mm256_and_ps(arg14, temp0_158)
                    
                    if (_mm256_movemask_ps(arg8) == 0)
                        arg16[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                        zmm4 = var_5c0
                    else
                        zmm4 = _mm256_blendv_ps(var_5c0, arg16, arg8)
                        arg16[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    
                    arg8 = arg6
                    arg6 = zmm5
                    zmm5 = arg15
                    arg15 = zmm0
                    arg5 = _mm256_andnot_ps(temp0_158, arg14)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        zmm4 = _mm256_blendv_ps(zmm4, arg11, arg5)
                    
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg13 = _mm256_andnot_ps(temp0_155, arg7)
                    
                    if (_mm256_movemask_ps(arg13) != 0)
                        goto label_140071a0d
                    
                    arg13 = var_500_1
                    arg12 = var_4a0_1
            
            arg5 = _mm256_cmp_ps(arg14, arg14, 0xf)
            arg7 = _mm256_xor_ps(arg7, arg5)
            
            if (_mm256_movemask_ps(arg7) != 0)
                float temp0_186[0x8] = _mm256_cmp_ps(arg14, temp0_145, 1)
                arg11 = _mm256_and_ps(temp0_186, arg7)
                
                if (_mm256_movemask_ps(arg11) != 0)
                    var_580_1 = _mm256_maskstore_ps(arg11, temp0_145)
                
                zmm3 = _mm256_andnot_ps(temp0_186, arg7)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_192[0x8] = _mm256_cmp_ps(arg14, arg10, 1)
                    arg11 = _mm256_and_ps(zmm3, temp0_192)
                    
                    if (_mm256_movemask_ps(arg11) != 0)
                        var_580_1 = _mm256_maskstore_ps(arg11, 
                            __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9460))
                    
                    arg5 = _mm256_andnot_ps(temp0_192, zmm3)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_580_1 = _mm256_maskstore_ps(arg5, arg14)
                
                float temp0_200[0x8] = _mm256_cmp_ps(arg14, arg9, 1)
                zmm3 = _mm256_and_ps(temp0_200, arg7)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_560_1 = _mm256_maskstore_ps(zmm3, arg9)
                
                zmm3 = _mm256_andnot_ps(temp0_200, arg7)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    arg10 = temp0_149
                    float temp0_206[0x8] = _mm256_cmp_ps(arg14, arg10, 1)
                    arg9 = _mm256_and_ps(zmm3, temp0_206)
                    
                    if (_mm256_movemask_ps(arg9) != 0)
                        var_560_1 = _mm256_maskstore_ps(arg9, 
                            __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9460))
                    
                    arg5 = _mm256_andnot_ps(temp0_206, zmm3)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_560_1 = _mm256_maskstore_ps(arg5, arg14)
                
                float temp0_214[0x8] = _mm256_cmp_ps(arg14, zmm5, 1)
                zmm3 = _mm256_and_ps(temp0_214, arg7)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_540_1 = _mm256_maskstore_ps(zmm3, zmm5)
                
                zmm3 = _mm256_andnot_ps(temp0_214, arg7)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_220[0x8] = _mm256_cmp_ps(arg14, arg6, 1)
                    zmm5 = _mm256_and_ps(zmm3, temp0_220)
                    
                    if (_mm256_movemask_ps(zmm5) != 0)
                        var_540_1 = _mm256_maskstore_ps(zmm5, 
                            __vxorps_ymmqq_ymmqq_memqq(arg6, data_142fc9460))
                    
                    arg5 = _mm256_andnot_ps(temp0_220, zmm3)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_540_1 = _mm256_maskstore_ps(arg5, arg14)
                
                float temp0_233[0x8] = _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(var_580_1, var_580_1), arg14), 
                        _mm256_mul_ps(var_560_1, var_560_1)), 
                    _mm256_mul_ps(var_540_1, var_540_1))
                float temp0_234[0x8] = _mm256_rsqrt_ps(temp0_233)
                float temp0_236[0x8] = _mm256_mul_ps(temp0_234, _mm256_mul_ps(temp0_233, temp0_234))
                float temp0_239[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_234, _mm256_sub_ps(data_142fc9480, temp0_236)), 
                    data_142fc94a0)
                arg6 = _mm256_rcp_ps(temp0_239)
                float temp0_241[0x8] = _mm256_mul_ps(arg6, temp0_239)
                zmm0 = data_142fc94c0
                arg5 = _mm256_mul_ps(arg6, _mm256_sub_ps(zmm0, temp0_241))
                zmm4 = _mm256_blendv_ps(zmm4, arg5, arg7)
            
            var_5c0 = zmm4
            zmm3 = __vsubps_ymmqq_ymmqq_memqq(zmm4, var_2e0_1)
            zmm4 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm3, data_142fc94e0, 1)
            result = _mm256_movemask_ps(zmm4)
            
            if (result.b != 0)
                float temp0_248[0x8] = _mm256_mul_ps(arg15, zmm3)
                float temp0_249[0x8] = _mm256_mul_ps(arg8, zmm3)
                float temp0_250[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm3, var_5a0)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_248, var_3a0_1)
                float temp0_252[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_249, var_380_1)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(temp0_250, var_360_1)
                var_3a0_1 = _mm256_maskstore_ps(zmm4, arg5)
                var_380_1 = _mm256_maskstore_ps(zmm4, temp0_252)
                var_360_1 = _mm256_maskstore_ps(zmm4, arg6)
                zmm0 = _mm256_add_ps(arg13, zmm3)
                arg13 = _mm256_blendv_ps(arg13, zmm0, zmm4)
            
            rsi += 8
            rbx_1 += 0x60
        while (rsi s< rdi_4)
        
        if (rsi s< arg20)
            goto label_1400724e2
    float temp0_1034[0x8] = _mm256_hadd_ps(var_3a0_1, var_3a0_1)
    float temp0_1035[0x8] = _mm256_hadd_ps(temp0_1034, temp0_1034)
    zmm3[0].o = _mm256_extractf128_ps(temp0_1035[0].o, 1)
    float temp0_1037[0x8] = _mm256_hadd_ps(var_380_1, var_380_1)
    temp0_1035[0].o = temp0_1035[0].o f+ zmm3[0]
    arg5 = _mm256_hadd_ps(temp0_1037, temp0_1037)
    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    float temp0_1040[0x8] = _mm256_hadd_ps(var_360_1, var_360_1)
    arg5[0].o = arg5[0].o f+ zmm3[0]
    float temp0_1041[0x8] = _mm256_hadd_ps(temp0_1040, temp0_1040)
    temp0_1035[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_1035[0].o, arg5[0].o, 0x10)
    arg5[0].o = _mm256_extractf128_ps(temp0_1041[0].o, 1)
    arg5[0].o = temp0_1041[0].o f+ arg5[0]
    temp0_1035[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_1035[0].o, arg5[0].o, 0x20)
    arg5[0].o = __vmovsd_xmmdq_memq(*r11)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, r11[1].d, 0x20)
    temp0_1035[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_1035[0].o, arg5[0].o)
    *r11 = temp0_1035[0]
    *(r11 + 4) = __vextractps_memd_xmmdq_immb(temp0_1035[0].o, 1)
    r11[1].d = __vextractps_memd_xmmdq_immb(temp0_1035[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg13, arg13)
float temp0_1207[0x8] = _mm256_hadd_ps(zmm0, zmm0)
arg5[0].o = _mm256_extractf128_ps(temp0_1207[0].o, 1)
temp0_1207[0].o = temp0_1207[0].o f+ arg5[0]
temp0_1207[0].o = temp0_1207[0].o f+ *r10
*r10 = temp0_1207[0]
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
return result
