// 函数: sub_1401ef330
// 地址: 0x1401ef330
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
uint32_t zmm2[0x8]
zmm2[0].o = arg18
int32_t* r14 = arg16
int32_t i_5 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
uint64_t i_4
double var_d20[0x2]
int64_t var_c60[0x2]
double var_b40[0x4]
double var_b00[0x4]
uint32_t var_a20[0x4]
int128_t var_a00
uint32_t var_9e0[0x4]
uint64_t var_9a0
float var_940[0x8]
int128_t var_920
double var_700[0x4]
uint64_t r15
double zmm0[0x4]
float zmm1[0x8]
float zmm4[0x8]
double zmm5[0x4]

if (i_5 s<= 0)
    r15 = 0
    i_4 = zx.q(arg20)
    
    if (0 s< i_4.d)
    label_1401f60ca:
        zmm0[0].o = zx.o(r15.d)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
        zmm2[0].o = zx.o(i_4.d)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg9[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        arg10[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm5 = _mm256_insertf128_ps(arg10, arg9[0].o, 1)
        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        arg7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        arg6 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(arg6, arg7[0].o, 1))
        int64_t r11_6 = sx.q(arg6[0])
        int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        int64_t r15_3 = sx.q(arg7[0].d)
        int64_t r12_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
        int64_t rbx_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
        arg8 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_142fc9520)
        arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm4[0].o = zx.o(*(zx.q(arg5[0]) + arg2 + r15_3))
        int32_t temp0_2534 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3)
        uint32_t* rcx_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        int64_t rax_370 = sx.q(temp0_2534)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_47 + arg2 + r12_3), 1)
        uint32_t* rdi_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_26 + arg2 + rbx_32), 2)
        uint32_t* rdx_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_45 + arg2 + rax_370), 3)
        int64_t rdx_47 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        zmm4[0].o = zx.o(*(zx.q(arg8[0]) + arg2 + r11_6))
        int32_t temp0_2542 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
        uint32_t* rsi_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_17 + arg2 + r14_3), 1)
        int64_t rdi_29 = sx.q(temp0_2542)
        uint32_t* rsi_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_18 + arg2 + rdx_47), 2)
        uint64_t rcx_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_51 + arg2 + rdi_29), 3)
        arg6[0].o = zx.o(*(arg2 + r15_3))
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg2 + r12_3), 1)
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg2 + rbx_32), 2)
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg2 + rax_370), 3)
        double var_8c0_1[0x2] = arg6[0].o
        arg6[0].o = zx.o(*(arg2 + r11_6))
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg2 + r14_3), 1)
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg2 + rdx_47), 2)
        arg7[0].o = zx.o(arg4)
        arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 2)
        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0)
        arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
        zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
        arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg2 + rdi_29), 3)
        float var_460_2[0x8] = arg6
        arg5 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
        float rax_371 = arg5[0]
        int32_t temp0_2561 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
        zmm4[0].o = zx.o(*(arg3 + sx.q(rax_371)))
        int64_t rax_374 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + sx.q(temp0_2561)), 1)
        int64_t rcx_55 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rax_374), 2)
        int64_t rax_376 = sx.q(arg5[0])
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rcx_55), 3)
        int32_t temp0_2568 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
        zmm5[0].o = zx.o(*(arg3 + rax_376))
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg3 + sx.q(temp0_2568)), 1)
        int64_t rax_379 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg3 + rax_379), 2)
        int64_t rax_381 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg3 + rax_381), 3)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        double var_ac0_2[0x4] = zmm0
        arg14 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        zmm2 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
        zmm1[0].o &= not.o(arg9[0].o)
        zmm0[0].o &= not.o(arg10[0].o)
        arg11[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
        int128_t var_780
        int128_t var_760
        int128_t var_740
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            int32_t var_ae0_1[0x8] = arg14
            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            arg9[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            arg15[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
            arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = 4
            zmm1[0].o = zx.o(arg16)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0].q)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            float var_c20_3[0x8] = arg5
            zmm4 = _mm256_insertf128_ps(arg5, arg8[0].o, 1)
            uint32_t var_880_1[0x8] = zmm2
            zmm0 = _mm256_and_ps(zmm4, zmm2)
            int64_t r8_12 = sx.q(zmm0[0].d)
            int32_t temp0_2600 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int64_t r9_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rbx_34 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int64_t rdi_31 = sx.q(zmm0[0].d)
            int32_t temp0_2604 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2605 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2606 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = zx.o(*(arg16 + r8_12))
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + sx.q(temp0_2600)), 1)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + r9_10), 2)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + rbx_34), 3)
            zmm2[0].o = zx.o(*(arg16 + rdi_31))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg16 + sx.q(temp0_2604)), 1)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg16 + sx.q(temp0_2605)), 2)
            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg16 + sx.q(temp0_2606)), 3)
            arg12 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x18)
            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x18)
            zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1c)
            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x1c)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
            arg7 = _mm256_and_ps(zmm4, zmm0)
            uint64_t r8_13 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 1))
            uint64_t r9_11 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 2))
            zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
            uint64_t r11_7 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            uint64_t rsi_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rcx_59 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t r10_8 = zx.q(arg7[0].d)
            double var_980_1[0x4] = zmm5
            zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_1434429e0)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 3)
            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 3)
            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
            zmm5 = _mm256_or_ps(zmm5, arg6)
            zmm4 = _mm256_and_ps(zmm4, zmm5)
            uint64_t rax_387 = zx.q(zmm4[0])
            uint64_t rbx_35 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            zmm5[0].o = zx.o(*(rax_387 + &data_143442ba0))
            uint64_t rax_389 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_35 + &data_143442ba0), 1)
            uint64_t rbx_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_389 + &data_143442ba0), 2)
            uint64_t rax_390 = zx.q(zmm4[0])
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_36 + &data_143442ba0), 3)
            uint64_t rbx_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_390 + &data_143442ba0), 4)
            uint64_t rax_391 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_37 + &data_143442ba0), 5)
            uint64_t rbx_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_391 + &data_143442ba0), 6)
            zmm4[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm4[0].o, *(rbx_38 + &data_143442ba0), 7)
            uint64_t rbx_39 = zx.q(zmm0[0].d)
            uint64_t rdx_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
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
            char temp0_2662 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o)
            double var_b60_1[0x4] = arg9
            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            int32_t var_ca0_1[0x8] = arg14
            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
            zmm4[0].o = zx.o(0)
            float var_a80_3[0x8] = zmm4
            zmm4[0].o = zx.o(0)
            
            if (temp0_2662 != 0)
                zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                zmm4 = _mm256_and_ps(zmm0, arg7)
            
            int128_t var_c00_2 = arg15[0].o
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442840)
            float var_bc0_3[0x8] = arg6
            int128_t var_960_1 = arg13[0].o
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
            zmm5[0].o &= arg11[0].o
            arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
            arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            int32_t var_be0_1[0x8] = arg12
            
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
            
            arg14 = var_ae0_1
            arg13 = var_bc0_3
            arg6 = var_c20_3
            arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
            var_d20.32 = zmm0
            arg9 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm1[0].o = zx.o(*(rbx_39 + &data_143442b80))
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_22 + &data_143442b80), 1)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_59 + &data_143442b80), 2)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_51 + &data_143442b80), 3)
            zmm1[0].o &= arg8[0].o
            zmm2[0].o = zx.o(*(r10_8 + &data_143442b80))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r8_13 + &data_143442b80), 1)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r9_11 + &data_143442b80), 2)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_7 + &data_143442b80), 3)
            zmm1[0].o &= arg6[0].o
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            double var_9c0_4[0x4] = zmm0
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
            bool cond:5_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            double var_d40_2[0x4] = arg9
            float var_b80_2[0x8] = arg10
            int128_t var_ce0_1 = arg11[0].o
            float var_c80_4[0x8]
            
            if (cond:5_1)
                arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                zmm0[0].o = zx.o(0)
                var_c80_4 = zmm0
                arg7 = var_b60_1
                arg8[0].o = var_c00_2
                arg13 = var_ca0_1
                arg5[0].o = var_960_1
            else
                float var_b20_1[0x8] = arg15
                zmm1 = __vandps_ymmqq_ymmqq_memqq(var_be0_1, data_143442ae0)
                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                zmm4[0].o &= zmm0[0].o
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                bool cond:4_1 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o) == 0
                var_b40[0].o = arg12[0].o
                double var_d00_1[0x4]
                uint32_t var_c80_3[0x8]
                
                if (cond:4_1)
                    zmm2[0].o = zx.o(0)
                    var_c80_3 = zmm2
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    zmm2[0].o = zx.o(0)
                    var_d00_1 = zmm2
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm2[0].o = zx.o(0)
                else
                    zmm5[0].o = zx.o(0)
                    arg6[0].o = zx.o(0)
                    zmm2[0].o = arg18
                    
                    if (zx.o(0) f>= zmm2[0])
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        var_c80_3 = zmm2
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        var_d00_1 = zmm2
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
                            var_d00_1 = arg7
                            var_c80_3 = arg7
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
                            var_c80_3 = _mm256_and_ps(arg12, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            
                            if (arg19 != 1)
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
                            arg10 = var_c80_3
                            var_d00_1 = arg7
                            arg14 = var_ae0_1
                            arg9 = var_d40_2
                            arg11[0].o = var_ce0_1
                            arg13 = var_bc0_3
                            arg12[0].o = var_b40[0].o
                    
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                    arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                    zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                    zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                    zmm2 = _mm256_and_ps(zmm4, zmm5)
                
                var_a80_3 = zmm2
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
                    var_c80_4 = arg7
                    arg7 = var_b60_1
                    arg8[0].o = var_c00_2
                    arg13 = var_ca0_1
                    arg5[0].o = var_960_1
                    arg15 = var_b20_1
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
                    arg5[0].o = arg18
                    int32_t rax_396
                    rax_396.b = zx.o(0) f>= arg5[0]
                    zmm2[0].o = zx.o(neg.d(rax_396))
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
                    arg5 = _mm256_or_ps(zmm0, zmm2)
                    zmm0 = _mm256_and_ps(arg5, zmm1)
                    arg15 = var_b20_1
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        arg10 = _mm256_blendv_ps(var_c80_3, zmm2, zmm0)
                        arg7 = _mm256_blendv_ps(var_d00_1, zmm2, zmm0)
                        var_c80_3 = arg10
                        var_d00_1 = arg7
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg13 = _mm256_andnot_ps(arg5, zmm1)
                    int32_t temp0_2805 = _mm256_movemask_ps(arg13)
                    
                    if (temp0_2805 == 0)
                        var_c80_4 = arg7
                    label_1401f7366:
                        arg9 = var_d40_2
                        arg7 = var_b60_1
                        arg8[0].o = var_c00_2
                        arg13 = var_ca0_1
                    else
                        arg7 = var_bc0_3
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        arg9[0].o = arg18
                        
                        if (arg9[0].o f>= 1f)
                            arg10 = _mm256_blendv_ps(var_c80_3, zmm2, arg13)
                            zmm1 = _mm256_blendv_ps(var_d00_1, zmm2, arg13)
                            var_c80_4 = zmm1
                            goto label_1401f7366
                        
                        var_9e0.32 = arg5
                        var_9a0.32 = zmm5
                        var_a00 = arg6[0].o
                        zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg14 = zmm2
                        zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        arg5[0].o = __vpmovzxdq_xmmdq_xmmq(arg15[0].q)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                        arg6 = var_9c0_4
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm4[0].o = __vpmovzxdq_xmmdq_xmmq(zmm4[0].q)
                        zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                        arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg11 = var_d20.32
                        arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                        arg7[0].o = _mm256_extractf128_ps(var_b80_2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b80_2[0].o, zmm2[0].o)
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
                        float var_a60_1[0x8] = zmm1
                        arg6 = _mm256_and_ps(arg5, zmm2)
                        zmm1[0].o = _mm_permute_ps(arg9[0].o, 0)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        zmm2[0].o = arg12[0].o
                        zmm2[0] = float.s(arg17 - 1)
                        arg5 = _mm256_cvtepi32_ps(arg14)
                        zmm1 = _mm256_mul_ps(zmm1, arg5)
                        arg8[0].o = zmm2[0].o f* arg9[0].d
                        zmm1 = _mm256_cvttps_epi32(zmm1)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        int32_t var_aa0_4[0x8] = arg14
                        zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                        arg7 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm4 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                        int32_t rdx_52 = int.d(arg8[0])
                        int32_t rbx_40 = 0
                        
                        if (rdx_52 s>= 0)
                            rbx_40 = rdx_52
                        
                        if (arg17 - 2 s<= rbx_40)
                            rbx_40 = arg17 - 2
                        
                        var_a20.32 = arg7
                        var_700[0].o = arg8[0].o
                        var_920.32 = zmm4
                        var_c60.32 = arg6
                        
                        if (arg17 s< 0x100)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            int64_t var_cc0_2[0x2] = zmm2[0].o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            char rdx_54 = temp0_2805.b
                            
                            if ((rdx_54 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            arg11[0].o = var_ce0_1
                            
                            if ((rdx_54 & 2) != 0)
                                uint32_t rax_428 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_428, 1)
                            
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg6 = var_a60_1
                            var_b00[0].o = __vextractf128_memdq_ymmdq_immb(arg6[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                            
                            if ((rdx_54 & 4) == 0)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b00[0].o)
                                
                                if ((rdx_54 & 8) != 0)
                                    goto label_1401f7acb
                                
                                goto label_1401f742b
                            
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm4[0].q), 2)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b00[0].o)
                            
                            if ((rdx_54 & 8) != 0)
                            label_1401f7acb:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_474 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_474, 3)
                                zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((rdx_54 & 0x10) == 0)
                                    goto label_1401f743a
                                
                                goto label_1401f7af6
                            
                        label_1401f742b:
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            
                            if ((rdx_54 & 0x10) != 0)
                            label_1401f7af6:
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                
                                if ((rdx_54 & 0x20) != 0)
                                label_1401f7b0a:
                                    uint32_t rax_478 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_478, 5)
                                    
                                    if ((rdx_54 & 0x40) == 0)
                                        goto label_1401f744e
                                    
                                    goto label_1401f7b1b
                            else
                            label_1401f743a:
                                
                                if ((rdx_54 & 0x20) != 0)
                                    goto label_1401f7b0a
                            
                            int32_t var_c40_2[0x4]
                            
                            if ((rdx_54 & 0x40) != 0)
                            label_1401f7b1b:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm2[0].q), 6)
                                var_c40_2 = zmm5[0].o
                                
                                if (temp0_2805.b s< 0)
                                label_1401f7b3f:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_482 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_482, 7)
                            else
                            label_1401f744e:
                                var_c40_2 = zmm5[0].o
                                
                                if (temp0_2805.b s< 0)
                                    goto label_1401f7b3f
                            
                            zmm0[0].o &= data_142fc92e0
                            zmm1[0].o = zx.o(0)
                            arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = zx.o(rbx_40)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                            arg14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            double var_940_1[0x4] = zmm0
                            int32_t temp0_3051 = _mm256_movemask_ps(_mm256_and_ps(arg13, zmm0))
                            zmm0 = arg7
                            
                            if (temp0_3051 != 0)
                                zmm0 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                arg9[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                                zmm1[0].o ^= zmm2[0].o
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                                zmm0[0].o ^= zmm2[0].o
                                arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                arg8 = var_a20.32
                                zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, var_aa0_4, arg5)
                                zmm1[0].o = var_c40_2
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                zmm4[0].o = var_b40[0].o
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                zmm5 = var_bc0_3
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                arg6 = _mm256_and_ps(zmm4, arg5)
                                arg12 = _mm256_and_ps(arg13, arg6)
                                int32_t i = _mm256_movemask_ps(arg12)
                                
                                if (i != 0)
                                    arg5 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                    var_b80_2[0].o =
                                        __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_b80_2[0].o, var_b80_2[0].o)
                                    
                                    do
                                        zmm5 = arg5
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_cc0_2)
                                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60)
                                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                        char temp0_3091 = _mm256_movemask_ps(arg12)
                                        
                                        if ((temp0_3091 & 1) != 0)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 0)
                                        
                                        arg12[0].o = var_b40[0].o
                                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_3091 & 2) == 0)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            arg11[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, 
                                                var_a60_1[0].o)
                                            
                                            if ((temp0_3091 & 4) != 0)
                                                goto label_1401f7572
                                            
                                            goto label_1401f769e
                                        
                                        uint32_t rax_431 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_431, 1)
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                        arg11[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_a60_1[0].o)
                                        
                                        if ((temp0_3091 & 4) != 0)
                                        label_1401f7572:
                                            arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg7[0]), 2)
                                            zmm1[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_b00[0].o)
                                            
                                            if ((temp0_3091 & 8) == 0)
                                                goto label_1401f76b1
                                            
                                            goto label_1401f7598
                                        
                                    label_1401f769e:
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_b00[0].o)
                                        
                                        if ((temp0_3091 & 8) == 0)
                                        label_1401f76b1:
                                            arg5 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                            
                                            if ((temp0_3091 & 0x10) != 0)
                                                goto label_1401f75c4
                                            
                                            goto label_1401f76c1
                                        
                                    label_1401f7598:
                                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                        uint32_t rax_435 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_435, 3)
                                        arg5 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                        
                                        if ((temp0_3091 & 0x10) != 0)
                                        label_1401f75c4:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 4)
                                            
                                            if ((temp0_3091 & 0x20) == 0)
                                                goto label_1401f76cb
                                            
                                            goto label_1401f75d9
                                        
                                    label_1401f76c1:
                                        
                                        if ((temp0_3091 & 0x20) == 0)
                                        label_1401f76cb:
                                            
                                            if ((temp0_3091 & 0x40) != 0)
                                                goto label_1401f75eb
                                            
                                            goto label_1401f76d5
                                        
                                    label_1401f75d9:
                                        uint32_t rax_439 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_439, 5)
                                        
                                        if ((temp0_3091 & 0x40) == 0)
                                        label_1401f76d5:
                                            
                                            if (temp0_3091 s< 0)
                                            label_1401f7607:
                                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                uint32_t rax_443 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_443, 7)
                                        else
                                        label_1401f75eb:
                                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm1[0].q), 6)
                                            
                                            if (temp0_3091 s< 0)
                                                goto label_1401f7607
                                        
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
                                            __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_b80_2[0].o)
                                        zmm4[0].o =
                                            __vpsubd_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_b80_2[0].o)
                                        arg5 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_bc0_3[0].o, zmm4[0].o)
                                        zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                        arg6 = _mm256_and_ps(zmm1, arg11)
                                        arg12 = _mm256_and_ps(arg6, arg13)
                                        i = _mm256_movemask_ps(arg12)
                                        arg8 = zmm5
                                        arg11[0].o = var_ce0_1
                                    while (i != 0)
                            
                            arg5 = var_940_1
                            zmm1 = _mm256_andnot_ps(arg5, arg13)
                            
                            if (_mm256_movemask_ps(zmm1) == 0)
                                arg14 = var_ae0_1
                                arg9 = var_d40_2
                                arg12[0].o = var_b40[0].o
                            else
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm2 = _mm256_cmp_ps(zmm1, zmm1, 0xf)
                                zmm4 = _mm256_xor_ps(arg5, zmm2)
                                zmm0 = _mm256_blendv_ps(zmm0, zmm1, zmm4)
                                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_c40_2)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_a20)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                                arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                                arg10 = _mm256_and_ps(arg6, zmm4)
                                arg8 = _mm256_and_ps(arg10, arg13)
                                int32_t i_1 = _mm256_movemask_ps(arg8)
                                
                                if (i_1 == 0)
                                    arg12[0].o = var_b40[0].o
                                else
                                    arg9 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                    arg12[0].o = var_b40[0].o
                                    
                                    do
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg9[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_cc0_2)
                                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60)
                                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                        char temp0_3160 = _mm256_movemask_ps(arg8)
                                        
                                        if ((temp0_3160 & 1) == 0)
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            
                                            if ((temp0_3160 & 2) != 0)
                                                goto label_1401f7811
                                            
                                            goto label_1401f7931
                                        
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg5[0].q), 0)
                                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_3160 & 2) != 0)
                                        label_1401f7811:
                                            uint32_t rax_451 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_451, 1)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, 
                                                var_a60_1[0].o)
                                            
                                            if ((temp0_3160 & 4) == 0)
                                                goto label_1401f7949
                                            
                                            goto label_1401f7831
                                        
                                    label_1401f7931:
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                        arg8[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_a60_1[0].o)
                                        
                                        if ((temp0_3160 & 4) == 0)
                                        label_1401f7949:
                                            zmm1[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_b00[0].o)
                                            
                                            if ((temp0_3160 & 8) != 0)
                                                goto label_1401f7857
                                            
                                            goto label_1401f795c
                                        
                                    label_1401f7831:
                                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg7[0]), 2)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_b00[0].o)
                                        
                                        if ((temp0_3160 & 8) != 0)
                                        label_1401f7857:
                                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            uint32_t rax_455 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_455, 3)
                                            arg5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                            
                                            if ((temp0_3160 & 0x10) == 0)
                                                goto label_1401f796c
                                            
                                            goto label_1401f7883
                                        
                                    label_1401f795c:
                                        arg5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                        
                                        if ((temp0_3160 & 0x10) == 0)
                                        label_1401f796c:
                                            
                                            if ((temp0_3160 & 0x20) != 0)
                                                goto label_1401f7898
                                            
                                            goto label_1401f7976
                                        
                                    label_1401f7883:
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg5[0].q), 4)
                                        
                                        if ((temp0_3160 & 0x20) != 0)
                                        label_1401f7898:
                                            uint32_t rax_459 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_459, 5)
                                            
                                            if ((temp0_3160 & 0x40) == 0)
                                                goto label_1401f7980
                                            
                                            goto label_1401f78aa
                                        
                                    label_1401f7976:
                                        
                                        if ((temp0_3160 & 0x40) != 0)
                                        label_1401f78aa:
                                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, zx.d(*zmm1[0].q), 6)
                                            
                                            if (temp0_3160 s< 0)
                                            label_1401f78c6:
                                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                uint32_t rax_463 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, rax_463, 7)
                                        else
                                        label_1401f7980:
                                            
                                            if (temp0_3160 s< 0)
                                                goto label_1401f78c6
                                        
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
                                
                                arg14 = var_ae0_1
                                arg9 = var_d40_2
                            
                            zmm1 = var_c80_3
                            arg10 = _mm256_blendv_ps(zmm1, zmm0, arg13)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_cc0_2)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            
                            if ((rdx_54 & 1) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                
                                if ((rdx_54 & 2) != 0)
                                    goto label_1401fc824
                                
                                goto label_1401f7fe0
                            
                            zmm2[0].o = zx.o(*zmm1[0].q)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            
                            if ((rdx_54 & 2) != 0)
                            label_1401fc824:
                                uint32_t rax_704 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_704, 1)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a60_1[0].o)
                                
                                if ((rdx_54 & 4) == 0)
                                    goto label_1401f7ff7
                                
                                goto label_1401fc843
                            
                        label_1401f7fe0:
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a60_1[0].o)
                            
                            if ((rdx_54 & 4) == 0)
                            label_1401f7ff7:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_b00[0].o)
                                
                                if ((rdx_54 & 8) != 0)
                                    goto label_1401fc868
                                
                                goto label_1401f8009
                            
                        label_1401fc843:
                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0]), 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_b00[0].o)
                            
                            if ((rdx_54 & 8) != 0)
                            label_1401fc868:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_708 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_708, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_54 & 0x10) == 0)
                                    goto label_1401f8018
                                
                                goto label_1401fc893
                            
                        label_1401f8009:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_54 & 0x10) == 0)
                            label_1401f8018:
                                
                                if ((rdx_54 & 0x20) != 0)
                                    goto label_1401fc8a7
                                
                                goto label_1401f8021
                            
                        label_1401fc893:
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm1[0].q), 4)
                            
                            if ((rdx_54 & 0x20) != 0)
                            label_1401fc8a7:
                                uint32_t rax_712 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_712, 5)
                                
                                if ((rdx_54 & 0x40) == 0)
                                    goto label_1401f802a
                                
                                goto label_1401fc8b8
                            
                        label_1401f8021:
                            
                            if ((rdx_54 & 0x40) != 0)
                            label_1401fc8b8:
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg5[0].q), 6)
                                
                                if (temp0_2805.b s< 0)
                                label_1401fc8d3:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_716 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_716, 7)
                            else
                            label_1401f802a:
                                
                                if (temp0_2805.b s< 0)
                                    goto label_1401fc8d3
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            arg6 = _mm256_blendv_ps(var_d00_1, zmm0, arg13)
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm1[0].o
                            arg5 = var_bc0_3
                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm1[0].o ^= arg5[0].o
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg13)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                arg6 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg6, var_aa0_4, zmm0)
                            
                            arg7 = var_b60_1
                            arg8[0].o = var_c00_2
                            arg13 = var_ca0_1
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_cc0_2)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_c60)
                            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            
                            if ((rdx_54 & 1) == 0)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((rdx_54 & 2) != 0)
                                    goto label_1401fc911
                                
                                goto label_1401f80eb
                            
                            zmm0[0].o = zx.o(*zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            
                            if ((rdx_54 & 2) != 0)
                            label_1401fc911:
                                uint32_t rax_720 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_720, 1)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60_1[0].o)
                                
                                if ((rdx_54 & 4) == 0)
                                    goto label_1401f8102
                                
                                goto label_1401fc930
                            
                        label_1401f80eb:
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60_1[0].o)
                            
                            if ((rdx_54 & 4) == 0)
                            label_1401f8102:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_b00[0].o)
                                
                                if ((rdx_54 & 8) != 0)
                                    goto label_1401fc955
                                
                                goto label_1401f8114
                            
                        label_1401fc930:
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm4[0].q), 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_b00[0].o)
                            
                            if ((rdx_54 & 8) != 0)
                            label_1401fc955:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_724 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_724, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_54 & 0x10) == 0)
                                    goto label_1401f8123
                                
                                goto label_1401fc980
                            
                        label_1401f8114:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_54 & 0x10) == 0)
                            label_1401f8123:
                                zmm2[0].o &= data_142fc92e0
                                
                                if ((rdx_54 & 0x20) != 0)
                                    goto label_1401fc99c
                                
                                goto label_1401f8134
                            
                        label_1401fc980:
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                            zmm2[0].o &= data_142fc92e0
                            
                            if ((rdx_54 & 0x20) == 0)
                            label_1401f8134:
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_54 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm5[0]), 6)
                            else
                            label_1401fc99c:
                                uint32_t rax_728 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_728, 5)
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_54 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm5[0]), 6)
                            
                            zmm5 = var_9a0.32
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            var_c80_4 = arg6
                            
                            if (temp0_2805.b s< 0)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_506 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_506, 7)
                            
                            arg6[0].o = var_a00
                            zmm4 = var_920.32
                            zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            zmm0[0].o &= data_142fc92e0
                        else
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            var_940[0].o = zmm0[0].o
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            int64_t var_cc0_1[0x2] = arg5[0].o
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            char rdx_53 = temp0_2805.b
                            
                            if ((rdx_53 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                            
                            if ((rdx_53 & 2) != 0)
                                int64_t rax_404 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_404, 1)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2 = var_a60_1
                            var_b00[0].o = __vextractf128_memdq_ymmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            
                            if ((rdx_53 & 4) == 0)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_b00[0].o)
                                
                                if ((rdx_53 & 8) != 0)
                                    goto label_1401f7a31
                                
                                goto label_1401f6d3d
                            
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 2)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_b00[0].o)
                            
                            if ((rdx_53 & 8) != 0)
                            label_1401f7a31:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_466 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_466, 3)
                                zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((rdx_53 & 0x10) == 0)
                                    goto label_1401f6d4c
                                
                                goto label_1401f7a56
                            
                        label_1401f6d3d:
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            
                            if ((rdx_53 & 0x10) == 0)
                            label_1401f6d4c:
                                
                                if ((rdx_53 & 0x20) != 0)
                                    goto label_1401f7a64
                                
                                goto label_1401f6d55
                            
                        label_1401f7a56:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rdx_53 & 0x20) != 0)
                            label_1401f7a64:
                                int64_t rax_468 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_468, 5)
                                
                                if ((rdx_53 & 0x40) == 0)
                                    goto label_1401f6d5e
                                
                                goto label_1401f7a78
                            
                        label_1401f6d55:
                            
                            if ((rdx_53 & 0x40) != 0)
                            label_1401f7a78:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                
                                if (temp0_2805.b s< 0)
                                label_1401f7a90:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_470 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_470, 7)
                            else
                            label_1401f6d5e:
                                
                                if (temp0_2805.b s< 0)
                                    goto label_1401f7a90
                            
                            zmm1[0].o = zx.o(0)
                            arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = zx.o(rbx_40)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                            arg14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            double var_8e0_1[0x4] = zmm0
                            zmm1 = arg7
                            
                            if (_mm256_movemask_ps(_mm256_and_ps(arg13, zmm0)) != 0)
                                zmm0 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int32_t var_c40_1[0x4] = arg5[0].o
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                                zmm1[0].o ^= zmm2[0].o
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                                zmm0[0].o ^= zmm2[0].o
                                arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                arg8 = var_a20.32
                                zmm1 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, var_aa0_4, arg5)
                                zmm0[0].o = var_940[0].o
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                zmm4[0].o = var_b40[0].o
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                zmm5 = var_bc0_3
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
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_cc0_1)
                                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_c60)
                                        arg10 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        char temp0_2927 = _mm256_movemask_ps(arg12)
                                        
                                        if ((temp0_2927 & 1) != 0)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg10[0].q, 0)
                                        
                                        arg6[0].o = var_b40[0].o
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                        
                                        if ((temp0_2927 & 2) == 0)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            arg11[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, 
                                                var_a60_1[0].o)
                                            
                                            if ((temp0_2927 & 4) != 0)
                                                goto label_1401f6e79
                                            
                                            goto label_1401f6fa3
                                        
                                        int64_t rax_406 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_406, 1)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        arg11[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60_1[0].o)
                                        
                                        if ((temp0_2927 & 4) != 0)
                                        label_1401f6e79:
                                            arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg5[0].q, 2)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_b00[0].o)
                                            
                                            if ((temp0_2927 & 8) == 0)
                                                goto label_1401f6fb6
                                            
                                            goto label_1401f6e9c
                                        
                                    label_1401f6fa3:
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_b00[0].o)
                                        
                                        if ((temp0_2927 & 8) == 0)
                                        label_1401f6fb6:
                                            arg10 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                            
                                            if ((temp0_2927 & 0x10) != 0)
                                                goto label_1401f6ec2
                                            
                                            goto label_1401f6fc6
                                        
                                    label_1401f6e9c:
                                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_408 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_408, 3)
                                        arg10 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                        
                                        if ((temp0_2927 & 0x10) != 0)
                                        label_1401f6ec2:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg10[0].q, 4)
                                            
                                            if ((temp0_2927 & 0x20) == 0)
                                                goto label_1401f6fd0
                                            
                                            goto label_1401f6ed1
                                        
                                    label_1401f6fc6:
                                        
                                        if ((temp0_2927 & 0x20) == 0)
                                        label_1401f6fd0:
                                            
                                            if ((temp0_2927 & 0x40) != 0)
                                                goto label_1401f6ee6
                                            
                                            goto label_1401f6fda
                                        
                                    label_1401f6ed1:
                                        int64_t rax_410 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_410, 5)
                                        
                                        if ((temp0_2927 & 0x40) == 0)
                                        label_1401f6fda:
                                            
                                            if (temp0_2927 s< 0)
                                            label_1401f6eff:
                                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                                int64_t rax_412 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_412, 7)
                                        else
                                        label_1401f6ee6:
                                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *zmm0[0], 6)
                                            
                                            if (temp0_2927 s< 0)
                                                goto label_1401f6eff
                                        
                                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm2[0].o, 
                                            data_142d8f750)
                                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_c40_1)
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
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_bc0_3[0].o, zmm5[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        arg9 = _mm256_and_ps(zmm0, arg5)
                                        arg12 = _mm256_and_ps(arg9, arg13)
                                        i_2 = _mm256_movemask_ps(arg12)
                                        arg8 = zmm4
                                    while (i_2 != 0)
                            
                            arg5 = var_8e0_1
                            zmm0 = _mm256_andnot_ps(arg5, arg13)
                            
                            if (_mm256_movemask_ps(zmm0) == 0)
                                arg14 = var_ae0_1
                                arg9 = var_d40_2
                                arg11[0].o = var_ce0_1
                                arg7[0].o = var_b40[0].o
                                arg6 = var_d00_1
                                arg15 = var_c60.32
                            else
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm2 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                                zmm4 = _mm256_xor_ps(arg5, zmm2)
                                zmm1 = _mm256_blendv_ps(zmm1, zmm0, zmm4)
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, var_940[0].o)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, var_a20)
                                arg11[0].o = zx.o(0)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                                arg9 = _mm256_and_ps(_mm256_insertf128_ps(arg7, arg6[0].o, 1), zmm4)
                                arg10 = _mm256_and_ps(arg9, arg13)
                                int32_t i_3 = _mm256_movemask_ps(arg10)
                                
                                if (i_3 == 0)
                                    arg12[0].o = var_b40[0].o
                                    arg15 = var_c60.32
                                else
                                    arg6 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                    arg12[0].o = var_b40[0].o
                                    arg15 = var_c60.32
                                    
                                    do
                                        arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_cc0_1)
                                        zmm5[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm5[0].o)
                                        arg8 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        char temp0_2997 = _mm256_movemask_ps(arg10)
                                        
                                        if ((temp0_2997 & 1) == 0)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                            
                                            if ((temp0_2997 & 2) != 0)
                                                goto label_1401f710f
                                            
                                            goto label_1401f7223
                                        
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                            *arg8[0].q, 0)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                        
                                        if ((temp0_2997 & 2) != 0)
                                        label_1401f710f:
                                            uint16_t* rax_417 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_417, 1)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg10[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                var_a60_1[0].o)
                                            
                                            if ((temp0_2997 & 4) == 0)
                                                goto label_1401f723b
                                            
                                            goto label_1401f7132
                                        
                                    label_1401f7223:
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        arg10[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_a60_1[0].o)
                                        
                                        if ((temp0_2997 & 4) == 0)
                                        label_1401f723b:
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b00[0].o)
                                            
                                            if ((temp0_2997 & 8) != 0)
                                                goto label_1401f7155
                                            
                                            goto label_1401f724e
                                        
                                    label_1401f7132:
                                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 2)
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b00[0].o)
                                        
                                        if ((temp0_2997 & 8) != 0)
                                        label_1401f7155:
                                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                            uint16_t* rax_419 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_419, 3)
                                            arg8 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                            
                                            if ((temp0_2997 & 0x10) == 0)
                                                goto label_1401f725e
                                            
                                            goto label_1401f717b
                                        
                                    label_1401f724e:
                                        arg8 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                        
                                        if ((temp0_2997 & 0x10) == 0)
                                        label_1401f725e:
                                            
                                            if ((temp0_2997 & 0x20) != 0)
                                                goto label_1401f718a
                                            
                                            goto label_1401f7268
                                        
                                    label_1401f717b:
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                            *arg8[0].q, 4)
                                        
                                        if ((temp0_2997 & 0x20) != 0)
                                        label_1401f718a:
                                            uint16_t* rax_421 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_421, 5)
                                            
                                            if ((temp0_2997 & 0x40) == 0)
                                                goto label_1401f7272
                                            
                                            goto label_1401f719f
                                        
                                    label_1401f7268:
                                        
                                        if ((temp0_2997 & 0x40) != 0)
                                        label_1401f719f:
                                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *zmm0[0], 6)
                                            
                                            if (temp0_2997 s< 0)
                                            label_1401f71b8:
                                                zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                                uint16_t* rax_423 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm4[0].o, *rax_423, 7)
                                        else
                                        label_1401f7272:
                                            
                                            if (temp0_2997 s< 0)
                                                goto label_1401f71b8
                                        
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
                                
                                arg14 = var_ae0_1
                                arg9 = var_d40_2
                                arg11[0].o = var_ce0_1
                                arg6 = var_d00_1
                                arg7[0].o = arg12[0].o
                            
                            zmm0 = var_c80_3
                            arg10 = _mm256_blendv_ps(zmm0, zmm1, arg13)
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_cc0_1)
                            arg12 = arg15
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            
                            if ((rdx_53 & 1) != 0)
                                zmm2[0].o = zx.o(*zmm1[0].q)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            arg15 = var_b20_1
                            
                            if ((rdx_53 & 2) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60_1[0].o)
                                
                                if ((rdx_53 & 4) != 0)
                                    goto label_1401f7e1b
                                
                                goto label_1401f7c5b
                            
                            int64_t rax_488 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_488, 1)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60_1[0].o)
                            
                            if ((rdx_53 & 4) != 0)
                            label_1401f7e1b:
                                zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm5[0], 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b00[0].o)
                                
                                if ((rdx_53 & 8) == 0)
                                    goto label_1401f7c6d
                                
                                goto label_1401f7e3d
                            
                        label_1401f7c5b:
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b00[0].o)
                            
                            if ((rdx_53 & 8) == 0)
                            label_1401f7c6d:
                                zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                
                                if ((rdx_53 & 0x10) != 0)
                                    goto label_1401f7e62
                                
                                goto label_1401f7c7c
                            
                        label_1401f7e3d:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_490 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_490, 3)
                            zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                            
                            if ((rdx_53 & 0x10) != 0)
                            label_1401f7e62:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 4)
                                
                                if ((rdx_53 & 0x20) == 0)
                                    goto label_1401f7c85
                                
                                goto label_1401f7e70
                            
                        label_1401f7c7c:
                            
                            if ((rdx_53 & 0x20) == 0)
                            label_1401f7c85:
                                
                                if ((rdx_53 & 0x40) != 0)
                                    goto label_1401f7e84
                                
                                goto label_1401f7c8e
                            
                        label_1401f7e70:
                            int64_t rax_492 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_492, 5)
                            
                            if ((rdx_53 & 0x40) == 0)
                            label_1401f7c8e:
                                
                                if (temp0_2805.b s< 0)
                                label_1401f7e9c:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_494 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_494, 7)
                            else
                            label_1401f7e84:
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 6)
                                
                                if (temp0_2805.b s< 0)
                                    goto label_1401f7e9c
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            arg6 = _mm256_blendv_ps(arg6, zmm0, arg13)
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm1[0].o
                            arg5 = var_bc0_3
                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm1[0].o ^= arg5[0].o
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg13)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                arg6 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg6, var_aa0_4, zmm0)
                            
                            arg7 = var_b60_1
                            arg8[0].o = var_c00_2
                            arg13 = var_ca0_1
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_cc0_1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if ((rdx_53 & 1) == 0)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((rdx_53 & 2) != 0)
                                    goto label_1401f7ed1
                                
                                goto label_1401f7d52
                            
                            zmm0[0].o = zx.o(*zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            
                            if ((rdx_53 & 2) != 0)
                            label_1401f7ed1:
                                int64_t rax_497 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_497, 1)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60_1[0].o)
                                
                                if ((rdx_53 & 4) == 0)
                                    goto label_1401f7d69
                                
                                goto label_1401f7ef3
                            
                        label_1401f7d52:
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60_1[0].o)
                            
                            if ((rdx_53 & 4) == 0)
                            label_1401f7d69:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_b00[0].o)
                                
                                if ((rdx_53 & 8) != 0)
                                    goto label_1401f7f15
                                
                                goto label_1401f7d7b
                            
                        label_1401f7ef3:
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0].q, 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_b00[0].o)
                            
                            if ((rdx_53 & 8) != 0)
                            label_1401f7f15:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_499 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_499, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_53 & 0x10) == 0)
                                    goto label_1401f7d8a
                                
                                goto label_1401f7f3a
                            
                        label_1401f7d7b:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_53 & 0x10) == 0)
                            label_1401f7d8a:
                                
                                if ((rdx_53 & 0x20) != 0)
                                    goto label_1401f7f48
                                
                                goto label_1401f7d93
                            
                        label_1401f7f3a:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rdx_53 & 0x20) == 0)
                            label_1401f7d93:
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_53 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm5[0], 6)
                            else
                            label_1401f7f48:
                                int64_t rax_501 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_501, 5)
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_53 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm5[0], 6)
                            
                            zmm5 = var_9a0.32
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            var_c80_4 = arg6
                            
                            if (temp0_2805.b s< 0)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_487 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_487, 7)
                            
                            arg6[0].o = var_a00
                            zmm4 = var_920.32
                            zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        
                        zmm2[0].o = zx.o(0)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2 = __vxorps_ymmqq_ymmqq_memqq(zmm4, var_9e0.32)
                        arg5[0].o = zx.o(0)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        
                        if (arg19 != 1)
                            zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm5[0].o = data_142d3f5b0
                            zmm4[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                            zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm5 = var_9a0.32
                            zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                            zmm4[0].o = __vpermilps_xmmdq_memdq_immb(var_700[0].o, 0)
                            zmm1 = _mm256_sub_ps(_mm256_insertf128_ps(zmm4, zmm4[0].o, 1), 
                                _mm256_cvtepi32_ps(zmm1))
                            zmm4 = _mm256_div_ps(zmm1, _mm256_cvtepi32_ps(zmm0))
                        
                        zmm0 = _mm256_blendv_ps(arg5, zmm4, zmm2)
                    
                    arg5[0].o = var_960_1
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                    zmm2 = _mm256_blendv_ps(var_a80_3, zmm0, zmm1)
                    var_a80_3 = zmm2
            
            var_960_1.32 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg13, arg5[0].o, 1)
            double var_b40_1[0x4] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            int32_t var_bc0_4[0x8] = zmm0
            arg8[0].o = __vpmovzxdq_xmmdq_xmmq(arg15[0].q)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
            arg5[0].o = __vpmovzxdq_xmmdq_xmmq(arg5[0].q)
            zmm4 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
            float var_a60_2[0x8] = zmm4
            zmm5 = var_9c0_4
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            int32_t var_a20_1[0x4] = zmm0[0].o
            var_9a0.o = zmm5[0].o
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm0 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
            double var_d00_2[0x4] = zmm0
            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
            arg13 = var_b80_2
            zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            int128_t var_cc0_3 = zmm0[0].o
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            double var_b20_2[0x4] = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            double var_ca0_2[0x4] = zmm0
            zmm2 = var_d20.32
            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            var_b00[0].o = zmm0[0].o
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            int32_t var_aa0_5[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            uint32_t var_c60_1[0x4] = zmm0[0].o
            zmm1[0].o = data_142d3f5b0
            arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
            arg13[0].o = zmm0[0].o & arg11[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:8_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            float var_b60_2[0x8] = arg10
            arg8[0].o = arg11[0].o
            int128_t var_c40_3 = arg15[0].o
            
            if (not(cond:8_1))
                zmm0 = var_be0_1
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
                    zmm1 = var_bc0_4
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0 = var_960_1.32
                    arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg7[0].o = _mm256_extractf128_ps(var_a60_2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(var_b40_1[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b40_1[0].o, var_a60_2[0].o)
                    arg10 = var_b20_2
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg8 = var_d00_2
                    var_a60_2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    var_b40_1[0].o = data_1434426c0
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_b40_1[0].o)
                    var_a60_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60_2[0].o, arg5[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_b40_1[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, var_a60_2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_b40_1[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    var_b40_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_b40_1[0].o)
                    var_b40_1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_b40_1[0].o)
                    arg7 = _mm256_insertf128_ps(var_b40_1, zmm2[0].o, 1)
                    var_b40_1[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                    arg5 = _mm256_insertf128_ps(var_b40_1, zmm2[0].o, 1)
                    var_b40_1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg6[0].o = zx.o(0)
                    zmm2[0].o = _mm_permute_ps(var_b40_1[0].o, 0x50)
                    var_b40_1[0].o = _mm_permute_ps(var_b40_1[0].o, 0xfa)
                    arg8 = _mm256_insertf128_ps(zmm2, var_b40_1[0].o, 1)
                    zmm0 = _mm256_blendv_ps(arg6, zmm1, arg8)
                    double r8_14 = zmm0[0]
                    void* rsi_23 = arg16 i+ r8_14
                    int64_t r9_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    void* rdi_38 = arg16 + r9_12
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    double r10_9 = zmm0[0]
                    int64_t r11_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg10 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm0 = _mm256_blendv_ps(arg6, arg10, arg8)
                    zmm1[0].o = *(zmm0[0] + rsi_23)
                    float* rcx_62 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    float* rdx_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_62 + rdi_38), 0x10)
                    float* rcx_63 = zmm0[0]
                    zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm2 = _mm256_blendv_ps(arg6, zmm0, arg8)
                    zmm4[0].o = *(zmm2[0].q + rsi_23)
                    float* rax_510 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    float* rsi_24 = zmm2[0].q
                    float* rbx_41 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2 = _mm256_blendv_ps(arg6, arg7, arg5)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_510 + rdi_38), 0x10)
                    int64_t rax_511 = zmm2[0].q
                    void* rdi_39 = arg16 i+ r10_9
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_63 + rdi_39), 0x20)
                    int64_t rcx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_24 + rdi_39), 0x20)
                    void* rsi_25 = arg16 + rax_511
                    void* rdi_40 = arg16 + r11_8
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_55 + rdi_40), 0x30)
                    void* rdx_56 = arg16 + rcx_64
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_41 + rdi_40), 0x30)
                    int64_t rdi_41 = zmm2[0].q
                    arg7 = _mm256_blendv_ps(arg6, arg10, arg5)
                    arg10 = var_b60_2
                    int32_t* rbx_42 = arg7[0]
                    zmm0 = _mm256_blendv_ps(arg6, zmm0, arg5)
                    arg5[0].o = *(rbx_42 + rsi_25)
                    arg6[0].o = *(zmm0[0] + rsi_25)
                    void* rsi_26 = arg16 + rdi_41
                    float* rbx_44 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_44 + rdx_56), 0x10)
                    float* rbx_45 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_45 + rdx_56), 0x10)
                    int64_t rdx_57 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm2[0].q + rsi_26), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm0[0] + rsi_26), 0x20)
                    void* rsi_27 = arg16 + rdx_57
                    float* rbx_48 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_48 + rsi_27), 0x30)
                    float* rbx_49 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_49 + rsi_27), 0x30)
                    arg5[0].o = *(arg16 + rax_511)
                    arg6[0].o = *(arg16 i+ r8_14)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg16 + r9_12), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg16 i+ r10_9), 0x20)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg16 + r11_8), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rcx_64), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rdi_41), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rdx_57), 0x30)
                    arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    var_780.32 = _mm256_maskstore_ps(zmm5, arg5)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    var_760.32 = _mm256_maskstore_ps(zmm5, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                    var_740.32 = _mm256_maskstore_ps(zmm5, zmm0)
                
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm4[0].o = arg11[0].o ^ arg5[0].o
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                zmm1[0].o ^= arg5[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                arg11[0].o = arg13[0].o & zmm1[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg11[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                bool cond:13_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                arg9 = var_d40_2
                arg8[0].o = var_ce0_1
                
                if (not(cond:13_1))
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0].q)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    arg6 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm1 = var_980_1
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm5 = _mm256_and_ps(zmm0, arg6)
                    
                    if (_mm256_movemask_ps(zmm5) == 0)
                        arg13 = var_aa0_5
                        arg7 = var_ca0_2
                    else
                        arg12 = var_ca0_2
                        zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg5[0].o = data_1434426c0
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                        var_9e0.32 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                        zmm1 = var_aa0_5
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
                        arg15 = var_bc0_4
                        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg13 = var_960_1.32
                        arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg14 = var_a60_2
                        arg7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        arg10 = var_b40_1
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm2 = var_d00_2
                        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
                        arg13 = arg8
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        zmm2 = var_b20_2
                        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg14[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(arg5, zmm1, zmm4)
                        arg5 = _mm256_blendv_ps(arg5, arg6, zmm5)
                        arg6 = arg9
                        arg7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg12, var_9e0.32, zmm5)
                        int64_t r8_15 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rcx_65 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_58 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_50 = zmm1[0].q
                        zmm1[0].o = *(arg16 + rcx_65)
                        int64_t rcx_66 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rdi_42 = arg5[0].q
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rsi_28 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rax_514 = arg5[0].q
                        arg5[0].o = *(arg16 + rdi_42)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rcx_66), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rax_514), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rsi_28), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + r8_15), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + rbx_50), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + rdx_58), 0x30)
                        zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    var_780.32 = _mm256_maskstore_ps(arg6, _mm256_blendv_ps(arg5, zmm1, zmm0))
                    zmm0 = var_be0_1
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
                    char temp0_3565 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                    
                    if (temp0_3565 == 0)
                        arg14 = var_ae0_1
                        arg15[0].o = var_c40_3
                        arg9 = var_d40_2
                        arg8[0].o = var_ce0_1
                    else
                        if ((temp0_3565 & 1) != 0)
                            arg12[0].o = *arg13[0].q
                        
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        
                        if ((temp0_3565 & 2) != 0)
                            int64_t rax_516 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_516, 0x10)
                            arg12 = _mm256_blend_ps(arg12, zmm0, 0xf)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        var_c00_2.32 = arg6
                        
                        if ((temp0_3565 & 4) != 0)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *zmm4[0].q, 0x20)
                            arg12 = _mm256_blend_ps(arg12, zmm5, 0xf)
                        
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg14[0].o = data_1434426c0
                        var_9e0 = zmm1[0].o
                        
                        if ((temp0_3565 & 8) != 0)
                            int64_t rax_518 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_518, 0x30)
                            arg12 = _mm256_blend_ps(arg12, arg5, 0xf)
                        
                        arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                        var_a00.32 = zmm1
                        arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                        arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                        zmm1 = arg7
                        
                        if ((temp0_3565 & 0x10) != 0)
                            zmm5[0].o = *arg7[0]
                            arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 1)
                            arg12 = _mm256_insertf128_ps(arg12, zmm5[0].o, 1)
                        
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                        
                        if ((temp0_3565 & 0x20) != 0)
                            arg7 = zmm1
                            int64_t rax_520 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_520, 0x10)
                            arg12 = _mm256_insertf128_ps(arg12, arg6[0].o, 1)
                            arg14 = var_ae0_1
                        else
                            arg14 = var_ae0_1
                            arg7 = zmm1
                        
                        arg6 = _mm256_insertf128_ps(var_a00.32, arg9[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg15, zmm4[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                        
                        if ((temp0_3565 & 0x40) != 0)
                            float* rax_521 = arg5[0].q
                            arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_521, 0x20)
                            arg12 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
                            arg7 = zmm1
                        
                        arg9 = var_d40_2
                        arg8[0].o = var_ce0_1
                        arg15[0].o = var_c40_3
                        zmm2[0].o = zx.o(0)
                        zmm1[0].o = var_9e0
                        arg13 = _mm256_blendv_ps(arg13, zmm4, zmm0)
                        arg7 = _mm256_blendv_ps(arg7, arg6, zmm5)
                        
                        if (temp0_3565 s< 0)
                            int64_t rax_522 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_522, 0x30)
                            arg12 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                        
                        arg6 = var_c00_2.32
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                    zmm0[0].o ^= zmm5[0].o
                    var_760.32 = _mm256_maskstore_ps(arg6, 
                        _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), arg12))
                    zmm0 = var_be0_1
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
                    char temp0_3619 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3619 == 0)
                        arg10 = var_b60_2
                    else
                        if ((temp0_3619 & 1) == 0)
                            if ((temp0_3619 & 2) != 0)
                                goto label_1401f8c6c
                            
                            goto label_1401f8c14
                        
                        zmm0[0].o = *arg13[0].q
                        
                        if ((temp0_3619 & 2) != 0)
                        label_1401f8c6c:
                            int64_t rax_524 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_524, 0x10)
                            zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                            arg10 = var_b60_2
                            
                            if ((temp0_3619 & 4) == 0)
                                goto label_1401f8c1f
                            
                            goto label_1401f8c8c
                        
                    label_1401f8c14:
                        arg10 = var_b60_2
                        
                        if ((temp0_3619 & 4) == 0)
                        label_1401f8c1f:
                            
                            if ((temp0_3619 & 8) != 0)
                                goto label_1401f8ca8
                            
                            goto label_1401f8c28
                        
                    label_1401f8c8c:
                        zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm2[0].q, 0x20)
                        zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                        
                        if ((temp0_3619 & 8) != 0)
                        label_1401f8ca8:
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            int64_t rax_526 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_526, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                            
                            if ((temp0_3619 & 0x10) == 0)
                                goto label_1401f8c31
                            
                            goto label_1401f8cce
                        
                    label_1401f8c28:
                        
                        if ((temp0_3619 & 0x10) == 0)
                        label_1401f8c31:
                            
                            if ((temp0_3619 & 0x20) != 0)
                                goto label_1401f8ced
                            
                            goto label_1401f8c3a
                        
                    label_1401f8cce:
                        zmm2[0].o = zx.o(*arg7[0])
                        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        
                        if ((temp0_3619 & 0x20) != 0)
                        label_1401f8ced:
                            int64_t rax_528 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_528, 0x10)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            
                            if ((temp0_3619 & 0x40) == 0)
                                goto label_1401f8c43
                            
                            goto label_1401f8d0e
                        
                    label_1401f8c3a:
                        
                        if ((temp0_3619 & 0x40) != 0)
                        label_1401f8d0e:
                            zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            float* rax_529 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_529, 0x20)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            
                            if (temp0_3619 s< 0)
                            label_1401f8d2f:
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                int64_t rax_530 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_530, 0x30)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        else
                        label_1401f8c43:
                            
                            if (temp0_3619 s< 0)
                                goto label_1401f8d2f
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    arg5[0].o ^= zmm4[0].o
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm1[0].o ^= zmm4[0].o
                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    zmm0 = _mm256_and_ps(zmm1, zmm0)
                    var_740.32 = _mm256_maskstore_ps(arg6, zmm0)
            
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm0[0].o = arg15[0].o ^ zmm5[0].o
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
            zmm1[0].o ^= zmm5[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            int128_t var_c00_3 = zmm0[0].o
            zmm0[0].o &= arg8[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:10_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            arg6 = var_c80_4
            arg11[0].o = arg8[0].o
            
            if (not(cond:10_1))
                zmm2[0].o = data_142fc95c0
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60_1)
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
                    var_a00.32 = zmm1
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
                    zmm2 = var_980_1
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    arg12 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm2[0].o, 1))
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(var_c20_3, zmm0[0].o, 1), arg12)
                    int32_t temp0_3682 = _mm256_movemask_ps(zmm0)
                    arg15 = var_d20.32
                    zmm1 = var_b80_2
                    var_c20_3[0].o = zmm4[0].o
                    
                    if (temp0_3682 != 0)
                        char rdx_61 = temp0_3682.b
                        
                        if ((rdx_61 & 1) == 0)
                            arg8[0].o = var_cc0_3
                            arg10 = var_b80_2
                            
                            if ((rdx_61 & 2) != 0)
                                goto label_1401f9b15
                            
                            goto label_1401f8ef7
                        
                        zmm1 = var_d20.32
                        arg5[0].o = *zmm1[0].q
                        arg8[0].o = var_cc0_3
                        arg10 = var_b80_2
                        
                        if ((rdx_61 & 2) != 0)
                        label_1401f9b15:
                            zmm1 = var_d20.32
                            int64_t rax_555 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_555, 0x10)
                            arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            
                            if ((rdx_61 & 4) == 0)
                                goto label_1401f8f00
                            
                            goto label_1401f9b36
                        
                    label_1401f8ef7:
                        
                        if ((rdx_61 & 4) == 0)
                        label_1401f8f00:
                            
                            if ((rdx_61 & 8) != 0)
                                goto label_1401f9b59
                            
                            goto label_1401f8f09
                        
                    label_1401f9b36:
                        zmm1[0].o = var_b00[0].o
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm1[0].q, 0x20)
                        arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                        
                        if ((rdx_61 & 8) != 0)
                        label_1401f9b59:
                            zmm1[0].o = var_b00[0].o
                            int64_t rax_557 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_557, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            zmm2[0].o = data_1434426c0
                            
                            if ((rdx_61 & 0x10) == 0)
                                goto label_1401f8f1a
                            
                            goto label_1401f9b8a
                        
                    label_1401f8f09:
                        zmm2[0].o = data_1434426c0
                        
                        if ((rdx_61 & 0x10) != 0)
                        label_1401f9b8a:
                            zmm1[0].o = zx.o(*arg10[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm1[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 3)
                            arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d20)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdx_61 & 0x20) != 0)
                            label_1401f8f2b:
                                int64_t rax_533 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_533, 0x10)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        else
                        label_1401f8f1a:
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d20)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdx_61 & 0x20) != 0)
                                goto label_1401f8f2b
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_b00[0].o)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        
                        if ((rdx_61 & 0x40) != 0)
                            float* rax_534 = arg8[0].q
                            arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_534, 0x20)
                            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        
                        if (temp0_3682.b s< 0)
                            int64_t rax_535 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_535, 0x30)
                            arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                        zmm1 = _mm256_blendv_ps(var_d20.32, zmm4, zmm0)
                        var_800_3 = _mm256_maskstore_ps(arg12, arg5)
                        
                        if ((rdx_61 & 1) == 0)
                            zmm4 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            if ((rdx_61 & 2) != 0)
                                goto label_1401f9bd8
                            
                            goto label_1401f8fe2
                        
                        arg5[0].o = *zmm1[0].q
                        zmm4 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                        
                        if ((rdx_61 & 2) != 0)
                        label_1401f9bd8:
                            int64_t rax_560 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_560, 0x10)
                            arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                            arg10 = _mm256_blendv_ps(arg10, zmm4, arg6)
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((rdx_61 & 4) == 0)
                                goto label_1401f8ff7
                            
                            goto label_1401f9c04
                        
                    label_1401f8fe2:
                        arg10 = _mm256_blendv_ps(arg10, zmm4, arg6)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        
                        if ((rdx_61 & 4) == 0)
                        label_1401f8ff7:
                            
                            if ((rdx_61 & 8) != 0)
                                goto label_1401f9c19
                            
                            goto label_1401f9000
                        
                    label_1401f9c04:
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm4[0].q, 0x20)
                        arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                        
                        if ((rdx_61 & 8) == 0)
                        label_1401f9000:
                            
                            if ((rdx_61 & 0x10) != 0)
                            label_1401f900a:
                                zmm5[0].o = zx.o(*arg10[0].q)
                                arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm5[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 3)
                                arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        else
                        label_1401f9c19:
                            int64_t rax_562 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_562, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                            
                            if ((rdx_61 & 0x10) != 0)
                                goto label_1401f900a
                        
                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        
                        if ((rdx_61 & 0x20) == 0)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            
                            if ((rdx_61 & 0x40) != 0)
                                goto label_1401f9c62
                            
                            goto label_1401f9048
                        
                        int64_t rax_563 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_563, 0x10)
                        arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        
                        if ((rdx_61 & 0x40) == 0)
                        label_1401f9048:
                            zmm4 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            
                            if (temp0_3682.b s< 0)
                            label_1401f9c8d:
                                int64_t rax_565 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_565, 0x30)
                                arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        else
                        label_1401f9c62:
                            float* rax_564 = zmm5[0]
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_564, 0x20)
                            arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            
                            if (temp0_3682.b s< 0)
                                goto label_1401f9c8d
                        
                        arg9 = var_d40_2
                        arg15 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                        zmm1 = _mm256_blendv_ps(arg10, zmm4, arg6)
                        var_860_3 = _mm256_maskstore_ps(arg12, arg5)
                        arg10 = var_b60_2
                        zmm4[0].o = var_c20_3[0].o
                    
                    var_9e0.32 = zmm1
                    arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg13[0].o, 0x1f)
                    arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(var_be0_1, data_143442b00)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm5[0].o = zx.o(0)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = zmm1[0].o & not.o(zmm4[0].o)
                    zmm2[0].o = arg5[0].o & not.o(arg11[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    arg6[0].o = zmm0[0].o & var_ce0_1
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_3733 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3733 == 0)
                        zmm0[0].o = data_142fc95c0
                        arg11[0].o = var_ce0_1
                        zmm1 = var_a00.32
                    else
                        var_920 = arg7[0].o
                        
                        if ((temp0_3733 & 1) == 0)
                            zmm5 = var_9e0.32
                            
                            if ((temp0_3733 & 2) != 0)
                                goto label_1401f9cc5
                            
                            goto label_1401f911c
                        
                        arg7[0].o = *arg15[0].q
                        zmm5 = var_9e0.32
                        
                        if ((temp0_3733 & 2) != 0)
                        label_1401f9cc5:
                            int64_t rax_567 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_567, 0x10)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            
                            if ((temp0_3733 & 4) == 0)
                                goto label_1401f9130
                            
                            goto label_1401f9cf0
                        
                    label_1401f911c:
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                        zmm4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        
                        if ((temp0_3733 & 4) != 0)
                        label_1401f9cf0:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm2, 0xf)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3733 & 8) != 0)
                            label_1401f913a:
                                int64_t rax_537 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_537, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                        else
                        label_1401f9130:
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3733 & 8) != 0)
                                goto label_1401f913a
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        arg9[0].o = data_1434426c0
                        arg8[0].o = arg5[0].o ^ arg12[0].o
                        
                        if ((temp0_3733 & 0x10) != 0)
                            zmm2[0].o = zx.o(*zmm5[0])
                            arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 3)
                            arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                        
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                        arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                        zmm0[0].o = zmm1[0].o ^ arg12[0].o
                        
                        if ((temp0_3733 & 0x20) != 0)
                            int64_t rax_539 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_539, 0x10)
                            arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                        
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                        arg10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg11, var_c20_3[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        
                        if ((temp0_3733 & 0x40) != 0)
                            float* rax_540 = zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_540, 0x20)
                            arg7 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                        
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                        arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                        arg5 = _mm256_insertf128_ps(arg14, arg12[0].o, 1)
                        arg8 = _mm256_insertf128_ps(arg13, arg6[0].o, 1)
                        arg10 = _mm256_and_ps(zmm0, arg10)
                        
                        if (temp0_3733 s< 0)
                            int64_t rbx_53 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rbx_53, 0x30)
                            arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                        arg5 = _mm256_blendv_ps(arg15, arg5, arg8)
                        var_7e0_3 = _mm256_maskstore_ps(arg10, arg7)
                        
                        if ((temp0_3733 & 1) == 0)
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            arg14 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            if ((temp0_3733 & 2) != 0)
                                goto label_1401f9d2d
                            
                            goto label_1401f9267
                        
                        arg7[0].o = *arg5[0].q
                        zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        arg14 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                        
                        if ((temp0_3733 & 2) != 0)
                        label_1401f9d2d:
                            int64_t rax_570 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_570, 0x10)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            zmm2 = _mm256_blendv_ps(zmm5, zmm1, arg14)
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            
                            if ((temp0_3733 & 4) == 0)
                                goto label_1401f927c
                            
                            goto label_1401f9d59
                        
                    label_1401f9267:
                        zmm2 = _mm256_blendv_ps(zmm5, zmm1, arg14)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        
                        if ((temp0_3733 & 4) == 0)
                        label_1401f927c:
                            
                            if ((temp0_3733 & 8) != 0)
                                goto label_1401f9d6e
                            
                            goto label_1401f9285
                        
                    label_1401f9d59:
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                        arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                        
                        if ((temp0_3733 & 8) == 0)
                        label_1401f9285:
                            
                            if ((temp0_3733 & 0x10) != 0)
                            label_1401f928f:
                                zmm0[0].o = zx.o(*zmm2[0].q)
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 3)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        else
                        label_1401f9d6e:
                            int64_t rax_572 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_572, 0x30)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((temp0_3733 & 0x10) != 0)
                                goto label_1401f928f
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                        arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                        
                        if ((temp0_3733 & 0x20) != 0)
                            int64_t rax_542 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_542, 0x10)
                            arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        
                        if ((temp0_3733 & 0x40) != 0)
                            float* rax_543 = zmm1[0].q
                            arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_543, 0x20)
                            arg7 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        
                        arg9 = var_d40_2
                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg11, zmm4[0].o, 1)
                        
                        if (temp0_3733 s< 0)
                            int64_t rcx_69 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rcx_69, 0x30)
                            arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                        
                        arg11[0].o = var_ce0_1
                        zmm1 = var_a00.32
                        arg15 = _mm256_blendv_ps(arg5, zmm4, arg8)
                        zmm0 = _mm256_blendv_ps(zmm2, zmm0, arg14)
                        var_9e0.32 = zmm0
                        var_840_3 = _mm256_maskstore_ps(arg10, arg7)
                        arg14 = var_ae0_1
                        zmm0[0].o = data_142fc95c0
                        arg10 = var_b60_2
                        zmm5[0].o = zx.o(0)
                        arg7[0].o = var_920
                    
                    arg12 = _mm256_insertf128_ps(zmm1, arg7[0].o, 1)
                    arg13[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(var_be0_1, data_143442b20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = arg7[0].o & not.o(var_c20_3[0].o)
                    zmm1[0].o = zmm4[0].o & not.o(arg13[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    arg5[0].o = zmm0[0].o & arg11[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_3807 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3807 != 0)
                        if ((temp0_3807 & 1) == 0)
                            zmm5 = var_9e0.32
                            
                            if ((temp0_3807 & 2) != 0)
                                goto label_1401f9da9
                            
                            goto label_1401f940e
                        
                        zmm1[0].o = *arg15[0].q
                        zmm5 = var_9e0.32
                        
                        if ((temp0_3807 & 2) != 0)
                        label_1401f9da9:
                            int64_t rax_574 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_574, 0x10)
                            zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            
                            if ((temp0_3807 & 4) == 0)
                                goto label_1401f9422
                            
                            goto label_1401f9dd4
                        
                    label_1401f940e:
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        
                        if ((temp0_3807 & 4) != 0)
                        label_1401f9dd4:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *arg6[0].q, 0x20)
                            zmm1 = _mm256_blend_ps(zmm1, zmm2, 0xf)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3807 & 8) != 0)
                            label_1401f942c:
                                int64_t rax_544 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_544, 0x30)
                                zmm1 = _mm256_blend_ps(zmm1, zmm2, 0xf)
                        else
                        label_1401f9422:
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3807 & 8) != 0)
                                goto label_1401f942c
                        
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg10[0].o = data_1434426c0
                        arg8[0].o = zmm4[0].o ^ data_142d3f800
                        
                        if ((temp0_3807 & 0x10) != 0)
                            zmm0[0].o = zx.o(*zmm5[0])
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 3)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        zmm4[0].o = var_c20_3[0].o
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg10[0].o)
                        arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                        arg7[0].o ^= data_142d3f800
                        
                        if ((temp0_3807 & 0x20) != 0)
                            int64_t rax_546 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_546, 0x10)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg14[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(arg13, zmm4[0].o, 1)
                        arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        
                        if ((temp0_3807 & 0x40) != 0)
                            float* rax_547 = arg14[0].q
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_547, 0x20)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
                        arg5 = _mm256_insertf128_ps(arg11, arg5[0].o, 1)
                        arg7 = _mm256_and_ps(arg7, zmm2)
                        
                        if (temp0_3807 s< 0)
                            int64_t rbx_54 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rbx_54, 0x30)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        
                        arg9 = var_d40_2
                        arg11[0].o = var_ce0_1
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm4 = _mm256_blendv_ps(arg15, zmm4, arg5)
                        var_7c0_3 = _mm256_maskstore_ps(arg7, zmm1)
                        
                        if ((temp0_3807 & 1) == 0)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                            
                            if ((temp0_3807 & 2) != 0)
                                goto label_1401f9e0f
                            
                            goto label_1401f9557
                        
                        zmm1[0].o = *zmm4[0].q
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                        
                        if ((temp0_3807 & 2) == 0)
                        label_1401f9557:
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            
                            if ((temp0_3807 & 4) != 0)
                            label_1401f9566:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *zmm0[0], 0x20)
                                zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                        else
                        label_1401f9e0f:
                            int64_t rax_577 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_577, 0x10)
                            zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            
                            if ((temp0_3807 & 4) != 0)
                                goto label_1401f9566
                        
                        arg14 = var_ae0_1
                        arg10 = var_b60_2
                        zmm0 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        
                        if ((temp0_3807 & 8) == 0)
                            arg5 = var_9e0.32
                            zmm2 = _mm256_blendv_ps(arg5, zmm0, zmm2)
                            
                            if ((temp0_3807 & 0x10) != 0)
                                goto label_1401f9e6e
                            
                            goto label_1401f95bc
                        
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        int64_t rax_578 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_578, 0x30)
                        zmm1 = _mm256_blend_ps(zmm1, arg5, 0xf)
                        arg5 = var_9e0.32
                        zmm2 = _mm256_blendv_ps(arg5, zmm0, zmm2)
                        
                        if ((temp0_3807 & 0x10) != 0)
                        label_1401f9e6e:
                            zmm0[0].o = *zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm0[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if ((temp0_3807 & 0x20) == 0)
                                goto label_1401f95c5
                            
                            goto label_1401f9e8d
                        
                    label_1401f95bc:
                        
                        if ((temp0_3807 & 0x20) == 0)
                        label_1401f95c5:
                            
                            if ((temp0_3807 & 0x40) != 0)
                                goto label_1401f9eae
                            
                            goto label_1401f95d6
                        
                    label_1401f9e8d:
                        int64_t rax_580 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_580, 0x10)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        if ((temp0_3807 & 0x40) == 0)
                        label_1401f95d6:
                            
                            if (temp0_3807 s< 0)
                            label_1401f9edb:
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                int64_t rcx_75 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rcx_75, 0x30)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        else
                        label_1401f9eae:
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            double rax_581 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_581, 0x20)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if (temp0_3807 s< 0)
                                goto label_1401f9edb
                        
                        var_820_3 = _mm256_maskstore_ps(arg7, zmm1)
                    
                    arg5 = var_bc0_4
                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm2 = var_960_1.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm5 = var_a60_2
                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm4 = var_b40_1
                    arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    arg8 = var_b20_2
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg7 = var_d00_2
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
                    int64_t rcx_71 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rdx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rdi_43 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    double rax_549 = zmm0[0]
                    zmm0[0].o = zx.o(*(arg16 + r8_16))
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + rcx_71), 1)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + rdi_43), 2)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + rdx_64), 3)
                    int64_t rcx_72 = zmm1[0].q
                    zmm1[0].o = zx.o(*(arg16 i+ rax_549))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + rbx_55), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + rcx_72), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + rsi_29), 3)
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
                    var_780.32 = _mm256_maskstore_ps(arg12, zmm2)
                    zmm2[0].o = data_142fc95c0
                    var_760.32 = _mm256_maskstore_ps(arg12, zmm0)
                    var_740.32 = _mm256_maskstore_ps(arg12, zmm1)
                    arg6 = var_c80_4
                    arg15[0].o = var_c40_3
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    zmm4[0].o = var_c20_3[0].o
                
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                arg8[0].o = zmm0[0].o ^ var_c00_3
                zmm0[0].o = arg8[0].o & arg11[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg14[0].o = data_1434422d0
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, var_c60_1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg14[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm4[0].o = zmm0[0].o & arg11[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        int128_t var_a00_1 = arg7[0].o
                        int128_t var_9e0_1 = arg8[0].o
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg12 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1 = var_980_1
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm2 = _mm256_and_ps(zmm0, arg12)
                        
                        if (_mm256_movemask_ps(zmm2) == 0)
                            arg10 = var_aa0_5
                        else
                            zmm1[0].o = _mm256_extractf128_ps(var_ca0_2[0].o, 1)
                            arg5[0].o = data_1434426b0
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg15[0].o = zmm4[0].o
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ca0_2[0].o, arg5[0].o)
                            zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            arg10 = var_aa0_5
                            zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            arg6[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg10 = _mm256_blendv_ps(arg10, arg5, zmm1)
                            arg5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            arg7 = _mm256_blendv_ps(var_ca0_2, zmm4, zmm2)
                            var_ca0_2 = arg7
                            arg5[0].o = _mm256_extractf128_ps(var_bc0_4[0].o, 1)
                            arg11 = var_960_1.32
                            zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                            arg14 = var_a60_2
                            zmm4[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg8 = var_b40_1
                            arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            zmm5 = arg12
                            arg12 = var_d00_2
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg7[0].o = data_1434426c0
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, var_bc0_4[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
                            arg12 = zmm5
                            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            arg11 = var_b20_2
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
                            int64_t rcx_73 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t r9_13 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_56 = zmm1[0].q
                            int64_t rdi_44 = zmm2[0].q
                            int64_t rsi_30 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rax_553 = zmm1[0].q
                            int64_t rdx_65 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = zx.o(*(arg16 + rcx_73))
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg16 + r8_17), 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg16 + rbx_56), 2)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg16 + r9_13), 3)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg16 + rdi_44), 4)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg16 + rsi_30), 5)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg16 + rax_553), 6)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg16 + rdx_65), 7)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg5[0].o = data_143442b40
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
                        
                        zmm2[0].o = zx.o(0)
                        var_780.32 = _mm256_maskstore_ps(arg12, _mm256_blendv_ps(zmm2, zmm1, zmm0))
                        zmm0 = var_be0_1
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
                        char temp0_4097 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                        var_c20_3[0].o = arg6[0].o
                        
                        if (temp0_4097 == 0)
                            arg13 = arg10
                            arg10 = var_b60_2
                            arg6 = var_c80_4
                            arg15[0].o = var_c40_3
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            arg8[0].o = var_9e0_1
                            arg14[0].o = data_1434422d0
                            arg7[0].o = zx.o(0)
                        else
                            var_d00_2[0].o = zmm4[0].o
                            
                            if ((temp0_4097 & 1) != 0)
                                arg5[0].o = zx.o(*arg10[0].q)
                            
                            zmm4 = var_ca0_2
                            
                            if ((temp0_4097 & 2) != 0)
                                int64_t rax_584 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_584, 1)
                            
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            
                            if ((temp0_4097 & 4) != 0)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0], 2)
                            
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            var_920.32 = arg12
                            
                            if ((temp0_4097 & 8) != 0)
                                int64_t rax_586 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_586, 3)
                            
                            arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg12[0].o = data_1434426b0
                            
                            if ((temp0_4097 & 0x10) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm4[0].q, 4)
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg12[0].o)
                            arg13 = arg10
                            arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg12[0].o)
                            arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                            
                            if ((temp0_4097 & 0x20) != 0)
                                int64_t rax_588 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_588, 5)
                            
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                            
                            if ((temp0_4097 & 0x40) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 6)
                            
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            arg6 = _mm256_insertf128_ps(arg14, arg9[0].o, 1)
                            arg12 = _mm256_insertf128_ps(arg15, arg7[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                            
                            if (temp0_4097 s< 0)
                                int64_t rax_590 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_590, 7)
                            
                            arg9 = var_d40_2
                            arg10 = var_b60_2
                            arg15[0].o = var_c40_3
                            arg8[0].o = var_9e0_1
                            arg14[0].o = data_1434422d0
                            arg7[0].o = zx.o(0)
                            arg13 = _mm256_blendv_ps(arg13, arg12, zmm0)
                            zmm0 = _mm256_blendv_ps(var_ca0_2, arg6, zmm4)
                            var_ca0_2 = zmm0
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                            arg6 = var_c80_4
                            arg12 = var_920.32
                            zmm4[0].o = var_d00_2[0].o
                        
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        zmm1[0].o ^= arg11[0].o
                        var_760.32 = _mm256_maskstore_ps(arg12, 
                            _mm256_and_ps(
                                __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm1, var_c20_3[0].o, 1), 
                                zmm0))
                        zmm0 = var_be0_1
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
                        char temp0_4149 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4149 == 0)
                            arg11[0].o = var_ce0_1
                            arg7[0].o = var_a00_1
                        else
                            arg11[0].o = var_ce0_1
                            
                            if ((temp0_4149 & 1) == 0)
                                if ((temp0_4149 & 2) != 0)
                                    goto label_1401fabea
                                
                                goto label_1401fa1e3
                            
                            zmm0[0].o = zx.o(*arg13[0].q)
                            
                            if ((temp0_4149 & 2) != 0)
                            label_1401fabea:
                                int64_t rax_609 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_609, 1)
                                
                                if ((temp0_4149 & 4) == 0)
                                    goto label_1401fa1ec
                                
                                goto label_1401fabfe
                            
                        label_1401fa1e3:
                            
                            if ((temp0_4149 & 4) == 0)
                            label_1401fa1ec:
                                
                                if ((temp0_4149 & 8) != 0)
                                    goto label_1401fac17
                                
                                goto label_1401fa1f5
                            
                        label_1401fabfe:
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 2)
                            
                            if ((temp0_4149 & 8) != 0)
                            label_1401fac17:
                                zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                int64_t rax_611 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_611, 3)
                                arg7[0].o = var_a00_1
                                
                                if ((temp0_4149 & 0x10) == 0)
                                    goto label_1401fa207
                                
                                goto label_1401fac3a
                            
                        label_1401fa1f5:
                            arg7[0].o = var_a00_1
                            
                            if ((temp0_4149 & 0x10) == 0)
                            label_1401fa207:
                                
                                if ((temp0_4149 & 0x20) != 0)
                                    goto label_1401fac56
                                
                                goto label_1401fa210
                            
                        label_1401fac3a:
                            zmm2 = var_ca0_2
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 4)
                            
                            if ((temp0_4149 & 0x20) != 0)
                            label_1401fac56:
                                zmm2 = var_ca0_2
                                int64_t rax_613 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_613, 5)
                                
                                if ((temp0_4149 & 0x40) == 0)
                                    goto label_1401fa219
                                
                                goto label_1401fac73
                            
                        label_1401fa210:
                            
                            if ((temp0_4149 & 0x40) != 0)
                            label_1401fac73:
                                zmm2 = var_ca0_2
                                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                
                                if (temp0_4149 s< 0)
                                label_1401fac94:
                                    zmm2 = var_ca0_2
                                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    int64_t rax_615 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_615, 7)
                            else
                            label_1401fa219:
                                
                                if (temp0_4149 s< 0)
                                    goto label_1401fac94
                            
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
                        var_740.32 = _mm256_maskstore_ps(arg12, zmm0)
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg14[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm0[0].o ^= arg8[0].o
                    zmm0[0].o &= arg11[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    arg14 = var_ae0_1
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1[0].o = data_143442ad0
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60_1)
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
                            var_780.32 = _mm256_maskstore_ps(arg5, zmm4)
                            var_760.32 = _mm256_maskstore_ps(arg5, zmm4)
                            var_740.32 = _mm256_maskstore_ps(arg5, zmm4)
                        
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
                            var_780.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_760.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_740.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_9a0.o)
            zmm0[0].o ^= zmm5[0].o
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
            zmm2[0].o ^= zmm5[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            arg13[0].o = zmm0[0].o & arg11[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm2 = var_880_1
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg6[0].o, var_9c0_4[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_a20_1)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm4 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                float var_9c0_5[0x8] = zmm4
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                double var_b60_3[0x4] = zmm5
                arg6 = var_bc0_4
                zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                arg11[0].o = var_cc0_3
                var_c80_4[0].o = zmm5[0].o
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                arg10 = var_b80_2
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                zmm5 = var_a60_2
                arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                arg7 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                var_ca0_2[0].o = arg6[0].o
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_b00[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_d20)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                float var_d00_3[0x8] = zmm1
                arg14[0].o = arg13[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_4240 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                arg15[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                int128_t var_ce0_2 = arg13[0].o
                double var_c20_4[0x4] = arg7
                double var_6c0[0x4]
                float var_6a0[0x8]
                uint32_t var_680[0x8]
                
                if (temp0_4240 != 0)
                    zmm0 = var_be0_1
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
                    bool cond:20_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                    var_b20_2[0].o = arg15[0].o
                    
                    if (not(cond:20_1))
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg7 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1 = var_960_1.32
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_c80_4[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_bc0_4[0].o)
                        zmm2 = var_b40_1
                        zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ca0_2[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_a60_2[0].o)
                        arg15 = arg6
                        arg6[0].o = _mm256_extractf128_ps(var_b60_3[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_9c0_5[0].o, 1)
                        zmm2[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_9c0_5[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b60_3[0].o, zmm2[0].o)
                        arg10 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        var_b60_3[0].o = zx.o(0)
                        zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        arg11 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm0 = _mm256_blendv_ps(var_b60_3, zmm0, arg11)
                        double r8_18 = zmm0[0]
                        void* rsi_31 = arg16 i+ r8_18
                        int64_t r9_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rdi_45 = arg16 + r9_14
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        double r10_10 = zmm0[0]
                        int64_t r11_9 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm0 = _mm256_blendv_ps(var_b60_3, zmm1, arg11)
                        zmm2[0].o = *(zmm0[0] + rsi_31)
                        float* rcx_77 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        float* rdx_68 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_77 + rdi_45), 0x10)
                        float* rcx_78 = zmm0[0]
                        zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg5 = _mm256_blendv_ps(var_b60_3, zmm0, arg11)
                        arg11[0].o = var_cc0_3
                        zmm5[0].o = *(arg5[0].q + rsi_31)
                        float* rax_598 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        float* rsi_32 = arg5[0].q
                        float* rbx_59 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5 = _mm256_blendv_ps(var_b60_3, arg10, zmm4)
                        arg10 = var_b80_2
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_598 + rdi_45), 0x10)
                        int64_t rax_599 = arg5[0].q
                        void* rdi_46 = arg16 i+ r10_10
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_78 + rdi_46), 0x20)
                        int64_t rcx_79 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_32 + rdi_46), 0x20)
                        void* rsi_33 = arg16 + rax_599
                        void* rdi_47 = arg16 + r11_9
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_68 + rdi_47), 0x30)
                        void* rdx_69 = arg16 + rcx_79
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_59 + rdi_47), 0x30)
                        int64_t rdi_48 = arg5[0].q
                        zmm1 = _mm256_blendv_ps(var_b60_3, zmm1, zmm4)
                        int32_t* rbx_60 = zmm1[0].q
                        zmm0 = _mm256_blendv_ps(var_b60_3, zmm0, zmm4)
                        arg9 = var_d40_2
                        zmm4[0].o = *(rbx_60 + rsi_33)
                        arg6[0].o = *(zmm0[0] + rsi_33)
                        void* rsi_34 = arg16 + rdi_48
                        float* rbx_62 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_62 + rdx_69), 0x10)
                        float* rbx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_63 + rdx_69), 0x10)
                        int64_t rdx_70 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(zmm1[0].q + rsi_34), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm0[0] + rsi_34), 0x20)
                        arg6 = arg15
                        arg15[0].o = var_b20_2[0].o
                        void* rsi_35 = arg16 + rdx_70
                        float* rbx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_66 + rsi_35), 0x30)
                        float* rbx_67 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_67 + rsi_35), 0x30)
                        arg5[0].o = *(arg16 + rax_599)
                        zmm4[0].o = *(arg16 i+ r8_18)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg16 + r9_14), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg16 i+ r10_10), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg16 + r11_9), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rcx_79), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rdi_48), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg16 + rdx_70), 0x30)
                        arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                        var_6c0 = _mm256_maskstore_ps(arg7, arg5)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        var_6a0 = _mm256_maskstore_ps(arg7, zmm1)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                        var_680 = _mm256_maskstore_ps(arg7, zmm0)
                        arg7 = var_c20_4
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm1[0].o = arg12[0].o ^ zmm0[0].o
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                    zmm0[0].o ^= arg5[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg14[0].o &= zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    bool cond:24_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                    arg13[0].o = var_ce0_2
                    
                    if (not(cond:24_1))
                        var_9a0.32 = arg6
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg14[0].q)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg8 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1 = var_980_1
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm5 = _mm256_and_ps(arg5, arg8)
                        
                        if (_mm256_movemask_ps(zmm5) == 0)
                            arg11 = var_d00_3
                            var_c40_3.32 = arg7
                        else
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm4[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                            zmm2 = arg8
                            arg8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(var_d00_3[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d00_3[0].o, zmm4[0].o)
                            arg6 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                            zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            arg12 = arg7
                            arg7[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg11 = _mm256_blendv_ps(var_d00_3, arg6, zmm0)
                            arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            zmm1 = var_960_1.32
                            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_c80_4[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_bc0_4[0].o)
                            zmm1[0].o = _mm256_extractf128_ps(var_9c0_5[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                            arg6[0].o = _mm256_extractf128_ps(var_b40_1[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_ca0_2[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_9c0_5[0].o, arg7[0].o)
                            zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            arg10 = var_b60_3
                            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_b40_1[0].o, var_a60_2[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                            arg7 = arg12
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                            zmm4 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
                            arg6[0].o = zx.o(0)
                            zmm0 = _mm256_blendv_ps(arg6, zmm4, zmm0)
                            zmm1 = _mm256_blendv_ps(arg6, zmm1, zmm5)
                            zmm4 = _mm256_blendv_ps(arg12, arg8, zmm5)
                            arg8 = zmm2
                            var_c40_3.32 = zmm4
                            int64_t r8_19 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rcx_80 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rdx_71 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rbx_68 = zmm0[0]
                            zmm0[0].o = *(arg16 i+ rcx_80)
                            int64_t rcx_81 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rdi_49 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rsi_36 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rax_602 = zmm1[0].q
                            zmm1[0].o = *(arg16 + rdi_49)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(arg16 + rcx_81), 0x10)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(arg16 + rax_602), 0x20)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(arg16 + rsi_36), 0x30)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + r8_19), 0x10)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(arg16 i+ rbx_68), 0x20)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(arg16 + rdx_71), 0x30)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        var_6c0 = _mm256_maskstore_ps(arg8, _mm256_blendv_ps(zmm1, zmm0, arg5))
                        zmm0 = var_be0_1
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
                        char temp0_4404 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_4404 == 0)
                            arg6 = var_9a0.32
                        else
                            if ((temp0_4404 & 1) != 0)
                                arg10[0].o = *arg11[0].q
                            
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm5 = var_c40_3.32
                            
                            if ((temp0_4404 & 2) != 0)
                                int64_t rax_604 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_604, 0x10)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            int128_t var_a20_2 = zmm2[0].o
                            
                            if ((temp0_4404 & 4) != 0)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *zmm1[0].q, 0x20)
                                arg10 = _mm256_blend_ps(arg10, zmm4, 0xf)
                            
                            arg15[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            arg6[0].o = data_1434426c0
                            
                            if ((temp0_4404 & 8) != 0)
                                int64_t rax_606 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_606, 0x30)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x50)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x50)
                            arg9 = arg11
                            
                            if ((temp0_4404 & 0x10) != 0)
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
                            
                            if ((temp0_4404 & 0x20) != 0)
                                int64_t rax_617 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_617, 0x10)
                                arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            
                            arg15[0].o = var_b20_2[0].o
                            arg5 = _mm256_insertf128_ps(arg13, arg5[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            
                            if ((temp0_4404 & 0x40) != 0)
                                float* rax_618 = zmm2[0].q
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg6[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_618, 0x20)
                                arg10 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                            
                            arg13[0].o = var_ce0_2
                            arg6 = var_9a0.32
                            arg8 = arg8
                            zmm4[0].o = zx.o(0)
                            arg9 = _mm256_blendv_ps(arg9, zmm0, zmm1)
                            var_c40_3.32 = _mm256_blendv_ps(arg11, arg5, zmm5)
                            
                            if (temp0_4404 s< 0)
                                int64_t rax_619 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_619, 0x30)
                                arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            
                            arg11 = arg9
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            zmm2[0].o = var_a20_2
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
                        zmm0[0].o ^= zmm5[0].o
                        var_6a0 = _mm256_maskstore_ps(arg8, 
                            _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1), arg10))
                        zmm0 = var_be0_1
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
                        char temp0_4469 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4469 == 0)
                            arg10 = var_b80_2
                            arg11[0].o = var_cc0_3
                        else
                            arg10 = var_b80_2
                            
                            if ((temp0_4469 & 1) == 0)
                                zmm4 = var_c40_3.32
                                
                                if ((temp0_4469 & 2) != 0)
                                    goto label_1401fae98
                                
                                goto label_1401fae2b
                            
                            zmm2[0].o = *arg11[0].q
                            zmm4 = var_c40_3.32
                            
                            if ((temp0_4469 & 2) != 0)
                            label_1401fae98:
                                int64_t rax_621 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_621, 0x10)
                                zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                
                                if ((temp0_4469 & 4) == 0)
                                    goto label_1401fae30
                                
                                goto label_1401faeaf
                            
                        label_1401fae2b:
                            
                            if ((temp0_4469 & 4) == 0)
                            label_1401fae30:
                                
                                if ((temp0_4469 & 8) != 0)
                                    goto label_1401faecf
                                
                                goto label_1401fae39
                            
                        label_1401faeaf:
                            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *zmm0[0], 0x20)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            
                            if ((temp0_4469 & 8) != 0)
                            label_1401faecf:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                int64_t rax_623 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_623, 0x30)
                                zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                arg11[0].o = var_cc0_3
                                
                                if ((temp0_4469 & 0x10) == 0)
                                    goto label_1401fae4b
                                
                                goto label_1401faefe
                            
                        label_1401fae39:
                            arg11[0].o = var_cc0_3
                            
                            if ((temp0_4469 & 0x10) == 0)
                            label_1401fae4b:
                                
                                if ((temp0_4469 & 0x20) != 0)
                                    goto label_1401faf1d
                                
                                goto label_1401fae54
                            
                        label_1401faefe:
                            zmm0[0].o = zx.o(*zmm4[0].q)
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 3)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            
                            if ((temp0_4469 & 0x20) != 0)
                            label_1401faf1d:
                                int64_t rax_625 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_625, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((temp0_4469 & 0x40) == 0)
                                    goto label_1401fae5d
                                
                                goto label_1401faf3e
                            
                        label_1401fae54:
                            
                            if ((temp0_4469 & 0x40) != 0)
                            label_1401faf3e:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                double rax_626 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_626, 0x20)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if (temp0_4469 s< 0)
                                label_1401faf5f:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rax_627 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_627, 0x30)
                                    zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            else
                            label_1401fae5d:
                                
                                if (temp0_4469 s< 0)
                                    goto label_1401faf5f
                        
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm1[0].o ^= arg5[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        zmm0[0].o ^= arg5[0].o
                        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), zmm2)
                        var_680 = _mm256_maskstore_ps(arg8, zmm0)
                        arg9 = var_d40_2
                
                arg8 = _mm256_insertf128_ps(arg6, arg15[0].o, 1)
                zmm0[0].o = arg13[0].o & var_c00_3
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                arg14 = var_ae0_1
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm2[0].o = data_142fc95c0
                    arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60_1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm0[0].o &= arg13[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    var_cc0_3.32 = arg8
                    
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
                        zmm2 = var_980_1
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        arg14 = _mm256_and_ps(zmm0, zmm1)
                        zmm5 = _mm256_and_ps(arg14, arg8)
                        int32_t temp0_4526 = _mm256_movemask_ps(zmm5)
                        float var_b20_3[0x8] = arg5
                        
                        if (temp0_4526 == 0)
                            zmm2[0].o = data_142fc95c0
                        else
                            char rdx_74 = temp0_4526.b
                            
                            if ((rdx_74 & 1) == 0)
                                if ((rdx_74 & 2) != 0)
                                    goto label_1401fbcbf
                                
                                goto label_1401fb0d3
                            
                            zmm0 = var_d20.32
                            arg7[0].o = *zmm0[0]
                            
                            if ((rdx_74 & 2) != 0)
                            label_1401fbcbf:
                                zmm0 = var_d20.32
                                int64_t rax_655 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_655, 0x10)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                
                                if ((rdx_74 & 4) == 0)
                                    goto label_1401fb0dc
                                
                                goto label_1401fbce0
                            
                        label_1401fb0d3:
                            
                            if ((rdx_74 & 4) == 0)
                            label_1401fb0dc:
                                
                                if ((rdx_74 & 8) != 0)
                                    goto label_1401fbd03
                                
                                goto label_1401fb0e5
                            
                        label_1401fbce0:
                            zmm0[0].o = var_b00[0].o
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm0[0], 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((rdx_74 & 8) != 0)
                            label_1401fbd03:
                                zmm0[0].o = var_b00[0].o
                                int64_t rax_657 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_657, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                arg5[0].o = data_1434426c0
                                
                                if ((rdx_74 & 0x10) == 0)
                                    goto label_1401fb0f6
                                
                                goto label_1401fbd34
                            
                        label_1401fb0e5:
                            arg5[0].o = data_1434426c0
                            
                            if ((rdx_74 & 0x10) != 0)
                            label_1401fbd34:
                                zmm0[0].o = *arg10[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d20)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                
                                if ((rdx_74 & 0x20) != 0)
                                label_1401fb107:
                                    int64_t rax_630 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_630, 0x10)
                                    arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            else
                            label_1401fb0f6:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d20)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                
                                if ((rdx_74 & 0x20) != 0)
                                    goto label_1401fb107
                            
                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b00[0].o)
                            zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            
                            if ((rdx_74 & 0x40) != 0)
                                float* rax_631 = arg11[0].q
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_631, 0x20)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            arg9[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            arg13 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            
                            if (temp0_4526.b s< 0)
                                int64_t rax_632 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_632, 0x30)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                            arg6 = _mm256_blendv_ps(var_d20.32, zmm1, arg13)
                            var_800_4 = _mm256_maskstore_ps(arg14, arg7)
                            
                            if ((rdx_74 & 1) == 0)
                                zmm0 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                                arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                
                                if ((rdx_74 & 2) != 0)
                                    goto label_1401fbd82
                                
                                goto label_1401fb1c0
                            
                            arg7[0].o = *arg6[0].q
                            zmm0 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                            arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                            
                            if ((rdx_74 & 2) != 0)
                            label_1401fbd82:
                                int64_t rax_660 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_660, 0x10)
                                arg7 = _mm256_blend_ps(arg7, zmm1, 0xf)
                                arg10 = _mm256_blendv_ps(arg10, zmm0, arg9)
                                zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                
                                if ((rdx_74 & 4) == 0)
                                    goto label_1401fb1d5
                                
                                goto label_1401fbdae
                            
                        label_1401fb1c0:
                            arg10 = _mm256_blendv_ps(arg10, zmm0, arg9)
                            zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            
                            if ((rdx_74 & 4) == 0)
                            label_1401fb1d5:
                                
                                if ((rdx_74 & 8) != 0)
                                    goto label_1401fbdc3
                                
                                goto label_1401fb1de
                            
                        label_1401fbdae:
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((rdx_74 & 8) == 0)
                            label_1401fb1de:
                                
                                if ((rdx_74 & 0x10) != 0)
                                label_1401fb1e8:
                                    zmm0[0].o = *arg10[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            else
                            label_1401fbdc3:
                                int64_t rax_662 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_662, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                
                                if ((rdx_74 & 0x10) != 0)
                                    goto label_1401fb1e8
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            
                            if ((rdx_74 & 0x20) != 0)
                                int64_t rax_634 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_634, 0x10)
                                arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                            
                            if ((rdx_74 & 0x40) != 0)
                                double rax_635 = zmm0[0]
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_635, 0x20)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            zmm2[0].o = data_142fc95c0
                            zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg11, arg5[0].o, 1)
                            
                            if (temp0_4526.b s< 0)
                                int64_t rax_636 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_636, 0x30)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            
                            var_d20.32 = _mm256_blendv_ps(arg6, arg5, arg13)
                            arg10 = _mm256_blendv_ps(arg10, zmm1, arg9)
                            var_860_4 = _mm256_maskstore_ps(arg14, arg7)
                            arg9 = var_d40_2
                            arg13[0].o = var_ce0_2
                        
                        zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(arg12[0].o, 0x1f)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(var_be0_1, data_143442b00)
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
                        char temp0_4586 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4586 != 0)
                            arg12 = var_d20.32
                            
                            if ((temp0_4586 & 1) == 0)
                                var_b80_2[0].o = zmm4[0].o
                                
                                if ((temp0_4586 & 2) != 0)
                                    goto label_1401fbdfe
                                
                                goto label_1401fb331
                            
                            arg9[0].o = *arg12[0].q
                            var_b80_2[0].o = zmm4[0].o
                            
                            if ((temp0_4586 & 2) != 0)
                            label_1401fbdfe:
                                float* rax_664 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_664, 0x10)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                
                                if ((temp0_4586 & 4) == 0)
                                    goto label_1401fb345
                                
                                goto label_1401fbe29
                            
                        label_1401fb331:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            
                            if ((temp0_4586 & 4) != 0)
                            label_1401fbe29:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm4[0].q, 0x20)
                                arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4586 & 8) != 0)
                                label_1401fb34f:
                                    float* rax_637 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_637, 0x30)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            else
                            label_1401fb345:
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4586 & 8) != 0)
                                    goto label_1401fb34f
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg11[0].o = data_1434426c0
                            arg13[0].o = arg7[0].o ^ zmm5[0].o
                            arg14 = arg10
                            
                            if ((temp0_4586 & 0x10) != 0)
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
                            
                            if ((temp0_4586 & 0x20) != 0)
                                int64_t rax_639 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_639, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(arg5, arg15[0].o, 1)
                            arg13 = _mm256_insertf128_ps(arg13, arg6[0].o, 1)
                            
                            if ((temp0_4586 & 0x40) != 0)
                                double rax_640 = zmm0[0]
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_640, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg11[0].o)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                            zmm2 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
                            arg5 = _mm256_and_ps(arg13, arg5)
                            
                            if (temp0_4586 s< 0)
                                int64_t rbx_71 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rbx_71, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            arg7 = var_d20.32
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                            arg10 = _mm256_blendv_ps(arg7, zmm2, arg6)
                            var_7e0_4 = _mm256_maskstore_ps(arg5, arg9)
                            
                            if ((temp0_4586 & 1) == 0)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg13 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                
                                if ((temp0_4586 & 2) != 0)
                                    goto label_1401fbe66
                                
                                goto label_1401fb487
                            
                            arg9[0].o = *arg10[0].q
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            arg13 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            
                            if ((temp0_4586 & 2) != 0)
                            label_1401fbe66:
                                float* rax_667 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_667, 0x10)
                                arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                arg12 = _mm256_blendv_ps(arg14, zmm0, arg13)
                                zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                
                                if ((temp0_4586 & 4) == 0)
                                    goto label_1401fb49c
                                
                                goto label_1401fbe92
                            
                        label_1401fb487:
                            arg12 = _mm256_blendv_ps(arg14, zmm0, arg13)
                            zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            
                            if ((temp0_4586 & 4) == 0)
                            label_1401fb49c:
                                
                                if ((temp0_4586 & 8) != 0)
                                    goto label_1401fbea7
                                
                                goto label_1401fb4a5
                            
                        label_1401fbe92:
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm4[0].q, 0x20)
                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            
                            if ((temp0_4586 & 8) == 0)
                            label_1401fb4a5:
                                
                                if ((temp0_4586 & 0x10) != 0)
                                label_1401fb4af:
                                    zmm0[0].o = *arg12[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            else
                            label_1401fbea7:
                                float* rax_669 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_669, 0x30)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                
                                if ((temp0_4586 & 0x10) != 0)
                                    goto label_1401fb4af
                            
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg11[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                            
                            if ((temp0_4586 & 0x20) != 0)
                                int64_t rax_642 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_642, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                            
                            if ((temp0_4586 & 0x40) != 0)
                                float* rax_643 = zmm1[0].q
                                arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_643, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                            
                            if (temp0_4586 s< 0)
                                int64_t rcx_84 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rcx_84, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm4[0].o = var_b80_2[0].o
                            zmm1 = _mm256_blendv_ps(arg10, zmm2, arg6)
                            var_d20.32 = zmm1
                            arg10 = _mm256_blendv_ps(arg12, zmm0, arg13)
                            var_840_4 = _mm256_maskstore_ps(arg5, arg9)
                            arg9 = var_d40_2
                            arg13[0].o = var_ce0_2
                        
                        arg11 = _mm256_insertf128_ps(var_b20_3, zmm4[0].o, 1)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(var_be0_1, data_143442b20)
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
                        char temp0_4661 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        arg14 = var_ae0_1
                        
                        if (temp0_4661 != 0)
                            arg12 = var_d20.32
                            
                            if ((temp0_4661 & 1) == 0)
                                if ((temp0_4661 & 2) != 0)
                                    goto label_1401fbed9
                                
                                goto label_1401fb5fa
                            
                            arg5[0].o = *arg12[0].q
                            
                            if ((temp0_4661 & 2) != 0)
                            label_1401fbed9:
                                int64_t rax_671 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_671, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                                arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                
                                if ((temp0_4661 & 4) == 0)
                                    goto label_1401fb60e
                                
                                goto label_1401fbf04
                            
                        label_1401fb5fa:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            
                            if ((temp0_4661 & 4) != 0)
                            label_1401fbf04:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *arg6[0].q, 0x20)
                                arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4661 & 8) != 0)
                                label_1401fb618:
                                    int64_t rax_644 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_644, 0x30)
                                    arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            else
                            label_1401fb60e:
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4661 & 8) != 0)
                                    goto label_1401fb618
                            
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg9[0].o = data_1434426c0
                            arg8[0].o = zmm4[0].o ^ data_142d3f800
                            arg13 = arg10
                            
                            if ((temp0_4661 & 0x10) != 0)
                                zmm1[0].o = *arg10[0].q
                                zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            arg7[0].o ^= data_142d3f800
                            zmm4 = arg13
                            
                            if ((temp0_4661 & 0x20) != 0)
                                int64_t rax_646 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_646, 0x10)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            
                            zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm2, arg15[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                            
                            if ((temp0_4661 & 0x40) != 0)
                                float* rax_647 = zmm4[0].q
                                arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_647, 0x20)
                                arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                            
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm5 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                            zmm2 = _mm256_and_ps(zmm2, zmm0)
                            
                            if (temp0_4661 s< 0)
                                int64_t rbx_72 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rbx_72, 0x30)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            
                            arg13[0].o = var_ce0_2
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg6 = var_d20.32
                            zmm5 = _mm256_blendv_ps(arg6, zmm5, zmm1)
                            var_7c0_4 = _mm256_maskstore_ps(zmm2, arg5)
                            
                            if ((temp0_4661 & 1) == 0)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                
                                if ((temp0_4661 & 2) != 0)
                                    goto label_1401fbf3f
                                
                                goto label_1401fb749
                            
                            arg5[0].o = *zmm5[0]
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            
                            if ((temp0_4661 & 2) == 0)
                            label_1401fb749:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_4661 & 4) != 0)
                                label_1401fb758:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm0[0], 0x20)
                                    arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                            else
                            label_1401fbf3f:
                                int64_t rax_674 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_674, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_4661 & 4) != 0)
                                    goto label_1401fb758
                            
                            arg9 = var_d40_2
                            zmm0 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            
                            if ((temp0_4661 & 8) == 0)
                                zmm4 = _mm256_blendv_ps(arg13, zmm0, zmm1)
                                
                                if ((temp0_4661 & 0x10) != 0)
                                    goto label_1401fbf95
                                
                                goto label_1401fb798
                            
                            zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            int64_t rax_675 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_675, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm4, 0xf)
                            zmm4 = _mm256_blendv_ps(arg13, zmm0, zmm1)
                            
                            if ((temp0_4661 & 0x10) != 0)
                            label_1401fbf95:
                                zmm0[0].o = *zmm4[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                
                                if ((temp0_4661 & 0x20) == 0)
                                    goto label_1401fb7a1
                                
                                goto label_1401fbfb4
                            
                        label_1401fb798:
                            
                            if ((temp0_4661 & 0x20) == 0)
                            label_1401fb7a1:
                                
                                if ((temp0_4661 & 0x40) != 0)
                                    goto label_1401fbfd5
                                
                                goto label_1401fb7b2
                            
                        label_1401fbfb4:
                            int64_t rax_677 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_677, 0x10)
                            arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            
                            if ((temp0_4661 & 0x40) == 0)
                            label_1401fb7b2:
                                
                                if (temp0_4661 s< 0)
                                label_1401fc002:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rcx_90 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rcx_90, 0x30)
                                    arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            else
                            label_1401fbfd5:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                double rax_678 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_678, 0x20)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                
                                if (temp0_4661 s< 0)
                                    goto label_1401fc002
                            
                            var_820_4 = _mm256_maskstore_ps(zmm2, arg5)
                        
                        zmm1 = var_960_1.32
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_c80_4[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_bc0_4[0].o)
                        arg5 = var_b40_1
                        zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0_2[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a60_2[0].o)
                        arg7 = var_b60_3
                        zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg8 = var_9c0_5
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
                        int64_t rcx_86 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_77 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_50 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_37 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        double rax_649 = zmm0[0]
                        zmm0[0].o = zx.o(*(arg16 + r8_20))
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + rcx_86), 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + rdi_50), 2)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg16 + rdx_77), 3)
                        int64_t rcx_87 = zmm1[0].q
                        zmm1[0].o = zx.o(*(arg16 i+ rax_649))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + rbx_73), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + rcx_87), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg16 + rsi_37), 3)
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
                        var_6c0 = _mm256_maskstore_ps(arg11, zmm2)
                        var_6a0 = _mm256_maskstore_ps(arg11, zmm0)
                        var_680 = _mm256_maskstore_ps(arg11, zmm1)
                        zmm2[0].o = data_142fc95c0
                        arg8 = var_cc0_3.32
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm5[0].o = zmm0[0].o ^ var_c00_3
                    zmm0[0].o = arg13[0].o & zmm5[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg10 = var_c20_4
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        arg7[0].o = data_1434422d0
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg7[0].o, var_c60_1)
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
                            zmm1 = var_980_1
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = _mm256_and_ps(zmm2, arg15)
                            bool cond:44_1 = _mm256_movemask_ps(zmm1) == 0
                            int128_t var_d20_1 = zmm5[0].o
                            var_b80_2[0].o = arg6[0].o
                            
                            if (cond:44_1)
                                arg11 = var_d00_3
                            else
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg5[0].o = data_1434426b0
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(var_d00_3[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d00_3[0].o, arg5[0].o)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                                arg9 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                                arg11 = _mm256_blendv_ps(var_d00_3, arg5, arg9)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                arg5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                arg10 = _mm256_blendv_ps(arg10, zmm4, zmm1)
                                zmm0 = var_960_1.32
                                arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_c80_4[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_bc0_4[0].o)
                                arg6[0].o = _mm256_extractf128_ps(var_b40_1[0].o, 1)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_ca0_2[0].o)
                                arg7[0].o =
                                    __vpaddq_xmmdq_xmmdq_memdq(var_b40_1[0].o, var_a60_2[0].o)
                                arg8[0].o = arg14[0].o
                                arg14 = arg15
                                arg12 = var_b60_3
                                zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                var_bc0_4 = zmm2
                                zmm2[0].o = _mm256_extractf128_ps(var_9c0_5[0].o, 1)
                                var_b40_1[0].o = data_1434426c0
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_b40_1[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_b40_1[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_9c0_5[0].o, arg5[0].o)
                                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_b40_1[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                var_b40_1[0].o =
                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_b40_1[0].o)
                                var_b40_1[0].o =
                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, var_b40_1[0].o)
                                arg15 = arg14
                                arg14[0].o = arg8[0].o
                                zmm0 = _mm256_insertf128_ps(var_b40_1, arg5[0].o, 1)
                                arg5[0].o = zx.o(0)
                                zmm0 = _mm256_blendv_ps(arg5, zmm0, arg9)
                                zmm1 = _mm256_blendv_ps(arg5, zmm2, zmm1)
                                int64_t r8_21 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                double rcx_88 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t r9_15 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                double rbx_74 = zmm0[0]
                                int64_t rdi_51 = zmm1[0].q
                                int64_t rsi_38 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                double rax_653 = zmm0[0]
                                int64_t rdx_78 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(arg16 i+ rcx_88))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg16 + r8_21), 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg16 i+ rbx_74), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg16 + r9_15), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg16 + rdi_51), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg16 + rsi_38), 5)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg16 i+ rax_653), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg16 + rdx_78), 7)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm2 = var_bc0_4
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                            
                            zmm1[0].o = zx.o(0)
                            var_6c0 = _mm256_maskstore_ps(arg15, _mm256_blendv_ps(zmm1, zmm0, zmm2))
                            zmm0 = var_be0_1
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
                            char temp0_4933 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_4933 == 0)
                                arg9 = var_d40_2
                                arg8 = var_cc0_3.32
                                zmm5[0].o = var_d20_1
                            else
                                if ((temp0_4933 & 1) != 0)
                                    arg7[0].o = zx.o(*arg11[0].q)
                                
                                if ((temp0_4933 & 2) != 0)
                                    int64_t rax_681 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_681, 1)
                                
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                
                                if ((temp0_4933 & 4) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm1[0].q, 2)
                                
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                var_bc0_4[0].o = arg5[0].o
                                arg8 = arg11
                                
                                if ((temp0_4933 & 8) != 0)
                                    int64_t rax_683 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_683, 3)
                                
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                arg11[0].o = data_1434426b0
                                var_c00_3.32 = arg15
                                
                                if ((temp0_4933 & 0x10) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg10[0].q, 4)
                                
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                                arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
                                arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x50)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                
                                if ((temp0_4933 & 0x20) != 0)
                                    zmm5 = arg10
                                    int64_t rax_685 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_685, 5)
                                else
                                    zmm5 = arg10
                                
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xfa)
                                arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                
                                if ((temp0_4933 & 0x40) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0], 6)
                                
                                arg11 = arg8
                                arg8 = var_cc0_3.32
                                zmm2 = _mm256_insertf128_ps(arg15, arg13[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(arg6, arg10[0].o, 1)
                                
                                if (temp0_4933 s< 0)
                                    int64_t rax_687 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_687, 7)
                                
                                arg9 = var_d40_2
                                arg13[0].o = var_ce0_2
                                zmm5[0].o = var_d20_1
                                arg15 = var_c00_3.32
                                arg6[0].o = zx.o(0)
                                arg11 = _mm256_blendv_ps(arg11, zmm1, arg5)
                                arg10 = _mm256_blendv_ps(zmm5, zmm2, zmm4)
                                zmm0[0].o = zx.o(0)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg7[0].o, zx.o(0))
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg7[0])
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                arg5[0].o = var_bc0_4[0].o
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                            var_6a0 = _mm256_maskstore_ps(arg15, _mm256_and_ps(zmm1, zmm0))
                            zmm0 = var_be0_1
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
                            char temp0_4982 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_4982 == 0)
                                arg7[0].o = data_1434422d0
                                arg6[0].o = var_b80_2[0].o
                            else
                                if ((temp0_4982 & 1) == 0)
                                    if ((temp0_4982 & 2) != 0)
                                        goto label_1401fc752
                                    
                                    goto label_1401fc2b4
                                
                                zmm2[0].o = zx.o(*arg11[0].q)
                                
                                if ((temp0_4982 & 2) != 0)
                                label_1401fc752:
                                    int64_t rax_694 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_694, 1)
                                    
                                    if ((temp0_4982 & 4) == 0)
                                        goto label_1401fc2bd
                                    
                                    goto label_1401fc766
                                
                            label_1401fc2b4:
                                
                                if ((temp0_4982 & 4) == 0)
                                label_1401fc2bd:
                                    
                                    if ((temp0_4982 & 8) != 0)
                                        goto label_1401fc77f
                                    
                                    goto label_1401fc2c6
                                
                            label_1401fc766:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 2)
                                
                                if ((temp0_4982 & 8) != 0)
                                label_1401fc77f:
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    int64_t rax_696 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_696, 3)
                                    arg7[0].o = data_1434422d0
                                    arg6[0].o = var_b80_2[0].o
                                    
                                    if ((temp0_4982 & 0x10) == 0)
                                        goto label_1401fc2e0
                                    
                                    goto label_1401fc7af
                                
                            label_1401fc2c6:
                                arg7[0].o = data_1434422d0
                                arg6[0].o = var_b80_2[0].o
                                
                                if ((temp0_4982 & 0x10) == 0)
                                label_1401fc2e0:
                                    
                                    if ((temp0_4982 & 0x20) != 0)
                                        goto label_1401fc7bd
                                    
                                    goto label_1401fc2e9
                                
                            label_1401fc7af:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                                
                                if ((temp0_4982 & 0x20) != 0)
                                label_1401fc7bd:
                                    int64_t rax_698 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_698, 5)
                                    
                                    if ((temp0_4982 & 0x40) == 0)
                                        goto label_1401fc2f2
                                    
                                    goto label_1401fc7d1
                                
                            label_1401fc2e9:
                                
                                if ((temp0_4982 & 0x40) != 0)
                                label_1401fc7d1:
                                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 6)
                                    
                                    if (temp0_4982 s< 0)
                                    label_1401fc7e9:
                                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_700 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_700, 7)
                                else
                                label_1401fc2f2:
                                    
                                    if (temp0_4982 s< 0)
                                        goto label_1401fc7e9
                                
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
                            var_680 = _mm256_maskstore_ps(arg15, zmm0)
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o ^= zmm5[0].o
                        zmm1[0].o = arg13[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg14 = var_ae0_1
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0[0].o = data_143442ad0
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_c60_1)
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
                                var_6c0 = _mm256_maskstore_ps(arg5, zmm4)
                                var_6a0 = _mm256_maskstore_ps(arg5, zmm4)
                                var_680 = _mm256_maskstore_ps(arg5, zmm4)
                            
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
                                var_6c0 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_6a0 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_680 = _mm256_maskstore_ps(zmm0, zmm1)
                
                arg5 = var_780.32
                zmm4 = var_760.32
                zmm5 = var_740.32
                zmm0 = _mm256_sub_ps(var_6c0, arg5)
                zmm1 = _mm256_sub_ps(var_6a0, zmm4)
                zmm2 = _mm256_sub_ps(var_680, zmm5)
                arg6 = var_a80_3
                zmm0 = _mm256_mul_ps(arg6, zmm0)
                zmm1 = _mm256_mul_ps(arg6, zmm1)
                zmm2 = _mm256_mul_ps(arg6, zmm2)
                var_780.32 = _mm256_maskstore_ps(arg8, _mm256_add_ps(arg5, zmm0))
                var_760.32 = _mm256_maskstore_ps(arg8, _mm256_add_ps(zmm4, zmm1))
                zmm0 = _mm256_add_ps(zmm5, zmm2)
                var_740.32 = _mm256_maskstore_ps(arg8, zmm0)
                zmm2 = var_880_1
        
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm4 = var_ac0_2
        zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm4[0].o)
        zmm1[0].o = arg8[0].o & zmm0[0].o
        zmm4[0].o = arg5[0].o & zmm2[0].o
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            zmm1 = _mm256_insertf128_ps(arg5, arg8[0].o, 1)
            zmm0 = _mm256_and_ps(zmm1, zmm0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            var_780.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_760.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_740.32 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_460_2, var_8c0_1, 1)
        zmm2[0].o = var_780
        int128_t var_770
        arg5[0].o = var_770
        zmm4[0].o = var_760
        int128_t var_750
        zmm5[0].o = var_750
        arg6[0].o = var_740
        int128_t var_730
        arg7[0].o = var_730
        arg9[0].o = zx.o(0)
        arg11[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg10[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 0x28)
        int128_t var_2c0 = zmm4[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        int128_t var_2b0_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg6[0].o, 0xa8)
        int128_t var_2a0_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
        int128_t var_290_1 = zmm1[0].o
        zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        arg5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg7[0].o, 0x28)
        int128_t var_280_1 = zmm5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
        int128_t var_270_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg7[0].o, 0xa8)
        int128_t var_260_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
        int128_t var_250_1 = zmm1[0].o
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg14[0].o, var_ac0_2[0].o)
        zmm1 = _mm256_insertf128_ps(zmm1, arg8[0].o, 1)
        i_4 = zx.q(_mm256_movemask_ps(zmm1))
        
        do
            uint64_t rcx_91
            uint64_t rflags_2
            
            if (i_4 == 0)
                rcx_91 = 0x40
            else
                rcx_91, rflags_2 = _bit_scan_forward(i_4)
            double var_140[0x4] = zmm0
            zmm1[0].o = (&var_2c0)[rcx_91]
            *(arg1 + sx.q(*(&var_140 + ((zx.q(rcx_91.d) & 7) << 2))) * 0x30 + 0x20) = zmm1[0].o
            i_4 &= rol.q(-2, rcx_91.b)
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_160_1[0x4] = zmm0
    zmm0[0].o = 4
    zmm1[0].o = zx.o(r14)
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_180_1[0x4] = zmm0
    zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_3e0_1[0x4] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int32_t rcx_4
    rcx_4.b = zmm0[0].o f>= zmm2[0]
    zmm0[0].o = zx.o(neg.d(rcx_4))
    zmm1[0].o = arg5[0].o
    zmm1[0] = float.s(arg17 - 1)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm1[0].o = zmm1[0].o f* zmm2[0]
    int32_t rax_2 = int.d(zmm1[0])
    r15 = 0
    
    if (rax_2 s< 0)
        rax_2 = 0
    
    if (arg17 - 2 s<= rax_2)
        rax_2 = arg17 - 2
    
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_1a0_1[0x4] = zmm0
    zmm0[0].o = zx.o(rax_2)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_b40 = zmm0
    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_1c0_1[0x4] = zmm0
    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    arg14[0].o = data_142fc95c0
    
    do
        int64_t rax_10 = sx.q((r15 << 3).d)
        zmm0[0].o = *(arg2 + rax_10)
        zmm1[0].o = *(arg2 + rax_10 + 0x10)
        arg8[0].o = *(arg2 + rax_10 + 0x20)
        arg7[0].o = *(arg2 + rax_10 + 0x30)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xdd)
        arg5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg7[0].o, 0xdd)
        zmm5 = var_160_1
        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
        zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
        int64_t r8 = sx.q(zmm2[0])
        int64_t r9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
        int64_t rbx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
        int64_t rdi_2 = sx.q(arg5[0])
        int64_t rsi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        int32_t temp0_36 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
        int32_t temp0_37 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
        int32_t* rdx_2 = arg3
        zmm2[0].o = zx.o(*(rdx_2 + r8))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_2 + r9), 1)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_2 + r10_1), 2)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_2 + rbx_2), 3)
        arg5[0].o = zx.o(*(rdx_2 + rdi_2))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_2 + rsi_2), 1)
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_2 + sx.q(temp0_36)), 2)
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_2 + sx.q(temp0_37)), 3)
        arg9[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x88)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
        zmm0[0].o ^= arg6[0].o
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
        zmm1[0].o ^= arg6[0].o
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        double var_460_1[0x4] = zmm0
        int128_t var_660
        int128_t var_640
        int128_t var_620
        
        if (_mm256_movemask_ps(zmm0) != 0)
            arg12[0].o = arg14[0].o
            var_700 = arg9
            var_920 = arg7[0].o
            var_a00 = arg8[0].o
            var_9a0 = r15
            arg14 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
            zmm2[0].o = arg11[0].o ^ arg6[0].o
            arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
            arg15[0].o = arg10[0].o ^ arg6[0].o
            zmm1 = _mm256_insertf128_ps(arg15, zmm2[0].o, 1)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            float var_a80_1[0x8] = arg5
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            int64_t var_c00_1[0x2] = zmm0[0].o
            arg9[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
            zmm0 = _mm256_and_ps(zmm1, arg14)
            int64_t r8_1 = sx.q(zmm0[0].d)
            int32_t temp0_59 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int64_t r9_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rbx_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int64_t rdi_4 = sx.q(zmm0[0].d)
            int32_t temp0_63 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_64 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_65 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = zx.o(*(r14 + r8_1))
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14 + sx.q(temp0_59)), 1)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14 + r9_1), 2)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14 + rbx_4), 3)
            zmm4[0].o = zx.o(*(r14 + rdi_4))
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r14 + sx.q(temp0_63)), 1)
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r14 + sx.q(temp0_64)), 2)
            zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r14 + sx.q(temp0_65)), 3)
            zmm4 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x18)
            arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x18)
            arg6 =
                __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg6, arg7[0].o, 1), data_1434429c0)
            float var_be0[0x8]
            arg5 = _mm256_blendv_ps(var_be0, arg6, zmm1)
            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1c)
            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1c)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
            arg8 = _mm256_blendv_ps(arg10, zmm0, zmm1)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            arg7[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 2)
            zmm0 = _mm256_and_ps(zmm1, _mm256_insertf128_ps(zmm0, zmm5[0].o, 1))
            int32_t temp0_87 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_88 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
            int32_t rcx_13 = zmm0[0].d
            int32_t temp0_89 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int32_t temp0_91 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_92 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_93 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            var_be0 = arg5
            arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_1434429e0)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 3)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 3)
            float var_9c0_1[0x8] = arg5
            zmm5 = _mm256_and_ps(zmm1, _mm256_or_ps(arg5, _mm256_insertf128_ps(zmm5, arg6[0].o, 1)))
            int64_t rax_20 = sx.q(zmm5[0].d)
            int32_t temp0_100 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            arg6[0].o = zx.o(*(rax_20 + &data_143442ba0))
            int64_t rax_23 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            arg6[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(sx.q(temp0_100) + &data_143442ba0), 1)
            int64_t rdx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            arg6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rax_23 + &data_143442ba0), 2)
            int64_t rax_25 = sx.q(zmm5[0].d)
            arg6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rdx_8 + &data_143442ba0), 3)
            int32_t temp0_107 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            arg6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rax_25 + &data_143442ba0), 4)
            int64_t rax_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            arg6[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(sx.q(temp0_107) + &data_143442ba0), 5)
            int32_t temp0_111 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rax_27 + &data_143442ba0), 6)
            int32_t r12_1 = zmm0[0].d
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(sx.q(temp0_111) + &data_143442ba0), 7)
            zmm5[0].o = __vpmovzxbd_xmmdq_xmmd(zmm0[0].d)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
            zmm0[0].o = __vpmovzxbd_xmmdq_xmmd(zmm0[0].d)
            arg13 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
            uint32_t var_b60[0x4] = arg7[0].o
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
            int32_t var_ac0_1[0x8] = arg8
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
            double var_980[0x4]
            var_980[0].o = zmm2[0].o
            zmm0[0].o = arg5[0].o & not.o(zmm2[0].o)
            zmm2[0].o = arg6[0].o & not.o(arg15[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            int32_t var_d40_1[0x8] = arg14
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_124 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            zmm0 = var_180_1
            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg8 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442840)
            arg14[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_a80_1[0].o)
            float var_c80_1[0x8] = arg9
            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
            zmm0[0].o = zx.o(0)
            var_b00 = zmm0
            zmm0[0].o = zx.o(0)
            var_d20 = arg5[0].o
            
            if (temp0_124 != 0)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm0[0].o = arg5[0].o ^ var_d20
                arg7[0].o = arg6[0].o ^ arg5[0].o
                arg5[0].o = var_d20
                zmm0 = _mm256_and_ps(_mm256_and_ps(_mm256_insertf128_ps(arg7, zmm0[0].o, 1), zmm1), 
                    arg13)
            
            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c00_1)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
            arg15 = _mm256_blendv_ps(arg11, arg8, zmm1)
            zmm5[0].o = arg11[0].o & not.o(arg5[0].o)
            zmm4[0].o = arg5[0].o
            arg5[0].o = arg10[0].o & not.o(arg6[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0
            arg8[0].o = arg11[0].o
            int32_t var_6e0_1[0x4] = zmm5[0].o
            
            if (cond:3_1)
                zmm5[0].o = zx.o(0)
            else
                arg5 = _mm256_and_ps(zmm1, _mm256_insertf128_ps(arg6, zmm4[0].o, 1))
                zmm5 = _mm256_and_ps(arg5, arg13)
                zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm0, data_143442a00, arg5)
            
            r14 = arg16
            r15 = var_9a0
            arg11[0].o = data_142d3f5b0
            arg13[0].o = data_1434426c0
            arg5 = _mm256_insertf128_ps(arg14, arg7[0].o, 1)
            int64_t var_8c0[0x2]
            var_8c0.32 = arg5
            arg14 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
            zmm2[0].o = zx.o(*(sx.q(r12_1) + &data_143442b80))
            zmm2[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(sx.q(temp0_91) + &data_143442b80), 1)
            zmm2[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(sx.q(temp0_92) + &data_143442b80), 2)
            zmm2[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(sx.q(temp0_93) + &data_143442b80), 3)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = arg8[0].o & not.o(zmm2[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
            arg5[0].o = zx.o(*(sx.q(rcx_13) + &data_143442b80))
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_87) + &data_143442b80), 1)
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_88) + &data_143442b80), 2)
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_89) + &data_143442b80), 3)
            arg5[0].o = arg10[0].o & not.o(arg5[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            uint32_t var_a60[0x8]
            zmm2 = _mm256_blendv_ps(var_a60, zmm0, zmm1)
            var_a60 = zmm2
            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm2[0].o = data_142fc95e0
            arg5[0].o = zmm2[0].o
            zmm2[0].o = arg8[0].o & not.o(zmm2[0].o)
            zmm0[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = arg10[0].o & not.o(arg5[0].o)
            zmm2[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            int128_t var_960
            zmm2 = _mm256_blendv_ps(var_960.32, zmm0, zmm1)
            var_960.32 = zmm2
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg11[0].o)
            zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
            zmm2[0].o = arg8[0].o & not.o(zmm2[0].o)
            zmm0[0].o = arg10[0].o & not.o(zmm0[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            bool cond:7_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            float var_bc0_2[0x8] = arg15
            int64_t var_ce0[0x2]
            var_ce0.32 = arg14
            double var_b80[0x4]
            var_b80[0].o = arg8[0].o
            float var_880[0x8]
            var_880[0].o = arg12[0].o
            float var_d00[0x8]
            int64_t var_cc0[0x2]
            int32_t var_ca0[0x4]
            int128_t var_c40
            int32_t var_c20_1[0x8]
            double var_b20[0x4]
            double var_600[0x4]
            int32_t var_5e0[0x4]
            
            if (cond:7_1)
                arg8[0].o = arg11[0].o
                arg7[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_c20_1 = zmm0
                arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                arg11 = var_ac0_1
                arg10 = var_a80_1
                arg6[0].o = var_c00_1
                zmm1 = var_c80_1
            else
                zmm0 = var_be0
                zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9540)
                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm5[0].o = zx.o(0)
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                zmm5[0].o = zmm0[0].o & arg5[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                bool cond:6_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                
                if (cond:6_1)
                    arg10[0].o = zx.o(0)
                    arg7[0].o = zx.o(0)
                    arg12[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    var_c20_1 = zmm0
                    zmm5[0].o = zx.o(0)
                else
                    arg6[0].o = zx.o(0)
                    zmm0[0].o = arg18
                    arg7[0].o = zx.o(0)
                    
                    if (zx.o(0) f>= zmm0[0].d)
                        arg10[0].o = zx.o(0)
                        arg7[0].o = zx.o(0)
                        arg12[0].o = zx.o(0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        var_c20_1 = zmm0
                    else
                        arg10 = arg14
                        bool cond:11_1 = zmm0[0].o f>= 1f
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                        arg14 = arg15
                        arg15 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        
                        if (cond:11_1)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(arg8, arg7[0].o, 1), arg15)
                            arg7 = zmm0
                            arg12 = zmm0
                            var_c20_1 = zmm0
                            arg15 = arg14
                            arg14 = arg10
                            arg10 = zmm0
                        else
                            arg10 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg15), var_3e0_1)
                            arg11 = _mm256_round_ps(arg10, 9)
                            arg6 = _mm256_cvttps_epi32(arg11)
                            arg9[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
                            arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg8[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            arg14[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                            arg6 = _mm256_insertf128_ps(arg9, arg14[0].o, 1)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg13[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg12 = _mm256_insertf128_ps(arg13, arg7[0].o, 1)
                            zmm0 = _mm256_and_ps(arg12, arg6)
                            var_b20 = zmm0
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            
                            if (arg19 != 1)
                                arg6 = _mm256_sub_ps(arg10, arg11)
                            
                            arg7[0].o &= arg14[0].o
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg10[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                            arg7[0].o = arg13[0].o & arg9[0].o
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            arg7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                            zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg15[0].o)
                            arg7[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                            arg12 = _mm256_and_ps(arg12, zmm0)
                            arg10 = var_b20
                            arg7 = arg10
                            var_c20_1 = arg12
                            arg14[0].o = data_142d3f5b0
                            arg11[0].o = arg14[0].o
                            arg13[0].o = data_1434426c0
                            arg15 = var_bc0_2
                            arg14 = var_ce0.32
                    
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                    zmm5 = _mm256_and_ps(zmm0, arg6)
                
                zmm0[0].o = zmm4[0].o ^ arg9[0].o
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, data_142d8f750)
                zmm2[0].o ^= arg9[0].o
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                zmm4[0].o = arg5[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg8[0].o = arg11[0].o
                    var_b00 = zmm5
                    arg10 = var_a80_1
                    arg6[0].o = var_c00_1
                    zmm1 = var_c80_1
                else
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                    arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm2[0].o = data_1434422d0
                    arg5[0].o = zmm2[0].o
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg15[0].o)
                    arg5 = __vorps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg5, zmm2[0].o, 1), 
                        var_1a0_1)
                    zmm2 = _mm256_and_ps(arg5, zmm0)
                    bool cond:16_1 = _mm256_movemask_ps(zmm2) == 0
                    var_d00 = arg6
                    arg8[0].o = arg11[0].o
                    
                    if (cond:16_1)
                        var_c40.32 = arg12
                    else
                        arg6 = arg5
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg10 = _mm256_blendv_ps(arg10, arg5, zmm2)
                        arg12 = _mm256_blendv_ps(arg12, arg5, zmm2)
                        arg5 = arg6
                        arg7 = arg10
                        var_c40.32 = arg12
                        var_c20_1 = arg12
                    
                    arg12 = _mm256_andnot_ps(arg5, zmm0)
                    int32_t temp0_248 = _mm256_movemask_ps(arg12)
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    
                    if (temp0_248 == 0)
                        goto label_1401f0431
                    
                    arg11 = arg5
                    var_b20 = arg10
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                    arg10 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    zmm0[0].o = arg18
                    
                    if (zmm0[0].o f>= 1f)
                        arg7 = _mm256_blendv_ps(var_b20, arg10, arg12)
                        zmm0 = _mm256_blendv_ps(var_c40.32, arg10, arg12)
                        var_c20_1 = zmm0
                    label_1401f0431:
                        arg10 = var_a80_1
                        arg6[0].o = var_c00_1
                        zmm1 = var_c80_1
                        arg12 = var_d00
                    else
                        var_a20 = zmm4[0].o
                        double var_b00_1[0x4] = zmm5
                        zmm4 = var_960.32
                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                        arg6 = var_a60
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
                        arg6[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg5[0].o)
                        arg7 = var_8c0.32
                        arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                        arg7[0].o = data_143442a20
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm2 = data_143442a40
                        var_c60.32 = _mm256_and_ps(zmm0, zmm2)
                        arg13 = _mm256_and_ps(zmm1, zmm2)
                        zmm0 = _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(arg10), var_3e0_1))
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        var_ca0 = zmm2[0].o
                        zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        arg15 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = zx.o(0)
                        zmm0 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                        double var_aa0_1[0x4] = zmm0
                        arg14 = arg10
                        float var_c20_2[0x8] = arg10
                        var_9e0.32 = arg11
                        var_940 = arg15
                        
                        if (arg17 s< 0x100)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            arg10[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            char r9_4 = temp0_248.b
                            int128_t var_400
                            zmm5[0].o = var_400
                            
                            if ((r9_4 & 1) != 0)
                                zmm5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, zx.d(*zmm0[0]), 0)
                            
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                            
                            if ((r9_4 & 2) != 0)
                                uint32_t rax_51 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_51, 1)
                            
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            arg5 = var_c60.32
                            int64_t temp0_409[0x2] = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                            int128_t var_5a0
                            
                            if ((r9_4 & 4) == 0)
                                arg5[0].o = var_5a0
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, temp0_409)
                                
                                if ((r9_4 & 8) != 0)
                                    goto label_1401f0909
                                
                                goto label_1401f050a
                            
                            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm5[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, zx.d(*arg5[0].q), 2)
                            arg5[0].o = var_5a0
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, temp0_409)
                            
                            if ((r9_4 & 8) != 0)
                            label_1401f0909:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint32_t rax_79 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_79, 3)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                
                                if ((r9_4 & 0x10) == 0)
                                    goto label_1401f051a
                                
                                goto label_1401f0935
                            
                        label_1401f050a:
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            
                            if ((r9_4 & 0x10) == 0)
                            label_1401f051a:
                                
                                if ((r9_4 & 0x20) != 0)
                                    goto label_1401f094a
                                
                                goto label_1401f0524
                            
                        label_1401f0935:
                            zmm5[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, zx.d(*zmm0[0]), 4)
                            
                            if ((r9_4 & 0x20) != 0)
                            label_1401f094a:
                                uint32_t rax_83 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_83, 5)
                                
                                if ((r9_4 & 0x40) == 0)
                                    goto label_1401f052e
                                
                                goto label_1401f095c
                            
                        label_1401f0524:
                            
                            if ((r9_4 & 0x40) != 0)
                            label_1401f095c:
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                    zx.d(*zmm1[0].q), 6)
                                
                                if (temp0_248.b s< 0)
                                label_1401f0978:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    uint32_t rax_87 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_87, 7)
                            else
                            label_1401f052e:
                                
                                if (temp0_248.b s< 0)
                                    goto label_1401f0978
                            
                            zmm1[0].o = zmm5[0].o & data_142fc92e0
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d8f750)
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            arg8[0].o = _mm256_extractf128_ps(var_b40[0].o, 1)
                            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                            zmm2[0].o ^= arg9[0].o
                            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_b40[0].o)
                            zmm4[0].o ^= arg9[0].o
                            arg11 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            zmm2 = _mm256_and_ps(arg12, arg11)
                            bool cond:81_1 = _mm256_movemask_ps(zmm2) == 0
                            var_400 = zmm5[0].o
                            var_600[0].o = arg6[0].o
                            var_5e0.32 = arg11
                            
                            if (cond:81_1)
                                zmm5 = arg15
                            else
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                                zmm1[0].o ^= arg9[0].o
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_b40[0].o)
                                zmm0[0].o ^= arg9[0].o
                                zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                zmm5 = _mm256_blendv_ps(arg15, arg14, zmm1)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
                                zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                                zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_ca0)
                                zmm2[0].o ^= arg9[0].o
                                var_b40[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                                var_b40[0].o ^= arg9[0].o
                                zmm1 =
                                    _mm256_and_ps(zmm1, _mm256_insertf128_ps(var_b40, zmm2[0].o, 1))
                                zmm2 = _mm256_and_ps(arg12, zmm1)
                                int32_t j = _mm256_movemask_ps(zmm2)
                                
                                if (j != 0)
                                    zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                    zmm4 = arg15
                                    
                                    do
                                        arg15 = zmm0
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
                                        var_b40[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                                        var_b40[0].o = __vpmovsxdq_xmmdq_xmmq(var_b40[0])
                                        arg11[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                        var_b40[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_b40[0].o)
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm0, var_b40[0].o, 1)
                                        char temp0_461 = _mm256_movemask_ps(zmm2)
                                        
                                        if ((temp0_461 & 1) == 0)
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                                            var_b40[0].o =
                                                __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                                            
                                            if ((temp0_461 & 2) != 0)
                                                goto label_1401f0638
                                            
                                            goto label_1401f075b
                                        
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                            zx.d(*zmm0[0]), 0)
                                        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                                        var_b40[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                                        
                                        if ((temp0_461 & 2) != 0)
                                        label_1401f0638:
                                            uint32_t rax_56 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, rax_56, 1)
                                            var_b40[0].o = __vpmovsxdq_xmmdq_xmmq(var_b40[0])
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                                            
                                            if ((temp0_461 & 4) == 0)
                                                goto label_1401f0773
                                            
                                            goto label_1401f0658
                                        
                                    label_1401f075b:
                                        var_b40[0].o = __vpmovsxdq_xmmdq_xmmq(var_b40[0])
                                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                                        
                                        if ((temp0_461 & 4) == 0)
                                        label_1401f0773:
                                            var_b40[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(var_b40[0].o, temp0_409)
                                            
                                            if ((temp0_461 & 8) != 0)
                                                goto label_1401f067e
                                            
                                            goto label_1401f0786
                                        
                                    label_1401f0658:
                                        arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                            zx.d(*arg6[0].q), 2)
                                        var_b40[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(var_b40[0].o, temp0_409)
                                        
                                        if ((temp0_461 & 8) != 0)
                                        label_1401f067e:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            uint32_t rax_60 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, rax_60, 3)
                                            zmm0 = _mm256_insertf128_ps(zmm2, var_b40[0].o, 1)
                                            
                                            if ((temp0_461 & 0x10) == 0)
                                                goto label_1401f0796
                                            
                                            goto label_1401f06aa
                                        
                                    label_1401f0786:
                                        zmm0 = _mm256_insertf128_ps(zmm2, var_b40[0].o, 1)
                                        
                                        if ((temp0_461 & 0x10) == 0)
                                        label_1401f0796:
                                            
                                            if ((temp0_461 & 0x20) != 0)
                                                goto label_1401f06bf
                                            
                                            goto label_1401f07a0
                                        
                                    label_1401f06aa:
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                            zx.d(*zmm0[0]), 4)
                                        
                                        if ((temp0_461 & 0x20) != 0)
                                        label_1401f06bf:
                                            uint32_t rax_64 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, rax_64, 5)
                                            
                                            if ((temp0_461 & 0x40) == 0)
                                                goto label_1401f07aa
                                            
                                            goto label_1401f06d1
                                        
                                    label_1401f07a0:
                                        
                                        if ((temp0_461 & 0x40) != 0)
                                        label_1401f06d1:
                                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*zmm2[0].q), 6)
                                            
                                            if (temp0_461 s< 0)
                                            label_1401f06ed:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                                uint32_t rax_68 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_68, 7)
                                        else
                                        label_1401f07aa:
                                            
                                            if (temp0_461 s< 0)
                                                goto label_1401f06ed
                                        
                                        zmm0[0].o = arg5[0].o & data_142fc92e0
                                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                            data_142d8f750)
                                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_b40[0].o)
                                        zmm0 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm0, zmm2[0].o, 1), zmm1)
                                        zmm2[0].o = zx.o(0)
                                        arg6 = _mm256_and_ps(zmm0, arg12)
                                        
                                        if (_mm256_movemask_ps(arg6) != j)
                                            zmm2 = _mm256_xor_ps(zmm0, zmm1)
                                        
                                        zmm5 = _mm256_blendv_ps(zmm5, zmm4, zmm0)
                                        zmm1[0].o =
                                            __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg9[0].o)
                                        zmm4[0].o =
                                            __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_ca0)
                                        zmm1[0].o ^= arg9[0].o
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                                        zmm4[0].o ^= arg9[0].o
                                        zmm1 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm4, zmm1[0].o, 1), zmm2)
                                        zmm2 = _mm256_and_ps(zmm1, arg12)
                                        j = _mm256_movemask_ps(zmm2)
                                        zmm4 = arg15
                                    while (j != 0)
                            
                            zmm1 = var_5e0.32
                            zmm0 = _mm256_andnot_ps(zmm1, arg12)
                            bool cond:84_1 = _mm256_movemask_ps(zmm0) == 0
                            var_5a0 = arg5[0].o
                            
                            if (not(cond:84_1))
                                zmm2 = __vxorps_ymmqq_ymmqq_memqq(zmm1, var_aa0_1)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm5 = _mm256_blendv_ps(zmm5, zmm0, zmm2)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg9[0].o, var_600[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg9[0].o, var_940[0].o)
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                                arg5[0].o = zx.o(0)
                                arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                                arg11 = _mm256_and_ps(zmm4, zmm2)
                                zmm2 = _mm256_and_ps(arg11, arg12)
                                int32_t j_1 = _mm256_movemask_ps(zmm2)
                                
                                if (j_1 != 0)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    
                                    do
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                                        char temp0_696 = _mm256_movemask_ps(zmm2)
                                        int128_t var_540
                                        uint32_t rax_131
                                        
                                        if ((temp0_696 & 1) != 0)
                                            arg6[0].o = var_540
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, zx.d(*zmm0[0]), 0)
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                            var_b40[0].o =
                                                __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            
                                            if ((temp0_696 & 2) != 0)
                                                rax_131 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, rax_131, 1)
                                        else
                                            arg6[0].o = var_540
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                            var_b40[0].o =
                                                __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            
                                            if ((temp0_696 & 2) != 0)
                                                rax_131 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, rax_131, 1)
                                        var_b40[0].o = __vpmovsxdq_xmmdq_xmmq(var_b40[0])
                                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                                        
                                        if ((temp0_696 & 4) == 0)
                                            var_b40[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(var_b40[0].o, temp0_409)
                                            
                                            if ((temp0_696 & 8) != 0)
                                                goto label_1401f1157
                                            
                                            goto label_1401f128f
                                        
                                        arg14[0].o = arg6[0].o
                                        arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg6[0].o = arg14[0].o
                                        arg14 = var_c20_2
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg6[0].q), 2)
                                        var_b40[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(var_b40[0].o, temp0_409)
                                        
                                        if ((temp0_696 & 8) != 0)
                                        label_1401f1157:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            uint32_t rax_119 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_119, 3)
                                            zmm0 = _mm256_insertf128_ps(zmm2, var_b40[0].o, 1)
                                            
                                            if ((temp0_696 & 0x10) == 0)
                                                goto label_1401f129f
                                            
                                            goto label_1401f1183
                                        
                                    label_1401f128f:
                                        zmm0 = _mm256_insertf128_ps(zmm2, var_b40[0].o, 1)
                                        
                                        if ((temp0_696 & 0x10) == 0)
                                        label_1401f129f:
                                            
                                            if ((temp0_696 & 0x20) != 0)
                                                goto label_1401f1198
                                            
                                            goto label_1401f12a9
                                        
                                    label_1401f1183:
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*zmm0[0]), 4)
                                        
                                        if ((temp0_696 & 0x20) != 0)
                                        label_1401f1198:
                                            uint32_t rax_123 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_123, 5)
                                            
                                            if ((temp0_696 & 0x40) == 0)
                                                goto label_1401f12b3
                                            
                                            goto label_1401f11aa
                                        
                                    label_1401f12a9:
                                        
                                        if ((temp0_696 & 0x40) != 0)
                                        label_1401f11aa:
                                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, zx.d(*zmm2[0].q), 6)
                                            
                                            if (temp0_696 s< 0)
                                            label_1401f11c6:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                                uint32_t rax_127 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, rax_127, 7)
                                        else
                                        label_1401f12b3:
                                            
                                            if (temp0_696 s< 0)
                                                goto label_1401f11c6
                                        
                                        var_540 = arg6[0].o
                                        zmm0[0].o = arg6[0].o & data_142fc92e0
                                        zmm2[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                                        zmm2[0].o ^= arg9[0].o
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_b40[0].o)
                                        zmm0[0].o ^= arg9[0].o
                                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                        zmm2 = _mm256_and_ps(zmm0, arg11)
                                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        arg6 = _mm256_and_ps(zmm2, arg12)
                                        
                                        if (_mm256_movemask_ps(arg6) != j_1)
                                            zmm0 = _mm256_xor_ps(zmm2, arg11)
                                        
                                        zmm5 = _mm256_blendv_ps(zmm5, zmm1, zmm2)
                                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                                        zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                                        arg5[0].o = zx.o(0)
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                                        arg11 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm4, zmm2[0].o, 1), zmm0)
                                        zmm2 = _mm256_and_ps(arg11, arg12)
                                        j_1 = _mm256_movemask_ps(zmm2)
                                    while (j_1 != 0)
                            
                            arg7 = _mm256_blendv_ps(var_b20, zmm5, arg12)
                            var_b20[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                            var_b20[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, var_b20[0].o)
                            zmm0 = _mm256_insertf128_ps(var_b20, zmm2[0].o, 1)
                            int128_t var_a30
                            
                            if ((r9_4 & 1) != 0)
                                zmm2[0].o = var_a30
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0]), 0)
                                var_a30 = zmm2[0].o
                            
                            zmm5 = var_b00_1
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            
                            if ((r9_4 & 2) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                                
                                if ((r9_4 & 4) != 0)
                                    goto label_1401f1443
                                
                                goto label_1401f13d4
                            
                            uint16_t rax_136[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm4[0].o = var_a30
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_136, 1)
                            var_a30 = zmm4[0].o
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                            
                            if ((r9_4 & 4) != 0)
                            label_1401f1443:
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm4[0].o = var_a30
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                    zx.d(*zmm4[0].q), 2)
                                var_a30 = zmm4[0].o
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_409)
                                
                                if ((r9_4 & 8) == 0)
                                    goto label_1401f13e7
                                
                                goto label_1401f147b
                            
                        label_1401f13d4:
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_409)
                            
                            if ((r9_4 & 8) == 0)
                            label_1401f13e7:
                                zmm0 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((r9_4 & 0x10) != 0)
                                    goto label_1401f14b9
                                
                                goto label_1401f13f7
                            
                        label_1401f147b:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            uint32_t rax_140 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm0[0].o = var_a30
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_140, 3)
                            var_a30 = zmm0[0].o
                            zmm0 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            uint32_t rax_144
                            
                            if ((r9_4 & 0x10) == 0)
                            label_1401f13f7:
                                arg5[0].o = var_a30
                                
                                if ((r9_4 & 0x20) != 0)
                                    rax_144 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_144, 5)
                            else
                            label_1401f14b9:
                                arg5[0].o = var_a30
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm0[0]), 4)
                                
                                if ((r9_4 & 0x20) != 0)
                                    rax_144 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_144, 5)
                            
                            if ((r9_4 & 0x40) != 0)
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm2[0].q), 6)
                                
                                if (temp0_248.b s< 0)
                                label_1401f16a1:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    uint32_t rax_155 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_155, 7)
                            else if (temp0_248.b s< 0)
                                goto label_1401f16a1
                            
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1 = var_c40.32
                            zmm4 = _mm256_blendv_ps(zmm1, zmm0, arg12)
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_ca0)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg12)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                zmm4 = _mm256_blendv_ps(zmm4, arg14, zmm0)
                            
                            arg12 = var_d00
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            var_c20_1 = zmm4
                            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            int128_t var_a40
                            
                            if ((r9_4 & 1) != 0)
                                zmm2[0].o = var_a40
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0]), 0)
                                var_a40 = zmm2[0].o
                            
                            arg13[0].o = data_1434426c0
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            var_a30 = arg5[0].o
                            
                            if ((r9_4 & 2) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                                
                                if ((r9_4 & 4) != 0)
                                    goto label_1401f16f2
                                
                                goto label_1401f15ce
                            
                            uint32_t rax_157 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg5[0].o = var_a40
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_157, 1)
                            var_a40 = arg5[0].o
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                            
                            if ((r9_4 & 4) == 0)
                            label_1401f15ce:
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_409)
                                
                                if ((r9_4 & 8) != 0)
                                label_1401f15dd:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    uint32_t rax_149 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm0[0].o = var_a40
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_149, 3)
                                    var_a40 = zmm0[0].o
                            else
                            label_1401f16f2:
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = var_a40
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm2[0].q), 2)
                                var_a40 = zmm2[0].o
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_409)
                                
                                if ((r9_4 & 8) != 0)
                                    goto label_1401f15dd
                            
                            arg14[0].o = data_142d3f5b0
                            arg11[0].o = arg14[0].o
                            arg5[0].o = var_a30
                            arg10 = var_a80_1
                            arg6[0].o = var_c00_1
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            
                            if ((r9_4 & 0x10) != 0)
                                zmm1[0].o = var_a40
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0]), 4)
                                var_a40 = zmm1[0].o
                            
                            zmm1[0].o = arg5[0].o & data_142fc92e0
                            
                            if ((r9_4 & 0x20) != 0)
                                uint32_t rax_161 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg5[0].o = var_a40
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_161, 5)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                
                                if ((r9_4 & 0x40) != 0)
                                label_1401f1751:
                                    zmm4[0].o = arg5[0].o
                                    arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    arg5[0].o = zmm4[0].o
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*arg5[0].q), 6)
                            else
                                arg5[0].o = var_a40
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                
                                if ((r9_4 & 0x40) != 0)
                                    goto label_1401f1751
                            
                            zmm4[0].o = var_a20
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d8f750)
                            
                            if (temp0_248.b s< 0)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint32_t rax_165 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_165, 7)
                            
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            var_a40 = arg5[0].o
                            zmm1[0].o = arg5[0].o & data_142fc92e0
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d8f750)
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        else
                            arg10[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            char rbx_6 = temp0_248.b
                            int128_t var_3f0
                            arg6[0].o = var_3f0
                            arg7 = var_b40
                            
                            if ((rbx_6 & 1) != 0)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0], 0)
                            
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            
                            if ((rbx_6 & 2) != 0)
                                int64_t rax_37 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_37, 1)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1 = var_c60.32
                            arg8[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            
                            if ((rbx_6 & 4) == 0)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                                
                                if ((rbx_6 & 8) != 0)
                                    goto label_1401f0864
                                
                                goto label_1401f00f4
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 2)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                            
                            if ((rbx_6 & 8) != 0)
                            label_1401f0864:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_71 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_71, 3)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                
                                if ((rbx_6 & 0x10) == 0)
                                    goto label_1401f0103
                                
                                goto label_1401f0889
                            
                        label_1401f00f4:
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            
                            if ((rbx_6 & 0x10) == 0)
                            label_1401f0103:
                                
                                if ((rbx_6 & 0x20) != 0)
                                    goto label_1401f0897
                                
                                goto label_1401f010c
                            
                        label_1401f0889:
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0], 4)
                            
                            if ((rbx_6 & 0x20) != 0)
                            label_1401f0897:
                                int64_t rax_73 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_73, 5)
                                
                                if ((rbx_6 & 0x40) == 0)
                                    goto label_1401f0115
                                
                                goto label_1401f08ab
                            
                        label_1401f010c:
                            
                            if ((rbx_6 & 0x40) != 0)
                            label_1401f08ab:
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                                
                                if (temp0_248.b s< 0)
                                label_1401f08c4:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rax_75 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_75, 7)
                            else
                            label_1401f0115:
                                
                                if (temp0_248.b s< 0)
                                    goto label_1401f08c4
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(arg6[0].o, data_142d8f750)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm4[0].o ^= arg9[0].o
                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                            zmm5[0].o ^= arg9[0].o
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                            zmm4 = _mm256_and_ps(arg12, zmm5)
                            bool cond:82_1 = _mm256_movemask_ps(zmm4) == 0
                            var_3f0 = arg6[0].o
                            int32_t var_5e0_1[0x4] = arg10[0].o
                            var_cc0.32 = zmm5
                            
                            if (cond:82_1)
                                arg10 = arg15
                            else
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                zmm2[0].o ^= arg9[0].o
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                zmm0[0].o ^= arg9[0].o
                                zmm4 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                zmm0[0].o = arg10[0].o
                                arg10 = _mm256_blendv_ps(arg15, arg14, zmm4)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_ca0)
                                zmm5[0].o ^= arg9[0].o
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                                arg7[0].o ^= arg9[0].o
                                zmm5 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                                arg14 = _mm256_and_ps(zmm4, zmm5)
                                arg11 = _mm256_and_ps(arg12, arg14)
                                int32_t j_2 = _mm256_movemask_ps(arg11)
                                
                                if (j_2 != 0)
                                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                    zmm4 = arg15
                                    
                                    do
                                        arg15 = zmm0
                                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                        zmm0[0].o =
                                            __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                        zmm5[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm5[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        char temp0_363 = _mm256_movemask_ps(arg11)
                                        int128_t var_530
                                        int64_t rax_46
                                        
                                        if ((temp0_363 & 1) != 0)
                                            arg6[0].o = var_530
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *zmm0[0], 0)
                                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                            
                                            if ((temp0_363 & 2) != 0)
                                                rax_46 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_46, 1)
                                        else
                                            arg6[0].o = var_530
                                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                            
                                            if ((temp0_363 & 2) != 0)
                                                rax_46 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_46, 1)
                                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                        arg9[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_c60)
                                        
                                        if ((temp0_363 & 4) == 0)
                                            zmm5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                                            
                                            if ((temp0_363 & 8) != 0)
                                                goto label_1401f020d
                                            
                                            goto label_1401f0341
                                        
                                        zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm5[0], 2)
                                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                                        
                                        if ((temp0_363 & 8) != 0)
                                        label_1401f020d:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            int64_t rax_40 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *rax_40, 3)
                                            zmm0 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                            
                                            if ((temp0_363 & 0x10) == 0)
                                                goto label_1401f0350
                                            
                                            goto label_1401f0232
                                        
                                    label_1401f0341:
                                        zmm0 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                        
                                        if ((temp0_363 & 0x10) == 0)
                                        label_1401f0350:
                                            arg9[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                            
                                            if ((temp0_363 & 0x20) != 0)
                                                goto label_1401f0245
                                            
                                            goto label_1401f035e
                                        
                                    label_1401f0232:
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0], 4)
                                        arg9[0].o =
                                            __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                        
                                        if ((temp0_363 & 0x20) != 0)
                                        label_1401f0245:
                                            int64_t rax_42 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *rax_42, 5)
                                            
                                            if ((temp0_363 & 0x40) == 0)
                                                goto label_1401f0367
                                            
                                            goto label_1401f0259
                                        
                                    label_1401f035e:
                                        
                                        if ((temp0_363 & 0x40) != 0)
                                        label_1401f0259:
                                            zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *zmm5[0], 6)
                                            
                                            if (temp0_363 s< 0)
                                            label_1401f0271:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                                int64_t rax_44 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_44, 7)
                                        else
                                        label_1401f0367:
                                            
                                            if (temp0_363 s< 0)
                                                goto label_1401f0271
                                        
                                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(arg6[0].o, 
                                            data_142d8f750)
                                        var_530 = arg6[0].o
                                        zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                        zmm5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, var_b40[0].o)
                                        zmm0 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm5, zmm0[0].o, 1), arg14)
                                        arg7[0].o = zx.o(0)
                                        zmm5 = _mm256_and_ps(zmm0, arg12)
                                        
                                        if (_mm256_movemask_ps(zmm5) != j_2)
                                            arg7 = _mm256_xor_ps(zmm0, arg14)
                                        
                                        arg10 = _mm256_blendv_ps(arg10, zmm4, zmm0)
                                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                                        zmm4[0].o =
                                            __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0)
                                        zmm2[0].o ^= arg9[0].o
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_memdq(zmm4[0].o, var_c20_2[0].o)
                                        zmm4[0].o ^= arg9[0].o
                                        zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                        arg14 = _mm256_and_ps(zmm2, arg7)
                                        arg11 = _mm256_and_ps(arg14, arg12)
                                        j_2 = _mm256_movemask_ps(arg11)
                                        zmm4 = arg15
                                    while (j_2 != 0)
                            
                            zmm2 = var_cc0.32
                            zmm0 = _mm256_andnot_ps(zmm2, arg12)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                zmm2 = __vxorps_ymmqq_ymmqq_memqq(zmm2, var_aa0_1)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg10 = _mm256_blendv_ps(arg10, zmm0, zmm2)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg9[0].o, var_5e0_1)
                                zmm4[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg9[0].o, var_940[0].o)
                                arg7[0].o = zx.o(0)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                                arg6[0].o = zx.o(0)
                                arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zx.o(0))
                                zmm5 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                                arg14 = _mm256_and_ps(zmm5, zmm2)
                                zmm2 = _mm256_and_ps(arg14, arg12)
                                int32_t j_3 = _mm256_movemask_ps(zmm2)
                                
                                if (j_3 != 0)
                                    arg11 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                    
                                    do
                                        zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                        zmm0[0].o =
                                            __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                        zmm5[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm5[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        char temp0_538 = _mm256_movemask_ps(zmm2)
                                        
                                        if ((temp0_538 & 1) == 0)
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                            
                                            if ((temp0_538 & 2) != 0)
                                                goto label_1401f0afb
                                            
                                            goto label_1401f0a84
                                        
                                        int128_t var_ae0
                                        zmm2[0].o = var_ae0
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 0)
                                        var_ae0 = zmm2[0].o
                                        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0])
                                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                                        
                                        if ((temp0_538 & 2) != 0)
                                        label_1401f0afb:
                                            int64_t rax_92 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg7[0].o = var_ae0
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_92, 1)
                                            var_ae0 = arg7[0].o
                                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                                            
                                            if ((temp0_538 & 4) == 0)
                                                goto label_1401f0a9b
                                            
                                            goto label_1401f0b2f
                                        
                                    label_1401f0a84:
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                                        
                                        if ((temp0_538 & 4) == 0)
                                        label_1401f0a9b:
                                            zmm5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                                            
                                            if ((temp0_538 & 8) != 0)
                                                goto label_1401f0b5e
                                            
                                            goto label_1401f0aa8
                                        
                                    label_1401f0b2f:
                                        arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg7[0].o = var_ae0
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg7[0], 2)
                                        var_ae0 = arg7[0].o
                                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                                        
                                        if ((temp0_538 & 8) != 0)
                                        label_1401f0b5e:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            int64_t rax_94 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm0[0].o = var_ae0
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *rax_94, 3)
                                            var_ae0 = zmm0[0].o
                                            zmm0 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                                            
                                            if ((temp0_538 & 0x10) == 0)
                                                goto label_1401f0ab7
                                            
                                            goto label_1401f0b95
                                        
                                    label_1401f0aa8:
                                        zmm0 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                                        int64_t rax_96
                                        
                                        if ((temp0_538 & 0x10) != 0)
                                        label_1401f0b95:
                                            zmm5[0].o = var_ae0
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *zmm0[0], 4)
                                            
                                            if ((temp0_538 & 0x20) != 0)
                                                rax_96 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm5[0].o, *rax_96, 5)
                                        else
                                        label_1401f0ab7:
                                            zmm5[0].o = var_ae0
                                            
                                            if ((temp0_538 & 0x20) != 0)
                                                rax_96 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm5[0].o, *rax_96, 5)
                                        
                                        if ((temp0_538 & 0x40) != 0)
                                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *zmm2[0].q, 6)
                                            
                                            if (temp0_538 s< 0)
                                            label_1401f0a28:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                                int64_t rax_90 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm5[0].o, *rax_90, 7)
                                        else if (temp0_538 s< 0)
                                            goto label_1401f0a28
                                        
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                                        var_ae0 = zmm5[0].o
                                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                        zmm0[0].o ^= arg9[0].o
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_memdq(zmm2[0].o, var_b40[0].o)
                                        zmm2[0].o ^= arg9[0].o
                                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                        zmm2 = _mm256_and_ps(zmm0, arg14)
                                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm5 = _mm256_and_ps(zmm2, arg12)
                                        
                                        if (_mm256_movemask_ps(zmm5) != j_3)
                                            zmm0 = _mm256_xor_ps(zmm2, arg14)
                                        
                                        arg10 = _mm256_blendv_ps(arg10, arg11, zmm2)
                                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                                        zmm4[0].o =
                                            __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg9[0].o)
                                        arg11 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                                        arg6[0].o = zx.o(0)
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                        arg14 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm4, zmm2[0].o, 1), zmm0)
                                        zmm2 = _mm256_and_ps(arg14, arg12)
                                        j_3 = _mm256_movemask_ps(zmm2)
                                    while (j_3 != 0)
                            
                            arg7 = _mm256_blendv_ps(var_b20, arg10, arg12)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            var_b20[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(var_b20[0])
                            var_b20[0].o = __vpshufd_xmmdq_xmmdq_immb(var_b20[0].o, 0x4e)
                            var_b20[0].o = __vpmovsxdq_xmmdq_xmmq(var_b20[0])
                            var_b20[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_b20[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm4, var_b20[0].o, 1)
                            int128_t var_b90
                            
                            if ((rbx_6 & 1) != 0)
                                zmm4[0].o = var_b90
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 0)
                                var_b90 = zmm4[0].o
                            
                            arg14[0].o = data_142d3f5b0
                            arg11[0].o = arg14[0].o
                            arg10 = var_a80_1
                            arg6[0].o = var_c00_1
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                            
                            if ((rbx_6 & 2) == 0)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_c60)
                                
                                if ((rbx_6 & 4) != 0)
                                    goto label_1401f0e27
                                
                                goto label_1401f0cf3
                            
                            int64_t rax_100 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm5[0].o = var_b90
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_100, 1)
                            var_b90 = zmm5[0].o
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_c60)
                            
                            if ((rbx_6 & 4) != 0)
                            label_1401f0e27:
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm4[0].o = var_b90
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm4[0].q, 2)
                                var_b90 = zmm4[0].o
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                                
                                if ((rbx_6 & 8) == 0)
                                    goto label_1401f0d00
                                
                                goto label_1401f0e56
                            
                        label_1401f0cf3:
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                            
                            if ((rbx_6 & 8) == 0)
                            label_1401f0d00:
                                zmm5 = var_b00_1
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                                
                                if ((rbx_6 & 0x10) != 0)
                                    goto label_1401f0e96
                                
                                goto label_1401f0d18
                            
                        label_1401f0e56:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rax_102 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = var_b90
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_102, 3)
                            var_b90 = zmm0[0].o
                            zmm5 = var_b00_1
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                            
                            if ((rbx_6 & 0x10) != 0)
                            label_1401f0e96:
                                zmm2[0].o = var_b90
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 4)
                                var_b90 = zmm2[0].o
                                
                                if ((rbx_6 & 0x20) == 0)
                                    goto label_1401f0d21
                                
                                goto label_1401f0eb6
                            
                        label_1401f0d18:
                            
                            if ((rbx_6 & 0x20) == 0)
                            label_1401f0d21:
                                
                                if ((rbx_6 & 0x40) != 0)
                                    goto label_1401f0edc
                                
                                goto label_1401f0d2a
                            
                        label_1401f0eb6:
                            int64_t rax_104 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = var_b90
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_104, 5)
                            var_b90 = zmm2[0].o
                            
                            if ((rbx_6 & 0x40) == 0)
                            label_1401f0d2a:
                                
                                if (temp0_248.b s< 0)
                                label_1401f0f07:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rax_106 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = var_b90
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_106, 7)
                                    var_b90 = zmm0[0].o
                            else
                            label_1401f0edc:
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = var_b90
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm2[0].q, 6)
                                var_b90 = zmm2[0].o
                                
                                if (temp0_248.b s< 0)
                                    goto label_1401f0f07
                            
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1 = var_c40.32
                            zmm2 = _mm256_blendv_ps(zmm1, zmm0, arg12)
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_ca0)
                            zmm4 = var_c20_2
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg12)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                zmm2 = _mm256_blendv_ps(zmm2, zmm4, zmm0)
                            
                            arg12 = var_d00
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            var_c20_1 = zmm2
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            int128_t var_5b0
                            uint16_t* rax_108
                            
                            if ((rbx_6 & 1) != 0)
                                zmm4[0].o = var_5b0
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 0)
                                arg13[0].o = data_1434426c0
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                
                                if ((rbx_6 & 2) != 0)
                                    rax_108 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_108, 1)
                            else
                                arg13[0].o = data_1434426c0
                                zmm4[0].o = var_5b0
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                
                                if ((rbx_6 & 2) != 0)
                                    rax_108 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_108, 1)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                            
                            if ((rbx_6 & 4) == 0)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                                
                                if ((rbx_6 & 8) != 0)
                                    goto label_1401f1011
                                
                                goto label_1401f0f84
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0].q, 2)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                            
                            if ((rbx_6 & 8) != 0)
                            label_1401f1011:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint16_t* rax_110 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_110, 3)
                                arg5[0].o = var_b90
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                
                                if ((rbx_6 & 0x10) == 0)
                                    goto label_1401f0f9c
                                
                                goto label_1401f103f
                            
                        label_1401f0f84:
                            arg5[0].o = var_b90
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            
                            if ((rbx_6 & 0x10) == 0)
                            label_1401f0f9c:
                                
                                if ((rbx_6 & 0x20) != 0)
                                    goto label_1401f104d
                                
                                goto label_1401f0fa5
                            
                        label_1401f103f:
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 4)
                            
                            if ((rbx_6 & 0x20) != 0)
                            label_1401f104d:
                                uint16_t* rax_112 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_112, 5)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                                
                                if ((rbx_6 & 0x40) == 0)
                                    goto label_1401f0fb3
                                
                                goto label_1401f1066
                            
                        label_1401f0fa5:
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            
                            if ((rbx_6 & 0x40) != 0)
                            label_1401f1066:
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0].q, 6)
                                zmm2[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_memdq(arg5[0].o, data_142d8f750)
                                
                                if (temp0_248.b s< 0)
                                label_1401f1087:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    uint16_t* rax_114 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_114, 7)
                            else
                            label_1401f0fb3:
                                zmm2[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_memdq(arg5[0].o, data_142d8f750)
                                
                                if (temp0_248.b s< 0)
                                    goto label_1401f1087
                            
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm4[0].o, data_142d8f750)
                            var_5b0 = zmm4[0].o
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            zmm4[0].o = var_a20
                        
                        zmm2 = __vxorps_ymmqq_ymmqq_memqq(var_aa0_1, var_9e0.32)
                        arg5[0].o = zx.o(0)
                        
                        if (arg19 != 1)
                            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                            zmm4[0].o = var_a20
                            arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                            zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            zmm0 = _mm256_sub_ps(var_1c0_1, _mm256_cvtepi32_ps(zmm0))
                            arg5 = _mm256_div_ps(zmm0, _mm256_cvtepi32_ps(zmm1))
                        
                        arg8[0].o = arg11[0].o
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm2 = _mm256_blendv_ps(zmm0, arg5, zmm2)
                        zmm1 = var_c80_1
                    
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    var_b00 =
                        _mm256_blendv_ps(zmm5, zmm2, _mm256_insertf128_ps(arg12, zmm0[0].o, 1))
                
                arg11 = var_ac0_1
            
            double var_c80_2[0x4] = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
            zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm1, var_880[0].o, 1)
            var_c00_1.32 = zmm0
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, var_d40_1[0].o)
            zmm4 = var_960.32
            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            var_c60.32 = zmm1
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
            zmm5 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
            double var_a80_2[0x4] = zmm5
            arg6 = var_a60
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            var_a20.32 = arg7
            arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            var_5e0 = arg6[0].o
            var_9e0 = arg7[0].o
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
            arg10 = var_8c0.32
            arg14[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
            arg12 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            var_c40.32 = zmm2
            arg5 = var_ce0.32
            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            var_b20[0].o = zmm2[0].o
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            zmm4 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
            float var_aa0_2[0x8] = zmm4
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            var_cc0.32 = zmm1
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg8[0].o)
            arg11[0].o = arg8[0].o
            zmm0[0].o &= not.o(zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_b60)
            var_880[0].o = zmm1[0].o
            arg7[0].o = var_b80[0].o
            zmm1[0].o = arg7[0].o & not.o(zmm1[0].o)
            arg10[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
            bool cond:9_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            var_ca0 = arg14[0].o
            
            if (cond:9_1)
                arg10 = var_ac0_1
                arg5[0].o = var_d20
                arg6[0].o = var_980[0].o
                zmm5 = var_d40_1
            else
                arg14[0].o = arg11[0].o
                zmm1 = var_9c0_1
                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm2[0].o = zx.o(0)
                arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                zmm0[0].o &= arg10[0].o
                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm4 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    arg5 = var_c60.32
                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1 = var_c80_2
                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    arg5 = var_a80_2
                    zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1 = var_c00_1.32
                    arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    arg7[0].o = _mm256_extractf128_ps(var_aa0_2[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_aa0_2[0].o, arg5[0].o)
                    zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    arg5[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    arg6 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    var_aa0_2[0].o = zx.o(0)
                    arg9 = _mm256_blendv_ps(var_aa0_2, zmm0, arg6)
                    zmm0[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    zmm2 = _mm256_blendv_ps(var_aa0_2, zmm2, zmm0)
                    double r9_5 = arg9[0]
                    int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t r8_3 = zmm2[0].q
                    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t r11_4 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    void* rcx_17 = r14 + r8_3
                    zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg7 = _mm256_blendv_ps(var_aa0_2, zmm2, zmm0)
                    int64_t rsi_6 = arg5[0].q
                    int32_t* rdx_13 = arg7[0]
                    int64_t rax_168 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg5[0].o = *(rdx_13 + rcx_17)
                    arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    int64_t rbx_7 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    double rdx_14 = arg7[0]
                    arg7 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm0 = _mm256_blendv_ps(var_aa0_2, arg7, zmm0)
                    zmm5[0].o = *(zmm0[0] + rcx_17)
                    int64_t rcx_18 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    void* rdi_10 = r14 + r10_3
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_168 + rdi_10), 0x10)
                    void* rax_169 = r14 + rsi_6
                    zmm2 = _mm256_blendv_ps(var_aa0_2, zmm2, arg6)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_14 i+ rax_169), 0x20)
                    float* rdx_15 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_15 + rdi_10), 0x10)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm0[0] + rax_169), 0x20)
                    void* rax_170 = r14 i+ r9_5
                    int32_t* rdx_17 = zmm2[0].q
                    arg6 = _mm256_blendv_ps(var_aa0_2, arg7, arg6)
                    arg7[0].o = *(rdx_17 + rax_170)
                    int32_t* rdx_18 = arg6[0].q
                    int64_t rdi_11 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = *(rdx_18 + rax_170)
                    void* rax_171 = r14 + rcx_18
                    var_aa0_2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    void* rdx_19 = r14 + r11_4
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_7 + rdx_19), 0x30)
                    int64_t rbx_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_8 + rax_171), 0x10)
                    int64_t rbx_9 = __vpextrq_gpr64q_xmmdq_immb(var_aa0_2[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_11 + rdx_19), 0x30)
                    float* rdx_20 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    int64_t rdi_12 = var_aa0_2[0].q
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_20 + rax_171), 0x10)
                    void* rax_172 = r14 + rdi_12
                    var_aa0_2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                        *(var_aa0_2[0].q + rax_172), 0x20)
                    arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg6[0].q + rax_172), 0x20)
                    void* rax_173 = r14 + rbx_9
                    int64_t rdx_23 = __vpextrq_gpr64q_xmmdq_immb(var_aa0_2[0].o, 1)
                    var_aa0_2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_23 + rax_173), 0x30)
                    float* rdx_24 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_24 + rax_173), 0x30)
                    zmm2[0].o = *(r14 i+ r9_5)
                    arg6[0].o = *(r14 + r8_3)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + r10_3), 0x10)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + rsi_6), 0x20)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + r11_4), 0x30)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rcx_18), 0x10)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rdi_12), 0x20)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rbx_9), 0x30)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                    var_660.32 = _mm256_maskstore_ps(zmm4, zmm2)
                    zmm1 = _mm256_insertf128_ps(var_aa0_2, arg5[0].o, 1)
                    var_640.32 = _mm256_maskstore_ps(zmm4, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                    var_620.32 = _mm256_maskstore_ps(zmm4, zmm0)
                
                zmm0[0].o = arg8[0].o ^ arg9[0].o
                zmm1[0].o = zx.o(0)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_9c0_1[0].o)
                zmm2[0].o ^= arg9[0].o
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                zmm5[0].o = arg10[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg13[0].o = data_1434426c0
                    arg10 = var_ac0_1
                    arg5[0].o = var_d20
                    arg6[0].o = var_980[0].o
                    zmm5 = var_d40_1
                    arg7[0].o = var_b80[0].o
                    arg11[0].o = arg14[0].o
                    arg14[0].o = var_ca0
                else
                    var_940 = arg12
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    arg15 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                    zmm1 = var_be0
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm4 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0 = _mm256_and_ps(zmm4, arg15)
                    arg10 = var_cc0.32
                    arg12 = arg10
                    arg13 = var_c40.32
                    arg8 = arg13
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                        var_d00 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        var_600 = zmm0
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1 = _mm256_and_ps(_mm256_insertf128_ps(arg6, zmm1[0].o, 1), zmm4)
                        arg8[0].o = zmm5[0].o
                        zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                        arg14 = var_c60.32
                        arg6[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        arg12 = var_c80_2
                        arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        zmm2 = arg15
                        arg15 = var_a80_2
                        arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg9 = var_c00_1.32
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        arg7[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg14[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_940[0].o, arg7[0].o)
                        arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        arg11 = var_aa0_2
                        arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg15[0].o)
                        arg15 = zmm2
                        arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        arg14[0].o = zx.o(0)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
                        zmm0 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        arg12 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg10, var_600, zmm5)
                        zmm0 = _mm256_blendv_ps(arg14, zmm0, zmm5)
                        zmm5[0].o = arg8[0].o
                        arg8 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg13, var_d00, zmm1)
                        zmm1 = _mm256_blendv_ps(arg14, arg6, zmm1)
                        int64_t r8_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rcx_19 = zmm0[0]
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rdx_25 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rbx_10 = zmm0[0]
                        zmm0[0].o = *(r14 i+ rcx_19)
                        int64_t rcx_20 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rdi_13 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rsi_7 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rax_176 = zmm1[0].q
                        zmm1[0].o = *(r14 + rdi_13)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14 + rcx_20), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14 + rax_176), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14 + rsi_7), 0x30)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14 + r8_4), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14 i+ rbx_10), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14 + rdx_25), 0x30)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    
                    zmm1[0].o = zx.o(0)
                    var_660.32 = _mm256_maskstore_ps(arg15, _mm256_blendv_ps(zmm1, zmm0, zmm4))
                    zmm0 = var_be0
                    arg14 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                    zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg5[0].o = zmm0[0].o ^ arg9[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                    zmm0[0].o ^= arg9[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                    zmm0[0].o &= zmm5[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    char temp0_1029 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                    double var_8e0[0x4]
                    uint32_t var_420[0x8]
                    
                    if (temp0_1029 == 0)
                        zmm2 = var_420
                        arg7[0].o = var_b80[0].o
                        arg13 = arg8
                    else
                        int128_t var_550_1 = zmm5[0].o
                        
                        if ((temp0_1029 & 1) != 0)
                            zmm1[0].o = *arg12[0].q
                            zmm5 = _mm256_blend_ps(var_8e0, zmm1, 1)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            
                            if ((temp0_1029 & 2) != 0)
                            label_1401f20a5:
                                int64_t rax_178 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_178, 0x10)
                                zmm5 = _mm256_blend_ps(zmm5, zmm0, 0xf)
                        else
                            zmm5 = var_8e0
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            
                            if ((temp0_1029 & 2) != 0)
                                goto label_1401f20a5
                        
                        arg13 = arg8
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        
                        if ((temp0_1029 & 4) != 0)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *zmm2[0].q, 0x20)
                            zmm5 = _mm256_blend_ps(zmm5, zmm1, 0xf)
                        
                        zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg9[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                        arg11 = arg15
                        
                        if ((temp0_1029 & 8) != 0)
                            int64_t rax_180 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_180, 0x30)
                            zmm5 = _mm256_blend_ps(zmm5, zmm0, 0xf)
                        
                        var_8e0 = zmm5
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm1[0].o = data_1434426c0
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                        arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x50)
                        arg15[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x50)
                        
                        if ((temp0_1029 & 0x10) != 0)
                            zmm1[0].o = zx.o(*arg13[0].q)
                            arg8 = var_8e0
                            zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm1[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm1[0].o, 3)
                            arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            var_8e0 = arg8
                        
                        zmm1[0].o = data_1434426c0
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0xfa)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0xfa)
                        
                        if ((temp0_1029 & 0x20) != 0)
                            int64_t rax_182 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(var_8e0[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_182, 0x10)
                            arg9 = _mm256_insertf128_ps(var_8e0, zmm4[0].o, 1)
                            var_8e0 = arg9
                        
                        arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        zmm4 = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(arg15, zmm5[0].o, 1)
                        
                        if ((temp0_1029 & 0x40) != 0)
                            double rax_183 = zmm0[0]
                            arg6[0].o = _mm256_extractf128_ps(var_8e0[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_183, 0x20)
                            arg7 = _mm256_insertf128_ps(var_8e0, arg6[0].o, 1)
                            var_8e0 = arg7
                        
                        arg7[0].o = var_b80[0].o
                        arg15 = arg11
                        arg12 = _mm256_blendv_ps(arg12, zmm2, zmm1)
                        arg13 = _mm256_blendv_ps(arg13, zmm4, zmm5)
                        
                        if (temp0_1029 s< 0)
                            int64_t rax_184 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1 = var_8e0
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_184, 0x30)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            var_8e0 = zmm1
                        
                        zmm2 = var_420
                        zmm5[0].o = var_550_1
                    
                    zmm1[0].o = zx.o(0)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                    zmm0[0].o ^= arg9[0].o
                    var_640.32 = _mm256_maskstore_ps(arg15, 
                        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, arg5[0].o, 1), 
                            var_8e0))
                    zmm0 = var_be0
                    zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg6[0].o = zmm0[0].o ^ arg9[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm0[0].o ^= arg9[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    zmm0[0].o &= zmm5[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_1086 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_1086 == 0)
                        arg14[0].o = data_142d3f5b0
                        arg11[0].o = arg14[0].o
                        arg13[0].o = data_1434426c0
                        arg10 = var_ac0_1
                        arg5[0].o = var_d20
                        zmm5 = var_d40_1
                        arg14[0].o = var_ca0
                        arg12 = var_940
                    else
                        if ((temp0_1086 & 1) != 0)
                            zmm0[0].o = *arg12[0].q
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 1)
                        
                        if ((temp0_1086 & 2) != 0)
                            int64_t rax_186 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_186, 0x10)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                        
                        arg14[0].o = data_142d3f5b0
                        arg11[0].o = arg14[0].o
                        arg5[0].o = var_d20
                        arg14[0].o = var_ca0
                        
                        if ((temp0_1086 & 4) != 0)
                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *zmm0[0], 0x20)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                        
                        if ((temp0_1086 & 8) != 0)
                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            int64_t rax_188 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_188, 0x30)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                        
                        arg10 = var_ac0_1
                        arg8 = var_d40_1
                        arg12 = var_940
                        
                        if ((temp0_1086 & 0x10) != 0)
                            zmm0[0].o = *arg13[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            
                            if ((temp0_1086 & 0x20) != 0)
                            label_1401f2559:
                                int64_t rax_192 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_192, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((temp0_1086 & 0x40) == 0)
                                    goto label_1401f2375
                                
                                goto label_1401f257a
                        else if ((temp0_1086 & 0x20) != 0)
                            goto label_1401f2559
                        
                        if ((temp0_1086 & 0x40) != 0)
                        label_1401f257a:
                            zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            double rax_193 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_193, 0x20)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm5 = arg8
                            
                            if (temp0_1086 s< 0)
                            label_1401f25a3:
                                zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                int64_t rax_194 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_194, 0x30)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        else
                        label_1401f2375:
                            zmm5 = arg8
                            
                            if (temp0_1086 s< 0)
                                goto label_1401f25a3
                        
                        arg13[0].o = data_1434426c0
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm4[0].o, data_142d8f750)
                    zmm0[0].o ^= arg9[0].o
                    var_420 = zmm2
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, arg6[0].o, 1), zmm2)
                    var_620.32 = _mm256_maskstore_ps(arg15, zmm0)
                    arg6[0].o = var_980[0].o
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
            zmm1[0].o = arg9[0].o ^ var_880[0].o
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
            zmm2[0].o ^= arg9[0].o
            arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm1[0].o = arg7[0].o & not.o(zmm1[0].o)
            zmm0[0].o &= not.o(zmm2[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:15_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            var_d00[0].o = arg15[0].o
            
            if (cond:15_1)
                arg8 = var_c20_1
            else
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                zmm4[0].o = data_142fc95c0
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                zmm2[0].o = zmm0[0].o & not.o(zmm1[0].o)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_6e0_1)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    zmm2 = arg10
                    arg10[0].o = zmm0[0].o ^ arg9[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                    zmm2[0].o = zx.o(0)
                    uint32_t var_7c0_1[0x8] = zmm2
                    uint32_t var_7e0_1[0x8] = zmm2
                    uint32_t var_800_1[0x8] = zmm2
                    uint32_t var_820_1[0x8] = zmm2
                    uint32_t var_840_1[0x8] = zmm2
                    uint32_t var_860_1[0x8] = zmm2
                    arg5 = var_be0
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    arg8 = _mm256_and_ps(zmm0, zmm2)
                    zmm4 = __vandps_ymmqq_ymmqq_memqq(arg8, var_460_1)
                    int32_t temp0_1121 = _mm256_movemask_ps(zmm4)
                    var_940 = arg12
                    
                    if (temp0_1121 == 0)
                        arg14 = var_ce0.32
                        arg15 = var_8c0.32
                    else
                        char rbx_13 = temp0_1121.b
                        double var_2e0[0x4]
                        
                        if ((rbx_13 & 1) != 0)
                            zmm0 = var_ce0.32
                            zmm0[0].o = *zmm0[0]
                            arg9 = _mm256_blend_ps(var_2e0, zmm0, 1)
                            arg7 = var_8c0.32
                            
                            if ((rbx_13 & 2) != 0)
                            label_1401f25f2:
                                zmm0 = var_ce0.32
                                float* rax_196 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_196, 0x10)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                        else
                            arg9 = var_2e0
                            arg7 = var_8c0.32
                            
                            if ((rbx_13 & 2) != 0)
                                goto label_1401f25f2
                        
                        if ((rbx_13 & 4) != 0)
                            zmm0[0].o = var_b20[0].o
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm0[0], 0x20)
                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            
                            if ((rbx_13 & 8) != 0)
                            label_1401f28a1:
                                zmm0[0].o = var_b20[0].o
                                float* rax_204 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_204, 0x30)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                
                                if ((rbx_13 & 0x10) == 0)
                                    goto label_1401f2625
                                
                                goto label_1401f28ca
                        else if ((rbx_13 & 8) != 0)
                            goto label_1401f28a1
                        
                        if ((rbx_13 & 0x10) != 0)
                        label_1401f28ca:
                            zmm0[0].o = *arg7[0]
                            zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 1)
                            arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, var_ce0)
                            arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                            
                            if ((rbx_13 & 0x20) != 0)
                            label_1401f2636:
                                int64_t rax_197 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_197, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                        else
                        label_1401f2625:
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, var_ce0)
                            arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                            
                            if ((rbx_13 & 0x20) != 0)
                                goto label_1401f2636
                        
                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, var_b20[0].o)
                        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        
                        if ((rbx_13 & 0x40) != 0)
                            float* rax_198 = arg14[0].q
                            zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_198, 0x20)
                            arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                        
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg13[0].o)
                        arg7[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                        arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        arg12 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                        
                        if (temp0_1121.b s< 0)
                            int64_t rax_199 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_199, 0x30)
                            arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                        
                        float var_300[0x8]
                        zmm4 = var_300
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        zmm5 = _mm256_blendv_ps(var_ce0.32, arg5, arg12)
                        var_800_1 = _mm256_maskstore_ps(arg8, arg9)
                        
                        if ((rbx_13 & 1) != 0)
                            arg5[0].o = *zmm5[0]
                            zmm4 = _mm256_blend_ps(zmm4, arg5, 1)
                        
                        zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        
                        if ((rbx_13 & 2) != 0)
                            int64_t rax_201 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_201, 0x10)
                            zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                        
                        zmm0 = var_8c0.32
                        arg11 = _mm256_blendv_ps(zmm0, zmm2, arg6)
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((rbx_13 & 4) == 0)
                            if ((rbx_13 & 8) != 0)
                                goto label_1401f2914
                            
                            goto label_1401f273d
                        
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *zmm0[0], 0x20)
                        zmm4 = _mm256_blend_ps(zmm4, zmm2, 0xf)
                        
                        if ((rbx_13 & 8) == 0)
                        label_1401f273d:
                            var_2e0 = arg9
                            
                            if ((rbx_13 & 0x10) != 0)
                            label_1401f274d:
                                zmm2[0].o = *arg11[0].q
                                arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm2[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        else
                        label_1401f2914:
                            float* rax_207 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_207, 0x30)
                            zmm4 = _mm256_blend_ps(zmm4, zmm2, 0xf)
                            var_2e0 = arg9
                            
                            if ((rbx_13 & 0x10) != 0)
                                goto label_1401f274d
                        
                        zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg13[0].o)
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                        
                        if ((rbx_13 & 0x20) == 0)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                            
                            if ((rbx_13 & 0x40) != 0)
                                goto label_1401f2968
                            
                            goto label_1401f278f
                        
                        int64_t rax_208 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_208, 0x10)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                        
                        if ((rbx_13 & 0x40) == 0)
                        label_1401f278f:
                            arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            
                            if (temp0_1121.b s< 0)
                            label_1401f299b:
                                int64_t rax_210 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_210, 0x30)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        else
                        label_1401f2968:
                            float* rax_209 = zmm2[0].q
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_209, 0x20)
                            zmm4 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            
                            if (temp0_1121.b s< 0)
                                goto label_1401f299b
                        
                        arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        arg14 = _mm256_blendv_ps(zmm5, zmm0, arg12)
                        arg15 = _mm256_blendv_ps(arg11, arg5, arg6)
                        var_300 = zmm4
                        var_860_1 = _mm256_maskstore_ps(arg8, zmm4)
                    
                    int32_t var_480[0x8]
                    arg8 = var_480
                    zmm0[0].o = data_142fc95c0
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_ac0_1[0].o)
                    arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, var_d40_1[0].o)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(var_be0, data_143442a60)
                    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o = zx.o(0)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    arg5[0].o = zmm2[0].o & not.o(zmm4[0].o)
                    zmm0[0].o &= not.o(arg5[0].o)
                    zmm5[0].o = var_d20
                    arg5[0].o = arg6[0].o & not.o(zmm5[0].o)
                    arg7[0].o = var_b80[0].o
                    arg5[0].o = arg7[0].o & not.o(arg5[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_1191 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                    arg5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg10, var_980[0].o, 1)
                    arg12 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                    
                    if (temp0_1191 != 0)
                        int32_t var_320[0x8]
                        
                        if ((temp0_1191 & 1) != 0)
                            zmm1[0].o = *arg14[0].q
                            arg8 = _mm256_blend_ps(var_320, zmm1, 1)
                            var_6e0_1.32 = arg5
                            
                            if ((temp0_1191 & 2) != 0)
                            label_1401f29de:
                                float* rax_212 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_212, 0x10)
                                arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                        else
                            arg8 = var_320
                            var_6e0_1.32 = arg5
                            
                            if ((temp0_1191 & 2) != 0)
                                goto label_1401f29de
                        
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        
                        if ((temp0_1191 & 4) != 0)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *arg5[0].q, 0x20)
                            arg8 = _mm256_blend_ps(arg8, zmm5, 0xf)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            
                            if ((temp0_1191 & 8) != 0)
                            label_1401f2a0e:
                                int64_t rax_213 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_213, 0x30)
                                arg8 = _mm256_blend_ps(arg8, zmm5, 0xf)
                        else
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            
                            if ((temp0_1191 & 8) != 0)
                                goto label_1401f2a0e
                        
                        zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = zmm2[0].o ^ arg11[0].o
                        
                        if ((temp0_1191 & 0x10) != 0)
                            zmm2[0].o = zx.o(*arg15[0].q)
                            arg7[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm2[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm2[0].o, 3)
                            arg8 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                        
                        arg7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
                        arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                        zmm5[0].o = arg6[0].o ^ arg11[0].o
                        
                        if ((temp0_1191 & 0x20) != 0)
                            int64_t rax_215 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_215, 0x10)
                            arg8 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                        
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                        arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                        zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, var_d20, 1)
                        zmm5 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                        
                        if ((temp0_1191 & 0x40) != 0)
                            double rax_216 = arg7[0]
                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_216, 0x20)
                            arg8 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg13[0].o)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                        arg5 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                        arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                        arg9 = _mm256_and_ps(zmm5, zmm4)
                        
                        if (temp0_1191 s< 0)
                            int64_t rax_217 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_217, 0x30)
                            arg8 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                        
                        float var_340[0x8]
                        zmm4 = var_340
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg13[0].o)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                        arg6 = _mm256_blendv_ps(arg14, arg5, arg10)
                        var_320 = arg8
                        var_7e0_1 = _mm256_maskstore_ps(arg9, arg8)
                        
                        if ((temp0_1191 & 1) == 0)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            arg11 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                            
                            if ((temp0_1191 & 2) != 0)
                                goto label_1401f2e5f
                            
                            goto label_1401f2b41
                        
                        arg5[0].o = *arg6[0].q
                        zmm4 = _mm256_blend_ps(zmm4, arg5, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        arg11 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                        
                        if ((temp0_1191 & 2) != 0)
                        label_1401f2e5f:
                            float* rax_228 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_228, 0x10)
                            zmm4 = _mm256_blend_ps(zmm4, zmm1, 0xf)
                            zmm5 = _mm256_blendv_ps(arg15, zmm0, arg11)
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            
                            if ((temp0_1191 & 4) == 0)
                                goto label_1401f2b56
                            
                            goto label_1401f2e8b
                        
                    label_1401f2b41:
                        zmm5 = _mm256_blendv_ps(arg15, zmm0, arg11)
                        zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        
                        if ((temp0_1191 & 4) == 0)
                        label_1401f2b56:
                            
                            if ((temp0_1191 & 8) != 0)
                                goto label_1401f2ea0
                            
                            goto label_1401f2b5f
                        
                    label_1401f2e8b:
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *zmm0[0], 0x20)
                        zmm4 = _mm256_blend_ps(zmm4, zmm1, 0xf)
                        
                        if ((temp0_1191 & 8) == 0)
                        label_1401f2b5f:
                            
                            if ((temp0_1191 & 0x10) != 0)
                            label_1401f2b69:
                                zmm1[0].o = zx.o(*zmm5[0])
                                zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm1[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 3)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                        else
                        label_1401f2ea0:
                            float* rax_230 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_230, 0x30)
                            zmm4 = _mm256_blend_ps(zmm4, zmm1, 0xf)
                            
                            if ((temp0_1191 & 0x10) != 0)
                                goto label_1401f2b69
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
                        
                        if ((temp0_1191 & 0x20) != 0)
                            int64_t rax_219 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            arg7[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_219, 0x10)
                            zmm4 = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
                        
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                        
                        if ((temp0_1191 & 0x40) != 0)
                            float* rax_220 = zmm1[0].q
                            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_220, 0x20)
                            zmm4 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
                        
                        arg8 = var_480
                        zmm2 = _mm256_insertf128_ps(zmm2, arg7[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        
                        if (temp0_1191 s< 0)
                            int64_t rax_221 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_221, 0x30)
                            zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                        
                        arg5 = var_6e0_1.32
                        arg14 = _mm256_blendv_ps(arg6, zmm0, arg10)
                        arg15 = _mm256_blendv_ps(zmm5, zmm2, arg11)
                        var_340 = zmm4
                        var_840_1 = _mm256_maskstore_ps(arg9, zmm4)
                    
                    arg7 = var_ac0_1
                    arg10 = var_d40_1
                    zmm1 = _mm256_and_ps(arg12, arg5)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg7[0].o, data_142fc95c0)
                    arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg9[0].o)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(var_be0, data_142fc9520)
                    zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o = zx.o(0)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    zmm4[0].o = arg6[0].o & not.o(var_d20)
                    zmm5[0].o = var_b80[0].o
                    zmm4[0].o = zmm5[0].o & not.o(zmm4[0].o)
                    zmm5[0].o = zmm2[0].o & not.o(arg5[0].o)
                    zmm0[0].o &= not.o(zmm5[0].o)
                    zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    char temp0_1296 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_1296 == 0)
                        arg14[0].o = data_142d3f5b0
                        arg11[0].o = arg14[0].o
                        arg15[0].o = var_d00[0].o
                        arg14[0].o = var_ca0
                        arg12 = var_940
                    else
                        if ((temp0_1296 & 1) == 0)
                            if ((temp0_1296 & 2) != 0)
                                goto label_1401f2ed8
                            
                            goto label_1401f2cc1
                        
                        zmm0[0].o = *arg14[0].q
                        arg8 = _mm256_blend_ps(arg8, zmm0, 1)
                        
                        if ((temp0_1296 & 2) != 0)
                        label_1401f2ed8:
                            float* rax_232 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_232, 0x10)
                            arg8 = _mm256_blend_ps(arg8, zmm0, 0xf)
                            zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            
                            if ((temp0_1296 & 4) == 0)
                                goto label_1401f2cd5
                            
                            goto label_1401f2f03
                        
                    label_1401f2cc1:
                        zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        
                        if ((temp0_1296 & 4) == 0)
                        label_1401f2cd5:
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            
                            if ((temp0_1296 & 8) != 0)
                                goto label_1401f2f1d
                            
                            goto label_1401f2ce3
                        
                    label_1401f2f03:
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *zmm0[0], 0x20)
                        arg8 = _mm256_blend_ps(arg8, arg7, 0xf)
                        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        
                        if ((temp0_1296 & 8) == 0)
                        label_1401f2ce3:
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            arg10[0].o = zmm2[0].o ^ arg9[0].o
                            
                            if ((temp0_1296 & 0x10) != 0)
                            label_1401f2cf7:
                                zmm2[0].o = zx.o(*arg15[0].q)
                                zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm2[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 3)
                                arg8 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                        else
                        label_1401f2f1d:
                            float* rax_234 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_234, 0x30)
                            arg8 = _mm256_blend_ps(arg8, arg7, 0xf)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            arg10[0].o = zmm2[0].o ^ arg9[0].o
                            
                            if ((temp0_1296 & 0x10) != 0)
                                goto label_1401f2cf7
                        
                        arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
                        arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                        zmm5[0].o = arg6[0].o ^ arg9[0].o
                        
                        if ((temp0_1296 & 0x20) != 0)
                            int64_t rax_223 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_223, 0x10)
                            arg8 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                        
                        zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                        arg5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_d20, 1)
                        zmm5 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                        
                        if ((temp0_1296 & 0x40) != 0)
                            float* rax_224 = zmm2[0].q
                            arg7[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_224, 0x20)
                            arg8 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        
                        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm0 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg12, arg6[0].o, 1)
                        arg10 = _mm256_and_ps(zmm5, arg5)
                        
                        if (temp0_1296 s< 0)
                            int64_t rax_225 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_225, 0x30)
                            arg8 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                        
                        arg12 = var_940
                        zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm0 = _mm256_blendv_ps(arg14, zmm0, arg6)
                        var_7c0_1 = _mm256_maskstore_ps(arg10, arg8)
                        double var_360[0x4]
                        
                        if ((temp0_1296 & 1) != 0)
                            zmm5[0].o = *zmm0[0]
                            arg6 = _mm256_blend_ps(var_360, zmm5, 1)
                            zmm5 = arg6
                            arg14[0].o = data_142d3f5b0
                            arg5[0].o = arg14[0].o
                        else
                            arg14[0].o = data_142d3f5b0
                            arg5[0].o = arg14[0].o
                            zmm5 = var_360
                        
                        arg14[0].o = var_ca0
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg13[0].o)
                        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x50)
                        
                        if ((temp0_1296 & 2) != 0)
                            int64_t rax_236 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg11 = zmm5
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *rax_236, 0x10)
                            arg11 = _mm256_blend_ps(arg11, zmm5, 0xf)
                            zmm5 = arg11
                        
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0xfa)
                        
                        if ((temp0_1296 & 4) != 0)
                            arg11 = zmm5
                            zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *zmm5[0], 0x20)
                            arg11 = _mm256_blend_ps(arg11, zmm5, 0xf)
                            zmm5 = arg11
                        
                        arg11[0].o = arg5[0].o
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
                        
                        if ((temp0_1296 & 8) == 0)
                            zmm0 = _mm256_blendv_ps(arg15, zmm2, zmm4)
                            
                            if ((temp0_1296 & 0x10) != 0)
                                goto label_1401f356b
                            
                            goto label_1401f2ff7
                        
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_243 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_243, 0x30)
                        zmm5 = _mm256_blend_ps(zmm5, zmm0, 0xf)
                        zmm0 = _mm256_blendv_ps(arg15, zmm2, zmm4)
                        
                        if ((temp0_1296 & 0x10) != 0)
                        label_1401f356b:
                            zmm2[0].o = *zmm0[0]
                            zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                            arg15[0].o = var_d00[0].o
                            
                            if ((temp0_1296 & 0x20) == 0)
                                goto label_1401f3006
                            
                            goto label_1401f3590
                        
                    label_1401f2ff7:
                        arg15[0].o = var_d00[0].o
                        
                        if ((temp0_1296 & 0x20) == 0)
                        label_1401f3006:
                            
                            if ((temp0_1296 & 0x40) != 0)
                                goto label_1401f35b1
                            
                            goto label_1401f3011
                        
                    label_1401f3590:
                        int64_t rax_245 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_245, 0x10)
                        zmm5 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                        
                        if ((temp0_1296 & 0x40) == 0)
                        label_1401f3011:
                            var_480 = arg8
                            
                            if (temp0_1296 s< 0)
                            label_1401f35df:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_247 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_247, 0x30)
                                zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        else
                        label_1401f35b1:
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            float* rax_246 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_246, 0x20)
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                            var_480 = arg8
                            
                            if (temp0_1296 s< 0)
                                goto label_1401f35df
                        
                        var_360 = zmm5
                        var_820_1 = _mm256_maskstore_ps(arg10, zmm5)
                    
                    zmm4 = var_c60.32
                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    arg5 = var_c80_2
                    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                    arg6 = var_a80_2
                    arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm5 = var_c00_1.32
                    zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    arg6 = var_aa0_2
                    zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    arg5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                    arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                    zmm5[0].o = zx.o(0)
                    zmm2 = _mm256_blendv_ps(zmm5, zmm2, arg5)
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm4[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                    zmm0 = _mm256_blendv_ps(zmm5, zmm0, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                    int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rcx_26 = zmm2[0].q
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t rdx_26 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rbx_16 = zmm2[0].q
                    double rdi_14 = zmm0[0]
                    int64_t rsi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rax_238 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm2[0].o = zx.o(*(r14 + rcx_26))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + r8_5), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rbx_16), 2)
                    double rcx_27 = zmm0[0]
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rdx_26), 3)
                    zmm2[0].o = zx.o(*(r14 i+ rdi_14))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rsi_8), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 i+ rcx_27), 2)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rax_238), 3)
                    arg5 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                    arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                    zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg6[0].o = data_143442490
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                    arg6[0].o = data_143442480
                    zmm5[0].o &= arg6[0].o
                    arg7[0].o = data_143442440
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    zmm4[0].o &= arg6[0].o
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                    zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(
                            __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg5), data_1434424a0), 
                            var_860_1), 
                        var_800_1)
                    arg5 = _mm256_cvtepi32_ps(zmm4)
                    zmm4 = data_143442460
                    arg5 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(arg5, zmm4), var_840_1), var_7e0_1)
                    zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(_mm256_cvtepi32_ps(zmm0), zmm4), 
                            var_820_1), 
                        var_7c0_1)
                    var_660.32 = _mm256_maskstore_ps(zmm1, zmm2)
                    var_640.32 = _mm256_maskstore_ps(zmm1, arg5)
                    var_620.32 = _mm256_maskstore_ps(zmm1, zmm0)
                    arg5[0].o = var_d20
                    arg6[0].o = var_980[0].o
                    arg10 = var_ac0_1
                    zmm5 = var_d40_1
                
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, data_142fc95c0)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                zmm1[0].o ^= arg9[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                arg8[0].o = zmm0[0].o ^ arg15[0].o
                zmm0[0].o = arg8[0].o & zmm1[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg8 = var_c20_1
                else
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                    zmm0[0].o = data_1434422d0
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_b60)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                    zmm2[0].o = var_b80[0].o
                    zmm2[0].o &= not.o(arg7[0].o)
                    arg5[0].o = zmm1[0].o & not.o(zmm0[0].o)
                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                        zmm1[0].o ^= arg9[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg7[0].o, 1)
                        arg11 = _mm256_and_ps(zmm0, zmm1)
                        zmm1 = var_be0
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm4, arg11)
                        bool cond:35_1 = _mm256_movemask_ps(zmm0) == 0
                        int128_t var_6e0_2 = arg7[0].o
                        
                        if (not(cond:35_1))
                            arg7 = var_c40.32
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = data_1434426b0
                            zmm2[0].o = zmm1[0].o
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            arg9 = var_cc0.32
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                            zmm5 = _mm256_and_ps(zmm0, zmm4)
                            zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                            arg9 = _mm256_blendv_ps(arg9, zmm2, zmm0)
                            var_cc0.32 = arg9
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                            var_c40.32 = _mm256_blendv_ps(arg7, zmm1, zmm2)
                            arg10 = arg11
                            arg11 = var_c60.32
                            zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            arg14 = var_c80_2
                            zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                            arg15 = var_a80_2
                            zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            arg7 = var_c00_1.32
                            arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg11[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
                            zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                            arg6[0].o = _mm256_extractf128_ps(var_aa0_2[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg15[0].o)
                            arg7[0].o = zx.o(0)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_aa0_2[0].o, arg6[0].o)
                            arg11 = arg10
                            zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            zmm0 = _mm256_blendv_ps(arg7, zmm5, zmm0)
                            zmm1 = _mm256_blendv_ps(arg7, zmm1, zmm2)
                            double r9_6 = zmm0[0]
                            int64_t r8_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            double r10_4 = zmm0[0]
                            int64_t rbx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            int64_t rdi_15 = zmm1[0].q
                            int64_t rsi_9 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            double rcx_28 = zmm0[0]
                            int64_t rax_242 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zx.o(*(r14 i+ r9_6))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + r8_6), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 i+ r10_4), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + rbx_17), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + rdi_15), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + rsi_9), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 i+ rcx_28), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + rax_242), 7)
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d8f750)
                            zmm2[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                        
                        zmm1[0].o = zx.o(0)
                        var_660.32 = _mm256_maskstore_ps(arg11, _mm256_blendv_ps(zmm1, zmm0, zmm4))
                        zmm0 = var_be0
                        arg6 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                        zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = zx.o(0)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm4[0].o = zmm0[0].o ^ arg9[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        zmm0[0].o ^= arg9[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm0[0].o &= arg5[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        char temp0_1549 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_1549 == 0)
                            arg15[0].o = var_d00[0].o
                            arg10 = var_ac0_1
                            zmm5 = var_d40_1
                            arg7[0].o = var_6e0_2
                        else
                            var_600 = arg11
                            var_aa0_2[0].o = zmm4[0].o
                            int128_t var_560
                            uint16_t* rax_249
                            
                            if ((temp0_1549 & 1) != 0)
                                arg10 = var_cc0.32
                                zmm4[0].o = var_560
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg10[0].q, 0)
                                arg11 = var_c40.32
                                
                                if ((temp0_1549 & 2) != 0)
                                    rax_249 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_249, 1)
                            else
                                zmm4[0].o = var_560
                                arg11 = var_c40.32
                                arg10 = var_cc0.32
                                
                                if ((temp0_1549 & 2) != 0)
                                    rax_249 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_249, 1)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            
                            if ((temp0_1549 & 4) == 0)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                
                                if ((temp0_1549 & 8) != 0)
                                    goto label_1401f390a
                                
                                goto label_1401f371f
                            
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 2)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_1549 & 8) == 0)
                            label_1401f371f:
                                arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                
                                if ((temp0_1549 & 0x10) != 0)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg11[0].q, 4)
                            else
                            label_1401f390a:
                                uint16_t* rax_255 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_255, 3)
                                arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                
                                if ((temp0_1549 & 0x10) != 0)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg11[0].q, 4)
                            
                            zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm5[0].o = data_1434426b0
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm5[0].o)
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                            arg15[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                            
                            if ((temp0_1549 & 0x20) != 0)
                                int64_t rax_251 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_251, 5)
                            
                            arg13[0].o = data_1434426b0
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                            arg14[0].o = arg8[0].o
                            
                            if ((temp0_1549 & 0x40) != 0)
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0].q, 6)
                            
                            arg13[0].o = data_1434426c0
                            arg8 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                            arg7 = _mm256_insertf128_ps(arg15, arg7[0].o, 1)
                            
                            if (temp0_1549 s< 0)
                                int64_t rax_253 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_253, 7)
                            
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            zmm2[0].o = zx.o(0)
                            arg10 = var_ac0_1
                            zmm5 = var_d40_1
                            arg15[0].o = var_d00[0].o
                            arg12 = _mm256_blendv_ps(var_cc0.32, zmm0, zmm1)
                            var_cc0.32 = arg12
                            zmm0 = _mm256_blendv_ps(var_c40.32, arg8, arg7)
                            var_c40.32 = zmm0
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zx.o(0))
                            var_560 = zmm4[0].o
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                            zmm2[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                            arg8[0].o = arg14[0].o
                            arg7[0].o = var_6e0_2
                            arg11 = var_600
                            zmm4[0].o = var_aa0_2[0].o
                        
                        zmm2[0].o = zx.o(0)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        zmm1[0].o ^= arg9[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                        var_640.32 = _mm256_maskstore_ps(arg11, _mm256_and_ps(zmm1, zmm0))
                        zmm0 = var_be0
                        zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        arg6[0].o = zmm0[0].o ^ arg9[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm0[0].o ^= arg9[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o &= arg5[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_1597 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_1597 != 0)
                            int128_t var_570
                            
                            if ((temp0_1597 & 1) != 0)
                                zmm0 = var_cc0.32
                                zmm1[0].o = var_570
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 0)
                                zmm2 = var_c40.32
                                
                                if ((temp0_1597 & 2) != 0)
                                label_1401f3957:
                                    zmm0 = var_cc0.32
                                    int64_t rax_257 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_257, 1)
                            else
                                zmm1[0].o = var_570
                                zmm2 = var_c40.32
                                
                                if ((temp0_1597 & 2) != 0)
                                    goto label_1401f3957
                            
                            if ((temp0_1597 & 4) == 0)
                                if ((temp0_1597 & 8) != 0)
                                    goto label_1401f4336
                                
                                goto label_1401f397d
                            
                            zmm0 = var_cc0.32
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 2)
                            
                            if ((temp0_1597 & 8) != 0)
                            label_1401f4336:
                                zmm0 = var_cc0.32
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_274 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_274, 3)
                                
                                if ((temp0_1597 & 0x10) == 0)
                                    goto label_1401f3986
                                
                                goto label_1401f435e
                            
                        label_1401f397d:
                            
                            if ((temp0_1597 & 0x10) == 0)
                            label_1401f3986:
                                
                                if ((temp0_1597 & 0x20) != 0)
                                    goto label_1401f436c
                                
                                goto label_1401f398f
                            
                        label_1401f435e:
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                            
                            if ((temp0_1597 & 0x20) != 0)
                            label_1401f436c:
                                int64_t rax_276 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_276, 5)
                                
                                if ((temp0_1597 & 0x40) == 0)
                                    goto label_1401f3998
                                
                                goto label_1401f4380
                            
                        label_1401f398f:
                            
                            if ((temp0_1597 & 0x40) != 0)
                            label_1401f4380:
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 6)
                                
                                if (temp0_1597 s< 0)
                                label_1401f4398:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    int64_t rax_278 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_278, 7)
                            else
                            label_1401f3998:
                                
                                if (temp0_1597 s< 0)
                                    goto label_1401f4398
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d8f750)
                            var_570 = zmm1[0].o
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            zmm2[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                        
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm4[0].o, data_142d8f750)
                        zmm1[0].o ^= arg9[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm1, zmm0)
                        var_620.32 = _mm256_maskstore_ps(arg11, zmm0)
                        arg14[0].o = data_142d3f5b0
                        arg11[0].o = arg14[0].o
                        arg6[0].o = var_980[0].o
                        arg14[0].o = var_ca0
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, data_1434422d0)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                    zmm1[0].o ^= arg9[0].o
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm0[0].o ^= arg8[0].o
                    zmm0[0].o &= zmm1[0].o
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg8 = var_c20_1
                    else
                        arg7 = zmm5
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                        zmm1[0].o = data_143442ad0
                        zmm2[0].o = zmm1[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_b60)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        zmm4[0].o = var_b80[0].o
                        zmm4[0].o &= not.o(zmm1[0].o)
                        zmm5[0].o = arg5[0].o & not.o(zmm2[0].o)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                            arg5[0].o ^= arg9[0].o
                            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                            zmm2 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), arg5)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_660.32 = _mm256_maskstore_ps(zmm2, arg5)
                            var_640.32 = _mm256_maskstore_ps(zmm2, arg5)
                            var_620.32 = _mm256_maskstore_ps(zmm2, arg5)
                        
                        zmm1[0].o ^= arg9[0].o
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, data_143442ad0)
                        zmm2[0].o ^= arg9[0].o
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg8 = var_c20_1
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = zx.o(0)
                            var_660.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_640.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_620.32 = _mm256_maskstore_ps(zmm0, zmm1)
                        
                        zmm5 = arg7
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
            zmm0[0].o ^= arg9[0].o
            zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_9e0)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_a20)
            zmm4[0].o = zmm2[0].o & not.o(arg6[0].o)
            zmm5[0].o = arg5[0].o & not.o(zmm0[0].o)
            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0)
                arg8[0].o = var_a00
                arg7[0].o = var_920
                arg9 = var_700
                arg11 = var_bc0_2
                arg14[0].o = data_142fc95c0
            else
                zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                double var_b80_1[0x4] = zmm0
                zmm0[0].o = zmm2[0].o ^ arg9[0].o
                zmm2[0].o = arg5[0].o ^ arg9[0].o
                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                var_c40.32 = zmm0
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm0[0].o, var_880[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg8[0].o, var_a60[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_5e0)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm4 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                var_880 = zmm4
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                var_980 = zmm5
                arg6 = var_c60.32
                zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                var_c20_1[0].o = zmm5[0].o
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_8c0)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                zmm5 = var_a80_2
                arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                float var_aa0_3[0x8] = zmm1
                var_cc0 = arg6[0].o
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_b20[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_ce0)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                arg7 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm1[0].o = arg12[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                bool cond:21_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                var_d40_1[0].o = arg12[0].o
                double var_520[0x4]
                float var_500[0x8]
                uint32_t var_4e0[0x8]
                
                if (cond:21_1)
                    zmm2[0].o = var_d20
                    zmm1 = var_b80_1
                    arg5 = var_c40.32
                else
                    zmm2 = var_9c0_1
                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                    zmm0[0].o &= zmm1[0].o
                    zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm2 = var_c80_2
                        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_c20_1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c60)
                        arg5 = var_c00_1.32
                        zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_cc0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a80_2[0].o)
                        arg10 = var_980
                        arg15 = arg7
                        arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_880[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_880[0].o, zmm2[0].o)
                        arg5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg10[0].o = zx.o(0)
                        zmm5 = _mm256_blendv_ps(arg10, zmm2, zmm0)
                        zmm2[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg10, arg5, zmm2)
                        double r9_7 = zmm5[0]
                        int64_t r11_5 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* r10_5 = r14 i+ r9_7
                        int64_t r8_7 = arg5[0].q
                        int64_t r15_2 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        void* r14_2 = arg16 + r8_7
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t r12_2 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rbx_20 = arg5[0].q
                        arg5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg6 = _mm256_blendv_ps(arg10, arg5, zmm0)
                        arg5 = _mm256_blendv_ps(arg10, arg5, zmm2)
                        int64_t rdx_28 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int32_t* rdi_16 = arg5[0].q
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rsi_10 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        float* rax_265 = arg5[0].q
                        arg5 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm0 = _mm256_blendv_ps(arg10, arg5, zmm0)
                        arg7[0].o = *(rdi_16 + r14_2)
                        zmm2 = _mm256_blendv_ps(arg10, arg5, zmm2)
                        arg12[0].o = var_d40_1[0].o
                        arg5[0].o = *(zmm2[0].q + r14_2)
                        r14 = arg16
                        void* rdi_18 = r14 + r11_5
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        void* rcx_31 = r14 + r15_2
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_28 + rcx_31), 0x10)
                        float* rdx_29 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_29 + rcx_31), 0x10)
                        int64_t rcx_32 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* rdx_30 = r14 + rbx_20
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_265 + rdx_30), 0x20)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(zmm2[0].q + rdx_30), 0x20)
                        int32_t* rax_267 = arg6[0].q
                        float* rdx_31 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = *(rax_267 + r10_5)
                        void* rax_268 = r14 + r12_2
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_10 + rax_268), 0x30)
                        int64_t rsi_11 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_11 + rdi_18), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_31 + rax_268), 0x30)
                        double rax_269 = zmm5[0]
                        int32_t* rdx_32 = zmm0[0]
                        float* rsi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm5[0].o = *(rdx_32 + r10_5)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_12 + rdi_18), 0x10)
                        void* rdx_33 = r14 i+ rax_269
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(arg6[0].q + rdx_33), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm0[0] + rdx_33), 0x20)
                        void* rdx_34 = r14 + rcx_32
                        int64_t rdi_21 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_21 + rdx_34), 0x30)
                        int64_t rdi_22 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_22 + rdx_34), 0x30)
                        zmm5[0].o = *(r14 i+ r9_7)
                        arg6[0].o = *(r14 + r8_7)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + r15_2), 0x10)
                        r15 = var_9a0
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + rbx_20), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + r12_2), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r14 + r11_5), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r14 i+ rax_269), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r14 + rcx_32), 0x30)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        var_520 = _mm256_maskstore_ps(zmm4, zmm5)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg7[0].o, 1)
                        arg7 = arg15
                        var_500 = _mm256_maskstore_ps(zmm4, zmm2)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        var_4e0 = _mm256_maskstore_ps(zmm4, zmm0)
                    
                    zmm0[0].o = arg8[0].o ^ arg9[0].o
                    zmm2[0].o = zx.o(0)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_9c0_1[0].o)
                    zmm2[0].o ^= arg9[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    arg13[0].o = zmm1[0].o & zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                        arg13[0].o = data_1434426c0
                        zmm2[0].o = var_d20
                        arg15[0].o = var_d00[0].o
                        arg10 = var_ac0_1
                        zmm1 = var_b80_1
                        arg5 = var_c40.32
                    else
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg6 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        zmm1 = var_be0
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm4, arg6)
                        int32_t temp0_1781 = _mm256_movemask_ps(zmm0)
                        arg10[0].o = zx.o(0)
                        arg15 = arg7
                        arg5 = var_aa0_3
                        
                        if (temp0_1781 != 0)
                            zmm0[0].o = _mm256_extractf128_ps(var_aa0_3[0].o, 1)
                            arg5[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_aa0_3[0].o, arg5[0].o)
                            arg8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1 = _mm256_and_ps(_mm256_insertf128_ps(zmm5, zmm1[0].o, 1), zmm4)
                            zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            arg14 = arg6
                            arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                            zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                            zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                            arg6[0].o = _mm256_extractf128_ps(var_c80_2[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_c20_1[0].o)
                            arg9 = arg7
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_c80_2[0].o, var_c60)
                            var_c80_2[0].o = _mm256_extractf128_ps(var_880[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            var_c80_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c80_2[0].o, arg6[0].o)
                            arg10 = var_c00_1.32
                            arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_cc0)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_880[0].o, arg7[0].o)
                            zmm0 = _mm256_insertf128_ps(arg7, var_c80_2[0].o, 1)
                            arg15 = var_980
                            arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg10[0].o, var_a80_2[0].o)
                            arg10[0].o = zx.o(0)
                            arg12[0].o = var_d40_1[0].o
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
                            arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            arg7 = arg9
                            arg15 = _mm256_blendv_ps(arg9, zmm2, zmm5)
                            zmm2 = _mm256_blendv_ps(arg10, arg6, zmm5)
                            arg6 = arg14
                            arg5 = _mm256_blendv_ps(var_aa0_3, arg8, zmm1)
                            zmm0 = _mm256_blendv_ps(arg10, zmm0, zmm1)
                            int64_t r8_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rcx_33 = zmm2[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rdx_35 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_21 = zmm1[0].q
                            zmm1[0].o = *(r14 + rcx_33)
                            int64_t rcx_34 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rdi_23 = zmm0[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rax_272 = zmm0[0]
                            zmm0[0].o = *(r14 i+ rdi_23)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14 + rcx_34), 0x10)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(r14 i+ rax_272), 0x20)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14 + rsi_13), 0x30)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14 + r8_8), 0x10)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14 + rbx_21), 0x20)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14 + rdx_35), 0x30)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        var_a20.32 = arg7
                        var_520 = _mm256_maskstore_ps(arg6, _mm256_blendv_ps(arg10, zmm0, zmm4))
                        zmm0 = var_be0
                        arg9 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d8f750)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        zmm2[0].o = zx.o(0)
                        zmm4[0].o = zmm0[0].o ^ zmm1[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm0[0].o ^= zmm1[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm0[0].o &= arg13[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        char temp0_1844 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        float var_8a0[0x8]
                        
                        if (temp0_1844 == 0)
                            arg10 = var_ac0_1
                            arg14[0].o = var_ca0
                        else
                            float var_9c0_2[0x8] = arg6
                            
                            if ((temp0_1844 & 1) != 0)
                                zmm1[0].o = *arg15[0].q
                                arg6 = _mm256_blend_ps(var_8a0, zmm1, 1)
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                
                                if ((temp0_1844 & 2) != 0)
                                label_1401f43d4:
                                    int64_t rax_280 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_280, 0x10)
                                    arg6 = _mm256_blend_ps(arg6, zmm0, 0xf)
                            else
                                arg6 = var_8a0
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                
                                if ((temp0_1844 & 2) != 0)
                                    goto label_1401f43d4
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            var_9a0.o = zmm4[0].o
                            
                            if ((temp0_1844 & 4) != 0)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *zmm2[0].q, 0x20)
                                arg6 = _mm256_blend_ps(arg6, zmm1, 0xf)
                            
                            zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            var_aa0_3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            
                            if ((temp0_1844 & 8) != 0)
                                int64_t rax_282 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_282, 0x30)
                                arg6 = _mm256_blend_ps(arg6, zmm0, 0xf)
                            
                            var_8a0 = arg6
                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm1[0].o = data_1434426c0
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                            arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(var_aa0_3[0].o, 0x50)
                            arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x50)
                            
                            if ((temp0_1844 & 0x10) != 0)
                                zmm1[0].o = zx.o(*arg5[0].q)
                                arg8 = var_8a0
                                arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm1[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm1[0].o, 3)
                                arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                var_8a0 = arg8
                            
                            zmm1[0].o = data_1434426c0
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(var_aa0_3[0].o, 0xfa)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0xfa)
                            
                            if ((temp0_1844 & 0x20) != 0)
                                int64_t rax_284 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm4[0].o = _mm256_extractf128_ps(var_8a0[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_284, 0x10)
                                var_8a0 = _mm256_insertf128_ps(var_8a0, zmm4[0].o, 1)
                            
                            zmm4 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                            
                            if ((temp0_1844 & 0x40) != 0)
                                double rax_285 = zmm0[0]
                                arg7 = var_8a0
                                arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                arg6[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_285, 0x20)
                                var_8a0 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            
                            arg10 = var_ac0_1
                            arg14[0].o = var_ca0
                            arg12[0].o = var_d40_1[0].o
                            arg6 = var_9c0_2
                            arg15 = _mm256_blendv_ps(arg15, zmm2, zmm1)
                            arg5 = _mm256_blendv_ps(arg5, zmm4, zmm5)
                            
                            if (temp0_1844 s< 0)
                                int64_t rax_286 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(var_8a0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_286, 0x30)
                                zmm1 = _mm256_insertf128_ps(var_8a0, zmm0[0].o, 1)
                                var_8a0 = zmm1
                            
                            zmm4[0].o = var_9a0.o
                        
                        zmm0[0].o = zx.o(0)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        zmm0[0].o ^= arg9[0].o
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                        zmm1[0].o = zx.o(0)
                        var_500 =
                            _mm256_maskstore_ps(arg6, __vandps_ymmqq_ymmqq_memqq(zmm0, var_8a0))
                        zmm0 = var_be0
                        zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm5[0].o = zmm0[0].o ^ arg9[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        zmm0[0].o ^= arg9[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0[0].o &= arg13[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_1911 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        uint32_t var_4a0[0x8]
                        
                        if (temp0_1911 == 0)
                            arg13[0].o = data_1434426c0
                            zmm2[0].o = var_d20
                            arg15[0].o = var_d00[0].o
                            arg7 = var_a20.32
                            zmm1 = var_b80_1
                        else
                            if ((temp0_1911 & 1) != 0)
                                zmm0[0].o = *arg15[0].q
                                zmm2 = _mm256_blend_ps(var_4a0, zmm0, 1)
                                
                                if ((temp0_1911 & 2) != 0)
                                label_1401f465e:
                                    int64_t rax_288 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_288, 0x10)
                                    zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            else
                                zmm2 = var_4a0
                                
                                if ((temp0_1911 & 2) != 0)
                                    goto label_1401f465e
                            
                            arg7 = var_a20.32
                            
                            if ((temp0_1911 & 4) == 0)
                                if ((temp0_1911 & 8) != 0)
                                    goto label_1401f48aa
                                
                                goto label_1401f468b
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *zmm0[0], 0x20)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            
                            if ((temp0_1911 & 8) != 0)
                            label_1401f48aa:
                                zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                int64_t rax_292 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_292, 0x30)
                                zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                arg15[0].o = var_d00[0].o
                                
                                if ((temp0_1911 & 0x10) == 0)
                                    goto label_1401f469a
                                
                                goto label_1401f48d6
                            
                        label_1401f468b:
                            arg15[0].o = var_d00[0].o
                            
                            if ((temp0_1911 & 0x10) == 0)
                            label_1401f469a:
                                zmm1 = var_b80_1
                                
                                if ((temp0_1911 & 0x20) != 0)
                                    goto label_1401f48fe
                                
                                goto label_1401f46ac
                            
                        label_1401f48d6:
                            zmm0[0].o = *arg5[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm1 = var_b80_1
                            
                            if ((temp0_1911 & 0x20) != 0)
                            label_1401f48fe:
                                int64_t rax_294 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_294, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((temp0_1911 & 0x40) == 0)
                                    goto label_1401f46b5
                                
                                goto label_1401f491f
                            
                        label_1401f46ac:
                            
                            if ((temp0_1911 & 0x40) != 0)
                            label_1401f491f:
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                double rax_295 = zmm0[0]
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_295, 0x20)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if (temp0_1911 s< 0)
                                label_1401f4944:
                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    int64_t rax_296 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_296, 0x30)
                                    zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            else
                            label_1401f46b5:
                                
                                if (temp0_1911 s< 0)
                                    goto label_1401f4944
                            
                            var_4a0 = zmm2
                            arg13[0].o = data_1434426c0
                            zmm2[0].o = var_d20
                        
                        arg5 = var_c40.32
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm4[0].o, data_142d8f750)
                        zmm0[0].o ^= arg9[0].o
                        var_4e0 = _mm256_maskstore_ps(arg6, 
                            __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, zmm5[0].o, 1), 
                                var_4a0))
                
                zmm0 = _mm256_and_ps(arg5, zmm1)
                var_b80 = zmm0
                zmm0[0].o = arg12[0].o & arg15[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg8[0].o = var_a00
                    arg7[0].o = var_920
                    arg9 = var_700
                    arg11 = var_bc0_2
                    arg14[0].o = data_142fc95c0
                else
                    zmm5[0].o = data_142fc95c0
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o &= arg12[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg14[0].o = zmm5[0].o
                    else
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg12[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg8[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm1[0].o = zx.o(0)
                        float var_7c0_2[0x8] = zmm1
                        float var_7e0_2[0x8] = zmm1
                        float var_800_2[0x8] = zmm1
                        float var_820_2[0x8] = zmm1
                        float var_840_2[0x8] = zmm1
                        float var_860_2[0x8] = zmm1
                        zmm2 = var_be0
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        arg5 = _mm256_and_ps(zmm0, zmm1)
                        zmm4 = __vandps_ymmqq_ymmqq_memqq(arg5, var_b80)
                        int32_t temp0_1945 = _mm256_movemask_ps(zmm4)
                        var_a20.32 = arg7
                        int32_t var_9c0_3[0x8] = arg12
                        float var_440[0x8]
                        
                        if (temp0_1945 == 0)
                            arg11 = var_440
                            arg12 = var_8c0.32
                            arg15 = var_ce0.32
                            arg14[0].o = zmm5[0].o
                        else
                            char rbx_24 = temp0_1945.b
                            double var_380[0x4]
                            
                            if ((rbx_24 & 1) != 0)
                                zmm0 = var_ce0.32
                                zmm0[0].o = *zmm0[0]
                                arg9 = _mm256_blend_ps(var_380, zmm0, 1)
                                
                                if ((rbx_24 & 2) != 0)
                                label_1401f498a:
                                    zmm0 = var_ce0.32
                                    float* rax_298 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_298, 0x10)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            else
                                arg9 = var_380
                                
                                if ((rbx_24 & 2) != 0)
                                    goto label_1401f498a
                            
                            arg11 = var_8c0.32
                            
                            if ((rbx_24 & 4) != 0)
                                zmm0[0].o = var_b20[0].o
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm0[0], 0x20)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                
                                if ((rbx_24 & 8) != 0)
                                label_1401f4e18:
                                    zmm0[0].o = var_b20[0].o
                                    float* rax_314 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_314, 0x30)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                    
                                    if ((rbx_24 & 0x10) == 0)
                                        goto label_1401f49c6
                                    
                                    goto label_1401f4e41
                            else if ((rbx_24 & 8) != 0)
                                goto label_1401f4e18
                            
                            if ((rbx_24 & 0x10) != 0)
                            label_1401f4e41:
                                zmm0[0].o = *arg11[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, var_ce0)
                                arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                                
                                if ((rbx_24 & 0x20) != 0)
                                label_1401f49d7:
                                    int64_t rax_299 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_299, 0x10)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            else
                            label_1401f49c6:
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, var_ce0)
                                arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                                
                                if ((rbx_24 & 0x20) != 0)
                                    goto label_1401f49d7
                            
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, var_b20[0].o)
                            zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                            
                            if ((rbx_24 & 0x40) != 0)
                                float* rax_300 = arg14[0].q
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_300, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg13[0].o)
                            arg7[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            arg13 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                            
                            if (temp0_1945.b s< 0)
                                int64_t rax_301 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_301, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                            
                            float var_3c0[0x8]
                            zmm4 = var_3c0
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg14[0].o, data_1434426c0)
                            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                            zmm5 = _mm256_blendv_ps(var_ce0.32, zmm1, arg13)
                            var_800_2 = _mm256_maskstore_ps(arg5, arg9)
                            
                            if ((rbx_24 & 1) != 0)
                                zmm1[0].o = *zmm5[0]
                                zmm4 = _mm256_blend_ps(zmm4, zmm1, 1)
                            
                            zmm1 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            var_380 = arg9
                            
                            if ((rbx_24 & 2) == 0)
                                arg9 = _mm256_blendv_ps(arg11, zmm1, arg6)
                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                
                                if ((rbx_24 & 4) != 0)
                                    goto label_1401f4e9d
                                
                                goto label_1401f4ac7
                            
                            float* rax_316 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_316, 0x10)
                            zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                            arg9 = _mm256_blendv_ps(arg11, zmm1, arg6)
                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            
                            if ((rbx_24 & 4) != 0)
                            label_1401f4e9d:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *zmm0[0], 0x20)
                                zmm4 = _mm256_blend_ps(zmm4, zmm1, 0xf)
                                
                                if ((rbx_24 & 8) == 0)
                                    goto label_1401f4ad0
                                
                                goto label_1401f4eb2
                            
                        label_1401f4ac7:
                            
                            if ((rbx_24 & 8) != 0)
                            label_1401f4eb2:
                                float* rax_318 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_318, 0x30)
                                zmm4 = _mm256_blend_ps(zmm4, zmm1, 0xf)
                                
                                if ((rbx_24 & 0x10) != 0)
                                label_1401f4ada:
                                    zmm1[0].o = *arg9[0]
                                    zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    zmm1[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 1)
                                    zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            else
                            label_1401f4ad0:
                                
                                if ((rbx_24 & 0x10) != 0)
                                    goto label_1401f4ada
                            
                            zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm1[0].o = data_1434426c0
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                            
                            if ((rbx_24 & 0x20) != 0)
                                int64_t rax_304 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_304, 0x10)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            
                            arg11 = zmm4
                            zmm1[0].o = data_1434426c0
                            zmm4[0].o = zmm1[0].o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            
                            if ((rbx_24 & 0x40) != 0)
                                float* rax_305 = zmm2[0].q
                                zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_305, 0x20)
                                arg11 = _mm256_insertf128_ps(arg11, zmm4[0].o, 1)
                            
                            zmm4 = arg11
                            arg11 = var_440
                            zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            
                            if (temp0_1945.b s< 0)
                                int64_t rax_306 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_306, 0x30)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            
                            arg15 = _mm256_blendv_ps(zmm5, zmm0, arg13)
                            arg12 = _mm256_blendv_ps(arg9, zmm1, arg6)
                            var_3c0 = zmm4
                            var_860_2 = _mm256_maskstore_ps(arg5, zmm4)
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            arg13[0].o = data_142fc95c0
                            arg14[0].o = arg13[0].o
                            arg13[0].o = data_1434426c0
                        
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg8[0].o, 0x1f)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg14[0].o)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(var_be0, data_143442a60)
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o = zmm4[0].o & not.o(var_d20)
                        zmm1[0].o = zmm5[0].o & not.o(arg5[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = zmm0[0].o & var_d40_1[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_2030 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_2030 == 0)
                            arg10 = arg15
                            arg7 = arg12
                            arg5[0].o = var_d20
                            arg15[0].o = var_d00[0].o
                            zmm0 = var_9c0_3
                        else
                            if ((temp0_2030 & 1) == 0)
                                var_ce0 = arg6[0].o
                                
                                if ((temp0_2030 & 2) != 0)
                                    goto label_1401f4ef0
                                
                                goto label_1401f4c3b
                            
                            zmm0[0].o = *arg15[0].q
                            arg11 = _mm256_blend_ps(arg11, zmm0, 1)
                            var_ce0 = arg6[0].o
                            
                            if ((temp0_2030 & 2) != 0)
                            label_1401f4ef0:
                                int64_t rax_320 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *rax_320, 0x10)
                                arg11 = _mm256_blend_ps(arg11, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                
                                if ((temp0_2030 & 4) == 0)
                                    goto label_1401f4c4f
                                
                                goto label_1401f4f1b
                            
                        label_1401f4c3b:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            
                            if ((temp0_2030 & 4) != 0)
                            label_1401f4f1b:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *arg6[0].q, 0x20)
                                arg11 = _mm256_blend_ps(arg11, zmm1, 0xf)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_2030 & 8) != 0)
                                label_1401f4c59:
                                    int64_t rax_307 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                                        *rax_307, 0x30)
                                    arg11 = _mm256_blend_ps(arg11, zmm1, 0xf)
                            else
                            label_1401f4c4f:
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_2030 & 8) != 0)
                                    goto label_1401f4c59
                            
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg8[0].o = zmm5[0].o ^ arg9[0].o
                            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            
                            if ((temp0_2030 & 0x10) != 0)
                                zmm0[0].o = zx.o(*arg12[0].q)
                                zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm0[0].o, 3)
                                arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg13[0].o)
                            arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                            zmm4[0].o ^= arg7[0].o
                            
                            if ((temp0_2030 & 0x20) != 0)
                                int64_t rax_309 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_309, 0x10)
                                arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            arg5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_d20, 1)
                            arg13 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                            zmm4 = arg15
                            
                            if ((temp0_2030 & 0x40) != 0)
                                float* rax_310 = zmm1[0].q
                                zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_310, 0x20)
                                arg11 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            
                            arg15[0].o = var_d00[0].o
                            arg14 = arg12
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg12[0].o, data_1434426c0)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                            zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                            arg12 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            arg13 = _mm256_and_ps(arg13, arg5)
                            
                            if (temp0_2030 s< 0)
                                int64_t rax_311 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_311, 0x30)
                                arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, data_1434426c0)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                            zmm5 = _mm256_blendv_ps(zmm4, zmm5, arg12)
                            var_7e0_2 = _mm256_maskstore_ps(arg13, arg11)
                            float var_4c0[0x8]
                            
                            if ((temp0_2030 & 1) != 0)
                                arg5[0].o = *zmm5[0]
                                zmm4 = _mm256_blend_ps(var_4c0, arg5, 1)
                                var_4c0 = zmm4
                            
                            zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            arg6 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            
                            if ((temp0_2030 & 2) != 0)
                                float* rax_322 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                arg8 = var_4c0
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_322, 0x10)
                                arg8 = _mm256_blend_ps(arg8, zmm0, 0xf)
                                arg9 = _mm256_blendv_ps(arg14, zmm1, arg6)
                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                
                                if ((temp0_2030 & 4) != 0)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *zmm0[0], 0x20)
                                    arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                            else
                                arg8 = var_4c0
                                arg9 = _mm256_blendv_ps(arg14, zmm1, arg6)
                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                
                                if ((temp0_2030 & 4) != 0)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *zmm0[0], 0x20)
                                    arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                            
                            if ((temp0_2030 & 8) != 0)
                                float* rax_328 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_328, 0x30)
                                arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                                
                                if ((temp0_2030 & 0x10) != 0)
                                label_1401f4f8a:
                                    zmm1[0].o = *arg9[0]
                                    zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm1[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 1)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            else if ((temp0_2030 & 0x10) != 0)
                                goto label_1401f4f8a
                            
                            zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm1[0].o = data_1434426c0
                            arg5[0].o = zmm1[0].o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                            
                            if ((temp0_2030 & 0x20) != 0)
                                int64_t rax_325 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                arg5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_325, 0x10)
                                arg8 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                            
                            arg5[0].o = data_1434426c0
                            zmm4[0].o = arg5[0].o
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            
                            if ((temp0_2030 & 0x40) != 0)
                                float* rax_326 = zmm2[0].q
                                zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_326, 0x20)
                                arg8 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                            
                            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            
                            if (temp0_2030 s< 0)
                                int64_t rax_327 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_327, 0x30)
                                arg8 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                            
                            arg5[0].o = var_d20
                            arg10 = _mm256_blendv_ps(zmm5, zmm0, arg12)
                            arg7 = _mm256_blendv_ps(arg9, zmm1, arg6)
                            var_4c0 = arg8
                            var_840_2 = _mm256_maskstore_ps(arg13, arg8)
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            arg13[0].o = data_142fc95c0
                            arg14[0].o = arg13[0].o
                            arg13[0].o = data_1434426c0
                            zmm0 = var_9c0_3
                            arg6[0].o = var_ce0
                        
                        arg8 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, var_ac0_1[0].o)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(var_be0, data_142fc9520)
                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = zx.o(0)
                        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm0[0].o = zmm5[0].o & not.o(arg5[0].o)
                        zmm2[0].o = arg6[0].o & not.o(arg12[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm4[0].o = zmm0[0].o & var_d40_1[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_2138 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        var_440 = arg11
                        
                        if (temp0_2138 == 0)
                            arg10 = var_ac0_1
                            arg12[0].o = var_d40_1[0].o
                            arg7 = var_a20.32
                        else
                            float var_3a0[0x8]
                            
                            if ((temp0_2138 & 1) != 0)
                                zmm0[0].o = *arg10[0].q
                                zmm1 = _mm256_blend_ps(var_3a0, zmm0, 1)
                                arg14 = arg7
                                arg5 = arg10
                                
                                if ((temp0_2138 & 2) != 0)
                                label_1401f5164:
                                    int64_t rax_330 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_330, 0x10)
                                    zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                            else
                                zmm1 = var_3a0
                                arg14 = arg7
                                arg5 = arg10
                                
                                if ((temp0_2138 & 2) != 0)
                                    goto label_1401f5164
                            
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            
                            if ((temp0_2138 & 4) != 0)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *zmm0[0], 0x20)
                                zmm1 = _mm256_blend_ps(zmm1, arg7, 0xf)
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                
                                if ((temp0_2138 & 8) != 0)
                                label_1401f5194:
                                    int64_t rax_331 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_331, 0x30)
                                    zmm1 = _mm256_blend_ps(zmm1, arg7, 0xf)
                            else
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                
                                if ((temp0_2138 & 8) != 0)
                                    goto label_1401f5194
                            
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            arg6[0].o ^= arg9[0].o
                            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            
                            if ((temp0_2138 & 0x10) != 0)
                                zmm2[0].o = zx.o(*arg14[0].q)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 3)
                                arg9 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                                zmm1 = arg9
                            
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg13[0].o)
                            arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                            zmm5[0].o ^= arg5[0].o
                            
                            if ((temp0_2138 & 0x20) != 0)
                                int64_t rax_333 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_333, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                                zmm1 = zmm2
                            
                            arg5[0].o = var_d20
                            zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(arg12, arg5[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            
                            if ((temp0_2138 & 0x40) != 0)
                                float* rax_334 = zmm2[0].q
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_334, 0x20)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                            
                            arg15 = var_a20.32
                            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg11, arg7[0].o, 1)
                            arg5 = _mm256_and_ps(zmm5, arg5)
                            
                            if (temp0_2138 s< 0)
                                int64_t rax_335 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_335, 0x30)
                                zmm5 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                                zmm1 = zmm5
                            
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                            zmm0 = _mm256_blendv_ps(arg10, zmm0, arg6)
                            var_7c0_2 = _mm256_maskstore_ps(arg5, zmm1)
                            var_3a0 = zmm1
                            double var_720[0x4]
                            
                            if ((temp0_2138 & 1) != 0)
                                zmm1[0].o = *zmm0[0]
                                zmm5 = _mm256_blend_ps(var_720, zmm1, 1)
                                var_720 = zmm5
                            
                            arg12[0].o = var_d40_1[0].o
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x50)
                            
                            if ((temp0_2138 & 2) != 0)
                                float* rax_337 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(var_720[0].o, *rax_337, 0x10)
                                var_720 = _mm256_blend_ps(var_720, zmm1, 0xf)
                            
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0xfa)
                            
                            if ((temp0_2138 & 4) != 0)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_720[0].o, 
                                    *zmm1[0].q, 0x20)
                                var_720 = _mm256_blend_ps(var_720, zmm1, 0xf)
                            
                            arg10 = var_ac0_1
                            arg7 = arg15
                            arg15[0].o = var_d00[0].o
                            zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                            
                            if ((temp0_2138 & 8) != 0)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_340 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(var_720[0].o, *rax_340, 0x30)
                                zmm5 = _mm256_blend_ps(var_720, zmm0, 0xf)
                                zmm0 = _mm256_blendv_ps(arg14, zmm2, zmm4)
                                
                                if ((temp0_2138 & 0x10) != 0)
                                label_1401f53e7:
                                    zmm1[0].o = *zmm0[0]
                                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm1[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 1)
                                    zmm5 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            else
                                zmm5 = var_720
                                zmm0 = _mm256_blendv_ps(arg14, zmm2, zmm4)
                                
                                if ((temp0_2138 & 0x10) != 0)
                                    goto label_1401f53e7
                            
                            arg14[0].o = data_142fc95c0
                            
                            if ((temp0_2138 & 0x20) == 0)
                                if ((temp0_2138 & 0x40) != 0)
                                    goto label_1401f596f
                                
                                goto label_1401f5417
                            
                            int64_t rax_347 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_347, 0x10)
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            
                            if ((temp0_2138 & 0x40) == 0)
                            label_1401f5417:
                                
                                if (temp0_2138 s< 0)
                                label_1401f5994:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rax_349 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_349, 0x30)
                                    zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                            else
                            label_1401f596f:
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                float* rax_348 = zmm1[0].q
                                zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_348, 0x20)
                                zmm5 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                                
                                if (temp0_2138 s< 0)
                                    goto label_1401f5994
                            
                            var_720 = zmm5
                            var_820_2 = _mm256_maskstore_ps(arg5, zmm5)
                        
                        zmm1 = var_c80_2
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_c20_1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60)
                        zmm1 = var_c00_1.32
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_cc0)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a80_2[0].o)
                        arg6 = var_880
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        zmm1 = var_980
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                        zmm1[0].o = zx.o(0)
                        zmm2 = _mm256_blendv_ps(zmm1, zmm2, arg5)
                        arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm4[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        zmm0 =
                            _mm256_blendv_ps(zmm1, zmm0, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                        int64_t r8_9 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_40 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_36 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_27 = zmm2[0].q
                        double rdi_24 = zmm0[0]
                        int64_t rsi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_342 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = zx.o(*(r14 + rcx_40))
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + r8_9), 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rbx_27), 2)
                        double rcx_41 = zmm0[0]
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rdx_36), 3)
                        zmm2[0].o = zx.o(*(r14 i+ rdi_24))
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rsi_14), 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 i+ rcx_41), 2)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14 + rax_342), 3)
                        arg5 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                        zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o = data_143442490
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm1[0].o = data_143442480
                        zmm5[0].o &= zmm1[0].o
                        arg6[0].o = data_143442440
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                        zmm4[0].o &= zmm1[0].o
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(
                                __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg5), 
                                    data_1434424a0), 
                                var_860_2), 
                            var_800_2)
                        arg5 = _mm256_cvtepi32_ps(zmm4)
                        zmm1 = data_143442460
                        arg5 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(arg5, zmm1), var_840_2), 
                            var_7e0_2)
                        zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(
                                _mm256_div_ps(_mm256_cvtepi32_ps(zmm0), zmm1), var_820_2), 
                            var_7c0_2)
                        var_520 = _mm256_maskstore_ps(arg8, zmm2)
                        var_500 = _mm256_maskstore_ps(arg8, arg5)
                        var_4e0 = _mm256_maskstore_ps(arg8, zmm0)
                        zmm2[0].o = var_d20
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg14[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    arg6[0].o = zmm0[0].o ^ arg15[0].o
                    zmm0[0].o = arg12[0].o & arg6[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                        arg8[0].o = var_a00
                        arg7[0].o = var_920
                        arg9 = var_700
                        arg11 = var_bc0_2
                    else
                        zmm0[0].o = data_1434422d0
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_b60)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        arg13[0].o = arg12[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                            arg13[0].o = data_142fc95c0
                            arg14[0].o = arg13[0].o
                            arg11 = var_bc0_2
                        else
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg8 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm2 = var_be0
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            arg11 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            zmm1 = _mm256_and_ps(arg11, arg8)
                            bool cond:71_1 = _mm256_movemask_ps(zmm1) == 0
                            var_d20 = arg6[0].o
                            var_ce0 = arg5[0].o
                            
                            if (cond:71_1)
                                arg14 = arg7
                                arg15 = var_aa0_3
                            else
                                zmm1[0].o = _mm256_extractf128_ps(var_aa0_3[0].o, 1)
                                zmm2[0].o = data_1434426b0
                                arg5[0].o = zmm2[0].o
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_aa0_3[0].o, zmm2[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                                zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                                zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                                zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                zmm5 = _mm256_and_ps(zmm0, arg11)
                                zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                                arg7 = _mm256_blendv_ps(arg7, zmm2, zmm0)
                                arg14 = arg7
                                zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                                arg15 = _mm256_blendv_ps(var_aa0_3, zmm1, zmm2)
                                arg5 = var_c80_2
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c20_1[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_c60)
                                arg5 = var_c00_1.32
                                arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_cc0)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a80_2[0].o)
                                arg12 = arg8
                                arg8 = var_880
                                arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                arg10[0].o = data_1434426c0
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                arg8 = var_980
                                arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                                arg8 = arg12
                                arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                zmm0 = _mm256_blendv_ps(zmm4, arg5, zmm0)
                                zmm1 = _mm256_blendv_ps(zmm4, zmm1, zmm2)
                                double r9_8 = zmm0[0]
                                int64_t r8_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                double r10_6 = zmm0[0]
                                int64_t rbx_28 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rdi_25 = zmm1[0].q
                                int64_t rsi_15 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                double rcx_42 = zmm0[0]
                                int64_t rax_346 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(r14 i+ r9_8))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + r8_10), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 i+ r10_6), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + rbx_28), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + rdi_25), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + rsi_15), 5)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 i+ rcx_42), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r14 + rax_346), 7)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d8f750)
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                            
                            zmm1[0].o = zx.o(0)
                            var_520 = _mm256_maskstore_ps(arg8, _mm256_blendv_ps(zmm1, zmm0, arg11))
                            zmm0 = var_be0
                            zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm1[0].o = zx.o(0)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            arg5[0].o = zmm0[0].o ^ arg9[0].o
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                            zmm0[0].o ^= arg9[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm0[0].o &= arg13[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_2376 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_2376 == 0)
                                arg11 = var_bc0_2
                                arg10 = var_ac0_1
                                arg12[0].o = var_d40_1[0].o
                            else
                                var_c60 = arg5[0].o
                                int128_t var_590
                                int64_t rax_351
                                
                                if ((temp0_2376 & 1) != 0)
                                    zmm4 = arg14
                                    arg5[0].o = var_590
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm4[0].q, 0)
                                    
                                    if ((temp0_2376 & 2) != 0)
                                        rax_351 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_351, 1)
                                else
                                    arg5[0].o = var_590
                                    zmm4 = arg14
                                    
                                    if ((temp0_2376 & 2) != 0)
                                        rax_351 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_351, 1)
                                arg11 = var_bc0_2
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                
                                if ((temp0_2376 & 4) != 0)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0], 2)
                                
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                
                                if ((temp0_2376 & 8) != 0)
                                    int64_t rax_353 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_353, 3)
                                
                                arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                var_8c0.32 = arg8
                                
                                if ((temp0_2376 & 0x10) != 0)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg15[0].q, 4)
                                
                                arg8[0].o = arg5[0].o
                                zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                arg5[0].o = data_1434426b0
                                arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                arg12 = arg14
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                                arg5 = arg15
                                arg15[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                                arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                                
                                if ((temp0_2376 & 0x20) != 0)
                                    arg10 = arg5
                                    uint16_t* rax_355 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_355, 5)
                                else
                                    arg10 = arg5
                                
                                arg5[0].o = data_1434426b0
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                                
                                if ((temp0_2376 & 0x40) != 0)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm2[0].q, 6)
                                
                                arg5[0].o = var_c60
                                arg6 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg15, zmm1[0].o, 1)
                                arg7 = _mm256_insertf128_ps(arg14, arg7[0].o, 1)
                                
                                if (temp0_2376 s< 0)
                                    int64_t rax_357 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_357, 7)
                                
                                arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                zmm2[0].o = zx.o(0)
                                arg14 = _mm256_blendv_ps(arg14, zmm0, zmm1)
                                arg15 = _mm256_blendv_ps(arg10, arg6, arg7)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg8[0].o, zx.o(0))
                                var_590 = arg8[0].o
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg8[0].q)
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                                arg10 = var_ac0_1
                                arg12[0].o = var_d40_1[0].o
                                arg8 = var_8c0.32
                            
                            zmm2[0].o = zx.o(0)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                            zmm1[0].o ^= arg9[0].o
                            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                            var_500 = _mm256_maskstore_ps(arg8, _mm256_and_ps(zmm1, zmm0))
                            zmm0 = var_be0
                            zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm5[0].o = zmm0[0].o ^ arg9[0].o
                            arg7[0].o = zx.o(0)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            zmm0[0].o ^= arg9[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm0[0].o &= arg13[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            char temp0_2426 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_2426 == 0)
                                arg13[0].o = data_142fc95c0
                                arg14[0].o = arg13[0].o
                                arg6[0].o = var_d20
                                arg5[0].o = var_ce0
                            else
                                int128_t var_580
                                int64_t rax_359
                                
                                if ((temp0_2426 & 1) != 0)
                                    zmm2 = arg14
                                    zmm1[0].o = var_580
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 0)
                                    
                                    if ((temp0_2426 & 2) != 0)
                                        rax_359 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_359, 1)
                                else
                                    zmm1[0].o = var_580
                                    zmm2 = arg14
                                    
                                    if ((temp0_2426 & 2) != 0)
                                        rax_359 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_359, 1)
                                arg13[0].o = data_142fc95c0
                                arg14[0].o = arg13[0].o
                                
                                if ((temp0_2426 & 4) == 0)
                                    if ((temp0_2426 & 8) != 0)
                                        goto label_1401ef4f1
                                    
                                    goto label_1401f5ce2
                                
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 2)
                                
                                if ((temp0_2426 & 8) != 0)
                                label_1401ef4f1:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_4, 3)
                                    
                                    if ((temp0_2426 & 0x10) == 0)
                                        goto label_1401f5ceb
                                    
                                    goto label_1401ef510
                                
                            label_1401f5ce2:
                                
                                if ((temp0_2426 & 0x10) == 0)
                                label_1401f5ceb:
                                    
                                    if ((temp0_2426 & 0x20) != 0)
                                        goto label_1401ef51e
                                    
                                    goto label_1401f5cf4
                                
                            label_1401ef510:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg15[0].q, 4)
                                
                                if ((temp0_2426 & 0x20) != 0)
                                label_1401ef51e:
                                    int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_6, 5)
                                    
                                    if ((temp0_2426 & 0x40) == 0)
                                        goto label_1401f5cfd
                                    
                                    goto label_1401ef532
                                
                            label_1401f5cf4:
                                
                                if ((temp0_2426 & 0x40) != 0)
                                label_1401ef532:
                                    zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0], 6)
                                    
                                    if (temp0_2426 s< 0)
                                    label_1401ef54a:
                                        zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                        int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_8, 7)
                                else
                                label_1401f5cfd:
                                    
                                    if (temp0_2426 s< 0)
                                        goto label_1401ef54a
                                
                                arg6[0].o = var_d20
                                arg5[0].o = var_ce0
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                var_580 = zmm1[0].o
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                zmm2[0].o = data_143442b40
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                            zmm1[0].o ^= arg9[0].o
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                            zmm0 = _mm256_and_ps(zmm1, zmm0)
                            var_4e0 = _mm256_maskstore_ps(arg8, zmm0)
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, data_1434422d0)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm0[0].o ^= arg6[0].o
                        zmm0[0].o &= arg12[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1[0].o = data_143442ad0
                            zmm2[0].o = zmm1[0].o
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_b60)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm2[0].o &= arg12[0].o
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
                                arg5[0].o = zx.o(0)
                                var_520 = _mm256_maskstore_ps(zmm2, arg5)
                                var_500 = _mm256_maskstore_ps(zmm2, arg5)
                                var_4e0 = _mm256_maskstore_ps(zmm2, arg5)
                            
                            zmm1[0].o ^= arg9[0].o
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, data_143442ad0)
                            zmm2[0].o ^= arg9[0].o
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
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
                                var_520 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_500 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_4e0 = _mm256_maskstore_ps(zmm0, zmm1)
                        
                        arg8[0].o = var_a00
                        arg7[0].o = var_920
                        arg9 = var_700
                
                arg5 = var_660.32
                zmm4 = var_640.32
                zmm5 = var_620.32
                zmm0 = _mm256_sub_ps(var_520, arg5)
                zmm1 = _mm256_sub_ps(var_500, zmm4)
                zmm2 = _mm256_sub_ps(var_4e0, zmm5)
                arg6 = var_b00
                zmm0 = _mm256_mul_ps(arg6, zmm0)
                zmm1 = _mm256_mul_ps(arg6, zmm1)
                zmm2 = _mm256_mul_ps(arg6, zmm2)
                zmm0 = _mm256_add_ps(arg5, zmm0)
                arg5 = var_b80
                var_660.32 = _mm256_maskstore_ps(arg5, zmm0)
                var_640.32 = _mm256_maskstore_ps(arg5, _mm256_add_ps(zmm4, zmm1))
                zmm0 = _mm256_add_ps(zmm5, zmm2)
                var_620.32 = _mm256_maskstore_ps(arg5, zmm0)
        
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg7[0].o, 0x88)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm1 = __vxorps_ymmqq_ymmqq_memqq(_mm256_cmp_ps(zmm1, zmm1, 0xf), var_460_1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            var_660.32 = _mm256_maskstore_ps(zmm1, zmm2)
            var_640.32 = _mm256_maskstore_ps(zmm1, zmm2)
            var_620.32 = _mm256_maskstore_ps(zmm1, zmm2)
        
        zmm0 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
        zmm1[0].o = var_660
        int128_t var_650
        zmm2[0].o = var_650
        arg5[0].o = var_640
        int128_t var_630
        zmm4[0].o = var_630
        zmm5[0].o = var_620
        int128_t var_610
        arg6[0].o = var_610
        arg12[0].o = zx.o(0)
        arg9[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
        arg8[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 0x28)
        int128_t var_240 = arg5[0].o
        arg5[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        int128_t var_230_1 = arg5[0].o
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xa8)
        int128_t var_220_1 = arg5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
        int128_t var_210_1 = zmm1[0].o
        zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
        arg5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg6[0].o, 0x28)
        int128_t var_200_1 = zmm4[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
        int128_t var_1f0_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg6[0].o, 0xa8)
        int128_t var_1e0_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        int128_t var_1d0_1 = zmm1[0].o
        uint64_t j_4 = 0xff
        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        
        do
            uint64_t rcx_45
            uint64_t rflags_1
            
            if (j_4 == 0)
                rcx_45 = 0x40
            else
                rcx_45, rflags_1 = _bit_scan_forward(j_4)
            double var_120[0x4] = zmm0
            zmm1[0].o = (&var_240)[rcx_45]
            *(arg1 + sx.q(*(&var_120 + ((zx.q(rcx_45.d) & 7) << 2))) * 0x30 + 0x20) = zmm1[0].o
            j_4 &= rol.q(-2, rcx_45.b)
        while (j_4 != 0)
        
        r15 = zx.q(r15.d + 8)
    while (r15.d s< i_5)
    
    i_4 = zx.q(arg20)
    
    if (r15.d s< i_4.d)
        goto label_1401f60ca
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
