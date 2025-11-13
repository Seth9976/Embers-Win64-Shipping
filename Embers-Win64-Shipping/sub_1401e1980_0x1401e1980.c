// 函数: sub_1401e1980
// 地址: 0x1401e1980
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
int64_t r12 = arg1
uint32_t zmm2[0x8]
zmm2[0].o = arg17
int32_t i_5 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
int64_t var_8f0 = r12
uint64_t i_4
float var_d60[0x8]
double var_ce0[0x4]
uint64_t var_be0
int32_t var_b60[0x4]
float var_a60[0x8]
float var_a40[0x8]
int128_t var_a00
int128_t var_9a0
int128_t var_960
float var_8e0[0x8]
uint64_t r9
double zmm0[0x4]
float zmm1[0x8]
float zmm4[0x8]
double zmm5[0x4]

if (i_5 s<= 0)
    r9 = 0
    i_4 = zx.q(arg19)
    
    if (0 s< i_4.d)
    label_1401e89ea:
        zmm0[0].o = zx.o(r9.d)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        arg10[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
        arg11[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
        zmm2[0].o = zx.o(i_4.d)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
        arg9[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
        zmm5 = _mm256_insertf128_ps(arg9, arg8[0].o, 1)
        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg10[0].o, 3)
        arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg11[0].o, 3)
        arg6 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(arg6, arg7[0].o, 1))
        int64_t r9_2 = sx.q(arg6[0])
        int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        int64_t r13_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        arg7 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_142fc9520)
        arg5[0].o = zx.o(*(zx.q(arg7[0]) + arg2 + r9_2))
        int64_t rdx_49 = sx.q(arg6[0])
        uint64_t rsi_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_33 + arg2 + r15_4), 1)
        uint64_t rsi_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_34 + arg2 + r12_2), 2)
        int64_t rax_367 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        uint32_t* rcx_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_50 + arg2 + r13_4), 3)
        arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        zmm4[0].o = zx.o(*(zx.q(arg7[0]) + arg2 + rdx_49))
        int32_t temp0_2573 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
        uint32_t* rsi_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
        int64_t rbx_24 = sx.q(temp0_2573)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_36 + arg2 + rax_367), 1)
        uint32_t* rsi_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_37 + arg2 + rbx_24), 2)
        zmm0[0].o = zx.o(*(arg2 + rdx_49))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rax_367), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rbx_24), 2)
        zmm1[0].o = zx.o(*(arg2 + r9_2))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + r15_4), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + r12_2), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + r13_4), 3)
        float var_aa0_3[0x8] = zmm1
        int64_t rax_369 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rax_369), 3)
        double var_640_1[0x2] = zmm0[0].o
        uint32_t* rcx_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 3)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_53 + arg2 + rax_369), 3)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm0 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
        int32_t rax_371 = zmm0[0].d
        int32_t temp0_2591 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        zmm1[0].o = zx.o(*(arg3 + sx.q(rax_371)))
        int64_t rax_374 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + sx.q(temp0_2591)), 1)
        int64_t rcx_57 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rax_374), 2)
        int64_t rax_376 = sx.q(zmm0[0].d)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rcx_57), 3)
        int32_t temp0_2598 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        arg5[0].o = zx.o(*(arg3 + rax_376))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg3 + sx.q(temp0_2598)), 1)
        int64_t rax_379 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg3 + rax_379), 2)
        int64_t rax_381 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg3 + rax_381), 3)
        arg5 = _mm256_insertf128_ps(arg10, arg11[0].o, 1)
        float var_9c0_1[0x8] = arg5
        arg14 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm0[0].o &= not.o(arg8[0].o)
        zmm1[0].o &= not.o(arg9[0].o)
        arg11[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
        int128_t var_760
        int128_t var_740
        int128_t var_720
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            int32_t var_cc0_2[0x8] = arg14
            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            arg9[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            arg15[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
            arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = 4
            zmm1[0].o = zx.o(arg4)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0].q)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            float var_9e0_2[0x8] = arg5
            zmm4 = _mm256_insertf128_ps(arg5, arg8[0].o, 1)
            uint32_t var_6c0_3[0x8] = zmm2
            zmm0 = _mm256_and_ps(zmm4, zmm2)
            int64_t r8_12 = sx.q(zmm0[0].d)
            int32_t temp0_2630 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int64_t r9_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rbx_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int64_t rdi_29 = sx.q(zmm0[0].d)
            int32_t temp0_2634 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2635 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2636 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = zx.o(*(arg4 + r8_12))
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + sx.q(temp0_2630)), 1)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r9_3), 2)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rbx_26), 3)
            zmm2[0].o = zx.o(*(arg4 + rdi_29))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + sx.q(temp0_2634)), 1)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + sx.q(temp0_2635)), 2)
            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + sx.q(temp0_2636)), 3)
            arg12 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x18)
            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x18)
            zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1c)
            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x1c)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
            arg7 = _mm256_and_ps(zmm4, zmm0)
            uint64_t r14_7 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 1))
            uint64_t r10_9 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 2))
            zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
            uint64_t r11_6 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            uint64_t rsi_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rcx_61 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t r8_13 = zx.q(arg7[0])
            double var_ae0_1[0x4] = zmm5
            zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_1434429e0)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 3)
            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 3)
            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
            zmm5 = _mm256_or_ps(zmm5, arg6)
            zmm4 = _mm256_and_ps(zmm4, zmm5)
            uint64_t rax_387 = zx.q(zmm4[0])
            uint64_t rbx_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            zmm5[0].o = zx.o(*(rax_387 + &data_143442ba0))
            uint64_t rax_389 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_27 + &data_143442ba0), 1)
            uint64_t rbx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_389 + &data_143442ba0), 2)
            uint64_t rax_390 = zx.q(zmm4[0])
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_28 + &data_143442ba0), 3)
            uint64_t rbx_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_390 + &data_143442ba0), 4)
            uint64_t rax_391 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_29 + &data_143442ba0), 5)
            uint64_t rbx_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_391 + &data_143442ba0), 6)
            zmm4[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm4[0].o, *(rbx_30 + &data_143442ba0), 7)
            uint64_t rbx_31 = zx.q(zmm0[0].d)
            uint64_t rdx_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = __vpmovzxbd_xmmdq_xmmd(zmm4[0])
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0xe5)
            zmm4[0].o = __vpmovzxbd_xmmdq_xmmd(zmm4[0])
            arg7 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
            zmm4[0].o = data_142fc95c0
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm0[0].o ^= arg6[0].o
            zmm4[0].o ^= arg6[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm0[0].o &= arg11[0].o
            zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            char temp0_2692 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o)
            float var_b80_1[0x8] = arg9
            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            int32_t var_c80_1[0x8] = arg14
            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
            zmm4[0].o = zx.o(0)
            float var_ac0_1[0x8] = zmm4
            zmm4[0].o = zx.o(0)
            
            if (temp0_2692 != 0)
                zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                zmm4 = _mm256_and_ps(zmm0, arg7)
            
            int128_t var_bc0_2 = arg15[0].o
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442840)
            float var_d80_2[0x8] = arg6
            int128_t var_980_1 = arg13[0].o
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
            zmm5[0].o &= arg11[0].o
            arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
            arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            int32_t var_c40_1[0x8] = arg12
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) == 0)
                zmm5[0].o = zx.o(0)
            else
                arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                arg6 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                zmm5[0].o = zx.o(0)
                zmm5 = _mm256_blendv_ps(zmm5, arg7, arg6)
                zmm4 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm4, data_143442a00, arg6)
            
            arg14 = var_cc0_2
            arg13 = var_d80_2
            arg6 = var_9e0_2
            arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
            double var_d40_2[0x4] = zmm0
            arg9 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm1[0].o = zx.o(*(rbx_31 + &data_143442b80))
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_40 + &data_143442b80), 1)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_61 + &data_143442b80), 2)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_53 + &data_143442b80), 3)
            zmm1[0].o &= arg8[0].o
            zmm2[0].o = zx.o(*(r8_13 + &data_143442b80))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14_7 + &data_143442b80), 1)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_9 + &data_143442b80), 2)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_6 + &data_143442b80), 3)
            zmm1[0].o &= arg6[0].o
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            double var_b40_4[0x4] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm1[0].o = data_142fc95e0
            zmm2[0].o = arg8[0].o & zmm1[0].o
            zmm0[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm1[0].o &= arg6[0].o
            zmm1[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
            arg15 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            arg12[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            zmm1[0].o = data_142d3f5b0
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o &= arg11[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:4_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            float var_d20_1[0x8] = arg9
            int32_t var_b00_1[0x8] = arg10
            var_d60[0].o = arg11[0].o
            float var_c60_4[0x8]
            
            if (cond:4_1)
                arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                zmm0[0].o = zx.o(0)
                var_c60_4 = zmm0
                arg7 = var_b80_1
                arg8[0].o = var_bc0_2
                arg13 = var_c80_1
                arg5[0].o = var_980_1
            else
                float var_c20_3[0x8] = arg15
                zmm1 = __vandps_ymmqq_ymmqq_memqq(var_c40_1, data_143442ae0)
                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                zmm4[0].o &= zmm0[0].o
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o) == 0
                var_ce0[0].o = arg12[0].o
                int32_t var_c60_3[0x8]
                
                if (cond:3_1)
                    zmm2[0].o = zx.o(0)
                    var_c60_3 = zmm2
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    zmm2[0].o = zx.o(0)
                    var_be0.32 = zmm2
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm2[0].o = zx.o(0)
                else
                    zmm5[0].o = zx.o(0)
                    arg6[0].o = zx.o(0)
                    zmm2[0].o = arg17
                    
                    if (zx.o(0) f>= zmm2[0])
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        var_c60_3 = zmm2
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        var_be0.32 = zmm2
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    else
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg6[0].o)
                        arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                        
                        if (zmm2[0].o f>= 1f)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7 = _mm256_and_ps(_mm256_insertf128_ps(arg8, arg7[0].o, 1), arg6)
                            arg10 = arg7
                            var_be0.32 = arg7
                            var_c60_3 = arg7
                        else
                            zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0)
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm5[0].o, 1)
                            arg7 = _mm256_cvtepi32_ps(arg6)
                            arg9 = _mm256_mul_ps(zmm5, arg7)
                            arg10 = _mm256_round_ps(arg9, 9)
                            zmm5 = _mm256_cvttps_epi32(arg10)
                            arg8[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg11[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg14[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                            zmm5 = _mm256_insertf128_ps(arg8, arg14[0].o, 1)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg13[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg12 = _mm256_insertf128_ps(arg13, arg7[0].o, 1)
                            var_c60_3 = _mm256_and_ps(arg12, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            
                            if (arg18 != 1)
                                zmm5 = _mm256_sub_ps(arg9, arg10)
                            
                            arg7[0].o &= arg14[0].o
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            arg10[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                            arg7[0].o = arg13[0].o & arg8[0].o
                            arg7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                            arg6[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                            arg7 = _mm256_and_ps(arg12, arg6)
                            arg10 = var_c60_3
                            var_be0.32 = arg7
                            arg14 = var_cc0_2
                            arg9 = var_d20_1
                            arg11[0].o = var_d60[0].o
                            arg13 = var_d80_2
                            arg12[0].o = var_ce0[0].o
                    
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                    arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                    zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                    zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                    zmm2 = _mm256_and_ps(zmm4, zmm5)
                
                var_ac0_1 = zmm2
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                arg5[0].o ^= zmm4[0].o
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                zmm1[0].o ^= zmm4[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                arg6[0].o = zmm0[0].o & zmm1[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    var_c60_4 = arg7
                    arg7 = var_b80_1
                    arg8[0].o = var_bc0_2
                    arg13 = var_c80_1
                    arg5[0].o = var_980_1
                    arg15 = var_c20_3
                else
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                    zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0[0].o = data_142d3f5b0
                    zmm2[0].o = zmm0[0].o
                    zmm0[0].o = __vpminud_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                    zmm2[0].o = __vpminud_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm2[0].o = zx.o(0)
                    arg5[0].o = arg17
                    int32_t rax_396
                    rax_396.b = zx.o(0) f>= arg5[0]
                    zmm2[0].o = zx.o(neg.d(rax_396))
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
                    arg5 = _mm256_or_ps(zmm0, zmm2)
                    zmm0 = _mm256_and_ps(arg5, zmm1)
                    arg15 = var_c20_3
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        arg10 = _mm256_blendv_ps(var_c60_3, zmm2, zmm0)
                        arg7 = _mm256_blendv_ps(var_be0.32, zmm2, zmm0)
                        var_c60_3 = arg10
                        var_be0.32 = arg7
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg13 = _mm256_andnot_ps(arg5, zmm1)
                    int32_t temp0_2835 = _mm256_movemask_ps(arg13)
                    
                    if (temp0_2835 == 0)
                        var_c60_4 = arg7
                    label_1401e9c79:
                        arg9 = var_d20_1
                        arg7 = var_b80_1
                        arg8[0].o = var_bc0_2
                        arg13 = var_c80_1
                    else
                        arg7 = var_d80_2
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        arg9[0].o = arg17
                        
                        if (arg9[0].o f>= 1f)
                            arg10 = _mm256_blendv_ps(var_c60_3, zmm2, arg13)
                            zmm1 = _mm256_blendv_ps(var_be0.32, zmm2, arg13)
                            var_c60_4 = zmm1
                            goto label_1401e9c79
                        
                        var_a00.32 = arg5
                        var_9a0.32 = zmm5
                        var_960 = arg6[0].o
                        zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg14 = zmm2
                        zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        arg5[0].o = __vpmovzxdq_xmmdq_xmmq(arg15[0].q)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                        arg6 = var_b40_4
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm4[0].o = __vpmovzxdq_xmmdq_xmmq(zmm4[0].q)
                        zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                        arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg11 = var_d40_2
                        arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                        arg7[0].o = _mm256_extractf128_ps(var_b00_1[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b00_1[0].o, zmm2[0].o)
                        arg7[0].o = data_143442a20
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2 = data_143442a40
                        zmm1 = _mm256_and_ps(zmm1, zmm2)
                        float var_ba0_1[0x8] = zmm1
                        arg6 = _mm256_and_ps(arg5, zmm2)
                        zmm1[0].o = _mm_permute_ps(arg9[0].o, 0)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        zmm2[0].o = arg12[0].o
                        zmm2[0] = float.s(arg16 - 1)
                        arg5 = _mm256_cvtepi32_ps(arg14)
                        zmm1 = _mm256_mul_ps(zmm1, arg5)
                        arg8[0].o = zmm2[0].o f* arg9[0]
                        zmm1 = _mm256_cvttps_epi32(zmm1)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        int32_t var_a80_1[0x8] = arg14
                        zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                        arg7 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm4 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                        int32_t rdx_54 = int.d(arg8[0])
                        int32_t rbx_32 = 0
                        
                        if (rdx_54 s>= 0)
                            rbx_32 = rdx_54
                        
                        if (arg16 - 2 s<= rbx_32)
                            rbx_32 = arg16 - 2
                        
                        var_b60.32 = arg7
                        float var_920_1[0x4] = arg8[0].o
                        var_a60 = zmm4
                        var_a40 = arg6
                        
                        if (arg16 s< 0x100)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            int64_t var_d00_2[0x2] = zmm2[0].o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            char rdx_56 = temp0_2835.b
                            
                            if ((rdx_56 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            arg11[0].o = var_d60[0].o
                            
                            if ((rdx_56 & 2) != 0)
                                uint32_t rax_427 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_427, 1)
                            
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg6 = var_ba0_1
                            int64_t temp0_3068[0x2] = __vextractf128_memdq_ymmdq_immb(arg6[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                            
                            if ((rdx_56 & 4) == 0)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_3068)
                                
                                if ((rdx_56 & 8) != 0)
                                    goto label_1401ea3eb
                                
                                goto label_1401e9d42
                            
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm4[0].q), 2)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_3068)
                            
                            if ((rdx_56 & 8) != 0)
                            label_1401ea3eb:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_473 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_473, 3)
                                zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((rdx_56 & 0x10) == 0)
                                    goto label_1401e9d51
                                
                                goto label_1401ea416
                            
                        label_1401e9d42:
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            
                            if ((rdx_56 & 0x10) != 0)
                            label_1401ea416:
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                
                                if ((rdx_56 & 0x20) != 0)
                                label_1401ea42a:
                                    uint32_t rax_477 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_477, 5)
                                    
                                    if ((rdx_56 & 0x40) == 0)
                                        goto label_1401e9d65
                                    
                                    goto label_1401ea43b
                            else
                            label_1401e9d51:
                                
                                if ((rdx_56 & 0x20) != 0)
                                    goto label_1401ea42a
                            
                            int32_t var_c00_2[0x4]
                            
                            if ((rdx_56 & 0x40) != 0)
                            label_1401ea43b:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm2[0].q), 6)
                                var_c00_2 = zmm5[0].o
                                
                                if (temp0_2835.b s< 0)
                                label_1401ea45f:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_481 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_481, 7)
                            else
                            label_1401e9d65:
                                var_c00_2 = zmm5[0].o
                                
                                if (temp0_2835.b s< 0)
                                    goto label_1401ea45f
                            
                            zmm0[0].o &= data_142fc92e0
                            zmm1[0].o = zx.o(0)
                            arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = zx.o(rbx_32)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                            arg14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            double var_8e0_2[0x4] = zmm0
                            int32_t temp0_3081 = _mm256_movemask_ps(_mm256_and_ps(arg13, zmm0))
                            zmm0 = arg7
                            
                            if (temp0_3081 != 0)
                                zmm0 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                arg9[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                                zmm1[0].o ^= zmm2[0].o
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                                zmm0[0].o ^= zmm2[0].o
                                arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                arg8 = var_b60.32
                                zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, var_a80_1, arg5)
                                zmm1[0].o = var_c00_2
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                zmm4[0].o = var_ce0[0].o
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                zmm5 = var_d80_2
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                arg6 = _mm256_and_ps(zmm4, arg5)
                                arg12 = _mm256_and_ps(arg13, arg6)
                                int32_t i = _mm256_movemask_ps(arg12)
                                
                                if (i != 0)
                                    arg5 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                    var_b00_1[0].o =
                                        __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_b00_1[0].o, var_b00_1[0].o)
                                    
                                    do
                                        zmm5 = arg5
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d00_2)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a40[0].o)
                                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                        char temp0_3121 = _mm256_movemask_ps(arg12)
                                        
                                        if ((temp0_3121 & 1) != 0)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 0)
                                        
                                        arg12[0].o = var_ce0[0].o
                                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_3121 & 2) == 0)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            arg11[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, 
                                                var_ba0_1[0].o)
                                            
                                            if ((temp0_3121 & 4) != 0)
                                                goto label_1401e9e86
                                            
                                            goto label_1401e9fbe
                                        
                                        uint32_t rax_430 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_430, 1)
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                        arg11[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_ba0_1[0].o)
                                        
                                        if ((temp0_3121 & 4) != 0)
                                        label_1401e9e86:
                                            arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg7[0].q), 2)
                                            zmm1[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_3068)
                                            
                                            if ((temp0_3121 & 8) == 0)
                                                goto label_1401e9fd1
                                            
                                            goto label_1401e9eac
                                        
                                    label_1401e9fbe:
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_3068)
                                        
                                        if ((temp0_3121 & 8) == 0)
                                        label_1401e9fd1:
                                            arg5 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                            
                                            if ((temp0_3121 & 0x10) != 0)
                                                goto label_1401e9ed8
                                            
                                            goto label_1401e9fe1
                                        
                                    label_1401e9eac:
                                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                        uint32_t rax_434 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_434, 3)
                                        arg5 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                        
                                        if ((temp0_3121 & 0x10) != 0)
                                        label_1401e9ed8:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 4)
                                            
                                            if ((temp0_3121 & 0x20) == 0)
                                                goto label_1401e9feb
                                            
                                            goto label_1401e9eed
                                        
                                    label_1401e9fe1:
                                        
                                        if ((temp0_3121 & 0x20) == 0)
                                        label_1401e9feb:
                                            
                                            if ((temp0_3121 & 0x40) != 0)
                                                goto label_1401e9eff
                                            
                                            goto label_1401e9ff5
                                        
                                    label_1401e9eed:
                                        uint32_t rax_438 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_438, 5)
                                        
                                        if ((temp0_3121 & 0x40) == 0)
                                        label_1401e9ff5:
                                            
                                            if (temp0_3121 s< 0)
                                            label_1401e9f1b:
                                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                uint32_t rax_442 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_442, 7)
                                        else
                                        label_1401e9eff:
                                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm1[0].q), 6)
                                            
                                            if (temp0_3121 s< 0)
                                                goto label_1401e9f1b
                                        
                                        zmm1[0].o = zmm2[0].o & data_142fc92e0
                                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm1[0].o, 
                                            data_142d8f750)
                                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                        arg5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                                        zmm1 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm1, arg5[0].o, 1), arg6)
                                        arg11[0].o = zx.o(0)
                                        
                                        if (_mm256_movemask_ps(_mm256_and_ps(zmm1, arg13)) != i)
                                            arg11 = _mm256_xor_ps(zmm1, arg6)
                                        
                                        zmm0 = _mm256_blendv_ps(zmm0, arg8, zmm1)
                                        zmm1[0].o =
                                            __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_b00_1[0].o)
                                        zmm4[0].o =
                                            __vpsubd_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_b00_1[0].o)
                                        arg5 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_d80_2[0].o, zmm4[0].o)
                                        zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                        arg6 = _mm256_and_ps(zmm1, arg11)
                                        arg12 = _mm256_and_ps(arg6, arg13)
                                        i = _mm256_movemask_ps(arg12)
                                        arg8 = zmm5
                                        arg11[0].o = var_d60[0].o
                                    while (i != 0)
                            
                            arg5 = var_8e0_2
                            zmm1 = _mm256_andnot_ps(arg5, arg13)
                            
                            if (_mm256_movemask_ps(zmm1) == 0)
                                arg14 = var_cc0_2
                                arg9 = var_d20_1
                                arg12[0].o = var_ce0[0].o
                            else
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm2 = _mm256_cmp_ps(zmm1, zmm1, 0xf)
                                zmm4 = _mm256_xor_ps(arg5, zmm2)
                                zmm0 = _mm256_blendv_ps(zmm0, zmm1, zmm4)
                                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_c00_2)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_b60)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                                arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                                arg10 = _mm256_and_ps(arg6, zmm4)
                                arg8 = _mm256_and_ps(arg10, arg13)
                                int32_t i_1 = _mm256_movemask_ps(arg8)
                                
                                if (i_1 == 0)
                                    arg12[0].o = var_ce0[0].o
                                else
                                    arg9 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                    arg12[0].o = var_ce0[0].o
                                    
                                    do
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg9[0].q)
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d00_2)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a40[0].o)
                                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                        char temp0_3190 = _mm256_movemask_ps(arg8)
                                        
                                        if ((temp0_3190 & 1) == 0)
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            
                                            if ((temp0_3190 & 2) != 0)
                                                goto label_1401ea12e
                                            
                                            goto label_1401ea251
                                        
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg5[0].q), 0)
                                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_3190 & 2) != 0)
                                        label_1401ea12e:
                                            uint32_t rax_450 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_450, 1)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, 
                                                var_ba0_1[0].o)
                                            
                                            if ((temp0_3190 & 4) == 0)
                                                goto label_1401ea269
                                            
                                            goto label_1401ea14e
                                        
                                    label_1401ea251:
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                        arg8[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_ba0_1[0].o)
                                        
                                        if ((temp0_3190 & 4) == 0)
                                        label_1401ea269:
                                            zmm1[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_3068)
                                            
                                            if ((temp0_3190 & 8) != 0)
                                                goto label_1401ea174
                                            
                                            goto label_1401ea27c
                                        
                                    label_1401ea14e:
                                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg7[0].q), 2)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_3068)
                                        
                                        if ((temp0_3190 & 8) != 0)
                                        label_1401ea174:
                                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            uint32_t rax_454 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_454, 3)
                                            arg5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                            
                                            if ((temp0_3190 & 0x10) == 0)
                                                goto label_1401ea28c
                                            
                                            goto label_1401ea1a0
                                        
                                    label_1401ea27c:
                                        arg5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                        
                                        if ((temp0_3190 & 0x10) == 0)
                                        label_1401ea28c:
                                            
                                            if ((temp0_3190 & 0x20) != 0)
                                                goto label_1401ea1b5
                                            
                                            goto label_1401ea296
                                        
                                    label_1401ea1a0:
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg5[0].q), 4)
                                        
                                        if ((temp0_3190 & 0x20) != 0)
                                        label_1401ea1b5:
                                            uint32_t rax_458 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_458, 5)
                                            
                                            if ((temp0_3190 & 0x40) == 0)
                                                goto label_1401ea2a0
                                            
                                            goto label_1401ea1c7
                                        
                                    label_1401ea296:
                                        
                                        if ((temp0_3190 & 0x40) != 0)
                                        label_1401ea1c7:
                                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, zx.d(*zmm1[0].q), 6)
                                            
                                            if (temp0_3190 s< 0)
                                            label_1401ea1e3:
                                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                uint32_t rax_462 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, rax_462, 7)
                                        else
                                        label_1401ea2a0:
                                            
                                            if (temp0_3190 s< 0)
                                                goto label_1401ea1e3
                                        
                                        zmm1[0].o = arg6[0].o & data_142fc92e0
                                        arg5[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                        arg7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                        arg5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                        arg5[0].o ^= zmm5[0].o
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                                        zmm1[0].o ^= zmm5[0].o
                                        zmm1 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm1, arg5[0].o, 1), arg10)
                                        arg5[0].o = zx.o(0)
                                        arg7 = _mm256_and_ps(zmm1, arg13)
                                        
                                        if (_mm256_movemask_ps(arg7) != i_1)
                                            arg5 = _mm256_xor_ps(zmm1, arg10)
                                        
                                        zmm0 = _mm256_blendv_ps(zmm0, arg9, zmm1)
                                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm5[0].o)
                                        arg9 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                                        zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                        arg10 = _mm256_and_ps(zmm1, arg5)
                                        arg8 = _mm256_and_ps(arg10, arg13)
                                        i_1 = _mm256_movemask_ps(arg8)
                                    while (i_1 != 0)
                                
                                arg14 = var_cc0_2
                                arg9 = var_d20_1
                            
                            zmm1 = var_c60_3
                            arg10 = _mm256_blendv_ps(zmm1, zmm0, arg13)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d00_2)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a40[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            
                            if ((rdx_56 & 1) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                
                                if ((rdx_56 & 2) != 0)
                                    goto label_1401ef193
                                
                                goto label_1401ea916
                            
                            zmm2[0].o = zx.o(*zmm1[0].q)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            
                            if ((rdx_56 & 2) != 0)
                            label_1401ef193:
                                uint32_t rax_703 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_703, 1)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ba0_1[0].o)
                                
                                if ((rdx_56 & 4) == 0)
                                    goto label_1401ea92d
                                
                                goto label_1401ef1b2
                            
                        label_1401ea916:
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ba0_1[0].o)
                            
                            if ((rdx_56 & 4) == 0)
                            label_1401ea92d:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_3068)
                                
                                if ((rdx_56 & 8) != 0)
                                    goto label_1401ef1d7
                                
                                goto label_1401ea93f
                            
                        label_1401ef1b2:
                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0]), 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_3068)
                            
                            if ((rdx_56 & 8) != 0)
                            label_1401ef1d7:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_707 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_707, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_56 & 0x10) == 0)
                                    goto label_1401ea94e
                                
                                goto label_1401ef202
                            
                        label_1401ea93f:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_56 & 0x10) == 0)
                            label_1401ea94e:
                                
                                if ((rdx_56 & 0x20) != 0)
                                    goto label_1401ef216
                                
                                goto label_1401ea957
                            
                        label_1401ef202:
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm1[0].q), 4)
                            
                            if ((rdx_56 & 0x20) != 0)
                            label_1401ef216:
                                uint32_t rax_711 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_711, 5)
                                
                                if ((rdx_56 & 0x40) == 0)
                                    goto label_1401ea960
                                
                                goto label_1401ef227
                            
                        label_1401ea957:
                            
                            if ((rdx_56 & 0x40) != 0)
                            label_1401ef227:
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg5[0].q), 6)
                                
                                if (temp0_2835.b s< 0)
                                label_1401ef242:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_715 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_715, 7)
                            else
                            label_1401ea960:
                                
                                if (temp0_2835.b s< 0)
                                    goto label_1401ef242
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            arg6 = _mm256_blendv_ps(var_be0.32, zmm0, arg13)
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm1[0].o
                            arg5 = var_d80_2
                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm1[0].o ^= arg5[0].o
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg13)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                arg6 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg6, var_a80_1, zmm0)
                            
                            arg7 = var_b80_1
                            arg8[0].o = var_bc0_2
                            arg13 = var_c80_1
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_d00_2)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_a40[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            
                            if ((rdx_56 & 1) == 0)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((rdx_56 & 2) != 0)
                                    goto label_1401ef280
                                
                                goto label_1401eaa1e
                            
                            zmm0[0].o = zx.o(*zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            
                            if ((rdx_56 & 2) != 0)
                            label_1401ef280:
                                uint32_t rax_719 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_719, 1)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                                
                                if ((rdx_56 & 4) == 0)
                                    goto label_1401eaa35
                                
                                goto label_1401ef29f
                            
                        label_1401eaa1e:
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                            
                            if ((rdx_56 & 4) == 0)
                            label_1401eaa35:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_3068)
                                
                                if ((rdx_56 & 8) != 0)
                                    goto label_1401ef2c4
                                
                                goto label_1401eaa47
                            
                        label_1401ef29f:
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm4[0].q), 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_3068)
                            
                            if ((rdx_56 & 8) != 0)
                            label_1401ef2c4:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_723 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_723, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_56 & 0x10) == 0)
                                    goto label_1401eaa56
                                
                                goto label_1401ef2ef
                            
                        label_1401eaa47:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_56 & 0x10) == 0)
                            label_1401eaa56:
                                zmm2[0].o &= data_142fc92e0
                                
                                if ((rdx_56 & 0x20) != 0)
                                    goto label_1401ef30b
                                
                                goto label_1401eaa67
                            
                        label_1401ef2ef:
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                            zmm2[0].o &= data_142fc92e0
                            
                            if ((rdx_56 & 0x20) == 0)
                            label_1401eaa67:
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_56 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm5[0]), 6)
                            else
                            label_1401ef30b:
                                uint32_t rax_727 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_727, 5)
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_56 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm5[0]), 6)
                            
                            zmm5 = var_9a0.32
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            var_c60_4 = arg6
                            
                            if (temp0_2835.b s< 0)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_505 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_505, 7)
                            
                            arg6[0].o = var_960
                            zmm4 = var_a60
                            zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            zmm0[0].o &= data_142fc92e0
                        else
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            var_8e0[0].o = zmm0[0].o
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            int64_t var_d00_1[0x2] = arg5[0].o
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            char rdx_55 = temp0_2835.b
                            
                            if ((rdx_55 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                            
                            if ((rdx_55 & 2) != 0)
                                int64_t rax_403 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_403, 1)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2 = var_ba0_1
                            double temp0_2902[0x2] = __vextractf128_memdq_ymmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            
                            if ((rdx_55 & 4) == 0)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_2902)
                                
                                if ((rdx_55 & 8) != 0)
                                    goto label_1401ea351
                                
                                goto label_1401e9655
                            
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 2)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_2902)
                            
                            if ((rdx_55 & 8) != 0)
                            label_1401ea351:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_465 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_465, 3)
                                zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((rdx_55 & 0x10) == 0)
                                    goto label_1401e9664
                                
                                goto label_1401ea376
                            
                        label_1401e9655:
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            
                            if ((rdx_55 & 0x10) == 0)
                            label_1401e9664:
                                
                                if ((rdx_55 & 0x20) != 0)
                                    goto label_1401ea384
                                
                                goto label_1401e966d
                            
                        label_1401ea376:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rdx_55 & 0x20) != 0)
                            label_1401ea384:
                                int64_t rax_467 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_467, 5)
                                
                                if ((rdx_55 & 0x40) == 0)
                                    goto label_1401e9676
                                
                                goto label_1401ea398
                            
                        label_1401e966d:
                            
                            if ((rdx_55 & 0x40) != 0)
                            label_1401ea398:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                
                                if (temp0_2835.b s< 0)
                                label_1401ea3b0:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_469 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_469, 7)
                            else
                            label_1401e9676:
                                
                                if (temp0_2835.b s< 0)
                                    goto label_1401ea3b0
                            
                            zmm1[0].o = zx.o(0)
                            arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = zx.o(rbx_32)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                            arg14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            double var_a20_5[0x4] = zmm0
                            zmm1 = arg7
                            
                            if (_mm256_movemask_ps(_mm256_and_ps(arg13, zmm0)) != 0)
                                zmm0 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int32_t var_c00_1[0x4] = arg5[0].o
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                                zmm1[0].o ^= zmm2[0].o
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                                zmm0[0].o ^= zmm2[0].o
                                arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                arg8 = var_b60.32
                                zmm1 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, var_a80_1, arg5)
                                zmm0[0].o = var_8e0[0].o
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                zmm4[0].o = var_ce0[0].o
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                zmm5 = var_d80_2
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                arg9 = _mm256_and_ps(zmm4, arg5)
                                arg12 = _mm256_and_ps(arg13, arg9)
                                int32_t i_2 = _mm256_movemask_ps(arg12)
                                
                                if (i_2 != 0)
                                    arg7 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                    arg15[0].o =
                                        __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                    
                                    do
                                        zmm4 = arg7
                                        arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d00_1)
                                        zmm5[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a40[0].o)
                                        arg10 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        char temp0_2957 = _mm256_movemask_ps(arg12)
                                        
                                        if ((temp0_2957 & 1) != 0)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg10[0].q, 0)
                                        
                                        arg6[0].o = var_ce0[0].o
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                        
                                        if ((temp0_2957 & 2) == 0)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            arg11[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, 
                                                var_ba0_1[0].o)
                                            
                                            if ((temp0_2957 & 4) != 0)
                                                goto label_1401e978e
                                            
                                            goto label_1401e98b3
                                        
                                        int64_t rax_405 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_405, 1)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        arg11[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_ba0_1[0].o)
                                        
                                        if ((temp0_2957 & 4) != 0)
                                        label_1401e978e:
                                            arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg5[0].q, 2)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_2902)
                                            
                                            if ((temp0_2957 & 8) == 0)
                                                goto label_1401e98c6
                                            
                                            goto label_1401e97b1
                                        
                                    label_1401e98b3:
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_2902)
                                        
                                        if ((temp0_2957 & 8) == 0)
                                        label_1401e98c6:
                                            arg10 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                            
                                            if ((temp0_2957 & 0x10) != 0)
                                                goto label_1401e97d7
                                            
                                            goto label_1401e98d6
                                        
                                    label_1401e97b1:
                                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_407 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_407, 3)
                                        arg10 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                        
                                        if ((temp0_2957 & 0x10) != 0)
                                        label_1401e97d7:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg10[0].q, 4)
                                            
                                            if ((temp0_2957 & 0x20) == 0)
                                                goto label_1401e98e0
                                            
                                            goto label_1401e97e6
                                        
                                    label_1401e98d6:
                                        
                                        if ((temp0_2957 & 0x20) == 0)
                                        label_1401e98e0:
                                            
                                            if ((temp0_2957 & 0x40) != 0)
                                                goto label_1401e97fb
                                            
                                            goto label_1401e98ea
                                        
                                    label_1401e97e6:
                                        int64_t rax_409 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_409, 5)
                                        
                                        if ((temp0_2957 & 0x40) == 0)
                                        label_1401e98ea:
                                            
                                            if (temp0_2957 s< 0)
                                            label_1401e9814:
                                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                                int64_t rax_411 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_411, 7)
                                        else
                                        label_1401e97fb:
                                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *zmm0[0], 6)
                                            
                                            if (temp0_2957 s< 0)
                                                goto label_1401e9814
                                        
                                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm2[0].o, 
                                            data_142d8f750)
                                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_c00_1)
                                        arg5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                                        zmm0 = _mm256_and_ps(
                                            _mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg9)
                                        arg5[0].o = zx.o(0)
                                        zmm5 = _mm256_and_ps(zmm0, arg13)
                                        
                                        if (_mm256_movemask_ps(zmm5) != i_2)
                                            arg5 = _mm256_xor_ps(zmm0, arg9)
                                        
                                        zmm1 = _mm256_blendv_ps(zmm1, arg8, zmm0)
                                        zmm0[0].o =
                                            __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg15[0].o)
                                        zmm5[0].o =
                                            __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg15[0].o)
                                        arg7 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                                        zmm5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_d80_2[0].o, zmm5[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        arg9 = _mm256_and_ps(zmm0, arg5)
                                        arg12 = _mm256_and_ps(arg9, arg13)
                                        i_2 = _mm256_movemask_ps(arg12)
                                        arg8 = zmm4
                                    while (i_2 != 0)
                            
                            arg5 = var_a20_5
                            zmm0 = _mm256_andnot_ps(arg5, arg13)
                            
                            if (_mm256_movemask_ps(zmm0) == 0)
                                arg14 = var_cc0_2
                                arg9 = var_d20_1
                                arg11[0].o = var_d60[0].o
                                arg7[0].o = var_ce0[0].o
                                arg6 = var_be0.32
                                arg15 = var_a40
                            else
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm2 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                                zmm4 = _mm256_xor_ps(arg5, zmm2)
                                zmm1 = _mm256_blendv_ps(zmm1, zmm0, zmm4)
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, var_8e0[0].o)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, var_b60)
                                arg11[0].o = zx.o(0)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                                arg9 = _mm256_and_ps(_mm256_insertf128_ps(arg7, arg6[0].o, 1), zmm4)
                                arg10 = _mm256_and_ps(arg9, arg13)
                                int32_t i_3 = _mm256_movemask_ps(arg10)
                                
                                if (i_3 == 0)
                                    arg12[0].o = var_ce0[0].o
                                    arg15 = var_a40
                                else
                                    arg6 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                    arg12[0].o = var_ce0[0].o
                                    arg15 = var_a40
                                    
                                    do
                                        arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d00_1)
                                        zmm5[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm5[0].o)
                                        arg8 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        char temp0_3027 = _mm256_movemask_ps(arg10)
                                        
                                        if ((temp0_3027 & 1) == 0)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                            
                                            if ((temp0_3027 & 2) != 0)
                                                goto label_1401e9a1c
                                            
                                            goto label_1401e9b33
                                        
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                            *arg8[0].q, 0)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                        
                                        if ((temp0_3027 & 2) != 0)
                                        label_1401e9a1c:
                                            int64_t rax_416 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_416, 1)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg10[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                var_ba0_1[0].o)
                                            
                                            if ((temp0_3027 & 4) == 0)
                                                goto label_1401e9b4b
                                            
                                            goto label_1401e9a3f
                                        
                                    label_1401e9b33:
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        arg10[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_ba0_1[0].o)
                                        
                                        if ((temp0_3027 & 4) == 0)
                                        label_1401e9b4b:
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_2902)
                                            
                                            if ((temp0_3027 & 8) != 0)
                                                goto label_1401e9a62
                                            
                                            goto label_1401e9b5e
                                        
                                    label_1401e9a3f:
                                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 2)
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_2902)
                                        
                                        if ((temp0_3027 & 8) != 0)
                                        label_1401e9a62:
                                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                            int64_t rax_418 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_418, 3)
                                            arg8 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                            
                                            if ((temp0_3027 & 0x10) == 0)
                                                goto label_1401e9b6e
                                            
                                            goto label_1401e9a88
                                        
                                    label_1401e9b5e:
                                        arg8 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                        
                                        if ((temp0_3027 & 0x10) == 0)
                                        label_1401e9b6e:
                                            
                                            if ((temp0_3027 & 0x20) != 0)
                                                goto label_1401e9a97
                                            
                                            goto label_1401e9b78
                                        
                                    label_1401e9a88:
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                            *arg8[0].q, 4)
                                        
                                        if ((temp0_3027 & 0x20) != 0)
                                        label_1401e9a97:
                                            int64_t rax_420 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_420, 5)
                                            
                                            if ((temp0_3027 & 0x40) == 0)
                                                goto label_1401e9b82
                                            
                                            goto label_1401e9aac
                                        
                                    label_1401e9b78:
                                        
                                        if ((temp0_3027 & 0x40) != 0)
                                        label_1401e9aac:
                                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *zmm0[0], 6)
                                            
                                            if (temp0_3027 s< 0)
                                            label_1401e9ac5:
                                                zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                                int64_t rax_422 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm4[0].o, *rax_422, 7)
                                        else
                                        label_1401e9b82:
                                            
                                            if (temp0_3027 s< 0)
                                                goto label_1401e9ac5
                                        
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                                        zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                        zmm0[0].o ^= zmm2[0].o
                                        arg5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                                        arg5[0].o ^= zmm2[0].o
                                        zmm0 = _mm256_and_ps(
                                            _mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg9)
                                        arg5[0].o = zx.o(0)
                                        zmm5 = _mm256_and_ps(zmm0, arg13)
                                        
                                        if (_mm256_movemask_ps(zmm5) != i_3)
                                            arg5 = _mm256_xor_ps(zmm0, arg9)
                                        
                                        zmm1 = _mm256_blendv_ps(zmm1, arg6, zmm0)
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                                        arg6 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                                        zmm5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        arg9 = _mm256_and_ps(zmm0, arg5)
                                        arg10 = _mm256_and_ps(arg9, arg13)
                                        i_3 = _mm256_movemask_ps(arg10)
                                    while (i_3 != 0)
                                
                                arg14 = var_cc0_2
                                arg9 = var_d20_1
                                arg11[0].o = var_d60[0].o
                                arg6 = var_be0.32
                                arg7[0].o = arg12[0].o
                            
                            zmm0 = var_c60_3
                            arg10 = _mm256_blendv_ps(zmm0, zmm1, arg13)
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_d00_1)
                            arg12 = arg15
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            
                            if ((rdx_55 & 1) != 0)
                                zmm2[0].o = zx.o(*zmm1[0].q)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            arg15 = var_c20_3
                            
                            if ((rdx_55 & 2) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                                
                                if ((rdx_55 & 4) != 0)
                                    goto label_1401ea74a
                                
                                goto label_1401ea58d
                            
                            int64_t rax_487 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_487, 1)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                            
                            if ((rdx_55 & 4) != 0)
                            label_1401ea74a:
                                zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm5[0], 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_2902)
                                
                                if ((rdx_55 & 8) == 0)
                                    goto label_1401ea59f
                                
                                goto label_1401ea76c
                            
                        label_1401ea58d:
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_2902)
                            
                            if ((rdx_55 & 8) == 0)
                            label_1401ea59f:
                                zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                
                                if ((rdx_55 & 0x10) != 0)
                                    goto label_1401ea791
                                
                                goto label_1401ea5ae
                            
                        label_1401ea76c:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_489 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_489, 3)
                            zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                            
                            if ((rdx_55 & 0x10) != 0)
                            label_1401ea791:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 4)
                                
                                if ((rdx_55 & 0x20) == 0)
                                    goto label_1401ea5b7
                                
                                goto label_1401ea79f
                            
                        label_1401ea5ae:
                            
                            if ((rdx_55 & 0x20) == 0)
                            label_1401ea5b7:
                                
                                if ((rdx_55 & 0x40) != 0)
                                    goto label_1401ea7b3
                                
                                goto label_1401ea5c0
                            
                        label_1401ea79f:
                            int64_t rax_491 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_491, 5)
                            
                            if ((rdx_55 & 0x40) == 0)
                            label_1401ea5c0:
                                
                                if (temp0_2835.b s< 0)
                                label_1401ea7cb:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_493 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_493, 7)
                            else
                            label_1401ea7b3:
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 6)
                                
                                if (temp0_2835.b s< 0)
                                    goto label_1401ea7cb
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            arg6 = _mm256_blendv_ps(arg6, zmm0, arg13)
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm1[0].o
                            arg5 = var_d80_2
                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm1[0].o ^= arg5[0].o
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg13)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                arg6 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg6, var_a80_1, zmm0)
                            
                            arg7 = var_b80_1
                            arg8[0].o = var_bc0_2
                            arg13 = var_c80_1
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d00_1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if ((rdx_55 & 1) == 0)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((rdx_55 & 2) != 0)
                                    goto label_1401ea800
                                
                                goto label_1401ea681
                            
                            zmm0[0].o = zx.o(*zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            
                            if ((rdx_55 & 2) != 0)
                            label_1401ea800:
                                int64_t rax_496 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_496, 1)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                                
                                if ((rdx_55 & 4) == 0)
                                    goto label_1401ea698
                                
                                goto label_1401ea822
                            
                        label_1401ea681:
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                            
                            if ((rdx_55 & 4) == 0)
                            label_1401ea698:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_2902)
                                
                                if ((rdx_55 & 8) != 0)
                                    goto label_1401ea844
                                
                                goto label_1401ea6aa
                            
                        label_1401ea822:
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0].q, 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_2902)
                            
                            if ((rdx_55 & 8) != 0)
                            label_1401ea844:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_498 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_498, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_55 & 0x10) == 0)
                                    goto label_1401ea6b9
                                
                                goto label_1401ea869
                            
                        label_1401ea6aa:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_55 & 0x10) == 0)
                            label_1401ea6b9:
                                
                                if ((rdx_55 & 0x20) != 0)
                                    goto label_1401ea877
                                
                                goto label_1401ea6c2
                            
                        label_1401ea869:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rdx_55 & 0x20) == 0)
                            label_1401ea6c2:
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_55 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm5[0], 6)
                            else
                            label_1401ea877:
                                int64_t rax_500 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_500, 5)
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_55 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm5[0], 6)
                            
                            zmm5 = var_9a0.32
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            var_c60_4 = arg6
                            
                            if (temp0_2835.b s< 0)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_486 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_486, 7)
                            
                            arg6[0].o = var_960
                            zmm4 = var_a60
                            zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        
                        zmm2[0].o = zx.o(0)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2 = __vxorps_ymmqq_ymmqq_memqq(zmm4, var_a00.32)
                        arg5[0].o = zx.o(0)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        
                        if (arg18 != 1)
                            zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm5[0].o = data_142d3f5b0
                            zmm4[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                            zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm5 = var_9a0.32
                            zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                            zmm4[0].o = __vpermilps_xmmdq_memdq_immb(var_920_1, 0)
                            zmm1 = _mm256_sub_ps(_mm256_insertf128_ps(zmm4, zmm4[0].o, 1), 
                                _mm256_cvtepi32_ps(zmm1))
                            zmm4 = _mm256_div_ps(zmm1, _mm256_cvtepi32_ps(zmm0))
                        
                        zmm0 = _mm256_blendv_ps(arg5, zmm4, zmm2)
                    
                    arg5[0].o = var_980_1
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                    zmm2 = _mm256_blendv_ps(var_ac0_1, zmm0, zmm1)
                    var_ac0_1 = zmm2
            
            var_980_1.32 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg13, arg5[0].o, 1)
            int32_t var_ce0_2[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            double var_d80_3[0x4] = zmm0
            arg8[0].o = __vpmovzxdq_xmmdq_xmmq(arg15[0].q)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
            arg5[0].o = __vpmovzxdq_xmmdq_xmmq(arg5[0].q)
            zmm4 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
            float var_ba0_2[0x8] = zmm4
            zmm5 = var_b40_4
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            int32_t var_b60_2[0x4] = zmm0[0].o
            uint32_t var_9a0_1[0x4] = zmm5[0].o
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm0 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
            var_be0.32 = zmm0
            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
            arg13 = var_b00_1
            zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            int128_t var_d00_3 = zmm0[0].o
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            int32_t var_c20_4[0x8] = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            int32_t var_c80_2[0x8] = zmm0
            zmm2 = var_d40_2
            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int64_t var_ca0_3[0x2] = zmm0[0].o
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            int32_t var_a80_2[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            var_a40[0].o = zmm0[0].o
            zmm1[0].o = data_142d3f5b0
            arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
            arg13[0].o = zmm0[0].o & arg11[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:6_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            int32_t var_b80_2[0x8] = arg10
            arg8[0].o = arg11[0].o
            int128_t var_c00_3 = arg15[0].o
            
            if (not(cond:6_1))
                zmm0 = var_c40_1
                arg12 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b60)
                arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                arg9[0].o = zx.o(0)
                arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                arg5[0].o &= arg13[0].o
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                    zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                    zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                    zmm1 = var_d80_3
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0 = var_980_1.32
                    arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg7[0].o = _mm256_extractf128_ps(var_ba0_2[0].o, 1)
                    zmm0 = var_ce0_2
                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_ba0_2[0].o)
                    zmm4[0].o = _mm256_extractf128_ps(var_c20_4[0].o, 1)
                    arg8 = var_be0.32
                    var_ba0_2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm0[0].o = data_1434426c0
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    var_ba0_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0_2[0].o, arg5[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, var_ba0_2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c20_4[0].o, zmm0[0].o)
                    arg7 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                    arg5 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg6[0].o = zx.o(0)
                    zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                    arg8 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm0 = _mm256_blendv_ps(arg6, zmm1, arg8)
                    double r8_14 = zmm0[0]
                    void* rsi_41 = arg4 i+ r8_14
                    int64_t r9_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    void* rdi_36 = arg4 + r9_4
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    double r10_10 = zmm0[0]
                    int64_t r11_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg10 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm0 = _mm256_blendv_ps(arg6, arg10, arg8)
                    zmm1[0].o = *(zmm0[0] + rsi_41)
                    float* rcx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    float* rdx_57 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_64 + rdi_36), 0x10)
                    float* rcx_65 = zmm0[0]
                    zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm2 = _mm256_blendv_ps(arg6, zmm0, arg8)
                    zmm4[0].o = *(zmm2[0].q + rsi_41)
                    float* rax_509 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    float* rsi_42 = zmm2[0].q
                    float* rbx_33 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2 = _mm256_blendv_ps(arg6, arg7, arg5)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_509 + rdi_36), 0x10)
                    int64_t rax_510 = zmm2[0].q
                    void* rdi_37 = arg4 i+ r10_10
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_65 + rdi_37), 0x20)
                    int64_t rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_42 + rdi_37), 0x20)
                    void* rsi_43 = arg4 + rax_510
                    void* rdi_38 = arg4 + r11_7
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_57 + rdi_38), 0x30)
                    void* rdx_58 = arg4 + rcx_66
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_33 + rdi_38), 0x30)
                    int64_t rdi_39 = zmm2[0].q
                    arg7 = _mm256_blendv_ps(arg6, arg10, arg5)
                    arg10 = var_b80_2
                    int32_t* rbx_34 = arg7[0].q
                    zmm0 = _mm256_blendv_ps(arg6, zmm0, arg5)
                    arg5[0].o = *(rbx_34 + rsi_43)
                    arg6[0].o = *(zmm0[0] + rsi_43)
                    void* rsi_44 = arg4 + rdi_39
                    float* rbx_36 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_36 + rdx_58), 0x10)
                    float* rbx_37 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_37 + rdx_58), 0x10)
                    int64_t rdx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm2[0].q + rsi_44), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm0[0] + rsi_44), 0x20)
                    void* rsi_45 = arg4 + rdx_59
                    float* rbx_40 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_40 + rsi_45), 0x30)
                    float* rbx_41 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_41 + rsi_45), 0x30)
                    arg5[0].o = *(arg4 + rax_510)
                    arg6[0].o = *(arg4 i+ r8_14)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r9_4), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 i+ r10_10), 0x20)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r11_7), 0x30)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_66), 0x10)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdi_39), 0x20)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdx_59), 0x30)
                    arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    var_760.32 = _mm256_maskstore_ps(zmm5, arg5)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    var_740.32 = _mm256_maskstore_ps(zmm5, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                    var_720.32 = _mm256_maskstore_ps(zmm5, zmm0)
                
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm4[0].o = arg11[0].o ^ arg5[0].o
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                zmm1[0].o ^= arg5[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                arg11[0].o = arg13[0].o & zmm1[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg11[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                bool cond:11_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                arg9 = var_d20_1
                arg8[0].o = var_d60[0].o
                
                if (not(cond:11_1))
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0].q)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    arg6 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm1 = var_ae0_1
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm5 = _mm256_and_ps(zmm0, arg6)
                    
                    if (_mm256_movemask_ps(zmm5) == 0)
                        arg13 = var_a80_2
                        arg7 = var_c80_2
                    else
                        arg12 = var_c80_2
                        zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg5[0].o = data_1434426c0
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                        var_a00.32 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                        zmm1 = var_a80_2
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        arg9 = arg6
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        arg6 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                        zmm4[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        arg7[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg8 = _mm256_blendv_ps(zmm1, arg6, zmm4)
                        arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        arg15 = var_d80_3
                        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg13 = var_980_1.32
                        arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg14 = var_ba0_2
                        arg7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(var_ce0_2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm2 = var_be0.32
                        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
                        arg13 = arg8
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        zmm2 = var_c20_4
                        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ce0_2[0].o, arg14[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(arg5, zmm1, zmm4)
                        arg5 = _mm256_blendv_ps(arg5, arg6, zmm5)
                        arg6 = arg9
                        arg7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg12, var_a00.32, zmm5)
                        int64_t r8_15 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rcx_67 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_60 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_42 = zmm1[0].q
                        zmm1[0].o = *(arg4 + rcx_67)
                        int64_t rcx_68 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rdi_40 = arg5[0].q
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rsi_46 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rax_513 = arg5[0].q
                        arg5[0].o = *(arg4 + rdi_40)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_68), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_513), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_46), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r8_15), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_42), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_60), 0x30)
                        zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    var_760.32 = _mm256_maskstore_ps(arg6, _mm256_blendv_ps(arg5, zmm1, zmm0))
                    zmm0 = var_c40_1
                    arg10 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm2[0].o = zx.o(0)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    zmm1[0].o = zmm0[0].o ^ zmm5[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                    zmm0[0].o ^= zmm5[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm0[0].o &= arg11[0].o
                    arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    char temp0_3595 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                    
                    if (temp0_3595 == 0)
                        arg14 = var_cc0_2
                        arg15[0].o = var_c00_3
                        arg9 = var_d20_1
                        arg8[0].o = var_d60[0].o
                    else
                        if ((temp0_3595 & 1) != 0)
                            arg12[0].o = *arg13[0].q
                        
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        
                        if ((temp0_3595 & 2) != 0)
                            float* rax_515 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_515, 0x10)
                            arg12 = _mm256_blend_ps(arg12, zmm0, 0xf)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        var_bc0_2.32 = arg6
                        
                        if ((temp0_3595 & 4) != 0)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *zmm4[0].q, 0x20)
                            arg12 = _mm256_blend_ps(arg12, zmm5, 0xf)
                        
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg14[0].o = data_1434426c0
                        var_a00 = zmm1[0].o
                        
                        if ((temp0_3595 & 8) != 0)
                            float* rax_517 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_517, 0x30)
                            arg12 = _mm256_blend_ps(arg12, arg5, 0xf)
                        
                        arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                        var_960.32 = zmm1
                        arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                        arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                        zmm1 = arg7
                        
                        if ((temp0_3595 & 0x10) != 0)
                            zmm5[0].o = *arg7[0].q
                            arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 1)
                            arg12 = _mm256_insertf128_ps(arg12, zmm5[0].o, 1)
                        
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                        
                        if ((temp0_3595 & 0x20) != 0)
                            arg7 = zmm1
                            int64_t rax_519 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_519, 0x10)
                            arg12 = _mm256_insertf128_ps(arg12, arg6[0].o, 1)
                            arg14 = var_cc0_2
                        else
                            arg14 = var_cc0_2
                            arg7 = zmm1
                        
                        arg6 = _mm256_insertf128_ps(var_960.32, arg9[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg15, zmm4[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                        
                        if ((temp0_3595 & 0x40) != 0)
                            float* rax_520 = arg5[0].q
                            arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_520, 0x20)
                            arg12 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
                            arg7 = zmm1
                        
                        arg9 = var_d20_1
                        arg8[0].o = var_d60[0].o
                        arg15[0].o = var_c00_3
                        zmm2[0].o = zx.o(0)
                        zmm1[0].o = var_a00
                        arg13 = _mm256_blendv_ps(arg13, zmm4, zmm0)
                        arg7 = _mm256_blendv_ps(arg7, arg6, zmm5)
                        
                        if (temp0_3595 s< 0)
                            int64_t rax_521 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_521, 0x30)
                            arg12 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                        
                        arg6 = var_bc0_2.32
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                    zmm0[0].o ^= zmm5[0].o
                    var_740.32 = _mm256_maskstore_ps(arg6, 
                        _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), arg12))
                    zmm0 = var_c40_1
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm0[0].o ^= zmm5[0].o
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm4[0].o ^= zmm5[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm0[0].o &= arg11[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_3649 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3649 == 0)
                        arg10 = var_b80_2
                    else
                        if ((temp0_3649 & 1) == 0)
                            if ((temp0_3649 & 2) != 0)
                                goto label_1401eb5ab
                            
                            goto label_1401eb553
                        
                        zmm0[0].o = *arg13[0].q
                        
                        if ((temp0_3649 & 2) != 0)
                        label_1401eb5ab:
                            int64_t rax_523 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_523, 0x10)
                            zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                            arg10 = var_b80_2
                            
                            if ((temp0_3649 & 4) == 0)
                                goto label_1401eb55e
                            
                            goto label_1401eb5cb
                        
                    label_1401eb553:
                        arg10 = var_b80_2
                        
                        if ((temp0_3649 & 4) == 0)
                        label_1401eb55e:
                            
                            if ((temp0_3649 & 8) != 0)
                                goto label_1401eb5e7
                            
                            goto label_1401eb567
                        
                    label_1401eb5cb:
                        zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm2[0].q, 0x20)
                        zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                        
                        if ((temp0_3649 & 8) != 0)
                        label_1401eb5e7:
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            int64_t rax_525 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_525, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                            
                            if ((temp0_3649 & 0x10) == 0)
                                goto label_1401eb570
                            
                            goto label_1401eb60d
                        
                    label_1401eb567:
                        
                        if ((temp0_3649 & 0x10) == 0)
                        label_1401eb570:
                            
                            if ((temp0_3649 & 0x20) != 0)
                                goto label_1401eb62c
                            
                            goto label_1401eb579
                        
                    label_1401eb60d:
                        zmm2[0].o = zx.o(*arg7[0].q)
                        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        
                        if ((temp0_3649 & 0x20) != 0)
                        label_1401eb62c:
                            int64_t rax_527 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_527, 0x10)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            
                            if ((temp0_3649 & 0x40) == 0)
                                goto label_1401eb582
                            
                            goto label_1401eb64d
                        
                    label_1401eb579:
                        
                        if ((temp0_3649 & 0x40) != 0)
                        label_1401eb64d:
                            zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            float* rax_528 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_528, 0x20)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            
                            if (temp0_3649 s< 0)
                            label_1401eb66e:
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                int64_t rax_529 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_529, 0x30)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        else
                        label_1401eb582:
                            
                            if (temp0_3649 s< 0)
                                goto label_1401eb66e
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    arg5[0].o ^= zmm4[0].o
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm1[0].o ^= zmm4[0].o
                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    zmm0 = _mm256_and_ps(zmm1, zmm0)
                    var_720.32 = _mm256_maskstore_ps(arg6, zmm0)
            
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm0[0].o = arg15[0].o ^ zmm5[0].o
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
            zmm1[0].o ^= zmm5[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            int128_t var_bc0_3 = zmm0[0].o
            zmm0[0].o &= arg8[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:7_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            arg6 = var_c60_4
            arg11[0].o = arg8[0].o
            
            if (not(cond:7_1))
                zmm2[0].o = data_142fc95c0
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_a40[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                zmm0[0].o &= arg11[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    var_960.32 = zmm1
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg13[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    float var_7c0_3[0x8] = zmm1
                    float var_7e0_3[0x8] = zmm1
                    float var_800_3[0x8] = zmm1
                    float var_820_3[0x8] = zmm1
                    float var_840_3[0x8] = zmm1
                    float var_860_3[0x8] = zmm1
                    zmm2 = var_ae0_1
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    arg12 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm2[0].o, 1))
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(var_9e0_2, zmm0[0].o, 1), arg12)
                    int32_t temp0_3712 = _mm256_movemask_ps(zmm0)
                    arg15 = var_d40_2
                    zmm1 = var_b00_1
                    var_9e0_2[0].o = zmm4[0].o
                    
                    if (temp0_3712 != 0)
                        char rdx_63 = temp0_3712.b
                        
                        if ((rdx_63 & 1) == 0)
                            arg8[0].o = var_d00_3
                            arg10 = var_b00_1
                            
                            if ((rdx_63 & 2) != 0)
                                goto label_1401ec460
                            
                            goto label_1401eb836
                        
                        zmm1 = var_d40_2
                        arg5[0].o = *zmm1[0].q
                        arg8[0].o = var_d00_3
                        arg10 = var_b00_1
                        
                        if ((rdx_63 & 2) != 0)
                        label_1401ec460:
                            zmm1 = var_d40_2
                            int64_t rax_554 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_554, 0x10)
                            arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            
                            if ((rdx_63 & 4) == 0)
                                goto label_1401eb83f
                            
                            goto label_1401ec481
                        
                    label_1401eb836:
                        
                        if ((rdx_63 & 4) == 0)
                        label_1401eb83f:
                            
                            if ((rdx_63 & 8) != 0)
                                goto label_1401ec4a4
                            
                            goto label_1401eb848
                        
                    label_1401ec481:
                        zmm1[0].o = var_ca0_3
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm1[0].q, 0x20)
                        arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                        
                        if ((rdx_63 & 8) != 0)
                        label_1401ec4a4:
                            zmm1[0].o = var_ca0_3
                            int64_t rax_556 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_556, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            zmm2[0].o = data_1434426c0
                            
                            if ((rdx_63 & 0x10) == 0)
                                goto label_1401eb859
                            
                            goto label_1401ec4d5
                        
                    label_1401eb848:
                        zmm2[0].o = data_1434426c0
                        
                        if ((rdx_63 & 0x10) != 0)
                        label_1401ec4d5:
                            zmm1[0].o = zx.o(*arg10[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm1[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 3)
                            arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d40_2[0].o)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdx_63 & 0x20) != 0)
                            label_1401eb86a:
                                int64_t rax_532 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_532, 0x10)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        else
                        label_1401eb859:
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d40_2[0].o)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdx_63 & 0x20) != 0)
                                goto label_1401eb86a
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0_3)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        
                        if ((rdx_63 & 0x40) != 0)
                            float* rax_533 = arg8[0].q
                            arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_533, 0x20)
                            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        
                        if (temp0_3712.b s< 0)
                            int64_t rax_534 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_534, 0x30)
                            arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                        zmm1 = _mm256_blendv_ps(var_d40_2, zmm4, zmm0)
                        var_800_3 = _mm256_maskstore_ps(arg12, arg5)
                        
                        if ((rdx_63 & 1) == 0)
                            zmm4 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            if ((rdx_63 & 2) != 0)
                                goto label_1401ec523
                            
                            goto label_1401eb921
                        
                        arg5[0].o = *zmm1[0].q
                        zmm4 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                        
                        if ((rdx_63 & 2) != 0)
                        label_1401ec523:
                            int64_t rax_559 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_559, 0x10)
                            arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                            arg10 = _mm256_blendv_ps(arg10, zmm4, arg6)
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((rdx_63 & 4) == 0)
                                goto label_1401eb936
                            
                            goto label_1401ec54f
                        
                    label_1401eb921:
                        arg10 = _mm256_blendv_ps(arg10, zmm4, arg6)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        
                        if ((rdx_63 & 4) == 0)
                        label_1401eb936:
                            
                            if ((rdx_63 & 8) != 0)
                                goto label_1401ec564
                            
                            goto label_1401eb93f
                        
                    label_1401ec54f:
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm4[0].q, 0x20)
                        arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                        
                        if ((rdx_63 & 8) == 0)
                        label_1401eb93f:
                            
                            if ((rdx_63 & 0x10) != 0)
                            label_1401eb949:
                                zmm5[0].o = zx.o(*arg10[0].q)
                                arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm5[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 3)
                                arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        else
                        label_1401ec564:
                            int64_t rax_561 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_561, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                            
                            if ((rdx_63 & 0x10) != 0)
                                goto label_1401eb949
                        
                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        
                        if ((rdx_63 & 0x20) == 0)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            
                            if ((rdx_63 & 0x40) != 0)
                                goto label_1401ec5ad
                            
                            goto label_1401eb987
                        
                        int64_t rax_562 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_562, 0x10)
                        arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        
                        if ((rdx_63 & 0x40) == 0)
                        label_1401eb987:
                            zmm4 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            
                            if (temp0_3712.b s< 0)
                            label_1401ec5d8:
                                float* rax_564 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_564, 0x30)
                                arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        else
                        label_1401ec5ad:
                            double rax_563 = zmm5[0]
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_563, 0x20)
                            arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            
                            if (temp0_3712.b s< 0)
                                goto label_1401ec5d8
                        
                        arg9 = var_d20_1
                        arg15 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                        zmm1 = _mm256_blendv_ps(arg10, zmm4, arg6)
                        var_860_3 = _mm256_maskstore_ps(arg12, arg5)
                        arg10 = var_b80_2
                        zmm4[0].o = var_9e0_2[0].o
                    
                    var_a00.32 = zmm1
                    arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg13[0].o, 0x1f)
                    arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(var_c40_1, data_143442b00)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm5[0].o = zx.o(0)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = zmm1[0].o & not.o(zmm4[0].o)
                    zmm2[0].o = arg5[0].o & not.o(arg11[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    arg6[0].o = zmm0[0].o & var_d60[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_3763 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3763 == 0)
                        zmm0[0].o = data_142fc95c0
                        arg11[0].o = var_d60[0].o
                        zmm1 = var_960.32
                    else
                        var_a60[0].o = arg7[0].o
                        
                        if ((temp0_3763 & 1) == 0)
                            zmm5 = var_a00.32
                            
                            if ((temp0_3763 & 2) != 0)
                                goto label_1401ec610
                            
                            goto label_1401eba5f
                        
                        arg7[0].o = *arg15[0].q
                        zmm5 = var_a00.32
                        
                        if ((temp0_3763 & 2) != 0)
                        label_1401ec610:
                            float* rax_566 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_566, 0x10)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            
                            if ((temp0_3763 & 4) == 0)
                                goto label_1401eba73
                            
                            goto label_1401ec63b
                        
                    label_1401eba5f:
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                        zmm4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        
                        if ((temp0_3763 & 4) != 0)
                        label_1401ec63b:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm2, 0xf)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3763 & 8) != 0)
                            label_1401eba7d:
                                int64_t rax_536 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_536, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                        else
                        label_1401eba73:
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3763 & 8) != 0)
                                goto label_1401eba7d
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        arg9[0].o = data_1434426c0
                        arg8[0].o = arg5[0].o ^ arg12[0].o
                        
                        if ((temp0_3763 & 0x10) != 0)
                            zmm2[0].o = zx.o(*zmm5[0])
                            arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 3)
                            arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                        
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                        arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                        zmm0[0].o = zmm1[0].o ^ arg12[0].o
                        
                        if ((temp0_3763 & 0x20) != 0)
                            int64_t rax_538 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_538, 0x10)
                            arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                        
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                        arg10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg11, var_9e0_2[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        
                        if ((temp0_3763 & 0x40) != 0)
                            float* rax_539 = zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_539, 0x20)
                            arg7 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                        
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                        arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                        arg5 = _mm256_insertf128_ps(arg14, arg12[0].o, 1)
                        arg8 = _mm256_insertf128_ps(arg13, arg6[0].o, 1)
                        arg10 = _mm256_and_ps(zmm0, arg10)
                        
                        if (temp0_3763 s< 0)
                            int64_t rbx_45 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rbx_45, 0x30)
                            arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                        arg5 = _mm256_blendv_ps(arg15, arg5, arg8)
                        var_7e0_3 = _mm256_maskstore_ps(arg10, arg7)
                        
                        if ((temp0_3763 & 1) == 0)
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            arg14 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            if ((temp0_3763 & 2) != 0)
                                goto label_1401ec678
                            
                            goto label_1401ebbaa
                        
                        arg7[0].o = *arg5[0].q
                        zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        arg14 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                        
                        if ((temp0_3763 & 2) != 0)
                        label_1401ec678:
                            float* rax_569 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_569, 0x10)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            zmm2 = _mm256_blendv_ps(zmm5, zmm1, arg14)
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            
                            if ((temp0_3763 & 4) == 0)
                                goto label_1401ebbbf
                            
                            goto label_1401ec6a4
                        
                    label_1401ebbaa:
                        zmm2 = _mm256_blendv_ps(zmm5, zmm1, arg14)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        
                        if ((temp0_3763 & 4) == 0)
                        label_1401ebbbf:
                            
                            if ((temp0_3763 & 8) != 0)
                                goto label_1401ec6b9
                            
                            goto label_1401ebbc8
                        
                    label_1401ec6a4:
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                        arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                        
                        if ((temp0_3763 & 8) == 0)
                        label_1401ebbc8:
                            
                            if ((temp0_3763 & 0x10) != 0)
                            label_1401ebbd2:
                                zmm0[0].o = zx.o(*zmm2[0].q)
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 3)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        else
                        label_1401ec6b9:
                            float* rax_571 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_571, 0x30)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((temp0_3763 & 0x10) != 0)
                                goto label_1401ebbd2
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                        arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                        
                        if ((temp0_3763 & 0x20) != 0)
                            int64_t rax_541 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_541, 0x10)
                            arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        
                        if ((temp0_3763 & 0x40) != 0)
                            float* rax_542 = zmm1[0].q
                            arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_542, 0x20)
                            arg7 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        
                        arg9 = var_d20_1
                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg11, zmm4[0].o, 1)
                        
                        if (temp0_3763 s< 0)
                            int64_t rcx_71 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rcx_71, 0x30)
                            arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                        
                        arg11[0].o = var_d60[0].o
                        zmm1 = var_960.32
                        arg15 = _mm256_blendv_ps(arg5, zmm4, arg8)
                        zmm0 = _mm256_blendv_ps(zmm2, zmm0, arg14)
                        var_a00.32 = zmm0
                        var_840_3 = _mm256_maskstore_ps(arg10, arg7)
                        arg14 = var_cc0_2
                        zmm0[0].o = data_142fc95c0
                        arg10 = var_b80_2
                        zmm5[0].o = zx.o(0)
                        arg7[0].o = var_a60[0].o
                    
                    arg12 = _mm256_insertf128_ps(zmm1, arg7[0].o, 1)
                    arg13[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(var_c40_1, data_143442b20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = arg7[0].o & not.o(var_9e0_2[0].o)
                    zmm1[0].o = zmm4[0].o & not.o(arg13[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    arg5[0].o = zmm0[0].o & arg11[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_3837 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3837 != 0)
                        if ((temp0_3837 & 1) == 0)
                            zmm5 = var_a00.32
                            
                            if ((temp0_3837 & 2) != 0)
                                goto label_1401ec6f4
                            
                            goto label_1401ebd55
                        
                        zmm1[0].o = *arg15[0].q
                        zmm5 = var_a00.32
                        
                        if ((temp0_3837 & 2) != 0)
                        label_1401ec6f4:
                            int64_t rax_573 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_573, 0x10)
                            zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            
                            if ((temp0_3837 & 4) == 0)
                                goto label_1401ebd69
                            
                            goto label_1401ec71f
                        
                    label_1401ebd55:
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        
                        if ((temp0_3837 & 4) != 0)
                        label_1401ec71f:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *arg6[0].q, 0x20)
                            zmm1 = _mm256_blend_ps(zmm1, zmm2, 0xf)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3837 & 8) != 0)
                            label_1401ebd73:
                                int64_t rax_543 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_543, 0x30)
                                zmm1 = _mm256_blend_ps(zmm1, zmm2, 0xf)
                        else
                        label_1401ebd69:
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3837 & 8) != 0)
                                goto label_1401ebd73
                        
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg10[0].o = data_1434426c0
                        arg8[0].o = zmm4[0].o ^ data_142d3f800
                        
                        if ((temp0_3837 & 0x10) != 0)
                            zmm0[0].o = zx.o(*zmm5[0])
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 3)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        zmm4[0].o = var_9e0_2[0].o
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg10[0].o)
                        arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                        arg7[0].o ^= data_142d3f800
                        
                        if ((temp0_3837 & 0x20) != 0)
                            int64_t rax_545 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_545, 0x10)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg14[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(arg13, zmm4[0].o, 1)
                        arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        
                        if ((temp0_3837 & 0x40) != 0)
                            float* rax_546 = arg14[0].q
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_546, 0x20)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
                        arg5 = _mm256_insertf128_ps(arg11, arg5[0].o, 1)
                        arg7 = _mm256_and_ps(arg7, zmm2)
                        
                        if (temp0_3837 s< 0)
                            int64_t rbx_46 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rbx_46, 0x30)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        
                        arg9 = var_d20_1
                        arg11[0].o = var_d60[0].o
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm4 = _mm256_blendv_ps(arg15, zmm4, arg5)
                        var_7c0_3 = _mm256_maskstore_ps(arg7, zmm1)
                        
                        if ((temp0_3837 & 1) == 0)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                            
                            if ((temp0_3837 & 2) != 0)
                                goto label_1401ec75a
                            
                            goto label_1401ebea2
                        
                        zmm1[0].o = *zmm4[0].q
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                        
                        if ((temp0_3837 & 2) == 0)
                        label_1401ebea2:
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            
                            if ((temp0_3837 & 4) != 0)
                            label_1401ebeb1:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *zmm0[0], 0x20)
                                zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                        else
                        label_1401ec75a:
                            int64_t rax_576 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_576, 0x10)
                            zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            
                            if ((temp0_3837 & 4) != 0)
                                goto label_1401ebeb1
                        
                        arg14 = var_cc0_2
                        arg10 = var_b80_2
                        zmm0 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        
                        if ((temp0_3837 & 8) == 0)
                            arg5 = var_a00.32
                            zmm2 = _mm256_blendv_ps(arg5, zmm0, zmm2)
                            
                            if ((temp0_3837 & 0x10) != 0)
                                goto label_1401ec7b9
                            
                            goto label_1401ebf07
                        
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        int64_t rax_577 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_577, 0x30)
                        zmm1 = _mm256_blend_ps(zmm1, arg5, 0xf)
                        arg5 = var_a00.32
                        zmm2 = _mm256_blendv_ps(arg5, zmm0, zmm2)
                        
                        if ((temp0_3837 & 0x10) != 0)
                        label_1401ec7b9:
                            zmm0[0].o = *zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm0[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if ((temp0_3837 & 0x20) == 0)
                                goto label_1401ebf10
                            
                            goto label_1401ec7d8
                        
                    label_1401ebf07:
                        
                        if ((temp0_3837 & 0x20) == 0)
                        label_1401ebf10:
                            
                            if ((temp0_3837 & 0x40) != 0)
                                goto label_1401ec7f9
                            
                            goto label_1401ebf21
                        
                    label_1401ec7d8:
                        int64_t rax_579 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_579, 0x10)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        if ((temp0_3837 & 0x40) == 0)
                        label_1401ebf21:
                            
                            if (temp0_3837 s< 0)
                            label_1401ec826:
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                int64_t rcx_77 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rcx_77, 0x30)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        else
                        label_1401ec7f9:
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            double rax_580 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_580, 0x20)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if (temp0_3837 s< 0)
                                goto label_1401ec826
                        
                        var_820_3 = _mm256_maskstore_ps(arg7, zmm1)
                    
                    arg5 = var_d80_3
                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm2 = var_980_1.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm5 = var_ba0_2
                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm4 = var_ce0_2
                    arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    arg8 = var_c20_4
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg7 = var_be0.32
                    zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg6[0].o = data_1434426c0
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm4[0].o = zx.o(0)
                    zmm1 = _mm256_blendv_ps(zmm4, zmm1, zmm2)
                    zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                    zmm0 = _mm256_blendv_ps(zmm4, zmm0, _mm256_insertf128_ps(zmm2, arg5[0].o, 1))
                    int64_t r8_16 = zmm1[0].q
                    int64_t rcx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rdx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rdi_41 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rsi_47 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    double rax_548 = zmm0[0]
                    zmm0[0].o = zx.o(*(arg4 + r8_16))
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rcx_73), 1)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdi_41), 2)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_66), 3)
                    int64_t rcx_74 = zmm1[0].q
                    zmm1[0].o = zx.o(*(arg4 i+ rax_548))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_47), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_74), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_47), 3)
                    zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                    zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg6[0].o = data_143442490
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(
                            __vdivps_ymmqq_ymmqq_memqq(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm5[0].o, 1)), 
                                data_1434424a0), 
                            var_860_3), 
                        var_800_3)
                    zmm5[0].o = data_143442480
                    zmm4[0].o &= zmm5[0].o
                    arg6[0].o = data_143442440
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm0[0].o &= zmm5[0].o
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm4[0].o, 1))
                    zmm4 = data_143442460
                    zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm0, zmm4), var_840_3), var_7e0_3)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)), 
                                zmm4), 
                            var_820_3), 
                        var_7c0_3)
                    var_760.32 = _mm256_maskstore_ps(arg12, zmm2)
                    zmm2[0].o = data_142fc95c0
                    var_740.32 = _mm256_maskstore_ps(arg12, zmm0)
                    var_720.32 = _mm256_maskstore_ps(arg12, zmm1)
                    arg6 = var_c60_4
                    arg15[0].o = var_c00_3
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    zmm4[0].o = var_9e0_2[0].o
                
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                arg8[0].o = zmm0[0].o ^ var_bc0_3
                zmm0[0].o = arg8[0].o & arg11[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg14[0].o = data_1434422d0
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, var_a40[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg14[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm4[0].o = zmm0[0].o & arg11[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        int128_t var_960_1 = arg7[0].o
                        int128_t var_a00_1 = arg8[0].o
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg12 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1 = var_ae0_1
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm2 = _mm256_and_ps(zmm0, arg12)
                        
                        if (_mm256_movemask_ps(zmm2) == 0)
                            arg10 = var_a80_2
                        else
                            arg7 = var_c80_2
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg5[0].o = data_1434426b0
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg15[0].o = zmm4[0].o
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                            zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(var_a80_2[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a80_2[0].o, arg5[0].o)
                            arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            arg6[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg10 = _mm256_blendv_ps(var_a80_2, arg5, zmm1)
                            arg5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            arg7 = _mm256_blendv_ps(arg7, zmm4, zmm2)
                            var_c80_2 = arg7
                            arg13 = var_d80_3
                            arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg11 = var_980_1.32
                            zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                            arg14 = var_ba0_2
                            zmm4[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg8 = var_ce0_2
                            arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            zmm5 = arg12
                            arg12 = var_be0.32
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg7[0].o = data_1434426c0
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg13[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
                            arg12 = zmm5
                            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            arg11 = var_c20_4
                            arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg14[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                            zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                            arg6[0].o = zx.o(0)
                            zmm1 = _mm256_blendv_ps(arg6, zmm4, zmm1)
                            zmm4[0].o = arg15[0].o
                            zmm2 = _mm256_blendv_ps(arg6, arg5, zmm2)
                            int64_t r8_17 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rcx_75 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t r9_5 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_48 = zmm1[0].q
                            int64_t rdi_42 = zmm2[0].q
                            int64_t rsi_48 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rax_552 = zmm1[0].q
                            int64_t rdx_67 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = zx.o(*(arg4 + rcx_75))
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r8_17), 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rbx_48), 2)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r9_5), 3)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdi_42), 4)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_48), 5)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rax_552), 6)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdx_67), 7)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg5[0].o = data_143442b40
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
                        
                        zmm2[0].o = zx.o(0)
                        var_760.32 = _mm256_maskstore_ps(arg12, _mm256_blendv_ps(zmm2, zmm1, zmm0))
                        zmm0 = var_c40_1
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = zx.o(0)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg6[0].o = zmm0[0].o ^ arg5[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm0[0].o ^= arg5[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o &= zmm4[0].o
                        zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        char temp0_4127 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                        var_9e0_2[0].o = arg6[0].o
                        
                        if (temp0_4127 == 0)
                            arg13 = arg10
                            arg10 = var_b80_2
                            arg6 = var_c60_4
                            arg15[0].o = var_c00_3
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            arg8[0].o = var_a00_1
                            arg14[0].o = data_1434422d0
                            arg7[0].o = zx.o(0)
                        else
                            var_be0.o = zmm4[0].o
                            
                            if ((temp0_4127 & 1) != 0)
                                arg5[0].o = zx.o(*arg10[0].q)
                            
                            zmm4 = var_c80_2
                            
                            if ((temp0_4127 & 2) != 0)
                                int64_t rax_583 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_583, 1)
                            
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            
                            if ((temp0_4127 & 4) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 2)
                            
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            int32_t var_a60_2[0x8] = arg12
                            
                            if ((temp0_4127 & 8) != 0)
                                int64_t rax_585 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_585, 3)
                            
                            arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg12[0].o = data_1434426b0
                            
                            if ((temp0_4127 & 0x10) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm4[0].q, 4)
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg12[0].o)
                            arg13 = arg10
                            arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg12[0].o)
                            arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                            
                            if ((temp0_4127 & 0x20) != 0)
                                int64_t rax_587 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_587, 5)
                            
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                            
                            if ((temp0_4127 & 0x40) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 6)
                            
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            arg6 = _mm256_insertf128_ps(arg14, arg9[0].o, 1)
                            arg12 = _mm256_insertf128_ps(arg15, arg7[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                            
                            if (temp0_4127 s< 0)
                                int64_t rax_589 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_589, 7)
                            
                            arg9 = var_d20_1
                            arg10 = var_b80_2
                            arg15[0].o = var_c00_3
                            arg8[0].o = var_a00_1
                            arg14[0].o = data_1434422d0
                            arg7[0].o = zx.o(0)
                            arg13 = _mm256_blendv_ps(arg13, arg12, zmm0)
                            zmm0 = _mm256_blendv_ps(var_c80_2, arg6, zmm4)
                            var_c80_2 = zmm0
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                            arg6 = var_c60_4
                            arg12 = var_a60_2
                            zmm4[0].o = var_be0.o
                        
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        zmm1[0].o ^= arg11[0].o
                        var_740.32 = _mm256_maskstore_ps(arg12, 
                            _mm256_and_ps(
                                __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm1, var_9e0_2[0].o, 1), 
                                zmm0))
                        zmm0 = var_c40_1
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        zmm0[0].o ^= arg11[0].o
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm2[0].o ^= arg11[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm0[0].o &= zmm4[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_4179 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4179 == 0)
                            arg11[0].o = var_d60[0].o
                            arg7[0].o = var_960_1
                        else
                            arg11[0].o = var_d60[0].o
                            
                            if ((temp0_4179 & 1) == 0)
                                if ((temp0_4179 & 2) != 0)
                                    goto label_1401ed543
                                
                                goto label_1401ecb38
                            
                            zmm0[0].o = zx.o(*arg13[0].q)
                            
                            if ((temp0_4179 & 2) != 0)
                            label_1401ed543:
                                int64_t rax_608 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_608, 1)
                                
                                if ((temp0_4179 & 4) == 0)
                                    goto label_1401ecb41
                                
                                goto label_1401ed557
                            
                        label_1401ecb38:
                            
                            if ((temp0_4179 & 4) == 0)
                            label_1401ecb41:
                                
                                if ((temp0_4179 & 8) != 0)
                                    goto label_1401ed570
                                
                                goto label_1401ecb4a
                            
                        label_1401ed557:
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 2)
                            
                            if ((temp0_4179 & 8) != 0)
                            label_1401ed570:
                                zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                int64_t rax_610 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_610, 3)
                                arg7[0].o = var_960_1
                                
                                if ((temp0_4179 & 0x10) == 0)
                                    goto label_1401ecb5c
                                
                                goto label_1401ed593
                            
                        label_1401ecb4a:
                            arg7[0].o = var_960_1
                            
                            if ((temp0_4179 & 0x10) == 0)
                            label_1401ecb5c:
                                
                                if ((temp0_4179 & 0x20) != 0)
                                    goto label_1401ed5af
                                
                                goto label_1401ecb65
                            
                        label_1401ed593:
                            zmm2 = var_c80_2
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 4)
                            
                            if ((temp0_4179 & 0x20) != 0)
                            label_1401ed5af:
                                zmm2 = var_c80_2
                                int64_t rax_612 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_612, 5)
                                
                                if ((temp0_4179 & 0x40) == 0)
                                    goto label_1401ecb6e
                                
                                goto label_1401ed5cc
                            
                        label_1401ecb65:
                            
                            if ((temp0_4179 & 0x40) != 0)
                            label_1401ed5cc:
                                zmm2 = var_c80_2
                                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                
                                if (temp0_4179 s< 0)
                                label_1401ed5ed:
                                    zmm2 = var_c80_2
                                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    int64_t rax_614 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_614, 7)
                            else
                            label_1401ecb6e:
                                
                                if (temp0_4179 s< 0)
                                    goto label_1401ed5ed
                            
                            zmm2[0].o = zx.o(0)
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm4[0].o = data_143442b40
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1))
                        
                        zmm2[0].o = zx.o(0)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        arg5[0].o ^= zmm4[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm1[0].o ^= zmm4[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm1, zmm0)
                        var_720.32 = _mm256_maskstore_ps(arg12, zmm0)
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg14[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm0[0].o ^= arg8[0].o
                    zmm0[0].o &= arg11[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    arg14 = var_cc0_2
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1[0].o = data_143442ad0
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_a40[0].o)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        arg5[0].o &= arg11[0].o
                        zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                            zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                            arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                            zmm4[0].o = zx.o(0)
                            var_760.32 = _mm256_maskstore_ps(arg5, zmm4)
                            var_740.32 = _mm256_maskstore_ps(arg5, zmm4)
                            var_720.32 = _mm256_maskstore_ps(arg5, zmm4)
                        
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm2[0].o ^= arg5[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                        zmm1[0].o ^= arg5[0].o
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = zx.o(0)
                            var_760.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_740.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_720.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_9a0_1)
            zmm0[0].o ^= zmm5[0].o
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
            zmm2[0].o ^= zmm5[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            arg13[0].o = zmm0[0].o & arg11[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm2 = var_6c0_3
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg6[0].o, var_b40_4[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_b60_2)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm4 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                int32_t var_b40_5[0x8] = zmm4
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                int32_t var_b80_3[0x8] = zmm5
                arg6 = var_d80_3
                zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                arg11[0].o = var_d00_3
                var_c60_4[0].o = zmm5[0].o
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                arg10 = var_b00_1
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                zmm5 = var_ba0_2
                arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                arg7 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                var_c80_2[0].o = arg6[0].o
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_ca0_3)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_d40_2[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                var_be0.32 = zmm1
                arg14[0].o = arg13[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_4270 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                arg15[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                var_d60[0].o = arg13[0].o
                int32_t var_9e0_3[0x8] = arg7
                double var_620[0x4]
                float var_600[0x8]
                uint32_t var_5e0[0x8]
                
                if (temp0_4270 != 0)
                    zmm0 = var_c40_1
                    arg13 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b60)
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg8[0].o = zx.o(0)
                    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                    zmm0[0].o &= arg14[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    bool cond:18_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                    var_c20_4[0].o = arg15[0].o
                    
                    if (not(cond:18_1))
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg7 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1 = var_980_1.32
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_c60_4[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_d80_3[0].o)
                        zmm2 = var_ce0_2
                        zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_c80_2[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ba0_2[0].o)
                        arg9 = var_b80_3
                        arg15 = arg6
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_b40_5[0].o, 1)
                        zmm2[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b40_5[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        arg10 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg9[0].o = zx.o(0)
                        zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        arg11 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg9, zmm0, arg11)
                        double r8_18 = zmm0[0]
                        void* rsi_49 = arg4 i+ r8_18
                        int64_t r9_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rdi_43 = arg4 + r9_6
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        double r10_11 = zmm0[0]
                        int64_t r11_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm0 = _mm256_blendv_ps(arg9, zmm1, arg11)
                        zmm2[0].o = *(zmm0[0] + rsi_49)
                        float* rcx_79 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        float* rdx_70 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_79 + rdi_43), 0x10)
                        float* rcx_80 = zmm0[0]
                        zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg5 = _mm256_blendv_ps(arg9, zmm0, arg11)
                        arg11[0].o = var_d00_3
                        zmm5[0].o = *(arg5[0].q + rsi_49)
                        float* rax_597 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        float* rsi_50 = arg5[0].q
                        float* rbx_51 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg9, arg10, zmm4)
                        arg10 = var_b00_1
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_597 + rdi_43), 0x10)
                        int64_t rax_598 = arg5[0].q
                        void* rdi_44 = arg4 i+ r10_11
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_80 + rdi_44), 0x20)
                        int64_t rcx_81 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_50 + rdi_44), 0x20)
                        void* rsi_51 = arg4 + rax_598
                        void* rdi_45 = arg4 + r11_8
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_70 + rdi_45), 0x30)
                        void* rdx_71 = arg4 + rcx_81
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_51 + rdi_45), 0x30)
                        int64_t rdi_46 = arg5[0].q
                        zmm1 = _mm256_blendv_ps(arg9, zmm1, zmm4)
                        int32_t* rbx_52 = zmm1[0].q
                        zmm0 = _mm256_blendv_ps(arg9, zmm0, zmm4)
                        arg9 = var_d20_1
                        zmm4[0].o = *(rbx_52 + rsi_51)
                        arg6[0].o = *(zmm0[0] + rsi_51)
                        void* rsi_52 = arg4 + rdi_46
                        float* rbx_54 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_54 + rdx_71), 0x10)
                        float* rbx_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_55 + rdx_71), 0x10)
                        int64_t rdx_72 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(zmm1[0].q + rsi_52), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm0[0] + rsi_52), 0x20)
                        arg6 = arg15
                        arg15[0].o = var_c20_4[0].o
                        void* rsi_53 = arg4 + rdx_72
                        float* rbx_58 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_58 + rsi_53), 0x30)
                        float* rbx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_59 + rsi_53), 0x30)
                        arg5[0].o = *(arg4 + rax_598)
                        zmm4[0].o = *(arg4 i+ r8_18)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r9_6), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 i+ r10_11), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r11_8), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_81), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdi_46), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdx_72), 0x30)
                        arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                        var_620 = _mm256_maskstore_ps(arg7, arg5)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        var_600 = _mm256_maskstore_ps(arg7, zmm1)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                        var_5e0 = _mm256_maskstore_ps(arg7, zmm0)
                        arg7 = var_9e0_3
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm1[0].o = arg12[0].o ^ zmm0[0].o
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                    zmm0[0].o ^= arg5[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg14[0].o &= zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    bool cond:22_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                    arg13[0].o = var_d60[0].o
                    
                    if (not(cond:22_1))
                        var_9a0_1.32 = arg6
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg14[0].q)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg8 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1 = var_ae0_1
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm5 = _mm256_and_ps(arg5, arg8)
                        
                        if (_mm256_movemask_ps(zmm5) == 0)
                            arg11 = var_be0.32
                            var_c00_3.32 = arg7
                        else
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm4[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                            zmm2 = arg8
                            arg8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1 = var_be0.32
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                            arg6 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                            zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            arg12 = arg7
                            arg7[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg11 = _mm256_blendv_ps(zmm1, arg6, zmm0)
                            arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            zmm1 = var_980_1.32
                            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_c60_4[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_d80_3[0].o)
                            zmm1[0].o = _mm256_extractf128_ps(var_b40_5[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                            arg9 = var_ce0_2
                            arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_c80_2[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b40_5[0].o, arg7[0].o)
                            zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            arg10 = var_b80_3
                            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, var_ba0_2[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                            arg7 = arg12
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                            zmm4 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
                            arg6[0].o = zx.o(0)
                            zmm0 = _mm256_blendv_ps(arg6, zmm4, zmm0)
                            zmm1 = _mm256_blendv_ps(arg6, zmm1, zmm5)
                            zmm4 = _mm256_blendv_ps(arg12, arg8, zmm5)
                            arg8 = zmm2
                            var_c00_3.32 = zmm4
                            int64_t r8_19 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rcx_82 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rdx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rbx_60 = zmm0[0]
                            zmm0[0].o = *(arg4 i+ rcx_82)
                            int64_t rcx_83 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rdi_47 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rsi_54 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rax_601 = zmm1[0].q
                            zmm1[0].o = *(arg4 + rdi_47)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_83), 0x10)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(arg4 + rax_601), 0x20)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_54), 0x30)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r8_19), 0x10)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(arg4 i+ rbx_60), 0x20)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_73), 0x30)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        var_620 = _mm256_maskstore_ps(arg8, _mm256_blendv_ps(zmm1, zmm0, arg5))
                        zmm0 = var_c40_1
                        arg12 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                        zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        zmm2[0].o = zmm0[0].o ^ zmm5[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
                        zmm0[0].o ^= zmm5[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o &= arg14[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        char temp0_4434 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_4434 == 0)
                            arg6 = var_9a0_1.32
                        else
                            if ((temp0_4434 & 1) != 0)
                                arg10[0].o = *arg11[0].q
                            
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm5 = var_c00_3.32
                            
                            if ((temp0_4434 & 2) != 0)
                                float* rax_603 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_603, 0x10)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            int128_t var_b60_3 = zmm2[0].o
                            
                            if ((temp0_4434 & 4) != 0)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *zmm1[0].q, 0x20)
                                arg10 = _mm256_blend_ps(arg10, zmm4, 0xf)
                            
                            arg15[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            arg6[0].o = data_1434426c0
                            
                            if ((temp0_4434 & 8) != 0)
                                float* rax_605 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_605, 0x30)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x50)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x50)
                            arg9 = arg11
                            
                            if ((temp0_4434 & 0x10) != 0)
                                arg11 = zmm5
                                arg5[0].o = zx.o(*zmm5[0])
                                zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg5[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg5[0].o, 3)
                                arg10 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
                            else
                                arg11 = zmm5
                            
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0xfa)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0xfa)
                            
                            if ((temp0_4434 & 0x20) != 0)
                                int64_t rax_616 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_616, 0x10)
                                arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            
                            arg15[0].o = var_c20_4[0].o
                            arg5 = _mm256_insertf128_ps(arg13, arg5[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            
                            if ((temp0_4434 & 0x40) != 0)
                                float* rax_617 = zmm2[0].q
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg6[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_617, 0x20)
                                arg10 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                            
                            arg13[0].o = var_d60[0].o
                            arg6 = var_9a0_1.32
                            arg8 = arg8
                            zmm4[0].o = zx.o(0)
                            arg9 = _mm256_blendv_ps(arg9, zmm0, zmm1)
                            var_c00_3.32 = _mm256_blendv_ps(arg11, arg5, zmm5)
                            
                            if (temp0_4434 s< 0)
                                int64_t rax_618 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_618, 0x30)
                                arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            
                            arg11 = arg9
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            zmm2[0].o = var_b60_3
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
                        zmm0[0].o ^= zmm5[0].o
                        var_600 = _mm256_maskstore_ps(arg8, 
                            _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1), arg10))
                        zmm0 = var_c40_1
                        arg9 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        zmm0[0].o ^= zmm5[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                        zmm1[0].o ^= zmm5[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm0[0].o &= arg14[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_4499 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4499 == 0)
                            arg10 = var_b00_1
                            arg11[0].o = var_d00_3
                        else
                            arg10 = var_b00_1
                            
                            if ((temp0_4499 & 1) == 0)
                                zmm4 = var_c00_3.32
                                
                                if ((temp0_4499 & 2) != 0)
                                    goto label_1401ed7f1
                                
                                goto label_1401ed784
                            
                            zmm2[0].o = *arg11[0].q
                            zmm4 = var_c00_3.32
                            
                            if ((temp0_4499 & 2) != 0)
                            label_1401ed7f1:
                                int64_t rax_620 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_620, 0x10)
                                zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                
                                if ((temp0_4499 & 4) == 0)
                                    goto label_1401ed789
                                
                                goto label_1401ed808
                            
                        label_1401ed784:
                            
                            if ((temp0_4499 & 4) == 0)
                            label_1401ed789:
                                
                                if ((temp0_4499 & 8) != 0)
                                    goto label_1401ed828
                                
                                goto label_1401ed792
                            
                        label_1401ed808:
                            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *zmm0[0], 0x20)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            
                            if ((temp0_4499 & 8) != 0)
                            label_1401ed828:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                int64_t rax_622 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_622, 0x30)
                                zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                arg11[0].o = var_d00_3
                                
                                if ((temp0_4499 & 0x10) == 0)
                                    goto label_1401ed7a4
                                
                                goto label_1401ed857
                            
                        label_1401ed792:
                            arg11[0].o = var_d00_3
                            
                            if ((temp0_4499 & 0x10) == 0)
                            label_1401ed7a4:
                                
                                if ((temp0_4499 & 0x20) != 0)
                                    goto label_1401ed876
                                
                                goto label_1401ed7ad
                            
                        label_1401ed857:
                            zmm0[0].o = zx.o(*zmm4[0].q)
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 3)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            
                            if ((temp0_4499 & 0x20) != 0)
                            label_1401ed876:
                                int64_t rax_624 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_624, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((temp0_4499 & 0x40) == 0)
                                    goto label_1401ed7b6
                                
                                goto label_1401ed897
                            
                        label_1401ed7ad:
                            
                            if ((temp0_4499 & 0x40) != 0)
                            label_1401ed897:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                double rax_625 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_625, 0x20)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if (temp0_4499 s< 0)
                                label_1401ed8b8:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rax_626 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_626, 0x30)
                                    zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            else
                            label_1401ed7b6:
                                
                                if (temp0_4499 s< 0)
                                    goto label_1401ed8b8
                        
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm1[0].o ^= arg5[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        zmm0[0].o ^= arg5[0].o
                        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), zmm2)
                        var_5e0 = _mm256_maskstore_ps(arg8, zmm0)
                        arg9 = var_d20_1
                
                arg8 = _mm256_insertf128_ps(arg6, arg15[0].o, 1)
                zmm0[0].o = arg13[0].o & var_bc0_3
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                arg14 = var_cc0_2
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm2[0].o = data_142fc95c0
                    arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_a40[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm0[0].o &= arg13[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    var_d00_3.32 = arg8
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg12[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg15[0].o, 1)
                        zmm1[0].o = zx.o(0)
                        float var_7c0_4[0x8] = zmm1
                        float var_7e0_4[0x8] = zmm1
                        float var_800_4[0x8] = zmm1
                        float var_820_4[0x8] = zmm1
                        float var_840_4[0x8] = zmm1
                        float var_860_4[0x8] = zmm1
                        zmm2 = var_ae0_1
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        arg14 = _mm256_and_ps(zmm0, zmm1)
                        zmm5 = _mm256_and_ps(arg14, arg8)
                        int32_t temp0_4556 = _mm256_movemask_ps(zmm5)
                        float var_c20_5[0x8] = arg5
                        
                        if (temp0_4556 == 0)
                            zmm2[0].o = data_142fc95c0
                        else
                            char rdx_76 = temp0_4556.b
                            
                            if ((rdx_76 & 1) == 0)
                                if ((rdx_76 & 2) != 0)
                                    goto label_1401ee61f
                                
                                goto label_1401eda30
                            
                            zmm0 = var_d40_2
                            arg7[0].o = *zmm0[0]
                            
                            if ((rdx_76 & 2) != 0)
                            label_1401ee61f:
                                zmm0 = var_d40_2
                                float* rax_654 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_654, 0x10)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                
                                if ((rdx_76 & 4) == 0)
                                    goto label_1401eda39
                                
                                goto label_1401ee640
                            
                        label_1401eda30:
                            
                            if ((rdx_76 & 4) == 0)
                            label_1401eda39:
                                
                                if ((rdx_76 & 8) != 0)
                                    goto label_1401ee663
                                
                                goto label_1401eda42
                            
                        label_1401ee640:
                            zmm0[0].o = var_ca0_3
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm0[0], 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((rdx_76 & 8) != 0)
                            label_1401ee663:
                                zmm0[0].o = var_ca0_3
                                float* rax_656 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_656, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                arg5[0].o = data_1434426c0
                                
                                if ((rdx_76 & 0x10) == 0)
                                    goto label_1401eda53
                                
                                goto label_1401ee694
                            
                        label_1401eda42:
                            arg5[0].o = data_1434426c0
                            
                            if ((rdx_76 & 0x10) != 0)
                            label_1401ee694:
                                zmm0[0].o = *arg10[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40_2[0].o)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                
                                if ((rdx_76 & 0x20) != 0)
                                label_1401eda64:
                                    int64_t rax_629 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_629, 0x10)
                                    arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            else
                            label_1401eda53:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40_2[0].o)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                
                                if ((rdx_76 & 0x20) != 0)
                                    goto label_1401eda64
                            
                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ca0_3)
                            zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            
                            if ((rdx_76 & 0x40) != 0)
                                float* rax_630 = arg11[0].q
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_630, 0x20)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            arg9[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            arg13 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            
                            if (temp0_4556.b s< 0)
                                int64_t rax_631 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_631, 0x30)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                            arg6 = _mm256_blendv_ps(var_d40_2, zmm1, arg13)
                            var_800_4 = _mm256_maskstore_ps(arg14, arg7)
                            
                            if ((rdx_76 & 1) == 0)
                                zmm0 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                                arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                
                                if ((rdx_76 & 2) != 0)
                                    goto label_1401ee6e2
                                
                                goto label_1401edb1d
                            
                            arg7[0].o = *arg6[0].q
                            zmm0 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                            arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                            
                            if ((rdx_76 & 2) != 0)
                            label_1401ee6e2:
                                float* rax_659 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_659, 0x10)
                                arg7 = _mm256_blend_ps(arg7, zmm1, 0xf)
                                arg10 = _mm256_blendv_ps(arg10, zmm0, arg9)
                                zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                
                                if ((rdx_76 & 4) == 0)
                                    goto label_1401edb32
                                
                                goto label_1401ee70e
                            
                        label_1401edb1d:
                            arg10 = _mm256_blendv_ps(arg10, zmm0, arg9)
                            zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            
                            if ((rdx_76 & 4) == 0)
                            label_1401edb32:
                                
                                if ((rdx_76 & 8) != 0)
                                    goto label_1401ee723
                                
                                goto label_1401edb3b
                            
                        label_1401ee70e:
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((rdx_76 & 8) == 0)
                            label_1401edb3b:
                                
                                if ((rdx_76 & 0x10) != 0)
                                label_1401edb45:
                                    zmm0[0].o = *arg10[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            else
                            label_1401ee723:
                                float* rax_661 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_661, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                
                                if ((rdx_76 & 0x10) != 0)
                                    goto label_1401edb45
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            
                            if ((rdx_76 & 0x20) != 0)
                                int64_t rax_633 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_633, 0x10)
                                arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                            
                            if ((rdx_76 & 0x40) != 0)
                                double rax_634 = zmm0[0]
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_634, 0x20)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            zmm2[0].o = data_142fc95c0
                            zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg11, arg5[0].o, 1)
                            
                            if (temp0_4556.b s< 0)
                                int64_t rax_635 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_635, 0x30)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            
                            var_d40_2 = _mm256_blendv_ps(arg6, arg5, arg13)
                            arg10 = _mm256_blendv_ps(arg10, zmm1, arg9)
                            var_860_4 = _mm256_maskstore_ps(arg14, arg7)
                            arg9 = var_d20_1
                            arg13[0].o = var_d60[0].o
                        
                        zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(arg12[0].o, 0x1f)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(var_c40_1, data_143442b00)
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg8[0].o = zx.o(0)
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                        zmm0[0].o = arg6[0].o & not.o(arg15[0].o)
                        zmm1[0].o = arg7[0].o & not.o(arg5[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = arg13[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_4616 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4616 != 0)
                            arg12 = var_d40_2
                            
                            if ((temp0_4616 & 1) == 0)
                                var_b00_1[0].o = zmm4[0].o
                                
                                if ((temp0_4616 & 2) != 0)
                                    goto label_1401ee75e
                                
                                goto label_1401edc92
                            
                            arg9[0].o = *arg12[0].q
                            var_b00_1[0].o = zmm4[0].o
                            
                            if ((temp0_4616 & 2) != 0)
                            label_1401ee75e:
                                int64_t rax_663 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_663, 0x10)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                
                                if ((temp0_4616 & 4) == 0)
                                    goto label_1401edca6
                                
                                goto label_1401ee789
                            
                        label_1401edc92:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            
                            if ((temp0_4616 & 4) != 0)
                            label_1401ee789:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm4[0].q, 0x20)
                                arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4616 & 8) != 0)
                                label_1401edcb0:
                                    int64_t rax_636 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_636, 0x30)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            else
                            label_1401edca6:
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4616 & 8) != 0)
                                    goto label_1401edcb0
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg11[0].o = data_1434426c0
                            arg13[0].o = arg7[0].o ^ zmm5[0].o
                            arg14 = arg10
                            
                            if ((temp0_4616 & 0x10) != 0)
                                zmm2[0].o = zx.o(*arg10[0].q)
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 3)
                                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg11[0].o)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                            arg6[0].o ^= zmm5[0].o
                            arg7 = arg14
                            
                            if ((temp0_4616 & 0x20) != 0)
                                int64_t rax_638 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_638, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(arg5, arg15[0].o, 1)
                            arg13 = _mm256_insertf128_ps(arg13, arg6[0].o, 1)
                            
                            if ((temp0_4616 & 0x40) != 0)
                                double rax_639 = zmm0[0]
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_639, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg11[0].o)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                            zmm2 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
                            arg5 = _mm256_and_ps(arg13, arg5)
                            
                            if (temp0_4616 s< 0)
                                float* rbx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rbx_63, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            arg7 = var_d40_2
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                            arg10 = _mm256_blendv_ps(arg7, zmm2, arg6)
                            var_7e0_4 = _mm256_maskstore_ps(arg5, arg9)
                            
                            if ((temp0_4616 & 1) == 0)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg13 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                
                                if ((temp0_4616 & 2) != 0)
                                    goto label_1401ee7c6
                                
                                goto label_1401edde8
                            
                            arg9[0].o = *arg10[0].q
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            arg13 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            
                            if ((temp0_4616 & 2) != 0)
                            label_1401ee7c6:
                                int64_t rax_666 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_666, 0x10)
                                arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                arg12 = _mm256_blendv_ps(arg14, zmm0, arg13)
                                zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                
                                if ((temp0_4616 & 4) == 0)
                                    goto label_1401eddfd
                                
                                goto label_1401ee7f2
                            
                        label_1401edde8:
                            arg12 = _mm256_blendv_ps(arg14, zmm0, arg13)
                            zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            
                            if ((temp0_4616 & 4) == 0)
                            label_1401eddfd:
                                
                                if ((temp0_4616 & 8) != 0)
                                    goto label_1401ee807
                                
                                goto label_1401ede06
                            
                        label_1401ee7f2:
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm4[0].q, 0x20)
                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            
                            if ((temp0_4616 & 8) == 0)
                            label_1401ede06:
                                
                                if ((temp0_4616 & 0x10) != 0)
                                label_1401ede10:
                                    zmm0[0].o = *arg12[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            else
                            label_1401ee807:
                                int64_t rax_668 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_668, 0x30)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                
                                if ((temp0_4616 & 0x10) != 0)
                                    goto label_1401ede10
                            
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg11[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                            
                            if ((temp0_4616 & 0x20) != 0)
                                int64_t rax_641 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_641, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                            
                            if ((temp0_4616 & 0x40) != 0)
                                float* rax_642 = zmm1[0].q
                                arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_642, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                            
                            if (temp0_4616 s< 0)
                                int64_t rcx_86 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rcx_86, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm4[0].o = var_b00_1[0].o
                            zmm1 = _mm256_blendv_ps(arg10, zmm2, arg6)
                            var_d40_2 = zmm1
                            arg10 = _mm256_blendv_ps(arg12, zmm0, arg13)
                            var_840_4 = _mm256_maskstore_ps(arg5, arg9)
                            arg9 = var_d20_1
                            arg13[0].o = var_d60[0].o
                        
                        arg11 = _mm256_insertf128_ps(var_c20_5, zmm4[0].o, 1)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(var_c40_1, data_143442b20)
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                        zmm0[0].o = arg7[0].o & not.o(arg15[0].o)
                        zmm1[0].o = zmm4[0].o & not.o(zmm2[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm5[0].o = arg13[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_4691 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        arg14 = var_cc0_2
                        
                        if (temp0_4691 != 0)
                            arg12 = var_d40_2
                            
                            if ((temp0_4691 & 1) == 0)
                                if ((temp0_4691 & 2) != 0)
                                    goto label_1401ee839
                                
                                goto label_1401edf5f
                            
                            arg5[0].o = *arg12[0].q
                            
                            if ((temp0_4691 & 2) != 0)
                            label_1401ee839:
                                int64_t rax_670 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_670, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                                arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                
                                if ((temp0_4691 & 4) == 0)
                                    goto label_1401edf73
                                
                                goto label_1401ee864
                            
                        label_1401edf5f:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            
                            if ((temp0_4691 & 4) != 0)
                            label_1401ee864:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *arg6[0].q, 0x20)
                                arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4691 & 8) != 0)
                                label_1401edf7d:
                                    int64_t rax_643 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_643, 0x30)
                                    arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            else
                            label_1401edf73:
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4691 & 8) != 0)
                                    goto label_1401edf7d
                            
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg9[0].o = data_1434426c0
                            arg8[0].o = zmm4[0].o ^ data_142d3f800
                            arg13 = arg10
                            
                            if ((temp0_4691 & 0x10) != 0)
                                zmm1[0].o = *arg10[0].q
                                zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            arg7[0].o ^= data_142d3f800
                            zmm4 = arg13
                            
                            if ((temp0_4691 & 0x20) != 0)
                                int64_t rax_645 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_645, 0x10)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            
                            zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm2, arg15[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                            
                            if ((temp0_4691 & 0x40) != 0)
                                float* rax_646 = zmm4[0].q
                                arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_646, 0x20)
                                arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                            
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm5 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                            zmm2 = _mm256_and_ps(zmm2, zmm0)
                            
                            if (temp0_4691 s< 0)
                                int64_t rbx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rbx_64, 0x30)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            
                            arg8 = arg13
                            arg13[0].o = var_d60[0].o
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg6 = var_d40_2
                            zmm5 = _mm256_blendv_ps(arg6, zmm5, zmm1)
                            var_7c0_4 = _mm256_maskstore_ps(zmm2, arg5)
                            
                            if ((temp0_4691 & 1) == 0)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                
                                if ((temp0_4691 & 2) != 0)
                                    goto label_1401ee89f
                                
                                goto label_1401ee0ae
                            
                            arg5[0].o = *zmm5[0]
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            
                            if ((temp0_4691 & 2) == 0)
                            label_1401ee0ae:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_4691 & 4) != 0)
                                label_1401ee0bd:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm0[0], 0x20)
                                    arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                            else
                            label_1401ee89f:
                                int64_t rax_673 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_673, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_4691 & 4) != 0)
                                    goto label_1401ee0bd
                            
                            arg9 = var_d20_1
                            zmm0 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            
                            if ((temp0_4691 & 8) == 0)
                                zmm4 = _mm256_blendv_ps(arg8, zmm0, zmm1)
                                
                                if ((temp0_4691 & 0x10) != 0)
                                    goto label_1401ee8f5
                                
                                goto label_1401ee101
                            
                            zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            int64_t rax_674 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_674, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm4, 0xf)
                            zmm4 = _mm256_blendv_ps(arg8, zmm0, zmm1)
                            
                            if ((temp0_4691 & 0x10) != 0)
                            label_1401ee8f5:
                                zmm0[0].o = *zmm4[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                
                                if ((temp0_4691 & 0x20) == 0)
                                    goto label_1401ee10a
                                
                                goto label_1401ee914
                            
                        label_1401ee101:
                            
                            if ((temp0_4691 & 0x20) == 0)
                            label_1401ee10a:
                                
                                if ((temp0_4691 & 0x40) != 0)
                                    goto label_1401ee935
                                
                                goto label_1401ee11b
                            
                        label_1401ee914:
                            int64_t rax_676 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_676, 0x10)
                            arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            
                            if ((temp0_4691 & 0x40) == 0)
                            label_1401ee11b:
                                
                                if (temp0_4691 s< 0)
                                label_1401ee962:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rcx_92 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rcx_92, 0x30)
                                    arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            else
                            label_1401ee935:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                double rax_677 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_677, 0x20)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                
                                if (temp0_4691 s< 0)
                                    goto label_1401ee962
                            
                            var_820_4 = _mm256_maskstore_ps(zmm2, arg5)
                        
                        zmm1 = var_980_1.32
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_c60_4[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_d80_3[0].o)
                        arg5 = var_ce0_2
                        zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c80_2[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ba0_2[0].o)
                        arg7 = var_b80_3
                        zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg8 = var_b40_5
                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg6[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm4[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(zmm4, zmm1, zmm2)
                        zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        zmm0 =
                            _mm256_blendv_ps(zmm4, zmm0, _mm256_insertf128_ps(zmm2, arg5[0].o, 1))
                        int64_t r8_20 = zmm1[0].q
                        int64_t rcx_88 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_79 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_65 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_48 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_55 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        double rax_648 = zmm0[0]
                        zmm0[0].o = zx.o(*(arg4 + r8_20))
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rcx_88), 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdi_48), 2)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_79), 3)
                        int64_t rcx_89 = zmm1[0].q
                        zmm1[0].o = zx.o(*(arg4 i+ rax_648))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_65), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_89), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_55), 3)
                        zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                        zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg6[0].o = data_143442490
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(
                                __vdivps_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm5[0].o, 1)), 
                                    data_1434424a0), 
                                var_860_4), 
                            var_800_4)
                        zmm5[0].o = data_143442480
                        zmm4[0].o &= zmm5[0].o
                        arg6[0].o = data_143442440
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm0[0].o &= zmm5[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm4[0].o, 1))
                        zmm4 = data_143442460
                        zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm0, zmm4), var_840_4), 
                            var_7e0_4)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(
                                _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)), 
                                    zmm4), 
                                var_820_4), 
                            var_7c0_4)
                        var_620 = _mm256_maskstore_ps(arg11, zmm2)
                        var_600 = _mm256_maskstore_ps(arg11, zmm0)
                        var_5e0 = _mm256_maskstore_ps(arg11, zmm1)
                        zmm2[0].o = data_142fc95c0
                        arg8 = var_d00_3.32
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm5[0].o = zmm0[0].o ^ var_bc0_3
                    zmm0[0].o = arg13[0].o & zmm5[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg10 = var_9e0_3
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        arg7[0].o = data_1434422d0
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg7[0].o, var_a40[0].o)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        arg14[0].o = arg13[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg14[0].q)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg15 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = var_ae0_1
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = _mm256_and_ps(zmm2, arg15)
                            bool cond:42_1 = _mm256_movemask_ps(zmm1) == 0
                            var_d40_2[0].o = zmm5[0].o
                            var_b00_1[0].o = arg6[0].o
                            
                            if (cond:42_1)
                                arg11 = var_be0.32
                            else
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg5[0].o = data_1434426b0
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                arg11 = var_be0.32
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                                arg9 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                                arg11 = _mm256_blendv_ps(arg11, arg5, arg9)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                arg5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                arg10 = _mm256_blendv_ps(arg10, zmm4, zmm1)
                                zmm0 = var_980_1.32
                                arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_c60_4[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d80_3[0].o)
                                zmm0 = var_ce0_2
                                arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_c80_2[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_ba0_2[0].o)
                                arg8[0].o = arg14[0].o
                                arg14 = arg15
                                zmm5[0].o = _mm256_extractf128_ps(var_b80_3[0].o, 1)
                                arg15 = var_b40_5
                                var_d80_3 = zmm2
                                zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                zmm0[0].o = data_1434426c0
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b80_3[0].o, zmm0[0].o)
                                arg15 = arg14
                                arg14[0].o = arg8[0].o
                                zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                                arg5[0].o = zx.o(0)
                                zmm0 = _mm256_blendv_ps(arg5, zmm0, arg9)
                                zmm1 = _mm256_blendv_ps(arg5, zmm2, zmm1)
                                int64_t r8_21 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                double rcx_90 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t r9_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                double rbx_66 = zmm0[0]
                                int64_t rdi_49 = zmm1[0].q
                                int64_t rsi_56 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                double rax_652 = zmm0[0]
                                int64_t rdx_80 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(arg4 i+ rcx_90))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_21), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 i+ rbx_66), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r9_7), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_49), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_56), 5)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg4 i+ rax_652), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_80), 7)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm2 = var_d80_3
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                            
                            zmm1[0].o = zx.o(0)
                            var_620 = _mm256_maskstore_ps(arg15, _mm256_blendv_ps(zmm1, zmm0, zmm2))
                            zmm0 = var_c40_1
                            arg12 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg6[0].o = zx.o(0)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            arg5[0].o = zmm0[0].o ^ zmm2[0].o
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm0[0].o &= arg14[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_4963 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_4963 == 0)
                                arg9 = var_d20_1
                                arg8 = var_d00_3.32
                                zmm5[0].o = var_d40_2[0].o
                            else
                                if ((temp0_4963 & 1) != 0)
                                    arg7[0].o = zx.o(*arg11[0].q)
                                
                                if ((temp0_4963 & 2) != 0)
                                    uint16_t* rax_680 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_680, 1)
                                
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                
                                if ((temp0_4963 & 4) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm1[0].q, 2)
                                
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                var_d80_3[0].o = arg5[0].o
                                arg8 = arg11
                                
                                if ((temp0_4963 & 8) != 0)
                                    uint16_t* rax_682 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_682, 3)
                                
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                arg11[0].o = data_1434426b0
                                var_bc0_3.32 = arg15
                                
                                if ((temp0_4963 & 0x10) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg10[0].q, 4)
                                
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm4 = arg10
                                arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                                arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
                                arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x50)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                
                                if ((temp0_4963 & 0x20) != 0)
                                    zmm5 = zmm4
                                    uint16_t* rax_684 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_684, 5)
                                else
                                    zmm5 = zmm4
                                
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xfa)
                                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                
                                if ((temp0_4963 & 0x40) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0], 6)
                                
                                arg11 = arg8
                                arg8 = var_d00_3.32
                                zmm2 = _mm256_insertf128_ps(arg15, arg13[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                                
                                if (temp0_4963 s< 0)
                                    uint16_t* rax_686 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_686, 7)
                                
                                arg9 = var_d20_1
                                arg13[0].o = var_d60[0].o
                                zmm5[0].o = var_d40_2[0].o
                                arg15 = var_bc0_3.32
                                arg6[0].o = zx.o(0)
                                arg11 = _mm256_blendv_ps(arg11, zmm1, arg5)
                                arg10 = _mm256_blendv_ps(zmm5, zmm2, zmm4)
                                zmm0[0].o = zx.o(0)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg7[0].o, zx.o(0))
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg7[0].q)
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                arg5[0].o = var_d80_3[0].o
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                            var_600 = _mm256_maskstore_ps(arg15, _mm256_and_ps(zmm1, zmm0))
                            zmm0 = var_c40_1
                            zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                            arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm0[0].o &= arg14[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            char temp0_5012 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_5012 == 0)
                                arg7[0].o = data_1434422d0
                                arg6[0].o = var_b00_1[0].o
                            else
                                if ((temp0_5012 & 1) == 0)
                                    if ((temp0_5012 & 2) != 0)
                                        goto label_1401ef0c1
                                    
                                    goto label_1401eec19
                                
                                zmm2[0].o = zx.o(*arg11[0].q)
                                
                                if ((temp0_5012 & 2) != 0)
                                label_1401ef0c1:
                                    int64_t rax_693 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_693, 1)
                                    
                                    if ((temp0_5012 & 4) == 0)
                                        goto label_1401eec22
                                    
                                    goto label_1401ef0d5
                                
                            label_1401eec19:
                                
                                if ((temp0_5012 & 4) == 0)
                                label_1401eec22:
                                    
                                    if ((temp0_5012 & 8) != 0)
                                        goto label_1401ef0ee
                                    
                                    goto label_1401eec2b
                                
                            label_1401ef0d5:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 2)
                                
                                if ((temp0_5012 & 8) != 0)
                                label_1401ef0ee:
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    int64_t rax_695 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_695, 3)
                                    arg7[0].o = data_1434422d0
                                    arg6[0].o = var_b00_1[0].o
                                    
                                    if ((temp0_5012 & 0x10) == 0)
                                        goto label_1401eec45
                                    
                                    goto label_1401ef11e
                                
                            label_1401eec2b:
                                arg7[0].o = data_1434422d0
                                arg6[0].o = var_b00_1[0].o
                                
                                if ((temp0_5012 & 0x10) == 0)
                                label_1401eec45:
                                    
                                    if ((temp0_5012 & 0x20) != 0)
                                        goto label_1401ef12c
                                    
                                    goto label_1401eec4e
                                
                            label_1401ef11e:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                                
                                if ((temp0_5012 & 0x20) != 0)
                                label_1401ef12c:
                                    int64_t rax_697 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_697, 5)
                                    
                                    if ((temp0_5012 & 0x40) == 0)
                                        goto label_1401eec57
                                    
                                    goto label_1401ef140
                                
                            label_1401eec4e:
                                
                                if ((temp0_5012 & 0x40) != 0)
                                label_1401ef140:
                                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 6)
                                    
                                    if (temp0_5012 s< 0)
                                    label_1401ef158:
                                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_699 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_699, 7)
                                else
                                label_1401eec57:
                                    
                                    if (temp0_5012 s< 0)
                                        goto label_1401ef158
                                
                                zmm0[0].o = zx.o(0)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                            
                            zmm1[0].o = zx.o(0)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            zmm2[0].o ^= arg5[0].o
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                            zmm1[0].o ^= arg5[0].o
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm0 = _mm256_and_ps(zmm1, zmm0)
                            var_5e0 = _mm256_maskstore_ps(arg15, zmm0)
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o ^= zmm5[0].o
                        zmm1[0].o = arg13[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg14 = var_cc0_2
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0[0].o = data_143442ad0
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_a40[0].o)
                            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                            arg5[0].o &= arg13[0].o
                            zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                            zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                                zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                                zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                zmm4[0].o = zx.o(0)
                                var_620 = _mm256_maskstore_ps(arg5, zmm4)
                                var_600 = _mm256_maskstore_ps(arg5, zmm4)
                                var_5e0 = _mm256_maskstore_ps(arg5, zmm4)
                            
                            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            zmm2[0].o ^= arg5[0].o
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                            zmm0[0].o ^= arg5[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm0[0].o &= zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1[0].o = zx.o(0)
                                var_620 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_600 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_5e0 = _mm256_maskstore_ps(zmm0, zmm1)
                
                arg5 = var_760.32
                zmm4 = var_740.32
                zmm5 = var_720.32
                zmm0 = _mm256_sub_ps(var_620, arg5)
                zmm1 = _mm256_sub_ps(var_600, zmm4)
                zmm2 = _mm256_sub_ps(var_5e0, zmm5)
                arg6 = var_ac0_1
                zmm0 = _mm256_mul_ps(arg6, zmm0)
                zmm1 = _mm256_mul_ps(arg6, zmm1)
                zmm2 = _mm256_mul_ps(arg6, zmm2)
                var_760.32 = _mm256_maskstore_ps(arg8, _mm256_add_ps(arg5, zmm0))
                var_740.32 = _mm256_maskstore_ps(arg8, _mm256_add_ps(zmm4, zmm1))
                zmm0 = _mm256_add_ps(zmm5, zmm2)
                var_720.32 = _mm256_maskstore_ps(arg8, zmm0)
                zmm2 = var_6c0_3
        
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm1[0].o = _mm256_extractf128_ps(var_9c0_1[0].o, 1)
        arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, var_9c0_1[0].o)
        zmm1[0].o = arg8[0].o & zmm0[0].o
        var_9c0_1[0].o = arg5[0].o & zmm2[0].o
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_9c0_1[0].o, zmm1[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            zmm1 = _mm256_insertf128_ps(arg5, arg8[0].o, 1)
            zmm0 = _mm256_and_ps(zmm1, zmm0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            var_760.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_740.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_720.32 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_aa0_3, var_640_1, 1)
        zmm2[0].o = var_760
        int128_t var_750
        arg5[0].o = var_750
        var_9c0_1[0].o = var_740
        int128_t var_730
        zmm5[0].o = var_730
        arg6[0].o = var_720
        int128_t var_710
        arg7[0].o = var_710
        arg9[0].o = zx.o(0)
        arg11[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg10[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_9c0_1[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_9c0_1[0].o)
        var_9c0_1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 0x28)
        int128_t var_2a0 = var_9c0_1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        int128_t var_290_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg6[0].o, 0xa8)
        int128_t var_280_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
        int128_t var_270_1 = zmm1[0].o
        zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        var_9c0_1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        arg5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(var_9c0_1[0].o, arg7[0].o, 0x28)
        int128_t var_260_1 = zmm5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(var_9c0_1[0].o, zmm1[0].o)
        int128_t var_250_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg7[0].o, 0xa8)
        int128_t var_240_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
        int128_t var_230_1 = zmm1[0].o
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg14[0].o, var_9c0_1[0].o)
        zmm1 = _mm256_insertf128_ps(zmm1, arg8[0].o, 1)
        i_4 = zx.q(_mm256_movemask_ps(zmm1))
        
        do
            uint64_t rcx_93
            uint64_t rflags_2
            
            if (i_4 == 0)
                rcx_93 = 0x40
            else
                rcx_93, rflags_2 = _bit_scan_forward(i_4)
            double var_140[0x4] = zmm0
            zmm1[0].o = (&var_2a0)[rcx_93]
            *(var_8f0 + sx.q(*(&var_140 + ((zx.q(rcx_93.d) & 7) << 2))) * 0x30 + 0x10) = zmm1[0].o
            i_4 &= rol.q(-2, rcx_93.b)
        while (i_4 != 0)
