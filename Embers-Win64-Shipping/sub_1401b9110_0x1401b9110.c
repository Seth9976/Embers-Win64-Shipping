// 函数: sub_1401b9110
// 地址: 0x1401b9110
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
float zmm2[0x8]
zmm2[0].o = arg17
int32_t i_5 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
int64_t var_8f0 = r12
uint64_t i_4
float var_d60[0x8]
float var_d20[0x8]
float var_ce0[0x8]
uint64_t var_be0
int32_t var_b60[0x4]
float var_a60[0x8]
float var_a40[0x8]
int128_t var_a00
int128_t var_9a0
int128_t var_960
float var_8e0[0x8]
uint64_t r9
float zmm0[0x8]
float zmm1[0x8]
float zmm4[0x8]
float zmm5[0x8]

if (i_5 s<= 0)
    r9 = 0
    i_4 = zx.q(arg19)
    
    if (0 s< i_4.d)
    label_1401c017a:
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
        int64_t r9_3 = sx.q(arg6[0])
        int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        int64_t r13_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        arg7 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_142fc9520)
        arg5[0].o = zx.o(*(zx.q(arg7[0]) + arg2 + r9_3))
        int64_t rdx_46 = sx.q(arg6[0])
        uint64_t rsi_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_33 + arg2 + r15_4), 1)
        uint64_t rsi_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_34 + arg2 + r12_2), 2)
        int64_t rax_368 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        uint32_t* rcx_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_45 + arg2 + r13_5), 3)
        arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        zmm4[0].o = zx.o(*(zx.q(arg7[0]) + arg2 + rdx_46))
        int32_t temp0_2572 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
        uint32_t* rsi_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
        int64_t rbx_24 = sx.q(temp0_2572)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_36 + arg2 + rax_368), 1)
        uint32_t* rsi_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_37 + arg2 + rbx_24), 2)
        zmm0[0].o = zx.o(*(arg2 + rdx_46))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rax_368), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rbx_24), 2)
        zmm1[0].o = zx.o(*(arg2 + r9_3))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + r15_4), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + r12_2), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + r13_5), 3)
        float var_aa0_3[0x8] = zmm1
        int64_t rax_370 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + rax_370), 3)
        double var_640_1[0x2] = zmm0[0].o
        uint32_t* rcx_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 3)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_48 + arg2 + rax_370), 3)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm0 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
        float rax_372 = zmm0[0]
        int32_t temp0_2590 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        uint32_t* rdx_47 = arg3
        zmm1[0].o = zx.o(*(rdx_47 + sx.q(rax_372)))
        int64_t rax_375 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_47 + sx.q(temp0_2590)), 1)
        int64_t rcx_52 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_47 + rax_375), 2)
        int64_t rax_377 = sx.q(zmm0[0])
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_47 + rcx_52), 3)
        int32_t temp0_2597 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        arg5[0].o = zx.o(*(rdx_47 + rax_377))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_47 + sx.q(temp0_2597)), 1)
        int64_t rax_380 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_47 + rax_380), 2)
        int64_t rax_382 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_47 + rax_382), 3)
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
            arg9[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            arg15[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
            arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
            zmm0[0].o = 4
            zmm1[0].o = zx.o(arg4)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0])
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            float var_9e0_2[0x8] = arg5
            zmm4 = _mm256_insertf128_ps(arg5, arg8[0].o, 1)
            float var_6c0_3[0x8] = zmm2
            zmm0 = _mm256_and_ps(zmm4, zmm2)
            int64_t r8_9 = sx.q(zmm0[0])
            int32_t temp0_2629 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int64_t r9_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rbx_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int64_t rdi_29 = sx.q(zmm0[0])
            int32_t temp0_2633 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2634 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2635 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = zx.o(*(arg4 + r8_9))
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + sx.q(temp0_2629)), 1)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r9_4), 2)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rbx_26), 3)
            zmm2[0].o = zx.o(*(arg4 + rdi_29))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + sx.q(temp0_2633)), 1)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + sx.q(temp0_2634)), 2)
            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + sx.q(temp0_2635)), 3)
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
            uint64_t r10_10 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 2))
            zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
            uint64_t r11_7 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            uint64_t rsi_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rcx_56 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t r8_10 = zx.q(arg7[0])
            float var_ae0_1[0x8] = zmm5
            zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_1434429e0)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 3)
            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 3)
            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
            zmm5 = _mm256_or_ps(zmm5, arg6)
            zmm4 = _mm256_and_ps(zmm4, zmm5)
            uint64_t rax_388 = zx.q(zmm4[0])
            uint64_t rbx_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            zmm5[0].o = zx.o(*(rax_388 + &data_143442ba0))
            uint64_t rax_390 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_27 + &data_143442ba0), 1)
            uint64_t rbx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_390 + &data_143442ba0), 2)
            uint64_t rax_391 = zx.q(zmm4[0])
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_28 + &data_143442ba0), 3)
            uint64_t rbx_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_391 + &data_143442ba0), 4)
            uint64_t rax_392 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_29 + &data_143442ba0), 5)
            uint64_t rbx_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_392 + &data_143442ba0), 6)
            zmm4[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm4[0].o, *(rbx_30 + &data_143442ba0), 7)
            uint64_t rbx_31 = zx.q(zmm0[0])
            uint64_t rdx_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
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
            char temp0_2691 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o)
            double var_b80_1[0x4] = arg9
            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            int32_t var_c80_1[0x8] = arg14
            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
            zmm4[0].o = zx.o(0)
            float var_ac0_1[0x8] = zmm4
            zmm4[0].o = zx.o(0)
            
            if (temp0_2691 != 0)
                zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
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
            float var_d40_2[0x8] = zmm0
            arg9 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm1[0].o = zx.o(*(rbx_31 + &data_143442b80))
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_40 + &data_143442b80), 1)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_56 + &data_143442b80), 2)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_50 + &data_143442b80), 3)
            zmm1[0].o &= arg8[0].o
            zmm2[0].o = zx.o(*(r8_10 + &data_143442b80))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14_7 + &data_143442b80), 1)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_10 + &data_143442b80), 2)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_7 + &data_143442b80), 3)
            zmm1[0].o &= arg6[0].o
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            float var_b40_4[0x8] = zmm0
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
            var_d20 = arg9
            float var_b00_1[0x8] = arg10
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
                float var_c60_3[0x8]
                
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
                            arg9 = var_d20
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
                    int32_t rax_397
                    rax_397.b = zx.o(0) f>= arg5[0]
                    zmm2[0].o = zx.o(neg.d(rax_397))
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
                    int32_t temp0_2834 = _mm256_movemask_ps(arg13)
                    
                    if (temp0_2834 == 0)
                        var_c60_4 = arg7
                    label_1401c1409:
                        arg9 = var_d20
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
                            goto label_1401c1409
                        
                        var_a00.32 = arg5
                        var_9a0.32 = zmm5
                        var_960 = arg6[0].o
                        zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg14 = zmm2
                        zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        arg5[0].o = __vpmovzxdq_xmmdq_xmmq(arg15[0].q)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                        zmm5[0].o = _mm256_extractf128_ps(var_b40_4[0].o, 1)
                        zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm4[0].o = __vpmovzxdq_xmmdq_xmmq(zmm4[0].q)
                        zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                        var_b40_4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_b40_4[0].o, arg7[0].o)
                        arg11 = var_d40_2
                        arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                        arg7[0].o = _mm256_extractf128_ps(var_b00_1[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b00_1[0].o, zmm2[0].o)
                        arg7[0].o = data_143442a20
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(var_b40_4[0].q)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(var_b40_4[0].o, 0x4e)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                        var_b40_4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_b40_4[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
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
                        arg8[0].o = zmm2[0].o f* arg9[0].d
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
                        int32_t rdx_51 = int.d(arg8[0])
                        int32_t rbx_32 = 0
                        
                        if (rdx_51 s>= 0)
                            rbx_32 = rdx_51
                        
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
                            char rdx_53 = temp0_2834.b
                            
                            if ((rdx_53 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            arg11[0].o = var_d60[0].o
                            
                            if ((rdx_53 & 2) != 0)
                                uint32_t rax_428 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_428, 1)
                            
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg6 = var_ba0_1
                            double temp0_3067[0x2] = __vextractf128_memdq_ymmdq_immb(arg6[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                            
                            if ((rdx_53 & 4) == 0)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_3067)
                                
                                if ((rdx_53 & 8) != 0)
                                    goto label_1401c1b7b
                                
                                goto label_1401c14d2
                            
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm4[0].q), 2)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_3067)
                            
                            if ((rdx_53 & 8) != 0)
                            label_1401c1b7b:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_474 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_474, 3)
                                zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((rdx_53 & 0x10) == 0)
                                    goto label_1401c14e1
                                
                                goto label_1401c1ba6
                            
                        label_1401c14d2:
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            
                            if ((rdx_53 & 0x10) != 0)
                            label_1401c1ba6:
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                
                                if ((rdx_53 & 0x20) != 0)
                                label_1401c1bba:
                                    uint32_t rax_478 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_478, 5)
                                    
                                    if ((rdx_53 & 0x40) == 0)
                                        goto label_1401c14f5
                                    
                                    goto label_1401c1bcb
                            else
                            label_1401c14e1:
                                
                                if ((rdx_53 & 0x20) != 0)
                                    goto label_1401c1bba
                            
                            int32_t var_c00_2[0x4]
                            
                            if ((rdx_53 & 0x40) != 0)
                            label_1401c1bcb:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm2[0].q), 6)
                                var_c00_2 = zmm5[0].o
                                
                                if (temp0_2834.b s< 0)
                                label_1401c1bef:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_482 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_482, 7)
                            else
                            label_1401c14f5:
                                var_c00_2 = zmm5[0].o
                                
                                if (temp0_2834.b s< 0)
                                    goto label_1401c1bef
                            
                            zmm0[0].o &= data_142fc92e0
                            zmm1[0].o = zx.o(0)
                            arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = zx.o(rbx_32)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                            arg14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            float var_8e0_2[0x8] = zmm0
                            int32_t temp0_3080 = _mm256_movemask_ps(_mm256_and_ps(arg13, zmm0))
                            zmm0 = arg7
                            
                            if (temp0_3080 != 0)
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
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d00_2)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a40[0].o)
                                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                        char temp0_3120 = _mm256_movemask_ps(arg12)
                                        
                                        if ((temp0_3120 & 1) != 0)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 0)
                                        
                                        arg12[0].o = var_ce0[0].o
                                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_3120 & 2) == 0)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            arg11[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, 
                                                var_ba0_1[0].o)
                                            
                                            if ((temp0_3120 & 4) != 0)
                                                goto label_1401c1616
                                            
                                            goto label_1401c174e
                                        
                                        uint32_t rax_431 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_431, 1)
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                        arg11[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_ba0_1[0].o)
                                        
                                        if ((temp0_3120 & 4) != 0)
                                        label_1401c1616:
                                            arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg7[0].q), 2)
                                            zmm1[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_3067)
                                            
                                            if ((temp0_3120 & 8) == 0)
                                                goto label_1401c1761
                                            
                                            goto label_1401c163c
                                        
                                    label_1401c174e:
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_3067)
                                        
                                        if ((temp0_3120 & 8) == 0)
                                        label_1401c1761:
                                            arg5 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                            
                                            if ((temp0_3120 & 0x10) != 0)
                                                goto label_1401c1668
                                            
                                            goto label_1401c1771
                                        
                                    label_1401c163c:
                                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                        uint32_t rax_435 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_435, 3)
                                        arg5 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                        
                                        if ((temp0_3120 & 0x10) != 0)
                                        label_1401c1668:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 4)
                                            
                                            if ((temp0_3120 & 0x20) == 0)
                                                goto label_1401c177b
                                            
                                            goto label_1401c167d
                                        
                                    label_1401c1771:
                                        
                                        if ((temp0_3120 & 0x20) == 0)
                                        label_1401c177b:
                                            
                                            if ((temp0_3120 & 0x40) != 0)
                                                goto label_1401c168f
                                            
                                            goto label_1401c1785
                                        
                                    label_1401c167d:
                                        uint32_t rax_439 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_439, 5)
                                        
                                        if ((temp0_3120 & 0x40) == 0)
                                        label_1401c1785:
                                            
                                            if (temp0_3120 s< 0)
                                            label_1401c16ab:
                                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                uint32_t rax_443 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_443, 7)
                                        else
                                        label_1401c168f:
                                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm1[0].q), 6)
                                            
                                            if (temp0_3120 s< 0)
                                                goto label_1401c16ab
                                        
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
                                arg9 = var_d20
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
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg9[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d00_2)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_a40[0].o)
                                        arg5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                        char temp0_3189 = _mm256_movemask_ps(arg8)
                                        
                                        if ((temp0_3189 & 1) == 0)
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            
                                            if ((temp0_3189 & 2) != 0)
                                                goto label_1401c18be
                                            
                                            goto label_1401c19e1
                                        
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg5[0].q), 0)
                                        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_3189 & 2) != 0)
                                        label_1401c18be:
                                            uint16_t rax_451[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_451, 1)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, 
                                                var_ba0_1[0].o)
                                            
                                            if ((temp0_3189 & 4) == 0)
                                                goto label_1401c19f9
                                            
                                            goto label_1401c18de
                                        
                                    label_1401c19e1:
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                        arg8[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_ba0_1[0].o)
                                        
                                        if ((temp0_3189 & 4) == 0)
                                        label_1401c19f9:
                                            zmm1[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_3067)
                                            
                                            if ((temp0_3189 & 8) != 0)
                                                goto label_1401c1904
                                            
                                            goto label_1401c1a0c
                                        
                                    label_1401c18de:
                                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg7[0].q), 2)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_3067)
                                        
                                        if ((temp0_3189 & 8) != 0)
                                        label_1401c1904:
                                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            uint16_t rax_455[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_455, 3)
                                            arg5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                            
                                            if ((temp0_3189 & 0x10) == 0)
                                                goto label_1401c1a1c
                                            
                                            goto label_1401c1930
                                        
                                    label_1401c1a0c:
                                        arg5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                        
                                        if ((temp0_3189 & 0x10) == 0)
                                        label_1401c1a1c:
                                            
                                            if ((temp0_3189 & 0x20) != 0)
                                                goto label_1401c1945
                                            
                                            goto label_1401c1a26
                                        
                                    label_1401c1930:
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*arg5[0].q), 4)
                                        
                                        if ((temp0_3189 & 0x20) != 0)
                                        label_1401c1945:
                                            uint16_t rax_459[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, rax_459, 5)
                                            
                                            if ((temp0_3189 & 0x40) == 0)
                                                goto label_1401c1a30
                                            
                                            goto label_1401c1957
                                        
                                    label_1401c1a26:
                                        
                                        if ((temp0_3189 & 0x40) != 0)
                                        label_1401c1957:
                                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg6[0].o, zx.d(*zmm1[0].q), 6)
                                            
                                            if (temp0_3189 s< 0)
                                            label_1401c1973:
                                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                uint16_t rax_463[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, rax_463, 7)
                                        else
                                        label_1401c1a30:
                                            
                                            if (temp0_3189 s< 0)
                                                goto label_1401c1973
                                        
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
                                arg9 = var_d20
                            
                            arg10 = _mm256_blendv_ps(var_c60_3, zmm0, arg13)
                            var_c60_3[0].o = __vpmovsxdq_xmmdq_xmmq(arg10[0].q)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg10[0].o, 0x4e)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d00_2)
                            var_c60_3[0].o =
                                __vpaddq_xmmdq_xmmdq_memdq(var_c60_3[0].o, var_a40[0].o)
                            zmm1 = _mm256_insertf128_ps(var_c60_3, zmm2[0].o, 1)
                            
                            if ((rdx_53 & 1) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                
                                if ((rdx_53 & 2) != 0)
                                    goto label_1401c6923
                                
                                goto label_1401c20a6
                            
                            zmm2[0].o = zx.o(*zmm1[0].q)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            
                            if ((rdx_53 & 2) != 0)
                            label_1401c6923:
                                uint32_t rax_704 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_704, 1)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ba0_1[0].o)
                                
                                if ((rdx_53 & 4) == 0)
                                    goto label_1401c20bd
                                
                                goto label_1401c6942
                            
                        label_1401c20a6:
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ba0_1[0].o)
                            
                            if ((rdx_53 & 4) == 0)
                            label_1401c20bd:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_3067)
                                
                                if ((rdx_53 & 8) != 0)
                                    goto label_1401c6967
                                
                                goto label_1401c20cf
                            
                        label_1401c6942:
                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0].q), 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_3067)
                            
                            if ((rdx_53 & 8) != 0)
                            label_1401c6967:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_708 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_708, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_53 & 0x10) == 0)
                                    goto label_1401c20de
                                
                                goto label_1401c6992
                            
                        label_1401c20cf:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_53 & 0x10) == 0)
                            label_1401c20de:
                                
                                if ((rdx_53 & 0x20) != 0)
                                    goto label_1401c69a6
                                
                                goto label_1401c20e7
                            
                        label_1401c6992:
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm1[0].q), 4)
                            
                            if ((rdx_53 & 0x20) != 0)
                            label_1401c69a6:
                                uint32_t rax_712 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_712, 5)
                                
                                if ((rdx_53 & 0x40) == 0)
                                    goto label_1401c20f0
                                
                                goto label_1401c69b7
                            
                        label_1401c20e7:
                            
                            if ((rdx_53 & 0x40) != 0)
                            label_1401c69b7:
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg5[0].q), 6)
                                
                                if (temp0_2834.b s< 0)
                                label_1401c69d2:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_716 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_716, 7)
                            else
                            label_1401c20f0:
                                
                                if (temp0_2834.b s< 0)
                                    goto label_1401c69d2
                            
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
                            
                            if ((rdx_53 & 1) == 0)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((rdx_53 & 2) != 0)
                                    goto label_1401c6a10
                                
                                goto label_1401c21ae
                            
                            zmm0[0].o = zx.o(*zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            
                            if ((rdx_53 & 2) != 0)
                            label_1401c6a10:
                                uint32_t rax_720 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_720, 1)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                                
                                if ((rdx_53 & 4) == 0)
                                    goto label_1401c21c5
                                
                                goto label_1401c6a2f
                            
                        label_1401c21ae:
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                            
                            if ((rdx_53 & 4) == 0)
                            label_1401c21c5:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_3067)
                                
                                if ((rdx_53 & 8) != 0)
                                    goto label_1401c6a54
                                
                                goto label_1401c21d7
                            
                        label_1401c6a2f:
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm4[0].q), 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_3067)
                            
                            if ((rdx_53 & 8) != 0)
                            label_1401c6a54:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_724 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_724, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_53 & 0x10) == 0)
                                    goto label_1401c21e6
                                
                                goto label_1401c6a7f
                            
                        label_1401c21d7:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_53 & 0x10) == 0)
                            label_1401c21e6:
                                zmm2[0].o &= data_142fc92e0
                                
                                if ((rdx_53 & 0x20) != 0)
                                    goto label_1401c6a9b
                                
                                goto label_1401c21f7
                            
                        label_1401c6a7f:
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                            zmm2[0].o &= data_142fc92e0
                            
                            if ((rdx_53 & 0x20) == 0)
                            label_1401c21f7:
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_53 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm5[0].q), 6)
                            else
                            label_1401c6a9b:
                                uint32_t rax_728 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_728, 5)
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_53 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm5[0].q), 6)
                            
                            zmm5 = var_9a0.32
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            var_c60_4 = arg6
                            
                            if (temp0_2834.b s< 0)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_506 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_506, 7)
                            
                            arg6[0].o = var_960
                            zmm4 = var_a60
                            zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            zmm0[0].o &= data_142fc92e0
                        else
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            var_8e0[0].o = zmm0[0].o
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            int64_t var_d00_1[0x2] = arg5[0].o
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            char rdx_52 = temp0_2834.b
                            
                            if ((rdx_52 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                            
                            if ((rdx_52 & 2) != 0)
                                int64_t rax_404 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_404, 1)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2 = var_ba0_1
                            double temp0_2901[0x2] = __vextractf128_memdq_ymmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            
                            if ((rdx_52 & 4) == 0)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_2901)
                                
                                if ((rdx_52 & 8) != 0)
                                    goto label_1401c1ae1
                                
                                goto label_1401c0de5
                            
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 2)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_2901)
                            
                            if ((rdx_52 & 8) != 0)
                            label_1401c1ae1:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_466 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_466, 3)
                                zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((rdx_52 & 0x10) == 0)
                                    goto label_1401c0df4
                                
                                goto label_1401c1b06
                            
                        label_1401c0de5:
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            
                            if ((rdx_52 & 0x10) == 0)
                            label_1401c0df4:
                                
                                if ((rdx_52 & 0x20) != 0)
                                    goto label_1401c1b14
                                
                                goto label_1401c0dfd
                            
                        label_1401c1b06:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rdx_52 & 0x20) != 0)
                            label_1401c1b14:
                                int64_t rax_468 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_468, 5)
                                
                                if ((rdx_52 & 0x40) == 0)
                                    goto label_1401c0e06
                                
                                goto label_1401c1b28
                            
                        label_1401c0dfd:
                            
                            if ((rdx_52 & 0x40) != 0)
                            label_1401c1b28:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                
                                if (temp0_2834.b s< 0)
                                label_1401c1b40:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_470 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_470, 7)
                            else
                            label_1401c0e06:
                                
                                if (temp0_2834.b s< 0)
                                    goto label_1401c1b40
                            
                            zmm1[0].o = zx.o(0)
                            arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = zx.o(rbx_32)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                            arg14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            float var_a20_5[0x8] = zmm0
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
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d00_1)
                                        zmm5[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a40[0].o)
                                        arg10 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        char temp0_2956 = _mm256_movemask_ps(arg12)
                                        
                                        if ((temp0_2956 & 1) != 0)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg10[0].q, 0)
                                        
                                        arg6[0].o = var_ce0[0].o
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                        
                                        if ((temp0_2956 & 2) == 0)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                            arg11[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, 
                                                var_ba0_1[0].o)
                                            
                                            if ((temp0_2956 & 4) != 0)
                                                goto label_1401c0f1e
                                            
                                            goto label_1401c1043
                                        
                                        int64_t rax_406 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_406, 1)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                        arg11[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_ba0_1[0].o)
                                        
                                        if ((temp0_2956 & 4) != 0)
                                        label_1401c0f1e:
                                            arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg5[0].q, 2)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_2901)
                                            
                                            if ((temp0_2956 & 8) == 0)
                                                goto label_1401c1056
                                            
                                            goto label_1401c0f41
                                        
                                    label_1401c1043:
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_2901)
                                        
                                        if ((temp0_2956 & 8) == 0)
                                        label_1401c1056:
                                            arg10 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                            
                                            if ((temp0_2956 & 0x10) != 0)
                                                goto label_1401c0f67
                                            
                                            goto label_1401c1066
                                        
                                    label_1401c0f41:
                                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_408 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_408, 3)
                                        arg10 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                        
                                        if ((temp0_2956 & 0x10) != 0)
                                        label_1401c0f67:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg10[0].q, 4)
                                            
                                            if ((temp0_2956 & 0x20) == 0)
                                                goto label_1401c1070
                                            
                                            goto label_1401c0f76
                                        
                                    label_1401c1066:
                                        
                                        if ((temp0_2956 & 0x20) == 0)
                                        label_1401c1070:
                                            
                                            if ((temp0_2956 & 0x40) != 0)
                                                goto label_1401c0f8b
                                            
                                            goto label_1401c107a
                                        
                                    label_1401c0f76:
                                        int64_t rax_410 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_410, 5)
                                        
                                        if ((temp0_2956 & 0x40) == 0)
                                        label_1401c107a:
                                            
                                            if (temp0_2956 s< 0)
                                            label_1401c0fa4:
                                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                                int64_t rax_412 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_412, 7)
                                        else
                                        label_1401c0f8b:
                                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_2956 s< 0)
                                                goto label_1401c0fa4
                                        
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
                                arg9 = var_d20
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
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d00_1)
                                        zmm5[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm5[0].o)
                                        arg8 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                        char temp0_3026 = _mm256_movemask_ps(arg10)
                                        
                                        if ((temp0_3026 & 1) == 0)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                            
                                            if ((temp0_3026 & 2) != 0)
                                                goto label_1401c11ac
                                            
                                            goto label_1401c12c3
                                        
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                            *arg8[0].q, 0)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                        
                                        if ((temp0_3026 & 2) != 0)
                                        label_1401c11ac:
                                            int64_t rax_417 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_417, 1)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg10[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                var_ba0_1[0].o)
                                            
                                            if ((temp0_3026 & 4) == 0)
                                                goto label_1401c12db
                                            
                                            goto label_1401c11cf
                                        
                                    label_1401c12c3:
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        arg10[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_ba0_1[0].o)
                                        
                                        if ((temp0_3026 & 4) == 0)
                                        label_1401c12db:
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_2901)
                                            
                                            if ((temp0_3026 & 8) != 0)
                                                goto label_1401c11f2
                                            
                                            goto label_1401c12ee
                                        
                                    label_1401c11cf:
                                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                            *zmm0[0].q, 2)
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_2901)
                                        
                                        if ((temp0_3026 & 8) != 0)
                                        label_1401c11f2:
                                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                            int64_t rax_419 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_419, 3)
                                            arg8 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                            
                                            if ((temp0_3026 & 0x10) == 0)
                                                goto label_1401c12fe
                                            
                                            goto label_1401c1218
                                        
                                    label_1401c12ee:
                                        arg8 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                        
                                        if ((temp0_3026 & 0x10) == 0)
                                        label_1401c12fe:
                                            
                                            if ((temp0_3026 & 0x20) != 0)
                                                goto label_1401c1227
                                            
                                            goto label_1401c1308
                                        
                                    label_1401c1218:
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                            *arg8[0].q, 4)
                                        
                                        if ((temp0_3026 & 0x20) != 0)
                                        label_1401c1227:
                                            int64_t rax_421 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_421, 5)
                                            
                                            if ((temp0_3026 & 0x40) == 0)
                                                goto label_1401c1312
                                            
                                            goto label_1401c123c
                                        
                                    label_1401c1308:
                                        
                                        if ((temp0_3026 & 0x40) != 0)
                                        label_1401c123c:
                                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_3026 s< 0)
                                            label_1401c1255:
                                                zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                                int64_t rax_423 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm4[0].o, *rax_423, 7)
                                        else
                                        label_1401c1312:
                                            
                                            if (temp0_3026 s< 0)
                                                goto label_1401c1255
                                        
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
                                arg9 = var_d20
                                arg11[0].o = var_d60[0].o
                                arg6 = var_be0.32
                                arg7[0].o = arg12[0].o
                            
                            arg10 = _mm256_blendv_ps(var_c60_3, zmm1, arg13)
                            var_c60_3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_c60_3[0].o, var_c60_3[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_d00_1)
                            arg12 = arg15
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            
                            if ((rdx_52 & 1) != 0)
                                zmm2[0].o = zx.o(*zmm1[0].q)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            arg15 = var_c20_3
                            
                            if ((rdx_52 & 2) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                                
                                if ((rdx_52 & 4) != 0)
                                    goto label_1401c1eda
                                
                                goto label_1401c1d1d
                            
                            int64_t rax_488 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_488, 1)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                            
                            if ((rdx_52 & 4) != 0)
                            label_1401c1eda:
                                zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm5[0].q, 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_2901)
                                
                                if ((rdx_52 & 8) == 0)
                                    goto label_1401c1d2f
                                
                                goto label_1401c1efc
                            
                        label_1401c1d1d:
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_2901)
                            
                            if ((rdx_52 & 8) == 0)
                            label_1401c1d2f:
                                zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                
                                if ((rdx_52 & 0x10) != 0)
                                    goto label_1401c1f21
                                
                                goto label_1401c1d3e
                            
                        label_1401c1efc:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_490 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_490, 3)
                            zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                            
                            if ((rdx_52 & 0x10) != 0)
                            label_1401c1f21:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 4)
                                
                                if ((rdx_52 & 0x20) == 0)
                                    goto label_1401c1d47
                                
                                goto label_1401c1f2f
                            
                        label_1401c1d3e:
                            
                            if ((rdx_52 & 0x20) == 0)
                            label_1401c1d47:
                                
                                if ((rdx_52 & 0x40) != 0)
                                    goto label_1401c1f43
                                
                                goto label_1401c1d50
                            
                        label_1401c1f2f:
                            int64_t rax_492 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_492, 5)
                            
                            if ((rdx_52 & 0x40) == 0)
                            label_1401c1d50:
                                
                                if (temp0_2834.b s< 0)
                                label_1401c1f5b:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_494 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_494, 7)
                            else
                            label_1401c1f43:
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 6)
                                
                                if (temp0_2834.b s< 0)
                                    goto label_1401c1f5b
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            var_c60_3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_c60_3[0].o, zmm1[0].o)
                            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(arg5, var_c60_3[0].o, 1)
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
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d00_1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if ((rdx_52 & 1) == 0)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((rdx_52 & 2) != 0)
                                    goto label_1401c1f90
                                
                                goto label_1401c1e11
                            
                            zmm0[0].o = zx.o(*zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            
                            if ((rdx_52 & 2) != 0)
                            label_1401c1f90:
                                int64_t rax_497 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_497, 1)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                                
                                if ((rdx_52 & 4) == 0)
                                    goto label_1401c1e28
                                
                                goto label_1401c1fb2
                            
                        label_1401c1e11:
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_ba0_1[0].o)
                            
                            if ((rdx_52 & 4) == 0)
                            label_1401c1e28:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_2901)
                                
                                if ((rdx_52 & 8) != 0)
                                    goto label_1401c1fd4
                                
                                goto label_1401c1e3a
                            
                        label_1401c1fb2:
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0].q, 2)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_2901)
                            
                            if ((rdx_52 & 8) != 0)
                            label_1401c1fd4:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_499 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_499, 3)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_52 & 0x10) == 0)
                                    goto label_1401c1e49
                                
                                goto label_1401c1ff9
                            
                        label_1401c1e3a:
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_52 & 0x10) == 0)
                            label_1401c1e49:
                                
                                if ((rdx_52 & 0x20) != 0)
                                    goto label_1401c2007
                                
                                goto label_1401c1e52
                            
                        label_1401c1ff9:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rdx_52 & 0x20) == 0)
                            label_1401c1e52:
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_52 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm5[0].q, 6)
                            else
                            label_1401c2007:
                                int64_t rax_501 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_501, 5)
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_52 & 0x40) != 0)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm5[0].q, 6)
                            
                            zmm5 = var_9a0.32
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            var_c60_4 = arg6
                            
                            if (temp0_2834.b s< 0)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_487 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_487, 7)
                            
                            arg6[0].o = var_960
                            zmm4 = var_a60
                            zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        
                        zmm2[0].o = zx.o(0)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
            float var_ce0_2[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0].q)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0].q)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            float var_d80_3[0x8] = zmm0
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
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
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
            float var_c20_4[0x8] = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            float var_c80_2[0x8] = zmm0
            zmm2 = var_d40_2
            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int64_t var_ca0_3[0x2] = zmm0[0].o
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            float var_a80_2[0x8] = zmm0
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
            float var_b80_2[0x8] = arg10
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
                    arg5[0].o = _mm256_extractf128_ps(var_d80_3[0].o, 1)
                    zmm0 = var_980_1.32
                    arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_d80_3[0].o)
                    arg7[0].o = _mm256_extractf128_ps(var_ba0_2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(var_ce0_2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ce0_2[0].o, var_ba0_2[0].o)
                    zmm4[0].o = _mm256_extractf128_ps(var_c20_4[0].o, 1)
                    arg8 = var_be0.32
                    var_ba0_2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    var_ce0_2[0].o = data_1434426c0
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_ce0_2[0].o)
                    var_ba0_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0_2[0].o, arg5[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_ce0_2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, var_ba0_2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_ce0_2[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    var_ce0_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_ce0_2[0].o)
                    var_ce0_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c20_4[0].o, var_ce0_2[0].o)
                    arg7 = _mm256_insertf128_ps(var_ce0_2, zmm2[0].o, 1)
                    var_ce0_2[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                    arg5 = _mm256_insertf128_ps(var_ce0_2, zmm2[0].o, 1)
                    var_ce0_2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg6[0].o = zx.o(0)
                    zmm2[0].o = _mm_permute_ps(var_ce0_2[0].o, 0x50)
                    var_ce0_2[0].o = _mm_permute_ps(var_ce0_2[0].o, 0xfa)
                    arg8 = _mm256_insertf128_ps(zmm2, var_ce0_2[0].o, 1)
                    zmm0 = _mm256_blendv_ps(arg6, zmm1, arg8)
                    int64_t r8_11 = zmm0[0].q
                    void* rsi_41 = arg4 + r8_11
                    int64_t r9_5 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    void* rdi_36 = arg4 + r9_5
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t r10_11 = zmm0[0].q
                    int64_t r11_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg10 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm0 = _mm256_blendv_ps(arg6, arg10, arg8)
                    zmm1[0].o = *(zmm0[0].q + rsi_41)
                    int64_t rcx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rdx_54 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_59 + rdi_36), 0x10)
                    float* rcx_60 = zmm0[0].q
                    zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm2 = _mm256_blendv_ps(arg6, zmm0, arg8)
                    zmm4[0].o = *(zmm2[0].q + rsi_41)
                    float* rax_510 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    float* rsi_42 = zmm2[0].q
                    float* rbx_33 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2 = _mm256_blendv_ps(arg6, arg7, arg5)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_510 + rdi_36), 0x10)
                    int64_t rax_511 = zmm2[0].q
                    void* rdi_37 = arg4 + r10_11
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_60 + rdi_37), 0x20)
                    int64_t rcx_61 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_42 + rdi_37), 0x20)
                    void* rsi_43 = arg4 + rax_511
                    void* rdi_38 = arg4 + r11_8
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_54 + rdi_38), 0x30)
                    void* rdx_55 = arg4 + rcx_61
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_33 + rdi_38), 0x30)
                    int64_t rdi_39 = zmm2[0].q
                    arg7 = _mm256_blendv_ps(arg6, arg10, arg5)
                    arg10 = var_b80_2
                    int32_t* rbx_34 = arg7[0].q
                    zmm0 = _mm256_blendv_ps(arg6, zmm0, arg5)
                    arg5[0].o = *(rbx_34 + rsi_43)
                    arg6[0].o = *(zmm0[0].q + rsi_43)
                    void* rsi_44 = arg4 + rdi_39
                    float* rbx_36 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_36 + rdx_55), 0x10)
                    float* rbx_37 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_37 + rdx_55), 0x10)
                    int64_t rdx_56 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm2[0].q + rsi_44), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm0[0].q + rsi_44), 0x20)
                    void* rsi_45 = arg4 + rdx_56
                    int64_t rbx_40 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_40 + rsi_45), 0x30)
                    float* rbx_41 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_41 + rsi_45), 0x30)
                    arg5[0].o = *(arg4 + rax_511)
                    arg6[0].o = *(arg4 + r8_11)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r9_5), 0x10)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r10_11), 0x20)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + r11_8), 0x30)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_61), 0x10)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdi_39), 0x20)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdx_56), 0x30)
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
                arg9 = var_d20
                arg8[0].o = var_d60[0].o
                
                if (not(cond:11_1))
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0])
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
                        zmm4[0].o = _mm256_extractf128_ps(var_a80_2[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        arg9 = arg6
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a80_2[0].o, arg5[0].o)
                        arg6 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                        zmm4[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        arg7[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg8 = _mm256_blendv_ps(var_a80_2, arg6, zmm4)
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
                        var_a80_2[0].o = _mm256_extractf128_ps(var_ce0_2[0].o, 1)
                        var_a80_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a80_2[0].o, arg7[0].o)
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
                        var_a80_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a80_2[0].o, arg5[0].o)
                        var_a80_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_a80_2[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ce0_2[0].o, arg14[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, var_a80_2[0].o, 1)
                        arg5[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(arg5, zmm1, zmm4)
                        arg5 = _mm256_blendv_ps(arg5, arg6, zmm5)
                        arg6 = arg9
                        arg7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg12, var_a00.32, zmm5)
                        int64_t r8_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rcx_62 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_57 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_42 = zmm1[0].q
                        zmm1[0].o = *(arg4 + rcx_62)
                        int64_t rcx_63 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rdi_40 = arg5[0].q
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t rsi_46 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rax_514 = arg5[0].q
                        arg5[0].o = *(arg4 + rdi_40)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_63), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_514), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rsi_46), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r8_12), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_42), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_57), 0x30)
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
                    char temp0_3594 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                    
                    if (temp0_3594 == 0)
                        arg14 = var_cc0_2
                        arg15[0].o = var_c00_3
                        arg9 = var_d20
                        arg8[0].o = var_d60[0].o
                    else
                        if ((temp0_3594 & 1) != 0)
                            arg12[0].o = *arg13[0].q
                        
                        arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                        
                        if ((temp0_3594 & 2) != 0)
                            int64_t rax_516 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_516, 0x10)
                            arg12 = _mm256_blend_ps(arg12, zmm0, 0xf)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        var_bc0_2.32 = arg6
                        
                        if ((temp0_3594 & 4) != 0)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *zmm4[0].q, 0x20)
                            arg12 = _mm256_blend_ps(arg12, zmm5, 0xf)
                        
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg14[0].o = data_1434426c0
                        var_a00 = zmm1[0].o
                        
                        if ((temp0_3594 & 8) != 0)
                            int64_t rax_518 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_518, 0x30)
                            arg12 = _mm256_blend_ps(arg12, arg5, 0xf)
                        
                        arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg14[0].o)
                        var_960.32 = zmm1
                        arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                        arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                        zmm1 = arg7
                        
                        if ((temp0_3594 & 0x10) != 0)
                            zmm5[0].o = *arg7[0].q
                            arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 1)
                            arg12 = _mm256_insertf128_ps(arg12, zmm5[0].o, 1)
                        
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                        
                        if ((temp0_3594 & 0x20) != 0)
                            arg7 = zmm1
                            int64_t rax_520 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_520, 0x10)
                            arg12 = _mm256_insertf128_ps(arg12, arg6[0].o, 1)
                            arg14 = var_cc0_2
                        else
                            arg14 = var_cc0_2
                            arg7 = zmm1
                        
                        arg6 = _mm256_insertf128_ps(var_960.32, arg9[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg15, zmm4[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                        
                        if ((temp0_3594 & 0x40) != 0)
                            float* rax_521 = arg5[0].q
                            arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_521, 0x20)
                            arg12 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
                            arg7 = zmm1
                        
                        arg9 = var_d20
                        arg8[0].o = var_d60[0].o
                        arg15[0].o = var_c00_3
                        zmm2[0].o = zx.o(0)
                        zmm1[0].o = var_a00
                        arg13 = _mm256_blendv_ps(arg13, zmm4, zmm0)
                        arg7 = _mm256_blendv_ps(arg7, arg6, zmm5)
                        
                        if (temp0_3594 s< 0)
                            int64_t rax_522 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_522, 0x30)
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
                    char temp0_3648 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3648 == 0)
                        arg10 = var_b80_2
                    else
                        if ((temp0_3648 & 1) == 0)
                            if ((temp0_3648 & 2) != 0)
                                goto label_1401c2d3b
                            
                            goto label_1401c2ce3
                        
                        zmm0[0].o = *arg13[0].q
                        
                        if ((temp0_3648 & 2) != 0)
                        label_1401c2d3b:
                            int64_t rax_524 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_524, 0x10)
                            zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                            arg10 = var_b80_2
                            
                            if ((temp0_3648 & 4) == 0)
                                goto label_1401c2cee
                            
                            goto label_1401c2d5b
                        
                    label_1401c2ce3:
                        arg10 = var_b80_2
                        
                        if ((temp0_3648 & 4) == 0)
                        label_1401c2cee:
                            
                            if ((temp0_3648 & 8) != 0)
                                goto label_1401c2d77
                            
                            goto label_1401c2cf7
                        
                    label_1401c2d5b:
                        zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm2[0].q, 0x20)
                        zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                        
                        if ((temp0_3648 & 8) != 0)
                        label_1401c2d77:
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            int64_t rax_526 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_526, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                            
                            if ((temp0_3648 & 0x10) == 0)
                                goto label_1401c2d00
                            
                            goto label_1401c2d9d
                        
                    label_1401c2cf7:
                        
                        if ((temp0_3648 & 0x10) == 0)
                        label_1401c2d00:
                            
                            if ((temp0_3648 & 0x20) != 0)
                                goto label_1401c2dbc
                            
                            goto label_1401c2d09
                        
                    label_1401c2d9d:
                        zmm2[0].o = zx.o(*arg7[0].q)
                        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        
                        if ((temp0_3648 & 0x20) != 0)
                        label_1401c2dbc:
                            int64_t rax_528 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_528, 0x10)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            
                            if ((temp0_3648 & 0x40) == 0)
                                goto label_1401c2d12
                            
                            goto label_1401c2ddd
                        
                    label_1401c2d09:
                        
                        if ((temp0_3648 & 0x40) != 0)
                        label_1401c2ddd:
                            zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            float* rax_529 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_529, 0x20)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            
                            if (temp0_3648 s< 0)
                            label_1401c2dfe:
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                int64_t rax_530 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_530, 0x30)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        else
                        label_1401c2d12:
                            
                            if (temp0_3648 s< 0)
                                goto label_1401c2dfe
                    
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
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                    int32_t temp0_3711 = _mm256_movemask_ps(zmm0)
                    arg15 = var_d40_2
                    zmm1 = var_b00_1
                    var_9e0_2[0].o = zmm4[0].o
                    
                    if (temp0_3711 != 0)
                        char rdx_60 = temp0_3711.b
                        
                        if ((rdx_60 & 1) == 0)
                            arg8[0].o = var_d00_3
                            arg10 = var_b00_1
                            
                            if ((rdx_60 & 2) != 0)
                                goto label_1401c3bf0
                            
                            goto label_1401c2fc6
                        
                        zmm1 = var_d40_2
                        arg5[0].o = *zmm1[0].q
                        arg8[0].o = var_d00_3
                        arg10 = var_b00_1
                        
                        if ((rdx_60 & 2) != 0)
                        label_1401c3bf0:
                            zmm1 = var_d40_2
                            int64_t rax_555 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_555, 0x10)
                            arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            
                            if ((rdx_60 & 4) == 0)
                                goto label_1401c2fcf
                            
                            goto label_1401c3c11
                        
                    label_1401c2fc6:
                        
                        if ((rdx_60 & 4) == 0)
                        label_1401c2fcf:
                            
                            if ((rdx_60 & 8) != 0)
                                goto label_1401c3c34
                            
                            goto label_1401c2fd8
                        
                    label_1401c3c11:
                        zmm1[0].o = var_ca0_3
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm1[0].q, 0x20)
                        arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                        
                        if ((rdx_60 & 8) != 0)
                        label_1401c3c34:
                            zmm1[0].o = var_ca0_3
                            int64_t rax_557 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_557, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            zmm2[0].o = data_1434426c0
                            
                            if ((rdx_60 & 0x10) == 0)
                                goto label_1401c2fe9
                            
                            goto label_1401c3c65
                        
                    label_1401c2fd8:
                        zmm2[0].o = data_1434426c0
                        
                        if ((rdx_60 & 0x10) != 0)
                        label_1401c3c65:
                            zmm1[0].o = zx.o(*arg10[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm1[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 3)
                            arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d40_2[0].o)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdx_60 & 0x20) != 0)
                            label_1401c2ffa:
                                int64_t rax_533 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_533, 0x10)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        else
                        label_1401c2fe9:
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d40_2[0].o)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdx_60 & 0x20) != 0)
                                goto label_1401c2ffa
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0_3)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        
                        if ((rdx_60 & 0x40) != 0)
                            float* rax_534 = arg8[0].q
                            arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_534, 0x20)
                            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        
                        if (temp0_3711.b s< 0)
                            int64_t rax_535 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_535, 0x30)
                            arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                        zmm1 = _mm256_blendv_ps(var_d40_2, zmm4, zmm0)
                        var_800_3 = _mm256_maskstore_ps(arg12, arg5)
                        
                        if ((rdx_60 & 1) == 0)
                            zmm4 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            if ((rdx_60 & 2) != 0)
                                goto label_1401c3cb3
                            
                            goto label_1401c30b1
                        
                        arg5[0].o = *zmm1[0].q
                        zmm4 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                        
                        if ((rdx_60 & 2) != 0)
                        label_1401c3cb3:
                            int64_t rax_560 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_560, 0x10)
                            arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                            arg10 = _mm256_blendv_ps(arg10, zmm4, arg6)
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((rdx_60 & 4) == 0)
                                goto label_1401c30c6
                            
                            goto label_1401c3cdf
                        
                    label_1401c30b1:
                        arg10 = _mm256_blendv_ps(arg10, zmm4, arg6)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        
                        if ((rdx_60 & 4) == 0)
                        label_1401c30c6:
                            
                            if ((rdx_60 & 8) != 0)
                                goto label_1401c3cf4
                            
                            goto label_1401c30cf
                        
                    label_1401c3cdf:
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm4[0].q, 0x20)
                        arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                        
                        if ((rdx_60 & 8) == 0)
                        label_1401c30cf:
                            
                            if ((rdx_60 & 0x10) != 0)
                            label_1401c30d9:
                                zmm5[0].o = zx.o(*arg10[0].q)
                                arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm5[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm5[0].o, 3)
                                arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        else
                        label_1401c3cf4:
                            int64_t rax_562 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_562, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm5, 0xf)
                            
                            if ((rdx_60 & 0x10) != 0)
                                goto label_1401c30d9
                        
                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                        arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        
                        if ((rdx_60 & 0x20) == 0)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            
                            if ((rdx_60 & 0x40) != 0)
                                goto label_1401c3d3d
                            
                            goto label_1401c3117
                        
                        int64_t rax_563 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_563, 0x10)
                        arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        
                        if ((rdx_60 & 0x40) == 0)
                        label_1401c3117:
                            zmm4 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            
                            if (temp0_3711.b s< 0)
                            label_1401c3d68:
                                int64_t rax_565 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_565, 0x30)
                                arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                        else
                        label_1401c3d3d:
                            float* rax_564 = zmm5[0].q
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_564, 0x20)
                            arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            
                            if (temp0_3711.b s< 0)
                                goto label_1401c3d68
                        
                        arg9 = var_d20
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
                    char temp0_3762 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3762 == 0)
                        zmm0[0].o = data_142fc95c0
                        arg11[0].o = var_d60[0].o
                        zmm1 = var_960.32
                    else
                        var_a60[0].o = arg7[0].o
                        
                        if ((temp0_3762 & 1) == 0)
                            zmm5 = var_a00.32
                            
                            if ((temp0_3762 & 2) != 0)
                                goto label_1401c3da0
                            
                            goto label_1401c31ef
                        
                        arg7[0].o = *arg15[0].q
                        zmm5 = var_a00.32
                        
                        if ((temp0_3762 & 2) != 0)
                        label_1401c3da0:
                            float* rax_567 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_567, 0x10)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            
                            if ((temp0_3762 & 4) == 0)
                                goto label_1401c3203
                            
                            goto label_1401c3dcb
                        
                    label_1401c31ef:
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                        zmm4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        
                        if ((temp0_3762 & 4) != 0)
                        label_1401c3dcb:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm2, 0xf)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3762 & 8) != 0)
                            label_1401c320d:
                                float* rax_537 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_537, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                        else
                        label_1401c3203:
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3762 & 8) != 0)
                                goto label_1401c320d
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        arg9[0].o = data_1434426c0
                        arg8[0].o = arg5[0].o ^ arg12[0].o
                        
                        if ((temp0_3762 & 0x10) != 0)
                            zmm2[0].o = zx.o(*zmm5[0].q)
                            arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 3)
                            arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                        
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                        arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                        zmm0[0].o = zmm1[0].o ^ arg12[0].o
                        
                        if ((temp0_3762 & 0x20) != 0)
                            int64_t rax_539 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_539, 0x10)
                            arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                        
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                        arg10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg11, var_9e0_2[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        
                        if ((temp0_3762 & 0x40) != 0)
                            float* rax_540 = zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_540, 0x20)
                            arg7 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                        
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                        arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                        arg5 = _mm256_insertf128_ps(arg14, arg12[0].o, 1)
                        arg8 = _mm256_insertf128_ps(arg13, arg6[0].o, 1)
                        arg10 = _mm256_and_ps(zmm0, arg10)
                        
                        if (temp0_3762 s< 0)
                            int64_t rbx_45 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rbx_45, 0x30)
                            arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                        arg5 = _mm256_blendv_ps(arg15, arg5, arg8)
                        var_7e0_3 = _mm256_maskstore_ps(arg10, arg7)
                        
                        if ((temp0_3762 & 1) == 0)
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            arg14 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            if ((temp0_3762 & 2) != 0)
                                goto label_1401c3e08
                            
                            goto label_1401c333a
                        
                        arg7[0].o = *arg5[0].q
                        zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        arg14 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                        
                        if ((temp0_3762 & 2) != 0)
                        label_1401c3e08:
                            float* rax_570 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_570, 0x10)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            zmm2 = _mm256_blendv_ps(zmm5, zmm1, arg14)
                            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            
                            if ((temp0_3762 & 4) == 0)
                                goto label_1401c334f
                            
                            goto label_1401c3e34
                        
                    label_1401c333a:
                        zmm2 = _mm256_blendv_ps(zmm5, zmm1, arg14)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        
                        if ((temp0_3762 & 4) == 0)
                        label_1401c334f:
                            
                            if ((temp0_3762 & 8) != 0)
                                goto label_1401c3e49
                            
                            goto label_1401c3358
                        
                    label_1401c3e34:
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                        arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                        
                        if ((temp0_3762 & 8) == 0)
                        label_1401c3358:
                            
                            if ((temp0_3762 & 0x10) != 0)
                            label_1401c3362:
                                zmm0[0].o = zx.o(*zmm2[0].q)
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 3)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        else
                        label_1401c3e49:
                            float* rax_572 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_572, 0x30)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((temp0_3762 & 0x10) != 0)
                                goto label_1401c3362
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                        arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                        
                        if ((temp0_3762 & 0x20) != 0)
                            int64_t rax_542 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_542, 0x10)
                            arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                        
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        
                        if ((temp0_3762 & 0x40) != 0)
                            float* rax_543 = zmm1[0].q
                            arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_543, 0x20)
                            arg7 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        
                        arg9 = var_d20
                        zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg11, zmm4[0].o, 1)
                        
                        if (temp0_3762 s< 0)
                            int64_t rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rcx_66, 0x30)
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
                    char temp0_3836 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_3836 != 0)
                        if ((temp0_3836 & 1) == 0)
                            zmm5 = var_a00.32
                            
                            if ((temp0_3836 & 2) != 0)
                                goto label_1401c3e84
                            
                            goto label_1401c34e5
                        
                        zmm1[0].o = *arg15[0].q
                        zmm5 = var_a00.32
                        
                        if ((temp0_3836 & 2) != 0)
                        label_1401c3e84:
                            int64_t rax_574 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_574, 0x10)
                            zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            
                            if ((temp0_3836 & 4) == 0)
                                goto label_1401c34f9
                            
                            goto label_1401c3eaf
                        
                    label_1401c34e5:
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        
                        if ((temp0_3836 & 4) != 0)
                        label_1401c3eaf:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *arg6[0].q, 0x20)
                            zmm1 = _mm256_blend_ps(zmm1, zmm2, 0xf)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3836 & 8) != 0)
                            label_1401c3503:
                                int64_t rax_544 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_544, 0x30)
                                zmm1 = _mm256_blend_ps(zmm1, zmm2, 0xf)
                        else
                        label_1401c34f9:
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_3836 & 8) != 0)
                                goto label_1401c3503
                        
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg10[0].o = data_1434426c0
                        arg8[0].o = zmm4[0].o ^ data_142d3f800
                        
                        if ((temp0_3836 & 0x10) != 0)
                            zmm0[0].o = zx.o(*zmm5[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 3)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        zmm4[0].o = var_9e0_2[0].o
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg10[0].o)
                        arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                        arg7[0].o ^= data_142d3f800
                        
                        if ((temp0_3836 & 0x20) != 0)
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
                        
                        if ((temp0_3836 & 0x40) != 0)
                            float* rax_547 = arg14[0].q
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_547, 0x20)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
                        arg5 = _mm256_insertf128_ps(arg11, arg5[0].o, 1)
                        arg7 = _mm256_and_ps(arg7, zmm2)
                        
                        if (temp0_3836 s< 0)
                            int64_t rbx_46 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rbx_46, 0x30)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        
                        arg9 = var_d20
                        arg11[0].o = var_d60[0].o
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm4 = _mm256_blendv_ps(arg15, zmm4, arg5)
                        var_7c0_3 = _mm256_maskstore_ps(arg7, zmm1)
                        
                        if ((temp0_3836 & 1) == 0)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                            
                            if ((temp0_3836 & 2) != 0)
                                goto label_1401c3eea
                            
                            goto label_1401c3632
                        
                        zmm1[0].o = *zmm4[0].q
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                        
                        if ((temp0_3836 & 2) == 0)
                        label_1401c3632:
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            
                            if ((temp0_3836 & 4) != 0)
                            label_1401c3641:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *zmm0[0].q, 0x20)
                                zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                        else
                        label_1401c3eea:
                            int64_t rax_577 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_577, 0x10)
                            zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            
                            if ((temp0_3836 & 4) != 0)
                                goto label_1401c3641
                        
                        arg14 = var_cc0_2
                        arg10 = var_b80_2
                        zmm0 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        
                        if ((temp0_3836 & 8) == 0)
                            arg5 = var_a00.32
                            zmm2 = _mm256_blendv_ps(arg5, zmm0, zmm2)
                            
                            if ((temp0_3836 & 0x10) != 0)
                                goto label_1401c3f49
                            
                            goto label_1401c3697
                        
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        int64_t rax_578 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_578, 0x30)
                        zmm1 = _mm256_blend_ps(zmm1, arg5, 0xf)
                        arg5 = var_a00.32
                        zmm2 = _mm256_blendv_ps(arg5, zmm0, zmm2)
                        
                        if ((temp0_3836 & 0x10) != 0)
                        label_1401c3f49:
                            zmm0[0].o = *zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm0[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if ((temp0_3836 & 0x20) == 0)
                                goto label_1401c36a0
                            
                            goto label_1401c3f68
                        
                    label_1401c3697:
                        
                        if ((temp0_3836 & 0x20) == 0)
                        label_1401c36a0:
                            
                            if ((temp0_3836 & 0x40) != 0)
                                goto label_1401c3f89
                            
                            goto label_1401c36b1
                        
                    label_1401c3f68:
                        int64_t rax_580 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_580, 0x10)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        
                        if ((temp0_3836 & 0x40) == 0)
                        label_1401c36b1:
                            
                            if (temp0_3836 s< 0)
                            label_1401c3fb6:
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                int64_t rcx_72 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rcx_72, 0x30)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        else
                        label_1401c3f89:
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            float* rax_581 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_581, 0x20)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if (temp0_3836 s< 0)
                                goto label_1401c3fb6
                        
                        var_820_3 = _mm256_maskstore_ps(arg7, zmm1)
                    
                    arg5 = var_d80_3
                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm2 = var_980_1.32
                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm5 = var_ba0_2
                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(var_ce0_2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ce0_2[0].o, zmm5[0].o)
                    arg8 = var_c20_4
                    var_ce0_2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg7 = var_be0.32
                    zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg6[0].o = data_1434426c0
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ce0_2[0].o, zmm1[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    var_ce0_2[0].o = zx.o(0)
                    zmm1 = _mm256_blendv_ps(var_ce0_2, zmm1, zmm2)
                    zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                    zmm0 =
                        _mm256_blendv_ps(var_ce0_2, zmm0, _mm256_insertf128_ps(zmm2, arg5[0].o, 1))
                    int64_t r8_13 = zmm1[0].q
                    int64_t rcx_68 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rdx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rdi_41 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rsi_47 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rax_549 = zmm0[0].q
                    zmm0[0].o = zx.o(*(arg4 + r8_13))
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rcx_68), 1)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdi_41), 2)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_63), 3)
                    int64_t rcx_69 = zmm1[0].q
                    zmm1[0].o = zx.o(*(arg4 + rax_549))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_47), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_69), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_47), 3)
                    zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                    var_ce0_2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
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
                    var_ce0_2[0].o &= zmm5[0].o
                    arg6[0].o = data_143442440
                    var_ce0_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_ce0_2[0].o, arg6[0].o)
                    zmm0[0].o &= zmm5[0].o
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, var_ce0_2[0].o, 1))
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
                            arg5[0].o = _mm256_extractf128_ps(var_d80_3[0].o, 1)
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
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, var_d80_3[0].o)
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
                            int64_t r8_14 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rcx_70 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t r9_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_48 = zmm1[0].q
                            int64_t rdi_42 = zmm2[0].q
                            int64_t rsi_48 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rax_553 = zmm1[0].q
                            int64_t rdx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = zx.o(*(arg4 + rcx_70))
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r8_14), 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rbx_48), 2)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r9_6), 3)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdi_42), 4)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_48), 5)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rax_553), 6)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdx_64), 7)
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
                        char temp0_4126 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                        var_9e0_2[0].o = arg6[0].o
                        
                        if (temp0_4126 == 0)
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
                            
                            if ((temp0_4126 & 1) != 0)
                                arg5[0].o = zx.o(*arg10[0].q)
                            
                            if ((temp0_4126 & 2) != 0)
                                int64_t rax_584 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_584, 1)
                            
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            
                            if ((temp0_4126 & 4) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 2)
                            
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            int32_t var_a60_2[0x8] = arg12
                            
                            if ((temp0_4126 & 8) != 0)
                                int64_t rax_586 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_586, 3)
                            
                            arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg12[0].o = data_1434426b0
                            
                            if ((temp0_4126 & 0x10) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *var_c80_2[0].q, 4)
                            
                            zmm2[0].o = _mm256_extractf128_ps(var_c80_2[0].o, 1)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c80_2[0].o, arg12[0].o)
                            arg13 = arg10
                            arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg12[0].o)
                            arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                            
                            if ((temp0_4126 & 0x20) != 0)
                                int64_t rax_588 = __vpextrq_gpr64q_xmmdq_immb(var_c80_2[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_588, 5)
                            
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            var_c80_2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                            
                            if ((temp0_4126 & 0x40) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 6)
                            
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            arg6 = _mm256_insertf128_ps(arg14, arg9[0].o, 1)
                            arg12 = _mm256_insertf128_ps(arg15, arg7[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(arg8, var_c80_2[0].o, 1)
                            
                            if (temp0_4126 s< 0)
                                int64_t rax_590 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_590, 7)
                            
                            arg9 = var_d20
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
                        char temp0_4178 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4178 == 0)
                            arg11[0].o = var_d60[0].o
                            arg7[0].o = var_960_1
                        else
                            arg11[0].o = var_d60[0].o
                            
                            if ((temp0_4178 & 1) == 0)
                                if ((temp0_4178 & 2) != 0)
                                    goto label_1401c4cd3
                                
                                goto label_1401c42c8
                            
                            zmm0[0].o = zx.o(*arg13[0].q)
                            
                            if ((temp0_4178 & 2) != 0)
                            label_1401c4cd3:
                                int64_t rax_609 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_609, 1)
                                
                                if ((temp0_4178 & 4) == 0)
                                    goto label_1401c42d1
                                
                                goto label_1401c4ce7
                            
                        label_1401c42c8:
                            
                            if ((temp0_4178 & 4) == 0)
                            label_1401c42d1:
                                
                                if ((temp0_4178 & 8) != 0)
                                    goto label_1401c4d00
                                
                                goto label_1401c42da
                            
                        label_1401c4ce7:
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 2)
                            
                            if ((temp0_4178 & 8) != 0)
                            label_1401c4d00:
                                zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                int64_t rax_611 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_611, 3)
                                arg7[0].o = var_960_1
                                
                                if ((temp0_4178 & 0x10) == 0)
                                    goto label_1401c42ec
                                
                                goto label_1401c4d23
                            
                        label_1401c42da:
                            arg7[0].o = var_960_1
                            
                            if ((temp0_4178 & 0x10) == 0)
                            label_1401c42ec:
                                
                                if ((temp0_4178 & 0x20) != 0)
                                    goto label_1401c4d3f
                                
                                goto label_1401c42f5
                            
                        label_1401c4d23:
                            zmm2 = var_c80_2
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 4)
                            
                            if ((temp0_4178 & 0x20) != 0)
                            label_1401c4d3f:
                                zmm2 = var_c80_2
                                int64_t rax_613 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_613, 5)
                                
                                if ((temp0_4178 & 0x40) == 0)
                                    goto label_1401c42fe
                                
                                goto label_1401c4d5c
                            
                        label_1401c42f5:
                            
                            if ((temp0_4178 & 0x40) != 0)
                            label_1401c4d5c:
                                zmm2 = var_c80_2
                                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                
                                if (temp0_4178 s< 0)
                                label_1401c4d7d:
                                    zmm2 = var_c80_2
                                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    int64_t rax_615 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_615, 7)
                            else
                            label_1401c42fe:
                                
                                if (temp0_4178 s< 0)
                                    goto label_1401c4d7d
                            
                            zmm2[0].o = zx.o(0)
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                float var_b40_5[0x8] = zmm4
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                float var_b80_3[0x8] = zmm5
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
                char temp0_4269 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                arg15[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                var_d60[0].o = arg13[0].o
                float var_9e0_3[0x8] = arg7
                float var_620[0x8]
                float var_600[0x8]
                float var_5e0[0x8]
                
                if (temp0_4269 != 0)
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
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                        int64_t r8_15 = zmm0[0].q
                        void* rsi_49 = arg4 + r8_15
                        int64_t r9_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rdi_43 = arg4 + r9_7
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r10_12 = zmm0[0].q
                        int64_t r11_9 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm0 = _mm256_blendv_ps(arg9, zmm1, arg11)
                        zmm2[0].o = *(zmm0[0].q + rsi_49)
                        float* rcx_74 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        float* rdx_67 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_74 + rdi_43), 0x10)
                        float* rcx_75 = zmm0[0].q
                        zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg5 = _mm256_blendv_ps(arg9, zmm0, arg11)
                        arg11[0].o = var_d00_3
                        zmm5[0].o = *(arg5[0].q + rsi_49)
                        float* rax_598 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        float* rsi_50 = arg5[0].q
                        float* rbx_51 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg9, arg10, zmm4)
                        arg10 = var_b00_1
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_598 + rdi_43), 0x10)
                        int64_t rax_599 = arg5[0].q
                        void* rdi_44 = arg4 + r10_12
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_75 + rdi_44), 0x20)
                        int64_t rcx_76 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_50 + rdi_44), 0x20)
                        void* rsi_51 = arg4 + rax_599
                        void* rdi_45 = arg4 + r11_9
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_67 + rdi_45), 0x30)
                        void* rdx_68 = arg4 + rcx_76
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_51 + rdi_45), 0x30)
                        int64_t rdi_46 = arg5[0].q
                        zmm1 = _mm256_blendv_ps(arg9, zmm1, zmm4)
                        int32_t* rbx_52 = zmm1[0].q
                        zmm0 = _mm256_blendv_ps(arg9, zmm0, zmm4)
                        arg9 = var_d20
                        zmm4[0].o = *(rbx_52 + rsi_51)
                        arg6[0].o = *(zmm0[0].q + rsi_51)
                        void* rsi_52 = arg4 + rdi_46
                        float* rbx_54 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_54 + rdx_68), 0x10)
                        float* rbx_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_55 + rdx_68), 0x10)
                        int64_t rdx_69 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(zmm1[0].q + rsi_52), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(zmm0[0].q + rsi_52), 0x20)
                        arg6 = arg15
                        arg15[0].o = var_c20_4[0].o
                        void* rsi_53 = arg4 + rdx_69
                        float* rbx_58 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_58 + rsi_53), 0x30)
                        float* rbx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_59 + rsi_53), 0x30)
                        arg5[0].o = *(arg4 + rax_599)
                        zmm4[0].o = *(arg4 + r8_15)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r9_7), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r10_12), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r11_9), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_76), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdi_46), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdx_69), 0x30)
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
                            int64_t r8_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            int64_t rcx_77 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rdx_70 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            int64_t rbx_60 = zmm0[0].q
                            zmm0[0].o = *(arg4 + rcx_77)
                            int64_t rcx_78 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rdi_47 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rsi_54 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rax_602 = zmm1[0].q
                            zmm1[0].o = *(arg4 + rdi_47)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_78), 0x10)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(arg4 + rax_602), 0x20)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_54), 0x30)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r8_16), 0x10)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rbx_60), 0x20)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_70), 0x30)
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
                        char temp0_4433 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_4433 == 0)
                            arg6 = var_9a0_1.32
                        else
                            if ((temp0_4433 & 1) != 0)
                                arg10[0].o = *arg11[0]
                            
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm5 = var_c00_3.32
                            
                            if ((temp0_4433 & 2) != 0)
                                float* rax_604 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_604, 0x10)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            int128_t var_b60_3 = zmm2[0].o
                            
                            if ((temp0_4433 & 4) != 0)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *zmm1[0].q, 0x20)
                                arg10 = _mm256_blend_ps(arg10, zmm4, 0xf)
                            
                            arg15[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            arg6[0].o = data_1434426c0
                            double var_a80_3[0x4] = arg8
                            
                            if ((temp0_4433 & 8) != 0)
                                float* rax_606 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_606, 0x30)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x50)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x50)
                            arg9 = arg11
                            
                            if ((temp0_4433 & 0x10) != 0)
                                arg11 = zmm5
                                arg5[0].o = zx.o(*zmm5[0].q)
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
                            
                            if ((temp0_4433 & 0x20) != 0)
                                int64_t rax_617 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_617, 0x10)
                                arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            
                            arg15[0].o = var_c20_4[0].o
                            arg5 = _mm256_insertf128_ps(arg13, arg5[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            
                            if ((temp0_4433 & 0x40) != 0)
                                float* rax_618 = zmm2[0].q
                                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg6[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_618, 0x20)
                                arg10 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                            
                            arg13[0].o = var_d60[0].o
                            arg6 = var_9a0_1.32
                            arg8 = var_a80_3
                            zmm4[0].o = zx.o(0)
                            arg9 = _mm256_blendv_ps(arg9, zmm0, zmm1)
                            var_c00_3.32 = _mm256_blendv_ps(arg11, arg5, zmm5)
                            
                            if (temp0_4433 s< 0)
                                int64_t rax_619 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_619, 0x30)
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
                        char temp0_4498 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4498 == 0)
                            arg10 = var_b00_1
                            arg11[0].o = var_d00_3
                        else
                            arg10 = var_b00_1
                            
                            if ((temp0_4498 & 1) == 0)
                                zmm4 = var_c00_3.32
                                
                                if ((temp0_4498 & 2) != 0)
                                    goto label_1401c4f81
                                
                                goto label_1401c4f14
                            
                            zmm2[0].o = *arg11[0]
                            zmm4 = var_c00_3.32
                            
                            if ((temp0_4498 & 2) != 0)
                            label_1401c4f81:
                                int64_t rax_621 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_621, 0x10)
                                zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                
                                if ((temp0_4498 & 4) == 0)
                                    goto label_1401c4f19
                                
                                goto label_1401c4f98
                            
                        label_1401c4f14:
                            
                            if ((temp0_4498 & 4) == 0)
                            label_1401c4f19:
                                
                                if ((temp0_4498 & 8) != 0)
                                    goto label_1401c4fb8
                                
                                goto label_1401c4f22
                            
                        label_1401c4f98:
                            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *zmm0[0].q, 0x20)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            
                            if ((temp0_4498 & 8) != 0)
                            label_1401c4fb8:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                int64_t rax_623 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_623, 0x30)
                                zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                arg11[0].o = var_d00_3
                                
                                if ((temp0_4498 & 0x10) == 0)
                                    goto label_1401c4f34
                                
                                goto label_1401c4fe7
                            
                        label_1401c4f22:
                            arg11[0].o = var_d00_3
                            
                            if ((temp0_4498 & 0x10) == 0)
                            label_1401c4f34:
                                
                                if ((temp0_4498 & 0x20) != 0)
                                    goto label_1401c5006
                                
                                goto label_1401c4f3d
                            
                        label_1401c4fe7:
                            zmm0[0].o = zx.o(*zmm4[0].q)
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 3)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            
                            if ((temp0_4498 & 0x20) != 0)
                            label_1401c5006:
                                int64_t rax_625 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_625, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((temp0_4498 & 0x40) == 0)
                                    goto label_1401c4f46
                                
                                goto label_1401c5027
                            
                        label_1401c4f3d:
                            
                            if ((temp0_4498 & 0x40) != 0)
                            label_1401c5027:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                float* rax_626 = zmm0[0].q
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_626, 0x20)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if (temp0_4498 s< 0)
                                label_1401c5048:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rax_627 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_627, 0x30)
                                    zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            else
                            label_1401c4f46:
                                
                                if (temp0_4498 s< 0)
                                    goto label_1401c5048
                        
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm1[0].o ^= arg5[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        zmm0[0].o ^= arg5[0].o
                        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), zmm2)
                        var_5e0 = _mm256_maskstore_ps(arg8, zmm0)
                        arg9 = var_d20
                
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
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                        int32_t temp0_4555 = _mm256_movemask_ps(zmm5)
                        float var_c20_5[0x8] = arg5
                        
                        if (temp0_4555 == 0)
                            zmm2[0].o = data_142fc95c0
                        else
                            char rdx_73 = temp0_4555.b
                            
                            if ((rdx_73 & 1) == 0)
                                if ((rdx_73 & 2) != 0)
                                    goto label_1401c5daf
                                
                                goto label_1401c51c0
                            
                            zmm0 = var_d40_2
                            arg7[0].o = *zmm0[0].q
                            
                            if ((rdx_73 & 2) != 0)
                            label_1401c5daf:
                                zmm0 = var_d40_2
                                float* rax_655 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_655, 0x10)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                
                                if ((rdx_73 & 4) == 0)
                                    goto label_1401c51c9
                                
                                goto label_1401c5dd0
                            
                        label_1401c51c0:
                            
                            if ((rdx_73 & 4) == 0)
                            label_1401c51c9:
                                
                                if ((rdx_73 & 8) != 0)
                                    goto label_1401c5df3
                                
                                goto label_1401c51d2
                            
                        label_1401c5dd0:
                            zmm0[0].o = var_ca0_3
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm0[0].q, 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((rdx_73 & 8) != 0)
                            label_1401c5df3:
                                zmm0[0].o = var_ca0_3
                                float* rax_657 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_657, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                arg5[0].o = data_1434426c0
                                
                                if ((rdx_73 & 0x10) == 0)
                                    goto label_1401c51e3
                                
                                goto label_1401c5e24
                            
                        label_1401c51d2:
                            arg5[0].o = data_1434426c0
                            
                            if ((rdx_73 & 0x10) != 0)
                            label_1401c5e24:
                                zmm0[0].o = *arg10[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40_2[0].o)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                
                                if ((rdx_73 & 0x20) != 0)
                                label_1401c51f4:
                                    int64_t rax_630 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_630, 0x10)
                                    arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            else
                            label_1401c51e3:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40_2[0].o)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                
                                if ((rdx_73 & 0x20) != 0)
                                    goto label_1401c51f4
                            
                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ca0_3)
                            zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            
                            if ((rdx_73 & 0x40) != 0)
                                double rax_631 = arg11[0]
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_631, 0x20)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            arg9[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                            arg13 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            
                            if (temp0_4555.b s< 0)
                                int64_t rax_632 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_632, 0x30)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                            arg6 = _mm256_blendv_ps(var_d40_2, zmm1, arg13)
                            var_800_4 = _mm256_maskstore_ps(arg14, arg7)
                            
                            if ((rdx_73 & 1) == 0)
                                zmm0 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                                arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                
                                if ((rdx_73 & 2) != 0)
                                    goto label_1401c5e72
                                
                                goto label_1401c52ad
                            
                            arg7[0].o = *arg6[0].q
                            zmm0 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                            arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                            
                            if ((rdx_73 & 2) != 0)
                            label_1401c5e72:
                                float* rax_660 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_660, 0x10)
                                arg7 = _mm256_blend_ps(arg7, zmm1, 0xf)
                                arg10 = _mm256_blendv_ps(arg10, zmm0, arg9)
                                zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                
                                if ((rdx_73 & 4) == 0)
                                    goto label_1401c52c2
                                
                                goto label_1401c5e9e
                            
                        label_1401c52ad:
                            arg10 = _mm256_blendv_ps(arg10, zmm0, arg9)
                            zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            
                            if ((rdx_73 & 4) == 0)
                            label_1401c52c2:
                                
                                if ((rdx_73 & 8) != 0)
                                    goto label_1401c5eb3
                                
                                goto label_1401c52cb
                            
                        label_1401c5e9e:
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *zmm4[0].q, 0x20)
                            arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                            
                            if ((rdx_73 & 8) == 0)
                            label_1401c52cb:
                                
                                if ((rdx_73 & 0x10) != 0)
                                label_1401c52d5:
                                    zmm0[0].o = *arg10[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            else
                            label_1401c5eb3:
                                float* rax_662 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_662, 0x30)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                
                                if ((rdx_73 & 0x10) != 0)
                                    goto label_1401c52d5
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            
                            if ((rdx_73 & 0x20) != 0)
                                int64_t rax_634 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_634, 0x10)
                                arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                            
                            if ((rdx_73 & 0x40) != 0)
                                float* rax_635 = zmm0[0].q
                                zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_635, 0x20)
                                arg7 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            
                            zmm2[0].o = data_142fc95c0
                            zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg11, arg5[0].o, 1)
                            
                            if (temp0_4555.b s< 0)
                                int64_t rax_636 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_636, 0x30)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            
                            var_d40_2 = _mm256_blendv_ps(arg6, arg5, arg13)
                            arg10 = _mm256_blendv_ps(arg10, zmm1, arg9)
                            var_860_4 = _mm256_maskstore_ps(arg14, arg7)
                            arg9 = var_d20
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
                        char temp0_4615 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4615 != 0)
                            arg12 = var_d40_2
                            
                            if ((temp0_4615 & 1) == 0)
                                var_b00_1[0].o = zmm4[0].o
                                
                                if ((temp0_4615 & 2) != 0)
                                    goto label_1401c5eee
                                
                                goto label_1401c5422
                            
                            arg9[0].o = *arg12[0].q
                            var_b00_1[0].o = zmm4[0].o
                            
                            if ((temp0_4615 & 2) != 0)
                            label_1401c5eee:
                                int64_t rax_664 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_664, 0x10)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                
                                if ((temp0_4615 & 4) == 0)
                                    goto label_1401c5436
                                
                                goto label_1401c5f19
                            
                        label_1401c5422:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            
                            if ((temp0_4615 & 4) != 0)
                            label_1401c5f19:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm4[0].q, 0x20)
                                arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4615 & 8) != 0)
                                label_1401c5440:
                                    int64_t rax_637 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_637, 0x30)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            else
                            label_1401c5436:
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4615 & 8) != 0)
                                    goto label_1401c5440
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg11[0].o = data_1434426c0
                            arg13[0].o = arg7[0].o ^ zmm5[0].o
                            arg14 = arg10
                            
                            if ((temp0_4615 & 0x10) != 0)
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
                            
                            if ((temp0_4615 & 0x20) != 0)
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
                            
                            if ((temp0_4615 & 0x40) != 0)
                                float* rax_640 = zmm0[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_640, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg11[0].o)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                            zmm2 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                            arg6 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
                            arg5 = _mm256_and_ps(arg13, arg5)
                            
                            if (temp0_4615 s< 0)
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
                            
                            if ((temp0_4615 & 1) == 0)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg13 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                
                                if ((temp0_4615 & 2) != 0)
                                    goto label_1401c5f56
                                
                                goto label_1401c5578
                            
                            arg9[0].o = *arg10[0].q
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            arg13 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            
                            if ((temp0_4615 & 2) != 0)
                            label_1401c5f56:
                                int64_t rax_667 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_667, 0x10)
                                arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                arg12 = _mm256_blendv_ps(arg14, zmm0, arg13)
                                zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                
                                if ((temp0_4615 & 4) == 0)
                                    goto label_1401c558d
                                
                                goto label_1401c5f82
                            
                        label_1401c5578:
                            arg12 = _mm256_blendv_ps(arg14, zmm0, arg13)
                            zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            
                            if ((temp0_4615 & 4) == 0)
                            label_1401c558d:
                                
                                if ((temp0_4615 & 8) != 0)
                                    goto label_1401c5f97
                                
                                goto label_1401c5596
                            
                        label_1401c5f82:
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm4[0].q, 0x20)
                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            
                            if ((temp0_4615 & 8) == 0)
                            label_1401c5596:
                                
                                if ((temp0_4615 & 0x10) != 0)
                                label_1401c55a0:
                                    zmm0[0].o = *arg12[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            else
                            label_1401c5f97:
                                int64_t rax_669 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_669, 0x30)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                
                                if ((temp0_4615 & 0x10) != 0)
                                    goto label_1401c55a0
                            
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg11[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                            
                            if ((temp0_4615 & 0x20) != 0)
                                int64_t rax_642 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_642, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                            
                            if ((temp0_4615 & 0x40) != 0)
                                float* rax_643 = zmm1[0].q
                                arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_643, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                            
                            if (temp0_4615 s< 0)
                                int64_t rcx_81 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rcx_81, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm4[0].o = var_b00_1[0].o
                            zmm1 = _mm256_blendv_ps(arg10, zmm2, arg6)
                            var_d40_2 = zmm1
                            arg10 = _mm256_blendv_ps(arg12, zmm0, arg13)
                            var_840_4 = _mm256_maskstore_ps(arg5, arg9)
                            arg9 = var_d20
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
                        char temp0_4690 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        arg14 = var_cc0_2
                        
                        if (temp0_4690 != 0)
                            arg12 = var_d40_2
                            
                            if ((temp0_4690 & 1) == 0)
                                if ((temp0_4690 & 2) != 0)
                                    goto label_1401c5fc9
                                
                                goto label_1401c56ef
                            
                            arg5[0].o = *arg12[0].q
                            
                            if ((temp0_4690 & 2) != 0)
                            label_1401c5fc9:
                                int64_t rax_671 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_671, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                                arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                
                                if ((temp0_4690 & 4) == 0)
                                    goto label_1401c5703
                                
                                goto label_1401c5ff4
                            
                        label_1401c56ef:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            
                            if ((temp0_4690 & 4) != 0)
                            label_1401c5ff4:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *arg6[0].q, 0x20)
                                arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4690 & 8) != 0)
                                label_1401c570d:
                                    int64_t rax_644 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_644, 0x30)
                                    arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                            else
                            label_1401c5703:
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_4690 & 8) != 0)
                                    goto label_1401c570d
                            
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg9[0].o = data_1434426c0
                            arg8[0].o = zmm4[0].o ^ data_142d3f800
                            arg13 = arg10
                            
                            if ((temp0_4690 & 0x10) != 0)
                                zmm1[0].o = *arg10[0].q
                                zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            arg7[0].o ^= data_142d3f800
                            
                            if ((temp0_4690 & 0x20) != 0)
                                int64_t rax_646 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_646, 0x10)
                                arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            
                            zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            arg13[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm2, arg15[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                            
                            if ((temp0_4690 & 0x40) != 0)
                                float* rax_647 = arg13[0].q
                                arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_647, 0x20)
                                arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                            
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm5 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                            zmm2 = _mm256_and_ps(zmm2, zmm0)
                            
                            if (temp0_4690 s< 0)
                                int64_t rbx_64 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rbx_64, 0x30)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            
                            arg13[0].o = var_d60[0].o
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg6 = var_d40_2
                            zmm5 = _mm256_blendv_ps(arg6, zmm5, zmm1)
                            var_7c0_4 = _mm256_maskstore_ps(zmm2, arg5)
                            
                            if ((temp0_4690 & 1) == 0)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                
                                if ((temp0_4690 & 2) != 0)
                                    goto label_1401c602f
                                
                                goto label_1401c583e
                            
                            arg5[0].o = *zmm5[0].q
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            
                            if ((temp0_4690 & 2) == 0)
                            label_1401c583e:
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_4690 & 4) != 0)
                                label_1401c584d:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                                        *zmm0[0].q, 0x20)
                                    arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                            else
                            label_1401c602f:
                                int64_t rax_674 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_674, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg9[0].o)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_4690 & 4) != 0)
                                    goto label_1401c584d
                            
                            arg9 = var_d20
                            zmm0 = _mm256_insertf128_ps(arg6, arg13[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            
                            if ((temp0_4690 & 8) == 0)
                                zmm4 = _mm256_blendv_ps(arg13, zmm0, zmm1)
                                
                                if ((temp0_4690 & 0x10) != 0)
                                    goto label_1401c6085
                                
                                goto label_1401c5891
                            
                            arg13[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            int64_t rax_675 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            arg13[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_675, 0x30)
                            arg5 = _mm256_blend_ps(arg5, arg13, 0xf)
                            zmm4 = _mm256_blendv_ps(arg13, zmm0, zmm1)
                            
                            if ((temp0_4690 & 0x10) != 0)
                            label_1401c6085:
                                zmm0[0].o = *zmm4[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                
                                if ((temp0_4690 & 0x20) == 0)
                                    goto label_1401c589a
                                
                                goto label_1401c60a4
                            
                        label_1401c5891:
                            
                            if ((temp0_4690 & 0x20) == 0)
                            label_1401c589a:
                                
                                if ((temp0_4690 & 0x40) != 0)
                                    goto label_1401c60c5
                                
                                goto label_1401c58ab
                            
                        label_1401c60a4:
                            int64_t rax_677 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_677, 0x10)
                            arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            
                            if ((temp0_4690 & 0x40) == 0)
                            label_1401c58ab:
                                
                                if (temp0_4690 s< 0)
                                label_1401c60f2:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rcx_87 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rcx_87, 0x30)
                                    arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                            else
                            label_1401c60c5:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                float* rax_678 = zmm0[0].q
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_678, 0x20)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                
                                if (temp0_4690 s< 0)
                                    goto label_1401c60f2
                            
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
                        zmm5[0].o = _mm256_extractf128_ps(var_b40_5[0].o, 1)
                        arg6[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b40_5[0].o, zmm1[0].o)
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
                        int64_t r8_17 = zmm1[0].q
                        int64_t rcx_83 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_76 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_65 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_48 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_55 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rax_649 = zmm0[0].q
                        zmm0[0].o = zx.o(*(arg4 + r8_17))
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rcx_83), 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdi_48), 2)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_76), 3)
                        int64_t rcx_84 = zmm1[0].q
                        zmm1[0].o = zx.o(*(arg4 + rax_649))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rbx_65), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_84), 2)
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
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(var_ae0_1[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            var_ae0_1[0].o = _mm256_extractf128_ps(var_ae0_1[0].o, 1)
                            var_ae0_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_ae0_1[0].o, 0x1f)
                            var_ae0_1[0].o = __vpsrad_xmmdq_xmmdq_immb(var_ae0_1[0].o, 0x1f)
                            zmm2 = _mm256_insertf128_ps(zmm0, var_ae0_1[0].o, 1)
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
                                arg6[0].o = _mm256_extractf128_ps(var_ce0_2[0].o, 1)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_c80_2[0].o)
                                arg7[0].o =
                                    __vpaddq_xmmdq_xmmdq_memdq(var_ce0_2[0].o, var_ba0_2[0].o)
                                arg8[0].o = arg14[0].o
                                arg14 = arg15
                                arg12 = var_b80_3
                                zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                var_d80_3 = zmm2
                                zmm2[0].o = _mm256_extractf128_ps(var_b40_5[0].o, 1)
                                var_ce0_2[0].o = data_1434426c0
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_ce0_2[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_ce0_2[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_b40_5[0].o, arg5[0].o)
                                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_ce0_2[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                var_ce0_2[0].o =
                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_ce0_2[0].o)
                                var_ce0_2[0].o =
                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, var_ce0_2[0].o)
                                arg15 = arg14
                                arg14[0].o = arg8[0].o
                                zmm0 = _mm256_insertf128_ps(var_ce0_2, arg5[0].o, 1)
                                arg5[0].o = zx.o(0)
                                zmm0 = _mm256_blendv_ps(arg5, zmm0, arg9)
                                zmm1 = _mm256_blendv_ps(arg5, zmm2, zmm1)
                                int64_t r8_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rcx_85 = zmm0[0].q
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t r9_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rbx_66 = zmm0[0].q
                                int64_t rdi_49 = zmm1[0].q
                                int64_t rsi_56 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_653 = zmm0[0].q
                                int64_t rdx_77 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(arg4 + rcx_85))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_18), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_66), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r9_8), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_49), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_56), 5)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_653), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_77), 7)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                            char temp0_4962 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_4962 == 0)
                                arg9 = var_d20
                                arg8 = var_d00_3.32
                                zmm5[0].o = var_d40_2[0].o
                            else
                                if ((temp0_4962 & 1) != 0)
                                    arg7[0].o = zx.o(*arg11[0])
                                
                                if ((temp0_4962 & 2) != 0)
                                    uint16_t* rax_681 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_681, 1)
                                
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                
                                if ((temp0_4962 & 4) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm1[0].q, 2)
                                
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                var_d80_3[0].o = arg5[0].o
                                arg8 = arg11
                                
                                if ((temp0_4962 & 8) != 0)
                                    uint16_t* rax_683 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_683, 3)
                                
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                arg11[0].o = data_1434426b0
                                var_bc0_3.32 = arg15
                                
                                if ((temp0_4962 & 0x10) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg10[0].q, 4)
                                
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                                arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
                                arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x50)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                
                                if ((temp0_4962 & 0x20) != 0)
                                    zmm5 = arg10
                                    uint16_t* rax_685 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_685, 5)
                                else
                                    zmm5 = arg10
                                
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xfa)
                                arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                
                                if ((temp0_4962 & 0x40) != 0)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 6)
                                
                                arg11 = arg8
                                arg8 = var_d00_3.32
                                zmm2 = _mm256_insertf128_ps(arg15, arg13[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(arg6, arg10[0].o, 1)
                                
                                if (temp0_4962 s< 0)
                                    uint16_t* rax_687 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_687, 7)
                                
                                arg9 = var_d20
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
                            char temp0_5011 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_5011 == 0)
                                arg7[0].o = data_1434422d0
                                arg6[0].o = var_b00_1[0].o
                            else
                                if ((temp0_5011 & 1) == 0)
                                    if ((temp0_5011 & 2) != 0)
                                        goto label_1401c6851
                                    
                                    goto label_1401c63a9
                                
                                zmm2[0].o = zx.o(*arg11[0])
                                
                                if ((temp0_5011 & 2) != 0)
                                label_1401c6851:
                                    int64_t rax_694 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_694, 1)
                                    
                                    if ((temp0_5011 & 4) == 0)
                                        goto label_1401c63b2
                                    
                                    goto label_1401c6865
                                
                            label_1401c63a9:
                                
                                if ((temp0_5011 & 4) == 0)
                                label_1401c63b2:
                                    
                                    if ((temp0_5011 & 8) != 0)
                                        goto label_1401c687e
                                    
                                    goto label_1401c63bb
                                
                            label_1401c6865:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_5011 & 8) != 0)
                                label_1401c687e:
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    int64_t rax_696 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_696, 3)
                                    arg7[0].o = data_1434422d0
                                    arg6[0].o = var_b00_1[0].o
                                    
                                    if ((temp0_5011 & 0x10) == 0)
                                        goto label_1401c63d5
                                    
                                    goto label_1401c68ae
                                
                            label_1401c63bb:
                                arg7[0].o = data_1434422d0
                                arg6[0].o = var_b00_1[0].o
                                
                                if ((temp0_5011 & 0x10) == 0)
                                label_1401c63d5:
                                    
                                    if ((temp0_5011 & 0x20) != 0)
                                        goto label_1401c68bc
                                    
                                    goto label_1401c63de
                                
                            label_1401c68ae:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                                
                                if ((temp0_5011 & 0x20) != 0)
                                label_1401c68bc:
                                    int64_t rax_698 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_698, 5)
                                    
                                    if ((temp0_5011 & 0x40) == 0)
                                        goto label_1401c63e7
                                    
                                    goto label_1401c68d0
                                
                            label_1401c63de:
                                
                                if ((temp0_5011 & 0x40) != 0)
                                label_1401c68d0:
                                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_5011 s< 0)
                                    label_1401c68e8:
                                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_700 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_700, 7)
                                else
                                label_1401c63e7:
                                    
                                    if (temp0_5011 s< 0)
                                        goto label_1401c68e8
                                
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
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
            uint64_t rcx_88
            uint64_t rflags_2
            
            if (i_4 == 0)
                rcx_88 = 0x40
            else
                rcx_88, rflags_2 = _bit_scan_forward(i_4)
            float var_140[0x8] = zmm0
            zmm1[0].o = (&var_2a0)[rcx_88]
            *(var_8f0 + sx.q(var_140[zx.q(rcx_88.d) & 7]) * 0x30 + 0x10) = zmm1[0].o
            i_4 &= rol.q(-2, rcx_88.b)
        while (i_4 != 0)
else
    float* r15_1 = arg4
    zmm0[0].o = 4
    zmm1[0].o = zx.o(arg4)
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    float var_160_1[0x8] = zmm0
    zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    float var_440_1[0x8] = zmm0
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
    float var_180_1[0x8] = zmm0
    zmm0[0].o = zx.o(rax_2)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    float var_1a0_1[0x8] = zmm0
    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
    arg12[0].o = zx.o(0)
    arg11[0].o = data_142fc95c0
    int32_t var_460_1[0x8] = arg14
    
    do
        int64_t rax_16 = sx.q((r9 << 3).d)
        int128_t* rcx_7 = arg2
        zmm2[0].o = *(rcx_7 + rax_16)
        arg5[0].o = *(rcx_7 + rax_16 + 0x10)
        zmm4[0].o = *(rcx_7 + rax_16 + 0x20)
        zmm5[0].o = *(rcx_7 + rax_16 + 0x30)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg5[0].o, 0xdd)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0xdd)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        int64_t r8 = sx.q(zmm0[0])
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
            float var_b40_1[0x8] = arg7
            zmm5 = _mm256_and_ps(zmm0, _mm256_or_ps(arg7, _mm256_insertf128_ps(zmm5, arg6[0].o, 1)))
            int64_t rax_26 = sx.q(zmm5[0])
            int32_t temp0_109 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            arg6[0].o = zx.o(*(rax_26 + &data_143442ba0))
            int64_t rax_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            arg6[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(sx.q(temp0_109) + &data_143442ba0), 1)
            int64_t rdx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            arg6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg6[0].o, *(rax_29 + &data_143442ba0), 2)
            int64_t rax_31 = sx.q(zmm5[0])
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
            double var_d40_1[0x4] = arg9
            arg15[0].o = arg11[0].o
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
            float var_ae0[0x8]
            var_ae0[0].o = zmm2[0].o
            arg5[0].o = zmm4[0].o & not.o(zmm2[0].o)
            zmm2[0].o = arg6[0].o & not.o(var_cc0_1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            float var_aa0_1[0x8] = arg13
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            char temp0_133 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            arg5[0].o = _mm256_extractf128_ps(var_160_1[0].o, 1)
            zmm2 = zmm1
            arg9 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442840)
            arg13[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_160_1[0].o, var_ce0_1[0].o)
            float var_c60_1[0x8] = arg8
            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_160_1[0].o, arg8[0].o)
            var_160_1[0].o = zx.o(0)
            float var_6c0_1[0x8] = var_160_1
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            
            if (temp0_133 != 0)
                var_160_1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                zmm2[0].o = zmm4[0].o ^ var_160_1[0].o
                arg7[0].o = arg6[0].o ^ var_160_1[0].o
                zmm2 = _mm256_and_ps(_mm256_and_ps(_mm256_insertf128_ps(arg7, zmm2[0].o, 1), zmm0), 
                    arg12)
            
            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_ac0[0].o)
            int128_t var_bc0_1 = zmm5[0].o
            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm1 = _mm256_blendv_ps(var_a40, arg9, zmm0)
            var_a40 = zmm1
            int64_t r8_2 = sx.q(rcx_13)
            int64_t rdx_12 = sx.q(rdx_11)
            int64_t rcx_14 = sx.q(temp0_102)
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
            int128_t* r13_2 = &var_680
            arg9 = var_d40_1
            arg6[0].o = zmm4[0].o
            arg11[0].o = arg15[0].o
            zmm1 = _mm256_insertf128_ps(arg13, arg7[0].o, 1)
            var_d60 = zmm1
            arg13 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
            zmm1[0].o = zx.o(*(rdx_12 + &data_143442b80))
            zmm1[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(sx.q(temp0_100) + &data_143442b80), 1)
            zmm1[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(sx.q(temp0_101) + &data_143442b80), 2)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_14 + &data_143442b80), 3)
            arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm4[0].o = var_cc0_1
            zmm1[0].o = zmm4[0].o & not.o(zmm1[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            arg5[0].o = zx.o(*(r8_2 + &data_143442b80))
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
            var_d20[0].o = arg6[0].o
            float var_d80_1[0x8] = arg13
            var_9a0.32 = arg14
            int128_t var_d00
            int64_t var_ca0[0x2]
            int32_t var_c80[0x4]
            int32_t var_c00[0x4]
            double var_a80[0x4]
            int128_t var_9c0
            int128_t var_920
            float var_780[0x8]
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
                float var_c20_1[0x8]
                
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
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
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
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
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
                    
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
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
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
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
                        r13_2 = &var_680
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
                            r13_2 = &var_680
                            arg9 = var_d40_1
                            arg6 = var_ce0_1
                            zmm2[0].o = var_ac0[0].o
                            arg5 = var_c60_1
                            zmm5[0].o = var_b60_1
                            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        else
                            var_920.32 = arg10
                            float var_6c0_2[0x8] = arg13
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
                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            var_d60[0].o = data_143442a20
                            zmm1[0].o = var_d60[0].o
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_d60[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_d60[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, var_d60[0].o)
                            var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_d60[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                            float var_a60_1[0x8] = zmm0
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
                                        zx.d(*zmm0[0].q), 0)
                                
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
                                        goto label_1401ba80b
                                    
                                    goto label_1401ba07d
                                
                                var_d60[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*var_d60[0].q), 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, temp0_338)
                                
                                if ((r14_3 & 8) != 0)
                                label_1401ba80b:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    uint32_t rax_79 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_79, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                    
                                    if ((r14_3 & 0x10) == 0)
                                        goto label_1401ba08d
                                    
                                    goto label_1401ba837
                                
                            label_1401ba07d:
                                zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                
                                if ((r14_3 & 0x10) != 0)
                                label_1401ba837:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 4)
                                    
                                    if ((r14_3 & 0x20) != 0)
                                    label_1401ba84c:
                                        uint32_t rax_83 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_83, 5)
                                        
                                        if ((r14_3 & 0x40) == 0)
                                            goto label_1401ba0a4
                                        
                                        goto label_1401ba85e
                                else
                                label_1401ba08d:
                                    
                                    if ((r14_3 & 0x20) != 0)
                                        goto label_1401ba84c
                                
                                double var_a20_1[0x4]
                                
                                if ((r14_3 & 0x40) != 0)
                                label_1401ba85e:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    var_a20_1 = arg11
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401ba883:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint32_t rax_87 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_87, 7)
                                else
                                label_1401ba0a4:
                                    var_a20_1 = arg11
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401ba883
                                
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                                                    goto label_1401ba2ba
                                                
                                                goto label_1401ba226
                                            
                                            int128_t var_ba0
                                            zmm2[0].o = var_ba0
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 0)
                                            var_ba0 = zmm2[0].o
                                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                            
                                            if ((temp0_378 & 2) != 0)
                                            label_1401ba2ba:
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
                                                    goto label_1401ba239
                                                
                                                goto label_1401ba2e7
                                            
                                        label_1401ba226:
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                                            arg6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                                            
                                            if ((temp0_378 & 4) == 0)
                                            label_1401ba239:
                                                arg7[0].o =
                                                    __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, temp0_338)
                                                
                                                if ((temp0_378 & 8) != 0)
                                                    goto label_1401ba31f
                                                
                                                goto label_1401ba24c
                                            
                                        label_1401ba2e7:
                                            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = var_ba0
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm2[0].q), 2)
                                            var_ba0 = zmm2[0].o
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, temp0_338)
                                            
                                            if ((temp0_378 & 8) != 0)
                                            label_1401ba31f:
                                                zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                uint32_t rax_58 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                zmm2[0].o = var_ba0
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_58, 3)
                                                var_ba0 = zmm2[0].o
                                                arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                                
                                                if ((temp0_378 & 0x10) == 0)
                                                    goto label_1401ba25c
                                                
                                                goto label_1401ba35d
                                            
                                        label_1401ba24c:
                                            arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                            uint16_t rax_62[0x2]
                                            
                                            if ((temp0_378 & 0x10) != 0)
                                            label_1401ba35d:
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
                                            label_1401ba25c:
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
                                                label_1401ba1bc:
                                                    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                    uint16_t rax_50[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg6[0].o, rax_50, 7)
                                            else if (temp0_378 s< 0)
                                                goto label_1401ba1bc
                                            
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
                                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                                arg7[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                                
                                                if ((temp0_564 & 2) != 0)
                                                    rax_110 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_110, 1)
                                            else
                                                zmm2[0].o = var_530
                                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
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
                                                    goto label_1401ba9ee
                                                
                                                goto label_1401bab4a
                                            
                                            zmm0[0].o = zmm2[0].o
                                            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm2[0].o = zmm0[0].o
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, zx.d(*zmm2[0].q), 2)
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, temp0_338)
                                            
                                            if ((temp0_564 & 8) != 0)
                                            label_1401ba9ee:
                                                zmm0[0].o = zmm2[0].o
                                                zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                int64_t rax_97 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm2[0].o = zmm0[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm0[0].o, zx.d(*rax_97), 3)
                                                arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                                
                                                if ((temp0_564 & 0x10) == 0)
                                                    goto label_1401bab5a
                                                
                                                goto label_1401baa22
                                            
                                        label_1401bab4a:
                                            arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                            
                                            if ((temp0_564 & 0x10) == 0)
                                            label_1401bab5a:
                                                arg7[0].o = zx.o(0)
                                                
                                                if ((temp0_564 & 0x20) != 0)
                                                    goto label_1401baa3b
                                                
                                                goto label_1401bab68
                                            
                                        label_1401baa22:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg5[0].q), 4)
                                            arg7[0].o = zx.o(0)
                                            
                                            if ((temp0_564 & 0x20) != 0)
                                            label_1401baa3b:
                                                uint32_t rax_102 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_102, 5)
                                                
                                                if ((temp0_564 & 0x40) == 0)
                                                    goto label_1401bab72
                                                
                                                goto label_1401baa4d
                                            
                                        label_1401bab68:
                                            
                                            if ((temp0_564 & 0x40) != 0)
                                            label_1401baa4d:
                                                zmm0[0].o = zmm2[0].o
                                                zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                zmm2[0].o = zmm0[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm0[0].o, zx.d(*zmm2[0].q), 6)
                                                
                                                if (temp0_564 s< 0)
                                                label_1401baa71:
                                                    zmm0[0].o = zmm2[0].o
                                                    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                    int64_t rax_105 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                    zmm2[0].o = zmm0[0].o
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm0[0].o, zx.d(*rax_105), 7)
                                            else
                                            label_1401bab72:
                                                
                                                if (temp0_564 s< 0)
                                                    goto label_1401baa71
                                            
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
                                zmm0 = var_d00.32
                                arg8 = _mm256_blendv_ps(zmm0, arg12, arg9)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((r14_3 & 2) != 0)
                                        rax_115 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_115, 1)
                                else
                                    zmm2[0].o = var_6f0
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                                        goto label_1401baebc
                                    
                                    goto label_1401bacce
                                
                                zmm5[0].o = zmm2[0].o
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = zmm5[0].o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                    zx.d(*zmm2[0].q), 2)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, temp0_338)
                                
                                if ((r14_3 & 8) != 0)
                                label_1401baebc:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_126 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_126, 3)
                                    zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                    
                                    if ((r14_3 & 0x10) == 0)
                                        goto label_1401bacde
                                    
                                    goto label_1401baee8
                                
                            label_1401bacce:
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                int128_t var_5a0
                                
                                if ((r14_3 & 0x10) == 0)
                                label_1401bacde:
                                    zmm4[0].o = var_5a0
                                    
                                    if ((r14_3 & 0x20) != 0)
                                        goto label_1401baf06
                                    
                                    goto label_1401bacf1
                                
                            label_1401baee8:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                zmm4[0].o = var_5a0
                                
                                if ((r14_3 & 0x20) != 0)
                                label_1401baf06:
                                    uint32_t rax_130 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_130, 5)
                                    
                                    if ((r14_3 & 0x40) == 0)
                                        goto label_1401bacfb
                                    
                                    goto label_1401baf18
                                
                            label_1401bacf1:
                                
                                if ((r14_3 & 0x40) != 0)
                                label_1401baf18:
                                    arg5[0].o = zmm2[0].o
                                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm2[0].o = arg5[0].o
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm2[0].q), 6)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401baf3c:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        uint32_t rax_134 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_134, 7)
                                else
                                label_1401bacfb:
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401baf3c
                                
                                var_6f0 = zmm2[0].o
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg5 = _mm256_blendv_ps(var_c20_1, zmm0, arg9)
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
                                        zx.d(*zmm0[0].q), 0)
                                
                                arg13[0].o = data_142fc95c0
                                var_c20_1[0].o = arg13[0].o
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                
                                if ((r14_3 & 2) != 0)
                                    uint16_t rax_120[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_120, 1)
                                
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                                
                                if ((r14_3 & 4) != 0)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm2[0].q), 2)
                                
                                arg11[0].o = var_c20_1[0].o
                                arg6 = var_ce0_1
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_338)
                                
                                if ((r14_3 & 8) == 0)
                                    zmm0 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                    
                                    if ((r14_3 & 0x10) != 0)
                                        goto label_1401baf81
                                    
                                    goto label_1401bae24
                                
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint16_t rax_136[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_136, 3)
                                zmm0 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                
                                if ((r14_3 & 0x10) != 0)
                                label_1401baf81:
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm0[0].q), 4)
                                    zmm1[0].o = var_6f0
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if ((r14_3 & 0x20) == 0)
                                        goto label_1401bae3f
                                    
                                    goto label_1401bafa7
                                
                            label_1401bae24:
                                zmm1[0].o = var_6f0
                                zmm1[0].o &= data_142fc92e0
                                
                                if ((r14_3 & 0x20) == 0)
                                label_1401bae3f:
                                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                    
                                    if ((r14_3 & 0x40) != 0)
                                        goto label_1401bafbe
                                    
                                    goto label_1401bae4e
                                
                            label_1401bafa7:
                                uint16_t rax_140[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_140, 5)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                
                                if ((r14_3 & 0x40) == 0)
                                label_1401bae4e:
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401bafde:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint16_t rax_144[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_144, 7)
                                else
                                label_1401bafbe:
                                    arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*arg5[0].q), 6)
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401bafde
                                
                                r13_2 = &var_680
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
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
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
                                        goto label_1401ba8ba
                                    
                                    goto label_1401ba47f
                                
                                var_d60[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *var_d60[0].q, 2)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                
                                if ((rdi_7 & 8) != 0)
                                label_1401ba8ba:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_89 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_89, 3)
                                    zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                    
                                    if ((rdi_7 & 0x10) == 0)
                                        goto label_1401ba48f
                                    
                                    goto label_1401ba8e0
                                
                            label_1401ba47f:
                                zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                
                                if ((rdi_7 & 0x10) == 0)
                                label_1401ba48f:
                                    
                                    if ((rdi_7 & 0x20) != 0)
                                        goto label_1401ba8ef
                                    
                                    goto label_1401ba499
                                
                            label_1401ba8e0:
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                                
                                if ((rdi_7 & 0x20) != 0)
                                label_1401ba8ef:
                                    int64_t rax_91 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_91, 5)
                                    
                                    if ((rdi_7 & 0x40) == 0)
                                        goto label_1401ba4a3
                                    
                                    goto label_1401ba904
                                
                            label_1401ba499:
                                
                                if ((rdi_7 & 0x40) != 0)
                                label_1401ba904:
                                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401ba91d:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_93 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_93, 7)
                                else
                                label_1401ba4a3:
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401ba91d
                                
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                                    double var_a20_2[0x4] = arg11
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
                                            rcx_14 = zx.q(_mm256_movemask_ps(arg7))
                                            
                                            if ((rcx_14.b & 1) == 0)
                                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                                zmm2[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                                
                                                if ((rcx_14.b & 2) != 0)
                                                    goto label_1401ba68b
                                                
                                                goto label_1401ba617
                                            
                                            zmm0[0].o = var_9c0
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *arg5[0].q, 0)
                                            var_9c0 = zmm0[0].o
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                            
                                            if ((rcx_14.b & 2) != 0)
                                            label_1401ba68b:
                                                int64_t rax_70 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                zmm0[0].o = var_9c0
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_70, 1)
                                                var_9c0 = zmm0[0].o
                                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, 
                                                    arg7[0].o)
                                                
                                                if ((rcx_14.b & 4) == 0)
                                                    goto label_1401ba629
                                                
                                                goto label_1401ba6ba
                                            
                                        label_1401ba617:
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
                                            
                                            if ((rcx_14.b & 4) == 0)
                                            label_1401ba629:
                                                zmm2[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                                
                                                if ((rcx_14.b & 8) != 0)
                                                    goto label_1401ba6e9
                                                
                                                goto label_1401ba636
                                            
                                        label_1401ba6ba:
                                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm0[0].o = var_9c0
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm0[0].q, 2)
                                            var_9c0 = zmm0[0].o
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                            
                                            if ((rcx_14.b & 8) != 0)
                                            label_1401ba6e9:
                                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                int64_t rax_72 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm0[0].o = var_9c0
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_72, 3)
                                                var_9c0 = zmm0[0].o
                                                arg5 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                                                
                                                if ((rcx_14.b & 0x10) == 0)
                                                    goto label_1401ba645
                                                
                                                goto label_1401ba720
                                            
                                        label_1401ba636:
                                            arg5 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                                            uint16_t* rax_74
                                            
                                            if ((rcx_14.b & 0x10) != 0)
                                            label_1401ba720:
                                                arg7[0].o = var_9c0
                                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg7[0].o, *arg5[0].q, 4)
                                                zmm2[0].o = zx.o(0)
                                                
                                                if ((rcx_14.b & 0x20) != 0)
                                                    rax_74 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_74, 5)
                                            else
                                            label_1401ba645:
                                                zmm2[0].o = zx.o(0)
                                                arg7[0].o = var_9c0
                                                
                                                if ((rcx_14.b & 0x20) != 0)
                                                    rax_74 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_74, 5)
                                            
                                            if ((rcx_14.b & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg7[0].o, *zmm0[0].q, 6)
                                                
                                                if (rcx_14.b s< 0)
                                                label_1401ba5b8:
                                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                    uint16_t* rax_68 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_68, 7)
                                            else if (rcx_14.b s< 0)
                                                goto label_1401ba5b8
                                            
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
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, 
                                                zmm0[0].o)
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                                            arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                            rcx_14 = zx.q(_mm256_movemask_ps(arg6))
                                            
                                            if ((rcx_14.b & 1) == 0)
                                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                                zmm2[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                                
                                                if ((rcx_14.b & 2) != 0)
                                                    goto label_1401bb16b
                                                
                                                goto label_1401bb0f3
                                            
                                            int128_t var_b00
                                            zmm0[0].o = var_b00
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *arg5[0].q, 0)
                                            var_b00 = zmm0[0].o
                                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                            
                                            if ((rcx_14.b & 2) != 0)
                                            label_1401bb16b:
                                                int64_t rax_149 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                zmm0[0].o = var_b00
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_149, 1)
                                                var_b00 = zmm0[0].o
                                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, 
                                                    arg6[0].o)
                                                
                                                if ((rcx_14.b & 4) == 0)
                                                    goto label_1401bb105
                                                
                                                goto label_1401bb19a
                                            
                                        label_1401bb0f3:
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            arg6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                                            
                                            if ((rcx_14.b & 4) == 0)
                                            label_1401bb105:
                                                zmm2[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                                
                                                if ((rcx_14.b & 8) != 0)
                                                    goto label_1401bb1c9
                                                
                                                goto label_1401bb112
                                            
                                        label_1401bb19a:
                                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                            zmm0[0].o = var_b00
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm0[0].q, 2)
                                            var_b00 = zmm0[0].o
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                            
                                            if ((rcx_14.b & 8) != 0)
                                            label_1401bb1c9:
                                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                int64_t rax_151 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm0[0].o = var_b00
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_151, 3)
                                                var_b00 = zmm0[0].o
                                                arg5 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                                                
                                                if ((rcx_14.b & 0x10) == 0)
                                                    goto label_1401bb121
                                                
                                                goto label_1401bb200
                                            
                                        label_1401bb112:
                                            arg5 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                                            int64_t rax_153
                                            
                                            if ((rcx_14.b & 0x10) != 0)
                                            label_1401bb200:
                                                zmm2[0].o = var_b00
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg5[0].q, 4)
                                                
                                                if ((rcx_14.b & 0x20) != 0)
                                                    rax_153 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_153, 5)
                                            else
                                            label_1401bb121:
                                                zmm2[0].o = var_b00
                                                
                                                if ((rcx_14.b & 0x20) != 0)
                                                    rax_153 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_153, 5)
                                            
                                            if ((rcx_14.b & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *zmm0[0].q, 6)
                                                
                                                if (rcx_14.b s< 0)
                                                label_1401bb098:
                                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                                    int64_t rax_147 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_147, 7)
                                            else if (rcx_14.b s< 0)
                                                goto label_1401bb098
                                            
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
                                zmm0 = _mm256_blendv_ps(var_d00.32, arg12, arg9)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg15 = zmm0
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, zmm0[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                                arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                
                                if ((rdi_7 & 1) == 0)
                                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                    
                                    if ((rdi_7 & 2) != 0)
                                        goto label_1401bb39c
                                    
                                    goto label_1401bb31e
                                
                                int128_t var_b10
                                zmm0[0].o = var_b10
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 0)
                                var_b10 = zmm0[0].o
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                
                                if ((rdi_7 & 2) != 0)
                                label_1401bb39c:
                                    int64_t rax_156 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm0[0].o = var_b10
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_156, 1)
                                    var_b10 = zmm0[0].o
                                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                    
                                    if ((rdi_7 & 4) == 0)
                                        goto label_1401bb331
                                    
                                    goto label_1401bb3cc
                                
                            label_1401bb31e:
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                
                                if ((rdi_7 & 4) == 0)
                                label_1401bb331:
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                    
                                    if ((rdi_7 & 8) != 0)
                                        goto label_1401bb3fc
                                    
                                    goto label_1401bb33f
                                
                            label_1401bb3cc:
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o = var_b10
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm0[0].q, 2)
                                var_b10 = zmm0[0].o
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                                
                                if ((rdi_7 & 8) != 0)
                                label_1401bb3fc:
                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    int64_t rax_158 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = var_b10
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_158, 3)
                                    var_b10 = zmm0[0].o
                                    arg5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                    
                                    if ((rdi_7 & 0x10) == 0)
                                        goto label_1401bb34f
                                    
                                    goto label_1401bb434
                                
                            label_1401bb33f:
                                arg5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                int128_t var_590
                                int64_t rax_160
                                
                                if ((rdi_7 & 0x10) != 0)
                                label_1401bb434:
                                    zmm2[0].o = var_b10
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 4)
                                    zmm4[0].o = var_590
                                    
                                    if ((rdi_7 & 0x20) != 0)
                                        rax_160 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_160, 5)
                                else
                                label_1401bb34f:
                                    zmm2[0].o = var_b10
                                    zmm4[0].o = var_590
                                    
                                    if ((rdi_7 & 0x20) != 0)
                                        rax_160 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_160, 5)
                                
                                if ((rdi_7 & 0x40) != 0)
                                    zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401b934a:
                                        zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                        int64_t rax_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_10, 7)
                                else if (temp0_257.b s< 0)
                                    goto label_1401b934a
                                
                                var_b10 = zmm2[0].o
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg5 = _mm256_blendv_ps(var_c20_1, zmm0, arg9)
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
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d80_1[0].o, zmm0[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                var_8e0 = arg5
                                
                                if ((rdi_7 & 1) != 0)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0].q, 0)
                                
                                arg13[0].o = data_142fc95c0
                                var_c20_1[0].o = arg13[0].o
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
                                
                                arg11[0].o = var_c20_1[0].o
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
                                        goto label_1401b937d
                                    
                                    goto label_1401bb5b7
                                
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0].q, 4)
                                zmm2[0].o = var_b10
                                
                                if ((rdi_7 & 0x20) != 0)
                                label_1401b937d:
                                    uint16_t* rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_12, 5)
                                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                    
                                    if ((rdi_7 & 0x40) == 0)
                                        goto label_1401bb5c6
                                    
                                    goto label_1401b9397
                                
                            label_1401bb5b7:
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdi_7 & 0x40) != 0)
                                label_1401b9397:
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = var_b10
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0].q, 6)
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                    
                                    if (temp0_257.b s< 0)
                                    label_1401b93bd:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint16_t* rax_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_14, 7)
                                else
                                label_1401bb5c6:
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                    
                                    if (temp0_257.b s< 0)
                                        goto label_1401b93bd
                                
                                r13_2 = &var_680
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
            
            float var_c60_2[0x8] = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
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
            float var_c20_2[0x8] = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_d60[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
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
            float var_6e0[0x8]
            
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
                    zmm5[0].o = _mm256_extractf128_ps(var_ce0[0].o, 1)
                    zmm0 = var_bc0_1.32
                    arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_ce0[0].o)
                    arg11 = var_c00.32
                    arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg9 = var_c20_2
                    var_ce0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = data_1434426c0
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    var_ce0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ce0[0].o, arg5[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                    zmm1 = _mm256_insertf128_ps(arg5, var_ce0[0].o, 1)
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
                    double r10_4 = arg9[0]
                    r8_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t r14_4 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rcx_15 = r15_1 + r14_4
                    arg6 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg7 = _mm256_blendv_ps(arg13, arg6, arg5)
                    int64_t rbx_7 = zmm1[0].q
                    int32_t* rdx_13 = arg7[0].q
                    int64_t rsi_8 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    zmm1[0].o = *(rdx_13 + rcx_15)
                    arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    int64_t rdx_14 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    float* rax_168 = arg7[0].q
                    arg7 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    arg5 = _mm256_blendv_ps(arg13, arg7, arg5)
                    zmm4[0].o = *(arg5[0].q + rcx_15)
                    rcx_14 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    void* rdi_9 = r15_1 + r8_2
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
                    void* rax_171 = r15_1 i+ r10_4
                    int32_t* rsi_10 = arg6[0].q
                    zmm5 = _mm256_blendv_ps(arg13, arg7, zmm5)
                    arg7[0].o = *(rsi_10 + rax_171)
                    int32_t* rsi_11 = zmm5[0].q
                    int64_t rdi_10 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = *(rsi_11 + rax_171)
                    void* rax_172 = r15_1 + rcx_14
                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg9 = var_d40_1
                    void* rsi_12 = r15_1 + r11_3
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_14 + rsi_12), 0x30)
                    int64_t rdx_15 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_15 + rax_172), 0x10)
                    rdx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_10 + rsi_12), 0x30)
                    float* rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    int64_t rdi_11 = zmm0[0].q
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_13 + rax_172), 0x10)
                    void* rax_173 = r15_1 + rdi_11
                    arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg5[0].q + rax_173), 0x20)
                    arg12[0].o = zx.o(0)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(zmm5[0].q + rax_173), 0x20)
                    void* rax_174 = r15_1 + rdx_12
                    int64_t rsi_16 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_16 + rax_174), 0x30)
                    float* rsi_17 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_17 + rax_174), 0x30)
                    zmm5[0].o = *(r15_1 i+ r10_4)
                    arg6[0].o = *(r15_1 + r14_4)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_1 + r8_2), 0x10)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_1 + rbx_7), 0x20)
                    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_1 + r11_3), 0x30)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + rcx_14), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + rdi_11), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + rdx_12), 0x30)
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
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0])
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
                        arg7[0].o = _mm256_extractf128_ps(var_c20_2[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c20_2[0].o, arg7[0].o)
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
                        r8_2 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_16 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        rdx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_8 = zmm2[0].q
                        zmm2[0].o = *(r15_1 + rcx_16)
                        int64_t rcx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_12 = zmm0[0].q
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rax_177 = zmm0[0].q
                        zmm0[0].o = *(r15_1 + rdi_12)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rcx_17), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rax_177), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rsi_18), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + r8_2), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rbx_8), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rdx_12), 0x30)
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
                    float var_4a0[0x8]
                    
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
                            int64_t rax_183 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
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
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(var_c40, data_142fc9520)
                    var_c40[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    var_c40[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_c40[0].o, arg12[0].o)
                    zmm5[0].o = var_c40[0].o ^ arg7[0].o
                    var_c40[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    var_c40[0].o ^= arg7[0].o
                    var_c40[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_c40[0].o, zmm5[0].o)
                    var_c40[0].o &= arg11[0].o
                    var_c40[0].o = __vpsllw_xmmdq_xmmdq_immb(var_c40[0].o, 0xf)
                    var_c40[0].o = __vpsraw_xmmdq_xmmdq_immb(var_c40[0].o, 0xf)
                    var_c40[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_c40[0].o, var_c40[0].o)
                    rcx_14 = zx.q(__vpmovmskb_gpr32d_xmmdq(var_c40[0].o))
                    
                    if (rcx_14.b == 0)
                        arg15 = arg10
                        arg11[0].o = data_142fc95c0
                        arg13 = var_d80_1
                        zmm4[0].o = var_cc0_1
                        arg14[0].o = var_b60
                    else
                        char rsi_20 = rcx_14.b
                        
                        if ((rsi_20 & 1) == 0)
                            if ((rsi_20 & 2) != 0)
                                goto label_1401bc37d
                            
                            goto label_1401bc137
                        
                        var_c40[0].o = *arg15[0].q
                        zmm2 = _mm256_blend_ps(zmm2, var_c40, 1)
                        
                        if ((rsi_20 & 2) != 0)
                        label_1401bc37d:
                            int64_t rax_189 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            var_c40[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_189, 0x10)
                            zmm2 = _mm256_blend_ps(zmm2, var_c40, 0xf)
                            arg14[0].o = var_b60
                            
                            if ((rsi_20 & 4) == 0)
                                goto label_1401bc14a
                            
                            goto label_1401bc3a2
                        
                    label_1401bc137:
                        arg14[0].o = var_b60
                        
                        if ((rsi_20 & 4) == 0)
                        label_1401bc14a:
                            
                            if ((rsi_20 & 8) != 0)
                                goto label_1401bc3c3
                            
                            goto label_1401bc154
                        
                    label_1401bc3a2:
                        var_c40[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        var_c40[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *var_c40[0].q, 0x20)
                        zmm2 = _mm256_blend_ps(zmm2, var_c40, 0xf)
                        
                        if ((rsi_20 & 8) != 0)
                        label_1401bc3c3:
                            var_c40[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            int64_t rax_191 = __vpextrq_gpr64q_xmmdq_immb(var_c40[0].o, 1)
                            var_c40[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_191, 0x30)
                            zmm2 = _mm256_blend_ps(zmm2, var_c40, 0xf)
                            arg11[0].o = data_142fc95c0
                            arg13 = var_d80_1
                            
                            if ((rsi_20 & 0x10) == 0)
                                goto label_1401bc16c
                            
                            goto label_1401bc3f8
                        
                    label_1401bc154:
                        arg11[0].o = data_142fc95c0
                        arg13 = var_d80_1
                        
                        if ((rsi_20 & 0x10) != 0)
                        label_1401bc3f8:
                            var_c40[0].o = zx.o(*zmm4[0].q)
                            arg5 = zmm2
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            var_c40[0].o =
                                __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, var_c40[0].o, 3)
                            zmm2 = _mm256_insertf128_ps(arg5, var_c40[0].o, 1)
                            
                            if ((rsi_20 & 0x20) != 0)
                            label_1401bc420:
                                int64_t rax_193 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                var_c40[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                var_c40[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(var_c40[0].o, *rax_193, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm2, var_c40[0].o, 1)
                                
                                if ((rsi_20 & 0x40) == 0)
                                    goto label_1401bc180
                                
                                goto label_1401bc442
                        else
                        label_1401bc16c:
                            
                            if ((rsi_20 & 0x20) != 0)
                                goto label_1401bc420
                        
                        if ((rsi_20 & 0x40) != 0)
                        label_1401bc442:
                            var_c40[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            float* rax_194 = var_c40[0].q
                            var_c40[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            var_c40[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(var_c40[0].o, *rax_194, 0x20)
                            zmm2 = _mm256_insertf128_ps(zmm2, var_c40[0].o, 1)
                            arg15 = arg10
                            
                            if (rcx_14.b s< 0)
                            label_1401bc46c:
                                var_c40[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                int64_t rax_195 = __vpextrq_gpr64q_xmmdq_immb(var_c40[0].o, 1)
                                var_c40[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                var_c40[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(var_c40[0].o, *rax_195, 0x30)
                                zmm2 = _mm256_insertf128_ps(zmm2, var_c40[0].o, 1)
                        else
                        label_1401bc180:
                            arg15 = arg10
                            
                            if (rcx_14.b s< 0)
                                goto label_1401bc46c
                        
                        zmm4[0].o = var_cc0_1
                    
                    arg10[0].o = var_ae0[0].o
                    var_c40[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    var_c40[0].o ^= arg7[0].o
                    var_4a0 = zmm2
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(var_c40, zmm5[0].o, 1), zmm2)
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
                            label_1401bc4bc:
                                float* rax_197 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_197, 0x10)
                                arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                        else
                            arg8 = var_2c0
                            zmm2 = var_d60
                            arg9[0].o = var_a80[0].o
                            
                            if ((rdi_13 & 2) != 0)
                                goto label_1401bc4bc
                        
                        arg7[0].o = data_1434426c0
                        
                        if ((rdi_13 & 4) != 0)
                            zmm1[0].o = var_c80
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *zmm1[0].q, 0x20)
                            arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                            
                            if ((rdi_13 & 8) != 0)
                            label_1401bc7bf:
                                zmm1[0].o = var_c80
                                float* rax_206 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_206, 0x30)
                                arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                                
                                if ((rdi_13 & 0x10) == 0)
                                    goto label_1401bc4f4
                                
                                goto label_1401bc7e9
                        else if ((rdi_13 & 8) != 0)
                            goto label_1401bc7bf
                        
                        if ((rdi_13 & 0x10) != 0)
                        label_1401bc7e9:
                            zmm1[0].o = *zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 1)
                            arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                            arg6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdi_13 & 0x20) != 0)
                            label_1401bc504:
                                int64_t rax_198 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_198, 0x10)
                                arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                        else
                        label_1401bc4f4:
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                            arg6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdi_13 & 0x20) != 0)
                                goto label_1401bc504
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_c80)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        
                        if ((rdi_13 & 0x40) != 0)
                            double rax_199 = arg9[0]
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
                        
                        float var_2e0[0x8]
                        zmm0 = var_2e0
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, data_1434426c0)
                        arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm1 = _mm256_blendv_ps(arg13, arg5, arg11)
                        var_800_1 = _mm256_maskstore_ps(arg14, arg8)
                        
                        if ((rdi_13 & 1) == 0)
                            arg5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            
                            if ((rdi_13 & 2) != 0)
                                goto label_1401bc83d
                            
                            goto label_1401bc5c7
                        
                        arg5[0].o = *zmm1[0].q
                        zmm0 = _mm256_blend_ps(zmm0, arg5, 1)
                        arg5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                        
                        if ((rdi_13 & 2) != 0)
                        label_1401bc83d:
                            int64_t rax_209 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_209, 0x10)
                            zmm0 = _mm256_blend_ps(zmm0, zmm4, 0xf)
                            arg6 = _mm256_blendv_ps(zmm2, arg5, zmm5)
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((rdi_13 & 4) == 0)
                                goto label_1401bc5dd
                            
                            goto label_1401bc86a
                        
                    label_1401bc5c7:
                        arg6 = _mm256_blendv_ps(zmm2, arg5, zmm5)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        
                        if ((rdi_13 & 4) == 0)
                        label_1401bc5dd:
                            
                            if ((rdi_13 & 8) != 0)
                                goto label_1401bc880
                            
                            goto label_1401bc5eb
                        
                    label_1401bc86a:
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm4[0].q, 0x20)
                        zmm0 = _mm256_blend_ps(zmm0, arg5, 0xf)
                        
                        if ((rdi_13 & 8) == 0)
                        label_1401bc5eb:
                            var_2c0 = arg8
                            
                            if ((rdi_13 & 0x10) != 0)
                            label_1401bc5fb:
                                arg5[0].o = *arg6[0].q
                                arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg5[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg5[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        else
                        label_1401bc880:
                            int64_t rax_211 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_211, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, arg5, 0xf)
                            var_2c0 = arg8
                            
                            if ((rdi_13 & 0x10) != 0)
                                goto label_1401bc5fb
                        
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
                        float var_300[0x8]
                        
                        if ((temp0_1205 & 1) != 0)
                            zmm0[0].o = *arg13[0].q
                            arg10 = _mm256_blend_ps(var_300, zmm0, 1)
                            
                            if ((temp0_1205 & 2) != 0)
                            label_1401bc8c8:
                                float* rax_213 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_213, 0x10)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                        else
                            arg10 = var_300
                            
                            if ((temp0_1205 & 2) != 0)
                                goto label_1401bc8c8
                        
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        
                        if ((temp0_1205 & 4) != 0)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *arg5[0].q, 0x20)
                            arg10 = _mm256_blend_ps(arg10, zmm1, 0xf)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            
                            if ((temp0_1205 & 8) != 0)
                            label_1401bc8fa:
                                float* rax_214 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_214, 0x30)
                                arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                        else
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            
                            if ((temp0_1205 & 8) != 0)
                                goto label_1401bc8fa
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm4[0].o = arg6[0].o ^ zmm2[0].o
                        
                        if ((temp0_1205 & 0x10) != 0)
                            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            zmm1[0].o = zx.o(*arg11[0])
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
                            float* rax_218 = zmm0[0].q
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
                        float var_320[0x8]
                        
                        if ((temp0_1205 & 1) != 0)
                            zmm2[0].o = *zmm5[0].q
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
                                goto label_1401bcc4a
                            
                            goto label_1401bcab3
                        
                        int64_t rax_222 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *rax_222, 0x10)
                        arg13 = _mm256_blend_ps(arg13, zmm2, 0xf)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, arg6)
                        arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((temp0_1205 & 4) != 0)
                        label_1401bcc4a:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *arg5[0].q, 0x20)
                            arg13 = _mm256_blend_ps(arg13, zmm2, 0xf)
                            zmm1[0].o = data_1434426c0
                            
                            if ((temp0_1205 & 8) == 0)
                                goto label_1401bcac9
                            
                            goto label_1401bcc68
                        
                    label_1401bcab3:
                        zmm1[0].o = data_1434426c0
                        
                        if ((temp0_1205 & 8) != 0)
                        label_1401bcc68:
                            int64_t rax_224 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *rax_224, 0x30)
                            arg13 = _mm256_blend_ps(arg13, zmm2, 0xf)
                            var_9c0 = arg7[0].o
                            
                            if ((temp0_1205 & 0x10) != 0)
                            label_1401bcad9:
                                zmm2[0].o = *zmm0[0].q
                                zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm2[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 1)
                                arg13 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                        else
                        label_1401bcac9:
                            var_9c0 = arg7[0].o
                            
                            if ((temp0_1205 & 0x10) != 0)
                                goto label_1401bcad9
                        
                        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        
                        if ((temp0_1205 & 0x20) == 0)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                            
                            if ((temp0_1205 & 0x40) != 0)
                                goto label_1401bccbc
                            
                            goto label_1401bcb19
                        
                        int64_t rax_225 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_225, 0x10)
                        arg13 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                        
                        if ((temp0_1205 & 0x40) == 0)
                        label_1401bcb19:
                            zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                            
                            if (temp0_1205 s< 0)
                            label_1401bcce7:
                                int64_t rax_227 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_227, 0x30)
                                arg13 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                        else
                        label_1401bccbc:
                            float* rax_226 = zmm4[0].q
                            zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_226, 0x20)
                            arg13 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                            
                            if (temp0_1205 s< 0)
                                goto label_1401bcce7
                        
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
                            label_1401bcd26:
                                int64_t rax_229 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_229, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                        else
                            arg5 = var_340
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_1303 & 2) != 0)
                                goto label_1401bcd26
                        
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        
                        if ((temp0_1303 & 4) != 0)
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *arg7[0].q, 0x20)
                            arg5 = _mm256_blend_ps(arg5, zmm2, 0xf)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_1303 & 8) != 0)
                            label_1401bcd58:
                                int64_t rax_230 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_230, 0x30)
                                arg5 = _mm256_blend_ps(arg5, zmm2, 0xf)
                        else
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_1303 & 8) != 0)
                                goto label_1401bcd58
                        
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg6[0].o ^= zmm1[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        
                        if ((temp0_1303 & 0x10) != 0)
                            zmm2[0].o = *arg11[0]
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
                        
                        float var_360[0x8]
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
                                goto label_1401bd4eb
                            
                            goto label_1401bced2
                        
                        float* rax_242 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_242, 0x10)
                        arg10 = _mm256_blend_ps(arg10, zmm2, 0xf)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        
                        if ((temp0_1303 & 4) != 0)
                        label_1401bd4eb:
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *zmm0[0].q, 0x20)
                            arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            zmm0 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                            
                            if ((temp0_1303 & 8) == 0)
                                goto label_1401bcee8
                            
                            goto label_1401bd518
                        
                    label_1401bced2:
                        zmm0 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        
                        if ((temp0_1303 & 8) == 0)
                        label_1401bcee8:
                            zmm0 = _mm256_blendv_ps(arg11, zmm0, zmm2)
                            
                            if ((temp0_1303 & 0x10) != 0)
                                goto label_1401bd545
                            
                            goto label_1401bcef8
                        
                    label_1401bd518:
                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        float* rax_244 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_244, 0x30)
                        arg10 = _mm256_blend_ps(arg10, arg5, 0xf)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, zmm2)
                        
                        if ((temp0_1303 & 0x10) != 0)
                        label_1401bd545:
                            zmm2[0].o = *zmm0[0].q
                            arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 1)
                            arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                            zmm5[0].o = data_1434426c0
                            arg11[0].o = zmm1[0].o
                            
                            if ((temp0_1303 & 0x20) == 0)
                                goto label_1401bcf0e
                            
                            goto label_1401bd571
                        
                    label_1401bcef8:
                        zmm5[0].o = data_1434426c0
                        arg11[0].o = zmm1[0].o
                        
                        if ((temp0_1303 & 0x20) == 0)
                        label_1401bcf0e:
                            
                            if ((temp0_1303 & 0x40) != 0)
                                goto label_1401bd593
                            
                            goto label_1401bcf18
                        
                    label_1401bd571:
                        int64_t rax_246 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_246, 0x10)
                        arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                        
                        if ((temp0_1303 & 0x40) == 0)
                        label_1401bcf18:
                            
                            if (temp0_1303 s< 0)
                            label_1401bd5b8:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_248 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_248, 0x30)
                                arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                        else
                        label_1401bd593:
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            float* rax_247 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_247, 0x20)
                            arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                            
                            if (temp0_1303 s< 0)
                                goto label_1401bd5b8
                        
                        var_360 = arg10
                        var_820_1 = _mm256_maskstore_ps(arg9, arg10)
                        arg6[0].o = zx.o(0)
                    
                    arg14[0].o = var_b60
                    zmm0[0].o = _mm256_extractf128_ps(var_ac0[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(var_c60_2[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c60_2[0].o, var_ac0[0].o)
                    var_c60_2[0].o = _mm256_extractf128_ps(var_ce0[0].o, 1)
                    zmm4 = var_bc0_1.32
                    var_ac0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    var_c60_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ac0[0].o, var_c60_2[0].o)
                    var_ac0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_ce0[0].o)
                    arg9 = var_c20_2
                    zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    arg10 = var_c00.32
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c60_2[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    var_c60_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ac0[0].o, zmm5[0].o)
                    var_c60_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_c60_2[0].o)
                    zmm1 = _mm256_insertf128_ps(var_c60_2, zmm1[0].o, 1)
                    var_c60_2[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                    var_ac0[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(var_c60_2, var_ac0[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg6, zmm1, zmm2)
                    zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    var_ac0[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    zmm0 = _mm256_blendv_ps(arg6, zmm0, _mm256_insertf128_ps(var_ac0, zmm2[0].o, 1))
                    r8_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rcx_22 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    rdx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_9 = zmm1[0].q
                    int64_t rdi_16 = zmm0[0].q
                    int64_t rsi_21 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rax_236 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm1[0].o = zx.o(*(r15_1 + rcx_22))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + r8_2), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rbx_9), 2)
                    rcx_14 = zmm0[0].q
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rdx_12), 3)
                    zmm1[0].o = zx.o(*(r15_1 + rdi_16))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rsi_21), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rcx_14), 2)
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
                            zmm0[0].o = _mm256_extractf128_ps(var_ac0[0].o, 1)
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
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, var_ac0[0].o)
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
                            int64_t rdx_16 = zmm2[0].q
                            r8_2 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t r10_5 = zmm2[0].q
                            int64_t rbx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rdi_17 = zmm0[0].q
                            int64_t rsi_22 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rcx_23 = zmm0[0].q
                            int64_t rax_240 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            rdx_12 = zx.q(*(r15_1 + rdx_16))
                            zmm0[0].o = zx.o(rdx_12.d)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + r8_2), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + r10_5), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rbx_10), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rdi_17), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rsi_22), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rcx_23), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rax_240), 7)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                            uint16_t* rax_250
                            
                            if ((temp0_1569 & 1) != 0)
                                arg9 = var_a20_4
                                arg6[0].o = var_540
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg9[0], 0)
                                
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
                        rcx_14 = zx.q(__vpmovmskb_gpr32d_xmmdq(zmm0[0].o))
                        
                        if (rcx_14.b == 0)
                            arg7[0].o = var_780[0].o
                            arg10[0].o = var_ae0[0].o
                        else
                            char rsi_24 = rcx_14.b
                            int128_t var_550
                            int64_t rax_258
                            
                            if ((rsi_24 & 1) != 0)
                                zmm2[0].o = var_550
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg11[0], 0)
                                
                                if ((rsi_24 & 2) != 0)
                                    rax_258 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_258, 1)
                            else
                                zmm2[0].o = var_550
                                
                                if ((rsi_24 & 2) != 0)
                                    rax_258 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_258, 1)
                            
                            if ((rsi_24 & 4) == 0)
                                if ((rsi_24 & 8) != 0)
                                    goto label_1401be2e5
                                
                                goto label_1401bd905
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                            
                            if ((rsi_24 & 8) != 0)
                            label_1401be2e5:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                int64_t rax_276 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_276, 3)
                                
                                if ((rsi_24 & 0x10) == 0)
                                    goto label_1401bd90f
                                
                                goto label_1401be305
                            
                        label_1401bd905:
                            
                            if ((rsi_24 & 0x10) == 0)
                            label_1401bd90f:
                                
                                if ((rsi_24 & 0x20) != 0)
                                    goto label_1401be314
                                
                                goto label_1401bd919
                            
                        label_1401be305:
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                            
                            if ((rsi_24 & 0x20) != 0)
                            label_1401be314:
                                int64_t rax_278 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_278, 5)
                                
                                if ((rsi_24 & 0x40) == 0)
                                    goto label_1401bd923
                                
                                goto label_1401be329
                            
                        label_1401bd919:
                            
                            if ((rsi_24 & 0x40) != 0)
                            label_1401be329:
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                
                                if (rcx_14.b s< 0)
                                label_1401be341:
                                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_280 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_280, 7)
                            else
                            label_1401bd923:
                                
                                if (rcx_14.b s< 0)
                                    goto label_1401be341
                            
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
                            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = zx.o(0)
                            var_6a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_680.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_660.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
            zmm0[0].o ^= arg7[0].o
            zmm1[0].o = _mm256_extractf128_ps(var_8e0[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_8e0[0].o, var_a60[0].o)
            zmm4[0].o = zmm2[0].o & not.o(arg10[0].o)
            zmm5[0].o = arg5[0].o & not.o(zmm0[0].o)
            arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0)
                return sub_1401be240(rcx_14, rdx_12, r8_2, r9, &var_d20[2], r12, r13_2, r15_1, 
                    arg9, arg11, arg12, arg13, var_d40_1) __tailcall
            
            arg8 = _mm256_insertf128_ps(zmm0, arg10[0].o, 1)
            zmm0[0].o = zmm2[0].o ^ arg7[0].o
            zmm2[0].o = arg5[0].o ^ arg7[0].o
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            var_c00.32 = zmm0
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(var_8e0[0].o, var_640)
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
            float var_aa0_2[0x8] = zmm5
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
            float var_520[0x8]
            float var_500[0x8]
            float var_4e0[0x8]
            
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
                    int64_t r9_2 = zmm5[0].q
                    int64_t r13_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    void* r8_4 = r15_1 + r9_2
                    int64_t r14_5 = zmm1[0].q
                    int64_t r11_5 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* r10_7 = r15_1 + r14_5
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r15_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rsi_25 = zmm1[0].q
                    zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg9 = _mm256_blendv_ps(zmm0, zmm1, arg6)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, arg7)
                    int64_t rdx_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int32_t* rdi_18 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rbx_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    float* rax_266 = zmm1[0].q
                    zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm2 = _mm256_blendv_ps(zmm0, zmm1, arg6)
                    arg5[0].o = *(rdi_18 + r10_7)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, arg7)
                    arg6[0].o = *(zmm1[0].q + r10_7)
                    void* rdi_20 = arg4 + r13_4
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    void* rcx_28 = arg4 + r11_5
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_18 + rcx_28), 0x10)
                    float* rdx_19 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_19 + rcx_28), 0x10)
                    int64_t rcx_29 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    void* rdx_21 = arg4 + rsi_25
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_266 + rdx_21), 0x20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm1[0].q + rdx_21), 0x20)
                    double rax_268 = arg9[0]
                    int64_t rdx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = *(rax_268 i+ r8_4)
                    void* rax_270 = arg4 + r15_3
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_11 + rax_270), 0x30)
                    int64_t rbx_12 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_12 + rdi_20), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_22 + rax_270), 0x30)
                    int64_t rax_271 = zmm5[0].q
                    int32_t* rdx_23 = zmm2[0].q
                    int64_t rbx_13 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm5[0].o = *(rdx_23 + r8_4)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_13 + rdi_20), 0x10)
                    void* rdx_25 = arg4 + rax_271
                    arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg7[0].q + rdx_25), 0x20)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm2[0].q + rdx_25), 0x20)
                    void* rdx_27 = arg4 + rcx_29
                    int64_t rbx_16 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_16 + rdx_27), 0x30)
                    float* rbx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_17 + rdx_27), 0x30)
                    zmm5[0].o = *(arg4 + r9_2)
                    arg7[0].o = *(arg4 + r14_5)
                    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + r11_5), 0x10)
                    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + rsi_25), 0x20)
                    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg4 + r15_3), 0x30)
                    r9 = var_be0
                    r15_1 = arg4
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + r13_4), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + rax_271), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_1 + rcx_29), 0x30)
                    zmm5 = _mm256_insertf128_ps(zmm5, arg7[0].o, 1)
                    arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg12[0].o = zx.o(0)
                    var_520 = _mm256_maskstore_ps(zmm4, zmm5)
                    zmm5[0].o = arg15[0].o
                    var_500 = _mm256_maskstore_ps(zmm4, _mm256_insertf128_ps(zmm1, arg5[0].o, 1))
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
                        var_c60_2[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_c60_2[0].o, var_c20_2[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                        arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                        arg7[0].o = _mm256_extractf128_ps(var_aa0_2[0].o, 1)
                        var_c60_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c60_2[0].o, arg6[0].o)
                        var_c60_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_c60_2[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg11[0].o, var_ce0[0].o)
                        arg11[0].o = zx.o(0)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_aa0_2[0].o, arg7[0].o)
                        zmm5 = _mm256_insertf128_ps(arg7, var_c60_2[0].o, 1)
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg12[0].o = zx.o(0)
                        arg6 = var_b60.32
                        arg15 = _mm256_blendv_ps(arg6, arg10, zmm2)
                        zmm2 = _mm256_blendv_ps(arg11, zmm5, zmm2)
                        arg10 = _mm256_blendv_ps(arg14, arg8, zmm0)
                        zmm0 = _mm256_blendv_ps(arg11, arg5, zmm0)
                        arg5 = arg9
                        int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_30 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_33 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_18 = zmm2[0].q
                        zmm2[0].o = *(r15_1 + rcx_30)
                        int64_t rcx_31 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_21 = zmm0[0].q
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_26 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rax_274 = zmm0[0].q
                        zmm0[0].o = *(r15_1 + rdi_21)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rcx_31), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rax_274), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rsi_26), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + r8_5), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rbx_18), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rdx_33), 0x30)
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
                    float var_b40_2[0x8]
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
                            label_1401be37e:
                                int64_t rax_282 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_282, 0x10)
                                arg5 = _mm256_blend_ps(arg5, zmm1, 0xf)
                        else
                            arg5 = var_8c0
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            
                            if ((temp0_1864 & 2) != 0)
                                goto label_1401be37e
                        
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        
                        if ((temp0_1864 & 4) != 0)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *zmm5[0].q, 0x20)
                            arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                        
                        arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg12[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        
                        if ((temp0_1864 & 8) != 0)
                            int64_t rax_284 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_284, 0x30)
                            arg5 = _mm256_blend_ps(arg5, zmm0, 0xf)
                        
                        var_8c0 = arg5
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm0[0].o = data_1434426c0
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                        arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x50)
                        arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                        
                        if ((temp0_1864 & 0x10) != 0)
                            arg14 = arg10
                            arg10[0].o = zx.o(*arg10[0].q)
                            arg5[0].o = _mm256_extractf128_ps(var_8c0[0].o, 1)
                            arg10[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg10[0].o, 3)
                            zmm2 = _mm256_insertf128_ps(var_8c0, arg10[0].o, 1)
                            var_8c0 = zmm2
                        else
                            arg14 = arg10
                        
                        arg10[0].o = data_1434426c0
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                        arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0xfa)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                        
                        if ((temp0_1864 & 0x20) != 0)
                            int64_t rax_286 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            arg12 = var_8c0
                            zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_286, 0x10)
                            arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                            var_8c0 = arg12
                        
                        arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg13, arg10[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                        
                        if ((temp0_1864 & 0x40) != 0)
                            float* rax_287 = zmm1[0].q
                            arg7 = var_8c0
                            arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_287, 0x20)
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
                            int64_t rax_288 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(var_8c0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_288, 0x30)
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
                    char temp0_1931 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    float var_940[0x8]
                    
                    if (temp0_1931 == 0)
                        arg9 = var_d40_1
                        zmm4[0].o = var_d00
                        arg11[0].o = data_142fc95c0
                        zmm5[0].o = var_cc0_1
                    else
                        if ((temp0_1931 & 1) == 0)
                            if ((temp0_1931 & 2) != 0)
                                goto label_1401be676
                            
                            goto label_1401be5c7
                        
                        zmm0[0].o = *arg15[0].q
                        zmm2 = _mm256_blend_ps(var_940, zmm0, 1)
                        var_940 = zmm2
                        
                        if ((temp0_1931 & 2) != 0)
                        label_1401be676:
                            int64_t rax_290 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, *rax_290, 0x10)
                            zmm2 = _mm256_blend_ps(var_940, zmm0, 0xf)
                            var_940 = zmm2
                            arg9 = var_d40_1
                            arg11[0].o = data_142fc95c0
                            
                            if ((temp0_1931 & 4) == 0)
                                goto label_1401be5df
                            
                            goto label_1401be6b2
                        
                    label_1401be5c7:
                        arg9 = var_d40_1
                        arg11[0].o = data_142fc95c0
                        
                        if ((temp0_1931 & 4) == 0)
                        label_1401be5df:
                            
                            if ((temp0_1931 & 8) != 0)
                                goto label_1401be6e5
                            
                            goto label_1401be5e9
                        
                    label_1401be6b2:
                        zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, *zmm0[0].q, 0x20)
                        zmm2 = _mm256_blend_ps(var_940, zmm0, 0xf)
                        var_940 = zmm2
                        
                        if ((temp0_1931 & 8) != 0)
                        label_1401be6e5:
                            zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            int64_t rax_292 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(var_940[0].o, *rax_292, 0x30)
                            zmm2 = _mm256_blend_ps(var_940, zmm0, 0xf)
                            var_940 = zmm2
                            zmm4[0].o = var_d00
                            zmm5[0].o = var_cc0_1
                            
                            if ((temp0_1931 & 0x10) == 0)
                                goto label_1401be605
                            
                            goto label_1401be72b
                        
                    label_1401be5e9:
                        zmm4[0].o = var_d00
                        zmm5[0].o = var_cc0_1
                        
                        if ((temp0_1931 & 0x10) == 0)
                        label_1401be605:
                            
                            if ((temp0_1931 & 0x20) != 0)
                                goto label_1401be773
                            
                            goto label_1401be60f
                        
                    label_1401be72b:
                        zmm0 = var_b40_2
                        zmm0[0].o = zx.o(*zmm0[0].q)
                        zmm2[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                        zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 3)
                        var_940 = _mm256_insertf128_ps(var_940, zmm0[0].o, 1)
                        
                        if ((temp0_1931 & 0x20) != 0)
                        label_1401be773:
                            zmm0 = var_b40_2
                            int64_t rax_294 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_294, 0x10)
                            zmm2 = _mm256_insertf128_ps(var_940, zmm0[0].o, 1)
                            var_940 = zmm2
                            
                            if ((temp0_1931 & 0x40) == 0)
                                goto label_1401be619
                            
                            goto label_1401be7b0
                        
                    label_1401be60f:
                        
                        if ((temp0_1931 & 0x40) != 0)
                        label_1401be7b0:
                            zmm0 = var_b40_2
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            float* rax_295 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_295, 0x20)
                            zmm2 = _mm256_insertf128_ps(var_940, zmm0[0].o, 1)
                            var_940 = zmm2
                            
                            if (temp0_1931 s< 0)
                            label_1401be7ec:
                                zmm0 = var_b40_2
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_296 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(var_940[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_296, 0x30)
                                zmm2 = _mm256_insertf128_ps(var_940, zmm0[0].o, 1)
                                var_940 = zmm2
                        else
                        label_1401be619:
                            
                            if (temp0_1931 s< 0)
                                goto label_1401be7ec
                    
                    arg14 = var_a60
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm0[0].o ^= arg7[0].o
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, arg10[0].o, 1), 
                        var_940)
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
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                    int32_t temp0_1985 = _mm256_movemask_ps(zmm1)
                    var_a60 = arg14
                    var_be0.32 = zmm4
                    
                    if (temp0_1985 == 0)
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        arg11[0].o = zmm2[0].o
                    else
                        char rdi_22 = temp0_1985.b
                        double var_380[0x4]
                        
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
                                goto label_1401bea9d
                            
                            goto label_1401be9de
                        
                        int64_t rax_302 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_302, 0x10)
                        arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                        
                        if ((rdi_22 & 4) != 0)
                        label_1401bea9d:
                            zmm0[0].o = var_c80
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm0[0].q, 0x20)
                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            
                            if ((rdi_22 & 8) == 0)
                                goto label_1401be9e8
                            
                            goto label_1401beac1
                        
                    label_1401be9de:
                        
                        if ((rdi_22 & 8) == 0)
                        label_1401be9e8:
                            
                            if ((rdi_22 & 0x10) != 0)
                                goto label_1401beaeb
                            
                            goto label_1401be9f2
                        
                    label_1401beac1:
                        zmm0[0].o = var_c80
                        int64_t rax_304 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_304, 0x30)
                        arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                        
                        if ((rdi_22 & 0x10) == 0)
                        label_1401be9f2:
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
                            arg7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            
                            if ((rdi_22 & 0x20) != 0)
                            label_1401bea02:
                                int64_t rax_300 = __vpextrq_gpr64q_xmmdq_immb(var_d60[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_300, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                        else
                        label_1401beaeb:
                            zmm0[0].o = *var_d60[0].q
                            zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 1)
                            arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
                            arg7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            
                            if ((rdi_22 & 0x20) != 0)
                                goto label_1401bea02
                        
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_c80)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        
                        if ((rdi_22 & 0x40) != 0)
                            zmm0[0].o = var_a80[0].o
                            float* rax_301 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_301, 0x20)
                            arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                        
                        var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60[0].o, zmm4[0].o)
                        arg8[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        arg13 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                        
                        if (temp0_1985.b s< 0)
                            zmm1[0].o = var_a80[0].o
                            int64_t rax_306 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_306, 0x30)
                            arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                        else
                            zmm1[0].o = var_a80[0].o
                        
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm5 = _mm256_blendv_ps(var_d80_1, zmm5, arg13)
                        var_800_2 = _mm256_maskstore_ps(arg11, arg9)
                        
                        if ((rdi_22 & 1) != 0)
                            var_d80_1[0].o = *zmm5[0].q
                            arg14 = _mm256_blend_ps(arg14, var_d80_1, 1)
                        
                        arg5 = _mm256_insertf128_ps(var_d60, arg5[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                        var_380 = arg9
                        
                        if ((rdi_22 & 2) != 0)
                            int64_t rax_308 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            var_d80_1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *rax_308, 0x10)
                            arg14 = _mm256_blend_ps(arg14, var_d80_1, 0xf)
                        
                        arg9 = _mm256_blendv_ps(var_d60, arg5, arg6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((rdi_22 & 4) == 0)
                            if ((rdi_22 & 8) != 0)
                                goto label_1401bed46
                            
                            goto label_1401bebc3
                        
                        var_d60[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *zmm2[0].q, 0x20)
                        arg14 = _mm256_blend_ps(arg14, var_d60, 0xf)
                        
                        if ((rdi_22 & 8) == 0)
                        label_1401bebc3:
                            
                            if ((rdi_22 & 0x10) != 0)
                            label_1401bebce:
                                var_d60[0].o = *arg9[0]
                                arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                var_d60[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, var_d60[0].o, 1)
                                arg14 = _mm256_insertf128_ps(arg14, var_d60[0].o, 1)
                        else
                        label_1401bed46:
                            float* rax_312 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            var_d60[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *rax_312, 0x30)
                            arg14 = _mm256_blend_ps(arg14, var_d60, 0xf)
                            
                            if ((rdi_22 & 0x10) != 0)
                                goto label_1401bebce
                        
                        arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        
                        if ((rdi_22 & 0x20) == 0)
                            var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            
                            if ((rdi_22 & 0x40) != 0)
                                goto label_1401bed91
                            
                            goto label_1401bec0e
                        
                        int64_t rax_313 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        var_d60[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        var_d60[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(var_d60[0].o, *rax_313, 0x10)
                        arg14 = _mm256_insertf128_ps(arg14, var_d60[0].o, 1)
                        var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        
                        if ((rdi_22 & 0x40) == 0)
                        label_1401bec0e:
                            zmm0 = _mm256_insertf128_ps(arg5, var_d60[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                            
                            if (temp0_1985.b s< 0)
                            label_1401bedbc:
                                int64_t rax_315 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_315, 0x30)
                                arg14 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                        else
                        label_1401bed91:
                            float* rax_314 = arg7[0].q
                            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_314, 0x20)
                            arg14 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg5, var_d60[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                            
                            if (temp0_1985.b s< 0)
                                goto label_1401bedbc
                        
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
                    char temp0_2054 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    float var_4c0[0x8]
                    
                    if (temp0_2054 == 0)
                        zmm0 = var_4c0
                        arg8 = var_b40_3
                    else
                        float var_400[0x8]
                        
                        if ((temp0_2054 & 1) == 0)
                            arg13 = var_400
                            
                            if ((temp0_2054 & 2) == 0)
                                goto label_1401bee01
                            
                            goto label_1401bece2
                        
                        zmm0 = var_d80_1
                        zmm0[0].o = *zmm0[0].q
                        arg13 = _mm256_blend_ps(var_400, zmm0, 1)
                        
                        if ((temp0_2054 & 2) != 0)
                        label_1401bece2:
                            zmm1 = var_d80_1
                            int64_t rax_310 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *rax_310, 0x10)
                            arg13 = _mm256_blend_ps(arg13, zmm0, 0xf)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((temp0_2054 & 4) != 0)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *arg6[0].q, 0x20)
                                arg13 = _mm256_blend_ps(arg13, zmm1, 0xf)
                        else
                        label_1401bee01:
                            zmm1 = var_d80_1
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((temp0_2054 & 4) != 0)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *arg6[0].q, 0x20)
                                arg13 = _mm256_blend_ps(arg13, zmm1, 0xf)
                        
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        
                        if ((temp0_2054 & 8) != 0)
                            int64_t rax_318 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *rax_318, 0x30)
                            arg13 = _mm256_blend_ps(arg13, zmm0, 0xf)
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg10[0].o = zmm5[0].o ^ arg5[0].o
                        
                        if ((temp0_2054 & 0x10) != 0)
                            var_d60[0].o = zx.o(*var_d60[0].q)
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            var_d60[0].o =
                                __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, var_d60[0].o, 3)
                            arg13 = _mm256_insertf128_ps(arg13, var_d60[0].o, 1)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_d80_1[0].o, data_1434426c0)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                        zmm4[0].o ^= arg5[0].o
                        
                        if ((temp0_2054 & 0x20) != 0)
                            zmm2 = var_d60
                            int64_t rax_320 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            var_d80_1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            var_d80_1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(var_d80_1[0].o, *rax_320, 0x10)
                            arg13 = _mm256_insertf128_ps(arg13, var_d80_1[0].o, 1)
                        else
                            zmm2 = var_d60
                        
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        var_d80_1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, data_1434426c0)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                        arg7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_d20[0].o, 1)
                        arg10 = _mm256_insertf128_ps(arg10, zmm4[0].o, 1)
                        
                        if ((temp0_2054 & 0x40) != 0)
                            float* rax_321 = arg5[0].q
                            zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_321, 0x20)
                            arg13 = _mm256_insertf128_ps(arg13, zmm4[0].o, 1)
                        
                        float var_3e0[0x8]
                        zmm4 = var_3e0
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_d60[0].o, data_1434426c0)
                        var_d60[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        zmm5 = _mm256_insertf128_ps(zmm5, var_d80_1[0].o, 1)
                        arg11 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                        arg10 = _mm256_and_ps(arg10, arg7)
                        
                        if (temp0_2054 s< 0)
                            int64_t rax_322 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            var_d80_1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            var_d80_1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(var_d80_1[0].o, *rax_322, 0x30)
                            arg13 = _mm256_insertf128_ps(arg13, var_d80_1[0].o, 1)
                        
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        zmm5 = _mm256_blendv_ps(var_d80_1, zmm5, arg11)
                        var_400 = arg13
                        var_7e0_2 = _mm256_maskstore_ps(arg10, arg13)
                        
                        if ((temp0_2054 & 1) != 0)
                            var_d80_1[0].o = *zmm5[0].q
                            zmm4 = _mm256_blend_ps(zmm4, var_d80_1, 1)
                        
                        zmm2 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                        arg6 = _mm256_insertf128_ps(var_d60, zmm0[0].o, 1)
                        
                        if ((temp0_2054 & 2) == 0)
                            arg9 = _mm256_blendv_ps(var_d60, zmm2, arg6)
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            
                            if ((temp0_2054 & 4) != 0)
                                goto label_1401bf1ad
                            
                            goto label_1401befca
                        
                        int64_t rax_328 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_328, 0x10)
                        zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                        arg9 = _mm256_blendv_ps(var_d60, zmm2, arg6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((temp0_2054 & 4) != 0)
                        label_1401bf1ad:
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *zmm2[0].q, 0x20)
                            zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                            
                            if ((temp0_2054 & 8) == 0)
                                goto label_1401befd4
                            
                            goto label_1401bf1c3
                        
                    label_1401befca:
                        
                        if ((temp0_2054 & 8) != 0)
                        label_1401bf1c3:
                            int64_t rax_330 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_330, 0x30)
                            zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                            
                            if ((temp0_2054 & 0x10) != 0)
                            label_1401befdf:
                                zmm0[0].o = zx.o(*arg9[0])
                                var_d60[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(var_d60[0].o, zmm0[0].o, 3)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                        else
                        label_1401befd4:
                            
                            if ((temp0_2054 & 0x10) != 0)
                                goto label_1401befdf
                        
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        var_d60[0].o = data_1434426c0
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, var_d60[0].o)
                        arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_d60[0].o)
                        
                        if ((temp0_2054 & 0x20) != 0)
                            int64_t rax_325 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            var_d60[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            var_d60[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(var_d60[0].o, *rax_325, 0x10)
                            zmm4 = _mm256_insertf128_ps(zmm4, var_d60[0].o, 1)
                        
                        arg8 = zmm4
                        var_d60[0].o = data_1434426c0
                        zmm4[0].o = var_d60[0].o
                        var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_d60[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        
                        if ((temp0_2054 & 0x40) != 0)
                            float* rax_326 = zmm0[0].q
                            zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_326, 0x20)
                            arg8 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                        
                        zmm4 = arg8
                        arg8 = var_b40_3
                        zmm1 = _mm256_insertf128_ps(arg5, var_d60[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg7, zmm2[0].o, 1)
                        
                        if (temp0_2054 s< 0)
                            int64_t rax_327 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_327, 0x30)
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
                    char temp0_2155 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                    
                    if (temp0_2155 == 0)
                        arg15 = arg9
                        arg14[0].o = data_1434426c0
                    else
                        if ((temp0_2155 & 1) != 0)
                            arg9 = var_d80_1
                            arg5[0].o = *arg9[0]
                            zmm0 = _mm256_blend_ps(zmm0, arg5, 1)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_2155 & 2) != 0)
                            label_1401bf203:
                                int64_t rax_332 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                arg5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_332, 0x10)
                                zmm0 = _mm256_blend_ps(zmm0, arg5, 0xf)
                        else
                            arg9 = var_d80_1
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_2155 & 2) != 0)
                                goto label_1401bf203
                        
                        arg14[0].o = data_1434426c0
                        arg7[0].o = var_9c0
                        double var_3c0[0x4]
                        arg11 = var_3c0
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        var_9c0 = arg7[0].o
                        
                        if ((temp0_2155 & 4) == 0)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            
                            if ((temp0_2155 & 8) != 0)
                                goto label_1401bf2c4
                            
                            goto label_1401bf254
                        
                        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *arg6[0].q, 0x20)
                        zmm0 = _mm256_blend_ps(zmm0, arg7, 0xf)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        
                        if ((temp0_2155 & 8) == 0)
                        label_1401bf254:
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            zmm5[0].o ^= zmm1[0].o
                            
                            if ((temp0_2155 & 0x10) != 0)
                            label_1401bf263:
                                arg5 = var_d60
                                arg5[0].o = zx.o(*arg5[0].q)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 3)
                                arg8 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                                zmm0 = arg8
                        else
                        label_1401bf2c4:
                            int64_t rax_335 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_335, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, arg7, 0xf)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                            zmm5[0].o ^= zmm1[0].o
                            
                            if ((temp0_2155 & 0x10) != 0)
                                goto label_1401bf263
                        
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg14[0].o)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                        arg5[0].o = zmm4[0].o ^ zmm1[0].o
                        
                        if ((temp0_2155 & 0x20) != 0)
                            arg13 = var_d60
                            int64_t rax_336 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_336, 0x10)
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
                        
                        if ((temp0_2155 & 0x40) != 0)
                            float* rax_337 = zmm2[0].q
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_337, 0x20)
                            zmm5 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm0 = zmm5
                        
                        arg13 = var_d80_1
                        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                        zmm1 = _mm256_and_ps(arg5, zmm1)
                        
                        if (temp0_2155 s< 0)
                            int64_t rax_338 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_338, 0x30)
                            arg5 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm0 = arg5
                        
                        arg12[0].o = zx.o(0)
                        arg15 = var_d40_1
                        arg8 = var_b40_3
                        zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        zmm4 = _mm256_blendv_ps(arg13, zmm4, arg6)
                        var_7c0_2 = _mm256_maskstore_ps(zmm1, zmm0)
                        var_4c0 = zmm0
                        
                        if ((temp0_2155 & 1) != 0)
                            zmm0[0].o = *zmm4[0].q
                            arg11 = _mm256_blend_ps(arg11, zmm0, 1)
                        
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg14[0].o, var_d60[0].o)
                        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                        
                        if ((temp0_2155 & 2) == 0)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                            
                            if ((temp0_2155 & 4) != 0)
                                goto label_1401bf994
                            
                            goto label_1401bf413
                        
                        int64_t rax_345 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *rax_345, 0x10)
                        arg11 = _mm256_blend_ps(arg11, zmm0, 0xf)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                        
                        if ((temp0_2155 & 4) != 0)
                        label_1401bf994:
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *zmm0[0].q, 0x20)
                            arg11 = _mm256_blend_ps(arg11, zmm0, 0xf)
                            zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            
                            if ((temp0_2155 & 8) == 0)
                                goto label_1401bf429
                            
                            goto label_1401bf9c1
                        
                    label_1401bf413:
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        
                        if ((temp0_2155 & 8) == 0)
                        label_1401bf429:
                            zmm0 = var_d60
                            zmm2 = _mm256_blendv_ps(zmm0, zmm2, arg5)
                            
                            if ((temp0_2155 & 0x10) != 0)
                                goto label_1401bf9f4
                            
                            goto label_1401bf43f
                        
                    label_1401bf9c1:
                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        int64_t rax_347 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *rax_347, 0x30)
                        arg11 = _mm256_blend_ps(arg11, zmm0, 0xf)
                        zmm0 = var_d60
                        zmm2 = _mm256_blendv_ps(zmm0, zmm2, arg5)
                        
                        if ((temp0_2155 & 0x10) != 0)
                        label_1401bf9f4:
                            zmm0[0].o = *zmm2[0].q
                            arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm0[0].o, 1)
                            arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            if ((temp0_2155 & 0x20) == 0)
                                goto label_1401bf449
                            
                            goto label_1401bfa14
                        
                    label_1401bf43f:
                        
                        if ((temp0_2155 & 0x20) == 0)
                        label_1401bf449:
                            
                            if ((temp0_2155 & 0x40) != 0)
                                goto label_1401bfa36
                            
                            goto label_1401bf453
                        
                    label_1401bfa14:
                        int64_t rax_349 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_349, 0x10)
                        arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                        
                        if ((temp0_2155 & 0x40) == 0)
                        label_1401bf453:
                            
                            if (temp0_2155 s< 0)
                            label_1401bfa5b:
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                int64_t rax_351 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_351, 0x30)
                                arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                        else
                        label_1401bfa36:
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            float* rax_350 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_350, 0x20)
                            arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                            
                            if (temp0_2155 s< 0)
                                goto label_1401bfa5b
                        
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
                    zmm5[0].o = _mm256_extractf128_ps(var_aa0_2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_aa0_2[0].o, arg5[0].o)
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    arg5[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                    arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                    zmm2 = _mm256_blendv_ps(arg13, zmm2, arg5)
                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm4[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                    arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                    zmm1 = _mm256_blendv_ps(arg13, zmm1, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                    int64_t r8_6 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rcx_37 = zmm2[0].q
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t rdx_34 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rbx_19 = zmm2[0].q
                    int64_t rdi_25 = zmm1[0].q
                    int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rax_340 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm2[0].o = zx.o(*(r15_1 + rcx_37))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + r8_6), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rbx_19), 2)
                    int64_t rcx_38 = zmm1[0].q
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rdx_34), 3)
                    zmm2[0].o = zx.o(*(r15_1 + rdi_25))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rsi_29), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rcx_38), 2)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + rax_340), 3)
                    arg5 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                    zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    var_aa0_2[0].o = data_143442490
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_aa0_2[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_aa0_2[0].o)
                    arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                    var_aa0_2[0].o = data_143442480
                    zmm5[0].o &= var_aa0_2[0].o
                    arg6[0].o = data_143442440
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm4[0].o &= var_aa0_2[0].o
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(
                            __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg5), data_1434424a0), 
                            var_860_2), 
                        var_800_2)
                    arg5 = _mm256_cvtepi32_ps(zmm4)
                    zmm0 = data_143442460
                    arg5 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(arg5, zmm0), var_840_2), var_7e0_2)
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(_mm256_cvtepi32_ps(zmm1), zmm0), 
                            var_820_2), 
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
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg9[0])
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        var_c40[0].o = _mm256_extractf128_ps(var_c40[0].o, 1)
                        var_c40[0].o = __vpslld_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        var_c40[0].o = __vpsrad_xmmdq_xmmdq_immb(var_c40[0].o, 0x1f)
                        arg8 = _mm256_insertf128_ps(zmm1, var_c40[0].o, 1)
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
                            zmm2[0].o = _mm256_extractf128_ps(var_c60_2[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_c60_2[0].o, var_ac0[0].o)
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
                            int64_t rdx_35 = zmm0[0].q
                            int64_t r8_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t r10_8 = zmm0[0].q
                            int64_t rbx_20 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            int64_t rdi_26 = zmm2[0].q
                            int64_t rsi_30 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rcx_39 = zmm0[0].q
                            int64_t rax_344 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zx.o(*(r15_1 + rdx_35))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + r8_7), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + r10_8), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rbx_20), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rdi_26), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rsi_30), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rcx_39), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15_1 + rax_344), 7)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
                        char temp0_2406 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_2406 == 0)
                            arg10 = arg11
                            arg11 = arg14
                            arg8 = var_b40_3
                            arg6[0].o = var_d60[0].o
                            arg7[0].o = var_d80_1[0].o
                        else
                            int128_t var_570
                            int64_t rax_353
                            
                            if ((temp0_2406 & 1) != 0)
                                arg5[0].o = var_570
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg11[0], 0)
                                
                                if ((temp0_2406 & 2) != 0)
                                    rax_353 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_353, 1)
                            else
                                arg5[0].o = var_570
                                
                                if ((temp0_2406 & 2) != 0)
                                    rax_353 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_353, 1)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            
                            if ((temp0_2406 & 4) != 0)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 2)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_2406 & 8) != 0)
                                int64_t rax_355 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_355, 3)
                            
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            var_aa0_2[0].o = zmm4[0].o
                            
                            if ((temp0_2406 & 0x10) != 0)
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
                            
                            if ((temp0_2406 & 0x20) != 0)
                                arg11 = zmm4
                                uint16_t* rax_357 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_357, 5)
                            else
                                arg11 = zmm4
                            
                            zmm1[0].o = data_1434426b0
                            zmm4[0].o = zmm1[0].o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            
                            if ((temp0_2406 & 0x40) != 0)
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg7[0].q, 6)
                            
                            zmm4[0].o = var_aa0_2[0].o
                            zmm0 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg12, arg6[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg15, arg8[0].o, 1)
                            
                            if (temp0_2406 s< 0)
                                int64_t rax_359 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_359, 7)
                            
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
                        char temp0_2456 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_2456 == 0)
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        else
                            int128_t var_560
                            int64_t rax_361
                            
                            if ((temp0_2456 & 1) != 0)
                                zmm2[0].o = var_560
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 0)
                                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                
                                if ((temp0_2456 & 2) != 0)
                                    rax_361 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_361, 1)
                            else
                                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                zmm2[0].o = var_560
                                
                                if ((temp0_2456 & 2) != 0)
                                    rax_361 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_361, 1)
                            
                            if ((temp0_2456 & 4) == 0)
                                if ((temp0_2456 & 8) != 0)
                                    goto label_1401b92bf
                                
                                goto label_1401bfd7c
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                            
                            if ((temp0_2456 & 8) != 0)
                            label_1401b92bf:
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 3)
                                
                                if ((temp0_2456 & 0x10) == 0)
                                    goto label_1401bfd86
                                
                                goto label_1401b92df
                            
                        label_1401bfd7c:
                            
                            if ((temp0_2456 & 0x10) == 0)
                            label_1401bfd86:
                                
                                if ((temp0_2456 & 0x20) != 0)
                                    goto label_1401b92ee
                                
                                goto label_1401bfd90
                            
                        label_1401b92df:
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg11[0], 4)
                            
                            if ((temp0_2456 & 0x20) != 0)
                            label_1401b92ee:
                                int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 5)
                                
                                if ((temp0_2456 & 0x40) == 0)
                                    goto label_1401bfd9a
                                
                                goto label_1401b9303
                            
                        label_1401bfd90:
                            
                            if ((temp0_2456 & 0x40) != 0)
                            label_1401b9303:
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                
                                if (temp0_2456 s< 0)
                                label_1401b931b:
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_8, 7)
                            else
                            label_1401bfd9a:
                                
                                if (temp0_2456 s< 0)
                                    goto label_1401b931b
                            
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
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
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
            uint64_t rcx_42
            uint64_t rflags_1
            
            if (j_4 == 0)
                rcx_42 = 0x40
            else
                rcx_42, rflags_1 = _bit_scan_forward(j_4)
            float var_120[0x8] = zmm0
            zmm1[0].o = (&var_220)[rcx_42]
            *(r12 + sx.q(var_120[zx.q(rcx_42.d) & 7]) * 0x30 + 0x10) = zmm1[0].o
            j_4 &= rol.q(-2, rcx_42.b)
        while (j_4 != 0)
        
        r9 = zx.q(r9.d + 8)
    while (r9.d s< i_5)
    
    i_4 = zx.q(arg19)
    
    if (r9.d s< i_4.d)
        goto label_1401c017a
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