else
    int32_t* r15_1 = arg4
    zmm0[0].o = 4
    zmm1[0].o = zx.o(arg4)
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_160_1[0x4] = zmm0
    zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_440_1[0x4] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int32_t rcx_4
    rcx_4.b = zmm0[0].o f>= zmm2[0]
    zmm0[0].o = zx.o(neg.d(rcx_4))
    zmm1[0].o = arg5[0].o
    zmm1[0] = float.s(arg16 - 1)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm1[0].o = zmm1[0].o f* zmm2[0]
    int32_t rax_2 = int.d(zmm1[0])
    r9 = 0
    
    if (rax_2 s< 0)
        rax_2 = 0
    
    if (arg16 - 2 s<= rax_2)
        rax_2 = arg16 - 2
    
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_180_1[0x4] = zmm0
    zmm0[0].o = zx.o(rax_2)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_1a0_1[0x4] = zmm0
    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
    arg12[0].o = zx.o(0)
    arg11[0].o = data_142fc95c0
    int32_t var_460_1[0x8] = arg14
    
    do
        int64_t rax_16 = sx.q((r9 << 3).d)
        zmm2[0].o = *(arg2 + rax_16)
        arg5[0].o = *(arg2 + rax_16 + 0x10)
        zmm4[0].o = *(arg2 + rax_16 + 0x20)
        zmm5[0].o = *(arg2 + rax_16 + 0x30)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg5[0].o, 0xdd)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0xdd)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        int64_t r8 = sx.q(zmm0[0].d)
        int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t rbx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        int64_t rdi_2 = sx.q(zmm1[0])
        int64_t rsi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int32_t temp0_45 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_46 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm0[0].o = zx.o(*(arg3 + r8))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r10_1), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r11_1), 2)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rbx_2), 3)
        zmm1[0].o = zx.o(*(arg3 + rdi_2))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rsi_2), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + sx.q(temp0_45)), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + sx.q(temp0_46)), 3)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg5[0].o, 0x88)
        int128_t var_980
        var_980.32 = zmm2
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        zmm2[0].o ^= arg6[0].o
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        arg5[0].o ^= arg6[0].o
        arg5 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
        int128_t var_6a0
        int128_t var_680
        int128_t var_660
        
        if (_mm256_movemask_ps(arg5) == 0)
            zmm2 = var_980.32
        else
            float var_9e0_1[0x8] = arg5
            var_960 = zmm5[0].o
            var_a00 = zmm4[0].o
            var_be0 = r9
            arg13 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            zmm2[0].o = arg14[0].o ^ arg6[0].o
            arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg6[0].o)
            zmm0[0].o = arg10[0].o ^ arg6[0].o
            int128_t var_cc0_1 = zmm0[0].o
            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
            float var_ce0_1[0x8] = zmm1
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
            float var_ac0[0x8]
            var_ac0[0].o = zmm1[0].o
            arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
            arg5 = _mm256_and_ps(zmm0, arg13)
            int64_t r8_1 = sx.q(arg5[0])
            int32_t temp0_68 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            int64_t rbx_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            int64_t rdi_4 = sx.q(arg5[0])
            int32_t temp0_72 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_73 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_74 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = zx.o(*(r15_1 + r8_1))
            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_1 + sx.q(temp0_68)), 1)
            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_1 + r10_2), 2)
            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_1 + rbx_4), 3)
            zmm4[0].o = zx.o(*(r15_1 + rdi_4))
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_1 + sx.q(temp0_72)), 1)
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_1 + sx.q(temp0_73)), 2)
            zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_1 + sx.q(temp0_74)), 3)
            zmm1 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
            float var_d60_1[0x8] = zmm1
            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x18)
            arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x18)
            arg6 =
                __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg6, arg7[0].o, 1), data_1434429c0)
            float var_c40[0x8]
            arg15 = _mm256_blendv_ps(var_c40, arg6, zmm0)
            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x1c)
            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1c)
            arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
            arg9 = _mm256_blendv_ps(arg9, arg5, zmm0)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            arg5 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(arg5, zmm5[0].o, 1))
            int32_t temp0_96 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_97 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 2)
            float rcx_13 = arg5[0]
            int32_t temp0_98 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            int32_t temp0_100 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_101 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_102 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            var_c40 = arg15
            arg7 = __vandps_ymmqq_ymmqq_memqq(arg15, data_1434429e0)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 3)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
            double var_b40_1[0x4] = arg7
            zmm5 = _mm256_and_ps(zmm0, _mm256_or_ps(arg7, _mm256_insertf128_ps(zmm5, arg6[0].o, 1)))
            int64_t rax_26 = sx.q(zmm5[0].d)
            int32_t temp0_109 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            arg6[0].o = zx.o(*(rax_26 + &data_143442ba0))
            int64_t rax_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            arg6[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(sx.q(temp0_109) + &data_143442ba0), 1)
            int64_t rdx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            arg6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rax_29 + &data_143442ba0), 2)
            int64_t rax_31 = sx.q(zmm5[0].d)
            arg6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rdx_8 + &data_143442ba0), 3)
            int32_t temp0_116 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            arg6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rax_31 + &data_143442ba0), 4)
            int64_t rax_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            arg6[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(sx.q(temp0_116) + &data_143442ba0), 5)
            int32_t temp0_120 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rax_33 + &data_143442ba0), 6)
            float rdx_11 = arg5[0]
            arg5[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(sx.q(temp0_120) + &data_143442ba0), 7)
            zmm5[0].o = __vpmovzxbd_xmmdq_xmmd(arg5[0])
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xe5)
            arg5[0].o = __vpmovzxbd_xmmdq_xmmd(arg5[0])
            arg12 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
            uint32_t var_b80[0x4] = zmm1[0].o
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
            float var_d40_1[0x8] = arg9
            arg15[0].o = arg11[0].o
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
            int32_t var_ae0[0x8]
            var_ae0[0].o = zmm2[0].o
            arg5[0].o = zmm4[0].o & not.o(zmm2[0].o)
            zmm2[0].o = arg6[0].o & not.o(var_cc0_1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            int32_t var_aa0_1[0x8] = arg13
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            char temp0_133 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            zmm1 = var_160_1
            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2 = var_d60_1
            arg9 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442840)
            arg13[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_ce0_1[0].o)
            float var_c60_1[0x8] = arg8
            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
            zmm1[0].o = zx.o(0)
            float var_6c0_1[0x8] = zmm1
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            
            if (temp0_133 != 0)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                zmm2[0].o = zmm4[0].o ^ zmm1[0].o
                arg7[0].o = arg6[0].o ^ zmm1[0].o
                zmm2 = _mm256_and_ps(_mm256_and_ps(_mm256_insertf128_ps(arg7, zmm2[0].o, 1), zmm0), 
                    arg12)
            
            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ac0[0].o)
            int128_t var_bc0_1 = zmm5[0].o
            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm1 = _mm256_blendv_ps(var_a40, arg9, zmm0)
            var_a40 = zmm1
            var_cc0_1 = arg14[0].o
            zmm5[0].o = arg14[0].o & not.o(zmm4[0].o)
            zmm1[0].o = arg10[0].o & not.o(arg6[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:2_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            int32_t var_8a0_1[0x4] = zmm5[0].o
            
            if (cond:2_1)
                zmm5[0].o = zx.o(0)
            else
                zmm1 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(arg6, zmm4[0].o, 1))
                zmm5 = _mm256_and_ps(zmm1, arg12)
                zmm2 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm2, data_143442a00, zmm1)
            
            r12 = var_8f0
            r15_1 = arg4
            r9 = var_be0
            arg9 = var_d40_1
            arg6[0].o = zmm4[0].o
            arg11[0].o = arg15[0].o
            zmm1 = _mm256_insertf128_ps(arg13, arg7[0].o, 1)
            var_d60 = zmm1
            arg13 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
            zmm1[0].o = zx.o(*(sx.q(rdx_11) + &data_143442b80))
            zmm1[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(sx.q(temp0_100) + &data_143442b80), 1)
            zmm1[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(sx.q(temp0_101) + &data_143442b80), 2)
            zmm1[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(sx.q(temp0_102) + &data_143442b80), 3)
            arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm4[0].o = var_cc0_1
            zmm1[0].o = zmm4[0].o & not.o(zmm1[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            arg5[0].o = zx.o(*(sx.q(rcx_13) + &data_143442b80))
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_96) + &data_143442b80), 1)
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_97) + &data_143442b80), 2)
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_98) + &data_143442b80), 3)
            arg5[0].o = arg10[0].o & not.o(arg5[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            int32_t var_640[0x4]
            zmm2 = _mm256_blendv_ps(var_640.32, zmm1, zmm0)
            var_640.32 = zmm2
            zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm2[0].o = data_142fc95e0
            arg5[0].o = zmm2[0].o
            zmm2[0].o = zmm4[0].o & not.o(zmm2[0].o)
            zmm1[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = arg10[0].o & not.o(arg5[0].o)
            zmm2[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            arg14 = _mm256_blendv_ps(var_9a0.32, zmm1, zmm0)
            zmm0[0].o = data_142d3f5b0
            zmm2[0].o = zmm0[0].o
            zmm0 = var_a40
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = zmm4[0].o & not.o(zmm2[0].o)
            zmm1[0].o = arg10[0].o & not.o(zmm1[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:5_1 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0
            float var_d20[0x8]
            var_d20[0].o = arg6[0].o
            int32_t var_d80_1[0x8] = arg13
            var_9a0.32 = arg14
            int128_t var_d00
            int64_t var_ca0[0x2]
            int32_t var_c80[0x4]
            int32_t var_c00[0x4]
            float var_a80[0x8]
            int128_t var_9c0
            int128_t var_920
            double var_780[0x4]
            int32_t var_5c0[0x4]
            
            if (cond:5_1)
                arg8[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_8e0 = zmm0
                arg6 = var_ce0_1
                zmm2[0].o = var_ac0[0].o
                arg5 = var_c60_1
                zmm1[0].o = var_bc0_1
                arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            else
                zmm2 = __vandps_ymmqq_ymmqq_memqq(var_c40, data_142fc9540)
                arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                arg7[0].o = zx.o(0)
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                zmm5[0].o = arg5[0].o & zmm1[0].o
                arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                int32_t var_c20_1[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0)
                    arg5[0].o = zx.o(0)
                    var_d00.32 = arg5
                    arg8[0].o = zx.o(0)
                    arg5[0].o = zx.o(0)
                    var_c20_1 = arg5
                    arg6[0].o = zx.o(0)
                    arg13[0].o = zx.o(0)
                else
                    arg5[0].o = zx.o(0)
                    arg6[0].o = arg17
                    arg7[0].o = zx.o(0)
                    
                    if (arg7[0].o f>= arg6[0])
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        var_d00.32 = arg6
                        arg8[0].o = zx.o(0)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        var_c20_1 = arg6
                        arg10[0].o = zx.o(0)
                        arg7[0].o = zx.o(0)
                    else
                        bool cond:9_1 = arg6[0].o f>= 1f
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        arg7[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg7[0].o, var_a40[0].o)
                        arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        
                        if (cond:9_1)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                            arg10 = _mm256_and_ps(arg7, arg6)
                            arg8 = arg10
                            var_c20_1 = arg10
                            var_d00.32 = arg10
                            arg7[0].o = zx.o(0)
                        else
                            arg9 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg6), var_440_1)
                            arg11 = _mm256_round_ps(arg9, 9)
                            arg5 = _mm256_cvttps_epi32(arg11)
                            arg8[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg12[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg14[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
                            arg5 = _mm256_insertf128_ps(arg8, arg14[0].o, 1)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg13[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg10 = _mm256_insertf128_ps(arg13, arg7[0].o, 1)
                            arg5 = _mm256_and_ps(arg10, arg5)
                            var_d00.32 = arg5
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            
                            if (arg18 != 1)
                                arg5 = _mm256_sub_ps(arg9, arg11)
                            
                            arg7[0].o &= arg14[0].o
                            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            arg9[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg11[0].o)
                            arg7[0].o = arg13[0].o & arg8[0].o
                            arg7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg11[0].o)
                            arg6[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
                            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                            arg10 = _mm256_and_ps(arg10, arg6)
                            arg8 = var_d00.32
                            var_c20_1 = arg10
                            arg7[0].o = zx.o(0)
                            arg11[0].o = data_142fc95c0
                            arg9 = var_d40_1
                    
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                    arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                    arg13 = _mm256_and_ps(zmm5, arg5)
                    arg6 = arg10
                
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                arg5[0].o = zmm4[0].o ^ zmm5[0].o
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                zmm2[0].o ^= zmm5[0].o
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                zmm5[0].o = zmm1[0].o & zmm2[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    var_8e0 = arg6
                    var_6c0_1 = arg13
                    arg6 = var_ce0_1
                    zmm2[0].o = var_ac0[0].o
                    arg5 = var_c60_1
                    zmm1[0].o = var_bc0_1
                    arg13 = var_d80_1
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                else
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                    arg10[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(arg10[0].o, 0x1f)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2[0].o = data_1434422d0
                    arg5[0].o = zmm2[0].o
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm4 = var_a40
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                    arg9 = __vorps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg5, zmm2[0].o, 1), 
                        var_180_1)
                    zmm2 = _mm256_and_ps(arg9, zmm1)
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        arg5[0].o = zx.o(0)
                        arg8 = _mm256_blendv_ps(var_d00.32, arg5, zmm2)
                        arg6 = _mm256_blendv_ps(var_c20_1, arg5, zmm2)
                        var_d00.32 = arg8
                        var_c20_1 = arg6
                    
                    var_a80 = arg9
                    arg9 = _mm256_andnot_ps(arg9, zmm1)
                    int32_t temp0_257 = _mm256_movemask_ps(arg9)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    
                    if (temp0_257 == 0)
                        var_8e0 = arg6
                        arg9 = var_d40_1
                        arg6 = var_ce0_1
                        zmm2[0].o = var_ac0[0].o
                        arg5 = var_c60_1
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    else
                        int128_t var_b60_1 = zmm5[0].o
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        arg15 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        zmm2[0].o = arg17
                        
                        if (zmm2[0].o f>= 1f)
                            arg8 = _mm256_blendv_ps(var_d00.32, arg15, arg9)
                            zmm0 = _mm256_blendv_ps(var_c20_1, arg15, arg9)
                            var_8e0 = zmm0
                            arg9 = var_d40_1
                            arg6 = var_ce0_1
                            zmm2[0].o = var_ac0[0].o
                            arg5 = var_c60_1
                            zmm5[0].o = var_b60_1
                            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        else
                            var_920.32 = arg10
                            int32_t var_6c0_2[0x8] = arg13
                            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
                            arg8 = zmm4
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
                            arg6 = var_640.32
                            zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                            arg6[0].o = _mm256_extractf128_ps(var_d80_1[0].o, 1)
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, arg5[0].o)
                            arg6[0].o = _mm256_extractf128_ps(var_d60[0].o, 1)
                            var_d80_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60[0].o, zmm2[0].o)
                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                            var_d60[0].o = data_143442a20
                            zmm1[0].o = var_d60[0].o
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_d60[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_d60[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                            var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, var_d60[0].o)
                            var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_d60[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(arg5, var_d60[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm2 = data_143442a40
                            arg11 = _mm256_and_ps(zmm0, zmm2)
                            arg13 = _mm256_and_ps(zmm1, zmm2)
                            zmm0 = _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                _mm256_cvtepi32_ps(arg15), var_440_1))
                            zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                            zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
                            var_c00.32 = arg15
                            arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                            arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm0[0].o = zx.o(0)
                            zmm0 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                            double var_a60_1[0x4] = zmm0
                            var_c80 = arg6[0].o
                            int32_t var_8e0_1[0x4] = arg12[0].o
                            
                            if (arg16 s< 0x100)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                arg8[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                arg15[0].o = zmm2[0].o
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                char r14_3 = temp0_257.b
                                int128_t var_470
                                zmm2[0].o = var_470
                                zmm5 = var_460_1
                                
                                if ((r14_3 & 1) != 0)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0]), 0)
                                
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                
                                if ((r14_3 & 2) != 0)
                                    uint32_t rax_45 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_45, 1)
                                
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                int64_t temp0_338[0x2] =
                                    __vextractf128_memdq_ymmdq_immb(arg11[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                                
                                if ((r14_3 & 4) == 0)
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_338)
                                    
                                    if ((r14_3 & 8) != 0)
                                        goto label_1401e307b
                                    
                                    goto label_1401e28ed
                                
                                var_d60[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*var_d60[0].q), 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_338)
                                
                                if ((r14_3 & 8) != 0)
                                label_1401e307b:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    uint32_t rax_79 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_79, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                    
                                    if ((r14_3 & 0x10) == 0)
                                        goto label_1401e28fd
                                    
                                    goto label_1401e30a7
                                
                            label_1401e28ed:
                                zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                
                                if ((r14_3 & 0x10) != 0)
                                label_1401e30a7:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0]), 4)
                                    
                                    if ((r14_3 & 0x20) != 0)
                                    label_1401e30bc:
                                        uint32_t rax_83 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_83, 5)
                                        
                                        if ((r14_3 & 0x40) == 0)
                                            goto label_1401e2914
                                        
                                        goto label_1401e30ce
                                else
                                label_1401e28fd:
                                    
                                    if ((r14_3 & 0x20) != 0)
                                        goto label_1401e30bc
                                
                                int32_t var_a20_1[0x8]
                                
                                if ((r14_3 & 0x40) != 0)
                                label_1401e30ce:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    var_a20_1 = arg11
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401e30f3:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint32_t rax_87 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_87, 7)
                                else
                                label_1401e2914:
                                    var_a20_1 = arg11
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401e30f3
                                
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm0 = zmm5
                                arg14[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                var_d60[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                                arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                var_d60[0].o ^= arg6[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                zmm5[0].o ^= arg6[0].o
                                zmm5 = _mm256_insertf128_ps(zmm5, var_d60[0].o, 1)
                                zmm4 = _mm256_and_ps(arg9, zmm5)
                                bool cond:81_1 = _mm256_movemask_ps(zmm4) == 0
                                var_470 = zmm2[0].o
                                var_780[0].o = arg8[0].o
                                var_5c0.32 = zmm5
                                
                                if (cond:81_1)
                                    arg10 = zmm0
                                    arg11 = var_a20_1
                                else
                                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                                    arg5[0].o ^= arg6[0].o
                                    arg10 = zmm0
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    zmm1[0].o ^= arg6[0].o
                                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                    zmm0 = var_c00.32
                                    arg11 = arg12
                                    arg12 = _mm256_blendv_ps(arg12, zmm0, zmm1)
                                    arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                                    zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg8[0].o, var_c80)
                                    zmm5[0].o ^= arg5[0].o
                                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                    arg6[0].o ^= arg5[0].o
                                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                    zmm1 = _mm256_and_ps(zmm1, zmm5)
                                    arg6 = _mm256_and_ps(arg9, zmm1)
                                    int32_t j = _mm256_movemask_ps(arg6)
                                    
                                    if (j == 0)
                                        arg11 = var_a20_1
                                    else
                                        arg5 = _mm256_insertf128_ps(zmm4, arg8[0].o, 1)
                                        zmm5 = arg11
                                        arg11 = var_a20_1
                                        
                                        do
                                            zmm4 = arg5
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                                            arg8[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                                            arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                                            char temp0_378 = _mm256_movemask_ps(arg6)
                                            
                                            if ((temp0_378 & 1) == 0)
                                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                                arg7[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                                
                                                if ((temp0_378 & 2) != 0)
                                                    goto label_1401e2b2a
                                                
                                                goto label_1401e2a96
                                            
                                            int128_t var_ba0
                                            zmm2[0].o = var_ba0
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 0)
                                            var_ba0 = zmm2[0].o
                                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                            
                                            if ((temp0_378 & 2) != 0)
                                            label_1401e2b2a:
                                                uint32_t rax_54 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                zmm2[0].o = var_ba0
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_54, 1)
                                                var_ba0 = zmm2[0].o
                                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, 
                                                    arg6[0].o)
                                                
                                                if ((temp0_378 & 4) == 0)
                                                    goto label_1401e2aa9
                                                
                                                goto label_1401e2b57
                                            
                                        label_1401e2a96:
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                                            arg6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                                            
                                            if ((temp0_378 & 4) == 0)
                                            label_1401e2aa9:
                                                arg7[0].o =
                                                    __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, temp0_338)
                                                
                                                if ((temp0_378 & 8) != 0)
                                                    goto label_1401e2b8f
                                                
                                                goto label_1401e2abc
                                            
                                        label_1401e2b57:
                                            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = var_ba0
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm2[0].q), 2)
                                            var_ba0 = zmm2[0].o
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, temp0_338)
                                            
                                            if ((temp0_378 & 8) != 0)
                                            label_1401e2b8f:
                                                zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                uint32_t rax_58 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                zmm2[0].o = var_ba0
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_58, 3)
                                                var_ba0 = zmm2[0].o
                                                arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                                
                                                if ((temp0_378 & 0x10) == 0)
                                                    goto label_1401e2acc
                                                
                                                goto label_1401e2bcd
                                            
                                        label_1401e2abc:
                                            arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                            uint16_t rax_62[0x2]
                                            
                                            if ((temp0_378 & 0x10) != 0)
                                            label_1401e2bcd:
                                                arg6[0].o = var_ba0
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, zx.d(*arg5[0].q), 4)
                                                arg7[0].o = zx.o(0)
                                                
                                                if ((temp0_378 & 0x20) != 0)
                                                    rax_62 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg6[0].o, rax_62, 5)
                                            else
                                            label_1401e2acc:
                                                arg7[0].o = zx.o(0)
                                                arg6[0].o = var_ba0
                                                
                                                if ((temp0_378 & 0x20) != 0)
                                                    rax_62 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg6[0].o, rax_62, 5)
                                            
                                            if ((temp0_378 & 0x40) != 0)
                                                zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, zx.d(*zmm2[0].q), 6)
                                                
                                                if (temp0_378 s< 0)
                                                label_1401e2a2c:
                                                    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                    uint16_t rax_50[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg6[0].o, rax_50, 7)
                                            else if (temp0_378 s< 0)
                                                goto label_1401e2a2c
                                            
                                            var_ba0 = arg6[0].o
                                            zmm2[0].o = arg6[0].o & data_142fc92e0
                                            arg5[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                            arg5[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                                            arg5 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, arg5[0].o, 1), zmm1)
                                            arg6[0].o = zx.o(0)
                                            zmm2 = _mm256_and_ps(arg5, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm2) != j)
                                                arg6 = _mm256_xor_ps(arg5, zmm1)
                                            
                                            arg12 = _mm256_blendv_ps(arg12, zmm5, arg5)
                                            zmm5[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                            zmm1[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                                            zmm2[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                            arg5 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                            zmm1[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_c80)
                                            zmm1[0].o ^= zmm5[0].o
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                            zmm2[0].o ^= zmm5[0].o
                                            zmm1 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, zmm1[0].o, 1), arg6)
                                            arg6 = _mm256_and_ps(zmm1, arg9)
                                            j = _mm256_movemask_ps(arg6)
                                            zmm5 = zmm4
                                        while (j != 0)
                                
                                zmm0 = var_5c0.32
                                zmm1 = _mm256_andnot_ps(zmm0, arg9)
                                
                                if (_mm256_movemask_ps(zmm1) != 0)
                                    zmm2 = __vxorps_ymmqq_ymmqq_memqq(zmm0, var_a60_1)
                                    arg12 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg12, 
                                        data_142fc9440, zmm2)
                                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_780[0].o)
                                    arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1)
                                    zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                    zmm4 = _mm256_and_ps(_mm256_insertf128_ps(zmm5, zmm4[0].o, 1), 
                                        zmm2)
                                    arg6 = _mm256_and_ps(zmm4, arg9)
                                    int32_t j_1 = _mm256_movemask_ps(arg6)
                                    
                                    if (j_1 != 0)
                                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                        
                                        do
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                                            arg5 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                            char temp0_564 = _mm256_movemask_ps(arg6)
                                            int128_t var_530
                                            uint32_t rax_110
                                            
                                            if ((temp0_564 & 1) != 0)
                                                zmm2[0].o = var_530
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*arg5[0].q), 0)
                                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                                arg7[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                                
                                                if ((temp0_564 & 2) != 0)
                                                    rax_110 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_110, 1)
                                            else
                                                zmm2[0].o = var_530
                                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                                arg7[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                                
                                                if ((temp0_564 & 2) != 0)
                                                    rax_110 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_110, 1)
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                                            arg6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                                            
                                            if ((temp0_564 & 4) == 0)
                                                arg7[0].o =
                                                    __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, temp0_338)
                                                
                                                if ((temp0_564 & 8) != 0)
                                                    goto label_1401e325e
                                                
                                                goto label_1401e33ba
                                            
                                            zmm0[0].o = zmm2[0].o
                                            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = zmm0[0].o
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, zx.d(*zmm2[0].q), 2)
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, temp0_338)
                                            
                                            if ((temp0_564 & 8) != 0)
                                            label_1401e325e:
                                                zmm0[0].o = zmm2[0].o
                                                zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                int64_t rax_97 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm2[0].o = zmm0[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm0[0].o, zx.d(*rax_97), 3)
                                                arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                                
                                                if ((temp0_564 & 0x10) == 0)
                                                    goto label_1401e33ca
                                                
                                                goto label_1401e3292
                                            
                                        label_1401e33ba:
                                            arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                            
                                            if ((temp0_564 & 0x10) == 0)
                                            label_1401e33ca:
                                                arg7[0].o = zx.o(0)
                                                
                                                if ((temp0_564 & 0x20) != 0)
                                                    goto label_1401e32ab
                                                
                                                goto label_1401e33d8
                                            
                                        label_1401e3292:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 4)
                                            arg7[0].o = zx.o(0)
                                            
                                            if ((temp0_564 & 0x20) != 0)
                                            label_1401e32ab:
                                                uint32_t rax_102 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_102, 5)
                                                
                                                if ((temp0_564 & 0x40) == 0)
                                                    goto label_1401e33e2
                                                
                                                goto label_1401e32bd
                                            
                                        label_1401e33d8:
                                            
                                            if ((temp0_564 & 0x40) != 0)
                                            label_1401e32bd:
                                                zmm0[0].o = zmm2[0].o
                                                zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                zmm2[0].o = zmm0[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm0[0].o, zx.d(*zmm2[0].q), 6)
                                                
                                                if (temp0_564 s< 0)
                                                label_1401e32e1:
                                                    zmm0[0].o = zmm2[0].o
                                                    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                    int64_t rax_105 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                    zmm2[0].o = zmm0[0].o
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm0[0].o, zx.d(*rax_105), 7)
                                            else
                                            label_1401e33e2:
                                                
                                                if (temp0_564 s< 0)
                                                    goto label_1401e32e1
                                            
                                            var_530 = zmm2[0].o
                                            zmm2[0].o &= data_142fc92e0
                                            arg5[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                            arg5[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                                            arg6[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                            arg5[0].o ^= arg6[0].o
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                                            zmm2[0].o ^= arg6[0].o
                                            arg6 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, arg5[0].o, 1), zmm4)
                                            arg5[0].o = zx.o(0)
                                            zmm2 = _mm256_and_ps(arg6, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm2) != j_1)
                                                arg5 = _mm256_xor_ps(arg6, zmm4)
                                            
                                            arg12 = _mm256_blendv_ps(arg12, zmm1, arg6)
                                            zmm4[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                            zmm2[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                                            zmm4[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                            zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                            zmm4[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                                            zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                            zmm4 = _mm256_and_ps(zmm2, arg5)
                                            arg6 = _mm256_and_ps(zmm4, arg9)
                                            j_1 = _mm256_movemask_ps(arg6)
                                        while (j_1 != 0)
                                
                                arg14 = var_9a0.32
                                arg10 = var_920.32
                                arg6 = var_c20_1
                                zmm0 = var_d00.32
                                arg8 = _mm256_blendv_ps(zmm0, arg12, arg9)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                int128_t var_6f0
                                uint32_t rax_115
                                
                                if ((r14_3 & 1) != 0)
                                    zmm2[0].o = var_6f0
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 0)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((r14_3 & 2) != 0)
                                        rax_115 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_115, 1)
                                else
                                    zmm2[0].o = var_6f0
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((r14_3 & 2) != 0)
                                        rax_115 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_115, 1)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                                
                                if ((r14_3 & 4) == 0)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_338)
                                    
                                    if ((r14_3 & 8) != 0)
                                        goto label_1401e372c
                                    
                                    goto label_1401e353e
                                
                                zmm5[0].o = zmm2[0].o
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = zmm5[0].o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                    zx.d(*zmm2[0].q), 2)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_338)
                                
                                if ((r14_3 & 8) != 0)
                                label_1401e372c:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_126 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_126, 3)
                                    zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                    
                                    if ((r14_3 & 0x10) == 0)
                                        goto label_1401e354e
                                    
                                    goto label_1401e3758
                                
                            label_1401e353e:
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                int128_t var_5a0
                                
                                if ((r14_3 & 0x10) == 0)
                                label_1401e354e:
                                    zmm4[0].o = var_5a0
                                    
                                    if ((r14_3 & 0x20) != 0)
                                        goto label_1401e3776
                                    
                                    goto label_1401e3561
                                
                            label_1401e3758:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                zmm4[0].o = var_5a0
                                
                                if ((r14_3 & 0x20) != 0)
                                label_1401e3776:
                                    uint32_t rax_130 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_130, 5)
                                    
                                    if ((r14_3 & 0x40) == 0)
                                        goto label_1401e356b
                                    
                                    goto label_1401e3788
                                
                            label_1401e3561:
                                
                                if ((r14_3 & 0x40) != 0)
                                label_1401e3788:
                                    arg5[0].o = zmm2[0].o
                                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm2[0].o = arg5[0].o
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm2[0].q), 6)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401e37ac:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        uint32_t rax_134 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_134, 7)
                                else
                                label_1401e356b:
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401e37ac
                                
                                var_6f0 = zmm2[0].o
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg5 = _mm256_blendv_ps(arg6, zmm0, arg9)
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_c80)
                                zmm2 = var_c00.32
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                                zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg9)
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    arg5 = _mm256_blendv_ps(arg5, zmm2, zmm0)
                                
                                arg9 = var_d40_1
                                zmm5[0].o = var_b60_1
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                var_8e0 = arg5
                                
                                if ((r14_3 & 1) != 0)
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm0[0]), 0)
                                
                                arg13[0].o = data_142fc95c0
                                arg6[0].o = arg13[0].o
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                
                                if ((r14_3 & 2) != 0)
                                    uint32_t rax_120 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_120, 1)
                                
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                                
                                if ((r14_3 & 4) != 0)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm2[0].q), 2)
                                
                                arg11[0].o = arg6[0].o
                                arg6 = var_ce0_1
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_338)
                                
                                if ((r14_3 & 8) == 0)
                                    zmm0 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                    
                                    if ((r14_3 & 0x10) != 0)
                                        goto label_1401e37f1
                                    
                                    goto label_1401e3694
                                
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint32_t rax_136 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_136, 3)
                                zmm0 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                
                                if ((r14_3 & 0x10) != 0)
                                label_1401e37f1:
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm0[0]), 4)
                                    zmm1[0].o = var_6f0
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if ((r14_3 & 0x20) == 0)
                                        goto label_1401e36af
                                    
                                    goto label_1401e3817
                                
                            label_1401e3694:
                                zmm1[0].o = var_6f0
                                zmm1[0].o &= data_142fc92e0
                                
                                if ((r14_3 & 0x20) == 0)
                                label_1401e36af:
                                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                    
                                    if ((r14_3 & 0x40) != 0)
                                        goto label_1401e382e
                                    
                                    goto label_1401e36be
                                
                            label_1401e3817:
                                uint16_t rax_140[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_140, 5)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                
                                if ((r14_3 & 0x40) == 0)
                                label_1401e36be:
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401e384e:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint16_t rax_144[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_144, 7)
                                else
                                label_1401e382e:
                                    arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*arg5[0].q), 6)
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401e384e
                                
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                var_5a0 = zmm4[0].o
                                zmm1[0].o = zmm4[0].o & data_142fc92e0
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            else
                                arg15[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                var_d80_1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, arg5[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                char rdi_7 = temp0_257.b
                                int128_t var_580
                                int64_t rax_65
                                
                                if ((rdi_7 & 1) != 0)
                                    zmm0[0].o = var_580
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 0)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                    
                                    if ((rdi_7 & 2) != 0)
                                        rax_65 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_65, 1)
                                else
                                    zmm0[0].o = var_580
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                    
                                    if ((rdi_7 & 2) != 0)
                                        rax_65 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_65, 1)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                arg8[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                                
                                if ((rdi_7 & 4) == 0)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                    
                                    if ((rdi_7 & 8) != 0)
                                        goto label_1401e312a
                                    
                                    goto label_1401e2cef
                                
                                var_d60[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *var_d60[0].q, 2)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                
                                if ((rdi_7 & 8) != 0)
                                label_1401e312a:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_89 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_89, 3)
                                    zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                    
                                    if ((rdi_7 & 0x10) == 0)
                                        goto label_1401e2cff
                                    
                                    goto label_1401e3150
                                
                            label_1401e2cef:
                                zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                
                                if ((rdi_7 & 0x10) == 0)
                                label_1401e2cff:
                                    
                                    if ((rdi_7 & 0x20) != 0)
                                        goto label_1401e315f
                                    
                                    goto label_1401e2d09
                                
                            label_1401e3150:
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                                
                                if ((rdi_7 & 0x20) != 0)
                                label_1401e315f:
                                    int64_t rax_91 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_91, 5)
                                    
                                    if ((rdi_7 & 0x40) == 0)
                                        goto label_1401e2d13
                                    
                                    goto label_1401e3174
                                
                            label_1401e2d09:
                                
                                if ((rdi_7 & 0x40) != 0)
                                label_1401e3174:
                                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401e318d:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_93 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_93, 7)
                                else
                                label_1401e2d13:
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401e318d
                                
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm1[0].o = _mm256_extractf128_ps(var_460_1[0].o, 1)
                                var_d60[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                var_d60[0].o ^= arg7[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_460_1[0].o)
                                zmm5[0].o ^= arg7[0].o
                                zmm5 = _mm256_insertf128_ps(zmm5, var_d60[0].o, 1)
                                zmm4 = _mm256_and_ps(arg9, zmm5)
                                bool cond:82_1 = _mm256_movemask_ps(zmm4) == 0
                                var_580 = zmm0[0].o
                                int32_t var_5c0_1[0x4] = arg15[0].o
                                var_ca0.32 = zmm5
                                
                                if (not(cond:82_1))
                                    int32_t var_a20_2[0x8] = arg11
                                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                    arg5[0].o ^= arg7[0].o
                                    zmm2[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_460_1[0].o)
                                    zmm2[0].o ^= arg7[0].o
                                    zmm4 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    arg11 = arg12
                                    zmm5[0].o = arg6[0].o
                                    arg6 = var_c00.32
                                    arg12 = _mm256_blendv_ps(arg12, arg6, zmm4)
                                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                                    arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                                    zmm5[0].o ^= zmm0[0].o
                                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                                    arg6[0].o ^= zmm0[0].o
                                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                    arg15 = _mm256_and_ps(zmm4, zmm5)
                                    arg7 = _mm256_and_ps(arg9, arg15)
                                    int32_t j_2 = _mm256_movemask_ps(arg7)
                                    
                                    if (j_2 == 0)
                                        arg11 = var_a20_2
                                    else
                                        arg5 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                        zmm5 = arg11
                                        arg11 = var_a20_2
                                        
                                        do
                                            zmm4 = arg5
                                            arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                            arg5[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, 
                                                arg5[0].o)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                                            arg5 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                                            char temp0_466 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_466 & 1) == 0)
                                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                                zmm2[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                                
                                                if ((temp0_466 & 2) != 0)
                                                    goto label_1401e2efb
                                                
                                                goto label_1401e2e87
                                            
                                            zmm0[0].o = var_9c0
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *arg5[0].q, 0)
                                            var_9c0 = zmm0[0].o
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                            
                                            if ((temp0_466 & 2) != 0)
                                            label_1401e2efb:
                                                int64_t rax_70 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                zmm0[0].o = var_9c0
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_70, 1)
                                                var_9c0 = zmm0[0].o
                                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, 
                                                    arg7[0].o)
                                                
                                                if ((temp0_466 & 4) == 0)
                                                    goto label_1401e2e99
                                                
                                                goto label_1401e2f2a
                                            
                                        label_1401e2e87:
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
                                            
                                            if ((temp0_466 & 4) == 0)
                                            label_1401e2e99:
                                                zmm2[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                                
                                                if ((temp0_466 & 8) != 0)
                                                    goto label_1401e2f59
                                                
                                                goto label_1401e2ea6
                                            
                                        label_1401e2f2a:
                                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm0[0].o = var_9c0
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm0[0], 2)
                                            var_9c0 = zmm0[0].o
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                            
                                            if ((temp0_466 & 8) != 0)
                                            label_1401e2f59:
                                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                int64_t rax_72 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm0[0].o = var_9c0
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_72, 3)
                                                var_9c0 = zmm0[0].o
                                                arg5 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                                                
                                                if ((temp0_466 & 0x10) == 0)
                                                    goto label_1401e2eb5
                                                
                                                goto label_1401e2f90
                                            
                                        label_1401e2ea6:
                                            arg5 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                                            uint16_t* rax_74
                                            
                                            if ((temp0_466 & 0x10) != 0)
                                            label_1401e2f90:
                                                arg7[0].o = var_9c0
                                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg7[0].o, *arg5[0].q, 4)
                                                zmm2[0].o = zx.o(0)
                                                
                                                if ((temp0_466 & 0x20) != 0)
                                                    rax_74 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_74, 5)
                                            else
                                            label_1401e2eb5:
                                                zmm2[0].o = zx.o(0)
                                                arg7[0].o = var_9c0
                                                
                                                if ((temp0_466 & 0x20) != 0)
                                                    rax_74 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_74, 5)
                                            
                                            if ((temp0_466 & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg7[0].o, *zmm0[0], 6)
                                                
                                                if (temp0_466 s< 0)
                                                label_1401e2e28:
                                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                    uint16_t* rax_68 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_68, 7)
                                            else if (temp0_466 s< 0)
                                                goto label_1401e2e28
                                            
                                            zmm0[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                                            var_9c0 = arg7[0].o
                                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg7[0].q)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, 
                                                var_460_1[0].o)
                                            arg5 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, zmm0[0].o, 1), arg15)
                                            zmm2[0].o = zx.o(0)
                                            zmm0 = _mm256_and_ps(arg5, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm0) != j_2)
                                                zmm2 = _mm256_xor_ps(arg5, arg15)
                                            
                                            arg12 = _mm256_blendv_ps(arg12, zmm5, arg5)
                                            arg7[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                            zmm0[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                                            zmm5[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                                            arg5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_c80)
                                            zmm0[0].o ^= arg7[0].o
                                            zmm5[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_c00)
                                            zmm5[0].o ^= arg7[0].o
                                            zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            arg15 = _mm256_and_ps(zmm0, zmm2)
                                            arg7 = _mm256_and_ps(arg15, arg9)
                                            j_2 = _mm256_movemask_ps(arg7)
                                            zmm5 = zmm4
                                        while (j_2 != 0)
                                
                                zmm0 = var_ca0.32
                                zmm2 = _mm256_andnot_ps(zmm0, arg9)
                                
                                if (_mm256_movemask_ps(zmm2) == 0)
                                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                else
                                    zmm0 = __vxorps_ymmqq_ymmqq_memqq(zmm0, var_a60_1)
                                    arg12 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg12, 
                                        data_142fc9440, zmm0)
                                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_5c0_1)
                                    arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_8e0_1)
                                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                    zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                    zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                    arg15 = _mm256_and_ps(zmm4, zmm0)
                                    arg6 = _mm256_and_ps(arg15, arg9)
                                    int32_t j_3 = _mm256_movemask_ps(arg6)
                                    
                                    if (j_3 != 0)
                                        zmm4 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                        
                                        do
                                            zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                            zmm2[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, 
                                                zmm0[0].o)
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                                            arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                            char temp0_700 = _mm256_movemask_ps(arg6)
                                            
                                            if ((temp0_700 & 1) == 0)
                                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                                zmm2[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                                
                                                if ((temp0_700 & 2) != 0)
                                                    goto label_1401e39db
                                                
                                                goto label_1401e3963
                                            
                                            int128_t var_b00
                                            zmm0[0].o = var_b00
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *arg5[0].q, 0)
                                            var_b00 = zmm0[0].o
                                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                            
                                            if ((temp0_700 & 2) != 0)
                                            label_1401e39db:
                                                int64_t rax_149 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                zmm0[0].o = var_b00
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_149, 1)
                                                var_b00 = zmm0[0].o
                                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, 
                                                    arg6[0].o)
                                                
                                                if ((temp0_700 & 4) == 0)
                                                    goto label_1401e3975
                                                
                                                goto label_1401e3a0a
                                            
                                        label_1401e3963:
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            arg6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                                            
                                            if ((temp0_700 & 4) == 0)
                                            label_1401e3975:
                                                zmm2[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                                
                                                if ((temp0_700 & 8) != 0)
                                                    goto label_1401e3a39
                                                
                                                goto label_1401e3982
                                            
                                        label_1401e3a0a:
                                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm0[0].o = var_b00
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm0[0], 2)
                                            var_b00 = zmm0[0].o
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                            
                                            if ((temp0_700 & 8) != 0)
                                            label_1401e3a39:
                                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                int64_t rax_151 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm0[0].o = var_b00
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_151, 3)
                                                var_b00 = zmm0[0].o
                                                arg5 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                                                
                                                if ((temp0_700 & 0x10) == 0)
                                                    goto label_1401e3991
                                                
                                                goto label_1401e3a70
                                            
                                        label_1401e3982:
                                            arg5 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                                            int64_t rax_153
                                            
                                            if ((temp0_700 & 0x10) != 0)
                                            label_1401e3a70:
                                                zmm2[0].o = var_b00
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg5[0].q, 4)
                                                
                                                if ((temp0_700 & 0x20) != 0)
                                                    rax_153 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_153, 5)
                                            else
                                            label_1401e3991:
                                                zmm2[0].o = var_b00
                                                
                                                if ((temp0_700 & 0x20) != 0)
                                                    rax_153 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_153, 5)
                                            
                                            if ((temp0_700 & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *zmm0[0], 6)
                                                
                                                if (temp0_700 s< 0)
                                                label_1401e3908:
                                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                    int64_t rax_147 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_147, 7)
                                            else if (temp0_700 s< 0)
                                                goto label_1401e3908
                                            
                                            zmm0[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                            var_b00 = zmm2[0].o
                                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                            arg5[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                            zmm0[0].o ^= arg5[0].o
                                            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, 
                                                var_460_1[0].o)
                                            zmm2[0].o ^= arg5[0].o
                                            arg5 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, zmm0[0].o, 1), arg15)
                                            zmm2[0].o = zx.o(0)
                                            zmm0 = _mm256_and_ps(arg5, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm0) != j_3)
                                                zmm2 = _mm256_xor_ps(arg5, arg15)
                                            
                                            arg12 = _mm256_blendv_ps(arg12, zmm4, arg5)
                                            arg5[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                            arg5[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                                            zmm4 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                            arg5[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                            arg15 = _mm256_and_ps(zmm0, zmm2)
                                            arg6 = _mm256_and_ps(arg15, arg9)
                                            j_3 = _mm256_movemask_ps(arg6)
                                        while (j_3 != 0)
                                
                                arg14 = var_9a0.32
                                arg6 = var_c20_1
                                zmm0 = _mm256_blendv_ps(var_d00.32, arg12, arg9)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg15 = zmm0
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, zmm0[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                
                                if ((rdi_7 & 1) == 0)
                                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                    
                                    if ((rdi_7 & 2) != 0)
                                        goto label_1401e3c0c
                                    
                                    goto label_1401e3b8e
                                
                                int128_t var_b10
                                zmm0[0].o = var_b10
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 0)
                                var_b10 = zmm0[0].o
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                
                                if ((rdi_7 & 2) != 0)
                                label_1401e3c0c:
                                    int64_t rax_156 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm0[0].o = var_b10
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_156, 1)
                                    var_b10 = zmm0[0].o
                                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                    
                                    if ((rdi_7 & 4) == 0)
                                        goto label_1401e3ba1
                                    
                                    goto label_1401e3c3c
                                
                            label_1401e3b8e:
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                
                                if ((rdi_7 & 4) == 0)
                                label_1401e3ba1:
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                    
                                    if ((rdi_7 & 8) != 0)
                                        goto label_1401e3c6c
                                    
                                    goto label_1401e3baf
                                
                            label_1401e3c3c:
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o = var_b10
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm0[0], 2)
                                var_b10 = zmm0[0].o
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                
                                if ((rdi_7 & 8) != 0)
                                label_1401e3c6c:
                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    int64_t rax_158 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = var_b10
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_158, 3)
                                    var_b10 = zmm0[0].o
                                    arg5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                    
                                    if ((rdi_7 & 0x10) == 0)
                                        goto label_1401e3bbf
                                    
                                    goto label_1401e3ca4
                                
                            label_1401e3baf:
                                arg5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                int128_t var_590
                                int64_t rax_160
                                
                                if ((rdi_7 & 0x10) != 0)
                                label_1401e3ca4:
                                    zmm2[0].o = var_b10
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 4)
                                    zmm4[0].o = var_590
                                    
                                    if ((rdi_7 & 0x20) != 0)
                                        rax_160 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_160, 5)
                                else
                                label_1401e3bbf:
                                    zmm2[0].o = var_b10
                                    zmm4[0].o = var_590
                                    
                                    if ((rdi_7 & 0x20) != 0)
                                        rax_160 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_160, 5)
                                
                                if ((rdi_7 & 0x40) != 0)
                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 6)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401e1bba:
                                        zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                        int64_t rax_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_10, 7)
                                else if (temp0_257.b s< 0)
                                    goto label_1401e1bba
                                
                                var_b10 = zmm2[0].o
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg5 = _mm256_blendv_ps(arg6, zmm0, arg9)
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_c80)
                                zmm2 = var_c00.32
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1 = _mm256_and_ps(zmm0, arg9)
                                
                                if (_mm256_movemask_ps(zmm1) != 0)
                                    arg5 = _mm256_blendv_ps(arg5, zmm2, zmm1)
                                
                                arg9 = var_d40_1
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, zmm0[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                var_8e0 = arg5
                                
                                if ((rdi_7 & 1) != 0)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 0)
                                
                                arg13[0].o = data_142fc95c0
                                arg6[0].o = arg13[0].o
                                arg10 = var_920.32
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                
                                if ((rdi_7 & 2) != 0)
                                    int64_t rax_163 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_163, 1)
                                
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm2[0].o)
                                
                                if ((rdi_7 & 4) != 0)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0].q, 2)
                                
                                arg11[0].o = arg6[0].o
                                arg6 = var_ce0_1
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                                
                                if ((rdi_7 & 8) != 0)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rax_165 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_165, 3)
                                
                                arg8 = arg15
                                zmm5[0].o = var_b60_1
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                
                                if ((rdi_7 & 0x10) == 0)
                                    zmm2[0].o = var_b10
                                    
                                    if ((rdi_7 & 0x20) != 0)
                                        goto label_1401e1bed
                                    
                                    goto label_1401e3e27
                                
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 4)
                                zmm2[0].o = var_b10
                                
                                if ((rdi_7 & 0x20) != 0)
                                label_1401e1bed:
                                    uint16_t* rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_12, 5)
                                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                    
                                    if ((rdi_7 & 0x40) == 0)
                                        goto label_1401e3e36
                                    
                                    goto label_1401e1c07
                                
                            label_1401e3e27:
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdi_7 & 0x40) != 0)
                                label_1401e1c07:
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = var_b10
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0].q, 6)
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401e1c2d:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint16_t* rax_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_14, 7)
                                else
                                label_1401e3e36:
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401e1c2d
                                
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                                var_590 = zmm4[0].o
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            
                            zmm2 = __vxorps_ymmqq_ymmqq_memqq(var_a60_1, var_a80)
                            arg5[0].o = zx.o(0)
                            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            
                            if (arg18 != 1)
                                arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                zmm4[0].o = data_142d3f5b0
                                arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                                zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                zmm0 = _mm256_sub_ps(var_1a0_1, _mm256_cvtepi32_ps(zmm0))
                                arg5 = _mm256_div_ps(zmm0, _mm256_cvtepi32_ps(zmm1))
                            
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm1 = _mm256_blendv_ps(zmm0, arg5, zmm2)
                            zmm2[0].o = var_ac0[0].o
                            arg5 = var_c60_1
                            arg13 = var_6c0_2
                    
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    var_6c0_1 =
                        _mm256_blendv_ps(arg13, zmm1, _mm256_insertf128_ps(arg10, zmm0[0].o, 1))
                    zmm1[0].o = var_bc0_1
                    arg13 = var_d80_1
            
            double var_c60_2[0x4] = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
            var_bc0_1.32 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg7[0].o, var_aa0_1[0].o)
            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            var_ac0 = zmm1
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
            zmm5 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
            var_ce0 = zmm5
            zmm0 = var_640.32
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            var_a60 = arg8
            arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            var_5c0 = zmm0[0].o
            var_920 = arg6[0].o
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
            zmm0[0].o = _mm256_extractf128_ps(var_d60[0].o, 1)
            var_a80[0].o = zmm0[0].o
            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
            double var_c20_2[0x4] = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_d60[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm0 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            var_ca0.32 = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            var_c80 = zmm0[0].o
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            zmm0 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
            var_c00.32 = zmm0
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg15 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm1[0].o = data_142d3f5b0
            zmm2[0].o = zmm1[0].o
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
            zmm0[0].o = arg10[0].o & not.o(zmm1[0].o)
            arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_b80)
            zmm4[0].o = var_cc0_1
            zmm1[0].o = zmm4[0].o & not.o(arg14[0].o)
            arg10[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
            bool cond:8_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            var_b60 = arg14[0].o
            double var_6e0[0x4]
            
            if (cond:8_1)
                arg12[0].o = zx.o(0)
                arg10[0].o = var_ae0[0].o
                arg8 = var_aa0_1
                arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            else
                zmm0 = var_b40_1
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                arg12[0].o = zx.o(0)
                var_d60[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_d60[0].o)
                zmm2[0].o &= arg10[0].o
                arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                bool cond:13_1 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0
                arg13[0].o = zx.o(0)
                
                if (not(cond:13_1))
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(var_ac0[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(var_c60_2[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c60_2[0].o, var_ac0[0].o)
                    zmm1 = var_ce0
                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0 = var_bc0_1.32
                    arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg11 = var_c00.32
                    arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg9 = var_c20_2
                    zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = data_1434426c0
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                    arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                    zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    zmm5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg9 = _mm256_blendv_ps(arg13, arg5, zmm5)
                    arg5[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                    arg6[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                    arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg13, zmm1, arg5)
                    int64_t r10_4 = arg9[0].q
                    int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t r14_4 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rcx_17 = r15_1 + r14_4
                    arg6 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg7 = _mm256_blendv_ps(arg13, arg6, arg5)
                    int64_t rbx_7 = zmm1[0].q
                    int32_t* rdx_13 = arg7[0].q
                    int64_t rsi_8 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    zmm1[0].o = *(rdx_13 + rcx_17)
                    arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    int64_t rdx_14 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    float* rax_168 = arg7[0].q
                    arg7 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    arg5 = _mm256_blendv_ps(arg13, arg7, arg5)
                    zmm4[0].o = *(arg5[0].q + rcx_17)
                    int64_t rcx_18 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    void* rdi_9 = r15_1 + r8_3
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_8 + rdi_9), 0x10)
                    void* rsi_9 = r15_1 + rbx_7
                    arg6 = _mm256_blendv_ps(arg13, arg6, zmm5)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_168 + rsi_9), 0x20)
                    float* rax_169 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_169 + rdi_9), 0x10)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg5[0].q + rsi_9), 0x20)
                    void* rax_171 = r15_1 + r10_4
                    int32_t* rsi_10 = arg6[0].q
                    zmm5 = _mm256_blendv_ps(arg13, arg7, zmm5)
                    arg7[0].o = *(rsi_10 + rax_171)
                    int32_t* rsi_11 = zmm5[0]
                    int64_t rdi_10 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = *(rsi_11 + rax_171)
                    void* rax_172 = r15_1 + rcx_18
                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg9 = var_d40_1
                    void* rsi_12 = r15_1 + r11_3
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_14 + rsi_12), 0x30)
                    int64_t rdx_15 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_15 + rax_172), 0x10)
                    int64_t rdx_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_10 + rsi_12), 0x30)
                    float* rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    double rdi_11 = zmm0[0]
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_13 + rax_172), 0x10)
                    void* rax_173 = r15_1 i+ rdi_11
                    arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg5[0].q + rax_173), 0x20)
                    arg12[0].o = zx.o(0)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(zmm5[0] + rax_173), 0x20)
                    void* rax_174 = r15_1 + rdx_16
                    int64_t rsi_16 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_16 + rax_174), 0x30)
                    float* rsi_17 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_17 + rax_174), 0x30)
                    zmm5[0].o = *(r15_1 + r10_4)
                    arg6[0].o = *(r15_1 + r14_4)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_1 + r8_3), 0x10)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_1 + rbx_7), 0x20)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_1 + r11_3), 0x30)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + rcx_18), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 i+ rdi_11), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + rdx_16), 0x30)
                    zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                    var_6a0.32 = _mm256_maskstore_ps(zmm2, zmm5)
                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    var_680.32 = _mm256_maskstore_ps(zmm2, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                    zmm4[0].o = var_cc0_1
                    var_660.32 = _mm256_maskstore_ps(zmm2, zmm0)
                
                arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                zmm1[0].o = var_d60[0].o ^ arg7[0].o
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg12[0].o, var_b40_1[0].o)
                zmm2[0].o ^= arg7[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                arg11[0].o = arg10[0].o & zmm1[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg11[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg11[0].o = data_142fc95c0
                    arg13 = var_d80_1
                    arg10[0].o = var_ae0[0].o
                    arg8 = var_aa0_1
                else
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0].q)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    arg6 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                    zmm1 = var_c40
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    arg8 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0 = _mm256_and_ps(arg8, arg6)
                    int32_t temp0_973 = _mm256_movemask_ps(zmm0)
                    zmm1[0].o = zx.o(0)
                    arg10 = arg15
                    arg9 = var_ca0.32
                    zmm4 = arg9
                    var_d00.32 = arg6
                    
                    if (temp0_973 != 0)
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm4[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        var_780 = zmm0
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                        zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        var_6e0 = zmm0
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm5, zmm0[0].o, 1), arg8)
                        zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                        arg14 = var_ac0
                        arg6[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        arg13 = var_c60_2
                        arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg12 = var_ce0
                        arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg5[0].o = arg11[0].o
                        arg11 = var_bc0_1.32
                        zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        zmm1 = var_c20_2
                        arg7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        zmm1 = var_c00.32
                        arg7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                        arg11[0].o = arg5[0].o
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm1[0].o = zx.o(0)
                        zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                        arg12[0].o = zx.o(0)
                        arg15 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg10, var_6e0, zmm5)
                        zmm2 = _mm256_blendv_ps(zmm1, zmm2, zmm5)
                        zmm4 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, var_780, zmm0)
                        zmm0 = _mm256_blendv_ps(zmm1, arg6, zmm0)
                        arg6 = var_d00.32
                        int64_t r8_4 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_19 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_8 = zmm2[0].q
                        zmm2[0].o = *(r15_1 + rcx_19)
                        int64_t rcx_20 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rdi_12 = zmm0[0]
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rax_177 = zmm0[0]
                        zmm0[0].o = *(r15_1 i+ rdi_12)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rcx_20), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 i+ rax_177), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rsi_18), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + r8_4), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rbx_8), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rdx_17), 0x30)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    
                    var_6a0.32 = _mm256_maskstore_ps(arg6, _mm256_blendv_ps(zmm1, zmm0, arg8))
                    zmm0 = var_c40
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg5[0].o = zmm0[0].o ^ zmm1[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                    zmm0[0].o ^= zmm1[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                    zmm1[0].o = arg11[0].o & zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_1038 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    uint32_t var_880[0x8]
                    uint32_t var_4a0[0x8]
                    
                    if (temp0_1038 == 0)
                        zmm2 = var_4a0
                        arg8 = var_aa0_1
                        arg9 = var_d40_1
                    else
                        if ((temp0_1038 & 1) != 0)
                            zmm0[0].o = *arg15[0].q
                            arg7 = _mm256_blend_ps(var_880, zmm0, 1)
                        else
                            arg7 = var_880
                        
                        arg9[0].o = data_1434426c0
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        var_780[0].o = arg5[0].o
                        
                        if ((temp0_1038 & 2) != 0)
                            int64_t rax_179 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_179, 0x10)
                            arg7 = _mm256_blend_ps(arg7, zmm1, 0xf)
                        
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        arg5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        var_6e0 = zmm5
                        
                        if ((temp0_1038 & 4) != 0)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *arg5[0].q, 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                        
                        zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                        
                        if ((temp0_1038 & 8) != 0)
                            int64_t rax_181 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_181, 0x30)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                        
                        var_880 = arg7
                        zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                        arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x50)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                        
                        if ((temp0_1038 & 0x10) != 0)
                            zmm0[0].o = *zmm4[0].q
                            arg14 = var_880
                            zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 1)
                            arg14 = _mm256_insertf128_ps(arg14, zmm0[0].o, 1)
                            var_880 = arg14
                        
                        zmm0[0].o = data_1434426c0
                        arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0xfa)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                        arg13[0].o = arg11[0].o
                        
                        if ((temp0_1038 & 0x20) != 0)
                            arg11 = zmm4
                            float* rax_183 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg8 = var_880
                            zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_183, 0x10)
                            var_880 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                        else
                            arg11 = zmm4
                        
                        zmm5 = _mm256_insertf128_ps(arg6, arg14[0].o, 1)
                        arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                        
                        if ((temp0_1038 & 0x40) != 0)
                            float* rax_184 = zmm1[0].q
                            arg6[0].o = _mm256_extractf128_ps(var_880[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_184, 0x20)
                            arg7 = _mm256_insertf128_ps(var_880, arg6[0].o, 1)
                            var_880 = arg7
                        
                        arg12[0].o = zx.o(0)
                        arg9 = var_d40_1
                        arg8 = var_aa0_1
                        arg6 = var_d00.32
                        arg11[0].o = arg13[0].o
                        arg15 = _mm256_blendv_ps(arg15, arg5, zmm0)
                        zmm4 = _mm256_blendv_ps(arg11, zmm5, zmm2)
                        
                        if (temp0_1038 s< 0)
                            int64_t rax_185 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1 = var_880
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_185, 0x30)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            var_880 = zmm1
                        
                        zmm2 = var_4a0
                        arg5[0].o = var_780[0].o
                        zmm5 = var_6e0
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm0[0].o ^= zmm1[0].o
                    zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    var_680.32 =
                        _mm256_maskstore_ps(arg6, __vandps_ymmqq_ymmqq_memqq(zmm0, var_880))
                    zmm0 = var_c40
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                    zmm5[0].o = zmm0[0].o ^ arg7[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm0[0].o ^= arg7[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o &= arg11[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_1095 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_1095 == 0)
                        arg15 = arg10
                        arg11[0].o = data_142fc95c0
                        arg13 = var_d80_1
                        zmm4[0].o = var_cc0_1
                        arg14[0].o = var_b60
                    else
                        if ((temp0_1095 & 1) == 0)
                            if ((temp0_1095 & 2) != 0)
                                goto label_1401e4bed
                            
                            goto label_1401e49a7
                        
                        zmm0[0].o = *arg15[0].q
                        zmm2 = _mm256_blend_ps(zmm2, zmm0, 1)
                        
                        if ((temp0_1095 & 2) != 0)
                        label_1401e4bed:
                            int64_t rax_189 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_189, 0x10)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            arg14[0].o = var_b60
                            
                            if ((temp0_1095 & 4) == 0)
                                goto label_1401e49ba
                            
                            goto label_1401e4c12
                        
                    label_1401e49a7:
                        arg14[0].o = var_b60
                        
                        if ((temp0_1095 & 4) == 0)
                        label_1401e49ba:
                            
                            if ((temp0_1095 & 8) != 0)
                                goto label_1401e4c33
                            
                            goto label_1401e49c4
                        
                    label_1401e4c12:
                        zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *zmm0[0], 0x20)
                        zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                        
                        if ((temp0_1095 & 8) != 0)
                        label_1401e4c33:
                            zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            int64_t rax_191 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_191, 0x30)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            arg11[0].o = data_142fc95c0
                            arg13 = var_d80_1
                            
                            if ((temp0_1095 & 0x10) == 0)
                                goto label_1401e49dc
                            
                            goto label_1401e4c68
                        
                    label_1401e49c4:
                        arg11[0].o = data_142fc95c0
                        arg13 = var_d80_1
                        
                        if ((temp0_1095 & 0x10) != 0)
                        label_1401e4c68:
                            zmm0[0].o = zx.o(*zmm4[0].q)
                            arg5 = zmm2
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 3)
                            zmm2 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            
                            if ((temp0_1095 & 0x20) != 0)
                            label_1401e4c90:
                                int64_t rax_193 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_193, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((temp0_1095 & 0x40) == 0)
                                    goto label_1401e49f0
                                
                                goto label_1401e4cb2
                        else
                        label_1401e49dc:
                            
                            if ((temp0_1095 & 0x20) != 0)
                                goto label_1401e4c90
                        
                        if ((temp0_1095 & 0x40) != 0)
                        label_1401e4cb2:
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            double rax_194 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_194, 0x20)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            arg15 = arg10
                            
                            if (temp0_1095 s< 0)
                            label_1401e4cdc:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                int64_t rax_195 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_195, 0x30)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        else
                        label_1401e49f0:
                            arg15 = arg10
                            
                            if (temp0_1095 s< 0)
                                goto label_1401e4cdc
                        
                        zmm4[0].o = var_cc0_1
                    
                    arg10[0].o = var_ae0[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm0[0].o ^= arg7[0].o
                    var_4a0 = zmm2
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm5[0].o, 1), zmm2)
                    var_660.32 = _mm256_maskstore_ps(arg6, zmm0)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
            zmm1[0].o = arg14[0].o ^ arg7[0].o
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
            zmm2[0].o ^= arg7[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm1[0].o = zmm4[0].o & not.o(zmm1[0].o)
            zmm0[0].o &= not.o(zmm2[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:16_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            var_d00 = zmm5[0].o
            
            if (cond:16_1)
                zmm2[0].o = var_920
            else
                arg5[0].o = arg10[0].o
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                zmm1[0].o = zmm0[0].o & not.o(arg10[0].o)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm1[0].o, var_8a0_1)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                float var_a20_4[0x8] = arg15
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg9 = var_ca0.32
                    arg10[0].o = arg5[0].o
                else
                    zmm5[0].o = zmm0[0].o ^ arg7[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                    zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_d20[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    float var_7c0_1[0x8] = zmm1
                    float var_7e0_1[0x8] = zmm1
                    float var_800_1[0x8] = zmm1
                    float var_820_1[0x8] = zmm1
                    float var_840_1[0x8] = zmm1
                    float var_860_1[0x8] = zmm1
                    zmm2 = var_c40
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    arg14 = _mm256_and_ps(zmm0, zmm1)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, var_9e0_1)
                    int32_t temp0_1121 = _mm256_movemask_ps(zmm0)
                    var_8a0_1.32 = zmm5
                    
                    if (temp0_1121 == 0)
                        arg11 = var_d60
                        zmm1 = var_c40
                    else
                        char rdi_13 = temp0_1121.b
                        float var_2c0[0x8]
                        
                        if ((rdi_13 & 1) != 0)
                            zmm1[0].o = *arg13[0].q
                            arg8 = _mm256_blend_ps(var_2c0, zmm1, 1)
                            zmm2 = var_d60
                            arg9[0].o = var_a80[0].o
                            
                            if ((rdi_13 & 2) != 0)
                            label_1401e4d2c:
                                float* rax_197 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_197, 0x10)
                                arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                        else
                            arg8 = var_2c0
                            zmm2 = var_d60
                            arg9[0].o = var_a80[0].o
                            
                            if ((rdi_13 & 2) != 0)
                                goto label_1401e4d2c
                        
                        arg7[0].o = data_1434426c0
                        
                        if ((rdi_13 & 4) != 0)
                            zmm1[0].o = var_c80
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *zmm1[0].q, 0x20)
                            arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                            
                            if ((rdi_13 & 8) != 0)
                            label_1401e502f:
                                zmm1[0].o = var_c80
                                float* rax_206 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_206, 0x30)
                                arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                                
                                if ((rdi_13 & 0x10) == 0)
                                    goto label_1401e4d64
                                
                                goto label_1401e5059
                        else if ((rdi_13 & 8) != 0)
                            goto label_1401e502f
                        
                        if ((rdi_13 & 0x10) != 0)
                        label_1401e5059:
                            zmm1[0].o = *zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 1)
                            arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                            arg6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdi_13 & 0x20) != 0)
                            label_1401e4d74:
                                int64_t rax_198 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_198, 0x10)
                                arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                        else
                        label_1401e4d64:
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                            arg6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdi_13 & 0x20) != 0)
                                goto label_1401e4d74
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_c80)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        
                        if ((rdi_13 & 0x40) != 0)
                            float* rax_199 = arg9[0].q
                            zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_199, 0x20)
                            arg8 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                        
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        arg7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        arg11 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                        
                        if (temp0_1121.b s< 0)
                            int64_t rax_200 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_200, 0x30)
                            arg8 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                        
                        double var_2e0[0x4]
                        zmm0 = var_2e0
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, data_1434426c0)
                        arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm1 = _mm256_blendv_ps(arg13, arg5, arg11)
                        var_800_1 = _mm256_maskstore_ps(arg14, arg8)
                        
                        if ((rdi_13 & 1) == 0)
                            arg5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            
                            if ((rdi_13 & 2) != 0)
                                goto label_1401e50ad
                            
                            goto label_1401e4e37
                        
                        arg5[0].o = *zmm1[0].q
                        zmm0 = _mm256_blend_ps(zmm0, arg5, 1)
                        arg5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        
                        if ((rdi_13 & 2) != 0)
                        label_1401e50ad:
                            int64_t rax_209 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_209, 0x10)
                            zmm0 = _mm256_blend_ps(zmm0, zmm4, 0xf)
                            arg6 = _mm256_blendv_ps(zmm2, arg5, zmm5)
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((rdi_13 & 4) == 0)
                                goto label_1401e4e4d
                            
                            goto label_1401e50da
                        
                    label_1401e4e37:
                        arg6 = _mm256_blendv_ps(zmm2, arg5, zmm5)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        
                        if ((rdi_13 & 4) == 0)
                        label_1401e4e4d:
                            
                            if ((rdi_13 & 8) != 0)
                                goto label_1401e50f0
                            
                            goto label_1401e4e5b
                        
                    label_1401e50da:
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm4[0].q, 0x20)
                        zmm0 = _mm256_blend_ps(zmm0, arg5, 0xf)
                        
                        if ((rdi_13 & 8) == 0)
                        label_1401e4e5b:
                            var_2c0 = arg8
                            
                            if ((rdi_13 & 0x10) != 0)
                            label_1401e4e6b:
                                arg5[0].o = *arg6[0].q
                                arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg5[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg5[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        else
                        label_1401e50f0:
                            int64_t rax_211 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_211, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, arg5, 0xf)
                            var_2c0 = arg8
                            
                            if ((rdi_13 & 0x10) != 0)
                                goto label_1401e4e6b
                        
                        arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg5[0].o = data_1434426c0
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        
                        if ((rdi_13 & 0x20) != 0)
                            int64_t rax_202 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_202, 0x10)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        
                        arg5[0].o = data_1434426c0
                        zmm2[0].o = arg5[0].o
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        
                        if ((rdi_13 & 0x40) != 0)
                            float* rax_203 = arg7[0].q
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_203, 0x20)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                        
                        arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg9, zmm4[0].o, 1)
                        
                        if (temp0_1121.b s< 0)
                            int64_t rax_204 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_204, 0x30)
                            arg7 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm0 = arg7
                        
                        arg12[0].o = zx.o(0)
                        arg9 = var_d40_1
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg13 = _mm256_blendv_ps(zmm1, zmm4, arg11)
                        arg11 = _mm256_blendv_ps(arg6, arg5, zmm5)
                        var_2e0 = zmm0
                        var_860_1 = _mm256_maskstore_ps(arg14, zmm0)
                        zmm1 = var_c40
                        arg8 = var_aa0_1
                        zmm4[0].o = var_cc0_1
                    
                    zmm2[0].o = var_d20[0].o
                    arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_143442a60)
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm1[0].o = arg6[0].o & not.o(arg15[0].o)
                    zmm0[0].o &= not.o(zmm1[0].o)
                    zmm1[0].o = zmm5[0].o & not.o(zmm2[0].o)
                    zmm1[0].o = zmm4[0].o & not.o(zmm1[0].o)
                    zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    char temp0_1205 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    zmm0 = var_8a0_1.32
                    arg8 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_ae0[0].o, 1)
                    arg9 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                    
                    if (temp0_1205 == 0)
                        zmm0 = var_aa0_1
                        zmm4[0].o = var_cc0_1
                    else
                        int32_t var_300[0x8]
                        
                        if ((temp0_1205 & 1) != 0)
                            zmm0[0].o = *arg13[0].q
                            arg10 = _mm256_blend_ps(var_300, zmm0, 1)
                            
                            if ((temp0_1205 & 2) != 0)
                            label_1401e5138:
                                float* rax_213 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_213, 0x10)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                        else
                            arg10 = var_300
                            
                            if ((temp0_1205 & 2) != 0)
                                goto label_1401e5138
                        
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        
                        if ((temp0_1205 & 4) != 0)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *arg5[0].q, 0x20)
                            arg10 = _mm256_blend_ps(arg10, zmm1, 0xf)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            
                            if ((temp0_1205 & 8) != 0)
                            label_1401e516a:
                                float* rax_214 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_214, 0x30)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                        else
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            
                            if ((temp0_1205 & 8) != 0)
                                goto label_1401e516a
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm4[0].o = arg6[0].o ^ zmm2[0].o
                        
                        if ((temp0_1205 & 0x10) != 0)
                            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            zmm1[0].o = zx.o(*arg11[0].q)
                            zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm1[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 3)
                            arg10 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                            arg14 = arg10
                        else
                            arg14 = arg10
                            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg10[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, data_1434426c0)
                        arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                        zmm2[0].o = zmm5[0].o ^ arg6[0].o
                        var_8a0_1.32 = arg8
                        
                        if ((temp0_1205 & 0x20) != 0)
                            int64_t rax_217 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_217, 0x10)
                            arg14 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                        
                        zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                        arg7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg15, var_d20[0].o, 1)
                        arg8 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        
                        if ((temp0_1205 & 0x40) != 0)
                            double rax_218 = zmm0[0]
                            zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_218, 0x20)
                            arg14 = _mm256_insertf128_ps(arg14, zmm2[0].o, 1)
                        
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg11[0].o, data_1434426c0)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                        zmm2 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                        arg15 = _mm256_insertf128_ps(arg12, arg6[0].o, 1)
                        arg10 = _mm256_and_ps(arg8, arg7)
                        
                        if (temp0_1205 s< 0)
                            int64_t rax_219 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg6[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_219, 0x30)
                            arg14 = _mm256_insertf128_ps(arg14, arg6[0].o, 1)
                        
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, data_1434426c0)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                        zmm5 = _mm256_blendv_ps(arg13, zmm2, arg15)
                        var_300 = arg14
                        var_7e0_1 = _mm256_maskstore_ps(arg10, arg14)
                        int32_t var_320[0x8]
                        
                        if ((temp0_1205 & 1) != 0)
                            zmm2[0].o = *zmm5[0]
                            arg13 = _mm256_blend_ps(var_320, zmm2, 1)
                        else
                            arg13 = var_320
                        
                        arg7[0].o = var_9c0
                        zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        arg6 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
                        
                        if ((temp0_1205 & 2) == 0)
                            zmm0 = _mm256_blendv_ps(arg11, zmm0, arg6)
                            arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            
                            if ((temp0_1205 & 4) != 0)
                                goto label_1401e54ba
                            
                            goto label_1401e5323
                        
                        int64_t rax_222 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *rax_222, 0x10)
                        arg13 = _mm256_blend_ps(arg13, zmm2, 0xf)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, arg6)
                        arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((temp0_1205 & 4) != 0)
                        label_1401e54ba:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *arg5[0].q, 0x20)
                            arg13 = _mm256_blend_ps(arg13, zmm2, 0xf)
                            zmm1[0].o = data_1434426c0
                            
                            if ((temp0_1205 & 8) == 0)
                                goto label_1401e5339
                            
                            goto label_1401e54d8
                        
                    label_1401e5323:
                        zmm1[0].o = data_1434426c0
                        
                        if ((temp0_1205 & 8) != 0)
                        label_1401e54d8:
                            int64_t rax_224 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *rax_224, 0x30)
                            arg13 = _mm256_blend_ps(arg13, zmm2, 0xf)
                            var_9c0 = arg7[0].o
                            
                            if ((temp0_1205 & 0x10) != 0)
                            label_1401e5349:
                                zmm2[0].o = *zmm0[0]
                                zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm2[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 1)
                                arg13 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                        else
                        label_1401e5339:
                            var_9c0 = arg7[0].o
                            
                            if ((temp0_1205 & 0x10) != 0)
                                goto label_1401e5349
                        
                        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        
                        if ((temp0_1205 & 0x20) == 0)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                            
                            if ((temp0_1205 & 0x40) != 0)
                                goto label_1401e552c
                            
                            goto label_1401e5389
                        
                        int64_t rax_225 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_225, 0x10)
                        arg13 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        
                        if ((temp0_1205 & 0x40) == 0)
                        label_1401e5389:
                            zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                            
                            if (temp0_1205 s< 0)
                            label_1401e5557:
                                int64_t rax_227 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_227, 0x30)
                                arg13 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                        else
                        label_1401e552c:
                            float* rax_226 = zmm4[0].q
                            zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_226, 0x20)
                            arg13 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                            
                            if (temp0_1205 s< 0)
                                goto label_1401e5557
                        
                        arg12[0].o = zx.o(0)
                        zmm1 = arg13
                        zmm4[0].o = var_cc0_1
                        arg8 = var_8a0_1.32
                        arg13 = _mm256_blendv_ps(zmm5, arg5, arg15)
                        arg11 = _mm256_blendv_ps(zmm0, zmm2, arg6)
                        var_320 = zmm1
                        var_840_1 = _mm256_maskstore_ps(arg10, zmm1)
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm0 = var_aa0_1
                    
                    arg8 = _mm256_and_ps(arg9, arg8)
                    arg9 = var_d40_1
                    arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm1 = var_c40
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9520)
                    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                    zmm2[0].o = zmm5[0].o & not.o(var_d20[0].o)
                    zmm2[0].o = zmm4[0].o & not.o(zmm2[0].o)
                    arg5[0].o = arg6[0].o & not.o(arg10[0].o)
                    zmm0[0].o &= not.o(arg5[0].o)
                    zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    char temp0_1303 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_1303 == 0)
                        arg6[0].o = zx.o(0)
                        arg11[0].o = data_142fc95c0
                        zmm5[0].o = data_1434426c0
                        arg13 = var_d80_1
                    else
                        float var_340[0x8]
                        
                        if ((temp0_1303 & 1) != 0)
                            zmm0[0].o = *arg13[0].q
                            arg5 = _mm256_blend_ps(var_340, zmm0, 1)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_1303 & 2) != 0)
                            label_1401e5596:
                                int64_t rax_229 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_229, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                        else
                            arg5 = var_340
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_1303 & 2) != 0)
                                goto label_1401e5596
                        
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        
                        if ((temp0_1303 & 4) != 0)
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *arg7[0].q, 0x20)
                            arg5 = _mm256_blend_ps(arg5, zmm2, 0xf)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_1303 & 8) != 0)
                            label_1401e55c8:
                                int64_t rax_230 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_230, 0x30)
                                arg5 = _mm256_blend_ps(arg5, zmm2, 0xf)
                        else
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_1303 & 8) != 0)
                                goto label_1401e55c8
                        
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg6[0].o ^= zmm1[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        
                        if ((temp0_1303 & 0x10) != 0)
                            zmm2[0].o = *arg11[0].q
                            arg9 = arg5
                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                        
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, data_1434426c0)
                        arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        zmm5[0].o ^= zmm1[0].o
                        
                        if ((temp0_1303 & 0x20) != 0)
                            int64_t rax_232 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_232, 0x10)
                            arg5 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        
                        arg14 = arg5
                        zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, data_1434426c0)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg10, var_d20[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        
                        if ((temp0_1303 & 0x40) != 0)
                            float* rax_233 = arg5[0].q
                            zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_233, 0x20)
                            arg14 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                        
                        int32_t var_360[0x8]
                        arg10 = var_360
                        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                        arg9 = _mm256_and_ps(zmm1, zmm0)
                        
                        if (temp0_1303 s< 0)
                            int64_t rax_234 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_234, 0x30)
                            arg14 = _mm256_insertf128_ps(arg14, zmm0[0].o, 1)
                        
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg12[0].o = zx.o(0)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        zmm4 = _mm256_blendv_ps(arg13, zmm4, zmm2)
                        var_340 = arg14
                        var_7c0_1 = _mm256_maskstore_ps(arg9, arg14)
                        
                        if ((temp0_1303 & 1) != 0)
                            zmm2[0].o = *zmm4[0].q
                            arg10 = _mm256_blend_ps(arg10, zmm2, 1)
                        
                        arg13[0].o = data_142fc95c0
                        zmm1[0].o = arg13[0].o
                        arg13 = var_d80_1
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg11[0].o, data_1434426c0)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        
                        if ((temp0_1303 & 2) == 0)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            
                            if ((temp0_1303 & 4) != 0)
                                goto label_1401e5d5b
                            
                            goto label_1401e5742
                        
                        float* rax_242 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_242, 0x10)
                        arg10 = _mm256_blend_ps(arg10, zmm2, 0xf)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        
                        if ((temp0_1303 & 4) != 0)
                        label_1401e5d5b:
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *zmm0[0], 0x20)
                            arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            zmm0 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                            
                            if ((temp0_1303 & 8) == 0)
                                goto label_1401e5758
                            
                            goto label_1401e5d88
                        
                    label_1401e5742:
                        zmm0 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        
                        if ((temp0_1303 & 8) == 0)
                        label_1401e5758:
                            zmm0 = _mm256_blendv_ps(arg11, zmm0, zmm2)
                            
                            if ((temp0_1303 & 0x10) != 0)
                                goto label_1401e5db5
                            
                            goto label_1401e5768
                        
                    label_1401e5d88:
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        float* rax_244 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_244, 0x30)
                        arg10 = _mm256_blend_ps(arg10, arg5, 0xf)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, zmm2)
                        
                        if ((temp0_1303 & 0x10) != 0)
                        label_1401e5db5:
                            zmm2[0].o = *zmm0[0]
                            arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 1)
                            arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                            zmm5[0].o = data_1434426c0
                            arg11[0].o = zmm1[0].o
                            
                            if ((temp0_1303 & 0x20) == 0)
                                goto label_1401e577e
                            
                            goto label_1401e5de1
                        
                    label_1401e5768:
                        zmm5[0].o = data_1434426c0
                        arg11[0].o = zmm1[0].o
                        
                        if ((temp0_1303 & 0x20) == 0)
                        label_1401e577e:
                            
                            if ((temp0_1303 & 0x40) != 0)
                                goto label_1401e5e03
                            
                            goto label_1401e5788
                        
                    label_1401e5de1:
                        int64_t rax_246 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_246, 0x10)
                        arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                        
                        if ((temp0_1303 & 0x40) == 0)
                        label_1401e5788:
                            
                            if (temp0_1303 s< 0)
                            label_1401e5e28:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_248 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_248, 0x30)
                                arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                        else
                        label_1401e5e03:
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            float* rax_247 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_247, 0x20)
                            arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                            
                            if (temp0_1303 s< 0)
                                goto label_1401e5e28
                        
                        var_360 = arg10
                        var_820_1 = _mm256_maskstore_ps(arg9, arg10)
                        arg6[0].o = zx.o(0)
                    
                    arg14[0].o = var_b60
                    zmm0[0].o = _mm256_extractf128_ps(var_ac0[0].o, 1)
                    zmm2 = var_c60_2
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_ac0[0].o)
                    arg10 = var_ce0
                    zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm4 = var_bc0_1.32
                    var_ac0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ac0[0].o, zmm2[0].o)
                    var_ac0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg10[0].o)
                    arg9 = var_c20_2
                    zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    arg10 = var_c00.32
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ac0[0].o, zmm5[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                    var_ac0[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(zmm2, var_ac0[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg6, zmm1, zmm2)
                    zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    var_ac0[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    zmm0 = _mm256_blendv_ps(arg6, zmm0, _mm256_insertf128_ps(var_ac0, zmm2[0].o, 1))
                    int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rcx_26 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rdx_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_9 = zmm1[0].q
                    double rdi_16 = zmm0[0]
                    int64_t rsi_21 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rax_236 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm1[0].o = zx.o(*(r15_1 + rcx_26))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + r8_5), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rbx_9), 2)
                    double rcx_27 = zmm0[0]
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rdx_18), 3)
                    zmm1[0].o = zx.o(*(r15_1 i+ rdi_16))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rsi_21), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 i+ rcx_27), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rax_236), 3)
                    zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    var_ac0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                    zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o = data_143442490
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    zmm5[0].o = data_143442480
                    zmm4[0].o &= zmm5[0].o
                    arg6[0].o = data_143442440
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    var_ac0[0].o &= zmm5[0].o
                    var_ac0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_ac0[0].o, arg6[0].o)
                    arg5 = _mm256_insertf128_ps(var_ac0, zmm4[0].o, 1)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(
                            __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), data_1434424a0), 
                            var_860_1), 
                        var_800_1)
                    zmm2 = _mm256_cvtepi32_ps(arg5)
                    arg5 = data_143442460
                    zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm2, arg5), var_840_1), var_7e0_1)
                    zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(_mm256_cvtepi32_ps(zmm0), arg5), 
                            var_820_1), 
                        var_7c0_1)
                    var_6a0.32 = _mm256_maskstore_ps(arg8, zmm1)
                    var_680.32 = _mm256_maskstore_ps(arg8, zmm2)
                    var_660.32 = _mm256_maskstore_ps(arg8, zmm0)
                    arg10[0].o = var_ae0[0].o
                    arg8 = var_aa0_1
                    zmm4[0].o = var_cc0_1
                    arg9 = var_ca0.32
                    zmm5[0].o = var_d00
                
                arg5 = var_d40_1
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm0[0].o, var_d20[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                zmm1[0].o ^= arg7[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                arg7[0].o = zmm0[0].o ^ zmm5[0].o
                zmm0[0].o = arg7[0].o & zmm1[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    zmm2[0].o = var_920
                    arg9 = arg5
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                else
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
                    zmm0[0].o = data_1434422d0
                    arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_b80)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm2[0].o = zmm4[0].o & not.o(arg15[0].o)
                    arg5[0].o = zmm1[0].o & not.o(zmm0[0].o)
                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0)
                        arg9 = var_d40_1
                    else
                        zmm1[0].o ^= arg6[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, arg10[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg15[0].o, 1)
                        arg13 = _mm256_and_ps(zmm0, zmm1)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        var_c40[0].o = _mm256_extractf128_ps(var_c40[0].o, 1)
                        var_c40[0].o = __vpslld_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        var_c40[0].o = __vpsrad_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm0, var_c40[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm1, arg13)
                        bool cond:48_1 = _mm256_movemask_ps(zmm0) == 0
                        int128_t var_8a0_2 = arg5[0].o
                        var_780[0].o = arg7[0].o
                        var_6e0[0].o = arg15[0].o
                        
                        if (cond:48_1)
                            zmm4[0].o = zx.o(0)
                        else
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm2[0].o = data_1434426b0
                            arg5[0].o = zmm2[0].o
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(var_a20_4[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a20_4[0].o, arg5[0].o)
                            arg5 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            zmm2[0].o = __vpmovzxwd_xmmdq_memq(var_8a0_2.q)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm5[0].o = var_8a0_2
                            zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                            zmm5 = _mm256_and_ps(zmm2, zmm1)
                            zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                            zmm4 = _mm256_blendv_ps(var_a20_4, arg5, zmm2)
                            var_a20_4 = zmm4
                            arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                            arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                            var_ca0.32 = _mm256_blendv_ps(arg9, zmm0, arg5)
                            arg10 = var_ac0
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg14 = var_c60_2
                            zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            arg15 = var_ce0
                            zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            arg7 = arg13
                            arg13 = var_bc0_1.32
                            arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                            arg9 = var_c20_2
                            arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm4[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
                            zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                            arg9 = var_c00.32
                            arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
                            arg13 = arg7
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
                            zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            zmm4[0].o = zx.o(0)
                            zmm2 = _mm256_blendv_ps(zmm4, zmm5, zmm2)
                            zmm0 = _mm256_blendv_ps(zmm4, zmm0, arg5)
                            int64_t rdx_19 = zmm2[0].q
                            int64_t r8_6 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t r10_5 = zmm2[0].q
                            int64_t rbx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            double rdi_17 = zmm0[0]
                            int64_t rsi_22 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            double rcx_28 = zmm0[0]
                            int64_t rax_240 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zx.o(*(r15_1 + rdx_19))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + r8_6), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + r10_5), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rbx_10), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 i+ rdi_17), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rsi_22), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 i+ rcx_28), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rax_240), 7)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                            arg5[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            arg5[0].o = var_8a0_2
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                        
                        arg9 = var_d40_1
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        var_6a0.32 = _mm256_maskstore_ps(arg13, _mm256_blendv_ps(zmm4, zmm0, zmm1))
                        zmm0 = var_c40
                        zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                        zmm1[0].o = zmm0[0].o ^ arg6[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                        zmm0[0].o ^= arg6[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        arg5[0].o &= zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_1569 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_1569 == 0)
                            arg8 = var_aa0_1
                            zmm4[0].o = var_cc0_1
                            arg14[0].o = var_b60
                            arg10 = var_ca0.32
                            arg11 = var_a20_4
                            arg15[0].o = var_6e0[0].o
                        else
                            int128_t var_540
                            int64_t rax_250
                            
                            if ((temp0_1569 & 1) != 0)
                                arg9 = var_a20_4
                                arg6[0].o = var_540
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg9[0].q, 0)
                                
                                if ((temp0_1569 & 2) != 0)
                                    rax_250 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_250, 1)
                            else
                                arg6[0].o = var_540
                                arg9 = var_a20_4
                                
                                if ((temp0_1569 & 2) != 0)
                                    rax_250 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_250, 1)
                            zmm4[0].o = var_cc0_1
                            arg10 = var_ca0.32
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            
                            if ((temp0_1569 & 4) != 0)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg5[0].q, 2)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_1569 & 8) != 0)
                                int64_t rax_252 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_252, 3)
                            
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_1569 & 0x10) != 0)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg10[0].q, 4)
                            
                            arg13[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm0[0].o = data_1434426b0
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                            arg15[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                            
                            if ((temp0_1569 & 0x20) != 0)
                                int64_t rax_254 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_254, 5)
                            
                            arg14[0].o = data_1434426b0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                            
                            if ((temp0_1569 & 0x40) != 0)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg13[0].q, 6)
                            
                            zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                            arg7 = _mm256_insertf128_ps(arg15, arg7[0].o, 1)
                            
                            if (temp0_1569 s< 0)
                                int64_t rax_256 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_256, 7)
                            
                            arg9 = var_d40_1
                            arg14[0].o = var_b60
                            arg15[0].o = var_6e0[0].o
                            arg11 = _mm256_blendv_ps(var_a20_4, arg5, zmm2)
                            arg10 = _mm256_blendv_ps(arg10, zmm0, arg7)
                            arg12[0].o = zx.o(0)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zx.o(0))
                            var_540 = arg6[0].o
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                            arg5[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                            arg8 = var_aa0_1
                            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        
                        arg5[0].o = var_8a0_2
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                        zmm2[0].o ^= arg6[0].o
                        var_680.32 = _mm256_maskstore_ps(arg13, 
                            _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), zmm0))
                        zmm0 = var_c40
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                        zmm5[0].o = zmm0[0].o ^ arg6[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        zmm0[0].o ^= arg6[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0[0].o &= arg5[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_1619 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_1619 == 0)
                            arg7[0].o = var_780[0].o
                            arg10[0].o = var_ae0[0].o
                        else
                            int128_t var_550
                            int64_t rax_258
                            
                            if ((temp0_1619 & 1) != 0)
                                zmm2[0].o = var_550
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg11[0].q, 0)
                                
                                if ((temp0_1619 & 2) != 0)
                                    rax_258 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_258, 1)
                            else
                                zmm2[0].o = var_550
                                
                                if ((temp0_1619 & 2) != 0)
                                    rax_258 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_258, 1)
                            
                            if ((temp0_1619 & 4) == 0)
                                if ((temp0_1619 & 8) != 0)
                                    goto label_1401e6b55
                                
                                goto label_1401e6175
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 2)
                            
                            if ((temp0_1619 & 8) != 0)
                            label_1401e6b55:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                int64_t rax_275 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_275, 3)
                                
                                if ((temp0_1619 & 0x10) == 0)
                                    goto label_1401e617f
                                
                                goto label_1401e6b75
                            
                        label_1401e6175:
                            
                            if ((temp0_1619 & 0x10) == 0)
                            label_1401e617f:
                                
                                if ((temp0_1619 & 0x20) != 0)
                                    goto label_1401e6b84
                                
                                goto label_1401e6189
                            
                        label_1401e6b75:
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                            
                            if ((temp0_1619 & 0x20) != 0)
                            label_1401e6b84:
                                int64_t rax_277 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_277, 5)
                                
                                if ((temp0_1619 & 0x40) == 0)
                                    goto label_1401e6193
                                
                                goto label_1401e6b99
                            
                        label_1401e6189:
                            
                            if ((temp0_1619 & 0x40) != 0)
                            label_1401e6b99:
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 6)
                                
                                if (temp0_1619 s< 0)
                                label_1401e6bb1:
                                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_279 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_279, 7)
                            else
                            label_1401e6193:
                                
                                if (temp0_1619 s< 0)
                                    goto label_1401e6bb1
                            
                            arg7[0].o = var_780[0].o
                            arg10[0].o = var_ae0[0].o
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                            var_550 = zmm2[0].o
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            arg5[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                        
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        zmm1[0].o ^= arg6[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm1, zmm0)
                        var_660.32 = _mm256_maskstore_ps(arg13, zmm0)
                        arg11[0].o = data_142fc95c0
                        arg13 = var_d80_1
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_1434422d0)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
                    zmm1[0].o ^= arg6[0].o
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                    zmm0[0].o ^= arg7[0].o
                    zmm0[0].o &= zmm1[0].o
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        zmm2[0].o = var_920
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    else
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
                        zmm1[0].o = data_143442ad0
                        zmm2[0].o = zmm1[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_b80)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm4[0].o &= not.o(zmm1[0].o)
                        zmm5[0].o = arg5[0].o & not.o(zmm2[0].o)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        bool cond:63_1 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        
                        if (not(cond:63_1))
                            arg5[0].o ^= arg7[0].o
                            arg5 = _mm256_insertf128_ps(arg5, arg10[0].o, 1)
                            zmm2 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), arg5)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_6a0.32 = _mm256_maskstore_ps(zmm2, arg5)
                            var_680.32 = _mm256_maskstore_ps(zmm2, arg5)
                            var_660.32 = _mm256_maskstore_ps(zmm2, arg5)
                        
                        zmm1[0].o ^= arg7[0].o
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_143442ad0)
                        zmm2[0].o ^= arg7[0].o
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        bool cond:69_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                        zmm2[0].o = var_920
                        
                        if (not(cond:69_1))
                            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = zx.o(0)
                            var_6a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_680.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_660.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
            zmm0[0].o ^= arg7[0].o
            arg6 = var_8e0
            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_a60[0].o)
            zmm4[0].o = zmm2[0].o & not.o(arg10[0].o)
            zmm5[0].o = arg5[0].o & not.o(zmm0[0].o)
            arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0)
                zmm4[0].o = var_a00
                zmm5[0].o = var_960
                zmm2 = var_980.32
                arg5 = var_9e0_1
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            else
                arg8 = _mm256_insertf128_ps(zmm0, arg10[0].o, 1)
                zmm0[0].o = zmm2[0].o ^ arg7[0].o
                zmm2[0].o = arg5[0].o ^ arg7[0].o
                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                var_c00.32 = zmm0
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg6[0].o, var_640)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_5c0)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm4 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                var_ae0 = zmm4
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                int32_t var_aa0_2[0x8] = zmm5
                arg6 = var_ac0
                zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                var_ca0 = zmm5[0].o
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a80[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_d60[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                zmm5 = var_ce0
                arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                arg14 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                var_c20_2[0].o = arg6[0].o
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_c80)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                var_b60.32 = zmm1
                arg10[0].o = arg15[0].o & zmm0[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg10[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                bool cond:33_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                zmm5[0].o = arg15[0].o
                var_cc0_1 = arg15[0].o
                double var_520[0x4]
                float var_500[0x8]
                uint32_t var_4e0[0x8]
                
                if (cond:33_1)
                    arg5[0].o = var_d00
                    arg6 = var_c00.32
                else
                    var_920.32 = arg8
                    zmm0 = var_b40_1
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                    zmm2[0].o &= arg10[0].o
                    arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(var_c60_2[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_c60_2[0].o, var_ac0[0].o)
                        zmm0 = var_bc0_1.32
                        arg15[0].o = zmm5[0].o
                        zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_c20_2[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_ce0[0].o)
                        arg9 = var_aa0_2
                        arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg13 = var_ae0
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm0[0].o = data_1434426c0
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = zx.o(0)
                        zmm5 = _mm256_blendv_ps(zmm0, zmm2, arg6)
                        zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        arg7 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        zmm1 = _mm256_blendv_ps(zmm0, zmm1, arg7)
                        double r9_1 = zmm5[0]
                        int64_t r13_3 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* r8_7 = r15_1 i+ r9_1
                        int64_t r14_5 = zmm1[0].q
                        int64_t r11_4 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* r10_6 = r15_1 + r14_5
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t r15_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rsi_25 = zmm1[0].q
                        zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg9 = _mm256_blendv_ps(zmm0, zmm1, arg6)
                        zmm1 = _mm256_blendv_ps(zmm0, zmm1, arg7)
                        int64_t rdx_21 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int32_t* rdi_18 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rbx_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        float* rax_265 = zmm1[0].q
                        zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm2 = _mm256_blendv_ps(zmm0, zmm1, arg6)
                        arg5[0].o = *(rdi_18 + r10_6)
                        zmm1 = _mm256_blendv_ps(zmm0, zmm1, arg7)
                        arg6[0].o = *(zmm1[0].q + r10_6)
                        void* rdi_20 = arg4 + r13_3
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        void* rcx_33 = arg4 + r11_4
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_21 + rcx_33), 0x10)
                        float* rdx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_22 + rcx_33), 0x10)
                        int64_t rcx_34 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* rdx_24 = arg4 + rsi_25
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_265 + rdx_24), 0x20)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(zmm1[0].q + rdx_24), 0x20)
                        int32_t* rax_267 = arg9[0].q
                        int64_t rdx_25 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = *(rax_267 + r8_7)
                        void* rax_269 = arg4 + r15_3
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_11 + rax_269), 0x30)
                        int64_t rbx_12 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_12 + rdi_20), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_25 + rax_269), 0x30)
                        double rax_270 = zmm5[0]
                        int32_t* rdx_26 = zmm2[0].q
                        int64_t rbx_13 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm5[0].o = *(rdx_26 + r8_7)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_13 + rdi_20), 0x10)
                        void* rdx_28 = arg4 i+ rax_270
                        arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(arg7[0].q + rdx_28), 0x20)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(zmm2[0].q + rdx_28), 0x20)
                        void* rdx_30 = arg4 + rcx_34
                        int64_t rbx_16 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_16 + rdx_30), 0x30)
                        float* rbx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_17 + rdx_30), 0x30)
                        zmm5[0].o = *(arg4 i+ r9_1)
                        arg7[0].o = *(arg4 + r14_5)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + r11_4), 0x10)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + rsi_25), 0x20)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + r15_3), 0x30)
                        r9 = var_be0
                        r15_1 = arg4
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + r13_3), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 i+ rax_270), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + rcx_34), 0x30)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg7[0].o, 1)
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg12[0].o = zx.o(0)
                        var_520 = _mm256_maskstore_ps(zmm4, zmm5)
                        zmm5[0].o = arg15[0].o
                        var_500 =
                            _mm256_maskstore_ps(zmm4, _mm256_insertf128_ps(zmm1, arg5[0].o, 1))
                        zmm1 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        var_4e0 = _mm256_maskstore_ps(zmm4, zmm1)
                    
                    zmm1[0].o = arg8[0].o ^ arg7[0].o
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg12[0].o, var_b40_1[0].o)
                    zmm2[0].o ^= arg7[0].o
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm4[0].o = arg10[0].o & zmm1[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                        arg9 = var_d40_1
                        arg5[0].o = var_d00
                        arg13 = var_d80_1
                        arg8 = var_920.32
                        arg6 = var_c00.32
                    else
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        var_c40[0].o = _mm256_extractf128_ps(var_c40[0].o, 1)
                        var_c40[0].o = __vpslld_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        var_c40[0].o = __vpsrad_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm0, var_c40[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm1, arg5)
                        int32_t temp0_1801 = _mm256_movemask_ps(zmm0)
                        arg11[0].o = zx.o(0)
                        zmm5 = var_b60.32
                        arg15 = zmm5
                        arg10 = arg14
                        
                        if (temp0_1801 != 0)
                            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg6[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                            arg9 = arg5
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
                            arg8 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            arg10 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1), zmm1)
                            zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            arg5[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            arg5[0].o = _mm256_extractf128_ps(var_c60_2[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ca0)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_c60_2[0].o, var_ac0[0].o)
                            arg13 = var_ae0
                            var_c60_2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c60_2[0].o, arg5[0].o)
                            arg11 = var_bc0_1.32
                            var_c60_2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            var_c60_2[0].o =
                                __vpaddq_xmmdq_xmmdq_memdq(var_c60_2[0].o, var_c20_2[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                            arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                            arg15 = var_aa0_2
                            arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            var_c60_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c60_2[0].o, arg6[0].o)
                            var_c60_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_c60_2[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg11[0].o, var_ce0[0].o)
                            arg11[0].o = zx.o(0)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
                            zmm5 = _mm256_insertf128_ps(arg7, var_c60_2[0].o, 1)
                            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            arg12[0].o = zx.o(0)
                            arg6 = var_b60.32
                            arg15 = _mm256_blendv_ps(arg6, arg10, zmm2)
                            zmm2 = _mm256_blendv_ps(arg11, zmm5, zmm2)
                            arg10 = _mm256_blendv_ps(arg14, arg8, zmm0)
                            zmm0 = _mm256_blendv_ps(arg11, arg5, zmm0)
                            arg5 = arg9
                            int64_t r8_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rcx_35 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rdx_36 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rbx_18 = zmm2[0].q
                            zmm2[0].o = *(r15_1 + rcx_35)
                            int64_t rcx_36 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rdi_21 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rsi_26 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rax_273 = zmm0[0]
                            zmm0[0].o = *(r15_1 i+ rdi_21)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(r15_1 + rcx_36), 0x10)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(r15_1 i+ rax_273), 0x20)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(r15_1 + rsi_26), 0x30)
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + r8_8), 0x10)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(r15_1 + rbx_18), 0x20)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(r15_1 + rdx_36), 0x30)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        
                        var_a60 = arg14
                        var_520 = _mm256_maskstore_ps(arg5, _mm256_blendv_ps(arg11, zmm0, zmm1))
                        zmm0 = var_c40
                        arg9 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                        arg11[0].o = zmm0[0].o ^ arg7[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
                        zmm0[0].o ^= arg7[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                        zmm1[0].o = zmm4[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_1864 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        int32_t var_b40_2[0x8]
                        float var_8c0[0x8]
                        
                        if (temp0_1864 == 0)
                            var_b40_2 = arg10
                            arg13 = var_d80_1
                            arg8 = var_920.32
                            arg6 = var_c00.32
                        else
                            var_be0.32 = arg5
                            
                            if ((temp0_1864 & 1) != 0)
                                zmm0[0].o = *arg15[0].q
                                arg5 = _mm256_blend_ps(var_8c0, zmm0, 1)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                
                                if ((temp0_1864 & 2) != 0)
                                label_1401e6bee:
                                    int64_t rax_281 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_281, 0x10)
                                    arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            else
                                arg5 = var_8c0
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                
                                if ((temp0_1864 & 2) != 0)
                                    goto label_1401e6bee
                            
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            
                            if ((temp0_1864 & 4) != 0)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm5[0], 0x20)
                                arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                            
                            arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg12[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_1864 & 8) != 0)
                                int64_t rax_283 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_283, 0x30)
                                arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                            
                            var_8c0 = arg5
                            zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm0[0].o = data_1434426c0
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                            arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x50)
                            zmm0 = arg10
                            arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                            
                            if ((temp0_1864 & 0x10) != 0)
                                arg14 = zmm0
                                zmm0[0].o = zx.o(*zmm0[0])
                                zmm2 = var_8c0
                                arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm0[0].o, 3)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                var_8c0 = zmm2
                            else
                                arg14 = zmm0
                            
                            zmm0[0].o = data_1434426c0
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0xfa)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                            
                            if ((temp0_1864 & 0x20) != 0)
                                int64_t rax_285 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                arg12 = var_8c0
                                zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_285, 0x10)
                                arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                                var_8c0 = arg12
                            
                            arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                            
                            if ((temp0_1864 & 0x40) != 0)
                                float* rax_286 = zmm1[0].q
                                arg7 = var_8c0
                                arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                arg6[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_286, 0x20)
                                arg7 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                                var_8c0 = arg7
                            
                            arg12[0].o = zx.o(0)
                            arg13 = var_d80_1
                            arg8 = var_920.32
                            arg6 = var_c00.32
                            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            arg15 = _mm256_blendv_ps(arg15, zmm5, zmm0)
                            var_b40_2 = _mm256_blendv_ps(arg14, arg5, zmm2)
                            
                            if (temp0_1864 s< 0)
                                int64_t rax_287 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(var_8c0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_287, 0x30)
                                var_8c0 = _mm256_insertf128_ps(var_8c0, zmm0[0].o, 1)
                            
                            arg5 = var_be0.32
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
                        zmm0[0].o ^= arg7[0].o
                        var_500 = _mm256_maskstore_ps(arg5, 
                            __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, arg11[0].o, 1), 
                                var_8c0))
                        zmm0 = var_c40
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                        arg10[0].o = zmm0[0].o ^ arg7[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        zmm0[0].o ^= arg7[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                        zmm0[0].o &= zmm4[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_1932 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        uint32_t var_940[0x8]
                        
                        if (temp0_1932 == 0)
                            arg9 = var_d40_1
                            zmm4[0].o = var_d00
                            arg11[0].o = data_142fc95c0
                            zmm5[0].o = var_cc0_1
                        else
                            if ((temp0_1932 & 1) == 0)
                                if ((temp0_1932 & 2) != 0)
                                    goto label_1401e6ee6
                                
                                goto label_1401e6e37
                            
                            zmm0[0].o = *arg15[0].q
                            zmm2 = _mm256_blend_ps(var_940, zmm0, 1)
                            var_940 = zmm2
                            
                            if ((temp0_1932 & 2) != 0)
                            label_1401e6ee6:
                                int64_t rax_289 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, *rax_289, 0x10)
                                zmm2 = _mm256_blend_ps(var_940, zmm0, 0xf)
                                var_940 = zmm2
                                arg9 = var_d40_1
                                arg11[0].o = data_142fc95c0
                                
                                if ((temp0_1932 & 4) == 0)
                                    goto label_1401e6e4f
                                
                                goto label_1401e6f22
                            
                        label_1401e6e37:
                            arg9 = var_d40_1
                            arg11[0].o = data_142fc95c0
                            
                            if ((temp0_1932 & 4) == 0)
                            label_1401e6e4f:
                                
                                if ((temp0_1932 & 8) != 0)
                                    goto label_1401e6f55
                                
                                goto label_1401e6e59
                            
                        label_1401e6f22:
                            zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, *zmm0[0], 0x20)
                            zmm2 = _mm256_blend_ps(var_940, zmm0, 0xf)
                            var_940 = zmm2
                            
                            if ((temp0_1932 & 8) != 0)
                            label_1401e6f55:
                                zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                int64_t rax_291 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, *rax_291, 0x30)
                                zmm2 = _mm256_blend_ps(var_940, zmm0, 0xf)
                                var_940 = zmm2
                                zmm4[0].o = var_d00
                                zmm5[0].o = var_cc0_1
                                
                                if ((temp0_1932 & 0x10) == 0)
                                    goto label_1401e6e75
                                
                                goto label_1401e6f9b
                            
                        label_1401e6e59:
                            zmm4[0].o = var_d00
                            zmm5[0].o = var_cc0_1
                            
                            if ((temp0_1932 & 0x10) == 0)
                            label_1401e6e75:
                                
                                if ((temp0_1932 & 0x20) != 0)
                                    goto label_1401e6fe3
                                
                                goto label_1401e6e7f
                            
                        label_1401e6f9b:
                            zmm0 = var_b40_2
                            zmm0[0].o = zx.o(*zmm0[0])
                            arg14 = arg5
                            arg5 = var_940
                            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 3)
                            var_940 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            arg5 = arg14
                            
                            if ((temp0_1932 & 0x20) != 0)
                            label_1401e6fe3:
                                zmm0 = var_b40_2
                                int64_t rax_293 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_293, 0x10)
                                zmm2 = _mm256_insertf128_ps(var_940, zmm0[0].o, 1)
                                var_940 = zmm2
                                
                                if ((temp0_1932 & 0x40) == 0)
                                    goto label_1401e6e89
                                
                                goto label_1401e7020
                            
                        label_1401e6e7f:
                            
                            if ((temp0_1932 & 0x40) != 0)
                            label_1401e7020:
                                zmm0 = var_b40_2
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                double rax_294 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_294, 0x20)
                                zmm2 = _mm256_insertf128_ps(var_940, zmm0[0].o, 1)
                                var_940 = zmm2
                                
                                if (temp0_1932 s< 0)
                                label_1401e705c:
                                    zmm0 = var_b40_2
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rax_295 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_295, 0x30)
                                    zmm2 = _mm256_insertf128_ps(var_940, zmm0[0].o, 1)
                                    var_940 = zmm2
                            else
                            label_1401e6e89:
                                
                                if (temp0_1932 s< 0)
                                    goto label_1401e705c
                        
                        arg14 = var_a60
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        zmm0[0].o ^= arg7[0].o
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(
                            _mm256_insertf128_ps(zmm0, arg10[0].o, 1), var_940)
                        var_4e0 = _mm256_maskstore_ps(arg5, zmm0)
                        arg5[0].o = zmm4[0].o
                
                arg8 = _mm256_and_ps(arg6, arg8)
                zmm0[0].o = zmm5[0].o & arg5[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                else
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                    zmm2[0].o = var_d20[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o &= zmm5[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    float var_b40_3[0x8] = arg8
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg15 = arg9
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    else
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg10[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm1[0].o = zx.o(0)
                        float var_7c0_2[0x8] = zmm1
                        float var_7e0_2[0x8] = zmm1
                        float var_800_2[0x8] = zmm1
                        float var_820_2[0x8] = zmm1
                        float var_840_2[0x8] = zmm1
                        float var_860_2[0x8] = zmm1
                        zmm2 = var_c40
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm2[0].o = arg11[0].o
                        arg11 = _mm256_and_ps(zmm0, zmm1)
                        zmm1 = _mm256_and_ps(arg11, arg8)
                        int32_t temp0_1986 = _mm256_movemask_ps(zmm1)
                        var_a60 = arg14
                        var_be0.32 = zmm4
                        
                        if (temp0_1986 == 0)
                            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                            arg11[0].o = zmm2[0].o
                        else
                            char rdi_22 = temp0_1986.b
                            float var_380[0x8]
                            
                            if ((rdi_22 & 1) != 0)
                                zmm0[0].o = *arg13[0].q
                                arg9 = _mm256_blend_ps(var_380, zmm0, 1)
                            else
                                arg9 = var_380
                            
                            int32_t var_3a0[0x8]
                            arg14 = var_3a0
                            zmm4[0].o = data_1434426c0
                            
                            if ((rdi_22 & 2) == 0)
                                if ((rdi_22 & 4) != 0)
                                    goto label_1401e730d
                                
                                goto label_1401e724e
                            
                            float* rax_301 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_301, 0x10)
                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            
                            if ((rdi_22 & 4) != 0)
                            label_1401e730d:
                                zmm0[0].o = var_c80
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm0[0], 0x20)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                
                                if ((rdi_22 & 8) == 0)
                                    goto label_1401e7258
                                
                                goto label_1401e7331
                            
                        label_1401e724e:
                            
                            if ((rdi_22 & 8) == 0)
                            label_1401e7258:
                                
                                if ((rdi_22 & 0x10) != 0)
                                    goto label_1401e735b
                                
                                goto label_1401e7262
                            
                        label_1401e7331:
                            zmm0[0].o = var_c80
                            float* rax_303 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_303, 0x30)
                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            
                            if ((rdi_22 & 0x10) == 0)
                            label_1401e7262:
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
                                arg7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                
                                if ((rdi_22 & 0x20) != 0)
                                label_1401e7272:
                                    int64_t rax_299 = __vpextrq_gpr64q_xmmdq_immb(var_d60[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_299, 0x10)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            else
                            label_1401e735b:
                                zmm0[0].o = *var_d60[0].q
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 1)
                                arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
                                arg7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                
                                if ((rdi_22 & 0x20) != 0)
                                    goto label_1401e7272
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_c80)
                            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                            
                            if ((rdi_22 & 0x40) != 0)
                                zmm0[0].o = var_a80[0].o
                                double rax_300 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_300, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            
                            var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60[0].o, zmm4[0].o)
                            arg8[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                            arg13 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            
                            if (temp0_1986.b s< 0)
                                zmm1[0].o = var_a80[0].o
                                int64_t rax_305 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_305, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            else
                                zmm1[0].o = var_a80[0].o
                            
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm0 = var_d80_1
                            zmm5 = _mm256_blendv_ps(zmm0, zmm5, arg13)
                            var_800_2 = _mm256_maskstore_ps(arg11, arg9)
                            
                            if ((rdi_22 & 1) != 0)
                                zmm0[0].o = *zmm5[0]
                                arg14 = _mm256_blend_ps(arg14, zmm0, 1)
                            
                            arg5 = _mm256_insertf128_ps(var_d60, arg5[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                            var_380 = arg9
                            
                            if ((rdi_22 & 2) != 0)
                                int64_t rax_307 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *rax_307, 0x10)
                                arg14 = _mm256_blend_ps(arg14, zmm0, 0xf)
                            
                            zmm0 = var_d60
                            arg9 = _mm256_blendv_ps(zmm0, arg5, arg6)
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            
                            if ((rdi_22 & 4) == 0)
                                if ((rdi_22 & 8) != 0)
                                    goto label_1401e75b6
                                
                                goto label_1401e7433
                            
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *zmm2[0].q, 0x20)
                            arg14 = _mm256_blend_ps(arg14, zmm0, 0xf)
                            
                            if ((rdi_22 & 8) == 0)
                            label_1401e7433:
                                
                                if ((rdi_22 & 0x10) != 0)
                                label_1401e743e:
                                    zmm0[0].o = *arg9[0].q
                                    arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm0[0].o, 1)
                                    arg14 = _mm256_insertf128_ps(arg14, zmm0[0].o, 1)
                            else
                            label_1401e75b6:
                                int64_t rax_311 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *rax_311, 0x30)
                                arg14 = _mm256_blend_ps(arg14, zmm0, 0xf)
                                
                                if ((rdi_22 & 0x10) != 0)
                                    goto label_1401e743e
                            
                            arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                            
                            if ((rdi_22 & 0x20) == 0)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                
                                if ((rdi_22 & 0x40) != 0)
                                    goto label_1401e7601
                                
                                goto label_1401e747e
                            
                            int64_t rax_312 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_312, 0x10)
                            arg14 = _mm256_insertf128_ps(arg14, zmm0[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            
                            if ((rdi_22 & 0x40) == 0)
                            label_1401e747e:
                                zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                zmm2 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                                
                                if (temp0_1986.b s< 0)
                                label_1401e762c:
                                    int64_t rax_314 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_314, 0x30)
                                    arg14 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                            else
                            label_1401e7601:
                                float* rax_313 = arg7[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_313, 0x20)
                                arg14 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                zmm2 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                                
                                if (temp0_1986.b s< 0)
                                    goto label_1401e762c
                            
                            arg12[0].o = zx.o(0)
                            zmm1 = _mm256_blendv_ps(zmm5, zmm2, arg13)
                            var_d80_1 = zmm1
                            var_d60 = _mm256_blendv_ps(arg9, zmm0, arg6)
                            var_3a0 = arg14
                            var_860_2 = _mm256_maskstore_ps(arg11, arg14)
                            arg11[0].o = data_142fc95c0
                            arg9 = var_d40_1
                            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        
                        arg14[0].o = __vpsrad_xmmdq_xmmdq_immb(arg10[0].o, 0x1f)
                        arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(var_c40, data_143442a60)
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                        zmm0[0].o = zmm4[0].o & not.o(var_d20[0].o)
                        zmm1[0].o = zmm5[0].o & not.o(arg8[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = zmm0[0].o & var_cc0_1
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_2055 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        double var_4c0[0x4]
                        
                        if (temp0_2055 == 0)
                            zmm0 = var_4c0
                            arg8 = var_b40_3
                        else
                            int32_t var_400[0x8]
                            
                            if ((temp0_2055 & 1) == 0)
                                arg13 = var_400
                                
                                if ((temp0_2055 & 2) == 0)
                                    goto label_1401e7671
                                
                                goto label_1401e7552
                            
                            zmm0 = var_d80_1
                            zmm0[0].o = *zmm0[0]
                            arg13 = _mm256_blend_ps(var_400, zmm0, 1)
                            
                            if ((temp0_2055 & 2) != 0)
                            label_1401e7552:
                                zmm1 = var_d80_1
                                int64_t rax_309 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *rax_309, 0x10)
                                arg13 = _mm256_blend_ps(arg13, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                
                                if ((temp0_2055 & 4) != 0)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                        *arg6[0].q, 0x20)
                                    arg13 = _mm256_blend_ps(arg13, zmm1, 0xf)
                            else
                            label_1401e7671:
                                zmm1 = var_d80_1
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                
                                if ((temp0_2055 & 4) != 0)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                        *arg6[0].q, 0x20)
                                    arg13 = _mm256_blend_ps(arg13, zmm1, 0xf)
                            
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            
                            if ((temp0_2055 & 8) != 0)
                                int64_t rax_317 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *rax_317, 0x30)
                                arg13 = _mm256_blend_ps(arg13, zmm0, 0xf)
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg10[0].o = zmm5[0].o ^ arg5[0].o
                            
                            if ((temp0_2055 & 0x10) != 0)
                                var_d60[0].o = zx.o(*var_d60[0].q)
                                zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                var_d60[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, var_d60[0].o, 3)
                                arg13 = _mm256_insertf128_ps(arg13, var_d60[0].o, 1)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm1 = var_d80_1
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, data_1434426c0)
                            arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                            zmm4[0].o ^= arg5[0].o
                            
                            if ((temp0_2055 & 0x20) != 0)
                                zmm2 = var_d60
                                int64_t rax_319 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_319, 0x10)
                                arg13 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                            else
                                zmm2 = var_d60
                            
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, data_1434426c0)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                            arg7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_d20[0].o, 1)
                            arg10 = _mm256_insertf128_ps(arg10, zmm4[0].o, 1)
                            
                            if ((temp0_2055 & 0x40) != 0)
                                float* rax_320 = arg5[0].q
                                zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_320, 0x20)
                                arg13 = _mm256_insertf128_ps(arg13, zmm4[0].o, 1)
                            
                            float var_3e0[0x8]
                            zmm4 = var_3e0
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_d60[0].o, data_1434426c0)
                            var_d60[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            arg11 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            arg10 = _mm256_and_ps(arg10, arg7)
                            
                            if (temp0_2055 s< 0)
                                int64_t rax_321 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_321, 0x30)
                                arg13 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                            
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            zmm1 = var_d80_1
                            zmm5 = _mm256_blendv_ps(zmm1, zmm5, arg11)
                            var_400 = arg13
                            var_7e0_2 = _mm256_maskstore_ps(arg10, arg13)
                            
                            if ((temp0_2055 & 1) != 0)
                                zmm1[0].o = *zmm5[0]
                                zmm4 = _mm256_blend_ps(zmm4, zmm1, 1)
                            
                            zmm2 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                            arg6 = _mm256_insertf128_ps(var_d60, zmm0[0].o, 1)
                            
                            if ((temp0_2055 & 2) == 0)
                                arg9 = _mm256_blendv_ps(var_d60, zmm2, arg6)
                                zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                
                                if ((temp0_2055 & 4) != 0)
                                    goto label_1401e7a1d
                                
                                goto label_1401e783a
                            
                            int64_t rax_327 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_327, 0x10)
                            zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                            arg9 = _mm256_blendv_ps(var_d60, zmm2, arg6)
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            
                            if ((temp0_2055 & 4) != 0)
                            label_1401e7a1d:
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *zmm2[0].q, 0x20)
                                zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                                
                                if ((temp0_2055 & 8) == 0)
                                    goto label_1401e7844
                                
                                goto label_1401e7a33
                            
                        label_1401e783a:
                            
                            if ((temp0_2055 & 8) != 0)
                            label_1401e7a33:
                                int64_t rax_329 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_329, 0x30)
                                zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                                
                                if ((temp0_2055 & 0x10) != 0)
                                label_1401e784f:
                                    zmm0[0].o = zx.o(*arg9[0].q)
                                    var_d60[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(var_d60[0].o, 
                                        zmm0[0].o, 3)
                                    zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                            else
                            label_1401e7844:
                                
                                if ((temp0_2055 & 0x10) != 0)
                                    goto label_1401e784f
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            var_d60[0].o = data_1434426c0
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, var_d60[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_d60[0].o)
                            
                            if ((temp0_2055 & 0x20) != 0)
                                int64_t rax_324 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                var_d60[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                var_d60[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(var_d60[0].o, *rax_324, 0x10)
                                zmm4 = _mm256_insertf128_ps(zmm4, var_d60[0].o, 1)
                            
                            arg8 = zmm4
                            var_d60[0].o = data_1434426c0
                            zmm4[0].o = var_d60[0].o
                            var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_d60[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            
                            if ((temp0_2055 & 0x40) != 0)
                                double rax_325 = zmm0[0]
                                zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_325, 0x20)
                                arg8 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                            
                            zmm4 = arg8
                            arg8 = var_b40_3
                            zmm1 = _mm256_insertf128_ps(arg5, var_d60[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            if (temp0_2055 s< 0)
                                int64_t rax_326 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_326, 0x30)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                            
                            arg12[0].o = zx.o(0)
                            zmm0 = var_4c0
                            var_d80_1 = _mm256_blendv_ps(zmm5, zmm2, arg11)
                            var_d60 = _mm256_blendv_ps(arg9, zmm1, arg6)
                            var_3e0 = zmm4
                            var_840_2 = _mm256_maskstore_ps(arg10, zmm4)
                            arg11[0].o = data_142fc95c0
                            arg9 = var_d40_1
                            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        
                        zmm1 = var_be0.32
                        arg10 = _mm256_insertf128_ps(zmm1, arg14[0].o, 1)
                        arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                        zmm2 = __vandps_ymmqq_ymmqq_memqq(var_c40, data_142fc9520)
                        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                        zmm2[0].o = zmm4[0].o & not.o(var_d20[0].o)
                        arg5[0].o = zmm5[0].o & not.o(arg15[0].o)
                        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        zmm2[0].o &= var_cc0_1
                        arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        char temp0_2156 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                        
                        if (temp0_2156 == 0)
                            arg15 = arg9
                            arg14[0].o = data_1434426c0
                        else
                            if ((temp0_2156 & 1) != 0)
                                arg9 = var_d80_1
                                arg5[0].o = *arg9[0].q
                                zmm0 = _mm256_blend_ps(zmm0, arg5, 1)
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                
                                if ((temp0_2156 & 2) != 0)
                                label_1401e7a73:
                                    int64_t rax_331 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_331, 0x10)
                                    zmm0 = _mm256_blend_ps(zmm0, arg5, 0xf)
                            else
                                arg9 = var_d80_1
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                
                                if ((temp0_2156 & 2) != 0)
                                    goto label_1401e7a73
                            
                            arg14[0].o = data_1434426c0
                            arg7[0].o = var_9c0
                            int32_t var_3c0[0x8]
                            arg11 = var_3c0
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            var_9c0 = arg7[0].o
                            
                            if ((temp0_2156 & 4) == 0)
                                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                
                                if ((temp0_2156 & 8) != 0)
                                    goto label_1401e7b34
                                
                                goto label_1401e7ac4
                            
                            arg7[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *arg6[0].q, 0x20)
                            zmm0 = _mm256_blend_ps(zmm0, arg7, 0xf)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            
                            if ((temp0_2156 & 8) == 0)
                            label_1401e7ac4:
                                arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                zmm5[0].o ^= zmm1[0].o
                                
                                if ((temp0_2156 & 0x10) != 0)
                                label_1401e7ad3:
                                    arg5 = var_d60
                                    arg5[0].o = zx.o(*arg5[0].q)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm0[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 3)
                                    arg8 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                                    zmm0 = arg8
                            else
                            label_1401e7b34:
                                int64_t rax_334 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_334, 0x30)
                                zmm0 = _mm256_blend_ps(zmm0, arg7, 0xf)
                                arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                zmm5[0].o ^= zmm1[0].o
                                
                                if ((temp0_2156 & 0x10) != 0)
                                    goto label_1401e7ad3
                            
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg14[0].o)
                            arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                            arg5[0].o = zmm4[0].o ^ zmm1[0].o
                            
                            if ((temp0_2156 & 0x20) != 0)
                                arg13 = var_d60
                                int64_t rax_335 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_335, 0x10)
                                zmm4 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                                zmm0 = zmm4
                            else
                                arg13 = var_d60
                            
                            zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg14[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                            zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg15, var_d20[0].o, 1)
                            arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                            
                            if ((temp0_2156 & 0x40) != 0)
                                float* rax_336 = zmm2[0].q
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_336, 0x20)
                                zmm5 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                                zmm0 = zmm5
                            
                            arg13 = var_d80_1
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                            zmm4 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            zmm1 = _mm256_and_ps(arg5, zmm1)
                            
                            if (temp0_2156 s< 0)
                                int64_t rax_337 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_337, 0x30)
                                arg5 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                                zmm0 = arg5
                            
                            arg12[0].o = zx.o(0)
                            arg15 = var_d40_1
                            arg8 = var_b40_3
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm4 = _mm256_blendv_ps(arg13, zmm4, arg6)
                            var_7c0_2 = _mm256_maskstore_ps(zmm1, zmm0)
                            var_4c0 = zmm0
                            
                            if ((temp0_2156 & 1) != 0)
                                zmm0[0].o = *zmm4[0].q
                                arg11 = _mm256_blend_ps(arg11, zmm0, 1)
                            
                            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg14[0].o, var_d60[0].o)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                            
                            if ((temp0_2156 & 2) == 0)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                                
                                if ((temp0_2156 & 4) != 0)
                                    goto label_1401e8204
                                
                                goto label_1401e7c83
                            
                            int64_t rax_344 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *rax_344, 0x10)
                            arg11 = _mm256_blend_ps(arg11, zmm0, 0xf)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                            
                            if ((temp0_2156 & 4) != 0)
                            label_1401e8204:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *zmm0[0], 0x20)
                                arg11 = _mm256_blend_ps(arg11, zmm0, 0xf)
                                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                
                                if ((temp0_2156 & 8) == 0)
                                    goto label_1401e7c99
                                
                                goto label_1401e8231
                            
                        label_1401e7c83:
                            zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            
                            if ((temp0_2156 & 8) == 0)
                            label_1401e7c99:
                                zmm0 = var_d60
                                zmm2 = _mm256_blendv_ps(zmm0, zmm2, arg5)
                                
                                if ((temp0_2156 & 0x10) != 0)
                                    goto label_1401e8264
                                
                                goto label_1401e7caf
                            
                        label_1401e8231:
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            int64_t rax_346 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *rax_346, 0x30)
                            arg11 = _mm256_blend_ps(arg11, zmm0, 0xf)
                            zmm0 = var_d60
                            zmm2 = _mm256_blendv_ps(zmm0, zmm2, arg5)
                            
                            if ((temp0_2156 & 0x10) != 0)
                            label_1401e8264:
                                zmm0[0].o = *zmm2[0].q
                                arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm0[0].o, 1)
                                arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                
                                if ((temp0_2156 & 0x20) == 0)
                                    goto label_1401e7cb9
                                
                                goto label_1401e8284
                            
                        label_1401e7caf:
                            
                            if ((temp0_2156 & 0x20) == 0)
                            label_1401e7cb9:
                                
                                if ((temp0_2156 & 0x40) != 0)
                                    goto label_1401e82a6
                                
                                goto label_1401e7cc3
                            
                        label_1401e8284:
                            int64_t rax_348 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_348, 0x10)
                            arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            if ((temp0_2156 & 0x40) == 0)
                            label_1401e7cc3:
                                
                                if (temp0_2156 s< 0)
                                label_1401e82cb:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    int64_t rax_350 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_350, 0x30)
                                    arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            else
                            label_1401e82a6:
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                double rax_349 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_349, 0x20)
                                arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                
                                if (temp0_2156 s< 0)
                                    goto label_1401e82cb
                            
                            var_3c0 = arg11
                            var_820_2 = _mm256_maskstore_ps(zmm1, arg11)
                            arg11[0].o = data_142fc95c0
                        
                        zmm1[0].o = _mm256_extractf128_ps(var_c60_2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_ca0)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_c60_2[0].o, var_ac0[0].o)
                        zmm0 = var_bc0_1.32
                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_c20_2[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_ce0[0].o)
                        arg6 = var_ae0
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        zmm0 = var_aa0_2
                        zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                        zmm2 = _mm256_blendv_ps(arg13, zmm2, arg5)
                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm4[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        zmm1 =
                            _mm256_blendv_ps(arg13, zmm1, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                        int64_t r8_9 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_42 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_37 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_19 = zmm2[0].q
                        int64_t rdi_25 = zmm1[0].q
                        int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_339 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o = zx.o(*(r15_1 + rcx_42))
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + r8_9), 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rbx_19), 2)
                        int64_t rcx_43 = zmm1[0].q
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rdx_37), 3)
                        zmm2[0].o = zx.o(*(r15_1 + rdi_25))
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rsi_29), 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rcx_43), 2)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rax_339), 3)
                        arg5 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                        zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = data_143442490
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm0[0].o = data_143442480
                        zmm5[0].o &= zmm0[0].o
                        arg6[0].o = data_143442440
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm4[0].o &= zmm0[0].o
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(
                                __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg5), 
                                    data_1434424a0), 
                                var_860_2), 
                            var_800_2)
                        arg5 = _mm256_cvtepi32_ps(zmm4)
                        zmm0 = data_143442460
                        arg5 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(arg5, zmm0), var_840_2), 
                            var_7e0_2)
                        zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(
                                _mm256_div_ps(_mm256_cvtepi32_ps(zmm1), zmm0), var_820_2), 
                            var_7c0_2)
                        var_520 = _mm256_maskstore_ps(arg10, zmm2)
                        var_500 = _mm256_maskstore_ps(arg10, arg5)
                        var_4e0 = _mm256_maskstore_ps(arg10, zmm1)
                        arg14 = var_a60
                        arg5[0].o = var_d00
                        zmm5[0].o = var_cc0_1
                    
                    arg9 = arg15
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm0[0].o, var_d20[0].o)
                    arg6[0].o = zmm0[0].o ^ arg5[0].o
                    zmm0[0].o = zmm5[0].o & arg6[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                        arg11[0].o = data_142fc95c0
                    else
                        zmm0[0].o = data_1434422d0
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_b80)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        arg9[0].o = zmm5[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg9[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        else
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg9[0].q)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm2 = var_c40
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            arg8 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm2 = _mm256_and_ps(arg8, arg5)
                            bool cond:78_1 = _mm256_movemask_ps(zmm2) == 0
                            var_d20 = arg5
                            var_d60[0].o = arg6[0].o
                            var_d80_1[0].o = arg7[0].o
                            
                            if (cond:78_1)
                                arg11 = var_b60.32
                            else
                                zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                arg5[0].o = data_1434426b0
                                zmm4[0].o = arg5[0].o
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg5[0].o)
                                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                arg11 = var_b60.32
                                arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                                zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                zmm5 = _mm256_and_ps(zmm0, arg8)
                                zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                                arg11 = _mm256_blendv_ps(arg11, arg5, zmm0)
                                arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                                arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                                arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                arg14 = _mm256_blendv_ps(arg14, zmm2, arg5)
                                zmm1 = var_c60_2
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_ac0[0].o)
                                zmm1 = var_bc0_1.32
                                arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_c20_2[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_ce0[0].o)
                                zmm4[0].o = _mm256_extractf128_ps(var_ae0[0].o, 1)
                                zmm1[0].o = data_1434426c0
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ae0[0].o, zmm4[0].o)
                                zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                zmm4[0].o = _mm256_extractf128_ps(var_aa0_2[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                                arg12[0].o = zx.o(0)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_aa0_2[0].o, zmm5[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                zmm0 = _mm256_blendv_ps(arg13, zmm4, zmm0)
                                zmm2 = _mm256_blendv_ps(arg13, zmm2, arg5)
                                double rdx_38 = zmm0[0]
                                int64_t r8_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                double r10_7 = zmm0[0]
                                int64_t rbx_20 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rdi_26 = zmm2[0].q
                                int64_t rsi_30 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                double rcx_44 = zmm0[0]
                                int64_t rax_343 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(r15_1 i+ rdx_38))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + r8_10), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 i+ r10_7), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rbx_20), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rdi_26), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rsi_30), 5)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(r15_1 i+ rcx_44), 6)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(r15_1 + rax_343), 7)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                                arg5[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                arg5 = var_d20
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                            
                            var_520 = _mm256_maskstore_ps(arg5, _mm256_blendv_ps(arg13, zmm0, arg8))
                            zmm0 = var_c40
                            zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            zmm4[0].o = zmm0[0].o ^ zmm1[0].o
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                            zmm0[0].o ^= zmm1[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm0[0].o &= arg9[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_2407 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_2407 == 0)
                                arg10 = arg11
                                arg11 = arg14
                                arg8 = var_b40_3
                                arg6[0].o = var_d60[0].o
                                arg7[0].o = var_d80_1[0].o
                            else
                                int128_t var_570
                                int64_t rax_352
                                
                                if ((temp0_2407 & 1) != 0)
                                    arg5[0].o = var_570
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg11[0].q, 0)
                                    
                                    if ((temp0_2407 & 2) != 0)
                                        rax_352 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_352, 1)
                                else
                                    arg5[0].o = var_570
                                    
                                    if ((temp0_2407 & 2) != 0)
                                        rax_352 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_352, 1)
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                
                                if ((temp0_2407 & 4) != 0)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 2)
                                
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                
                                if ((temp0_2407 & 8) != 0)
                                    int64_t rax_354 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_354, 3)
                                
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                var_aa0_2[0].o = zmm4[0].o
                                
                                if ((temp0_2407 & 0x10) != 0)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg14[0].q, 4)
                                
                                zmm4 = arg14
                                arg14[0].o = arg5[0].o
                                arg7[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm1[0].o = data_1434426b0
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                                arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                arg15[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                arg10 = arg11
                                
                                if ((temp0_2407 & 0x20) != 0)
                                    arg11 = zmm4
                                    int64_t rax_356 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_356, 5)
                                else
                                    arg11 = zmm4
                                
                                zmm1[0].o = data_1434426b0
                                zmm4[0].o = zmm1[0].o
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_2407 & 0x40) != 0)
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg7[0].q, 6)
                                
                                zmm4[0].o = var_aa0_2[0].o
                                zmm0 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg12, arg6[0].o, 1)
                                zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg15, arg8[0].o, 1)
                                
                                if (temp0_2407 s< 0)
                                    int64_t rax_358 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_358, 7)
                                
                                arg12[0].o = zx.o(0)
                                arg13[0].o = zx.o(0)
                                arg15 = var_d40_1
                                arg8 = var_b40_3
                                arg6[0].o = var_d60[0].o
                                arg7[0].o = var_d80_1[0].o
                                arg10 = _mm256_blendv_ps(arg10, zmm1, zmm2)
                                arg11 = _mm256_blendv_ps(arg11, zmm0, arg5)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg14[0].o, zx.o(0))
                                var_570 = arg14[0].o
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg14[0].q)
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                                arg5 = var_d20
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            var_500 = _mm256_maskstore_ps(arg5, 
                                _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm4[0].o, 1), zmm0))
                            zmm0 = var_c40
                            zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                            zmm5[0].o = zmm0[0].o ^ zmm2[0].o
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm0[0].o &= arg9[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            char temp0_2457 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_2457 == 0)
                                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                            else
                                int128_t var_560
                                int64_t rax_360
                                
                                if ((temp0_2457 & 1) != 0)
                                    zmm2[0].o = var_560
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 0)
                                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                    
                                    if ((temp0_2457 & 2) != 0)
                                        rax_360 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_360, 1)
                                else
                                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                    zmm2[0].o = var_560
                                    
                                    if ((temp0_2457 & 2) != 0)
                                        rax_360 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_360, 1)
                                
                                if ((temp0_2457 & 4) == 0)
                                    if ((temp0_2457 & 8) != 0)
                                        goto label_1401e1b2f
                                    
                                    goto label_1401e85ec
                                
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 2)
                                
                                if ((temp0_2457 & 8) != 0)
                                label_1401e1b2f:
                                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 3)
                                    
                                    if ((temp0_2457 & 0x10) == 0)
                                        goto label_1401e85f6
                                    
                                    goto label_1401e1b4f
                                
                            label_1401e85ec:
                                
                                if ((temp0_2457 & 0x10) == 0)
                                label_1401e85f6:
                                    
                                    if ((temp0_2457 & 0x20) != 0)
                                        goto label_1401e1b5e
                                    
                                    goto label_1401e8600
                                
                            label_1401e1b4f:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg11[0].q, 4)
                                
                                if ((temp0_2457 & 0x20) != 0)
                                label_1401e1b5e:
                                    int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 5)
                                    
                                    if ((temp0_2457 & 0x40) == 0)
                                        goto label_1401e860a
                                    
                                    goto label_1401e1b73
                                
                            label_1401e8600:
                                
                                if ((temp0_2457 & 0x40) != 0)
                                label_1401e1b73:
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 6)
                                    
                                    if (temp0_2457 s< 0)
                                    label_1401e1b8b:
                                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                        int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_8, 7)
                                else
                                label_1401e860a:
                                    
                                    if (temp0_2457 s< 0)
                                        goto label_1401e1b8b
                                
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                                var_560 = zmm2[0].o
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                arg5[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                                arg5 = var_d20
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                            zmm1[0].o ^= zmm4[0].o
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                            zmm0 = _mm256_and_ps(zmm1, zmm0)
                            var_4e0 = _mm256_maskstore_ps(arg5, zmm0)
                            zmm5[0].o = var_cc0_1
                        
                        arg9 = arg15
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_1434422d0)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        zmm0[0].o ^= arg6[0].o
                        zmm0[0].o &= zmm5[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                            arg11[0].o = data_142fc95c0
                        else
                            zmm1[0].o = data_143442ad0
                            zmm2[0].o = zmm1[0].o
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_b80)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm2[0].o &= zmm5[0].o
                            arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                var_520 = _mm256_maskstore_ps(zmm2, arg13)
                                var_500 = _mm256_maskstore_ps(zmm2, arg13)
                                var_4e0 = _mm256_maskstore_ps(zmm2, arg13)
                            
                            zmm1[0].o ^= zmm4[0].o
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg15[0].o, data_143442ad0)
                            zmm2[0].o ^= zmm4[0].o
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm0[0].o &= zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            bool cond:84_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                            arg11[0].o = data_142fc95c0
                            
                            if (not(cond:84_1))
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                var_520 = _mm256_maskstore_ps(zmm0, arg13)
                                var_500 = _mm256_maskstore_ps(zmm0, arg13)
                                var_4e0 = _mm256_maskstore_ps(zmm0, arg13)
                            
                            arg9 = arg15
                
                arg5 = var_6a0.32
                zmm4 = var_680.32
                zmm5 = var_660.32
                zmm0 = _mm256_sub_ps(var_520, arg5)
                zmm1 = _mm256_sub_ps(var_500, zmm4)
                zmm2 = _mm256_sub_ps(var_4e0, zmm5)
                arg6 = var_6c0_1
                zmm0 = _mm256_mul_ps(arg6, zmm0)
                zmm1 = _mm256_mul_ps(arg6, zmm1)
                zmm2 = _mm256_mul_ps(arg6, zmm2)
                var_6a0.32 = _mm256_maskstore_ps(arg8, _mm256_add_ps(arg5, zmm0))
                var_680.32 = _mm256_maskstore_ps(arg8, _mm256_add_ps(zmm4, zmm1))
                zmm0 = _mm256_add_ps(zmm5, zmm2)
                var_660.32 = _mm256_maskstore_ps(arg8, zmm0)
                zmm4[0].o = var_a00
                zmm5[0].o = var_960
                zmm2 = var_980.32
                arg5 = var_9e0_1
        
        arg10 = arg9
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x88)
        zmm1 = _mm256_xor_ps(arg5, _mm256_cmp_ps(arg13, arg13, 0xf))
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_6a0.32 = _mm256_maskstore_ps(zmm1, arg13)
            var_680.32 = _mm256_maskstore_ps(zmm1, arg13)
            var_660.32 = _mm256_maskstore_ps(zmm1, arg13)
        
        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
        zmm1[0].o = var_6a0
        int128_t var_690
        zmm2[0].o = var_690
        arg5[0].o = var_680
        int128_t var_670
        zmm4[0].o = var_670
        zmm5[0].o = var_660
        int128_t var_650
        arg6[0].o = var_650
        arg9[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
        arg8[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 0x28)
        int128_t var_220 = arg5[0].o
        arg5[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        arg12[0].o = zx.o(0)
        int128_t var_210_1 = arg5[0].o
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xa8)
        int128_t var_200_1 = arg5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
        int128_t var_1f0_1 = zmm1[0].o
        zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, zx.o(0))
        arg5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zx.o(0))
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg6[0].o, 0x28)
        int128_t var_1e0_1 = zmm4[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
        int128_t var_1d0_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg6[0].o, 0xa8)
        int128_t var_1c0_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        int128_t var_1b0_1 = zmm1[0].o
        uint64_t j_4 = 0xff
        arg9 = arg10
        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        
        do
            uint64_t rcx_47
            uint64_t rflags_1
            
            if (j_4 == 0)
                rcx_47 = 0x40
            else
                rcx_47, rflags_1 = _bit_scan_forward(j_4)
            double var_120[0x4] = zmm0
            zmm1[0].o = (&var_220)[rcx_47]
            *(r12 + sx.q(*(&var_120 + ((zx.q(rcx_47.d) & 7) << 2))) * 0x30 + 0x10) = zmm1[0].o
            j_4 &= rol.q(-2, rcx_47.b)
        while (j_4 != 0)
        
        r9 = zx.q(r9.d + 8)
    while (r9.d s< i_5)
    
    i_4 = zx.q(arg19)
    
    if (r9.d s< i_4.d)
        goto label_1401e89ea
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
return i_4
