// 函数: sub_1401ab8e0
// 地址: 0x1401ab8e0
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
int32_t* r15 = arg4
int128_t* r9 = arg1
uint32_t zmm2[0x8]
zmm2[0].o = arg17
int32_t i_5 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
int128_t* var_ac8 = r9
int32_t* var_bc8 = r15
uint64_t i_4
double var_d60[0x4]
double var_d40[0x4]
int128_t var_ac0
uint32_t var_aa0[0x4]
uint64_t var_a80
int64_t var_a20[0x2]
float var_980[0x8]
double var_8a0[0x4]
int64_t var_880[0x2]
uint64_t r14
double zmm0[0x4]
float zmm1[0x8]
double zmm4[0x4]
double zmm5[0x4]

if (i_5 s<= 0)
    r14 = 0
    i_4 = zx.q(arg19)
    
    if (0 s< i_4.d)
    label_1401b2739:
        zmm0[0].o = zx.o(r14.d)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        arg8[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
        arg9[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
        zmm2[0].o = zx.o(i_4.d)
        arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg9[0].o)
        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
        arg11 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 3)
        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 3)
        zmm5 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm5, arg6[0].o, 1))
        int64_t r14_6 = sx.q(zmm5[0].d)
        int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
        int64_t r12_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
        int64_t rdi_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        arg6 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9520)
        arg7[0].o = zx.o(*(zx.q(arg6[0]) + arg2 + r14_6))
        int32_t rdx_41 = zmm5[0].d
        uint64_t rsi_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        int64_t rdx_42 = sx.q(rdx_41)
        arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rsi_21 + arg2 + r15_4), 1)
        uint64_t rax_337 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_337 + arg2 + r12_5), 2)
        int32_t temp0_2691 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
        uint64_t rcx_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_51 + arg2 + rdi_28), 3)
        int32_t temp0_2694 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
        int64_t rax_339 = sx.q(temp0_2691)
        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm0[0].o = zx.o(*(zx.q(arg6[0]) + arg2 + rdx_42))
        int64_t rcx_53 = sx.q(temp0_2694)
        uint32_t* rsi_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_23 + arg2 + rax_339), 1)
        uint64_t rbx_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_25 + arg2 + rcx_53), 2)
        zmm1[0].o = zx.o(*(arg2 + rdx_42))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + rax_339), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + rcx_53), 2)
        zmm4[0].o = zx.o(*(arg2 + r14_6))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg2 + r15_4), 1)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg2 + r12_5), 2)
        int64_t rax_341 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + rax_341), 3)
        double var_b20_1[0x2] = zmm1[0].o
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg2 + rdi_28), 3)
        float var_b80_1[0x8] = zmm1
        uint64_t rcx_54 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_54 + arg2 + rax_341), 3)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 3)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o |= data_142fc9520:0x10.o
        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm1[0].o |= data_142fc95e0
        zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x50)
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xfa)
        zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
        arg6[0].o = zx.o(0)
        zmm1 = _mm256_blendv_ps(arg6, zmm1, zmm4)
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
        zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
        zmm0 = _mm256_blendv_ps(arg6, zmm0, zmm4)
        zmm4[0].o = zx.o(*(arg3 + zmm1[0].q))
        int64_t rax_344 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rax_344), 1)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + zmm1[0].q), 2)
        int64_t rax_346 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rax_346), 3)
        zmm1[0].o = zx.o(*(arg3 i+ zmm0[0]))
        int64_t rax_348 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rax_348), 1)
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 i+ zmm0[0]), 2)
        int64_t rax_350 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rax_350), 3)
        float var_860_1[0x8] = _mm256_insertf128_ps(arg8, arg9[0].o, 1)
        zmm1 = _mm256_insertf128_ps(arg10, arg10[0].o, 1)
        float var_580_1[0x8] = zmm1
        arg8 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
        arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg12[0].o)
        zmm0[0].o = zmm1[0].o & not.o(zmm2[0].o)
        zmm2[0].o = zmm4[0].o & not.o(arg5[0].o)
        arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
        int128_t var_940
        int128_t var_920
        int128_t var_900
        int128_t var_8e0
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            int128_t var_b60_1 = zmm1[0].o
            int32_t var_9e0_1[0x8] = arg11
            zmm0[0].o = zx.o(0)
            double var_960_1[0x4] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            arg9[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            int64_t var_c60_1[0x2] = zmm0[0].o
            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            int128_t var_c00_2 = zmm0[0].o
            zmm0[0].o = 4
            zmm2[0].o = zx.o(var_bc8)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg15[0].q)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            float var_ca0_1[0x8] = zmm1
            int32_t var_d20_4[0x4] = zmm0[0].o
            arg7 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            double var_a60_3[0x4] = arg8
            zmm0 = _mm256_and_ps(arg7, arg8)
            int64_t r8_14 = sx.q(zmm0[0].d)
            int64_t r9_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int32_t temp0_2762 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int64_t rbx_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int64_t rdi_30 = sx.q(zmm0[0].d)
            int64_t rsi_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int32_t temp0_2766 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2767 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = zx.o(*(var_bc8 + r8_14))
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_bc8 + r9_4), 1)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_bc8 + sx.q(temp0_2762)), 2)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_bc8 + rbx_27), 3)
            zmm2[0].o = zx.o(*(var_bc8 + rdi_30))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rsi_26), 1)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + sx.q(temp0_2766)), 2)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + sx.q(temp0_2767)), 3)
            arg11 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x18)
            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x18)
            zmm1 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            arg14[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1c)
            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1c)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(arg14[0].o, 2)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm2 = _mm256_and_ps(arg7, _mm256_insertf128_ps(zmm2, arg5[0].o, 1))
            uint64_t r8_15 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm2[0].o, 1))
            uint64_t r14_7 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm2[0].o, 2))
            uint64_t r11_7 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm2[0].o, 3))
            uint64_t r9_5 = zx.q(zmm2[0])
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            uint64_t rsi_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            uint64_t rcx_59 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            float var_a00_1[0x8] = zmm1
            arg5 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_1434429e0)
            uint64_t rdx_45 = zx.q(zmm2[0])
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg14[0].o, 3)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
            zmm1 = _mm256_and_ps(arg7, _mm256_or_ps(arg5, _mm256_insertf128_ps(arg8, zmm1[0].o, 1)))
            arg5[0].o = zx.o(*(zx.q(zmm1[0]) + &data_143442ba0))
            uint64_t rax_357 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, *(rax_357 + &data_143442ba0), 1)
            uint64_t rax_358 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, *(rax_358 + &data_143442ba0), 2)
            uint64_t rax_359 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, *(rax_359 + &data_143442ba0), 3)
            arg5[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, *(zx.q(zmm1[0]) + &data_143442ba0), 4)
            uint64_t rax_361 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, *(rax_361 + &data_143442ba0), 5)
            uint64_t rax_362 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, *(rax_362 + &data_143442ba0), 6)
            uint64_t rax_363 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, *(rax_363 + &data_143442ba0), 7)
            uint64_t rbx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            zmm2[0].o = __vpmovzxbd_xmmdq_xmmd(zmm1[0])
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xe5)
            zmm1[0].o = __vpmovzxbd_xmmdq_xmmd(zmm1[0])
            arg10 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm2[0].o = data_142fc95c0
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            zmm1[0].o ^= arg6[0].o
            arg5[0].o ^= arg6[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            arg5[0].o = zmm1[0].o & arg15[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_2823 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            float var_c80_1[0x8] = arg9
            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
            float var_ba0_1[0x8] = arg12
            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            
            if (temp0_2823 != 0)
                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                arg7 = _mm256_and_ps(zmm1, arg10)
            
            zmm1[0].o = zmm4[0].o ^ arg6[0].o
            float var_c40_3[0x8] = zmm1
            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_c60_1)
            uint32_t var_b00_1[0x8] = arg11
            arg11 = __vandps_ymmqq_ymmqq_memqq(arg11, data_143442840)
            arg8[0].o = var_c00_2
            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg8[0].o)
            int128_t var_d70_1 = arg15[0].o
            zmm2[0].o &= arg15[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:2_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            
            if (cond:2_1)
                zmm2[0].o = zx.o(0)
            else
                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                zmm2[0].o = zx.o(0)
                zmm2 = _mm256_blendv_ps(zmm2, arg10, zmm1)
                arg7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg7, data_143442a00, zmm1)
            
            arg10 = var_ca0_1
            arg6[0].o = var_d20_4
            zmm1[0].o = var_b60_1
            zmm4[0].o = zmm1[0].o ^ arg12[0].o
            float var_ca0_2[0x8] = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
            zmm1 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
            var_b60_1.32 = zmm1
            zmm5 = _mm256_insertf128_ps(arg14, zmm0[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            zmm1[0].o = zx.o(*(rdx_45 + &data_143442b80))
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_27 + &data_143442b80), 1)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_59 + &data_143442b80), 2)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_28 + &data_143442b80), 3)
            zmm1[0].o &= arg6[0].o
            arg5[0].o = zx.o(*(r9_5 + &data_143442b80))
            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_15 + &data_143442b80), 1)
            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r14_7 + &data_143442b80), 2)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_7 + &data_143442b80), 3)
            zmm1[0].o &= arg10[0].o
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            double var_9c0_2[0x4] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            arg5[0].o = data_142fc95e0
            zmm1[0].o = arg6[0].o & arg5[0].o
            zmm0[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = arg10[0].o & arg5[0].o
            zmm1[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            arg9 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            arg15[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            zmm1[0].o = data_142d3f5b0
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
            var_d20_4.32 = arg11
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            arg13[0].o = var_d70_1
            zmm1[0].o = zmm0[0].o & arg13[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:5_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            double var_bc0_1[0x4] = zmm5
            zmm0 = var_b00_1
            double var_ce0_2[0x4]
            
            if (cond:5_1)
                arg14 = zmm5
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_ce0_2 = zmm0
                arg10 = var_b60_1.32
                arg15 = var_c80_1
                zmm0[0].o = var_c60_1
                zmm1 = var_ba0_1
                zmm2 = var_c40_3
            else
                zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442ae0)
                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                arg6[0].o = zx.o(0)
                arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                zmm0[0].o &= zmm1[0].o
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                bool cond:4_1 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o) == 0
                int128_t var_b40_1 = zmm4[0].o
                var_d60[0].o = arg15[0].o
                double var_cc0_7[0x4]
                int32_t rdi_32
                
                if (cond:4_1)
                    zmm0[0].o = zx.o(0)
                    var_cc0_7 = zmm0
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg5[0].o = zx.o(0)
                    arg8[0].o = zx.o(0)
                    arg12[0].o = zx.o(0)
                    rdi_32 = arg16
                    arg10 = var_b60_1.32
                else
                    zmm5[0].o = zx.o(0)
                    arg6[0].o = zx.o(0)
                    arg5[0].o = arg17
                    rdi_32 = arg16
                    
                    if (zx.o(0) f>= arg5[0])
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        var_cc0_7 = arg5
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg8[0].o = zx.o(0)
                        arg10 = var_b60_1.32
                    else
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg6[0].o)
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_d20_4)
                        arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                        
                        if (arg5[0].o f>= 1f)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg8 = _mm256_and_ps(_mm256_insertf128_ps(arg8, arg7[0].o, 1), arg6)
                            arg7 = arg8
                            arg5 = arg8
                            var_cc0_7 = arg8
                            arg10 = var_b60_1.32
                        else
                            float var_ce0_1[0x8] = arg9
                            zmm5[0].o = _mm_permute_ps(arg5[0].o, 0)
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm5[0].o, 1)
                            arg7 = _mm256_cvtepi32_ps(arg6)
                            arg9 = _mm256_mul_ps(zmm5, arg7)
                            arg10 = _mm256_round_ps(arg9, 9)
                            zmm5 = _mm256_cvttps_epi32(arg10)
                            arg8[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg14[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                            zmm5 = _mm256_insertf128_ps(arg8, arg14[0].o, 1)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg15[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg13 = _mm256_insertf128_ps(arg15, arg7[0].o, 1)
                            zmm4 = _mm256_and_ps(arg13, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            
                            if (arg18 != 1)
                                zmm5 = _mm256_sub_ps(arg9, arg10)
                            
                            arg7[0].o &= arg14[0].o
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            arg10[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                            arg7[0].o = arg15[0].o & arg8[0].o
                            arg7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                            arg6[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                            arg5 = _mm256_and_ps(arg13, arg6)
                            var_cc0_7 = zmm4
                            arg7 = zmm4
                            arg8 = arg5
                            arg10 = var_b60_1.32
                            arg13[0].o = var_d70_1
                            zmm4[0].o = var_b40_1
                            arg9 = var_ce0_1
                            arg15[0].o = var_d60[0].o
                    
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                    arg12 = _mm256_and_ps(zmm0, zmm5)
                    arg6[0].o = zx.o(0)
                
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                zmm0[0].o = arg11[0].o ^ zmm5[0].o
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                zmm2[0].o ^= zmm5[0].o
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                arg6[0].o = zmm1[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    var_ce0_2 = arg8
                    var_960_1 = arg12
                    arg15 = var_c80_1
                    zmm0[0].o = var_c60_1
                    zmm1 = var_ba0_1
                    arg8[0].o = var_c00_2
                    zmm2 = var_c40_3
                    arg14 = var_bc0_1
                else
                    float var_9a0_1[0x8] = arg5
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    var_a20.32 = zmm0
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0[0].o = data_142d3f5b0
                    zmm2[0].o = zmm0[0].o
                    zmm0[0].o = __vpminud_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                    arg5 = var_d20_4.32
                    zmm2[0].o = __vpminud_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm2[0].o = zx.o(0)
                    arg5[0].o = arg17
                    int32_t rax_368
                    rax_368.b = zx.o(0) f>= arg5[0]
                    zmm2[0].o = zx.o(neg.d(rax_368))
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
                    arg15 = _mm256_or_ps(zmm0, zmm2)
                    zmm0 = _mm256_and_ps(arg15, zmm1)
                    arg5 = arg9
                    
                    if (_mm256_movemask_ps(zmm0) == 0)
                        zmm4 = var_cc0_7
                    else
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        zmm4 = _mm256_blendv_ps(var_cc0_7, zmm2, zmm0)
                        arg8 = _mm256_blendv_ps(var_9a0_1, zmm2, zmm0)
                        arg7 = zmm4
                        var_9a0_1 = arg8
                    
                    arg11[0].o = zx.o(0)
                    arg14 = _mm256_andnot_ps(arg15, zmm1)
                    int32_t temp0_2966 = _mm256_movemask_ps(arg14)
                    
                    if (temp0_2966 == 0)
                        var_ce0_2 = arg8
                    label_1401b3a7a:
                        arg14 = var_bc0_1
                        arg15 = var_c80_1
                        arg9 = arg5
                        zmm2 = var_a20.32
                    else
                        arg7 = var_d20_4.32
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                        zmm0[0].o = var_d60[0].o
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        arg8 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        arg9[0].o = arg17
                        
                        if (arg9[0].o f>= 1f)
                            arg7 = _mm256_blendv_ps(zmm4, arg8, arg14)
                            zmm0 = var_9a0_1
                            zmm1 = _mm256_blendv_ps(zmm0, arg8, arg14)
                            var_ce0_2 = zmm1
                            goto label_1401b3a7a
                        
                        double var_cc0_8[0x4] = zmm4
                        var_aa0 = arg6[0].o
                        zmm4 = arg5
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        arg5[0].o = __vpmovzxdq_xmmdq_xmmq(zmm4[0])
                        double var_ce0_3[0x4] = zmm4
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                        arg6 = var_9c0_2
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm4[0].o = __vpmovzxdq_xmmdq_xmmq(zmm4[0])
                        zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        var_ac0.32 = arg8
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                        zmm0 = var_ca0_2
                        arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        arg7[0].o = data_143442a20
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                        arg8 = var_ac0.32
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2 = data_143442a40
                        zmm0 = _mm256_and_ps(zmm1, zmm2)
                        double var_c20_3[0x4] = zmm0
                        arg7 = _mm256_and_ps(arg5, zmm2)
                        zmm1[0].o = _mm_permute_ps(arg9[0].o, 0)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        zmm2[0].o = arg13[0].o
                        zmm2[0] = float.s(rdi_32 - 1)
                        arg5 = _mm256_cvtepi32_ps(arg8)
                        zmm1 = _mm256_mul_ps(zmm1, arg5)
                        zmm5[0].o = zmm2[0].o f* arg9[0]
                        zmm1 = _mm256_cvttps_epi32(zmm1)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        arg5[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                        arg13 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        arg8 = _mm256_cmp_ps(arg11, arg11, 0xf)
                        int32_t rdx_46 = int.d(zmm5[0].d)
                        int32_t rbx_29 = 0
                        
                        if (rdx_46 s>= 0)
                            rbx_29 = rdx_46
                        
                        if (rdi_32 - 2 s<= rbx_29)
                            rbx_29 = rdi_32 - 2
                        
                        float var_d00_2[0x8] = arg7
                        var_8a0 = arg13
                        var_a80.32 = arg15
                        uint32_t* var_6f0
                        var_6f0.o = zmm5[0].o
                        var_880.32 = arg8
                        int128_t* var_6a0
                        
                        if (rdi_32 s< 0x100)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg12[0].o = zmm2[0].o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            char rdx_48 = temp0_2966.b
                            
                            if ((rdx_48 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                            
                            if ((rdx_48 & 2) != 0)
                                uint32_t rax_399 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_399, 1)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5 = var_c20_3
                            var_d40[0].o = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                            
                            if ((rdx_48 & 4) == 0)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_d40[0].o)
                                
                                if ((rdx_48 & 8) != 0)
                                    goto label_1401b41c6
                                
                                goto label_1401b3b2e
                            
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg5[0].q), 2)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_d40[0].o)
                            
                            if ((rdx_48 & 8) != 0)
                            label_1401b41c6:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint32_t rax_445 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_445, 3)
                                zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((rdx_48 & 0x10) == 0)
                                    goto label_1401b3b3d
                                
                                goto label_1401b41f1
                            
                        label_1401b3b2e:
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            
                            if ((rdx_48 & 0x10) != 0)
                            label_1401b41f1:
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                
                                if ((rdx_48 & 0x20) != 0)
                                label_1401b4205:
                                    uint32_t rax_449 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_449, 5)
                                    
                                    if ((rdx_48 & 0x40) == 0)
                                        goto label_1401b3b51
                                    
                                    goto label_1401b4216
                            else
                            label_1401b3b3d:
                                
                                if ((rdx_48 & 0x20) != 0)
                                    goto label_1401b4205
                            
                            if ((rdx_48 & 0x40) != 0)
                            label_1401b4216:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm2[0].q), 6)
                                var_980[0].o = arg6[0].o
                                
                                if (temp0_2966.b s< 0)
                                label_1401b423a:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_453 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_453, 7)
                            else
                            label_1401b3b51:
                                var_980[0].o = arg6[0].o
                                
                                if (temp0_2966.b s< 0)
                                    goto label_1401b423a
                            
                            zmm0[0].o &= data_142fc92e0
                            zmm1[0].o = zx.o(0)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = zx.o(rbx_29)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                            arg9 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm5[0].o ^= zmm0[0].o
                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                            arg5[0].o ^= zmm0[0].o
                            zmm2 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                            var_6a0.32 = zmm2
                            arg5 = _mm256_and_ps(arg14, zmm2)
                            
                            if (_mm256_movemask_ps(arg5) != 0)
                                zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                arg15[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg15[0].o)
                                arg5[0].o ^= zmm0[0].o
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                                zmm1[0].o ^= zmm0[0].o
                                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                arg10 = var_8a0
                                arg13 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg10, var_ac0.32, zmm1)
                                zmm2[0].o = var_980[0].o
                                arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                                zmm2[0].o = var_d60[0].o
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                zmm2 = var_d20_4.32
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                arg6 = _mm256_and_ps(zmm4, zmm1)
                                zmm1 = _mm256_and_ps(arg14, arg6)
                                int32_t i = _mm256_movemask_ps(zmm1)
                                
                                if (i != 0)
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                                    arg7[0].o = data_142fc92e0
                                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                    
                                    do
                                        arg8 = zmm0
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        arg5[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d00_2[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                                        char temp0_3254 = _mm256_movemask_ps(zmm1)
                                        
                                        if ((temp0_3254 & 1) == 0)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            
                                            if ((temp0_3254 & 2) != 0)
                                                goto label_1401b3c72
                                            
                                            goto label_1401b3d9f
                                        
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, 
                                            zx.d(*zmm0[0]), 0)
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_3254 & 2) != 0)
                                        label_1401b3c72:
                                            uint16_t rax_404[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, rax_404, 1)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, 
                                                var_c20_3[0].o)
                                            
                                            if ((temp0_3254 & 4) == 0)
                                                goto label_1401b3db7
                                            
                                            goto label_1401b3c92
                                        
                                    label_1401b3d9f:
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c20_3[0].o)
                                        
                                        if ((temp0_3254 & 4) == 0)
                                        label_1401b3db7:
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40[0].o)
                                            
                                            if ((temp0_3254 & 8) != 0)
                                                goto label_1401b3cbd
                                            
                                            goto label_1401b3dc7
                                        
                                    label_1401b3c92:
                                        zmm2[0].o = arg7[0].o
                                        arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg7[0].o = zmm2[0].o
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, 
                                            zx.d(*arg7[0].q), 2)
                                        arg5[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40[0].o)
                                        
                                        if ((temp0_3254 & 8) != 0)
                                        label_1401b3cbd:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            uint16_t rax_408[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, rax_408, 3)
                                            zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                            
                                            if ((temp0_3254 & 0x10) == 0)
                                                goto label_1401b3dd7
                                            
                                            goto label_1401b3ce9
                                        
                                    label_1401b3dc7:
                                        zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                        
                                        if ((temp0_3254 & 0x10) == 0)
                                        label_1401b3dd7:
                                            
                                            if ((temp0_3254 & 0x20) != 0)
                                                goto label_1401b3cfe
                                            
                                            goto label_1401b3de1
                                        
                                    label_1401b3ce9:
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, 
                                            zx.d(*zmm0[0]), 4)
                                        
                                        if ((temp0_3254 & 0x20) != 0)
                                        label_1401b3cfe:
                                            uint16_t rax_412[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, rax_412, 5)
                                            
                                            if ((temp0_3254 & 0x40) == 0)
                                                goto label_1401b3deb
                                            
                                            goto label_1401b3d10
                                        
                                    label_1401b3de1:
                                        
                                        if ((temp0_3254 & 0x40) != 0)
                                        label_1401b3d10:
                                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*zmm1[0].q), 6)
                                            
                                            if (temp0_3254 s< 0)
                                            label_1401b3d2c:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                                uint16_t rax_416[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_416, 7)
                                        else
                                        label_1401b3deb:
                                            
                                            if (temp0_3254 s< 0)
                                                goto label_1401b3d2c
                                        
                                        zmm0[0].o = arg11[0].o & arg7[0].o
                                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                            data_142d8f750)
                                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                                        zmm0 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm0, zmm1[0].o, 1), arg6)
                                        zmm1[0].o = zx.o(0)
                                        arg5 = _mm256_and_ps(zmm0, arg14)
                                        
                                        if (_mm256_movemask_ps(arg5) != i)
                                            zmm1 = _mm256_xor_ps(zmm0, arg6)
                                        
                                        arg13 = _mm256_blendv_ps(arg13, arg10, zmm0)
                                        arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                        zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                        zmm2[0].o = var_d60[0].o
                                        arg5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                        zmm2 = var_d20_4.32
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                        arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                        arg6 = _mm256_and_ps(arg5, zmm1)
                                        zmm1 = _mm256_and_ps(arg6, arg14)
                                        i = _mm256_movemask_ps(zmm1)
                                        arg10 = arg8
                                    while (i != 0)
                            
                            zmm2 = var_6a0.32
                            zmm0 = _mm256_andnot_ps(zmm2, arg14)
                            
                            if (_mm256_movemask_ps(zmm0) == 0)
                                arg11 = arg12
                                arg9 = var_ce0_3
                                arg15 = var_c20_3
                                arg10 = var_d00_2
                            else
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm1 = _mm256_xor_ps(zmm2, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                                arg13 = _mm256_blendv_ps(arg13, zmm0, zmm1)
                                arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_980[0].o)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0[0].o)
                                arg7[0].o = zx.o(0)
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                zmm5 = _mm256_and_ps(zmm4, zmm1)
                                zmm1 = _mm256_and_ps(zmm5, arg14)
                                int32_t i_1 = _mm256_movemask_ps(zmm1)
                                
                                if (i_1 == 0)
                                    arg15 = var_c20_3
                                    arg10 = var_d00_2
                                else
                                    arg11 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                    arg15 = var_c20_3
                                    arg10 = var_d00_2
                                    
                                    do
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                        arg5[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                                        char temp0_3321 = _mm256_movemask_ps(zmm1)
                                        
                                        if ((temp0_3321 & 1) == 0)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            
                                            if ((temp0_3321 & 2) != 0)
                                                goto label_1401b3f24
                                            
                                            goto label_1401b4036
                                        
                                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, 
                                            zx.d(*zmm0[0]), 0)
                                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                        
                                        if ((temp0_3321 & 2) != 0)
                                        label_1401b3f24:
                                            uint32_t rax_422 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_422, 1)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            zmm1[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                                            
                                            if ((temp0_3321 & 4) == 0)
                                                goto label_1401b4049
                                            
                                            goto label_1401b3f3f
                                        
                                    label_1401b4036:
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                                        
                                        if ((temp0_3321 & 4) == 0)
                                        label_1401b4049:
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40[0].o)
                                            
                                            if ((temp0_3321 & 8) != 0)
                                                goto label_1401b3f62
                                            
                                            goto label_1401b4059
                                        
                                    label_1401b3f3f:
                                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, 
                                            zx.d(*zmm2[0].q), 2)
                                        arg5[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40[0].o)
                                        
                                        if ((temp0_3321 & 8) != 0)
                                        label_1401b3f62:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            uint32_t rax_426 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_426, 3)
                                            zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                            
                                            if ((temp0_3321 & 0x10) == 0)
                                                goto label_1401b4069
                                            
                                            goto label_1401b3f8e
                                        
                                    label_1401b4059:
                                        zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                        
                                        if ((temp0_3321 & 0x10) == 0)
                                        label_1401b4069:
                                            
                                            if ((temp0_3321 & 0x20) != 0)
                                                goto label_1401b3fa3
                                            
                                            goto label_1401b4073
                                        
                                    label_1401b3f8e:
                                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, 
                                            zx.d(*zmm0[0]), 4)
                                        
                                        if ((temp0_3321 & 0x20) != 0)
                                        label_1401b3fa3:
                                            uint32_t rax_430 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_430, 5)
                                            
                                            if ((temp0_3321 & 0x40) == 0)
                                                goto label_1401b407d
                                            
                                            goto label_1401b3fb5
                                        
                                    label_1401b4073:
                                        
                                        if ((temp0_3321 & 0x40) != 0)
                                        label_1401b3fb5:
                                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, zx.d(*zmm1[0].q), 6)
                                            
                                            if (temp0_3321 s< 0)
                                            label_1401b3fd1:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                                uint32_t rax_434 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg8[0].o, rax_434, 7)
                                        else
                                        label_1401b407d:
                                            
                                            if (temp0_3321 s< 0)
                                                goto label_1401b3fd1
                                        
                                        zmm0[0].o = arg8[0].o & data_142fc92e0
                                        zmm1[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                        zmm1[0].o ^= arg6[0].o
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                                        zmm0[0].o ^= arg6[0].o
                                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                        zmm1 = _mm256_and_ps(zmm0, zmm5)
                                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm2 = _mm256_and_ps(zmm1, arg14)
                                        
                                        if (_mm256_movemask_ps(zmm2) != i_1)
                                            zmm0 = _mm256_xor_ps(zmm1, zmm5)
                                        
                                        arg13 = _mm256_blendv_ps(arg13, arg11, zmm1)
                                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                                        zmm2[0].o =
                                            __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                                        arg11 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                        zmm5 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm2, zmm1[0].o, 1), zmm0)
                                        zmm1 = _mm256_and_ps(zmm5, arg14)
                                        i_1 = _mm256_movemask_ps(zmm1)
                                    while (i_1 != 0)
                                
                                arg11 = arg12
                                arg9 = var_ce0_3
                            
                            arg7 = _mm256_blendv_ps(var_cc0_8, arg13, arg14)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                            var_cc0_8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x4e)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(var_cc0_8[0])
                            var_cc0_8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            
                            if ((rdx_48 & 1) != 0)
                                zmm2[0].o = zx.o(*zmm1[0].q)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(var_cc0_8[0])
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(var_cc0_8[0].o, 0x4e)
                            arg13[0].o = var_d70_1
                            arg10 = var_a80.32
                            
                            if ((rdx_48 & 2) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm4[0].o)
                                
                                if ((rdx_48 & 4) != 0)
                                    goto label_1401b8f7d
                                
                                goto label_1401b46e0
                            
                            uint32_t rax_643 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_643, 1)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm4[0].o)
                            
                            if ((rdx_48 & 4) != 0)
                            label_1401b8f7d:
                                zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0]), 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40[0].o)
                                
                                if ((rdx_48 & 8) == 0)
                                    goto label_1401b46ef
                                
                                goto label_1401b8f9f
                            
                        label_1401b46e0:
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d40[0].o)
                            
                            if ((rdx_48 & 8) == 0)
                            label_1401b46ef:
                                zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                
                                if ((rdx_48 & 0x10) != 0)
                                    goto label_1401b8fca
                                
                                goto label_1401b46fe
                            
                        label_1401b8f9f:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_647 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_647, 3)
                            zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                            
                            if ((rdx_48 & 0x10) != 0)
                            label_1401b8fca:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                
                                if ((rdx_48 & 0x20) == 0)
                                    goto label_1401b4707
                                
                                goto label_1401b8fde
                            
                        label_1401b46fe:
                            
                            if ((rdx_48 & 0x20) == 0)
                            label_1401b4707:
                                
                                if ((rdx_48 & 0x40) != 0)
                                    goto label_1401b8fef
                                
                                goto label_1401b4710
                            
                        label_1401b8fde:
                            uint32_t rax_651 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_651, 5)
                            
                            if ((rdx_48 & 0x40) == 0)
                            label_1401b4710:
                                
                                if (temp0_2966.b s< 0)
                                label_1401b900a:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_655 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_655, 7)
                            else
                            label_1401b8fef:
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*arg5[0].q), 6)
                                
                                if (temp0_2966.b s< 0)
                                    goto label_1401b900a
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            var_cc0_8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_cc0_8[0].o, zmm1[0].o)
                            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(arg5, var_cc0_8[0].o, 1)
                            arg8 = _mm256_blendv_ps(var_9a0_1, zmm0, arg14)
                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            var_9a0_1[0].o = var_d60[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_9a0_1[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm1[0].o
                            arg5 = var_d20_4.32
                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                            zmm1[0].o ^= arg5[0].o
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg14)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                arg8 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, var_ac0.32, zmm0)
                            
                            arg14 = var_bc0_1
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg8[0])
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d00_2[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            
                            if ((rdx_48 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                            arg12 = arg11
                            
                            if ((rdx_48 & 2) == 0)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm4[0].o)
                                
                                if ((rdx_48 & 4) != 0)
                                    goto label_1401b9043
                                
                                goto label_1401b47e7
                            
                            uint32_t rax_657 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_657, 1)
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm4[0].o)
                            
                            if ((rdx_48 & 4) != 0)
                            label_1401b9043:
                                zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm4[0]), 2)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_d40[0].o)
                                
                                if ((rdx_48 & 8) == 0)
                                    goto label_1401b47f6
                                
                                goto label_1401b9065
                            
                        label_1401b47e7:
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_d40[0].o)
                            
                            if ((rdx_48 & 8) == 0)
                            label_1401b47f6:
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((rdx_48 & 0x10) != 0)
                                    goto label_1401b9090
                                
                                goto label_1401b4805
                            
                        label_1401b9065:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint32_t rax_661 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_661, 3)
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            
                            if ((rdx_48 & 0x10) != 0)
                            label_1401b9090:
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                zmm2[0].o &= data_142fc92e0
                                
                                if ((rdx_48 & 0x20) == 0)
                                    goto label_1401b4816
                                
                                goto label_1401b90ac
                            
                        label_1401b4805:
                            zmm2[0].o &= data_142fc92e0
                            
                            if ((rdx_48 & 0x20) == 0)
                            label_1401b4816:
                                zmm4[0].o = zx.o(0)
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rdx_48 & 0x40) != 0)
                                    goto label_1401b90c6
                                
                                goto label_1401b4828
                            
                        label_1401b90ac:
                            uint32_t rax_665 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_665, 5)
                            zmm4[0].o = zx.o(0)
                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            
                            if ((rdx_48 & 0x40) == 0)
                            label_1401b4828:
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                var_ce0_2 = arg8
                                
                                if (temp0_2966.b s< 0)
                                label_1401b90ee:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_669 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_669, 7)
                            else
                            label_1401b90c6:
                                zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm5[0]), 6)
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                var_ce0_2 = arg8
                                
                                if (temp0_2966.b s< 0)
                                    goto label_1401b90ee
                            
                            arg15 = var_c80_1
                            zmm1 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            zmm0[0].o &= data_142fc92e0
                        else
                            zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            var_6a0.o = zmm0[0].o
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            var_d40[0].o = zmm2[0].o
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            char rdx_47 = temp0_2966.b
                            
                            if ((rdx_47 & 1) != 0)
                                zmm0[0].o = zx.o(*zmm1[0].q)
                            
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                            
                            if ((rdx_47 & 2) != 0)
                                int64_t rax_375 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_375, 1)
                            
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                            zmm4 = var_c20_3
                            arg7[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            
                            if ((rdx_47 & 4) == 0)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                                
                                if ((rdx_47 & 8) != 0)
                                    goto label_1401b4126
                                
                                goto label_1401b34ca
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 2)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                            
                            if ((rdx_47 & 8) != 0)
                            label_1401b4126:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_437 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_437, 3)
                                zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                
                                if ((rdx_47 & 0x10) == 0)
                                    goto label_1401b34d9
                                
                                goto label_1401b414b
                            
                        label_1401b34ca:
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            
                            if ((rdx_47 & 0x10) != 0)
                            label_1401b414b:
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                                
                                if ((rdx_47 & 0x20) != 0)
                                label_1401b4159:
                                    int64_t rax_439 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_439, 5)
                                    
                                    if ((rdx_47 & 0x40) == 0)
                                        goto label_1401b34ed
                                    
                                    goto label_1401b416d
                            else
                            label_1401b34d9:
                                
                                if ((rdx_47 & 0x20) != 0)
                                    goto label_1401b4159
                            
                            if ((rdx_47 & 0x40) != 0)
                            label_1401b416d:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                var_980[0].o = arg7[0].o
                                
                                if (temp0_2966.b s< 0)
                                label_1401b418e:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_441 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_441, 7)
                            else
                            label_1401b34ed:
                                var_980[0].o = arg7[0].o
                                
                                if (temp0_2966.b s< 0)
                                    goto label_1401b418e
                            
                            arg15 = var_c20_3
                            zmm1[0].o = zx.o(0)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = zx.o(rbx_29)
                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                            arg9 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
                            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm4[0].o ^= zmm0[0].o
                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            arg5[0].o ^= zmm0[0].o
                            arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            int32_t var_3e0
                            var_3e0.32 = arg5
                            arg5 = _mm256_and_ps(arg14, arg5)
                            
                            if (_mm256_movemask_ps(arg5) != 0)
                                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                arg12[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                                zmm2[0].o ^= zmm0[0].o
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                                zmm1[0].o ^= zmm0[0].o
                                zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                zmm5 = var_8a0
                                arg13 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, var_ac0.32, zmm2)
                                zmm1[0].o = var_6a0.o
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                                arg5[0].o = var_d60[0].o
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                zmm4 = var_d20_4.32
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                arg8 = _mm256_and_ps(arg5, zmm2)
                                arg10 = _mm256_and_ps(arg14, arg8)
                                int32_t i_2 = _mm256_movemask_ps(arg10)
                                
                                if (i_2 != 0)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                    
                                    do
                                        zmm4 = zmm0
                                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg15[0].o =
                                            __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d40[0].o)
                                        zmm2[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d00_2[0].o)
                                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                        char temp0_3085 = _mm256_movemask_ps(arg10)
                                        
                                        if ((temp0_3085 & 1) != 0)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *zmm0[0], 0)
                                        
                                        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
                                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                                        
                                        if ((temp0_3085 & 2) != 0)
                                            uint16_t* rax_384 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_384, 1)
                                        
                                        arg15 = var_c20_3
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                        arg10[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                                        
                                        if ((temp0_3085 & 4) == 0)
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_980[0].o)
                                            
                                            if ((temp0_3085 & 8) != 0)
                                                goto label_1401b3605
                                            
                                            goto label_1401b3726
                                        
                                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, 
                                            *zmm2[0].q, 2)
                                        zmm2[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_980[0].o)
                                        
                                        if ((temp0_3085 & 8) != 0)
                                        label_1401b3605:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            uint16_t* rax_378 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_378, 3)
                                            zmm0 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                                            
                                            if ((temp0_3085 & 0x10) == 0)
                                                goto label_1401b3736
                                            
                                            goto label_1401b362b
                                        
                                    label_1401b3726:
                                        zmm0 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                                        
                                        if ((temp0_3085 & 0x10) == 0)
                                        label_1401b3736:
                                            arg7[0].o = var_d60[0].o
                                            
                                            if ((temp0_3085 & 0x20) != 0)
                                                goto label_1401b3640
                                            
                                            goto label_1401b3746
                                        
                                    label_1401b362b:
                                        arg11[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *zmm0[0], 4)
                                        arg7[0].o = var_d60[0].o
                                        
                                        if ((temp0_3085 & 0x20) != 0)
                                        label_1401b3640:
                                            uint16_t* rax_380 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_380, 5)
                                            
                                            if ((temp0_3085 & 0x40) == 0)
                                                goto label_1401b3750
                                            
                                            goto label_1401b3655
                                        
                                    label_1401b3746:
                                        
                                        if ((temp0_3085 & 0x40) != 0)
                                        label_1401b3655:
                                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *zmm2[0].q, 6)
                                            
                                            if (temp0_3085 s< 0)
                                            label_1401b366e:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                                uint16_t* rax_382 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg11[0].o, *rax_382, 7)
                                        else
                                        label_1401b3750:
                                            
                                            if (temp0_3085 s< 0)
                                                goto label_1401b366e
                                        
                                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(arg11[0].o, 
                                            data_142d8f750)
                                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg11[0].q)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                                        zmm0 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm2, zmm0[0].o, 1), arg8)
                                        zmm2[0].o = zx.o(0)
                                        arg5 = _mm256_and_ps(zmm0, arg14)
                                        
                                        if (_mm256_movemask_ps(arg5) != i_2)
                                            zmm2 = _mm256_xor_ps(zmm0, arg8)
                                        
                                        arg13 = _mm256_blendv_ps(arg13, zmm5, zmm0)
                                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                        arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                                        zmm0 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                                        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_d20_4.32[0].o, 
                                            arg5[0].o)
                                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                        arg8 = _mm256_and_ps(zmm1, zmm2)
                                        arg10 = _mm256_and_ps(arg8, arg14)
                                        i_2 = _mm256_movemask_ps(arg10)
                                        zmm5 = zmm4
                                    while (i_2 != 0)
                            
                            zmm2 = var_3e0.32
                            zmm0 = _mm256_andnot_ps(zmm2, arg14)
                            
                            if (_mm256_movemask_ps(zmm0) == 0)
                                arg9 = var_ce0_3
                                zmm4 = var_d00_2
                                arg11[0].o = var_980[0].o
                            else
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm1 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                                zmm2 = _mm256_xor_ps(zmm2, zmm1)
                                arg13 = _mm256_blendv_ps(arg13, zmm0, zmm2)
                                arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_6a0.o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0[0].o)
                                arg7[0].o = zx.o(0)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                arg8 = _mm256_and_ps(arg5, zmm2)
                                arg10 = _mm256_and_ps(arg8, arg14)
                                int32_t i_3 = _mm256_movemask_ps(arg10)
                                
                                if (i_3 == 0)
                                    arg11[0].o = var_980[0].o
                                else
                                    zmm5 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    arg11[0].o = var_980[0].o
                                    
                                    do
                                        zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                        zmm0[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d40[0].o)
                                        arg5[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_d00_2[0].o)
                                        zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                        char temp0_3156 = _mm256_movemask_ps(arg10)
                                        
                                        if ((temp0_3156 & 1) == 0)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                            
                                            if ((temp0_3156 & 2) != 0)
                                                goto label_1401b3870
                                            
                                            goto label_1401b3985
                                        
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 0)
                                        arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                        
                                        if ((temp0_3156 & 2) != 0)
                                        label_1401b3870:
                                            int64_t rax_388 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_388, 1)
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            arg10[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                            
                                            if ((temp0_3156 & 4) == 0)
                                                goto label_1401b3998
                                            
                                            goto label_1401b388e
                                        
                                    label_1401b3985:
                                        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                        arg10[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                        
                                        if ((temp0_3156 & 4) == 0)
                                        label_1401b3998:
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm2[0].o)
                                            
                                            if ((temp0_3156 & 8) != 0)
                                                goto label_1401b38ac
                                            
                                            goto label_1401b39a6
                                        
                                    label_1401b388e:
                                        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                            *arg5[0].q, 2)
                                        zmm2[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm2[0].o)
                                        
                                        if ((temp0_3156 & 8) != 0)
                                        label_1401b38ac:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            int64_t rax_390 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_390, 3)
                                            zmm0 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                                            
                                            if ((temp0_3156 & 0x10) == 0)
                                                goto label_1401b39b6
                                            
                                            goto label_1401b38d2
                                        
                                    label_1401b39a6:
                                        zmm0 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                                        
                                        if ((temp0_3156 & 0x10) == 0)
                                        label_1401b39b6:
                                            
                                            if ((temp0_3156 & 0x20) != 0)
                                                goto label_1401b38e1
                                            
                                            goto label_1401b39c0
                                        
                                    label_1401b38d2:
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 4)
                                        
                                        if ((temp0_3156 & 0x20) != 0)
                                        label_1401b38e1:
                                            int64_t rax_392 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *rax_392, 5)
                                            
                                            if ((temp0_3156 & 0x40) == 0)
                                                goto label_1401b39ca
                                            
                                            goto label_1401b38f6
                                        
                                    label_1401b39c0:
                                        
                                        if ((temp0_3156 & 0x40) != 0)
                                        label_1401b38f6:
                                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, 
                                                *zmm2[0].q, 6)
                                            
                                            if (temp0_3156 s< 0)
                                            label_1401b390f:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                                int64_t rax_394 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm4[0].o, *rax_394, 7)
                                        else
                                        label_1401b39ca:
                                            
                                            if (temp0_3156 s< 0)
                                                goto label_1401b390f
                                        
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                        zmm0[0].o ^= arg6[0].o
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                                        zmm2[0].o ^= arg6[0].o
                                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                        zmm2 = _mm256_and_ps(zmm0, arg8)
                                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        arg5 = _mm256_and_ps(zmm2, arg14)
                                        
                                        if (_mm256_movemask_ps(arg5) != i_3)
                                            zmm0 = _mm256_xor_ps(zmm2, arg8)
                                        
                                        arg13 = _mm256_blendv_ps(arg13, zmm5, zmm2)
                                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                                        zmm5 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                        zmm2[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                        arg8 = _mm256_and_ps(zmm1, zmm0)
                                        arg10 = _mm256_and_ps(arg8, arg14)
                                        i_3 = _mm256_movemask_ps(arg10)
                                    while (i_3 != 0)
                                
                                arg9 = var_ce0_3
                                zmm4 = var_d00_2
                            
                            arg7 = _mm256_blendv_ps(var_cc0_8, arg13, arg14)
                            var_cc0_8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_cc0_8[0].o, var_cc0_8[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_d40[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            
                            if ((rdx_47 & 1) != 0)
                                zmm5[0].o = zx.o(*zmm1[0].q)
                            
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                            arg13[0].o = var_d70_1
                            arg10 = var_a80.32
                            
                            if ((rdx_47 & 2) == 0)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                
                                if ((rdx_47 & 4) != 0)
                                    goto label_1401b44c6
                                
                                goto label_1401b4347
                            
                            uint16_t* rax_457 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_457, 1)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                            
                            if ((rdx_47 & 4) != 0)
                            label_1401b44c6:
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg5[0].q, 2)
                                arg5 = var_9a0_1
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm2[0].o)
                                
                                if ((rdx_47 & 8) == 0)
                                    goto label_1401b435d
                                
                                goto label_1401b44ec
                            
                        label_1401b4347:
                            arg5 = var_9a0_1
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm2[0].o)
                            
                            if ((rdx_47 & 8) == 0)
                            label_1401b435d:
                                zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                
                                if ((rdx_47 & 0x10) != 0)
                                    goto label_1401b4511
                                
                                goto label_1401b436c
                            
                        label_1401b44ec:
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            uint16_t* rax_459 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_459, 3)
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            
                            if ((rdx_47 & 0x10) != 0)
                            label_1401b4511:
                                zmm5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0].q, 4)
                                
                                if ((rdx_47 & 0x20) == 0)
                                    goto label_1401b4375
                                
                                goto label_1401b451f
                            
                        label_1401b436c:
                            
                            if ((rdx_47 & 0x20) == 0)
                            label_1401b4375:
                                
                                if ((rdx_47 & 0x40) != 0)
                                    goto label_1401b4533
                                
                                goto label_1401b437e
                            
                        label_1401b451f:
                            uint16_t* rax_461 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_461, 5)
                            
                            if ((rdx_47 & 0x40) == 0)
                            label_1401b437e:
                                
                                if (temp0_2966.b s< 0)
                                label_1401b454b:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint16_t* rax_463 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_463, 7)
                            else
                            label_1401b4533:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm2[0].q, 6)
                                
                                if (temp0_2966.b s< 0)
                                    goto label_1401b454b
                            
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            var_cc0_8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_cc0_8[0].o, zmm1[0].o)
                            zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm2, var_cc0_8[0].o, 1)
                            arg8 = _mm256_blendv_ps(arg5, zmm0, arg14)
                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm2[0].o = var_d60[0].o
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm0[0].o ^= zmm1[0].o
                            zmm2 = var_d20_4.32
                            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                            zmm1[0].o ^= zmm2[0].o
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg14)
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                arg8 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, var_ac0.32, zmm0)
                            
                            arg14 = var_bc0_1
                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_d40[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_d00_2[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            
                            if ((rdx_47 & 1) == 0)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                
                                if ((rdx_47 & 2) != 0)
                                    goto label_1401b4580
                                
                                goto label_1401b4437
                            
                            zmm0[0].o = zx.o(*zmm1[0].q)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                            
                            if ((rdx_47 & 2) != 0)
                            label_1401b4580:
                                int64_t rax_466 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_466, 1)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                
                                if ((rdx_47 & 4) == 0)
                                    goto label_1401b4449
                                
                                goto label_1401b459d
                            
                        label_1401b4437:
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                            
                            if ((rdx_47 & 4) == 0)
                            label_1401b4449:
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                
                                if ((rdx_47 & 8) != 0)
                                    goto label_1401b45ba
                                
                                goto label_1401b4456
                            
                        label_1401b459d:
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg5[0].q, 2)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                            
                            if ((rdx_47 & 8) != 0)
                            label_1401b45ba:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_468 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_468, 3)
                                zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                
                                if ((rdx_47 & 0x10) == 0)
                                    goto label_1401b4465
                                
                                goto label_1401b45df
                            
                        label_1401b4456:
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                            
                            if ((rdx_47 & 0x10) == 0)
                            label_1401b4465:
                                
                                if ((rdx_47 & 0x20) != 0)
                                    goto label_1401b45ed
                                
                                goto label_1401b446e
                            
                        label_1401b45df:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                            
                            if ((rdx_47 & 0x20) != 0)
                            label_1401b45ed:
                                int64_t rax_470 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_470, 5)
                                arg5[0].o = zx.o(0)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                                
                                if ((rdx_47 & 0x40) == 0)
                                    goto label_1401b4480
                                
                                goto label_1401b460a
                            
                        label_1401b446e:
                            arg5[0].o = zx.o(0)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            
                            if ((rdx_47 & 0x40) != 0)
                            label_1401b460a:
                                zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0], 6)
                                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                var_ce0_2 = arg8
                                
                                if (temp0_2966.b s< 0)
                                label_1401b462f:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_472 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_472, 7)
                            else
                            label_1401b4480:
                                arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                var_ce0_2 = arg8
                                
                                if (temp0_2966.b s< 0)
                                    goto label_1401b462f
                            
                            arg15 = var_c80_1
                            zmm1 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        zmm2[0].o = zx.o(0)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2 = __vxorps_ymmqq_ymmqq_memqq(arg10, var_880.32)
                        arg5[0].o = zx.o(0)
                        zmm4[0].o = zx.o(0)
                        
                        if (arg18 != 1)
                            zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm5[0].o = data_142d3f5b0
                            zmm4[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                            zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                            zmm4[0].o = __vpermilps_xmmdq_memdq_immb(var_6f0.o, 0)
                            zmm1 = _mm256_sub_ps(_mm256_insertf128_ps(zmm4, zmm4[0].o, 1), 
                                _mm256_cvtepi32_ps(zmm1))
                            zmm0 = _mm256_cvtepi32_ps(zmm0)
                            zmm4 = _mm256_div_ps(zmm1, zmm0)
                        
                        arg11 = _mm256_blendv_ps(arg5, zmm4, zmm2)
                        arg6[0].o = var_aa0
                        zmm2 = var_a20.32
                        arg10 = var_b60_1.32
                    
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    arg12 = _mm256_blendv_ps(arg12, arg11, _mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
                    var_960_1 = arg12
                    zmm0[0].o = var_c60_1
                    zmm1 = var_ba0_1
                    zmm2 = var_c40_3
                    arg8[0].o = var_c00_2
                    zmm4[0].o = var_b40_1
            
            arg11 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
            double var_d00_3[0x4] = _mm256_insertf128_ps(arg15, zmm0[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm1, arg8[0].o, 1)
            double var_d60_2[0x4] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            arg5[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpmovzxdq_xmmdq_xmmq(arg9[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
            zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm2[0].q)
            zmm5 = var_9c0_2
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            float var_9a0_2[0x8] = arg7
            arg6[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            var_980[0].o = zmm5[0].o
            uint32_t var_b40_2[0x4] = arg6[0].o
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
            arg15[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            arg6[0].o = data_1434422d0
            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg6[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
            var_ba0_1[0].o = arg7[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            arg12[0].o = arg6[0].o & arg13[0].o
            arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
            arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            char temp0_3538 = __vpmovmskb_gpr32d_xmmdq(arg6[0].o)
            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
            var_c60_1.32 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
            var_d20_4.32 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            float var_d40_3[0x8] = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
            arg8 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
            uint32_t var_c20_4[0x8] = arg8
            arg9 = var_ca0_2
            var_c80_1[0].o = __vextractf128_memdq_ymmdq_immb(arg9[0].o, 1)
            var_c40_3[0].o = __vextractf128_memdq_ymmdq_immb(arg10[0].o, 1)
            int128_t var_c00_3 = arg15[0].o
            
            if (temp0_3538 != 0)
                uint32_t var_cc0_9[0x8] = arg11
                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_c80_1[0].o)
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                arg15 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_c40_3[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                zmm5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(var_a00_1[0].o, 0x1f)
                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                var_a00_1[0].o = _mm256_extractf128_ps(var_a00_1[0].o, 1)
                var_a00_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_a00_1[0].o, 0x1f)
                var_a00_1[0].o = __vpsrad_xmmdq_xmmdq_immb(var_a00_1[0].o, 0x1f)
                zmm0 = _mm256_insertf128_ps(zmm0, var_a00_1[0].o, 1)
                var_a20.32 = zmm2
                var_ac0.32 = zmm0
                zmm1 = _mm256_and_ps(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    zmm2[0].o = data_1434426b0
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                    arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                    zmm5 = _mm256_blendv_ps(zmm5, zmm2, zmm0)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    arg15 = _mm256_blendv_ps(arg15, arg5, zmm1)
                    arg11 = var_c60_1.32
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(var_d00_3[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg9 = var_d20_4.32
                    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg7 = var_d60_2
                    zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    arg13 = var_d40_3
                    zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg6[0].o = data_1434426c0
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d00_3[0].o, arg11[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                    arg8 = var_c20_4
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                    arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                    zmm4[0].o = zx.o(0)
                    zmm0 = _mm256_blendv_ps(zmm4, arg5, zmm0)
                    zmm1 = _mm256_blendv_ps(zmm4, zmm2, zmm1)
                    double r9_6 = zmm0[0]
                    int64_t r8_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    double r10_9 = zmm0[0]
                    int64_t rbx_30 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rdi_37 = zmm1[0].q
                    int64_t rsi_28 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    double rcx_61 = zmm0[0]
                    int64_t rax_480 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = zx.o(*(var_bc8 i+ r9_6))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + r8_16), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 i+ r10_9), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + rbx_30), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + rdi_37), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + rsi_28), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 i+ rcx_61), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + rax_480), 7)
                    zmm1[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    arg11 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                
                zmm2 = data_1434424e0
                zmm0 = var_b00_1
                arg6 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                zmm0[0].o ^= zmm4[0].o
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                zmm1[0].o ^= zmm4[0].o
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm1[0].o = arg12[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_3638 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                
                if (temp0_3638 == 0)
                    arg13 = var_a20.32
                    arg8 = var_ac0.32
                else
                    if ((temp0_3638 & 1) != 0)
                        zmm0[0].o = zx.o(*zmm5[0])
                    
                    if ((temp0_3638 & 2) != 0)
                        int64_t rax_483 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_483, 1)
                    
                    arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    
                    if ((temp0_3638 & 4) != 0)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 2)
                    
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    
                    if ((temp0_3638 & 8) != 0)
                        int64_t rax_485 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_485, 3)
                    
                    var_8a0 = arg6
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                    arg9[0].o = data_1434426b0
                    var_aa0 = arg7[0].o
                    var_a80.32 = arg11
                    
                    if ((temp0_3638 & 0x10) != 0)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg15[0].q, 4)
                    
                    arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                    arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                    arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x50)
                    arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                    
                    if ((temp0_3638 & 0x20) != 0)
                        int64_t rax_487 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_487, 5)
                    
                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                    arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xfa)
                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                    
                    if ((temp0_3638 & 0x40) != 0)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg7[0].q, 6)
                    
                    zmm1 = _mm256_insertf128_ps(arg11, arg13[0].o, 1)
                    zmm2 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                    arg5 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
                    zmm4 = _mm256_insertf128_ps(arg14, zmm4[0].o, 1)
                    
                    if (temp0_3638 s< 0)
                        int64_t rax_489 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_489, 7)
                    
                    arg14 = var_bc0_1
                    arg13 = var_a20.32
                    arg6 = var_8a0
                    arg7[0].o = var_aa0
                    arg8 = var_ac0.32
                    arg11 = var_a80.32
                    zmm5 = _mm256_blendv_ps(zmm5, zmm2, arg5)
                    arg15 = _mm256_blendv_ps(arg15, zmm1, zmm4)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    zmm2 = data_1434424e0
                
                arg8 = _mm256_blendv_ps(zmm2, arg11, arg8)
                zmm0 = var_b00_1
                arg11 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                zmm2[0].o ^= zmm4[0].o
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                arg5[0].o ^= zmm4[0].o
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                zmm2[0].o &= arg12[0].o
                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                char temp0_3684 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                
                if (temp0_3684 == 0)
                    arg15[0].o = var_c00_3
                else
                    if ((temp0_3684 & 1) == 0)
                        if ((temp0_3684 & 2) != 0)
                            goto label_1401b59bd
                        
                        goto label_1401b4f05
                    
                    arg5[0].o = zx.o(*zmm5[0])
                    
                    if ((temp0_3684 & 2) != 0)
                    label_1401b59bd:
                        int64_t rax_511 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_511, 1)
                        
                        if ((temp0_3684 & 4) == 0)
                            goto label_1401b4f0e
                        
                        goto label_1401b59d1
                    
                label_1401b4f05:
                    
                    if ((temp0_3684 & 4) == 0)
                    label_1401b4f0e:
                        
                        if ((temp0_3684 & 8) != 0)
                            goto label_1401b59ea
                        
                        goto label_1401b4f17
                    
                label_1401b59d1:
                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 2)
                    
                    if ((temp0_3684 & 8) != 0)
                    label_1401b59ea:
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        int64_t rax_513 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_513, 3)
                        
                        if ((temp0_3684 & 0x10) == 0)
                            goto label_1401b4f20
                        
                        goto label_1401b5a09
                    
                label_1401b4f17:
                    
                    if ((temp0_3684 & 0x10) == 0)
                    label_1401b4f20:
                        
                        if ((temp0_3684 & 0x20) != 0)
                            goto label_1401b5a17
                        
                        goto label_1401b4f29
                    
                label_1401b5a09:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg15[0].q, 4)
                    
                    if ((temp0_3684 & 0x20) != 0)
                    label_1401b5a17:
                        int64_t rax_515 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_515, 5)
                        
                        if ((temp0_3684 & 0x40) == 0)
                            goto label_1401b4f32
                        
                        goto label_1401b5a2b
                    
                label_1401b4f29:
                    
                    if ((temp0_3684 & 0x40) != 0)
                    label_1401b5a2b:
                        zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 6)
                        
                        if (temp0_3684 s< 0)
                        label_1401b5a43:
                            zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            int64_t rax_517 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_517, 7)
                    else
                    label_1401b4f32:
                        
                        if (temp0_3684 s< 0)
                            goto label_1401b5a43
                    
                    arg15[0].o = var_c00_3
                    zmm2[0].o = zx.o(0)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm2[0].o, 1))
                
                arg5[0].o = zx.o(0)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                zmm0[0].o ^= zmm4[0].o
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                zmm5[0].o ^= zmm4[0].o
                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                zmm5[0].o ^= zmm4[0].o
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                arg5[0].o ^= zmm4[0].o
                arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                zmm4 = data_143442a80
                zmm5 = _mm256_add_ps(arg8, zmm4)
                arg6 = data_143442aa0
                zmm5 = _mm256_mul_ps(zmm5, arg6)
                arg7 = _mm256_mul_ps(zmm5, zmm5)
                zmm1 = _mm256_and_ps(arg5, _mm256_mul_ps(_mm256_add_ps(zmm1, zmm4), arg6))
                arg5 = _mm256_mul_ps(zmm1, zmm1)
                zmm0 = _mm256_and_ps(zmm0, _mm256_mul_ps(_mm256_add_ps(zmm2, zmm4), arg6))
                zmm2 = _mm256_mul_ps(zmm0, zmm0)
                zmm4 = _mm256_sub_ps(data_142fc95a0, arg7)
                zmm2 = _mm256_sub_ps(_mm256_sub_ps(zmm4, arg5), zmm2)
                arg5 = _mm256_sqrt_ps(zmm2)
                var_940.32 = _mm256_maskstore_ps(arg13, zmm5)
                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                var_920.32 = _mm256_maskstore_ps(arg13, zmm1)
                zmm1 = _mm256_cmp_ps(zmm4, zmm2, 2)
                var_900.32 = _mm256_maskstore_ps(arg13, zmm0)
                var_8e0.32 = _mm256_maskstore_ps(arg13, _mm256_and_ps(zmm1, arg5))
                arg13[0].o = var_d70_1
                arg11 = var_cc0_9
            
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg11, var_9e0_1)
            double var_cc0_10[0x4] = zmm0
            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            zmm0[0].o = arg11[0].o ^ var_ba0_1[0].o
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, data_1434422d0)
            zmm1[0].o ^= arg11[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            var_9e0_1[0].o = zmm0[0].o
            zmm0[0].o &= arg13[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:11_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            
            if (not(cond:11_1))
                zmm0[0].o = data_142d3f5b0
                arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                zmm0[0].o &= arg13[0].o
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
                    arg5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm4 = var_c60_1.32
                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm1 = var_d00_3
                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                    arg6 = var_d20_4.32
                    zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm1 = var_d60_2
                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    arg9 = var_c20_4
                    arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg10 = var_d40_3
                    arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm1[0].o = data_1434426c0
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                    arg7 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm0[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg9[0].o = zx.o(0)
                    zmm4 = _mm256_blendv_ps(arg9, zmm1, zmm2)
                    zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                    zmm5 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg9, arg7, zmm5)
                    int64_t r8_17 = zmm1[0].q
                    void* rdi_38 = var_bc8 + r8_17
                    int64_t r9_7 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rax_492 = var_bc8 + r9_7
                    arg7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r10_10 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg6 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm1 = _mm256_blendv_ps(arg9, arg6, zmm5)
                    zmm0[0].o = *(zmm1[0].q + rdi_38)
                    float* rsi_30 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    float* r11_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_30 + rax_492), 0x10)
                    int64_t r14_8 = arg7[0].q
                    arg7 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm5 = _mm256_blendv_ps(arg9, arg7, zmm5)
                    float* rdx_52 = zmm1[0].q
                    int32_t* rbx_31 = zmm5[0]
                    float* rcx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o = *(rbx_31 + rdi_38)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    float* rdi_39 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    float* rbx_32 = zmm5[0]
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_64 + rax_492), 0x10)
                    double rax_493 = zmm4[0]
                    void* rcx_65 = var_bc8 + r14_8
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_52 + rcx_65), 0x20)
                    void* rdx_53 = var_bc8 i+ rax_493
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_32 + rcx_65), 0x20)
                    int64_t rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    void* rbx_33 = var_bc8 + r10_10
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_8 + rbx_33), 0x30)
                    int64_t rsi_31 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_39 + rbx_33), 0x30)
                    double rbx_34 = zmm4[0]
                    zmm4 = _mm256_blendv_ps(arg9, arg6, zmm2)
                    zmm5[0].o = *(zmm4[0] + rdx_53)
                    zmm2 = _mm256_blendv_ps(arg9, arg7, zmm2)
                    arg6[0].o = *(zmm2[0].q + rdx_53)
                    void* rdx_54 = var_bc8 + rcx_66
                    float* rdi_42 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_42 + rdx_54), 0x10)
                    float* rdi_43 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_43 + rdx_54), 0x10)
                    void* rdx_55 = var_bc8 i+ rbx_34
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm4[0] + rdx_55), 0x20)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm2[0].q + rdx_55), 0x20)
                    void* rdx_56 = var_bc8 + rsi_31
                    float* rdi_46 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_46 + rdx_56), 0x30)
                    float* rdi_47 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_47 + rdx_56), 0x30)
                    zmm5[0].o = *(var_bc8 i+ rax_493)
                    arg6[0].o = *(var_bc8 + r8_17)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_bc8 + r9_7), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_bc8 + r14_8), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_bc8 + r10_10), 0x30)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(var_bc8 + rcx_66), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(var_bc8 i+ rbx_34), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(var_bc8 + rsi_31), 0x30)
                    zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                    zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2 = _mm256_mul_ps(zmm5, zmm5)
                    zmm2 = _mm256_sub_ps(
                        _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm2), 
                            _mm256_mul_ps(zmm0, zmm0)), 
                        _mm256_mul_ps(zmm1, zmm1))
                    zmm4 = _mm256_sqrt_ps(zmm2)
                    var_940.32 = _mm256_maskstore_ps(arg5, zmm5)
                    var_920.32 = _mm256_maskstore_ps(arg5, zmm0)
                    zmm0 = _mm256_cmp_ps(arg9, zmm2, 1)
                    var_900.32 = _mm256_maskstore_ps(arg5, zmm1)
                    zmm0 = _mm256_and_ps(zmm0, zmm4)
                    var_8e0.32 = _mm256_maskstore_ps(arg5, zmm0)
                
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, data_142d3f5b0)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                arg5[0].o = zmm0[0].o ^ var_9e0_1[0].o
                zmm0[0].o = arg5[0].o & arg13[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm2[0].o = data_142fc95c0
                    arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                    zmm0[0].o &= arg13[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        var_8a0[0].o = arg5[0].o
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        var_aa0.32 = zmm1
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg10[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg9[0].o, 1)
                        zmm1[0].o = zx.o(0)
                        float var_760_3[0x8] = zmm1
                        float var_780_3[0x8] = zmm1
                        float var_7a0_3[0x8] = zmm1
                        float var_800_3[0x8] = zmm1
                        float var_820_3[0x8] = zmm1
                        float var_840_3[0x8] = zmm1
                        zmm2 = var_a00_1
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        arg12 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm2[0].o, 1))
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, var_cc0_10)
                        int32_t temp0_3844 = _mm256_movemask_ps(zmm0)
                        arg8 = var_b60_1.32
                        var_a20.32 = var_ca0_2
                        double var_ac0_1[0x2] = arg9[0].o
                        
                        if (temp0_3844 != 0)
                            char rdx_57 = temp0_3844.b
                            arg8 = var_b60_1.32
                            
                            if ((rdx_57 & 1) == 0)
                                arg13[0].o = var_c80_1[0].o
                                
                                if ((rdx_57 & 2) != 0)
                                    goto label_1401b73a7
                                
                                goto label_1401b550f
                            
                            arg9[0].o = *arg8[0]
                            arg13[0].o = var_c80_1[0].o
                            
                            if ((rdx_57 & 2) != 0)
                            label_1401b73a7:
                                int64_t rax_564 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                var_ca0_2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_564, 0x10)
                                arg9 = _mm256_blend_ps(arg9, var_ca0_2, 0xf)
                                
                                if ((rdx_57 & 4) == 0)
                                    goto label_1401b5518
                                
                                goto label_1401b73c2
                            
                        label_1401b550f:
                            
                            if ((rdx_57 & 4) == 0)
                            label_1401b5518:
                                
                                if ((rdx_57 & 8) != 0)
                                    goto label_1401b73e5
                                
                                goto label_1401b5521
                            
                        label_1401b73c2:
                            var_ca0_2[0].o = var_c40_3[0].o
                            var_ca0_2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *var_ca0_2[0].q, 0x20)
                            arg9 = _mm256_blend_ps(arg9, var_ca0_2, 0xf)
                            
                            if ((rdx_57 & 8) != 0)
                            label_1401b73e5:
                                var_ca0_2[0].o = var_c40_3[0].o
                                int64_t rax_566 = __vpextrq_gpr64q_xmmdq_immb(var_ca0_2[0].o, 1)
                                var_ca0_2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_566, 0x30)
                                arg9 = _mm256_blend_ps(arg9, var_ca0_2, 0xf)
                                var_ca0_2[0].o = data_1434426c0
                                
                                if ((rdx_57 & 0x10) == 0)
                                    goto label_1401b5532
                                
                                goto label_1401b7411
                            
                        label_1401b5521:
                            var_ca0_2[0].o = data_1434426c0
                            
                            if ((rdx_57 & 0x10) != 0)
                            label_1401b7411:
                                zmm2 = var_ca0_2
                                zmm2[0].o = zx.o(*zmm2[0].q)
                                arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 3)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, var_ca0_2[0].o)
                                zmm4[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                                
                                if ((rdx_57 & 0x20) != 0)
                                label_1401b5541:
                                    zmm2 = var_ca0_2
                                    int64_t rax_496 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_496, 0x10)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            else
                            label_1401b5532:
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, var_ca0_2[0].o)
                                zmm4[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                                
                                if ((rdx_57 & 0x20) != 0)
                                    goto label_1401b5541
                            
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_ca0_2[0].o, var_c40_3[0].o)
                            arg6[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                            
                            if ((rdx_57 & 0x40) != 0)
                                float* rax_497 = arg13[0].q
                                zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_497, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_ca0_2[0].o, var_ca0_2[0].o)
                            arg11[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm0 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                            arg7 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
                            
                            if (temp0_3844.b s< 0)
                                int64_t rax_498 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_498, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                            
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, var_ca0_2[0].o)
                            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            arg8 = _mm256_blendv_ps(arg8, zmm0, arg7)
                            var_7a0_3 = _mm256_maskstore_ps(arg12, arg9)
                            
                            if ((rdx_57 & 1) != 0)
                                zmm0[0].o = *arg8[0]
                            
                            arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            
                            if ((rdx_57 & 2) != 0)
                                int64_t rax_500 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_500, 0x10)
                                zmm0 = _mm256_blend_ps(zmm0, zmm4, 0xf)
                            
                            zmm4 = var_ca0_2
                            arg5 = _mm256_blendv_ps(zmm4, arg5, zmm2)
                            zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            
                            if ((rdx_57 & 4) == 0)
                                if ((rdx_57 & 8) != 0)
                                    goto label_1401b7467
                                
                                goto label_1401b563c
                            
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm4[0], 0x20)
                            zmm0 = _mm256_blend_ps(zmm0, zmm5, 0xf)
                            
                            if ((rdx_57 & 8) == 0)
                            label_1401b563c:
                                
                                if ((rdx_57 & 0x10) != 0)
                                label_1401b5646:
                                    zmm5[0].o = zx.o(*arg5[0].q)
                                    arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm5[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm5[0].o, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                            else
                            label_1401b7467:
                                int64_t rax_569 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_569, 0x30)
                                zmm0 = _mm256_blend_ps(zmm0, zmm5, 0xf)
                                
                                if ((rdx_57 & 0x10) != 0)
                                    goto label_1401b5646
                            
                            zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_ca0_2[0].o)
                            arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, var_ca0_2[0].o)
                            
                            if ((rdx_57 & 0x20) == 0)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_ca0_2[0].o)
                                var_ca0_2[0].o =
                                    __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_ca0_2[0].o)
                                
                                if ((rdx_57 & 0x40) != 0)
                                    goto label_1401b74b0
                                
                                goto label_1401b5684
                            
                            int64_t rax_570 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *rax_570, 0x10)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_ca0_2[0].o)
                            var_ca0_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_ca0_2[0].o)
                            
                            if ((rdx_57 & 0x40) == 0)
                            label_1401b5684:
                                zmm4 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg11, var_ca0_2[0].o, 1)
                                
                                if (temp0_3844.b s< 0)
                                label_1401b74db:
                                    float* rax_572 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_572, 0x30)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                            else
                            label_1401b74b0:
                                double rax_571 = zmm5[0]
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_571, 0x20)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg11, var_ca0_2[0].o, 1)
                                
                                if (temp0_3844.b s< 0)
                                    goto label_1401b74db
                            
                            arg13[0].o = var_d70_1
                            arg9[0].o = var_ac0_1
                            arg8 = _mm256_blendv_ps(arg8, zmm1, arg7)
                            var_a20.32 = _mm256_blendv_ps(arg5, zmm4, zmm2)
                            var_840_3 = _mm256_maskstore_ps(arg12, zmm0)
                        
                        arg10[0].o = __vpsrad_xmmdq_xmmdq_immb(arg10[0].o, 0x1f)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, data_142fc95c0)
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(var_b00_1, data_143442b00)
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg7[0].o = zx.o(0)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm1[0].o = zmm2[0].o & not.o(arg9[0].o)
                        zmm4[0].o = arg5[0].o & not.o(zmm0[0].o)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        arg6[0].o = zmm1[0].o & arg13[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        char temp0_3896 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_3896 == 0)
                            zmm4 = var_aa0.32
                        else
                            if ((temp0_3896 & 1) == 0)
                                arg13 = var_a20.32
                                
                                if ((temp0_3896 & 2) != 0)
                                    goto label_1401b7513
                                
                                goto label_1401b5741
                            
                            arg12[0].o = *arg8[0]
                            arg13 = var_a20.32
                            
                            if ((temp0_3896 & 2) != 0)
                            label_1401b7513:
                                float* rax_574 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_574, 0x10)
                                arg12 = _mm256_blend_ps(arg12, zmm1, 0xf)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                                zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                
                                if ((temp0_3896 & 4) == 0)
                                    goto label_1401b5755
                                
                                goto label_1401b753e
                            
                        label_1401b5741:
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                            zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            
                            if ((temp0_3896 & 4) != 0)
                            label_1401b753e:
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *zmm4[0], 0x20)
                                arg12 = _mm256_blend_ps(arg12, zmm5, 0xf)
                                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                
                                if ((temp0_3896 & 8) != 0)
                                label_1401b575f:
                                    float* rax_502 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *rax_502, 0x30)
                                    arg12 = _mm256_blend_ps(arg12, zmm1, 0xf)
                            else
                            label_1401b5755:
                                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                
                                if ((temp0_3896 & 8) != 0)
                                    goto label_1401b575f
                            
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            arg14[0].o = data_1434426c0
                            arg5[0].o ^= data_142d3f800
                            var_a80.o = arg10[0].o
                            
                            if ((temp0_3896 & 0x10) != 0)
                                zmm5[0].o = zx.o(*arg13[0].q)
                                arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm5[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm5[0].o, 3)
                                arg12 = _mm256_insertf128_ps(arg12, zmm5[0].o, 1)
                            
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg14[0].o)
                            arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                            zmm5[0].o = zmm2[0].o ^ data_142d3f800
                            
                            if ((temp0_3896 & 0x20) != 0)
                                int64_t rax_504 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_504, 0x10)
                                arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                            
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                            arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                            arg7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_ac0_1, 1)
                            zmm5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                            
                            if ((temp0_3896 & 0x40) != 0)
                                float* rax_505 = zmm1[0].q
                                zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_505, 0x20)
                                arg12 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                            zmm0 = _mm256_insertf128_ps(arg10, arg15[0].o, 1)
                            arg11 = _mm256_insertf128_ps(arg11, arg9[0].o, 1)
                            arg15 = _mm256_and_ps(zmm5, arg7)
                            
                            if (temp0_3896 s< 0)
                                int64_t rbx_35 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rbx_35, 0x30)
                                arg12 = _mm256_insertf128_ps(arg12, zmm5[0].o, 1)
                            
                            arg9[0].o = var_ac0_1
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            arg8 = _mm256_blendv_ps(arg8, zmm0, arg11)
                            var_780_3 = _mm256_maskstore_ps(arg15, arg12)
                            
                            if ((temp0_3896 & 1) == 0)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                
                                if ((temp0_3896 & 2) != 0)
                                    goto label_1401b757b
                                
                                goto label_1401b58a3
                            
                            zmm0[0].o = *arg8[0]
                            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            
                            if ((temp0_3896 & 2) != 0)
                            label_1401b757b:
                                int64_t rax_577 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                arg5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_577, 0x10)
                                zmm0 = _mm256_blend_ps(zmm0, arg5, 0xf)
                                zmm1 = _mm256_blendv_ps(arg13, zmm1, zmm2)
                                arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                
                                if ((temp0_3896 & 4) == 0)
                                    goto label_1401b58b8
                                
                                goto label_1401b75a7
                            
                        label_1401b58a3:
                            zmm1 = _mm256_blendv_ps(arg13, zmm1, zmm2)
                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            
                            if ((temp0_3896 & 4) == 0)
                            label_1401b58b8:
                                
                                if ((temp0_3896 & 8) != 0)
                                    goto label_1401b75bc
                                
                                goto label_1401b58c1
                            
                        label_1401b75a7:
                            zmm4[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *arg5[0].q, 0x20)
                            zmm0 = _mm256_blend_ps(zmm0, zmm4, 0xf)
                            
                            if ((temp0_3896 & 8) == 0)
                            label_1401b58c1:
                                
                                if ((temp0_3896 & 0x10) != 0)
                                label_1401b58cb:
                                    zmm4[0].o = zx.o(*zmm1[0].q)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                            else
                            label_1401b75bc:
                                int64_t rax_579 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_579, 0x30)
                                zmm0 = _mm256_blend_ps(zmm0, zmm4, 0xf)
                                
                                if ((temp0_3896 & 0x10) != 0)
                                    goto label_1401b58cb
                            
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg14[0].o)
                            
                            if ((temp0_3896 & 0x20) != 0)
                                int64_t rax_507 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_507, 0x10)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                            
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                            
                            if ((temp0_3896 & 0x40) != 0)
                                double rax_508 = zmm4[0]
                                arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_508, 0x20)
                                zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                            
                            arg5 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(arg12, arg6[0].o, 1)
                            
                            if (temp0_3896 s< 0)
                                int64_t rcx_69 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rcx_69, 0x30)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                            
                            zmm4 = var_aa0.32
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            arg10[0].o = var_a80.o
                            arg8 = _mm256_blendv_ps(arg8, zmm5, arg11)
                            zmm1 = _mm256_blendv_ps(zmm1, arg5, zmm2)
                            var_a20.32 = zmm1
                            var_820_3 = _mm256_maskstore_ps(arg15, zmm0)
                            arg13[0].o = var_d70_1
                            arg15[0].o = var_c00_3
                        
                        arg14 = _mm256_insertf128_ps(zmm4, arg10[0].o, 1)
                        zmm0[0].o = data_142fc95c0
                        arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_bc0_1[0].o)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(var_b00_1, data_143442b20)
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        zmm0[0].o = arg6[0].o & not.o(arg9[0].o)
                        zmm1[0].o = zmm4[0].o & not.o(arg12[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = zmm0[0].o & arg13[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_3982 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_3982 != 0)
                            if ((temp0_3982 & 1) == 0)
                                arg13 = var_a20.32
                                
                                if ((temp0_3982 & 2) != 0)
                                    goto label_1401b75f7
                                
                                goto label_1401b5ae3
                            
                            arg7[0].o = *arg8[0]
                            arg13 = var_a20.32
                            
                            if ((temp0_3982 & 2) != 0)
                            label_1401b75f7:
                                int64_t rax_581 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_581, 0x10)
                                arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                
                                if ((temp0_3982 & 4) == 0)
                                    goto label_1401b5af7
                                
                                goto label_1401b7622
                            
                        label_1401b5ae3:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            
                            if ((temp0_3982 & 4) != 0)
                            label_1401b7622:
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *arg5[0].q, 0x20)
                                arg7 = _mm256_blend_ps(arg7, zmm1, 0xf)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_3982 & 8) != 0)
                                label_1401b5b01:
                                    int64_t rax_518 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_518, 0x30)
                                    arg7 = _mm256_blend_ps(arg7, zmm1, 0xf)
                            else
                            label_1401b5af7:
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_3982 & 8) != 0)
                                    goto label_1401b5b01
                            
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg9[0].o = data_1434426c0
                            zmm4[0].o ^= data_142d3f800
                            
                            if ((temp0_3982 & 0x10) != 0)
                                zmm0[0].o = zx.o(*arg13[0].q)
                                zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm0[0].o, 3)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
                            arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                            arg6[0].o ^= data_142d3f800
                            
                            if ((temp0_3982 & 0x20) != 0)
                                int64_t rax_520 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_520, 0x10)
                                arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            arg15[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                            zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg12, var_ac0_1, 1)
                            zmm4 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
                            
                            if ((temp0_3982 & 0x40) != 0)
                                float* rax_521 = arg15[0].q
                                zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_521, 0x20)
                                arg7 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                            
                            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            arg10 = _mm256_and_ps(zmm4, zmm1)
                            
                            if (temp0_3982 s< 0)
                                int64_t rbx_36 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rbx_36, 0x30)
                                arg7 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                            
                            arg13[0].o = var_d70_1
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                            arg5 = _mm256_blendv_ps(arg8, zmm0, zmm2)
                            var_760_3 = _mm256_maskstore_ps(arg10, arg7)
                            
                            if ((temp0_3982 & 1) == 0)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, var_a20)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                                
                                if ((temp0_3982 & 2) != 0)
                                    goto label_1401b7661
                                
                                goto label_1401b5c27
                            
                            zmm0[0].o = *arg5[0].q
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, var_a20)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                            
                            if ((temp0_3982 & 2) == 0)
                            label_1401b5c27:
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                                
                                if ((temp0_3982 & 4) != 0)
                                label_1401b5c36:
                                    zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *zmm1[0].q, 0x20)
                                    zmm0 = _mm256_blend_ps(zmm0, zmm1, 0xf)
                            else
                            label_1401b7661:
                                int64_t rax_584 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_584, 0x10)
                                zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                                
                                if ((temp0_3982 & 4) != 0)
                                    goto label_1401b5c36
                            
                            arg15[0].o = var_c00_3
                            arg9[0].o = var_ac0_1
                            zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            
                            if ((temp0_3982 & 8) == 0)
                                arg5 = var_a20.32
                                zmm1 = _mm256_blendv_ps(arg5, zmm1, zmm2)
                                
                                if ((temp0_3982 & 0x10) != 0)
                                    goto label_1401b76c0
                                
                                goto label_1401b5c8c
                            
                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            int64_t rax_585 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_585, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, arg5, 0xf)
                            arg5 = var_a20.32
                            zmm1 = _mm256_blendv_ps(arg5, zmm1, zmm2)
                            
                            if ((temp0_3982 & 0x10) != 0)
                            label_1401b76c0:
                                zmm2[0].o = *zmm1[0].q
                                arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                
                                if ((temp0_3982 & 0x20) == 0)
                                    goto label_1401b5c95
                                
                                goto label_1401b76df
                            
                        label_1401b5c8c:
                            
                            if ((temp0_3982 & 0x20) == 0)
                            label_1401b5c95:
                                
                                if ((temp0_3982 & 0x40) != 0)
                                    goto label_1401b7700
                                
                                goto label_1401b5ca6
                            
                        label_1401b76df:
                            int64_t rax_587 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_587, 0x10)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            
                            if ((temp0_3982 & 0x40) == 0)
                            label_1401b5ca6:
                                
                                if (temp0_3982 s< 0)
                                label_1401b772d:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rcx_84 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rcx_84, 0x30)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            else
                            label_1401b7700:
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                float* rax_588 = zmm2[0].q
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_588, 0x20)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                
                                if (temp0_3982 s< 0)
                                    goto label_1401b772d
                            
                            var_800_3 = _mm256_maskstore_ps(arg10, zmm0)
                        
                        arg5 = var_c60_1.32
                        zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm2 = var_d00_3
                        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm5 = var_d20_4.32
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_d60_2[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60_2[0].o, zmm5[0].o)
                        zmm5 = var_c20_4
                        var_d60_2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg8 = var_d40_3
                        arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg7[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60_2[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm2 = _mm256_blendv_ps(zmm0, zmm2, arg5)
                        arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        var_d60_2[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        zmm1 = _mm256_blendv_ps(zmm0, zmm1, 
                            _mm256_insertf128_ps(var_d60_2, arg5[0].o, 1))
                        int64_t r8_18 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_71 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_60 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_37 = zmm2[0].q
                        int64_t rdi_48 = zmm1[0].q
                        int64_t rsi_32 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_523 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o = zx.o(*(var_bc8 + rcx_71))
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + r8_18), 1)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rbx_37), 2)
                        int64_t rcx_72 = zmm1[0].q
                        zmm1[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rdx_60), 3)
                        zmm2[0].o = zx.o(*(var_bc8 + rdi_48))
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rsi_32), 1)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rcx_72), 2)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rax_523), 3)
                        arg5 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        var_d60_2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm5[0].o = data_143442440
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                        var_d60_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_d60_2[0].o, zmm5[0].o)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(var_d60_2, zmm1[0].o, 1))
                        zmm4 = data_143442460
                        zmm1 = _mm256_div_ps(zmm1, zmm4)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                        zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(zmm1, var_840_3), var_7a0_3)
                        arg6[0].o = data_143442480
                        zmm2[0].o &= arg6[0].o
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        arg6[0].o &= arg7[0].o
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                        zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm2[0].o, 1)), 
                                zmm4), 
                            var_820_3)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm5[0].o = data_143442490
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        arg5 = __vdivps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm4[0].o, 1)), 
                            data_1434424a0)
                        zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_780_3)
                        arg5 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(arg5, var_800_3), var_760_3)
                        zmm4 = _mm256_mul_ps(zmm1, zmm1)
                        zmm4 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm4), 
                                _mm256_mul_ps(zmm2, zmm2)), 
                            _mm256_mul_ps(arg5, arg5))
                        zmm5 = _mm256_sqrt_ps(zmm4)
                        var_940.32 = _mm256_maskstore_ps(arg14, zmm1)
                        var_920.32 = _mm256_maskstore_ps(arg14, zmm2)
                        zmm0 = _mm256_cmp_ps(zmm0, zmm4, 1)
                        var_900.32 = _mm256_maskstore_ps(arg14, arg5)
                        zmm0 = _mm256_and_ps(zmm0, zmm5)
                        var_8e0.32 = _mm256_maskstore_ps(arg14, zmm0)
                        arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        arg14 = var_bc0_1
                        zmm2[0].o = data_142fc95c0
                        arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        arg5[0].o = var_8a0[0].o
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                    arg10[0].o = arg5[0].o ^ zmm0[0].o
                    zmm0[0].o = arg10[0].o & arg13[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        arg8[0].o = data_143442ac0
                        arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg8[0].o)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg8[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                        zmm0[0].o &= arg13[0].o
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
                            zmm5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            arg5 = var_c60_1.32
                            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm1 = var_d00_3
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg5 = var_d20_4.32
                            arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm1 = var_d60_2
                            arg7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg11 = var_c20_4
                            arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            arg12 = var_d40_3
                            zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm1[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            arg5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg12[0].o = zx.o(0)
                            zmm1 = _mm256_blendv_ps(arg12, zmm1, arg5)
                            arg5[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                            zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            zmm2 = _mm256_blendv_ps(arg12, zmm2, arg5)
                            int64_t r8_19 = zmm1[0].q
                            int64_t rcx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rdx_61 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_38 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rdi_49 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rsi_33 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rax_526 = zmm2[0].q
                            zmm2[0].o = zx.o(*(var_bc8 + r8_19))
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rcx_73), 1)
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rdi_49), 2)
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rdx_61), 3)
                            int64_t rcx_74 = zmm1[0].q
                            zmm1[0].o = zx.o(*(var_bc8 + rax_526))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_bc8 + rbx_38), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_bc8 + rcx_74), 2)
                            arg6[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_bc8 + rsi_33), 3)
                            zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0x15)
                            zmm4 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                            arg11[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                            arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 5)
                            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 5)
                            zmm0 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                            arg13 = data_1434422e0
                            zmm0 = _mm256_and_ps(zmm0, arg13)
                            arg14 = data_143442300
                            zmm4 = _mm256_and_ps(zmm4, arg14)
                            zmm0 = _mm256_or_ps(zmm0, zmm4)
                            zmm4[0].o = data_143442320
                            arg5[0].o &= zmm4[0].o
                            arg7[0].o = data_143442330
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                            zmm1[0].o &= zmm4[0].o
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                            zmm0 = _mm256_or_ps(zmm0, zmm1)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 6)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 6)
                            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0xa)
                            zmm1 = _mm256_and_ps(zmm1, arg13)
                            arg13 = _mm256_and_ps(_mm256_insertf128_ps(arg11, arg5[0].o, 1), arg14)
                            arg14 = var_bc0_1
                            zmm1 = _mm256_or_ps(zmm1, arg13)
                            arg5[0].o &= zmm4[0].o
                            zmm4[0].o &= arg11[0].o
                            arg13[0].o = var_d70_1
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                            arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                            zmm4 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x11)
                            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x11)
                            zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                            arg6 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442340)
                            zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442360)
                            zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442380)
                            zmm1 = _mm256_or_ps(zmm1, arg5)
                            zmm2 = _mm256_or_ps(zmm2, zmm4)
                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            zmm4[0].o = data_1434423a0
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                            zmm2 = _mm256_or_ps(zmm2, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                            arg5 = _mm256_mul_ps(zmm0, zmm0)
                            arg5 = _mm256_sub_ps(data_142fc95a0, arg5)
                            zmm4 = _mm256_mul_ps(zmm1, zmm1)
                            arg5 = _mm256_sub_ps(arg5, zmm4)
                            var_940.32 = _mm256_maskstore_ps(zmm5, zmm0)
                            var_920.32 = _mm256_maskstore_ps(zmm5, zmm1)
                            zmm0 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm2, zmm2))
                            var_900.32 = _mm256_maskstore_ps(zmm5, zmm2)
                            zmm1 = _mm256_cmp_ps(arg12, zmm0, 1)
                            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                            zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                            var_8e0.32 = _mm256_maskstore_ps(zmm5, zmm0)
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg8[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                        zmm0[0].o ^= arg10[0].o
                        arg9[0].o = zmm0[0].o & arg13[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg9[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0[0].o = data_142fc95e0
                            arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                            zmm2[0].o &= arg9[0].o
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
                                zmm1 = var_c60_1.32
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm4[0].o = _mm256_extractf128_ps(var_d00_3[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d00_3[0].o, zmm1[0].o)
                                zmm1 = var_d20_4.32
                                zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                arg6[0].o = _mm256_extractf128_ps(var_d60_2[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60_2[0].o, zmm1[0].o)
                                arg10 = var_c20_4
                                arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg12 = var_d40_3
                                var_d60_2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm1[0].o = data_1434426c0
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                var_d60_2[0].o =
                                    __vpaddq_xmmdq_xmmdq_xmmdq(var_d60_2[0].o, arg5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                                arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                zmm0 = _mm256_insertf128_ps(arg5, var_d60_2[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                arg5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                zmm4 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg10[0].o = zx.o(0)
                                zmm1 = _mm256_blendv_ps(arg10, zmm1, zmm4)
                                zmm4[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                zmm0 = _mm256_blendv_ps(arg10, zmm0, 
                                    _mm256_insertf128_ps(zmm4, zmm5[0].o, 1))
                                int64_t r8_20 = zmm1[0].q
                                int64_t rcx_75 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rdx_62 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rbx_39 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rdi_50 = zmm1[0].q
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rsi_34 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                double rax_529 = zmm0[0]
                                zmm0[0].o = zx.o(*(var_bc8 + r8_20))
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rcx_75), 1)
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rdi_50), 2)
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rdx_62), 3)
                                int64_t rcx_76 = zmm1[0].q
                                zmm1[0].o = zx.o(*(var_bc8 i+ rax_529))
                                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                    *(var_bc8 + rbx_39), 1)
                                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                    *(var_bc8 + rcx_76), 2)
                                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                    *(var_bc8 + rsi_34), 3)
                                zmm4 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                                arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                                arg7[0].o = data_143442440
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                                zmm5 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, arg6[0].o, 1))
                                arg6 = data_143442460
                                zmm5 = _mm256_div_ps(zmm5, arg6)
                                zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                                zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                                arg5[0].o = data_143442480
                                zmm1[0].o &= arg5[0].o
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                zmm0[0].o &= arg5[0].o
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                zmm0 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)), 
                                    arg6)
                                zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442420)
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm4[0].o = data_143442490
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                zmm1 = __vdivps_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, arg5[0].o, 1)), 
                                    data_1434424a0)
                                arg5 = _mm256_mul_ps(zmm5, zmm5)
                                arg5 = _mm256_sub_ps(
                                    _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, arg5), 
                                        _mm256_mul_ps(zmm0, zmm0)), 
                                    _mm256_mul_ps(zmm1, zmm1))
                                zmm4 = _mm256_sqrt_ps(arg5)
                                var_940.32 = _mm256_maskstore_ps(zmm2, zmm5)
                                var_920.32 = _mm256_maskstore_ps(zmm2, zmm0)
                                zmm0 = _mm256_cmp_ps(arg10, arg5, 1)
                                var_900.32 = _mm256_maskstore_ps(zmm2, zmm1)
                                zmm0 = _mm256_and_ps(zmm0, zmm4)
                                var_8e0.32 = _mm256_maskstore_ps(zmm2, zmm0)
                            
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm0[0].o = arg8[0].o ^ zmm2[0].o
                            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, data_142fc95e0)
                            zmm2[0].o ^= arg5[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm0[0].o &= arg9[0].o
                            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                                zmm2[0].o = data_143442ad0
                                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                                zmm1[0].o &= arg9[0].o
                                zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                                zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                                    zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                    zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                    zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                    zmm4[0].o = zx.o(0)
                                    var_940.32 = _mm256_maskstore_ps(zmm1, zmm4)
                                    var_920.32 = _mm256_maskstore_ps(zmm1, zmm4)
                                    var_900.32 = _mm256_maskstore_ps(zmm1, zmm4)
                                    zmm4 = data_142fc95a0
                                    var_8e0.32 = _mm256_maskstore_ps(zmm1, zmm4)
                                
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg5[0].o ^= zmm1[0].o
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                                zmm1[0].o ^= zmm2[0].o
                                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
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
                                    var_940.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    var_920.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    var_900.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    zmm1 = data_142fc95a0
                                    var_8e0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            arg5 = var_ce0_2
            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_b40_2)
            zmm1[0].o ^= arg11[0].o
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg5[0].o, var_9a0_2[0].o)
            zmm2[0].o ^= arg11[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            arg7[0].o = zmm1[0].o & arg13[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                arg8 = var_a60_3
            else
                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg7[0].q)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                arg9[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, data_1434422d0)
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm1[0].o, var_ba0_1[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg5[0].o, var_9c0_2[0].o)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_980[0].o)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                uint32_t var_c20_5[0x8] = zmm0
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                double var_ba0_2[0x4] = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                arg12 = var_d20_4.32
                arg11[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                zmm5 = var_c60_1.32
                var_9c0_2[0].o = __vextractf128_memdq_ymmdq_immb(zmm5[0].o, 1)
                arg6[0].o = arg7[0].o & zmm4[0].o
                zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                bool cond:15_1 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0
                int128_t var_d70_2 = arg7[0].o
                arg10 = var_b60_1.32
                double var_680[0x4]
                double var_660[0x4]
                float var_640[0x8]
                float var_620[0x8]
                
                if (not(cond:15_1))
                    var_ce0_2[0].o = arg9[0].o
                    var_b40_2.32 = arg8
                    arg7[0].o = var_9c0_2[0].o
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, var_c80_1[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_ca0_2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                    arg9 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg11[0].o, var_c40_3[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg10[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    arg8 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm1 = var_a00_1
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    arg13 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm2 = _mm256_and_ps(arg13, arg5)
                    var_9a0_2 = arg5
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm1[0].o = data_1434426b0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg8 = _mm256_blendv_ps(arg8, zmm1, zmm0)
                        zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        arg9 = _mm256_blendv_ps(arg9, arg5, zmm1)
                        arg5 = var_d00_3
                        zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        arg10 = var_c20_5
                        zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm5[0].o = data_1434426c0
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        arg7 = var_d60_2
                        zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(var_ba0_2[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0_2[0].o, zmm4[0].o)
                        arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                        zmm4[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(zmm4, arg5, zmm0)
                        zmm1 = _mm256_blendv_ps(zmm4, zmm2, zmm1)
                        double r9_8 = zmm0[0]
                        int64_t r8_21 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        double r10_11 = zmm0[0]
                        int64_t rbx_40 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_51 = zmm1[0].q
                        int64_t rsi_35 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        double rcx_77 = zmm0[0]
                        int64_t rax_536 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = zx.o(*(var_bc8 i+ r9_8))
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + r8_21), 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 i+ r10_11), 2)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + rbx_40), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + rdi_51), 4)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + rsi_35), 5)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 i+ rcx_77), 6)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_bc8 + rax_536), 7)
                        zmm1[0].o = zx.o(0)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                        var_980 = zmm0
                    
                    arg5 = var_b00_1
                    arg10 = data_1434424e0
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442b00)
                    arg15[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm4[0].o = zx.o(0)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zx.o(0))
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    zmm0[0].o ^= zmm2[0].o
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zx.o(0))
                    zmm1[0].o ^= zmm2[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm0[0].o &= arg6[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    char temp0_4472 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                    
                    if (temp0_4472 == 0)
                        zmm0 = var_980
                    else
                        if ((temp0_4472 & 1) != 0)
                            zmm2[0].o = zx.o(*arg8[0])
                        
                        if ((temp0_4472 & 2) != 0)
                            int64_t rax_539 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_539, 1)
                        
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        
                        if ((temp0_4472 & 4) != 0)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm4[0], 2)
                        
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        var_d40_3[0].o = arg11[0].o
                        int128_t var_ac0_2 = arg15[0].o
                        
                        if ((temp0_4472 & 8) != 0)
                            int64_t rax_541 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_541, 3)
                        
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg12[0].o = data_1434426b0
                        
                        if ((temp0_4472 & 0x10) != 0)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg9[0].q, 4)
                        
                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
                        arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
                        arg15[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                        arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        var_a20.32 = zmm5
                        
                        if ((temp0_4472 & 0x20) != 0)
                            int64_t rax_543 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_543, 5)
                        
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg12[0].o)
                        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        
                        if ((temp0_4472 & 0x40) != 0)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 6)
                        
                        arg11[0].o = var_d40_3[0].o
                        zmm0 = _mm256_insertf128_ps(arg14, zmm1[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(arg10, zmm4[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg15, arg7[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
                        
                        if (temp0_4472 s< 0)
                            int64_t rax_545 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_545, 7)
                        
                        arg5 = var_b00_1
                        arg15[0].o = var_ac0_2
                        arg10 = data_1434424e0
                        arg8 = _mm256_blendv_ps(arg8, zmm1, zmm4)
                        arg9 = _mm256_blendv_ps(arg9, zmm0, zmm5)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        arg7 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                        arg12 = var_d20_4.32
                        zmm5 = var_a20.32
                        zmm0 = var_980
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    
                    arg10 = _mm256_blendv_ps(arg10, zmm0, arg13)
                    arg13 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442b20)
                    zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                    arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    zmm0[0].o ^= arg14[0].o
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
                    zmm1[0].o ^= arg14[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm0[0].o &= arg6[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_4518 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_4518 == 0)
                        arg8 = var_b40_2.32
                        arg9[0].o = var_ce0_2[0].o
                    else
                        if ((temp0_4518 & 1) == 0)
                            if ((temp0_4518 & 2) != 0)
                                goto label_1401b72e7
                            
                            goto label_1401b6c10
                        
                        arg6[0].o = zx.o(*arg8[0])
                        
                        if ((temp0_4518 & 2) != 0)
                        label_1401b72e7:
                            int64_t rax_556 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_556, 1)
                            
                            if ((temp0_4518 & 4) == 0)
                                goto label_1401b6c19
                            
                            goto label_1401b72fb
                        
                    label_1401b6c10:
                        
                        if ((temp0_4518 & 4) == 0)
                        label_1401b6c19:
                            
                            if ((temp0_4518 & 8) != 0)
                                goto label_1401b7314
                            
                            goto label_1401b6c22
                        
                    label_1401b72fb:
                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0], 2)
                        
                        if ((temp0_4518 & 8) != 0)
                        label_1401b7314:
                            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            int64_t rax_558 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_558, 3)
                            arg8 = var_b40_2.32
                            
                            if ((temp0_4518 & 0x10) == 0)
                                goto label_1401b6c34
                            
                            goto label_1401b733c
                        
                    label_1401b6c22:
                        arg8 = var_b40_2.32
                        
                        if ((temp0_4518 & 0x10) == 0)
                        label_1401b6c34:
                            
                            if ((temp0_4518 & 0x20) != 0)
                                goto label_1401b734a
                            
                            goto label_1401b6c3d
                        
                    label_1401b733c:
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg9[0].q, 4)
                        
                        if ((temp0_4518 & 0x20) != 0)
                        label_1401b734a:
                            int64_t rax_560 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_560, 5)
                            
                            if ((temp0_4518 & 0x40) == 0)
                                goto label_1401b6c46
                            
                            goto label_1401b735e
                        
                    label_1401b6c3d:
                        
                        if ((temp0_4518 & 0x40) != 0)
                        label_1401b735e:
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0], 6)
                            
                            if (temp0_4518 s< 0)
                            label_1401b7376:
                                zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                int64_t rax_562 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_562, 7)
                        else
                        label_1401b6c46:
                            
                            if (temp0_4518 s< 0)
                                goto label_1401b7376
                        
                        arg9[0].o = var_ce0_2[0].o
                        zmm0[0].o = zx.o(0)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                    
                    zmm1[0].o = zx.o(0)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    zmm2[0].o ^= arg5[0].o
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                    zmm4[0].o ^= arg5[0].o
                    zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                    zmm4[0].o ^= arg5[0].o
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    zmm1[0].o ^= arg5[0].o
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                    arg5 = data_143442a80
                    zmm4 = _mm256_add_ps(arg10, arg5)
                    zmm5 = data_143442aa0
                    zmm4 = _mm256_mul_ps(zmm4, zmm5)
                    arg6 = _mm256_mul_ps(zmm4, zmm4)
                    zmm1 = _mm256_and_ps(zmm1, _mm256_mul_ps(_mm256_add_ps(arg7, arg5), zmm5))
                    arg7 = _mm256_mul_ps(zmm1, zmm1)
                    zmm0 = _mm256_and_ps(zmm2, _mm256_mul_ps(_mm256_add_ps(zmm0, arg5), zmm5))
                    zmm2 = _mm256_mul_ps(zmm0, zmm0)
                    zmm2 = _mm256_sub_ps(_mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, arg6), arg7), 
                        zmm2)
                    arg5 = _mm256_sqrt_ps(zmm2)
                    zmm5 = var_9a0_2
                    var_680 = _mm256_maskstore_ps(zmm5, zmm4)
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    var_660 = _mm256_maskstore_ps(zmm5, zmm1)
                    zmm1 = _mm256_cmp_ps(zmm4, zmm2, 2)
                    var_640 = _mm256_maskstore_ps(zmm5, zmm0)
                    zmm0 = _mm256_and_ps(zmm1, arg5)
                    var_620 = _mm256_maskstore_ps(zmm5, zmm0)
                    arg14 = var_bc0_1
                    arg10 = var_b60_1.32
                    arg7[0].o = var_d70_2
                    arg15[0].o = var_c00_3
                
                arg13 = _mm256_insertf128_ps(arg8, arg9[0].o, 1)
                zmm0[0].o = arg7[0].o & var_9e0_1[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm0[0].o = data_142d3f5b0
                    arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm0[0].o &= arg7[0].o
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
                        arg5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm1 = var_d00_3
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_9c0_2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60_1)
                        zmm1 = var_d60_2
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        arg9 = var_ba0_2
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg8 = arg12
                        zmm1[0].o = arg11[0].o
                        arg11 = arg13
                        arg10[0].o = zmm1[0].o
                        arg12 = var_c20_5
                        arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm1[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                        arg7[0].o = arg10[0].o
                        arg13 = arg11
                        arg11[0].o = arg7[0].o
                        arg12 = arg8
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg9[0].o = zx.o(0)
                        zmm5 = _mm256_blendv_ps(arg9, zmm1, zmm4)
                        zmm1[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                        arg6 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg9, zmm0, arg6)
                        double r8_22 = zmm0[0]
                        void* rdi_52 = var_bc8 i+ r8_22
                        int64_t r9_9 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rax_548 = var_bc8 + r9_9
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r10_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg7 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm1 = _mm256_blendv_ps(arg9, arg7, arg6)
                        zmm2[0].o = *(zmm1[0].q + rdi_52)
                        float* rsi_37 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        float* r11_9 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_37 + rax_548), 0x10)
                        double r14_9 = zmm0[0]
                        zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        arg6 = _mm256_blendv_ps(arg9, zmm0, arg6)
                        float* rdx_66 = zmm1[0].q
                        int32_t* rbx_41 = arg6[0].q
                        float* rcx_80 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = *(rbx_41 + rdi_52)
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        float* rdi_53 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        float* rbx_42 = arg6[0].q
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_80 + rax_548), 0x10)
                        double rax_549 = zmm5[0]
                        void* rcx_81 = var_bc8 i+ r14_9
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_66 + rcx_81), 0x20)
                        void* rdx_67 = var_bc8 i+ rax_549
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_42 + rcx_81), 0x20)
                        int64_t rcx_82 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        void* rbx_43 = var_bc8 + r10_12
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_9 + rbx_43), 0x30)
                        int64_t rsi_38 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_53 + rbx_43), 0x30)
                        double rbx_44 = zmm5[0]
                        zmm5 = _mm256_blendv_ps(arg9, arg7, zmm4)
                        arg7[0].o = var_d70_2
                        arg6[0].o = *(zmm5[0] + rdx_67)
                        zmm0 = _mm256_blendv_ps(arg9, zmm0, zmm4)
                        zmm4[0].o = *(zmm0[0] + rdx_67)
                        void* rdx_68 = var_bc8 + rcx_82
                        float* rdi_56 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_56 + rdx_68), 0x10)
                        float* rdi_57 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_57 + rdx_68), 0x10)
                        void* rdx_69 = var_bc8 i+ rbx_44
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm5[0] + rdx_69), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(zmm0[0] + rdx_69), 0x20)
                        void* rdx_70 = var_bc8 + rsi_38
                        float* rdi_60 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_60 + rdx_70), 0x30)
                        float* rdi_61 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_61 + rdx_70), 0x30)
                        zmm4[0].o = *(var_bc8 i+ rax_549)
                        arg6[0].o = *(var_bc8 i+ r8_22)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_bc8 + r9_9), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_bc8 i+ r14_9), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_bc8 + r10_12), 0x30)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(var_bc8 + rcx_82), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(var_bc8 i+ rbx_44), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(var_bc8 + rsi_38), 0x30)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1 = _mm256_mul_ps(zmm4, zmm4)
                        zmm1 = _mm256_sub_ps(
                            _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm1), 
                                _mm256_mul_ps(zmm2, zmm2)), 
                            _mm256_mul_ps(zmm0, zmm0))
                        zmm5 = _mm256_sqrt_ps(zmm1)
                        var_680 = _mm256_maskstore_ps(arg5, zmm4)
                        var_660 = _mm256_maskstore_ps(arg5, zmm2)
                        zmm1 = _mm256_cmp_ps(arg9, zmm1, 1)
                        var_640 = _mm256_maskstore_ps(arg5, zmm0)
                        zmm0 = _mm256_and_ps(zmm1, zmm5)
                        var_620 = _mm256_maskstore_ps(arg5, zmm0)
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, data_142d3f5b0)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg15[0].o)
                    zmm4[0].o = zmm0[0].o ^ var_9e0_1[0].o
                    zmm0[0].o = arg7[0].o & zmm4[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    bool cond:24_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                    arg15[0].o = var_c00_3
                    
                    if (not(cond:24_1))
                        var_d40_3[0].o = arg11[0].o
                        zmm2[0].o = data_142fc95c0
                        arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                        zmm0[0].o &= arg7[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg11[0].o, 1)
                            zmm1[0].o = zx.o(0)
                            float var_760_4[0x8] = zmm1
                            float var_780_4[0x8] = zmm1
                            float var_7a0_4[0x8] = zmm1
                            float var_800_4[0x8] = zmm1
                            float var_820_4[0x8] = zmm1
                            float var_840_4[0x8] = zmm1
                            zmm2 = var_a00_1
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            arg5 = _mm256_and_ps(zmm0, zmm1)
                            zmm2 = _mm256_and_ps(arg5, arg13)
                            int32_t temp0_4672 = _mm256_movemask_ps(zmm2)
                            var_9e0_1[0].o = arg11[0].o
                            var_9a0_2[0].o = zmm4[0].o
                            var_b40_2.32 = arg6
                            
                            if (temp0_4672 != 0)
                                char rdx_71 = temp0_4672.b
                                
                                if ((rdx_71 & 1) != 0)
                                    arg8[0].o = *arg10[0]
                                    arg11 = var_ca0_2
                                    
                                    if ((rdx_71 & 2) != 0)
                                    label_1401b776b:
                                        int64_t rax_590 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, 
                                            *rax_590, 0x10)
                                        arg8 = _mm256_blend_ps(arg8, zmm0, 0xf)
                                        
                                        if ((rdx_71 & 4) == 0)
                                            goto label_1401b7228
                                        
                                        goto label_1401b7786
                                else
                                    arg11 = var_ca0_2
                                    
                                    if ((rdx_71 & 2) != 0)
                                        goto label_1401b776b
                                
                                if ((rdx_71 & 4) == 0)
                                label_1401b7228:
                                    arg12[0].o = zmm5[0].o
                                    
                                    if ((rdx_71 & 8) != 0)
                                        goto label_1401b77ad
                                    
                                    goto label_1401b7235
                                
                            label_1401b7786:
                                zmm0[0].o = var_c40_3[0].o
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *zmm0[0], 0x20)
                                arg8 = _mm256_blend_ps(arg8, zmm0, 0xf)
                                arg12[0].o = zmm5[0].o
                                
                                if ((rdx_71 & 8) != 0)
                                label_1401b77ad:
                                    zmm0[0].o = var_c40_3[0].o
                                    int64_t rax_592 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_592, 0x30)
                                    arg8 = _mm256_blend_ps(arg8, zmm0, 0xf)
                                    zmm5[0].o = data_1434426c0
                                    
                                    if ((rdx_71 & 0x10) == 0)
                                        goto label_1401b7246
                                    
                                    goto label_1401b77de
                                
                            label_1401b7235:
                                zmm5[0].o = data_1434426c0
                                
                                if ((rdx_71 & 0x10) != 0)
                                label_1401b77de:
                                    zmm0[0].o = *arg11[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                                    arg6[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                    
                                    if ((rdx_71 & 0x20) != 0)
                                    label_1401b7255:
                                        int64_t rax_552 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rax_552, 0x10)
                                        arg8 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                                else
                                label_1401b7246:
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                                    arg6[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                    
                                    if ((rdx_71 & 0x20) != 0)
                                        goto label_1401b7255
                                
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_c40_3[0].o)
                                zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                
                                if ((rdx_71 & 0x40) != 0)
                                    zmm2[0].o = var_c80_1[0].o
                                    float* rax_553 = zmm2[0].q
                                    zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_553, 0x20)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                                
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm5[0].o)
                                arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                zmm4 = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
                                arg15 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                                
                                if (temp0_4672.b s< 0)
                                    arg6[0].o = var_c80_1[0].o
                                    int64_t rax_594 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_594, 0x30)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                else
                                    arg6[0].o = var_c80_1[0].o
                                
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                arg7 = _mm256_blendv_ps(arg10, zmm4, arg15)
                                var_7a0_4 = _mm256_maskstore_ps(arg5, arg8)
                                
                                if ((rdx_71 & 1) == 0)
                                    zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                    arg9 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
                                    
                                    if ((rdx_71 & 2) != 0)
                                        goto label_1401b8d09
                                    
                                    goto label_1401b7864
                                
                                arg8[0].o = *arg7[0].q
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                arg9 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
                                
                                if ((rdx_71 & 2) != 0)
                                label_1401b8d09:
                                    int64_t rax_626 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_626, 0x10)
                                    arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                                    zmm2 = _mm256_blendv_ps(arg11, zmm0, arg9)
                                    zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    
                                    if ((rdx_71 & 4) == 0)
                                        goto label_1401b7879
                                    
                                    goto label_1401b8d35
                                
                            label_1401b7864:
                                zmm2 = _mm256_blendv_ps(arg11, zmm0, arg9)
                                zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                
                                if ((rdx_71 & 4) == 0)
                                label_1401b7879:
                                    
                                    if ((rdx_71 & 8) != 0)
                                        goto label_1401b8d4a
                                    
                                    goto label_1401b7882
                                
                            label_1401b8d35:
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *zmm4[0], 0x20)
                                arg8 = _mm256_blend_ps(arg8, zmm0, 0xf)
                                
                                if ((rdx_71 & 8) == 0)
                                label_1401b7882:
                                    
                                    if ((rdx_71 & 0x10) != 0)
                                    label_1401b788c:
                                        zmm0[0].o = *zmm2[0].q
                                        zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 
                                            zmm0[0].o, 1)
                                        arg8 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                                else
                                label_1401b8d4a:
                                    int64_t rax_628 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_628, 0x30)
                                    arg8 = _mm256_blend_ps(arg8, zmm0, 0xf)
                                    
                                    if ((rdx_71 & 0x10) != 0)
                                        goto label_1401b788c
                                
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                                arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                                
                                if ((rdx_71 & 0x20) != 0)
                                    int64_t rax_596 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_596, 0x10)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                
                                if ((rdx_71 & 0x40) != 0)
                                    float* rax_597 = zmm0[0]
                                    zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_597, 0x20)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                                
                                zmm5[0].o = arg12[0].o
                                zmm1 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(arg11, zmm4[0].o, 1)
                                
                                if (temp0_4672.b s< 0)
                                    int64_t rax_598 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_598, 0x30)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                                
                                arg12 = var_d20_4.32
                                arg11[0].o = var_9e0_1[0].o
                                arg10 = _mm256_blendv_ps(arg7, zmm4, arg15)
                                zmm0 = _mm256_blendv_ps(zmm2, zmm1, arg9)
                                var_ca0_2 = zmm0
                                var_840_4 = _mm256_maskstore_ps(arg5, arg8)
                            
                            zmm0[0].o = data_142fc95c0
                            zmm1 = var_b00_1
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            arg14 = var_bc0_1
                            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_143442b00)
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm4[0].o = zx.o(0)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm0[0].o = zmm2[0].o & not.o(arg11[0].o)
                            arg5[0].o = zmm1[0].o & not.o(arg7[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            arg6[0].o = zmm0[0].o & var_d70_2
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            char temp0_4829 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_4829 == 0)
                                zmm0[0].o = data_142fc95c0
                                arg5[0].o = var_d70_2
                                arg6 = var_b40_2.32
                            else
                                var_b60_1 = zmm5[0].o
                                
                                if ((temp0_4829 & 1) == 0)
                                    zmm5 = var_ca0_2
                                    arg12[0].o =
                                        __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                    
                                    if ((temp0_4829 & 2) != 0)
                                        goto label_1401b8d8a
                                    
                                    goto label_1401b79e1
                                
                                arg9[0].o = *arg10[0]
                                zmm5 = var_ca0_2
                                arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if ((temp0_4829 & 2) != 0)
                                label_1401b8d8a:
                                    int64_t rax_630 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_630, 0x10)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    
                                    if ((temp0_4829 & 4) == 0)
                                        goto label_1401b79f5
                                    
                                    goto label_1401b8db5
                                
                            label_1401b79e1:
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg6[0].q)
                                zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                
                                if ((temp0_4829 & 4) != 0)
                                label_1401b8db5:
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm4[0], 0x20)
                                    arg9 = _mm256_blend_ps(arg9, arg5, 0xf)
                                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    
                                    if ((temp0_4829 & 8) != 0)
                                    label_1401b79ff:
                                        int64_t rax_599 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, 
                                            *rax_599, 0x30)
                                        arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                else
                                label_1401b79f5:
                                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    
                                    if ((temp0_4829 & 8) != 0)
                                        goto label_1401b79ff
                                
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                arg14[0].o = data_1434426c0
                                zmm1[0].o ^= arg12[0].o
                                arg15 = zmm5
                                
                                if ((temp0_4829 & 0x10) != 0)
                                    zmm5[0].o = zx.o(*zmm5[0])
                                    arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm5[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm5[0].o, 3)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg14[0].o)
                                arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x50)
                                zmm5[0].o = zmm2[0].o ^ arg12[0].o
                                
                                if ((temp0_4829 & 0x20) != 0)
                                    int64_t rax_601 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_601, 0x10)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                                
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
                                arg15[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xfa)
                                arg7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg7, var_9e0_1[0].o, 1)
                                zmm5 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                                
                                if ((temp0_4829 & 0x40) != 0)
                                    double rax_602 = zmm0[0]
                                    zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_602, 0x20)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                                
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg14[0].o)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                zmm4 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                                arg8 = _mm256_insertf128_ps(arg10, arg15[0].o, 1)
                                arg7 = _mm256_and_ps(zmm5, arg7)
                                
                                if (temp0_4829 s< 0)
                                    int64_t rbx_45 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rbx_45, 0x30)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                arg10 = _mm256_blendv_ps(arg10, zmm4, arg8)
                                var_780_4 = _mm256_maskstore_ps(arg7, arg9)
                                
                                if ((temp0_4829 & 1) == 0)
                                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    arg11 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                    
                                    if ((temp0_4829 & 2) != 0)
                                        goto label_1401b8df2
                                    
                                    goto label_1401b7b38
                                
                                arg9[0].o = *arg10[0]
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                arg11 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                
                                if ((temp0_4829 & 2) != 0)
                                label_1401b8df2:
                                    int64_t rax_633 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_633, 0x10)
                                    arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                    zmm2 = _mm256_blendv_ps(arg15, zmm0, arg11)
                                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    
                                    if ((temp0_4829 & 4) == 0)
                                        goto label_1401b7b4d
                                    
                                    goto label_1401b8e1e
                                
                            label_1401b7b38:
                                zmm2 = _mm256_blendv_ps(arg15, zmm0, arg11)
                                zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                
                                if ((temp0_4829 & 4) == 0)
                                label_1401b7b4d:
                                    
                                    if ((temp0_4829 & 8) != 0)
                                        goto label_1401b8e33
                                    
                                    goto label_1401b7b56
                                
                            label_1401b8e1e:
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm1[0].q, 0x20)
                                arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                
                                if ((temp0_4829 & 8) == 0)
                                label_1401b7b56:
                                    
                                    if ((temp0_4829 & 0x10) != 0)
                                    label_1401b7b60:
                                        zmm0[0].o = *zmm2[0].q
                                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, 
                                            zmm0[0].o, 1)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                                else
                                label_1401b8e33:
                                    int64_t rax_635 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_635, 0x30)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                    
                                    if ((temp0_4829 & 0x10) != 0)
                                        goto label_1401b7b60
                                
                                arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg14[0].o)
                                
                                if ((temp0_4829 & 0x20) != 0)
                                    float* rax_604 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_604, 0x10)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                                
                                if ((temp0_4829 & 0x40) != 0)
                                    float* rax_605 = arg5[0].q
                                    arg15[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    arg15[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, 
                                        *rax_605, 0x20)
                                    arg9 = _mm256_insertf128_ps(arg9, arg15[0].o, 1)
                                
                                arg14 = var_bc0_1
                                arg6 = var_b40_2.32
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                
                                if (temp0_4829 s< 0)
                                    int64_t rcx_86 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rcx_86, 0x30)
                                    arg9 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                                
                                zmm4[0].o = zx.o(0)
                                zmm5[0].o = var_b60_1
                                arg10 = _mm256_blendv_ps(arg10, zmm1, arg8)
                                zmm0 = _mm256_blendv_ps(zmm2, zmm0, arg11)
                                var_ca0_2 = zmm0
                                var_820_4 = _mm256_maskstore_ps(arg7, arg9)
                                zmm0[0].o = data_142fc95c0
                                arg12 = var_d20_4.32
                                arg5[0].o = var_d70_2
                                arg11[0].o = var_9e0_1[0].o
                            
                            arg15 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(var_b00_1, data_143442b20)
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm0[0].o = zmm1[0].o & not.o(arg11[0].o)
                            zmm2[0].o = zmm4[0].o & not.o(arg6[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            arg7[0].o = arg5[0].o & zmm0[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            char temp0_4904 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_4904 != 0)
                                if ((temp0_4904 & 1) != 0)
                                    zmm5[0].o = *arg10[0]
                                
                                arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if ((temp0_4904 & 2) != 0)
                                    int64_t rax_607 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_607, 0x10)
                                    zmm5 = _mm256_blend_ps(zmm5, zmm0, 0xf)
                                
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg7[0].q)
                                zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                var_b60_1.32 = arg6
                                
                                if ((temp0_4904 & 4) == 0)
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    arg8 = arg10
                                    
                                    if ((temp0_4904 & 8) != 0)
                                        goto label_1401b8e77
                                    
                                    goto label_1401b7d22
                                
                                arg6[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *zmm2[0].q, 0x20)
                                zmm5 = _mm256_blend_ps(zmm5, arg6, 0xf)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                arg8 = arg10
                                
                                if ((temp0_4904 & 8) == 0)
                                label_1401b7d22:
                                    arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    arg10[0].o = zmm4[0].o ^ arg12[0].o
                                    
                                    if ((temp0_4904 & 0x10) != 0)
                                    label_1401b7d36:
                                        zmm0[0].o = zx.o(*var_ca0_2[0].q)
                                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                        zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, 
                                            zmm0[0].o, 3)
                                        zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                else
                                label_1401b8e77:
                                    float* rax_637 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    arg6[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_637, 0x30)
                                    zmm5 = _mm256_blend_ps(zmm5, arg6, 0xf)
                                    arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    arg10[0].o = zmm4[0].o ^ arg12[0].o
                                    
                                    if ((temp0_4904 & 0x10) != 0)
                                        goto label_1401b7d36
                                
                                zmm4[0].o = data_1434426c0
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                                arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x50)
                                zmm1[0].o ^= arg12[0].o
                                
                                if ((temp0_4904 & 0x20) != 0)
                                    int64_t rax_609 = __vpextrq_gpr64q_xmmdq_immb(var_ca0_2[0].o, 1)
                                    zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm4[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_609, 0x10)
                                    zmm5 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                    zmm4[0].o = data_1434426c0
                                
                                arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                                arg14[0].o = _mm256_extractf128_ps(var_ca0_2[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0xfa)
                                arg5 = var_b60_1.32
                                arg6 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_9e0_1[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                                
                                if ((temp0_4904 & 0x40) != 0)
                                    double rax_610 = arg14[0]
                                    arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_610, 0x20)
                                    zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                
                                arg10 = var_ca0_2
                                arg13 = arg13
                                arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                                zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(arg11, zmm4[0].o, 1)
                                arg9 = _mm256_and_ps(zmm1, arg6)
                                
                                if (temp0_4904 s< 0)
                                    int64_t rbx_46 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rbx_46, 0x30)
                                    zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                
                                arg12 = var_d20_4.32
                                arg11[0].o = var_9e0_1[0].o
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                                zmm2 = _mm256_blendv_ps(arg8, zmm2, zmm4)
                                var_760_4 = _mm256_maskstore_ps(arg9, zmm5)
                                
                                if ((temp0_4904 & 1) != 0)
                                    zmm5[0].o = *zmm2[0].q
                                
                                arg5[0].o = data_1434426c0
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                
                                if ((temp0_4904 & 2) != 0)
                                    float* rax_612 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_612, 0x10)
                                    zmm5 = _mm256_blend_ps(zmm5, zmm1, 0xf)
                                
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg5[0].o)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_4904 & 4) != 0)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *zmm0[0], 0x20)
                                    zmm5 = _mm256_blend_ps(zmm5, zmm0, 0xf)
                                
                                arg14 = var_bc0_1
                                zmm0 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                                
                                if ((temp0_4904 & 8) == 0)
                                    zmm2 = _mm256_blendv_ps(arg10, zmm0, zmm1)
                                    
                                    if ((temp0_4904 & 0x10) != 0)
                                        goto label_1401b8ecd
                                    
                                    goto label_1401b7ec3
                                
                                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                float* rax_638 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_638, 0x30)
                                zmm5 = _mm256_blend_ps(zmm5, zmm2, 0xf)
                                zmm2 = _mm256_blendv_ps(arg10, zmm0, zmm1)
                                
                                if ((temp0_4904 & 0x10) != 0)
                                label_1401b8ecd:
                                    zmm0[0].o = *zmm2[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                    
                                    if ((temp0_4904 & 0x20) == 0)
                                        goto label_1401b7ecc
                                    
                                    goto label_1401b8eec
                                
                            label_1401b7ec3:
                                
                                if ((temp0_4904 & 0x20) == 0)
                                label_1401b7ecc:
                                    
                                    if ((temp0_4904 & 0x40) != 0)
                                        goto label_1401b8f0d
                                    
                                    goto label_1401b7edd
                                
                            label_1401b8eec:
                                int64_t rax_640 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_640, 0x10)
                                zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                
                                if ((temp0_4904 & 0x40) == 0)
                                label_1401b7edd:
                                    
                                    if (temp0_4904 s< 0)
                                    label_1401b8f3a:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                        int64_t rcx_96 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rcx_96, 0x30)
                                        zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                else
                                label_1401b8f0d:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    double rax_641 = zmm0[0]
                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_641, 0x20)
                                    zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                    
                                    if (temp0_4904 s< 0)
                                        goto label_1401b8f3a
                                
                                var_800_4 = _mm256_maskstore_ps(arg9, zmm5)
                            
                            zmm1 = var_d00_3
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_9c0_2[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60_1)
                            arg5 = var_d60_2
                            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_d40_3[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
                            arg5 = var_ba0_2
                            zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg8 = var_c20_5
                            arg6[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            arg7[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            zmm1[0].o = _mm_permute_ps(arg15[0].o, 0x50)
                            zmm4[0].o = _mm_permute_ps(arg15[0].o, 0xfa)
                            zmm4 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            zmm2 = _mm256_blendv_ps(zmm1, zmm2, zmm4)
                            zmm4[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm0 = _mm256_blendv_ps(zmm1, zmm0, 
                                _mm256_insertf128_ps(zmm4, zmm5[0].o, 1))
                            int64_t r8_23 = zmm2[0].q
                            int64_t rcx_88 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rdx_74 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rbx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            int64_t rdi_62 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rsi_39 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            double rax_614 = zmm0[0]
                            zmm0[0].o = zx.o(*(var_bc8 + r8_23))
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_bc8 + rcx_88), 1)
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_bc8 + rdi_62), 2)
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_bc8 + rdx_74), 3)
                            int64_t rcx_89 = zmm2[0].q
                            zmm2[0].o = zx.o(*(var_bc8 i+ rax_614))
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rbx_47), 1)
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rcx_89), 2)
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_bc8 + rsi_39), 3)
                            zmm4 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                            zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                            zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442420)
                            arg7[0].o = data_143442440
                            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                            zmm5 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, arg6[0].o, 1))
                            arg6[0].o = data_143442480
                            zmm2[0].o &= arg6[0].o
                            zmm0[0].o &= arg6[0].o
                            arg6 = data_143442460
                            zmm5 = _mm256_div_ps(zmm5, arg6)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                            zmm5 = __vmulps_ymmqq_ymmqq_memqq(zmm5, var_840_4)
                            zmm0 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1)), arg6)
                            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_7a0_4)
                            zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                                __vmulps_ymmqq_ymmqq_memqq(zmm0, var_820_4), var_780_4)
                            zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg6[0].o = data_143442490
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                            zmm4 = __vaddps_ymmqq_ymmqq_memqq(
                                __vmulps_ymmqq_ymmqq_memqq(
                                    __vdivps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, zmm5[0].o, 
                                            1)), 
                                        data_1434424a0), 
                                    var_800_4), 
                                var_760_4)
                            zmm5 = _mm256_mul_ps(zmm2, zmm2)
                            zmm5 = _mm256_sub_ps(data_142fc95a0, zmm5)
                            arg6 = _mm256_mul_ps(zmm0, zmm0)
                            zmm5 = _mm256_sub_ps(zmm5, arg6)
                            var_680 = _mm256_maskstore_ps(arg15, zmm2)
                            var_660 = _mm256_maskstore_ps(arg15, zmm0)
                            zmm0 = _mm256_sub_ps(zmm5, _mm256_mul_ps(zmm4, zmm4))
                            var_640 = _mm256_maskstore_ps(arg15, zmm4)
                            zmm1 = _mm256_cmp_ps(zmm1, zmm0, 1)
                            zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                            var_620 = _mm256_maskstore_ps(arg15, zmm0)
                            zmm2[0].o = data_142fc95c0
                            arg15[0].o = var_c00_3
                            arg7[0].o = var_d70_2
                            zmm4[0].o = var_9a0_2[0].o
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                        arg10[0].o = zmm4[0].o ^ zmm0[0].o
                        zmm0[0].o = arg7[0].o & arg10[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        bool cond:33_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                        arg11 = arg12
                        arg12[0].o = var_d40_3[0].o
                        
                        if (not(cond:33_1))
                            arg8[0].o = data_143442ac0
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg8[0].o)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg8[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                            zmm0[0].o &= arg7[0].o
                            zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                                zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                arg15 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                zmm1 = var_d00_3
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, var_9c0_2[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60_1)
                                zmm1 = var_d60_2
                                arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                                zmm2[0].o = _mm256_extractf128_ps(var_ba0_2[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(var_c20_5[0].o, 1)
                                zmm1[0].o = data_1434426c0
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c20_5[0].o, arg5[0].o)
                                zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0_2[0].o, zmm1[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                zmm2[0].o = _mm_permute_ps(arg15[0].o, 0x50)
                                arg5[0].o = _mm_permute_ps(arg15[0].o, 0xfa)
                                zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                var_ba0_2[0].o = zx.o(0)
                                zmm1 = _mm256_blendv_ps(var_ba0_2, zmm1, zmm2)
                                zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                                arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                                zmm0 = _mm256_blendv_ps(var_ba0_2, zmm0, 
                                    _mm256_insertf128_ps(zmm2, arg5[0].o, 1))
                                int64_t r8_24 = zmm1[0].q
                                int64_t rcx_90 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rdx_75 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rbx_48 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rdi_63 = zmm1[0].q
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rsi_40 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                double rax_617 = zmm0[0]
                                zmm0[0].o = zx.o(*(var_bc8 + r8_24))
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rcx_90), 1)
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rdi_63), 2)
                                arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rdx_75), 3)
                                int64_t rcx_91 = zmm1[0].q
                                zmm0[0].o = zx.o(*(var_bc8 i+ rax_617))
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rbx_48), 1)
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rcx_91), 2)
                                arg7[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(var_bc8 + rsi_40), 3)
                                zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0x15)
                                zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(arg7[0].o, 0x15)
                                zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0xa)
                                var_c20_5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 5)
                                zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg7[0].o, 5)
                                zmm5 = _mm256_insertf128_ps(var_c20_5, zmm5[0].o, 1)
                                arg11 = data_1434422e0
                                zmm5 = _mm256_and_ps(zmm5, arg11)
                                arg14 = data_143442300
                                zmm2 = _mm256_or_ps(zmm5, _mm256_and_ps(zmm2, arg14))
                                zmm5[0].o = data_143442320
                                zmm1[0].o &= zmm5[0].o
                                var_ba0_2[0].o = data_143442330
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_ba0_2[0].o)
                                zmm0[0].o &= zmm5[0].o
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_ba0_2[0].o)
                                zmm0 = _mm256_or_ps(zmm2, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 6)
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 6)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(arg7[0].o, 0xa)
                                zmm1 = _mm256_and_ps(zmm1, arg11)
                                arg11 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg5, zmm2[0].o, 1), arg14)
                                arg14 = var_bc0_1
                                zmm1 = _mm256_or_ps(zmm1, arg11)
                                arg11 = var_d20_4.32
                                zmm2[0].o &= zmm5[0].o
                                arg5[0].o &= zmm5[0].o
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_ba0_2[0].o)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_ba0_2[0].o)
                                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                var_ba0_2[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x11)
                                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x11)
                                arg7[0].o = var_d70_2
                                zmm4 = _mm256_insertf128_ps(var_ba0_2, zmm5[0].o, 1)
                                zmm5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442340)
                                zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442360)
                                arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442380)
                                zmm1 = _mm256_or_ps(zmm1, zmm2)
                                zmm2 = _mm256_or_ps(zmm4, arg5)
                                arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm4[0].o = data_1434423a0
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                                zmm2 = _mm256_or_ps(zmm2, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                                arg5 = _mm256_mul_ps(zmm0, zmm0)
                                arg5 = _mm256_sub_ps(data_142fc95a0, arg5)
                                zmm4 = _mm256_mul_ps(zmm1, zmm1)
                                arg5 = _mm256_sub_ps(arg5, zmm4)
                                var_680 = _mm256_maskstore_ps(arg15, zmm0)
                                var_660 = _mm256_maskstore_ps(arg15, zmm1)
                                zmm0 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm2, zmm2))
                                var_640 = _mm256_maskstore_ps(arg15, zmm2)
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm1 = _mm256_cmp_ps(zmm1, zmm0, 1)
                                zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                                var_620 = _mm256_maskstore_ps(arg15, zmm0)
                                arg15[0].o = var_c00_3
                            
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg8[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                            zmm0[0].o ^= arg10[0].o
                            zmm0[0].o &= arg7[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1[0].o = data_142fc95e0
                                arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                                zmm2[0].o &= zmm0[0].o
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
                                    zmm1 = var_d00_3
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_9c0_2[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_c60_1)
                                    zmm1 = var_d60_2
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                                    arg7[0].o = _mm256_extractf128_ps(var_ba0_2[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(var_c20_5[0].o, 1)
                                    zmm5[0].o = data_1434426c0
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                    arg5[0].o =
                                        __vpaddq_xmmdq_xmmdq_xmmdq(var_c20_5[0].o, arg5[0].o)
                                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm5[0].o)
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                                    zmm4[0].o =
                                        __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0_2[0].o, zmm4[0].o)
                                    zmm4 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                    arg5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                    zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                    zmm5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                                    arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    arg9[0].o = zx.o(0)
                                    zmm4 = _mm256_blendv_ps(arg9, zmm4, zmm5)
                                    zmm5[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                                    arg6[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                                    zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                    zmm1 = _mm256_blendv_ps(arg9, zmm1, zmm5)
                                    double r8_25 = zmm4[0]
                                    int64_t rcx_92 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rdx_76 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    int64_t rbx_49 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    double rdi_64 = zmm4[0]
                                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rsi_41 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    int64_t rax_620 = zmm1[0].q
                                    zmm1[0].o = zx.o(*(var_bc8 i+ r8_25))
                                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                        *(var_bc8 + rcx_92), 1)
                                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                        *(var_bc8 i+ rdi_64), 2)
                                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                        *(var_bc8 + rdx_76), 3)
                                    double rcx_93 = zmm4[0]
                                    zmm4[0].o = zx.o(*(var_bc8 + rax_620))
                                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(var_bc8 + rbx_49), 1)
                                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(var_bc8 i+ rcx_93), 2)
                                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(var_bc8 + rsi_41), 3)
                                    arg10 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                                    arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                                    arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                                    arg5[0].o = data_143442440
                                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                                    arg6 =
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, arg7[0].o, 1))
                                    arg7 = data_143442460
                                    arg6 = _mm256_div_ps(arg6, arg7)
                                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                                    zmm5[0].o = data_143442480
                                    zmm4[0].o &= zmm5[0].o
                                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                                    zmm1[0].o &= zmm5[0].o
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                                    zmm1 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm4[0].o, 
                                            1)), 
                                        arg7)
                                    arg5 = __vandps_ymmqq_ymmqq_memqq(arg10, data_143442420)
                                    zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    zmm5[0].o = data_143442490
                                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                                    arg5 = __vdivps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm4[0].o, 
                                            1)), 
                                        data_1434424a0)
                                    zmm4 = _mm256_mul_ps(arg6, arg6)
                                    zmm4 = _mm256_sub_ps(
                                        _mm256_sub_ps(_mm256_sub_ps(data_142fc95a0, zmm4), 
                                            _mm256_mul_ps(zmm1, zmm1)), 
                                        _mm256_mul_ps(arg5, arg5))
                                    zmm5 = _mm256_sqrt_ps(zmm4)
                                    var_680 = _mm256_maskstore_ps(zmm2, arg6)
                                    var_660 = _mm256_maskstore_ps(zmm2, zmm1)
                                    zmm1 = _mm256_cmp_ps(arg9, zmm4, 1)
                                    var_640 = _mm256_maskstore_ps(zmm2, arg5)
                                    zmm1 = _mm256_and_ps(zmm1, zmm5)
                                    var_620 = _mm256_maskstore_ps(zmm2, zmm1)
                                
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm1[0].o = arg8[0].o ^ zmm2[0].o
                                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg14[0].o, data_142fc95e0)
                                zmm2[0].o ^= arg5[0].o
                                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                zmm1[0].o &= zmm0[0].o
                                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                                    zmm2[0].o = data_143442ad0
                                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                                    zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                                    zmm0[0].o &= zmm4[0].o
                                    zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                                    zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                        zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                        zmm4[0].o = zx.o(0)
                                        var_680 = _mm256_maskstore_ps(zmm0, zmm4)
                                        var_660 = _mm256_maskstore_ps(zmm0, zmm4)
                                        var_640 = _mm256_maskstore_ps(zmm0, zmm4)
                                        var_620 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
                                    
                                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    arg5[0].o ^= zmm0[0].o
                                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                                    zmm0[0].o ^= zmm2[0].o
                                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                    zmm0[0].o &= zmm1[0].o
                                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                        zmm1[0].o = zx.o(0)
                                        var_680 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_660 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_640 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_620 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
                
                zmm0 = var_940.32
                zmm1 = var_920.32
                zmm2 = var_900.32
                arg5 = var_8e0.32
                arg8 = _mm256_add_ps(
                    _mm256_add_ps(_mm256_mul_ps(zmm0, var_680), _mm256_mul_ps(zmm1, var_660)), 
                    _mm256_mul_ps(zmm2, var_640))
                arg9 = _mm256_mul_ps(arg5, var_620)
                arg8 = _mm256_add_ps(arg8, arg9)
                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                arg8 = _mm256_cmp_ps(arg9, arg8, 2)
                arg11 = var_960_1
                zmm4 = _mm256_mul_ps(arg11, var_680)
                zmm5 = _mm256_mul_ps(arg11, var_660)
                arg6 = _mm256_mul_ps(arg11, var_640)
                arg9 = data_142fc95a0
                arg10 = data_143442520
                arg8 = _mm256_blendv_ps(arg10, arg9, arg8)
                arg7 = _mm256_mul_ps(arg11, var_620)
                arg9 = _mm256_sub_ps(arg9, arg11)
                arg8 = _mm256_mul_ps(arg9, arg8)
                zmm0 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg8, zmm0))
                zmm1 = _mm256_add_ps(zmm5, _mm256_mul_ps(arg8, zmm1))
                zmm2 = _mm256_add_ps(arg6, _mm256_mul_ps(arg8, zmm2))
                var_940.32 = _mm256_maskstore_ps(arg13, zmm0)
                zmm0 = _mm256_mul_ps(arg8, arg5)
                var_920.32 = _mm256_maskstore_ps(arg13, zmm1)
                zmm0 = _mm256_add_ps(arg7, zmm0)
                var_900.32 = _mm256_maskstore_ps(arg13, zmm2)
                var_8e0.32 = _mm256_maskstore_ps(arg13, zmm0)
                arg8 = var_a60_3
                arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            
            zmm0 = var_940.32
            zmm1 = var_920.32
            zmm2 = var_900.32
            arg5 = var_8e0.32
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            zmm0 = _mm256_add_ps(_mm256_add_ps(zmm0, _mm256_mul_ps(zmm2, zmm2)), 
                _mm256_add_ps(zmm1, _mm256_mul_ps(arg5, arg5)))
            zmm1 = data_142fc9340
            zmm2 = _mm256_cmp_ps(zmm1, zmm0, 6)
            zmm1 = _mm256_cmp_ps(zmm1, zmm0, 2)
            arg5 = data_142fc94a0
            zmm4 = _mm256_mul_ps(zmm0, arg5)
            double var_7a0_5[0x4] = zmm4
            zmm0 = _mm256_rsqrt_ps(zmm0)
            double var_780_5[0x4] = zmm4
            double var_760_5[0x4] = zmm4
            zmm0 = _mm256_add_ps(zmm0, 
                _mm256_mul_ps(_mm256_sub_ps(arg5, _mm256_mul_ps(zmm4, _mm256_mul_ps(zmm0, zmm0))), 
                    zmm0))
            zmm0 = _mm256_add_ps(zmm0, 
                _mm256_mul_ps(zmm0, 
                    _mm256_sub_ps(arg5, _mm256_mul_ps(zmm4, _mm256_mul_ps(zmm0, zmm0)))))
            arg5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_940.32)
            zmm5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_920.32)
            arg6 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_900.32)
            zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_8e0.32)
            double var_740_1[0x4] = zmm4
            arg5 = _mm256_and_ps(arg5, zmm1)
            zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_142fc95a0)
            zmm4 = _mm256_and_ps(zmm5, zmm1)
            zmm5 = var_cc0_10
            var_940.32 = _mm256_maskstore_ps(zmm5, arg5)
            arg5 = _mm256_and_ps(arg6, zmm1)
            var_920.32 = _mm256_maskstore_ps(zmm5, zmm4)
            zmm0 = _mm256_and_ps(zmm0, zmm1)
            var_900.32 = _mm256_maskstore_ps(zmm5, arg5)
            zmm0 = _mm256_or_ps(zmm0, zmm2)
            var_8e0.32 = _mm256_maskstore_ps(zmm5, zmm0)
        
        zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
        arg11 = var_860_1
        zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        arg12 = var_580_1
        arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg11[0].o)
        zmm1[0].o = arg8[0].o & zmm0[0].o
        zmm4[0].o = arg5[0].o & zmm2[0].o
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            zmm1 = _mm256_insertf128_ps(arg5, arg8[0].o, 1)
            zmm0 = _mm256_and_ps(zmm1, zmm0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            var_940.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_920.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_900.32 = _mm256_maskstore_ps(zmm0, zmm1)
            zmm1 = data_142fc95a0
            var_8e0.32 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_b80_1, var_b20_1, 1)
        zmm2[0].o = var_940
        int128_t var_930
        arg9[0].o = var_930
        zmm4[0].o = var_920
        int128_t var_910
        arg10[0].o = var_910
        arg6[0].o = var_900
        int128_t var_8f0
        arg7[0].o = var_8f0
        zmm1[0].o = var_8e0
        int128_t var_8d0
        arg5[0].o = var_8d0
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm4[0].o = arg6[0].q | zmm5[0] << 0x40
        int128_t var_2a0 = zmm4[0].o
        zmm4[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
        int128_t var_290_1 = zmm4[0].o
        zmm4[0].o = zmm2[0].q | zmm1[0].q << 0x40
        int128_t var_280_1 = zmm4[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        int128_t var_270_1 = zmm1[0].o
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        arg5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
        zmm4[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
        zmm5[0].o = arg5[0].q | zmm1[0].q << 0x40
        int128_t var_260_1 = zmm5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
        int128_t var_250_1 = zmm1[0].o
        zmm1[0].o = zmm4[0] | zmm2[0].q << 0x40
        int128_t var_240_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
        int128_t var_230_1 = zmm1[0].o
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg11[0].o)
        zmm1 = _mm256_insertf128_ps(zmm1, arg8[0].o, 1)
        i_4 = zx.q(_mm256_movemask_ps(zmm1))
        
        do
            uint64_t rcx_94
            uint64_t rflags_2
            
            if (i_4 == 0)
                rcx_94 = 0x40
            else
                rcx_94, rflags_2 = _bit_scan_forward(i_4)
            double var_140[0x4] = zmm0
            zmm1[0].o = (&var_2a0)[rcx_94]
            var_ac8[sx.q(*(&var_140 + ((zx.q(rcx_94.d) & 7) << 2))) * 3] = zmm1[0].o
            i_4 &= rol.q(-2, rcx_94.b)
        while (i_4 != 0)
else
    zmm0[0].o = 4
    zmm1[0].o = zx.o(r15)
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_160_1[0x4] = zmm0
    zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_340_1[0x4] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int32_t rax_1
    rax_1.b = zmm0[0].o f>= zmm2[0]
    zmm0[0].o = zx.o(neg.d(rax_1))
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm1[0].o = arg5[0].o
    zmm1[0] = float.s(arg16 - 1)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_180_1[0x4] = zmm0
    zmm0[0].o = zmm1[0].o f* zmm2[0]
    int32_t rax_3 = int.d(zmm0[0].d)
    r14 = 0
    
    if (rax_3 s< 0)
        rax_3 = 0
    
    if (arg16 - 2 s<= rax_3)
        rax_3 = arg16 - 2
    
    zmm1[0].o = zx.o(rax_3)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    float var_9c0_1[0x8] = zmm1
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_1a0_1[0x4] = zmm0
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    arg12 = data_142fc95a0
    
    do
        int64_t rax_26 = sx.q((r14 << 3).d)
        zmm2[0].o = *(arg2 + rax_26)
        arg5[0].o = *(arg2 + rax_26 + 0x10)
        zmm5[0].o = *(arg2 + rax_26 + 0x20)
        arg6[0].o = *(arg2 + rax_26 + 0x30)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg5[0].o, 0xdd)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg6[0].o, 0xdd)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o |= data_142fc95e0
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o |= data_142fc9520:0x10.o
        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        double r8 = zmm4[0]
        int64_t rcx_7 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        double rdx_1 = zmm0[0]
        int64_t rbx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
        int64_t rdi_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
        int64_t r10_1 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
        int64_t rax_27 = zmm1[0].q
        zmm0[0].o = zx.o(*(arg3 i+ r8))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rcx_7), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 i+ rdx_1), 2)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rbx_1), 3)
        double rcx_8 = zmm4[0]
        zmm1[0].o = zx.o(*(arg3 + rax_27))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rdi_1), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 i+ rcx_8), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + r10_1), 3)
        zmm4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg5[0].o, 0x88)
        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
        zmm2[0].o ^= arg7[0].o
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
        arg5[0].o ^= arg7[0].o
        arg7 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
        int128_t var_600
        int128_t var_5e0
        int128_t var_5c0
        int128_t var_5a0
        
        if (_mm256_movemask_ps(arg7) != 0)
            var_980 = arg7
            var_8a0 = zmm4
            var_ac0 = arg6[0].o
            var_a20 = zmm5[0].o
            zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            arg7[0].o = arg15[0].o ^ zmm0[0].o
            arg13[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            arg9[0].o = arg13[0].o ^ zmm0[0].o
            zmm0 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
            arg10[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
            double var_b80[0x4]
            var_b80[0].o = arg5[0].o
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            float var_d60_1[0x8] = arg5
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
            int128_t var_c60
            var_c60.32 = zmm2
            zmm4 = _mm256_and_ps(zmm0, zmm2)
            int64_t r8_1 = sx.q(zmm4[0].d)
            int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            int32_t temp0_77 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            int64_t rbx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            int64_t rdi_3 = sx.q(zmm4[0].d)
            int64_t rsi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            int32_t temp0_81 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            int32_t temp0_82 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
            zmm4[0].o = zx.o(*(r15 + r8_1))
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + r10_2), 1)
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + sx.q(temp0_77)), 2)
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + rbx_3), 3)
            zmm5[0].o = zx.o(*(r15 + rdi_3))
            zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15 + rsi_3), 1)
            zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15 + sx.q(temp0_81)), 2)
            zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15 + sx.q(temp0_82)), 3)
            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x18)
            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x18)
            arg5 =
                __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg5, arg6[0].o, 1), data_1434429c0)
            double var_b00[0x4]
            arg8 = _mm256_blendv_ps(var_b00, arg5, zmm0)
            arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1c)
            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1c)
            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            float var_ca0[0x8]
            zmm1 = _mm256_blendv_ps(var_ca0, arg5, zmm0)
            arg12 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            arg5 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(arg5, zmm4[0].o, 1))
            int32_t temp0_105 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_106 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_107 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 3)
            float rcx_12 = arg5[0]
            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            int32_t temp0_109 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
            int32_t temp0_110 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            int32_t temp0_111 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
            var_b00 = arg8
            arg5 = __vandps_ymmqq_ymmqq_memqq(arg8, data_1434429e0)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 3)
            zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
            arg5 = _mm256_and_ps(zmm0, _mm256_or_ps(arg5, zmm5))
            int64_t rax_33 = sx.q(arg5[0])
            int64_t rdx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm5[0].o = zx.o(*(rax_33 + &data_143442ba0))
            int64_t rax_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdx_5 + &data_143442ba0), 1)
            int64_t rdx_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_36 + &data_143442ba0), 2)
            int64_t rax_38 = sx.q(arg5[0])
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdx_7 + &data_143442ba0), 3)
            int32_t temp0_125 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_38 + &data_143442ba0), 4)
            int64_t rdx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm5[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(sx.q(temp0_125) + &data_143442ba0), 5)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdx_10 + &data_143442ba0), 6)
            int32_t rdi_4 = zmm4[0].d
            int64_t rax_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_41 + &data_143442ba0), 7)
            zmm4[0].o = __vpmovzxbd_xmmdq_xmmd(arg5[0])
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xe5)
            arg5[0].o = __vpmovzxbd_xmmdq_xmmd(arg5[0])
            zmm5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
            uint32_t var_860[0x4] = zmm2[0].o
            arg5[0].o = data_142fc95c0
            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            var_ca0 = zmm1
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            double var_c00_1[0x2] = arg7[0].o
            arg5[0].o = arg11[0].o & not.o(arg7[0].o)
            zmm2[0].o = arg6[0].o & not.o(arg9[0].o)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            arg5[0].o = _mm256_extractf128_ps(var_160_1[0].o, 1)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            char temp0_141 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            double var_c40_1[0x4] = arg10
            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_160_1[0].o, arg10[0].o)
            arg9 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442840)
            arg8[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_160_1[0].o, var_d60_1[0].o)
            zmm2[0].o = zx.o(0)
            uint32_t var_c20_1[0x8] = zmm2
            zmm2[0].o = zx.o(0)
            
            if (temp0_141 != 0)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm2[0].o = arg11[0].o ^ zmm1[0].o
                arg7[0].o = arg6[0].o ^ zmm1[0].o
                zmm2 = _mm256_and_ps(_mm256_and_ps(_mm256_insertf128_ps(arg7, zmm2[0].o, 1), zmm0), 
                    zmm5)
            
            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b80[0].o)
            double var_ba0[0x4]
            var_ba0[0].o = arg14[0].o
            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
            double var_9a0[0x4]
            zmm4 = _mm256_blendv_ps(var_9a0, arg9, zmm0)
            arg9 = zmm4
            int128_t var_d20_1 = arg15[0].o
            zmm1[0].o = arg15[0].o & not.o(arg11[0].o)
            zmm4[0].o = arg13[0].o & not.o(arg6[0].o)
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0
            int32_t var_3b0_1[0x4] = zmm1[0].o
            
            if (cond:3_1)
                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            else
                zmm4 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(arg6, arg11[0].o, 1))
                zmm5 = _mm256_and_ps(zmm4, zmm5)
                zmm2 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm2, data_143442a00, zmm4)
            
            r15 = var_bc8
            arg14 = var_c60.32
            arg15[0].o = zx.o(0)
            zmm1 = _mm256_insertf128_ps(arg10, arg7[0].o, 1)
            int64_t var_b20[0x2]
            var_b20.32 = zmm1
            arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
            float var_d00_1[0x8] = arg5
            arg5[0].o = zx.o(*(sx.q(rdi_4) + &data_143442b80))
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_109) + &data_143442b80), 1)
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_110) + &data_143442b80), 2)
            arg5[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(sx.q(temp0_111) + &data_143442b80), 3)
            zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            arg6[0].o = var_d20_1
            arg5[0].o = arg6[0].o & not.o(arg5[0].o)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            zmm4[0].o = zx.o(*(sx.q(rcx_12) + &data_143442b80))
            zmm4[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(sx.q(temp0_105) + &data_143442b80), 1)
            zmm4[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(sx.q(temp0_106) + &data_143442b80), 2)
            zmm4[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(sx.q(temp0_107) + &data_143442b80), 3)
            zmm4[0].o = arg13[0].o & not.o(zmm4[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
            zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
            float var_580[0x8]
            arg5 = _mm256_blendv_ps(var_580, zmm2, zmm0)
            var_580 = arg5
            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            arg5[0].o = data_142fc95e0
            zmm4[0].o = arg5[0].o
            arg5[0].o = arg6[0].o & not.o(arg5[0].o)
            zmm2[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            arg5[0].o = arg13[0].o & not.o(zmm4[0].o)
            arg5[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
            zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
            float var_9e0[0x8]
            arg5 = _mm256_blendv_ps(var_9e0, zmm2, zmm0)
            var_9e0 = arg5
            zmm0[0].o = data_142d3f5b0
            arg5[0].o = zmm0[0].o
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = arg6[0].o & not.o(arg5[0].o)
            zmm1[0].o = arg13[0].o & not.o(zmm2[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:7_1 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0
            var_9a0 = arg9
            arg12 = var_ca0
            double var_a00[0x2] = arg11[0].o
            double var_ce0[0x4]
            float var_c80[0x8]
            int64_t var_b40[0x2]
            double var_7e0[0x4]
            int64_t var_6c0[0x2]
            int32_t var_500[0x4]
            
            if (cond:7_1)
                arg13[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_d40 = zmm0
                arg9 = var_c40_1
                arg6[0].o = var_b80[0].o
                arg15 = var_d60_1
                zmm5[0].o = var_ba0[0].o
            else
                zmm2 = __vandps_ymmqq_ymmqq_memqq(var_b00, data_142fc9540)
                arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                arg7[0].o = zx.o(0)
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                zmm5[0].o = arg5[0].o & zmm1[0].o
                arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                bool cond:6_1 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0
                arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                
                if (cond:6_1)
                    zmm5[0].o = zx.o(0)
                    arg13[0].o = zx.o(0)
                    arg10[0].o = zx.o(0)
                    arg5[0].o = zx.o(0)
                    var_d40 = arg5
                    arg11[0].o = zx.o(0)
                else
                    arg15[0].o = zx.o(0)
                    arg5[0].o = arg17
                    arg7[0].o = zx.o(0)
                    
                    if (zx.o(0) f>= arg5[0])
                        arg8[0].o = zx.o(0)
                        arg13[0].o = zx.o(0)
                        arg10[0].o = zx.o(0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        var_d40 = arg5
                        arg7[0].o = zx.o(0)
                    else
                        bool cond:13_1 = arg5[0].o f>= 1f
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
                        arg5 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                        
                        if (cond:13_1)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                            arg5 = _mm256_and_ps(arg7, arg5)
                            arg13 = arg5
                            arg10 = arg5
                            arg8 = arg5
                            var_d40 = arg5
                            arg7[0].o = zx.o(0)
                        else
                            arg6 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg5), var_340_1)
                            var_c80 = arg6
                            arg9 = _mm256_round_ps(arg6, 9)
                            arg6 = _mm256_cvttps_epi32(arg9)
                            arg10[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                            arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg11[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg14[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg11[0].o)
                            arg6 = _mm256_insertf128_ps(arg10, arg14[0].o, 1)
                            arg7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg13[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            arg12 = _mm256_insertf128_ps(arg13, arg7[0].o, 1)
                            arg8 = _mm256_and_ps(arg12, arg6)
                            arg15[0].o = zx.o(0)
                            
                            if (arg18 != 1)
                                arg6 = var_c80
                                arg15 = _mm256_sub_ps(arg6, arg9)
                            
                            arg7[0].o &= arg14[0].o
                            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            arg9[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg7[0].o = arg13[0].o & arg10[0].o
                            arg7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                            arg5[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                            arg7[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                            arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                            arg10 = _mm256_and_ps(arg12, arg5)
                            arg13 = arg8
                            var_d40 = arg10
                            arg7[0].o = zx.o(0)
                            arg9 = var_9a0
                            arg12 = var_ca0
                    
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                    arg11 = _mm256_and_ps(arg5, arg15)
                    zmm5 = arg8
                    arg15[0].o = zx.o(0)
                
                arg5[0].o = zmm4[0].o ^ arg6[0].o
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                zmm2[0].o ^= arg6[0].o
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                arg14[0].o = zmm1[0].o & zmm2[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    var_c20_1 = arg11
                    arg9 = var_c40_1
                    arg6[0].o = var_b80[0].o
                    arg15 = var_d60_1
                    zmm5[0].o = var_ba0[0].o
                else
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg14[0])
                    arg8[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(arg8[0].o, 0x1f)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2[0].o = data_1434422d0
                    arg5[0].o = zmm2[0].o
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                    zmm4 = __vorps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg5, zmm2[0].o, 1), 
                        var_180_1)
                    zmm2 = _mm256_and_ps(zmm4, zmm1)
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        zmm5 = _mm256_blendv_ps(zmm5, arg15, zmm2)
                        arg10 = _mm256_blendv_ps(arg10, arg15, zmm2)
                        arg13 = zmm5
                        var_d40 = arg10
                    
                    arg9 = _mm256_andnot_ps(zmm4, zmm1)
                    int32_t temp0_261 = _mm256_movemask_ps(arg9)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    
                    if (temp0_261 == 0)
                        arg9 = var_c40_1
                        arg6[0].o = var_b80[0].o
                        arg15 = var_d60_1
                        zmm5[0].o = var_ba0[0].o
                    else
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        double var_a60_1[0x4] = arg8
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_9a0[0].o, arg6[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        arg15 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                        zmm2[0].o = arg17
                        
                        if (zmm2[0].o f>= 1f)
                            arg13 = _mm256_blendv_ps(zmm5, arg15, arg9)
                            zmm0 = _mm256_blendv_ps(arg10, arg15, arg9)
                            var_d40 = zmm0
                            arg9 = var_c40_1
                            arg6[0].o = var_b80[0].o
                            arg15 = var_d60_1
                            zmm5[0].o = var_ba0[0].o
                            arg8 = var_a60_1
                        else
                            double var_cc0_1[0x4] = zmm5
                            var_6c0.32 = arg10
                            var_7e0 = zmm4
                            uint32_t var_c20_2[0x8] = arg11
                            zmm4 = var_9e0
                            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                            zmm5[0].o = _mm256_extractf128_ps(var_580[0].o, 1)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_580[0].o, var_9a0[0].o)
                            arg10 = var_d00_1
                            var_580[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            var_9a0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_580[0].o, zmm4[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                            zmm4 = var_b20.32
                            var_580[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_580[0].o, zmm1[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            var_580[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                            zmm4[0].o = data_143442a20
                            zmm1[0].o = zmm4[0].o
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_580[0].o, arg5[0].o)
                            var_580[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_580[0].o, zmm2[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_9a0[0].o, zmm4[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm2 = data_143442a40
                            var_ce0 = _mm256_and_ps(zmm0, zmm2)
                            arg8 = _mm256_and_ps(zmm1, zmm2)
                            zmm0 = _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                _mm256_cvtepi32_ps(arg15), var_340_1))
                            zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                            zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            var_c80[0].o = zmm2[0].o
                            zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            arg11 = _mm256_cmp_ps(arg13, arg13, 0xf)
                            int128_t var_7c0_1 = arg14[0].o
                            var_880.32 = arg11
                            float var_d40_1[0x8] = arg15
                            int128_t var_710
                            int128_t var_700
                            
                            if (arg16 s< 0x100)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                arg11[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                var_b40 = zmm2[0].o
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                char r14_3 = temp0_261.b
                                int128_t var_550
                                uint32_t rax_70
                                
                                if ((r14_3 & 1) != 0)
                                    var_580[0].o = var_550
                                    var_580[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_580[0].o, 
                                        zx.d(*zmm1[0].q), 0)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                                    
                                    if ((r14_3 & 2) != 0)
                                        rax_70 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        var_580[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            var_580[0].o, rax_70, 1)
                                else
                                    var_580[0].o = var_550
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                                    
                                    if ((r14_3 & 2) != 0)
                                        rax_70 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        var_580[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            var_580[0].o, rax_70, 1)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                int64_t temp0_438[0x2] =
                                    __vextractf128_memdq_ymmdq_immb(var_ce0[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ce0[0].o, arg5[0].o)
                                
                                if ((r14_3 & 4) == 0)
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_438)
                                    
                                    if ((r14_3 & 8) != 0)
                                        goto label_1401ad018
                                    
                                    goto label_1401acc89
                                
                                var_ce0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                var_580[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_580[0].o, 
                                    zx.d(*var_ce0[0]), 2)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, temp0_438)
                                
                                if ((r14_3 & 8) != 0)
                                label_1401ad018:
                                    var_ce0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_92 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(var_ce0[0].o, 1))
                                    var_580[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_580[0].o, rax_92, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                    
                                    if ((r14_3 & 0x10) == 0)
                                        goto label_1401acc99
                                    
                                    goto label_1401ad044
                                
                            label_1401acc89:
                                zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                
                                if ((r14_3 & 0x10) == 0)
                                label_1401acc99:
                                    
                                    if ((r14_3 & 0x20) != 0)
                                        goto label_1401ad059
                                    
                                    goto label_1401acca3
                                
                            label_1401ad044:
                                var_580[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_580[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                
                                if ((r14_3 & 0x20) != 0)
                                label_1401ad059:
                                    uint32_t rax_96 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    var_580[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_580[0].o, rax_96, 5)
                                    
                                    if ((r14_3 & 0x40) == 0)
                                        goto label_1401accad
                                    
                                    goto label_1401ad06b
                                
                            label_1401acca3:
                                
                                if ((r14_3 & 0x40) != 0)
                                label_1401ad06b:
                                    var_ce0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    var_580[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(var_580[0].o, 
                                        zx.d(*var_ce0[0]), 6)
                                    
                                    if (temp0_261.b s< 0)
                                    label_1401ad087:
                                        var_ce0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        uint32_t rax_100 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(var_ce0[0].o, 1))
                                        var_580[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            var_580[0].o, rax_100, 7)
                                else
                                label_1401accad:
                                    
                                    if (temp0_261.b s< 0)
                                        goto label_1401ad087
                                
                                var_550 = var_580[0].o
                                var_ce0[0].o = var_580[0].o & data_142fc92e0
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(var_ce0[0].o, arg7[0].o)
                                var_ce0[0].o = __vpmovzxwd_xmmdq_xmmq(var_ce0[0])
                                arg6 = var_9c0_1
                                zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                arg5[0].o ^= arg7[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_ce0[0].o, arg6[0].o)
                                zmm5[0].o ^= arg7[0].o
                                zmm2 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                arg5 = _mm256_and_ps(arg9, zmm2)
                                
                                if (_mm256_movemask_ps(arg5) == 0)
                                    arg14 = arg12
                                    arg15 = arg12
                                    arg10 = var_ce0
                                    zmm2[0].o = temp0_438
                                else
                                    zmm0 = _mm256_insertf128_ps(var_ce0, zmm1[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                    zmm1[0].o ^= arg7[0].o
                                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                                    zmm0[0].o ^= arg7[0].o
                                    arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    arg6 = arg15
                                    arg15 = _mm256_blendv_ps(arg12, arg15, arg5)
                                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
                                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg7[0].o)
                                    zmm5[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_c80[0].o)
                                    zmm5[0].o ^= arg7[0].o
                                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                                    arg6[0].o ^= arg7[0].o
                                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                    arg13 = _mm256_and_ps(arg5, zmm5)
                                    arg7 = _mm256_and_ps(arg9, arg13)
                                    int32_t j = _mm256_movemask_ps(arg7)
                                    
                                    if (j == 0)
                                        arg14 = arg12
                                        arg10 = var_ce0
                                        zmm2[0].o = temp0_438
                                    else
                                        zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                        arg14 = arg12
                                        zmm5 = arg12
                                        arg10 = var_ce0
                                        zmm2[0].o = temp0_438
                                        
                                        do
                                            arg12 = zmm1
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b40)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                                            arg6 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                                            char temp0_477 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_477 & 1) == 0)
                                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                                arg7[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                                
                                                if ((temp0_477 & 2) != 0)
                                                    goto label_1401ace9e
                                                
                                                goto label_1401ace25
                                            
                                            int128_t var_d70
                                            zmm0[0].o = var_d70
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, zx.d(*arg6[0].q), 0)
                                            var_d70 = zmm0[0].o
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                            
                                            if ((temp0_477 & 2) != 0)
                                            label_1401ace9e:
                                                uint32_t rax_79 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                zmm0[0].o = var_d70
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm0[0].o, rax_79, 1)
                                                var_d70 = zmm0[0].o
                                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, 
                                                    arg5[0].o)
                                                
                                                if ((temp0_477 & 4) == 0)
                                                    goto label_1401ace37
                                                
                                                goto label_1401acec4
                                            
                                        label_1401ace25:
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg7[0].q)
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                            
                                            if ((temp0_477 & 4) == 0)
                                            label_1401ace37:
                                                zmm0[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                                
                                                if ((temp0_477 & 8) != 0)
                                                    goto label_1401acef0
                                                
                                                goto label_1401ace44
                                            
                                        label_1401acec4:
                                            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                            arg5[0].o = var_d70
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*arg5[0].q), 2)
                                            var_d70 = arg5[0].o
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                            
                                            if ((temp0_477 & 8) != 0)
                                            label_1401acef0:
                                                arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                                uint32_t rax_83 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                                arg5[0].o = var_d70
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_83, 3)
                                                var_d70 = arg5[0].o
                                                arg6 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                                
                                                if ((temp0_477 & 0x10) == 0)
                                                    goto label_1401ace53
                                                
                                                goto label_1401acf27
                                            
                                        label_1401ace44:
                                            arg6 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                            uint32_t rax_87
                                            
                                            if ((temp0_477 & 0x10) != 0)
                                            label_1401acf27:
                                                arg7[0].o = var_d70
                                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg7[0].o, zx.d(*arg6[0].q), 4)
                                                arg5[0].o = zx.o(0)
                                                
                                                if ((temp0_477 & 0x20) != 0)
                                                    rax_87 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg7[0].o, rax_87, 5)
                                            else
                                            label_1401ace53:
                                                arg5[0].o = zx.o(0)
                                                arg7[0].o = var_d70
                                                
                                                if ((temp0_477 & 0x20) != 0)
                                                    rax_87 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg7[0].o, rax_87, 5)
                                            
                                            if ((temp0_477 & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg7[0].o, zx.d(*zmm0[0]), 6)
                                                
                                                if (temp0_477 s< 0)
                                                label_1401acdbb:
                                                    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                                    uint16_t rax_75[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg7[0].o, rax_75, 7)
                                            else if (temp0_477 s< 0)
                                                goto label_1401acdbb
                                            
                                            var_d70 = arg7[0].o
                                            zmm0[0].o = arg7[0].o & data_142fc92e0
                                            arg5[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                            arg5[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                var_9c0_1[0].o)
                                            zmm0 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm0, arg5[0].o, 1), arg13)
                                            arg5[0].o = zx.o(0)
                                            arg6 = _mm256_and_ps(zmm0, arg9)
                                            
                                            if (_mm256_movemask_ps(arg6) != j)
                                                arg5 = _mm256_xor_ps(zmm0, arg13)
                                            
                                            arg15 = _mm256_blendv_ps(arg15, zmm5, zmm0)
                                            arg6[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                            zmm0[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                            zmm5[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
                                            zmm1 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                var_c80[0].o)
                                            zmm0[0].o ^= arg6[0].o
                                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, 
                                                var_d40_1[0].o)
                                            zmm5[0].o ^= arg6[0].o
                                            zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            arg13 = _mm256_and_ps(zmm0, arg5)
                                            arg7 = _mm256_and_ps(arg13, arg9)
                                            j = _mm256_movemask_ps(arg7)
                                            zmm5 = arg12
                                        while (j != 0)
                                
                                zmm1 = zmm2
                                zmm0 = _mm256_andnot_ps(zmm1, arg9)
                                
                                if (_mm256_movemask_ps(zmm0) == 0)
                                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                else
                                    arg5 = __vxorps_ymmqq_ymmqq_memqq(zmm1, var_880.32)
                                    arg15 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg15, 
                                        data_142fc9440, arg5)
                                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                    arg13 = _mm256_and_ps(zmm5, arg5)
                                    arg6 = _mm256_and_ps(arg13, arg9)
                                    int32_t j_1 = _mm256_movemask_ps(arg6)
                                    
                                    if (j_1 != 0)
                                        arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                        
                                        do
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                            zmm1[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_b40)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                                            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                            char temp0_711 = _mm256_movemask_ps(arg6)
                                            
                                            if ((temp0_711 & 1) == 0)
                                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                                zmm0[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                                
                                                if ((temp0_711 & 2) != 0)
                                                    goto label_1401ad924
                                                
                                                goto label_1401ad8c1
                                            
                                            int128_t var_960
                                            zmm0[0].o = var_960
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, zx.d(*zmm1[0].q), 0)
                                            var_960 = zmm0[0].o
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
                                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                            
                                            if ((temp0_711 & 2) != 0)
                                            label_1401ad924:
                                                uint32_t rax_140 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg6[0].o = var_960
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, rax_140, 1)
                                                var_960 = arg6[0].o
                                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, 
                                                    arg5[0].o)
                                                
                                                if ((temp0_711 & 4) == 0)
                                                    goto label_1401ad8cf
                                                
                                                goto label_1401ad94c
                                            
                                        label_1401ad8c1:
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            arg6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                            
                                            if ((temp0_711 & 4) != 0)
                                            label_1401ad94c:
                                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                                arg5[0].o = var_960
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, zx.d(*arg5[0].q), 2)
                                                zmm0[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                                
                                                if ((temp0_711 & 8) != 0)
                                                label_1401ad971:
                                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                                    uint32_t rax_144 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg5[0].o, rax_144, 3)
                                            else
                                            label_1401ad8cf:
                                                arg5[0].o = var_960
                                                zmm0[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                                
                                                if ((temp0_711 & 8) != 0)
                                                    goto label_1401ad971
                                            
                                            zmm1 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                                            
                                            if ((temp0_711 & 0x10) == 0)
                                                if ((temp0_711 & 0x20) != 0)
                                                    goto label_1401ad82c
                                                
                                                goto label_1401ad99d
                                            
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*zmm1[0].q), 4)
                                            
                                            if ((temp0_711 & 0x20) != 0)
                                            label_1401ad82c:
                                                uint32_t rax_132 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_132, 5)
                                                
                                                if ((temp0_711 & 0x40) == 0)
                                                    goto label_1401ad9a6
                                                
                                                goto label_1401ad83d
                                            
                                        label_1401ad99d:
                                            
                                            if ((temp0_711 & 0x40) != 0)
                                            label_1401ad83d:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, zx.d(*zmm0[0]), 6)
                                                
                                                if (temp0_711 s< 0)
                                                label_1401ad858:
                                                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                                    uint32_t rax_136 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg5[0].o, rax_136, 7)
                                            else
                                            label_1401ad9a6:
                                                
                                                if (temp0_711 s< 0)
                                                    goto label_1401ad858
                                            
                                            var_960 = arg5[0].o
                                            zmm0[0].o = arg5[0].o & data_142fc92e0
                                            zmm1[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                            zmm1[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                            arg5[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                            zmm1[0].o ^= arg5[0].o
                                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                var_9c0_1[0].o)
                                            zmm0[0].o ^= arg5[0].o
                                            zmm0 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm0, zmm1[0].o, 1), arg13)
                                            zmm1[0].o = zx.o(0)
                                            arg5 = _mm256_and_ps(zmm0, arg9)
                                            
                                            if (_mm256_movemask_ps(arg5) != j_1)
                                                zmm1 = _mm256_xor_ps(zmm0, arg13)
                                            
                                            arg15 = _mm256_blendv_ps(arg15, arg12, zmm0)
                                            arg5[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                            arg5[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                                            arg12 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                            arg5[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                            arg13 = _mm256_and_ps(zmm0, zmm1)
                                            arg6 = _mm256_and_ps(arg13, arg9)
                                            j_1 = _mm256_movemask_ps(arg6)
                                        while (j_1 != 0)
                                
                                zmm4 = _mm256_blendv_ps(var_cc0_1, arg15, arg9)
                                var_cc0_1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0])
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                float var_cc0_3[0x8] = zmm4
                                arg15[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_b40)
                                var_cc0_1[0].o =
                                    __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, var_cc0_1[0].o)
                                zmm4 = _mm256_insertf128_ps(var_cc0_1, arg5[0].o, 1)
                                int128_t var_a30
                                
                                if ((r14_3 & 1) != 0)
                                    var_cc0_1[0].o = var_a30
                                    var_cc0_1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        var_cc0_1[0].o, zx.d(*zmm4[0]), 0)
                                    var_a30 = var_cc0_1[0].o
                                
                                arg12 = var_ca0
                                arg6[0].o = var_b80[0].o
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
                                var_cc0_1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
                                
                                if ((r14_3 & 2) != 0)
                                    uint16_t rax_149[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1))
                                    zmm5[0].o = var_a30
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_149, 1)
                                    var_a30 = zmm5[0].o
                                
                                var_cc0_1[0].o = __vpmovsxdq_xmmdq_xmmq(var_cc0_1[0])
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                
                                if ((r14_3 & 4) != 0)
                                    arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    arg5[0].o = var_a30
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*arg5[0].q), 2)
                                    var_cc0_1[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(var_cc0_1[0].o, temp0_438)
                                    
                                    if ((r14_3 & 8) != 0)
                                    label_1401adb3f:
                                        zmm1[0].o = arg5[0].o
                                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        int64_t rax_152 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        arg5[0].o = zmm1[0].o
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*rax_152), 3)
                                else
                                    arg5[0].o = var_a30
                                    var_cc0_1[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(var_cc0_1[0].o, temp0_438)
                                    
                                    if ((r14_3 & 8) != 0)
                                        goto label_1401adb3f
                                
                                arg11 = var_c20_2
                                zmm4 = _mm256_insertf128_ps(zmm5, var_cc0_1[0].o, 1)
                                
                                if ((r14_3 & 0x10) == 0)
                                    if ((r14_3 & 0x20) != 0)
                                        goto label_1401abb0c
                                    
                                    goto label_1401adb7e
                                
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm4[0]), 4)
                                
                                if ((r14_3 & 0x20) != 0)
                                label_1401abb0c:
                                    uint32_t rax_10 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_10, 5)
                                    
                                    if ((r14_3 & 0x40) == 0)
                                        goto label_1401adb88
                                    
                                    goto label_1401abb1e
                                
                            label_1401adb7e:
                                
                                if ((r14_3 & 0x40) != 0)
                                label_1401abb1e:
                                    var_cc0_1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*var_cc0_1[0]), 6)
                                    
                                    if (temp0_261.b s< 0)
                                    label_1401abb3a:
                                        var_cc0_1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        uint32_t rax_14 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(var_cc0_1[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_14, 7)
                                else
                                label_1401adb88:
                                    
                                    if (temp0_261.b s< 0)
                                        goto label_1401abb3a
                                
                                var_a30 = arg5[0].o
                                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                var_cc0_1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                var_cc0_3[0].o =
                                    __vpsubd_xmmdq_xmmdq_xmmdq(var_cc0_3[0].o, arg5[0].o)
                                zmm0 = _mm256_insertf128_ps(var_cc0_3, var_cc0_1[0].o, 1)
                                zmm1 = var_6c0.32
                                arg5 = _mm256_blendv_ps(zmm1, zmm0, arg9)
                                zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_c80[0].o)
                                zmm4 = var_d40_1
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                                zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg9)
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    arg5 = _mm256_blendv_ps(arg5, zmm4, zmm0)
                                
                                zmm4[0].o = var_700
                                zmm5[0].o = var_710
                                arg9 = var_c40_1
                                arg15 = var_d60_1
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                var_d40 = arg5
                                arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_b40)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                
                                if ((r14_3 & 1) != 0)
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                        zx.d(*zmm1[0].q), 0)
                                
                                arg13 = var_cc0_3
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((r14_3 & 2) != 0)
                                    uint16_t rax_158[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_158, 1)
                                
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                                
                                if ((r14_3 & 4) != 0)
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                        zx.d(*arg5[0].q), 2)
                                
                                arg5[0].o = var_a30
                                arg8 = var_7e0
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_438)
                                
                                if ((r14_3 & 8) == 0)
                                    arg10 = var_a60_1
                                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                    
                                    if ((r14_3 & 0x10) != 0)
                                        goto label_1401abb88
                                    
                                    goto label_1401adcdf
                                
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                uint16_t rax_16[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_16, 3)
                                arg10 = var_a60_1
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((r14_3 & 0x10) != 0)
                                label_1401abb88:
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                        zx.d(*zmm0[0]), 4)
                                    zmm1[0].o = arg5[0].o & data_142fc92e0
                                    
                                    if ((r14_3 & 0x20) == 0)
                                        goto label_1401adcf1
                                    
                                    goto label_1401abba5
                                
                            label_1401adcdf:
                                zmm1[0].o = arg5[0].o & data_142fc92e0
                                
                                if ((r14_3 & 0x20) == 0)
                                label_1401adcf1:
                                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                    
                                    if ((r14_3 & 0x40) != 0)
                                        goto label_1401abbbc
                                    
                                    goto label_1401add00
                                
                            label_1401abba5:
                                uint16_t rax_20[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_20, 5)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                
                                if ((r14_3 & 0x40) == 0)
                                label_1401add00:
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    
                                    if (temp0_261.b s< 0)
                                    label_1401abbdc:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint16_t rax_24[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_24, 7)
                                else
                                label_1401abbbc:
                                    arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                        zx.d(*arg5[0].q), 6)
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    
                                    if (temp0_261.b s< 0)
                                        goto label_1401abbdc
                                
                                arg14[0].o = var_7c0_1
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                zmm1[0].o = zmm5[0].o & data_142fc92e0
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            else
                                arg13[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                char rdi_6 = temp0_261.b
                                int128_t var_3c0
                                var_580[0].o = var_3c0
                                
                                if ((rdi_6 & 1) != 0)
                                    var_580[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_580[0].o, *zmm1[0].q, 0)
                                
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                
                                if ((rdi_6 & 2) != 0)
                                    int64_t rax_50 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    var_580[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_580[0].o, *rax_50, 1)
                                
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                arg10[0].o = _mm256_extractf128_ps(var_ce0[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ce0[0].o, arg5[0].o)
                                var_ce0[0].o = zx.o(0)
                                
                                if ((rdi_6 & 4) == 0)
                                    arg7 = var_9c0_1
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                                    
                                    if ((rdi_6 & 8) != 0)
                                        goto label_1401acba1
                                    
                                    goto label_1401ac712
                                
                                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                var_580[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_580[0].o, *arg5[0].q, 2)
                                arg7 = var_9c0_1
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                                
                                if ((rdi_6 & 8) != 0)
                                label_1401acba1:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_62 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    var_580[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_580[0].o, *rax_62, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                    
                                    if ((rdi_6 & 0x10) == 0)
                                        goto label_1401ac722
                                    
                                    goto label_1401acbc7
                                
                            label_1401ac712:
                                zmm1 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                
                                if ((rdi_6 & 0x10) == 0)
                                label_1401ac722:
                                    
                                    if ((rdi_6 & 0x20) != 0)
                                        goto label_1401acbd6
                                    
                                    goto label_1401ac72c
                                
                            label_1401acbc7:
                                var_580[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_580[0].o, *zmm1[0].q, 4)
                                
                                if ((rdi_6 & 0x20) != 0)
                                label_1401acbd6:
                                    int64_t rax_64 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    var_580[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_580[0].o, *rax_64, 5)
                                    
                                    if ((rdi_6 & 0x40) == 0)
                                        goto label_1401ac736
                                    
                                    goto label_1401acbeb
                                
                            label_1401ac72c:
                                
                                if ((rdi_6 & 0x40) != 0)
                                label_1401acbeb:
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    var_580[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_580[0].o, *arg5[0].q, 6)
                                    
                                    if (temp0_261.b s< 0)
                                    label_1401acc04:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        var_580[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            var_580[0].o, *rax_66, 7)
                                else
                                label_1401ac736:
                                    
                                    if (temp0_261.b s< 0)
                                        goto label_1401acc04
                                
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(var_580[0].o, zx.o(0))
                                var_3c0 = var_580[0].o
                                arg5[0].o = __vpmovzxwd_xmmdq_xmmq(var_580[0].q)
                                zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                var_ce0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                                zmm5[0].o ^= var_ce0[0].o
                                var_580[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                var_580[0].o ^= var_ce0[0].o
                                arg6 = _mm256_insertf128_ps(var_580, zmm5[0].o, 1)
                                zmm5 = _mm256_and_ps(arg9, arg6)
                                bool cond:66_1 = _mm256_movemask_ps(zmm5) == 0
                                var_500.32 = arg12
                                int32_t var_aa0_1[0x4] = arg13[0].o
                                var_b40.32 = arg6
                                
                                if (cond:66_1)
                                    arg15 = arg12
                                    arg14 = var_ce0
                                else
                                    zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                                    arg5[0].o ^= var_ce0[0].o
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    zmm1[0].o ^= var_ce0[0].o
                                    zmm5 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                                    arg7 = arg15
                                    arg15 = _mm256_blendv_ps(arg12, arg15, zmm5)
                                    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, var_ce0[0].o)
                                    arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_ce0[0].o)
                                    arg6[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, var_c80[0].o)
                                    arg6[0].o ^= var_ce0[0].o
                                    arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                    arg7[0].o ^= var_ce0[0].o
                                    arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                                    zmm0 = arg12
                                    arg12 = _mm256_and_ps(zmm5, arg6)
                                    arg7 = _mm256_and_ps(arg9, arg12)
                                    int32_t j_2 = _mm256_movemask_ps(arg7)
                                    
                                    if (j_2 == 0)
                                        arg14 = var_ce0
                                    else
                                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                        zmm5 = zmm0
                                        arg14 = var_ce0
                                        
                                        do
                                            arg13 = zmm1
                                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            arg5[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                            arg6[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
                                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
                                            arg6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                                            arg6 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                                            char temp0_368 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_368 & 1) == 0)
                                                arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                                arg5[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                                
                                                if ((temp0_368 & 2) != 0)
                                                    goto label_1401ac920
                                                
                                                goto label_1401ac89e
                                            
                                            int128_t var_b60
                                            zmm0[0].o = var_b60
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *arg6[0].q, 0)
                                            var_b60 = zmm0[0].o
                                            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                            
                                            if ((temp0_368 & 2) != 0)
                                            label_1401ac920:
                                                int64_t rax_55 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                zmm0[0].o = var_b60
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_55, 1)
                                                var_b60 = zmm0[0].o
                                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, 
                                                    arg7[0].o)
                                                
                                                if ((temp0_368 & 4) == 0)
                                                    goto label_1401ac8b1
                                                
                                                goto label_1401ac950
                                            
                                        label_1401ac89e:
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg7[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg7[0].o)
                                            
                                            if ((temp0_368 & 4) == 0)
                                            label_1401ac8b1:
                                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, 
                                                    arg5[0].o)
                                                
                                                if ((temp0_368 & 8) != 0)
                                                    goto label_1401ac980
                                                
                                                goto label_1401ac8bf
                                            
                                        label_1401ac950:
                                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                            zmm0[0].o = var_b60
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm0[0], 2)
                                            var_b60 = zmm0[0].o
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                            
                                            if ((temp0_368 & 8) != 0)
                                            label_1401ac980:
                                                zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                                int64_t rax_57 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm0[0].o = var_b60
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_57, 3)
                                                var_b60 = zmm0[0].o
                                                arg6 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                                                
                                                if ((temp0_368 & 0x10) == 0)
                                                    goto label_1401ac8cf
                                                
                                                goto label_1401ac9b8
                                            
                                        label_1401ac8bf:
                                            arg6 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                                            int64_t rax_59
                                            
                                            if ((temp0_368 & 0x10) != 0)
                                            label_1401ac9b8:
                                                arg7[0].o = var_b60
                                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg7[0].o, *arg6[0].q, 4)
                                                arg5[0].o = zx.o(0)
                                                
                                                if ((temp0_368 & 0x20) != 0)
                                                    rax_59 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_59, 5)
                                            else
                                            label_1401ac8cf:
                                                arg5[0].o = zx.o(0)
                                                arg7[0].o = var_b60
                                                
                                                if ((temp0_368 & 0x20) != 0)
                                                    rax_59 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_59, 5)
                                            
                                            if ((temp0_368 & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg7[0].o, *zmm0[0], 6)
                                                
                                                if (temp0_368 s< 0)
                                                label_1401ac839:
                                                    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                                    int64_t rax_53 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg7[0].o, *rax_53, 7)
                                            else if (temp0_368 s< 0)
                                                goto label_1401ac839
                                            
                                            zmm0[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                                            var_b60 = arg7[0].o
                                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg7[0].q)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, 
                                                var_9c0_1[0].o)
                                            arg6 = _mm256_and_ps(
                                                _mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg12)
                                            arg5[0].o = zx.o(0)
                                            zmm0 = _mm256_and_ps(arg6, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm0) != j_2)
                                                arg5 = _mm256_xor_ps(arg6, arg12)
                                            
                                            arg15 = _mm256_blendv_ps(arg15, zmm5, arg6)
                                            arg6[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                            zmm0[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                                            zmm5[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg6[0].o)
                                            zmm1 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                var_c80[0].o)
                                            zmm0[0].o ^= arg6[0].o
                                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, 
                                                var_d40_1[0].o)
                                            zmm5[0].o ^= arg6[0].o
                                            zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            arg12 = _mm256_and_ps(zmm0, arg5)
                                            arg7 = _mm256_and_ps(arg12, arg9)
                                            j_2 = _mm256_movemask_ps(arg7)
                                            zmm5 = arg13
                                        while (j_2 != 0)
                                
                                zmm0 = var_b40.32
                                zmm1 = _mm256_andnot_ps(zmm0, arg9)
                                
                                if (_mm256_movemask_ps(zmm1) == 0)
                                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                else
                                    zmm0 = _mm256_xor_ps(zmm0, arg11)
                                    arg15 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg15, 
                                        data_142fc9440, zmm0)
                                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_aa0_1)
                                    arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_500)
                                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                    arg13 = _mm256_and_ps(zmm5, zmm0)
                                    arg6 = _mm256_and_ps(arg13, arg9)
                                    int32_t j_3 = _mm256_movemask_ps(arg6)
                                    
                                    if (j_3 != 0)
                                        arg12 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                        
                                        do
                                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                            arg5[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                            zmm5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
                                            zmm5 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            char temp0_558 = _mm256_movemask_ps(arg6)
                                            
                                            if ((temp0_558 & 1) == 0)
                                                arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                                arg5[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                                
                                                if ((temp0_558 & 2) != 0)
                                                    goto label_1401ad20c
                                                
                                                goto label_1401ad196
                                            
                                            int128_t var_bc0
                                            zmm0[0].o = var_bc0
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm5[0], 0)
                                            var_bc0 = zmm0[0].o
                                            arg6[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                            
                                            if ((temp0_558 & 2) != 0)
                                            label_1401ad20c:
                                                int64_t rax_105 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                                zmm0[0].o = var_bc0
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_105, 1)
                                                var_bc0 = zmm0[0].o
                                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, 
                                                    arg6[0].o)
                                                
                                                if ((temp0_558 & 4) == 0)
                                                    goto label_1401ad1a9
                                                
                                                goto label_1401ad23c
                                            
                                        label_1401ad196:
                                            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                            arg6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
                                            
                                            if ((temp0_558 & 4) == 0)
                                            label_1401ad1a9:
                                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, 
                                                    arg5[0].o)
                                                
                                                if ((temp0_558 & 8) != 0)
                                                    goto label_1401ad26c
                                                
                                                goto label_1401ad1b7
                                            
                                        label_1401ad23c:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                            zmm0[0].o = var_bc0
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm0[0], 2)
                                            var_bc0 = zmm0[0].o
                                            arg5[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                            
                                            if ((temp0_558 & 8) != 0)
                                            label_1401ad26c:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                                int64_t rax_107 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm0[0].o = var_bc0
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_107, 3)
                                                var_bc0 = zmm0[0].o
                                                zmm5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                                
                                                if ((temp0_558 & 0x10) == 0)
                                                    goto label_1401ad1c7
                                                
                                                goto label_1401ad2a4
                                            
                                        label_1401ad1b7:
                                            zmm5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                            int64_t rax_109
                                            
                                            if ((temp0_558 & 0x10) != 0)
                                            label_1401ad2a4:
                                                arg5[0].o = var_bc0
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg5[0].o, *zmm5[0], 4)
                                                
                                                if ((temp0_558 & 0x20) != 0)
                                                    rax_109 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg5[0].o, *rax_109, 5)
                                            else
                                            label_1401ad1c7:
                                                arg5[0].o = var_bc0
                                                
                                                if ((temp0_558 & 0x20) != 0)
                                                    rax_109 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg5[0].o, *rax_109, 5)
                                            
                                            if ((temp0_558 & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg5[0].o, *zmm0[0], 6)
                                                
                                                if (temp0_558 s< 0)
                                                label_1401ad139:
                                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                                    int64_t rax_103 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg5[0].o, *rax_103, 7)
                                            else if (temp0_558 s< 0)
                                                goto label_1401ad139
                                            
                                            zmm0[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                            var_bc0 = arg5[0].o
                                            arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                                            zmm5[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                            zmm0[0].o ^= zmm5[0].o
                                            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg5[0].o, 
                                                var_9c0_1[0].o)
                                            arg5[0].o ^= zmm5[0].o
                                            zmm5 = _mm256_and_ps(
                                                _mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg13)
                                            arg5[0].o = zx.o(0)
                                            zmm0 = _mm256_and_ps(zmm5, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm0) != j_3)
                                                arg5 = _mm256_xor_ps(zmm5, arg13)
                                            
                                            arg15 = _mm256_blendv_ps(arg15, arg12, zmm5)
                                            zmm5[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                                            zmm1[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                                            arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                                            zmm1[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                            arg13 = _mm256_and_ps(zmm0, arg5)
                                            arg6 = _mm256_and_ps(arg13, arg9)
                                            j_3 = _mm256_movemask_ps(arg6)
                                        while (j_3 != 0)
                                
                                arg11 = var_c20_2
                                zmm0 = _mm256_blendv_ps(var_cc0_1, arg15, arg9)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                double var_cc0_2[0x4] = zmm0
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                int128_t var_ae0
                                
                                if ((rdi_6 & 1) != 0)
                                    zmm0[0].o = var_ae0
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0], 0)
                                    var_ae0 = zmm0[0].o
                                
                                arg12 = var_ca0
                                arg14[0].o = var_7c0_1
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((rdi_6 & 2) == 0)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_ce0[0].o)
                                    
                                    if ((rdi_6 & 4) != 0)
                                        goto label_1401ad47d
                                    
                                    goto label_1401ad416
                                
                                int64_t rax_112 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = var_ae0
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_112, 1)
                                var_ae0 = zmm0[0].o
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_ce0[0].o)
                                
                                if ((rdi_6 & 4) != 0)
                                label_1401ad47d:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    zmm0[0].o = var_ae0
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm0[0], 2)
                                    var_ae0 = zmm0[0].o
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                    
                                    if ((rdi_6 & 8) == 0)
                                        goto label_1401ad424
                                    
                                    goto label_1401ad4ad
                                
                            label_1401ad416:
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                
                                if ((rdi_6 & 8) == 0)
                                label_1401ad424:
                                    zmm4 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                    
                                    if ((rdi_6 & 0x10) != 0)
                                        goto label_1401ad4e5
                                    
                                    goto label_1401ad434
                                
                            label_1401ad4ad:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                int64_t rax_114 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = var_ae0
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_114, 3)
                                var_ae0 = zmm0[0].o
                                zmm4 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                int64_t rax_116
                                
                                if ((rdi_6 & 0x10) == 0)
                                label_1401ad434:
                                    arg5[0].o = var_ae0
                                    
                                    if ((rdi_6 & 0x20) != 0)
                                        rax_116 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_116, 5)
                                else
                                label_1401ad4e5:
                                    arg5[0].o = var_ae0
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm4[0], 4)
                                    
                                    if ((rdi_6 & 0x20) != 0)
                                        rax_116 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_116, 5)
                                
                                if ((rdi_6 & 0x40) != 0)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0], 6)
                                    
                                    if (temp0_261.b s< 0)
                                    label_1401ad6bc:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        int64_t rax_121 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_121, 7)
                                else if (temp0_261.b s< 0)
                                    goto label_1401ad6bc
                                
                                var_ae0 = arg5[0].o
                                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                                zmm1 = var_cc0_2
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1 = var_6c0.32
                                arg15 = _mm256_blendv_ps(zmm1, zmm0, arg9)
                                zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, var_c80[0].o)
                                arg5 = var_d40_1
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1 = _mm256_and_ps(zmm0, arg9)
                                
                                if (_mm256_movemask_ps(zmm1) != 0)
                                    arg15 = _mm256_blendv_ps(arg15, arg5, zmm1)
                                
                                zmm4[0].o = var_700
                                zmm5[0].o = var_710
                                arg9 = var_c40_1
                                zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                var_d40 = arg15
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                
                                if ((rdi_6 & 1) != 0)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm1[0].q, 0)
                                
                                arg13 = var_cc0_2
                                arg6[0].o = var_b80[0].o
                                arg15 = var_d60_1
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
                                
                                if ((rdi_6 & 2) == 0)
                                    arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ce0[0].o)
                                    
                                    if ((rdi_6 & 4) != 0)
                                        goto label_1401ad6f5
                                    
                                    goto label_1401ad61d
                                
                                int64_t rax_122 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_122, 1)
                                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, var_ce0[0].o)
                                
                                if ((rdi_6 & 4) == 0)
                                label_1401ad61d:
                                    arg8 = var_7e0
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                    
                                    if ((rdi_6 & 8) != 0)
                                    label_1401ad630:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_119 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_119, 3)
                                else
                                label_1401ad6f5:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 2)
                                    arg8 = var_7e0
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                    
                                    if ((rdi_6 & 8) != 0)
                                        goto label_1401ad630
                                
                                arg5[0].o = var_ae0
                                arg10 = var_a60_1
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((rdi_6 & 0x10) == 0)
                                    if ((rdi_6 & 0x20) != 0)
                                        goto label_1401ad735
                                    
                                    goto label_1401ad66d
                                
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0], 4)
                                
                                if ((rdi_6 & 0x20) != 0)
                                label_1401ad735:
                                    int64_t rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_125, 5)
                                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                                    
                                    if ((rdi_6 & 0x40) == 0)
                                        goto label_1401ad67c
                                    
                                    goto label_1401ad74f
                                
                            label_1401ad66d:
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                                
                                if ((rdi_6 & 0x40) != 0)
                                label_1401ad74f:
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0].q, 6)
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                    
                                    if (temp0_261.b s< 0)
                                    label_1401ad76c:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        int64_t rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_127, 7)
                                else
                                label_1401ad67c:
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                                    
                                    if (temp0_261.b s< 0)
                                        goto label_1401ad76c
                                
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            
                            var_710 = zmm5[0].o
                            var_700 = zmm4[0].o
                            zmm2 = __vxorps_ymmqq_ymmqq_memqq(arg8, var_880.32)
                            arg5[0].o = zx.o(0)
                            zmm5[0].o = var_ba0[0].o
                            
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
                            arg8 = arg10
                    
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    arg11 = _mm256_blendv_ps(arg11, zmm1, _mm256_insertf128_ps(arg8, zmm0[0].o, 1))
                    var_c20_1 = arg11
                
                arg14 = var_c60.32
            
            double var_c40_2[0x4] = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg15, zmm5[0].o, 1)
            var_ba0 = zmm0
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
            zmm2[0].o = _mm256_extractf128_ps(var_9e0[0].o, 1)
            arg11[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            var_d60 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(var_9e0[0].o, 0x4e)
            arg5[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0].q)
            zmm0 = var_580
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            float var_cc0_4[0x8] = arg13
            zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            int32_t var_7c0_2[0x4] = zmm0[0].o
            var_aa0 = zmm1[0].o
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0x4e)
            arg7[0].o = __vpmovsxdq_xmmdq_xmmq(arg6[0].q)
            zmm0[0].o = data_1434422d0
            arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_860)
            arg13 = arg12
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
            zmm0[0].o = var_d20_1
            zmm0[0].o &= not.o(arg10[0].o)
            zmm1[0].o = arg14[0].o & not.o(arg6[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            var_c80[0].o = zmm0[0].o
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_847 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            var_9e0[0].o = __vpmovsxdq_xmmdq_xmmq(var_9e0[0].q)
            var_b80 = _mm256_insertf128_ps(var_9e0, arg5[0].o, 1)
            double var_a60_2[0x4] = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
            var_b40.32 = zmm0
            zmm1 = var_b20.32
            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg12 = var_d00_1
            arg15[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            var_880 = zmm0[0].o
            var_6c0 = arg15[0].o
            var_ce0[0].o = arg10[0].o
            
            if (temp0_847 == 0)
                arg7[0].o = zx.o(0)
                arg14[0].o = var_c00_1
                arg11[0].o = zx.o(0)
                arg6 = arg13
            else
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg15[0].o)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_9e0[0].o, arg12[0].o)
                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                arg5[0].o = arg14[0].o ^ data_142d3f800
                zmm5[0].o = var_c00_1
                arg5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                arg9 = _mm256_and_ps(_mm256_insertf128_ps(arg6, arg10[0].o, 1), arg5)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(var_b00[0].o, 0x1f)
                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                zmm4[0].o = _mm256_extractf128_ps(var_b00[0].o, 1)
                zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                arg7 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                arg5 = _mm256_and_ps(arg7, arg9)
                var_7e0 = arg7
                
                if (_mm256_movemask_ps(arg5) == 0)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg6[0].o = var_c80[0].o
                else
                    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    var_b00[0].o = data_1434426b0
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_b00[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_b00[0].o)
                    zmm4 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_b00[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_b00[0].o)
                    zmm5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                    arg13[0].o = var_c80[0].o
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg6[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, var_b00[0].o)
                    arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                    arg6 = _mm256_and_ps(arg5, arg7)
                    arg5[0].o = _mm_permute_ps(arg6[0].o, 0x50)
                    arg7[0].o = _mm_permute_ps(arg6[0].o, 0xfa)
                    arg5 = _mm256_insertf128_ps(arg5, arg7[0].o, 1)
                    zmm1 = _mm256_blendv_ps(zmm1, zmm5, arg5)
                    zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                    zmm2 = _mm256_blendv_ps(zmm2, zmm4, zmm5)
                    arg12 = var_d60
                    zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    arg11 = var_c40_2
                    arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                    arg10[0].o = zx.o(0)
                    arg15 = var_b80
                    arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    arg8 = var_ba0
                    arg7[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                    arg14 = var_a60_2
                    arg7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    var_b00[0].o = data_1434426c0
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_b00[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_b00[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg7[0].o)
                    zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
                    arg11 = var_b40.32
                    arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_b00[0].o)
                    arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg15[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, var_b00[0].o)
                    arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
                    arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                    arg5 = _mm256_blendv_ps(arg10, arg6, arg5)
                    arg6[0].o = arg13[0].o
                    zmm4 = _mm256_blendv_ps(arg10, zmm4, zmm5)
                    int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    int64_t rcx_16 = arg5[0].q
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    int64_t r10_4 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    int64_t rbx_5 = arg5[0].q
                    double rdi_7 = zmm4[0]
                    int64_t rsi_7 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    int64_t rax_163 = arg5[0].q
                    int64_t rdx_12 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = zx.o(*(r15 + rcx_16))
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r15 + r8_3), 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r15 + rbx_5), 2)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r15 + r10_4), 3)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r15 i+ rdi_7), 4)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r15 + rsi_7), 5)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r15 + rax_163), 6)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r15 + rdx_12), 7)
                    arg7[0].o = zx.o(0)
                    zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                    arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                    arg12 = _mm256_cvtepi32_ps(arg5)
                
                zmm5 = __vandps_ymmqq_ymmqq_memqq(var_b00, data_143442a60)
                arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                var_b00[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_b00[0].o, var_b00[0].o)
                arg8[0].o = arg5[0].o ^ var_b00[0].o
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                arg5[0].o ^= var_b00[0].o
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                arg5[0].o &= arg6[0].o
                zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_b00[0].o)
                char temp0_948 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o)
                
                if (temp0_948 == 0)
                    arg10[0].o = var_ce0[0].o
                    arg14[0].o = var_c00_1
                    arg11 = var_7e0
                else
                    int128_t var_510
                    int64_t rax_165
                    
                    if ((temp0_948 & 1) != 0)
                        var_b00[0].o = var_510
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *zmm1[0].q, 0)
                        
                        if ((temp0_948 & 2) != 0)
                            rax_165 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            var_b00[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_165, 1)
                    else
                        var_b00[0].o = var_510
                        
                        if ((temp0_948 & 2) != 0)
                            rax_165 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            var_b00[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_165, 1)
                    zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_b00[0].o)
                    arg6[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    double var_400_2[0x4] = zmm5
                    
                    if ((temp0_948 & 4) != 0)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *arg5[0].q, 2)
                    
                    zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                    arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    var_500 = arg8[0].o
                    
                    if ((temp0_948 & 8) != 0)
                        int64_t rax_167 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_167, 3)
                    
                    arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    arg8[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                    
                    if ((temp0_948 & 0x10) != 0)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *zmm2[0].q, 4)
                    
                    arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm4[0].o = data_1434426b0
                    arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                    arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                    arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0x50)
                    arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                    
                    if ((temp0_948 & 0x20) != 0)
                        int64_t rax_169 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_169, 5)
                    
                    zmm4[0].o = data_1434426b0
                    arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0xfa)
                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                    
                    if ((temp0_948 & 0x40) != 0)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *arg6[0].q, 6)
                    
                    arg8[0].o = var_500
                    arg7 = _mm256_insertf128_ps(arg11, arg12[0].o, 1)
                    arg5 = _mm256_insertf128_ps(arg15, arg5[0].o, 1)
                    zmm5 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                    zmm4 = _mm256_insertf128_ps(arg14, zmm4[0].o, 1)
                    
                    if (temp0_948 s< 0)
                        int64_t rax_171 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_171, 7)
                    
                    arg14[0].o = var_c00_1
                    arg10[0].o = var_ce0[0].o
                    arg6[0].o = var_c80[0].o
                    arg11 = var_7e0
                    arg9 = arg9
                    zmm1 = _mm256_blendv_ps(zmm1, arg5, zmm5)
                    zmm2 = _mm256_blendv_ps(zmm2, arg7, zmm4)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(var_b00[0].o, arg7[0].o)
                    var_510 = var_b00[0].o
                    zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(var_b00[0])
                    arg15 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                    zmm5 = var_400_2
                
                arg12 = _mm256_blendv_ps(data_1434424e0, arg12, arg11)
                arg5 = var_b00
                arg13 = __vandps_ymmqq_ymmqq_memqq(arg5, data_142fc9520)
                arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                var_b00[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_b00[0].o, var_b00[0].o)
                arg11[0].o = arg5[0].o ^ var_b00[0].o
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                arg5[0].o ^= var_b00[0].o
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                arg5[0].o &= arg6[0].o
                arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, var_b00[0].o)
                char temp0_994 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                
                if (temp0_994 != 0)
                    int128_t var_520
                    int64_t rax_173
                    
                    if ((temp0_994 & 1) != 0)
                        var_b00[0].o = var_520
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *zmm1[0].q, 0)
                        
                        if ((temp0_994 & 2) != 0)
                            rax_173 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            var_b00[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_173, 1)
                    else
                        var_b00[0].o = var_520
                        
                        if ((temp0_994 & 2) != 0)
                            rax_173 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            var_b00[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_173, 1)
                    
                    if ((temp0_994 & 4) == 0)
                        if ((temp0_994 & 8) != 0)
                            goto label_1401aeade
                        
                        goto label_1401ae48c
                    
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *arg5[0].q, 2)
                    
                    if ((temp0_994 & 8) != 0)
                    label_1401aeade:
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rax_185 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_185, 3)
                        
                        if ((temp0_994 & 0x10) == 0)
                            goto label_1401ae496
                        
                        goto label_1401aeafe
                    
                label_1401ae48c:
                    
                    if ((temp0_994 & 0x10) == 0)
                    label_1401ae496:
                        
                        if ((temp0_994 & 0x20) != 0)
                            goto label_1401aeb0d
                        
                        goto label_1401ae4a0
                    
                label_1401aeafe:
                    var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *zmm2[0].q, 4)
                    
                    if ((temp0_994 & 0x20) != 0)
                    label_1401aeb0d:
                        int64_t rax_187 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_187, 5)
                        
                        if ((temp0_994 & 0x40) == 0)
                            goto label_1401ae4aa
                        
                        goto label_1401aeb22
                    
                label_1401ae4a0:
                    
                    if ((temp0_994 & 0x40) != 0)
                    label_1401aeb22:
                        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        var_b00[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_994 s< 0)
                        label_1401aeb3a:
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rax_189 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            var_b00[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_b00[0].o, *rax_189, 7)
                    else
                    label_1401ae4aa:
                        
                        if (temp0_994 s< 0)
                            goto label_1401aeb3a
                    
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(var_b00[0].o, arg7[0].o)
                    var_520 = var_b00[0].o
                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(var_b00[0])
                    zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
                
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                var_b00[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_b00[0].o, var_b00[0].o)
                zmm2[0].o ^= var_b00[0].o
                zmm2 = _mm256_insertf128_ps(zmm2, arg11[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                arg5[0].o ^= var_b00[0].o
                arg5 = _mm256_insertf128_ps(arg5, arg8[0].o, 1)
                zmm0 = data_143442a80
                zmm4 = _mm256_add_ps(arg12, zmm0)
                zmm5 = data_143442aa0
                arg8 = zmm5
                zmm4 = _mm256_mul_ps(zmm4, zmm5)
                zmm5 = _mm256_mul_ps(zmm4, zmm4)
                arg5 = _mm256_and_ps(arg5, _mm256_mul_ps(_mm256_add_ps(arg15, zmm0), arg8))
                arg6 = _mm256_mul_ps(arg5, arg5)
                zmm1 = _mm256_and_ps(zmm2, _mm256_mul_ps(_mm256_add_ps(zmm1, zmm0), arg8))
                zmm2 = _mm256_mul_ps(zmm1, zmm1)
                arg13 = data_142fc95a0
                zmm2 = _mm256_sub_ps(_mm256_sub_ps(_mm256_sub_ps(arg13, zmm5), arg6), zmm2)
                zmm5 = _mm256_sqrt_ps(zmm2)
                var_600.32 = _mm256_maskstore_ps(arg9, zmm4)
                var_5e0.32 = _mm256_maskstore_ps(arg9, arg5)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                arg11[0].o = zx.o(0)
                zmm2 = _mm256_cmp_ps(zmm0, zmm2, 2)
                var_5c0.32 = _mm256_maskstore_ps(arg9, zmm1)
                zmm1 = _mm256_and_ps(zmm2, zmm5)
                var_5a0.32 = _mm256_maskstore_ps(arg9, zmm1)
                arg6 = var_ca0
            
            arg12 = var_c60.32
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
            zmm1[0].o = arg10[0].o ^ arg5[0].o
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_1434422d0)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm2[0].o ^= arg5[0].o
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            var_c80[0].o = arg5[0].o
            arg5[0].o = var_d20_1
            zmm1[0].o = arg5[0].o & not.o(zmm1[0].o)
            zmm0[0].o &= not.o(zmm2[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            arg9 = var_b80
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                arg5 = var_cc0_4
            else
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                zmm0[0].o = data_142d3f5b0
                arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_860)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                arg5[0].o &= not.o(arg8[0].o)
                zmm4[0].o = zmm2[0].o & not.o(zmm1[0].o)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                bool cond:16_1 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0
                arg15[0].o = arg14[0].o
                
                if (not(cond:16_1))
                    zmm2[0].o ^= zmm5[0].o
                    zmm2 = _mm256_insertf128_ps(zmm2, arg15[0].o, 1)
                    zmm1 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, arg8[0].o, 1), zmm2)
                    zmm2[0].o = _mm256_extractf128_ps(var_d60[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(var_c40_2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c40_2[0].o, var_d60[0].o)
                    var_d60[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(var_ba0[0].o, 1)
                    var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_d60[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, arg9[0].o)
                    arg10 = var_b40.32
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg13 = arg6
                    arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg11 = var_a60_2
                    arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    var_ba0[0].o = data_1434426c0
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_ba0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_ba0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                    arg7 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60[0].o, var_ba0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_ba0[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                    arg5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                    var_d60[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                    arg5 = _mm256_insertf128_ps(arg5, var_d60[0].o, 1)
                    var_d60[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2 = _mm256_blendv_ps(arg14, zmm2, arg5)
                    zmm5[0].o = _mm_permute_ps(var_d60[0].o, 0x50)
                    var_d60[0].o = _mm_permute_ps(var_d60[0].o, 0xfa)
                    zmm4 = _mm256_insertf128_ps(zmm5, var_d60[0].o, 1)
                    zmm5 = _mm256_blendv_ps(arg14, arg7, zmm4)
                    int64_t r9_1 = zmm2[0].q
                    void* r10_5 = r15 + r9_1
                    int64_t r12_3 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    double r14_4 = zmm5[0]
                    void* r15_2 = var_bc8 i+ r14_4
                    int64_t r8_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    void* r11_3 = var_bc8 + r8_4
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    double rcx_20 = zmm5[0]
                    int64_t rsi_10 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    void* r13_2 = var_bc8 i+ rcx_20
                    arg6 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm5 = _mm256_blendv_ps(arg14, arg6, arg5)
                    arg6 = _mm256_blendv_ps(arg14, arg6, zmm4)
                    arg7[0].o = *(arg6[0].q + r15_2)
                    int64_t rdx_14 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    float* rdi_8 = arg6[0].q
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_14 + r11_3), 0x10)
                    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_8 + r13_2), 0x20)
                    double rdx_15 = zmm5[0]
                    int64_t rdi_9 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    arg6 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    arg5 = _mm256_blendv_ps(arg14, arg6, arg5)
                    zmm4 = _mm256_blendv_ps(arg14, arg6, zmm4)
                    arg6[0].o = *(rdx_15 i+ r10_5)
                    var_ba0[0].o = *(zmm4[0] + r15_2)
                    int32_t* r15_3 = arg5[0].q
                    float* rbx_6 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    var_ba0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(var_ba0[0].o, *(rbx_6 + r11_3), 0x10)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    float* rbx_7 = zmm4[0]
                    float* r11_4 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = *(r15_3 + r10_5)
                    r15 = var_bc8
                    var_ba0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(var_ba0[0].o, *(rbx_7 + r13_2), 0x20)
                    void* rbx_8 = r15 + r12_3
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    void* rdx_17 = r15 + rsi_10
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_9 + rdx_17), 0x30)
                    int64_t rdi_10 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_10 + rbx_8), 0x10)
                    int64_t rdi_11 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    var_ba0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(var_ba0[0].o, *(r11_4 + rdx_17), 0x30)
                    float* rdx_18 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_18 + rbx_8), 0x10)
                    int64_t rdx_19 = zmm2[0].q
                    void* rbx_9 = r15 + rdx_19
                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(zmm2[0].q + rbx_9), 0x20)
                    arg6 = arg13
                    arg10[0].o = zx.o(0)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg5[0].q + rbx_9), 0x20)
                    int64_t rax_181 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = *(r15 + r9_1)
                    float* rbx_10 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    arg5[0].o = *(r15 i+ r14_4)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 + r8_4), 0x10)
                    r9 = var_ac8
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 i+ rcx_20), 0x20)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 + rsi_10), 0x30)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + r12_3), 0x10)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rdx_19), 0x20)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rdi_11), 0x30)
                    void* rcx_21 = r15 + rdi_11
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_181 + rcx_21), 0x30)
                    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_10 + rcx_21), 0x30)
                    zmm4 = _mm256_insertf128_ps(zmm5, arg7[0].o, 1)
                    zmm0 = _mm256_insertf128_ps(arg5, var_ba0[0].o, 1)
                    arg5 = _mm256_mul_ps(zmm2, zmm2)
                    arg5 = _mm256_sub_ps(data_142fc95a0, arg5)
                    zmm5 = _mm256_mul_ps(zmm4, zmm4)
                    arg5 = _mm256_sub_ps(arg5, zmm5)
                    var_600.32 = _mm256_maskstore_ps(zmm1, zmm2)
                    var_5e0.32 = _mm256_maskstore_ps(zmm1, zmm4)
                    zmm2 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm0, zmm0))
                    var_5c0.32 = _mm256_maskstore_ps(zmm1, zmm0)
                    arg11[0].o = zx.o(0)
                    zmm0 = _mm256_cmp_ps(arg10, zmm2, 1)
                    zmm2 = _mm256_sqrt_ps(zmm2)
                    zmm0 = _mm256_and_ps(zmm0, zmm2)
                    var_5a0.32 = _mm256_maskstore_ps(zmm1, zmm0)
                
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_142d3f5b0)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                zmm1[0].o ^= zmm2[0].o
                zmm4[0].o = arg15[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
                zmm5[0].o = zmm0[0].o ^ var_c80[0].o
                zmm0[0].o = zmm5[0].o & zmm1[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg7[0].o = zx.o(0)
                    arg5 = var_cc0_4
                    arg10[0].o = var_ce0[0].o
                    arg14[0].o = zmm4[0].o
                else
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg12[0].o, data_142d3f800)
                    zmm2[0].o = data_142fc95c0
                    arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                    zmm1[0].o = zmm0[0].o & not.o(arg9[0].o)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm1[0].o, var_3b0_1)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    bool cond:21_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                    arg7[0].o = zx.o(0)
                    
                    if (cond:21_1)
                        arg13[0].o = var_a00
                        arg10[0].o = var_ce0[0].o
                        arg14[0].o = zmm4[0].o
                    else
                        arg8[0].o = zmm0[0].o ^ data_142d3f800
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_a00, 1)
                        zmm1[0].o = zx.o(0)
                        float var_760_1[0x8] = zmm1
                        float var_780_1[0x8] = zmm1
                        float var_7a0_1[0x8] = zmm1
                        float var_800_1[0x8] = zmm1
                        float var_820_1[0x8] = zmm1
                        float var_840_1[0x8] = zmm1
                        arg5 = var_b00
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        arg12 = _mm256_and_ps(zmm0, zmm1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, var_980)
                        int32_t temp0_1143 = _mm256_movemask_ps(zmm0)
                        var_7e0[0].o = zmm5[0].o
                        
                        if (temp0_1143 == 0)
                            arg13 = var_d00_1
                            arg14 = var_b20.32
                            arg12[0].o = data_142fc95c0
                            zmm2[0].o = arg12[0].o
                        else
                            char rdi_12 = temp0_1143.b
                            arg14 = arg8
                            float var_2e0[0x8]
                            float var_2c0[0x8]
                            
                            if ((rdi_12 & 1) != 0)
                                arg8 = var_d00_1
                                zmm1[0].o = *arg8[0]
                                arg13 = _mm256_blend_ps(var_2c0, zmm1, 1)
                                arg15 = var_2e0
                                arg11[0].o = var_6c0
                                
                                if ((rdi_12 & 2) != 0)
                                label_1401aebdf:
                                    float* rax_191 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                        *rax_191, 0x10)
                                    arg13 = _mm256_blend_ps(arg13, zmm1, 0xf)
                            else
                                arg13 = var_2c0
                                arg15 = var_2e0
                                arg8 = var_d00_1
                                arg11[0].o = var_6c0
                                
                                if ((rdi_12 & 2) != 0)
                                    goto label_1401aebdf
                            
                            if ((rdi_12 & 4) != 0)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *arg11[0].q, 0x20)
                                arg13 = _mm256_blend_ps(arg13, zmm1, 0xf)
                                
                                if ((rdi_12 & 8) != 0)
                                label_1401aecd2:
                                    float* rax_195 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                        *rax_195, 0x30)
                                    arg13 = _mm256_blend_ps(arg13, zmm1, 0xf)
                                    
                                    if ((rdi_12 & 0x10) == 0)
                                        goto label_1401aec0f
                                    
                                    goto label_1401aecee
                            else if ((rdi_12 & 8) != 0)
                                goto label_1401aecd2
                            
                            if ((rdi_12 & 0x10) != 0)
                            label_1401aecee:
                                zmm1 = var_b20.32
                                zmm1[0].o = *zmm1[0].q
                                arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm1[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 1)
                                arg13 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, data_1434426c0)
                                arg6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                                
                                if ((rdi_12 & 0x20) != 0)
                                label_1401aec23:
                                    zmm1 = var_b20.32
                                    int64_t rax_192 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_192, 0x10)
                                    arg13 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                            else
                            label_1401aec0f:
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg8[0].o, data_1434426c0)
                                arg6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                                
                                if ((rdi_12 & 0x20) != 0)
                                    goto label_1401aec23
                            
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg11[0].o, data_1434426c0)
                            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                            
                            if ((rdi_12 & 0x40) != 0)
                                zmm2[0].o = var_880
                                float* rax_193 = zmm2[0].q
                                arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                arg5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_193, 0x20)
                                arg13 = _mm256_insertf128_ps(arg13, arg5[0].o, 1)
                            
                            arg5 = var_b20.32
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                            arg7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            zmm5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            arg10 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                            
                            if (temp0_1143.b s< 0)
                                zmm0[0].o = var_880
                                int64_t rax_197 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_197, 0x30)
                                arg13 = _mm256_insertf128_ps(arg13, zmm4[0].o, 1)
                            else
                                zmm0[0].o = var_880
                            
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, data_1434426c0)
                            arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                            zmm1 = _mm256_blendv_ps(arg8, zmm5, arg10)
                            var_7a0_1 = _mm256_maskstore_ps(arg12, arg13)
                            
                            if ((rdi_12 & 1) != 0)
                                zmm5[0].o = *zmm1[0].q
                                arg15 = _mm256_blend_ps(arg15, zmm5, 1)
                            
                            arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            arg11 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            
                            if ((rdi_12 & 2) != 0)
                                int64_t rax_199 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, *rax_199, 0x10)
                                arg15 = _mm256_blend_ps(arg15, zmm4, 0xf)
                            
                            zmm0 = var_b20.32
                            zmm4 = _mm256_blendv_ps(zmm0, arg5, arg11)
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((rdi_12 & 4) == 0)
                                if ((rdi_12 & 8) != 0)
                                    goto label_1401aef9a
                                
                                goto label_1401aedd0
                            
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, *arg5[0].q, 0x20)
                            arg15 = _mm256_blend_ps(arg15, zmm5, 0xf)
                            
                            if ((rdi_12 & 8) == 0)
                            label_1401aedd0:
                                
                                if ((rdi_12 & 0x10) != 0)
                                label_1401aeddb:
                                    zmm5[0].o = *zmm4[0]
                                    arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    zmm5[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm5[0].o, 1)
                                    arg15 = _mm256_insertf128_ps(arg15, zmm5[0].o, 1)
                            else
                            label_1401aef9a:
                                float* rax_205 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, *rax_205, 0x30)
                                arg15 = _mm256_blend_ps(arg15, zmm5, 0xf)
                                
                                if ((rdi_12 & 0x10) != 0)
                                    goto label_1401aeddb
                            
                            arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o = data_1434426c0
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if ((rdi_12 & 0x20) != 0)
                                int64_t rax_201 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_201, 0x10)
                                arg15 = _mm256_insertf128_ps(arg15, zmm5[0].o, 1)
                            
                            zmm0[0].o = data_1434426c0
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                            
                            if ((rdi_12 & 0x40) != 0)
                                float* rax_202 = arg6[0].q
                                zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_202, 0x20)
                                arg15 = _mm256_insertf128_ps(arg15, zmm0[0].o, 1)
                            
                            zmm5 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                            var_2c0 = arg13
                            
                            if (temp0_1143.b s< 0)
                                int64_t rax_203 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_203, 0x30)
                                arg15 = _mm256_insertf128_ps(arg15, zmm0[0].o, 1)
                            
                            arg7[0].o = zx.o(0)
                            arg8 = arg14
                            arg13 = _mm256_blendv_ps(zmm1, arg5, arg10)
                            arg14 = _mm256_blendv_ps(zmm4, zmm5, arg11)
                            var_2e0 = arg15
                            var_840_1 = _mm256_maskstore_ps(arg12, arg15)
                            arg12[0].o = data_142fc95c0
                            zmm2[0].o = arg12[0].o
                        
                        arg12 = var_c60.32
                        arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0[0].o)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg12[0].o, data_142d3f800)
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(var_b00, data_143442a60)
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm1[0].o = arg6[0].o & not.o(arg11[0].o)
                        zmm0[0].o &= not.o(zmm1[0].o)
                        arg5[0].o = var_a00
                        zmm1[0].o = zmm4[0].o & not.o(arg5[0].o)
                        zmm5[0].o = var_d20_1
                        zmm1[0].o = zmm5[0].o & not.o(zmm1[0].o)
                        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        char temp0_1225 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_c00_1, 1)
                        arg8 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                        double var_440[0x4]
                        float var_420[0x8]
                        
                        if (temp0_1225 == 0)
                            arg9 = var_420
                            zmm5 = var_440
                            arg11[0].o = var_a00
                        else
                            var_a80.32 = zmm0
                            float var_300[0x8]
                            
                            if ((temp0_1225 & 1) != 0)
                                zmm0[0].o = *arg13[0].q
                                arg9 = _mm256_blend_ps(var_300, zmm0, 1)
                                zmm2 = arg14
                                
                                if ((temp0_1225 & 2) != 0)
                                label_1401aefdd:
                                    int64_t rax_207 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_207, 0x10)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            else
                                arg9 = var_300
                                zmm2 = arg14
                                
                                if ((temp0_1225 & 2) != 0)
                                    goto label_1401aefdd
                            
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                            arg7[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            
                            if ((temp0_1225 & 4) != 0)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *arg7[0].q, 0x20)
                                arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_1225 & 8) != 0)
                                label_1401af00f:
                                    int64_t rax_208 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_208, 0x30)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            else
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_1225 & 8) != 0)
                                    goto label_1401af00f
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg5[0].o = arg6[0].o ^ data_142d3f800
                            
                            if ((temp0_1225 & 0x10) != 0)
                                zmm1[0].o = zx.o(*zmm2[0].q)
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 3)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, data_1434426c0)
                            arg15[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                            zmm2[0].o = zmm4[0].o ^ data_142d3f800
                            arg6 = arg14
                            
                            if ((temp0_1225 & 0x20) != 0)
                                int64_t rax_210 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_210, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                            arg7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, data_1434426c0)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                            zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg11, var_a00, 1)
                            arg11 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            
                            if ((temp0_1225 & 0x40) != 0)
                                double rax_211 = zmm0[0]
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_211, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg14[0].o, data_1434426c0)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x50)
                            zmm2 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
                            arg12 = _mm256_insertf128_ps(arg15, arg6[0].o, 1)
                            arg15 = _mm256_and_ps(arg11, zmm1)
                            
                            if (temp0_1225 s< 0)
                                int64_t rax_212 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_212, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, data_1434426c0)
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0xfa)
                            zmm1 = _mm256_blendv_ps(arg13, zmm2, arg12)
                            var_300 = arg9
                            var_780_1 = _mm256_maskstore_ps(arg15, arg9)
                            
                            if ((temp0_1225 & 1) != 0)
                                zmm2[0].o = *zmm1[0].q
                                arg9 = _mm256_blend_ps(var_420, zmm2, 1)
                                zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                arg11 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                
                                if ((temp0_1225 & 2) != 0)
                                label_1401af1ad:
                                    float* rax_215 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_215, 0x10)
                                    arg9 = _mm256_blend_ps(arg9, zmm2, 0xf)
                            else
                                arg9 = var_420
                                zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                arg11 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                
                                if ((temp0_1225 & 2) != 0)
                                    goto label_1401af1ad
                            
                            zmm0 = _mm256_blendv_ps(arg14, zmm0, arg11)
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((temp0_1225 & 4) == 0)
                                if ((temp0_1225 & 8) != 0)
                                    goto label_1401b0c62
                                
                                goto label_1401af1df
                            
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *arg5[0].q, 0x20)
                            arg9 = _mm256_blend_ps(arg9, zmm2, 0xf)
                            
                            if ((temp0_1225 & 8) == 0)
                            label_1401af1df:
                                
                                if ((temp0_1225 & 0x10) != 0)
                                label_1401af1ea:
                                    zmm2[0].o = *zmm0[0]
                                    zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm2[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 1)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            else
                            label_1401b0c62:
                                float* rax_269 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_269, 0x30)
                                arg9 = _mm256_blend_ps(arg9, zmm2, 0xf)
                                
                                if ((temp0_1225 & 0x10) != 0)
                                    goto label_1401af1ea
                            
                            zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = data_1434426c0
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            
                            if ((temp0_1225 & 0x20) != 0)
                                int64_t rax_217 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_217, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            
                            zmm2[0].o = data_1434426c0
                            arg7[0].o = zmm2[0].o
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                            
                            if ((temp0_1225 & 0x40) != 0)
                                double rax_218 = zmm4[0]
                                arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_218, 0x20)
                                arg9 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                            
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            
                            if (temp0_1225 s< 0)
                                int64_t rax_219 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm4[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_219, 0x30)
                                arg9 = _mm256_insertf128_ps(arg9, zmm4[0].o, 1)
                            
                            zmm5 = var_440
                            arg13 = _mm256_blendv_ps(zmm1, arg5, arg12)
                            arg14 = _mm256_blendv_ps(zmm0, zmm2, arg11)
                            var_820_1 = _mm256_maskstore_ps(arg15, arg9)
                            arg12[0].o = data_142fc95c0
                            zmm2[0].o = arg12[0].o
                            arg11[0].o = var_a00
                            arg12 = var_c60.32
                            zmm0 = var_a80.32
                        
                        arg10 = _mm256_and_ps(arg8, zmm0)
                        arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_ca0[0].o)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg12[0].o, data_142d3f800)
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(var_b00, data_142fc9520)
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        arg5[0].o = zx.o(0)
                        arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o = arg6[0].o & not.o(arg11[0].o)
                        arg5[0].o = var_d20_1
                        zmm1[0].o = arg5[0].o & not.o(zmm1[0].o)
                        arg5[0].o = arg7[0].o & not.o(arg8[0].o)
                        zmm0[0].o &= not.o(arg5[0].o)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        char temp0_1316 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        var_420 = arg9
                        
                        if (temp0_1316 == 0)
                            arg13 = data_142fc95a0
                            arg8 = arg13
                            arg15 = var_ca0
                            arg14[0].o = var_c00_1
                            arg9 = var_b80
                        else
                            if ((temp0_1316 & 1) == 0)
                                zmm2 = arg14
                                
                                if ((temp0_1316 & 2) != 0)
                                    goto label_1401b0ca0
                                
                                goto label_1401af362
                            
                            zmm0[0].o = *arg13[0].q
                            zmm5 = _mm256_blend_ps(zmm5, zmm0, 1)
                            zmm2 = arg14
                            
                            if ((temp0_1316 & 2) != 0)
                            label_1401b0ca0:
                                int64_t rax_271 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_271, 0x10)
                                zmm5 = _mm256_blend_ps(zmm5, zmm0, 0xf)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                                arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                
                                if ((temp0_1316 & 4) == 0)
                                    goto label_1401af377
                                
                                goto label_1401b0ccc
                            
                        label_1401af362:
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                            arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            
                            if ((temp0_1316 & 4) == 0)
                            label_1401af377:
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                
                                if ((temp0_1316 & 8) != 0)
                                    goto label_1401b0ce7
                                
                                goto label_1401af386
                            
                        label_1401b0ccc:
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *arg5[0].q, 0x20)
                            zmm5 = _mm256_blend_ps(zmm5, zmm1, 0xf)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_1316 & 8) == 0)
                            label_1401af386:
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                arg7[0].o ^= data_142d3f800
                                
                                if ((temp0_1316 & 0x10) != 0)
                                label_1401af39e:
                                    zmm1[0].o = zx.o(*zmm2[0].q)
                                    arg9 = zmm5
                                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm1[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm1[0].o, 3)
                                    zmm5 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                            else
                            label_1401b0ce7:
                                float* rax_273 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_273, 0x30)
                                zmm5 = _mm256_blend_ps(zmm5, zmm1, 0xf)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                arg7[0].o ^= data_142d3f800
                                
                                if ((temp0_1316 & 0x10) != 0)
                                    goto label_1401af39e
                            
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, data_1434426c0)
                            arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            arg6[0].o ^= data_142d3f800
                            
                            if ((temp0_1316 & 0x20) != 0)
                                int64_t rax_221 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_221, 0x10)
                                zmm5 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            
                            arg12 = zmm5
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_a00, 1)
                            arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            
                            if ((temp0_1316 & 0x40) != 0)
                                double rax_222 = zmm4[0]
                                arg7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                arg7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_222, 0x20)
                                arg12 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
                            
                            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg11, zmm5[0].o, 1)
                            zmm5 = _mm256_and_ps(arg6, zmm0)
                            
                            if (temp0_1316 s< 0)
                                int64_t rax_223 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_223, 0x30)
                                arg12 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            
                            double var_320[0x4]
                            arg8 = var_320
                            arg9 = var_b80
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(arg7[0].o, 0x1f)
                            zmm1 = _mm256_blendv_ps(arg13, zmm1, arg5)
                            var_440 = arg12
                            var_760_1 = _mm256_maskstore_ps(zmm5, arg12)
                            
                            if ((temp0_1316 & 1) != 0)
                                arg5[0].o = *zmm1[0].q
                                arg8 = _mm256_blend_ps(arg8, arg5, 1)
                            
                            arg14[0].o = var_c00_1
                            arg12 = var_c60.32
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, data_1434426c0)
                            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            
                            if ((temp0_1316 & 2) == 0)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, data_1434426c0)
                                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                
                                if ((temp0_1316 & 4) != 0)
                                    goto label_1401b0d3e
                                
                                goto label_1401af4f2
                            
                            float* rax_274 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_274, 0x10)
                            arg8 = _mm256_blend_ps(arg8, arg7, 0xf)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, data_1434426c0)
                            arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            
                            if ((temp0_1316 & 4) != 0)
                            label_1401b0d3e:
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *zmm0[0], 0x20)
                                arg8 = _mm256_blend_ps(arg8, zmm0, 0xf)
                                zmm0 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                
                                if ((temp0_1316 & 8) == 0)
                                    goto label_1401af508
                                
                                goto label_1401b0d6b
                            
                        label_1401af4f2:
                            zmm0 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            arg5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                            
                            if ((temp0_1316 & 8) != 0)
                            label_1401b0d6b:
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                float* rax_276 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *rax_276, 0x30)
                                arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                                zmm0 = _mm256_blendv_ps(zmm2, zmm0, arg5)
                                
                                if ((temp0_1316 & 0x10) != 0)
                                label_1401af519:
                                    zmm1[0].o = *zmm0[0]
                                    arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm1[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 1)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            else
                            label_1401af508:
                                zmm0 = _mm256_blendv_ps(zmm2, zmm0, arg5)
                                
                                if ((temp0_1316 & 0x10) != 0)
                                    goto label_1401af519
                            
                            arg13 = data_142fc95a0
                            arg15 = var_ca0
                            
                            if ((temp0_1316 & 0x20) == 0)
                                if ((temp0_1316 & 0x40) != 0)
                                    goto label_1401b0dba
                                
                                goto label_1401af558
                            
                            int64_t rax_277 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_277, 0x10)
                            arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                            
                            if ((temp0_1316 & 0x40) == 0)
                            label_1401af558:
                                
                                if (temp0_1316 s< 0)
                                label_1401b0ddf:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rax_279 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_279, 0x30)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                            else
                            label_1401b0dba:
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                float* rax_278 = zmm1[0].q
                                zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_278, 0x20)
                                arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                
                                if (temp0_1316 s< 0)
                                    goto label_1401b0ddf
                            
                            var_320 = arg8
                            var_800_1 = _mm256_maskstore_ps(zmm5, arg8)
                            arg8 = arg13
                        
                        zmm0[0].o = _mm256_extractf128_ps(var_d60[0].o, 1)
                        arg5 = var_c40_2
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_d60[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        var_d60[0].o = _mm256_extractf128_ps(var_ba0[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60[0].o, arg5[0].o)
                        var_d60[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, arg9[0].o)
                        arg7 = var_a60_2
                        var_ba0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg6[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, zmm0[0].o)
                        zmm2 = var_b40.32
                        var_ba0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, zmm1[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_d60[0].o, arg6[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        arg5[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                        var_d60[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(arg5, var_d60[0].o, 1)
                        zmm2[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(zmm2, zmm1, arg5)
                        arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        var_d60[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        zmm0 = _mm256_blendv_ps(zmm2, zmm0, 
                            _mm256_insertf128_ps(var_d60, arg5[0].o, 1))
                        int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rcx_25 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t rdx_20 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_11 = zmm1[0].q
                        double rdi_15 = zmm0[0]
                        int64_t rsi_11 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_226 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = zx.o(*(r15 + rcx_25))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + r8_5), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rbx_11), 2)
                        double rcx_26 = zmm0[0]
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rdx_20), 3)
                        zmm1[0].o = zx.o(*(r15 i+ rdi_15))
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rsi_11), 1)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 i+ rcx_26), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rax_226), 3)
                        arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        var_d60[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        var_ba0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        arg6[0].o = data_143442440
                        var_ba0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_ba0[0].o, arg6[0].o)
                        var_d60[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_d60[0].o, arg6[0].o)
                        zmm4 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(var_d60, var_ba0[0].o, 1))
                        zmm5 = data_143442460
                        zmm4 = _mm256_div_ps(zmm4, zmm5)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm4, var_840_1)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                        zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_7a0_1)
                        arg7[0].o = data_143442480
                        zmm1[0].o &= arg7[0].o
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm0[0].o &= arg7[0].o
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                        zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(
                                _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)), 
                                    zmm5), 
                                var_820_1), 
                            var_780_1)
                        zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm5[0].o = data_143442490
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                            __vmulps_ymmqq_ymmqq_memqq(
                                __vdivps_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)), 
                                    data_1434424a0), 
                                var_800_1), 
                            var_760_1)
                        arg5 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm4, zmm4))
                        zmm5 = _mm256_mul_ps(zmm0, zmm0)
                        arg5 = _mm256_sub_ps(arg5, zmm5)
                        var_600.32 = _mm256_maskstore_ps(arg10, zmm4)
                        var_5e0.32 = _mm256_maskstore_ps(arg10, zmm0)
                        zmm0 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm1, zmm1))
                        var_5c0.32 = _mm256_maskstore_ps(arg10, zmm1)
                        arg11[0].o = zx.o(0)
                        zmm1 = _mm256_cmp_ps(zmm2, zmm0, 1)
                        zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                        var_5a0.32 = _mm256_maskstore_ps(arg10, zmm0)
                        arg7[0].o = zx.o(0)
                        arg10[0].o = var_ce0[0].o
                        arg13[0].o = var_a00
                        arg6 = arg15
                        zmm5[0].o = var_7e0[0].o
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_142fc95c0)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                    arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    zmm1[0].o ^= zmm2[0].o
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                    arg9[0].o = zmm5[0].o ^ zmm0[0].o
                    zmm1[0].o &= arg9[0].o
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg9 = var_b80
                        arg5 = var_cc0_4
                    else
                        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg8[0].o)
                        zmm0[0].o = data_143442ac0
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_860)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm0[0].o = var_d20_1
                        zmm4[0].o = zmm0[0].o & not.o(zmm1[0].o)
                        zmm5[0].o = arg5[0].o & not.o(zmm2[0].o)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                            arg5[0].o ^= arg8[0].o
                            arg5 = _mm256_insertf128_ps(arg5, arg14[0].o, 1)
                            zmm2 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), arg5)
                            int128_t var_d20_2 = zmm1[0].o
                            zmm1 = var_d60
                            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm4[0].o = _mm256_extractf128_ps(var_c40_2[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c40_2[0].o, zmm1[0].o)
                            zmm1 = var_b80
                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            arg6[0].o = _mm256_extractf128_ps(var_ba0[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, zmm1[0].o)
                            arg8 = var_b40.32
                            arg7[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            arg11[0].o = arg10[0].o
                            zmm1[0].o = _mm256_extractf128_ps(var_a60_2[0].o, 1)
                            var_ba0[0].o = data_1434426c0
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_ba0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_ba0[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_a60_2[0].o, arg5[0].o)
                            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_ba0[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_ba0[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                            arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                            zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            arg15[0].o = zx.o(0)
                            arg5 = _mm256_blendv_ps(arg15, arg5, zmm4)
                            zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                            zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                            zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                            zmm1 = _mm256_blendv_ps(arg15, zmm1, zmm4)
                            int64_t r8_6 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            int64_t rcx_27 = arg5[0].q
                            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            int64_t rdx_21 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            int64_t rbx_12 = arg5[0].q
                            int64_t rdi_16 = zmm1[0].q
                            int64_t rsi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_229 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg5[0].o = zx.o(*(r15 + rcx_27))
                            arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 + r8_6), 1)
                            arg5[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 + rbx_12), 2)
                            int64_t rcx_28 = zmm1[0].q
                            arg5[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 + rdx_21), 3)
                            zmm1[0].o = zx.o(*(r15 + rdi_16))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rsi_12), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rcx_28), 2)
                            zmm4[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rax_229), 3)
                            zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                            arg6 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                            arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 5)
                            var_ba0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 5)
                            zmm0 = _mm256_insertf128_ps(arg7, var_ba0[0].o, 1)
                            arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                            arg8[0].o = arg11[0].o
                            arg10 = data_1434422e0
                            zmm0 = _mm256_and_ps(zmm0, arg10)
                            arg11 = data_143442300
                            arg6 = _mm256_and_ps(arg6, arg11)
                            zmm0 = _mm256_or_ps(zmm0, arg6)
                            arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                            arg12[0].o = data_143442320
                            zmm5[0].o &= arg12[0].o
                            arg13[0].o = data_143442330
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                            zmm1[0].o &= arg12[0].o
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                            zmm5 = _mm256_or_ps(zmm0, zmm1)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 6)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 6)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            zmm0 = _mm256_and_ps(zmm0, arg10)
                            arg10[0].o = arg8[0].o
                            arg14[0].o = var_c00_1
                            zmm1 = _mm256_and_ps(zmm1, arg11)
                            zmm0 = _mm256_or_ps(zmm0, zmm1)
                            zmm1[0].o = arg6[0].o & arg12[0].o
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                            arg6[0].o = arg7[0].o & arg12[0].o
                            arg12 = var_c60.32
                            arg7[0].o = zx.o(0)
                            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
                            arg8 = var_ca0
                            zmm0 = _mm256_or_ps(zmm0, _mm256_insertf128_ps(arg6, zmm1[0].o, 1))
                            zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x11)
                            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x11)
                            arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                            zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_143442340)
                            arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442360)
                            zmm1 =
                                _mm256_or_ps(arg5, __vandps_ymmqq_ymmqq_memqq(zmm1, data_143442380))
                            arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg6[0].o = data_1434423a0
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                            arg6 = arg8
                            zmm1 = _mm256_or_ps(zmm1, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                            arg5 = _mm256_mul_ps(zmm5, zmm5)
                            arg5 = _mm256_sub_ps(data_142fc95a0, arg5)
                            zmm4 = _mm256_mul_ps(zmm0, zmm0)
                            arg5 = _mm256_sub_ps(arg5, zmm4)
                            var_600.32 = _mm256_maskstore_ps(zmm2, zmm5)
                            var_5e0.32 = _mm256_maskstore_ps(zmm2, zmm0)
                            zmm0 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm1, zmm1))
                            var_5c0.32 = _mm256_maskstore_ps(zmm2, zmm1)
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            zmm1 = _mm256_cmp_ps(arg15, zmm0, 1)
                            zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                            zmm1[0].o = var_d20_2
                            var_5a0.32 = _mm256_maskstore_ps(zmm2, zmm0)
                        
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_143442ac0)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                        zmm2[0].o ^= zmm0[0].o
                        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                        zmm0[0].o = arg9[0].o ^ zmm1[0].o
                        zmm0[0].o &= zmm2[0].o
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                            arg9 = var_b80
                            arg5 = var_cc0_4
                        else
                            zmm1[0].o = data_142fc95e0
                            zmm2[0].o = zmm1[0].o
                            arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_860)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                            zmm2[0].o &= zmm0[0].o
                            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
                                zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                arg11 = var_d60
                                arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg9 = var_c40_2
                                zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                                arg15 = var_b80
                                zmm4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                zmm1 = var_ba0
                                zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                                zmm4[0].o = arg10[0].o
                                arg10 = var_a60_2
                                zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg6[0].o = data_1434426c0
                                arg7[0].o = arg6[0].o
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
                                arg10[0].o = zmm4[0].o
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
                                arg15[0].o = zx.o(0)
                                arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                                zmm1 = var_b40.32
                                zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                arg6[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                zmm4 = _mm256_blendv_ps(arg15, zmm4, zmm5)
                                zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                arg5 = _mm256_blendv_ps(arg15, arg5, zmm5)
                                int64_t r8_7 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                double rcx_29 = zmm4[0]
                                zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                int64_t rdx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                double rbx_13 = zmm4[0]
                                int64_t rdi_17 = arg5[0].q
                                int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                int64_t rax_232 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                zmm4[0].o = zx.o(*(r15 i+ rcx_29))
                                zmm4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + r8_7), 1)
                                zmm4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 i+ rbx_13), 2)
                                int64_t rcx_30 = arg5[0].q
                                arg5[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + rdx_22), 3)
                                zmm4[0].o = zx.o(*(r15 + rdi_17))
                                zmm4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + rsi_13), 1)
                                zmm4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + rcx_30), 2)
                                zmm4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + rax_232), 3)
                                arg9 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                                arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                                arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                                zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                                zmm1[0].o = data_143442440
                                arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                arg6 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, arg7[0].o, 1))
                                arg7 = data_143442460
                                arg6 = _mm256_div_ps(arg6, arg7)
                                zmm5[0].o = data_143442480
                                zmm4[0].o &= zmm5[0].o
                                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                arg5[0].o &= zmm5[0].o
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                arg5 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm4[0].o, 1)), 
                                    arg7)
                                zmm4 = __vandps_ymmqq_ymmqq_memqq(arg9, data_143442420)
                                zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm1[0].o = data_143442490
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                zmm5 = _mm256_mul_ps(arg6, arg6)
                                zmm1 = data_142fc95a0
                                zmm5 = _mm256_sub_ps(zmm1, zmm5)
                                arg7 = _mm256_mul_ps(arg5, arg5)
                                zmm5 = _mm256_sub_ps(zmm5, arg7)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                var_600.32 = _mm256_maskstore_ps(zmm2, arg6)
                                arg6 = var_ca0
                                zmm4 = __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm4), 
                                    data_1434424a0)
                                var_5e0.32 = _mm256_maskstore_ps(zmm2, arg5)
                                arg5 = _mm256_sub_ps(zmm5, _mm256_mul_ps(zmm4, zmm4))
                                var_5c0.32 = _mm256_maskstore_ps(zmm2, zmm4)
                                arg11[0].o = zx.o(0)
                                zmm4 = _mm256_cmp_ps(arg15, arg5, 1)
                                arg5 = _mm256_and_ps(zmm4, _mm256_sqrt_ps(arg5))
                                var_5a0.32 = _mm256_maskstore_ps(zmm2, arg5)
                            
                            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            zmm1[0].o = arg8[0].o ^ arg5[0].o
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_142fc95e0)
                            zmm2[0].o ^= arg5[0].o
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm1[0].o &= zmm0[0].o
                            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0)
                                arg9 = var_b80
                                arg5 = var_cc0_4
                            else
                                zmm2[0].o = data_143442ad0
                                arg5[0].o = zmm2[0].o
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_860)
                                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                                zmm0[0].o &= arg5[0].o
                                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                                    arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                                    zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                    arg5[0].o = zx.o(0)
                                    var_600.32 = _mm256_maskstore_ps(zmm0, arg5)
                                    var_5e0.32 = _mm256_maskstore_ps(zmm0, arg5)
                                    arg11[0].o = zx.o(0)
                                    var_5c0.32 = _mm256_maskstore_ps(zmm0, arg5)
                                    arg5 = data_142fc95a0
                                    var_5a0.32 = _mm256_maskstore_ps(zmm0, arg5)
                                
                                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                zmm0[0].o = zmm2[0].o ^ arg5[0].o
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_143442ad0)
                                zmm2[0].o ^= arg5[0].o
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                zmm0[0].o &= zmm1[0].o
                                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg9 = var_b80
                                arg5 = var_cc0_4
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                    zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    zmm1[0].o = zx.o(0)
                                    var_600.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    var_5e0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    arg11[0].o = zx.o(0)
                                    var_5c0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    zmm1 = data_142fc95a0
                                    var_5a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
            zmm1[0].o ^= zmm0[0].o
            arg6 = var_d40
            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_aa0)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            zmm4[0].o = zmm2[0].o & not.o(arg14[0].o)
            zmm5[0].o = arg5[0].o & not.o(zmm1[0].o)
            arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0)
                arg12 = data_142fc95a0
            else
                zmm1 = _mm256_insertf128_ps(zmm1, arg14[0].o, 1)
                float var_cc0_5[0x8] = zmm1
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                zmm1[0].o = zmm2[0].o ^ zmm4[0].o
                zmm2[0].o = arg5[0].o ^ zmm4[0].o
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                var_b40.32 = zmm1
                arg8 = var_ca0
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, data_1434422d0)
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg6[0].o, var_580[0].o)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_7c0_2)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                arg5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                var_c00_1.32 = zmm0
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm5 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                var_c60.32 = zmm5
                arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                zmm4[0].o &= arg15[0].o
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                char temp0_1692 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o)
                arg14 = var_d60
                arg10[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                arg12 = data_142fc95a0
                var_a60_2[0].o = arg6[0].o
                int128_t var_d20_3 = arg10[0].o
                double var_4e0[0x4]
                double var_4c0[0x4]
                float var_4a0[0x8]
                float var_480[0x8]
                
                if (temp0_1692 == 0)
                    arg6 = arg8
                else
                    var_ce0[0].o = arg15[0].o
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg10[0].o, var_880)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg14[0].o, var_b20)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    arg12 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, var_6c0)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, var_d00_1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    arg11 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0])
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm5 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    arg5 = var_b00
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                    arg15 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
                    zmm2 = _mm256_and_ps(arg15, zmm5)
                    double var_d40_2[0x4] = zmm5
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        zmm1[0].o = arg6[0].o
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg5[0].o = data_1434426b0
                        zmm5[0].o = arg5[0].o
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                        zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm5[0].o)
                        arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                        zmm5 = _mm256_and_ps(zmm0, arg15)
                        zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                        arg11 = _mm256_blendv_ps(arg11, arg5, zmm0)
                        arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                        arg12 = _mm256_blendv_ps(arg12, zmm2, arg5)
                        zmm2[0].o = _mm256_extractf128_ps(var_c40_2[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                        var_c40_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c40_2[0].o, arg14[0].o)
                        arg10 = var_c00_1.32
                        arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg7[0].o = data_1434426c0
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        arg6[0].o = _mm256_extractf128_ps(var_ba0[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        var_c40_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c40_2[0].o, arg7[0].o)
                        var_c40_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, var_c40_2[0].o)
                        zmm2 = _mm256_insertf128_ps(var_c40_2, zmm2[0].o, 1)
                        arg10 = var_c60.32
                        var_c40_2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        var_c40_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c40_2[0].o, arg6[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, arg9[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                        arg7[0].o = zx.o(0)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
                        zmm5 = _mm256_insertf128_ps(arg6, var_c40_2[0].o, 1)
                        arg6[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(arg6, zmm5, zmm0)
                        zmm2 = _mm256_blendv_ps(arg6, zmm2, arg5)
                        int64_t r8_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rcx_31 = zmm0[0]
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r10_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        double rbx_14 = zmm0[0]
                        int64_t rdi_18 = zmm2[0].q
                        int64_t rsi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        double rax_239 = zmm0[0]
                        int64_t rdx_23 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = zx.o(*(r15 i+ rcx_31))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15 + r8_8), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15 i+ rbx_14), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15 + r10_6), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15 + rdi_18), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15 + rsi_14), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15 i+ rax_239), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r15 + rdx_23), 7)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        arg8 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1))
                    
                    int128_t var_530
                    zmm5[0].o = var_530
                    arg13 = __vandps_ymmqq_ymmqq_memqq(var_b00, data_143442a60)
                    var_b00[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    var_b00[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_b00[0].o, arg7[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg6[0].o = var_b00[0].o ^ zmm1[0].o
                    var_b00[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                    var_b00[0].o ^= zmm1[0].o
                    var_b00[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_b00[0].o, arg6[0].o)
                    arg5[0].o = zmm4[0].o & var_b00[0].o
                    var_b00[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    var_b00[0].o = __vpsraw_xmmdq_xmmdq_immb(var_b00[0].o, 0xf)
                    var_b00[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_b00[0].o, var_b00[0].o)
                    char temp0_1783 = __vpmovmskb_gpr32d_xmmdq(var_b00[0].o)
                    
                    if (temp0_1783 == 0)
                        r9 = var_ac8
                    else
                        if ((temp0_1783 & 1) != 0)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg11[0].q, 0)
                        
                        var_aa0 = arg6[0].o
                        
                        if ((temp0_1783 & 2) != 0)
                            int64_t rax_241 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_241, 1)
                        
                        r9 = var_ac8
                        var_b00[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_b00[0].o)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg5[0].q)
                        arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        
                        if ((temp0_1783 & 4) == 0)
                            var_b00[0].o = __vpslld_xmmdq_xmmdq_immb(var_b00[0].o, 0x1f)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_1783 & 8) != 0)
                                goto label_1401b047f
                            
                            goto label_1401b039e
                        
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 2)
                        var_b00[0].o = __vpslld_xmmdq_xmmdq_immb(var_b00[0].o, 0x1f)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        
                        if ((temp0_1783 & 8) == 0)
                        label_1401b039e:
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(var_b00[0].o, 0x1f)
                            var_b00[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_1783 & 0x10) != 0)
                                zmm5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg12[0].q, 4)
                        else
                        label_1401b047f:
                            uint16_t* rax_246 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_246, 3)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(var_b00[0].o, 0x1f)
                            var_b00[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_1783 & 0x10) != 0)
                                zmm5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg12[0].q, 4)
                        
                        arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm2[0].o = data_1434426b0
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                        arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm2[0].o)
                        arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(var_b00[0].o, 0x50)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                        var_a80.32 = arg12
                        var_7c0_2.32 = arg15
                        zmm1 = arg13
                        
                        if ((temp0_1783 & 0x20) != 0)
                            int64_t rax_243 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_243, 5)
                        
                        arg13[0].o = zmm5[0].o
                        zmm5[0].o = data_1434426b0
                        arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                        var_b00[0].o = __vpshufd_xmmdq_xmmdq_immb(var_b00[0].o, 0xfa)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                        
                        if ((temp0_1783 & 0x40) != 0)
                            arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *arg5[0].q, 6)
                        
                        arg7 = _mm256_insertf128_ps(arg9, arg8[0].o, 1)
                        arg6 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg14, var_b00[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                        
                        if (temp0_1783 s< 0)
                            uint16_t* rax_247 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            zmm5[0].o = arg13[0].o
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_247, 7)
                        else
                            zmm5[0].o = arg13[0].o
                        
                        arg13 = zmm1
                        arg15 = var_7c0_2.32
                        arg11 = _mm256_blendv_ps(arg11, arg6, zmm0)
                        arg12 = _mm256_blendv_ps(var_a80.32, arg7, zmm2)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0])
                        arg10 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                        arg6[0].o = var_aa0
                    
                    arg8 = _mm256_blendv_ps(data_1434424e0, arg8, arg15)
                    zmm0 = var_b00
                    arg15 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                    zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg9[0].o = zmm0[0].o ^ zmm1[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
                    zmm0[0].o ^= zmm1[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                    zmm0[0].o &= zmm4[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_1833 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    var_530 = zmm5[0].o
                    
                    if (temp0_1833 == 0)
                        arg14[0].o = var_ce0[0].o
                    else
                        int128_t var_540
                        int64_t rax_249
                        
                        if ((temp0_1833 & 1) != 0)
                            zmm2[0].o = var_540
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg11[0].q, 0)
                            
                            if ((temp0_1833 & 2) != 0)
                                rax_249 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_249, 1)
                        else
                            zmm2[0].o = var_540
                            
                            if ((temp0_1833 & 2) != 0)
                                rax_249 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_249, 1)
                        
                        if ((temp0_1833 & 4) == 0)
                            if ((temp0_1833 & 8) != 0)
                                goto label_1401b0bcc
                            
                            goto label_1401b05ba
                        
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 2)
                        
                        if ((temp0_1833 & 8) != 0)
                        label_1401b0bcc:
                            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            int64_t rax_263 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_263, 3)
                            arg14[0].o = var_ce0[0].o
                            
                            if ((temp0_1833 & 0x10) == 0)
                                goto label_1401b05cd
                            
                            goto label_1401b0bf5
                        
                    label_1401b05ba:
                        arg14[0].o = var_ce0[0].o
                        
                        if ((temp0_1833 & 0x10) == 0)
                        label_1401b05cd:
                            
                            if ((temp0_1833 & 0x20) != 0)
                                goto label_1401b0c04
                            
                            goto label_1401b05d7
                        
                    label_1401b0bf5:
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg12[0].q, 4)
                        
                        if ((temp0_1833 & 0x20) != 0)
                        label_1401b0c04:
                            int64_t rax_265 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_265, 5)
                            
                            if ((temp0_1833 & 0x40) == 0)
                                goto label_1401b05e1
                            
                            goto label_1401b0c19
                        
                    label_1401b05d7:
                        
                        if ((temp0_1833 & 0x40) != 0)
                        label_1401b0c19:
                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0], 6)
                            
                            if (temp0_1833 s< 0)
                            label_1401b0c31:
                                zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                int64_t rax_267 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_267, 7)
                        else
                        label_1401b05e1:
                            
                            if (temp0_1833 s< 0)
                                goto label_1401b0c31
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
                        var_540 = zmm2[0].o
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    zmm1[0].o ^= arg5[0].o
                    zmm1 = _mm256_insertf128_ps(zmm1, arg9[0].o, 1)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg7[0].o)
                    zmm2[0].o ^= arg5[0].o
                    zmm2 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
                    arg5 = data_143442a80
                    arg6 = arg5
                    arg5 = _mm256_add_ps(arg8, arg5)
                    zmm4 = data_143442aa0
                    arg7 = zmm4
                    arg5 = _mm256_mul_ps(arg5, zmm4)
                    zmm4 = _mm256_mul_ps(arg5, arg5)
                    zmm2 = _mm256_and_ps(zmm2, _mm256_mul_ps(_mm256_add_ps(arg10, arg6), arg7))
                    zmm5 = _mm256_mul_ps(zmm2, zmm2)
                    zmm0 = _mm256_and_ps(zmm1, _mm256_mul_ps(_mm256_add_ps(zmm0, arg6), arg7))
                    zmm1 = _mm256_mul_ps(zmm0, zmm0)
                    arg13 = data_142fc95a0
                    arg12 = arg13
                    zmm1 = _mm256_sub_ps(_mm256_sub_ps(_mm256_sub_ps(arg13, zmm4), zmm5), zmm1)
                    zmm4 = _mm256_sqrt_ps(zmm1)
                    zmm5 = var_d40_2
                    var_4e0 = _mm256_maskstore_ps(zmm5, arg5)
                    var_4c0 = _mm256_maskstore_ps(zmm5, zmm2)
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg11[0].o = zx.o(0)
                    zmm1 = _mm256_cmp_ps(zmm2, zmm1, 2)
                    var_4a0 = _mm256_maskstore_ps(zmm5, zmm0)
                    var_480 = _mm256_maskstore_ps(zmm5, _mm256_and_ps(zmm1, zmm4))
                    arg6 = var_ca0
                    arg9 = var_b80
                    arg10[0].o = var_d20_3
                    arg15[0].o = arg14[0].o
                
                zmm1 = var_b40.32
                zmm0 = _mm256_and_ps(zmm1, var_cc0_5)
                var_d40 = zmm0
                zmm0[0].o = arg15[0].o & var_c80[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm0[0].o = data_142d3f5b0
                    arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_860)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                    zmm1[0].o &= arg15[0].o
                    zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    arg14 = var_d60
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(var_c40_2[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c40_2[0].o, arg14[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(var_ba0[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, var_a60_2[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, arg9[0].o)
                        arg9 = var_c60.32
                        arg13 = arg6
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg10[0].o = arg15[0].o
                        arg11 = var_c00_1.32
                        arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        var_ba0[0].o = data_1434426c0
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_ba0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_ba0[0].o)
                        arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                        arg10[0].o = var_d20_3
                        arg5 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_ba0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_ba0[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg9[0].o = zx.o(0)
                        zmm2 = _mm256_blendv_ps(arg9, zmm2, zmm4)
                        arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg9, arg5, zmm5)
                        int64_t r14_5 = zmm2[0].q
                        void* r13_3 = r15 + r14_5
                        int64_t r12_4 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t r11_5 = arg5[0].q
                        void* rdx_24 = r15 + r11_5
                        int64_t r8_9 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        void* rdi_19 = r15 + r8_9
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t r10_7 = arg5[0].q
                        int64_t rsi_17 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        void* rbx_15 = r15 + r10_7
                        arg5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg6 = _mm256_blendv_ps(arg9, arg5, zmm4)
                        arg5 = _mm256_blendv_ps(arg9, arg5, zmm5)
                        arg7[0].o = *(arg5[0].q + rdx_24)
                        int64_t rax_253 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        float* rcx_35 = arg5[0].q
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_253 + rdi_19), 0x10)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_35 + rbx_15), 0x20)
                        int32_t* rax_254 = arg6[0].q
                        int64_t rcx_36 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm4 = _mm256_blendv_ps(arg9, arg5, zmm4)
                        arg5 = _mm256_blendv_ps(arg9, arg5, zmm5)
                        zmm5[0].o = *(rax_254 + r13_3)
                        var_ba0[0].o = *(arg5[0].q + rdx_24)
                        int32_t* rax_256 = zmm4[0]
                        float* rdx_25 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        var_ba0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_ba0[0].o, 
                            *(rdx_25 + rdi_19), 0x10)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        float* rdx_26 = arg5[0].q
                        float* rdi_20 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg5[0].o = *(rax_256 + r13_3)
                        var_ba0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_ba0[0].o, 
                            *(rdx_26 + rbx_15), 0x20)
                        void* rax_257 = r15 + r12_4
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        void* rdx_27 = r15 + rsi_17
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_36 + rdx_27), 0x30)
                        int64_t rcx_37 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_37 + rax_257), 0x10)
                        int64_t rcx_38 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        var_ba0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_ba0[0].o, 
                            *(rdi_20 + rdx_27), 0x30)
                        float* rdx_28 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_28 + rax_257), 0x10)
                        int64_t rax_258 = zmm2[0].q
                        void* rdx_29 = r15 + rax_258
                        zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg6 = arg13
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(zmm2[0].q + rdx_29), 0x20)
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm4[0] + rdx_29), 0x20)
                        int64_t rdx_30 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = *(r15 + r14_5)
                        float* rbx_18 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o = *(r15 + r11_5)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + r8_9), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + r10_7), 0x20)
                        r9 = var_ac8
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15 + rsi_17), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + r12_4), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rax_258), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rcx_38), 0x30)
                        void* rax_259 = r15 + rcx_38
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_30 + rax_259), 0x30)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_18 + rax_259), 0x30)
                        zmm4 = _mm256_insertf128_ps(zmm5, arg7[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg5, var_ba0[0].o, 1)
                        arg5 = _mm256_sub_ps(arg12, _mm256_mul_ps(zmm2, zmm2))
                        zmm5 = _mm256_mul_ps(zmm4, zmm4)
                        arg5 = _mm256_sub_ps(arg5, zmm5)
                        var_4e0 = _mm256_maskstore_ps(zmm1, zmm2)
                        var_4c0 = _mm256_maskstore_ps(zmm1, zmm4)
                        zmm2 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm0, zmm0))
                        var_4a0 = _mm256_maskstore_ps(zmm1, zmm0)
                        arg11[0].o = zx.o(0)
                        zmm0 = _mm256_cmp_ps(arg9, zmm2, 1)
                        zmm2 = _mm256_sqrt_ps(zmm2)
                        zmm0 = _mm256_and_ps(zmm0, zmm2)
                        var_480 = _mm256_maskstore_ps(zmm1, zmm0)
                    
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_142d3f5b0)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                    zmm5[0].o = zmm0[0].o ^ var_c80[0].o
                    zmm0[0].o = arg15[0].o & zmm5[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm2[0].o = data_142fc95c0
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                        arg8[0].o = var_a00
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                        zmm0[0].o &= arg15[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        bool cond:47_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                        arg5[0].o = zx.o(0)
                        
                        if (not(cond:47_1))
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg13[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, arg8[0].o, 1)
                            arg6[0].o = zx.o(0)
                            float var_760_2[0x8] = arg6
                            float var_780_2[0x8] = arg6
                            float var_7a0_2[0x8] = arg6
                            float var_800_2[0x8] = arg6
                            float var_820_2[0x8] = arg6
                            float var_840_2[0x8] = arg6
                            zmm2 = var_b00
                            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            arg6[0].o = __vpsrad_xmmdq_xmmdq_immb(arg6[0].o, 0x1f)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm1 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                            arg12 = _mm256_and_ps(zmm0, zmm1)
                            zmm4 = __vandps_ymmqq_ymmqq_memqq(arg12, var_d40)
                            int32_t temp0_1986 = _mm256_movemask_ps(zmm4)
                            var_c80[0].o = zmm5[0].o
                            float var_cc0_6[0x8] = arg7
                            float var_460[0x8]
                            
                            if (temp0_1986 == 0)
                                arg7 = var_460
                            else
                                char rdi_21 = temp0_1986.b
                                float var_360[0x8]
                                
                                if ((rdi_21 & 1) != 0)
                                    arg9 = var_d00_1
                                    zmm0[0].o = *arg9[0].q
                                    arg7 = _mm256_blend_ps(var_360, zmm0, 1)
                                    arg5[0].o = var_6c0
                                    
                                    if ((rdi_21 & 2) != 0)
                                    label_1401b0e40:
                                        int64_t rax_281 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                            *rax_281, 0x10)
                                        arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                else
                                    arg7 = var_360
                                    arg9 = var_d00_1
                                    arg5[0].o = var_6c0
                                    
                                    if ((rdi_21 & 2) != 0)
                                        goto label_1401b0e40
                                
                                if ((rdi_21 & 4) != 0)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                        *arg5[0].q, 0x20)
                                    arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                    
                                    if ((rdi_21 & 8) != 0)
                                    label_1401b0f40:
                                        int64_t rax_285 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                            *rax_285, 0x30)
                                        arg7 = _mm256_blend_ps(arg7, zmm0, 0xf)
                                        
                                        if ((rdi_21 & 0x10) == 0)
                                            goto label_1401b0e70
                                        
                                        goto label_1401b0f5c
                                else if ((rdi_21 & 8) != 0)
                                    goto label_1401b0f40
                                
                                if ((rdi_21 & 0x10) != 0)
                                label_1401b0f5c:
                                    zmm0 = var_b20.32
                                    zmm0[0].o = *zmm0[0]
                                    zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
                                    arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                    zmm5[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, data_1434426c0)
                                    arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                                    
                                    if ((rdi_21 & 0x20) != 0)
                                    label_1401b0e84:
                                        zmm0 = var_b20.32
                                        int64_t rax_282 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rax_282, 0x10)
                                        arg7 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                else
                                label_1401b0e70:
                                    zmm5[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, data_1434426c0)
                                    arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                                    
                                    if ((rdi_21 & 0x20) != 0)
                                        goto label_1401b0e84
                                
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                                zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                                
                                if ((rdi_21 & 0x40) != 0)
                                    arg5[0].o = var_880
                                    float* rax_283 = arg5[0].q
                                    arg5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_283, 0x20)
                                    arg7 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                                
                                arg8 = arg7
                                arg5 = var_b20.32
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, data_1434426c0)
                                arg7[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                                zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                                arg14 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                                double var_380[0x4]
                                
                                if (temp0_1986.b s< 0)
                                    arg6[0].o = var_880
                                    float* rax_287 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                    zmm5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_287, 0x30)
                                    arg8 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                                    zmm4 = var_380
                                else
                                    zmm4 = var_380
                                    arg6[0].o = var_880
                                
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, data_1434426c0)
                                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                                zmm5 = _mm256_blendv_ps(arg9, zmm1, arg14)
                                var_360 = arg8
                                var_7a0_2 = _mm256_maskstore_ps(arg12, arg8)
                                
                                if ((rdi_21 & 1) != 0)
                                    zmm1[0].o = *zmm5[0]
                                    zmm4 = _mm256_blend_ps(zmm4, zmm1, 1)
                                
                                zmm1 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                                arg8 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                
                                if ((rdi_21 & 2) != 0)
                                    int64_t rax_289 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_289, 0x10)
                                    zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                                
                                zmm0 = var_b20.32
                                arg9 = _mm256_blendv_ps(zmm0, zmm1, arg8)
                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                
                                if ((rdi_21 & 4) == 0)
                                    if ((rdi_21 & 8) != 0)
                                        goto label_1401b11f1
                                    
                                    goto label_1401b1050
                                
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *zmm0[0], 0x20)
                                zmm4 = _mm256_blend_ps(zmm4, zmm1, 0xf)
                                
                                if ((rdi_21 & 8) == 0)
                                label_1401b1050:
                                    
                                    if ((rdi_21 & 0x10) != 0)
                                    label_1401b105b:
                                        zmm1[0].o = *arg9[0].q
                                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, 
                                            zmm1[0].o, 1)
                                        zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                else
                                label_1401b11f1:
                                    int64_t rax_295 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_295, 0x30)
                                    zmm4 = _mm256_blend_ps(zmm4, zmm1, 0xf)
                                    
                                    if ((rdi_21 & 0x10) != 0)
                                        goto label_1401b105b
                                
                                arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm1[0].o = data_1434426c0
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                                zmm2[0].o = arg15[0].o
                                
                                if ((rdi_21 & 0x20) != 0)
                                    int64_t rax_291 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_291, 0x10)
                                    zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                
                                arg11 = zmm4
                                zmm1[0].o = data_1434426c0
                                zmm4[0].o = zmm1[0].o
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                                
                                if ((rdi_21 & 0x40) != 0)
                                    float* rax_292 = arg5[0].q
                                    zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm4[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_292, 0x20)
                                    arg11 = _mm256_insertf128_ps(arg11, zmm4[0].o, 1)
                                
                                zmm4 = arg11
                                arg15[0].o = zmm2[0].o
                                zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
                                
                                if (temp0_1986.b s< 0)
                                    int64_t rax_293 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_293, 0x30)
                                    zmm4 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                
                                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                arg7 = var_460
                                var_d00_1 = _mm256_blendv_ps(zmm5, zmm0, arg14)
                                var_b20.32 = _mm256_blendv_ps(arg9, zmm1, arg8)
                                var_380 = zmm4
                                var_840_2 = _mm256_maskstore_ps(arg12, zmm4)
                                arg14 = var_d60
                            
                            arg13[0].o = __vpsrad_xmmdq_xmmdq_immb(arg13[0].o, 0x1f)
                            arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_ca0[0].o, data_142fc95c0)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(var_b00, data_143442a60)
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm2[0].o = var_a00
                            zmm0[0].o = zmm4[0].o & not.o(zmm2[0].o)
                            zmm1[0].o = zmm5[0].o & not.o(arg8[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm0[0].o &= arg15[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_2110 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_2110 != 0)
                                if ((temp0_2110 & 1) != 0)
                                    arg9 = var_d00_1
                                    zmm1[0].o = *arg9[0].q
                                    arg7 = _mm256_blend_ps(arg7, zmm1, 1)
                                    
                                    if ((temp0_2110 & 2) != 0)
                                    label_1401b1230:
                                        int64_t rax_297 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                            *rax_297, 0x10)
                                        arg7 = _mm256_blend_ps(arg7, zmm1, 0xf)
                                else
                                    arg9 = var_d00_1
                                    
                                    if ((temp0_2110 & 2) != 0)
                                        goto label_1401b1230
                                
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                
                                if ((temp0_2110 & 4) != 0)
                                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                        *arg6[0].q, 0x20)
                                    arg7 = _mm256_blend_ps(arg7, zmm2, 0xf)
                                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    
                                    if ((temp0_2110 & 8) != 0)
                                    label_1401b1262:
                                        int64_t rax_298 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                                            *rax_298, 0x30)
                                        arg7 = _mm256_blend_ps(arg7, zmm2, 0xf)
                                else
                                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    
                                    if ((temp0_2110 & 8) != 0)
                                        goto label_1401b1262
                                
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm0[0].o = zmm5[0].o ^ data_142d3f800
                                
                                if ((temp0_2110 & 0x10) != 0)
                                    arg5 = var_b20.32
                                    arg5[0].o = zx.o(*arg5[0].q)
                                    zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    arg5[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg5[0].o, 3)
                                    arg7 = _mm256_insertf128_ps(arg7, arg5[0].o, 1)
                                
                                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                arg9[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, data_1434426c0)
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                                zmm2[0].o = zmm4[0].o ^ data_142d3f800
                                arg12[0].o = arg15[0].o
                                
                                if ((temp0_2110 & 0x20) != 0)
                                    arg10 = var_b20.32
                                    int64_t rax_301 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm4[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_301, 0x10)
                                    arg7 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
                                    arg11 = arg7
                                else
                                    arg11 = arg7
                                    arg10 = var_b20.32
                                
                                zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, data_1434426c0)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                                arg8 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg8, var_a00, 1)
                                zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                
                                if ((temp0_2110 & 0x40) != 0)
                                    float* rax_302 = arg7[0].q
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_302, 0x20)
                                    arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                
                                zmm0 = var_b20.32
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, data_1434426c0)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x50)
                                arg9 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                                arg14 = _mm256_and_ps(zmm2, arg8)
                                
                                if (temp0_2110 s< 0)
                                    int64_t rax_303 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_303, 0x30)
                                    arg11 = _mm256_insertf128_ps(arg11, arg5[0].o, 1)
                                
                                double var_3a0[0x4]
                                arg10 = var_3a0
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg7[0].o, data_1434426c0)
                                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0xfa)
                                zmm5 = _mm256_blendv_ps(var_d00_1, arg9, zmm1)
                                var_780_2 = _mm256_maskstore_ps(arg14, arg11)
                                
                                if ((temp0_2110 & 1) != 0)
                                    arg7[0].o = *zmm5[0]
                                    arg10 = _mm256_blend_ps(arg10, arg7, 1)
                                
                                zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
                                arg8 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                                
                                if ((temp0_2110 & 2) != 0)
                                    int64_t rax_305 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, 
                                        *rax_305, 0x10)
                                    arg10 = _mm256_blend_ps(arg10, arg5, 0xf)
                                
                                arg5 = var_b20.32
                                arg9 = _mm256_blendv_ps(arg5, zmm0, arg8)
                                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                
                                if ((temp0_2110 & 4) == 0)
                                    if ((temp0_2110 & 8) != 0)
                                        goto label_1401b1643
                                    
                                    goto label_1401b144a
                                
                                arg5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *zmm0[0], 0x20)
                                arg10 = _mm256_blend_ps(arg10, arg5, 0xf)
                                
                                if ((temp0_2110 & 8) == 0)
                                label_1401b144a:
                                    
                                    if ((temp0_2110 & 0x10) != 0)
                                    label_1401b1455:
                                        arg5[0].o = *arg9[0].q
                                        zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, 
                                            arg5[0].o, 1)
                                        arg10 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
                                else
                                label_1401b1643:
                                    int64_t rax_312 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, 
                                        *rax_312, 0x30)
                                    arg10 = _mm256_blend_ps(arg10, arg5, 0xf)
                                    
                                    if ((temp0_2110 & 0x10) != 0)
                                        goto label_1401b1455
                                
                                arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm2[0].o = data_1434426c0
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                
                                if ((temp0_2110 & 0x20) != 0)
                                    int64_t rax_307 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    arg7[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *rax_307, 0x10)
                                    arg10 = _mm256_insertf128_ps(arg10, arg7[0].o, 1)
                                
                                zmm2[0].o = data_1434426c0
                                arg7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                
                                if ((temp0_2110 & 0x40) != 0)
                                    float* rax_308 = arg5[0].q
                                    zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_308, 0x20)
                                    arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                                
                                zmm4 = _mm256_insertf128_ps(zmm4, arg7[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                                
                                if (temp0_2110 s< 0)
                                    int64_t rax_309 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_309, 0x30)
                                    arg10 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                                
                                arg5[0].o = zx.o(0)
                                arg7 = arg11
                                zmm2[0].o = var_a00
                                arg15[0].o = arg12[0].o
                                var_d00_1 = _mm256_blendv_ps(zmm5, zmm0, zmm1)
                                var_b20.32 = _mm256_blendv_ps(arg9, zmm4, arg8)
                                var_3a0 = arg10
                                var_820_2 = _mm256_maskstore_ps(arg14, arg10)
                                arg14 = var_d60
                                arg10[0].o = var_d20_3
                            
                            arg8[0].o = zmm2[0].o
                            zmm0 = var_cc0_6
                            arg11 = _mm256_insertf128_ps(zmm0, arg13[0].o, 1)
                            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_ca0[0].o, data_142fc95c0)
                            zmm1 = __vandps_ymmqq_ymmqq_memqq(var_b00, data_142fc9520)
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            zmm1[0].o = zmm4[0].o & not.o(arg8[0].o)
                            zmm2[0].o = zmm5[0].o & not.o(arg9[0].o)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm2[0].o = arg15[0].o & zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_2197 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            var_460 = arg7
                            
                            if (temp0_2197 == 0)
                                arg13 = data_142fc95a0
                                arg12 = arg13
                                zmm5 = var_b80
                            else
                                float var_8c0[0x8]
                                
                                if ((temp0_2197 & 1) != 0)
                                    zmm1 = var_d00_1
                                    zmm1[0].o = *zmm1[0].q
                                    arg5 = _mm256_blend_ps(var_8c0, zmm1, 1)
                                    var_8c0 = arg5
                                
                                if ((temp0_2197 & 2) != 0)
                                    arg6 = var_d00_1
                                    int64_t rax_313 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8c0[0].o, 
                                        *rax_313, 0x10)
                                    arg5 = _mm256_blend_ps(var_8c0, zmm1, 0xf)
                                    var_8c0 = arg5
                                    zmm0 = data_142fc95a0
                                else
                                    zmm0 = data_142fc95a0
                                    arg6 = var_d00_1
                                
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                arg13[0].o = arg8[0].o
                                
                                if ((temp0_2197 & 4) == 0)
                                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    
                                    if ((temp0_2197 & 8) != 0)
                                        goto label_1401b1773
                                    
                                    goto label_1401b16c2
                                
                                arg8 = var_8c0
                                arg5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *arg6[0].q, 0x20)
                                arg8 = _mm256_blend_ps(arg8, arg5, 0xf)
                                var_8c0 = arg8
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                
                                if ((temp0_2197 & 8) == 0)
                                label_1401b16c2:
                                    arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    arg5[0].o = zmm5[0].o ^ data_142d3f800
                                    
                                    if ((temp0_2197 & 0x10) != 0)
                                    label_1401b16d5:
                                        zmm1 = var_b20.32
                                        zmm1[0].o = zx.o(*zmm1[0].q)
                                        arg8 = var_8c0
                                        zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                                        zmm1[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, 
                                            zmm1[0].o, 3)
                                        arg8 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                                        var_8c0 = arg8
                                else
                                label_1401b1773:
                                    int64_t rax_316 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8c0[0].o, 
                                        *rax_316, 0x30)
                                    arg7 = _mm256_blend_ps(var_8c0, arg5, 0xf)
                                    var_8c0 = arg7
                                    arg7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    arg5[0].o = zmm5[0].o ^ data_142d3f800
                                    
                                    if ((temp0_2197 & 0x10) != 0)
                                        goto label_1401b16d5
                                
                                zmm5[0].o =
                                    __vpaddq_xmmdq_xmmdq_memdq(var_d00_1[0].o, data_1434426c0)
                                arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0x50)
                                zmm4[0].o ^= data_142d3f800
                                
                                if ((temp0_2197 & 0x20) != 0)
                                    arg12 = var_b20.32
                                    int64_t rax_317 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    arg10 = var_8c0
                                    var_d00_1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    var_d00_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                                        var_d00_1[0].o, *rax_317, 0x10)
                                    arg10 = _mm256_insertf128_ps(arg10, var_d00_1[0].o, 1)
                                    var_8c0 = arg10
                                else
                                    arg12 = var_b20.32
                                
                                var_d00_1[0].o =
                                    __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                arg10[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg6[0].o, data_1434426c0)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0xfa)
                                arg7 = _mm256_insertf128_ps(arg9, arg13[0].o, 1)
                                arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                
                                if ((temp0_2197 & 0x40) != 0)
                                    double rax_318 = arg10[0]
                                    zmm4[0].o = _mm256_extractf128_ps(var_8c0[0].o, 1)
                                    zmm4[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_318, 0x20)
                                    arg9 = _mm256_insertf128_ps(var_8c0, zmm4[0].o, 1)
                                else
                                    arg9 = var_8c0
                                
                                arg12 = zmm0
                                var_d00_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_d00_1[0].o, 0x1f)
                                zmm4 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                zmm2 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                                arg7 = _mm256_and_ps(arg5, arg7)
                                
                                if (temp0_2197 s< 0)
                                    int64_t rax_319 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *rax_319, 0x30)
                                    arg9 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                                
                                arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(var_d00_1[0].o, 0x1f)
                                zmm4 = _mm256_blendv_ps(var_d00_1, zmm4, zmm2)
                                var_760_2 = _mm256_maskstore_ps(arg7, arg9)
                                uint32_t var_6e0[0x8]
                                
                                if ((temp0_2197 & 1) != 0)
                                    var_d00_1[0].o = *zmm4[0]
                                    zmm2 = _mm256_blend_ps(var_6e0, var_d00_1, 1)
                                    var_6e0 = zmm2
                                
                                zmm1 = var_b20.32
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, data_1434426c0)
                                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x50)
                                
                                if ((temp0_2197 & 2) != 0)
                                    int64_t rax_321 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_6e0[0].o, 
                                        *rax_321, 0x10)
                                    zmm2 = _mm256_blend_ps(var_6e0, zmm1, 0xf)
                                    var_6e0 = zmm2
                                
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg10[0].o, data_1434426c0)
                                arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0xfa)
                                
                                if ((temp0_2197 & 4) != 0)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    arg8 = var_6e0
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, 
                                        *zmm1[0].q, 0x20)
                                    arg8 = _mm256_blend_ps(arg8, zmm1, 0xf)
                                    var_6e0 = arg8
                                
                                arg14 = var_d60
                                arg10[0].o = var_d20_3
                                arg8[0].o = arg13[0].o
                                zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                                
                                if ((temp0_2197 & 8) != 0)
                                    arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rax_323 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm4 = var_6e0
                                    arg5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_323, 0x30)
                                    zmm4 = _mm256_blend_ps(zmm4, arg5, 0xf)
                                    arg5 = var_b20.32
                                    zmm2 = _mm256_blendv_ps(arg5, zmm2, zmm1)
                                    
                                    if ((temp0_2197 & 0x10) != 0)
                                    label_1401b19b2:
                                        zmm1[0].o = *zmm2[0].q
                                        arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, 
                                            zmm1[0].o, 1)
                                        zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                else
                                    zmm4 = var_6e0
                                    arg5 = var_b20.32
                                    zmm2 = _mm256_blendv_ps(arg5, zmm2, zmm1)
                                    
                                    if ((temp0_2197 & 0x10) != 0)
                                        goto label_1401b19b2
                                
                                if ((temp0_2197 & 0x20) == 0)
                                    if ((temp0_2197 & 0x40) != 0)
                                        goto label_1401aba9e
                                    
                                    goto label_1401b19de
                                
                                int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_4, 0x10)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                
                                if ((temp0_2197 & 0x40) == 0)
                                label_1401b19de:
                                    var_8c0 = arg9
                                    
                                    if (temp0_2197 s< 0)
                                    label_1401abacc:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                        int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                            *rax_6, 0x30)
                                        zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                else
                                label_1401aba9e:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    float* rax_5 = zmm1[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_5, 0x20)
                                    zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                    var_8c0 = arg9
                                    
                                    if (temp0_2197 s< 0)
                                        goto label_1401abacc
                                
                                zmm5 = var_b80
                                var_6e0 = zmm4
                                var_800_2 = _mm256_maskstore_ps(arg7, zmm4)
                            
                            zmm2 = var_c40_2
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                            arg5[0].o = _mm256_extractf128_ps(var_ba0[0].o, 1)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg5[0].o, var_a60_2[0].o)
                            var_ba0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, zmm5[0].o)
                            arg7 = var_c00_1.32
                            zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                            arg6[0].o = data_1434426c0
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                            zmm0 = var_c60.32
                            zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_ba0[0].o, arg6[0].o)
                            arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                            zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                            arg5[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                            var_ba0[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                            arg5 = _mm256_insertf128_ps(arg5, var_ba0[0].o, 1)
                            zmm0[0].o = zx.o(0)
                            zmm2 = _mm256_blendv_ps(zmm0, zmm2, arg5)
                            arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            var_ba0[0].o = _mm_permute_ps(arg5[0].o, 0x50)
                            arg5[0].o = _mm_permute_ps(arg5[0].o, 0xfa)
                            zmm1 = _mm256_blendv_ps(zmm0, zmm1, 
                                _mm256_insertf128_ps(var_ba0, arg5[0].o, 1))
                            int64_t r8_10 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rcx_42 = zmm2[0].q
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rdx_31 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rbx_19 = zmm2[0].q
                            int64_t rdi_24 = zmm1[0].q
                            int64_t rsi_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rax_325 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm2[0].o = zx.o(*(r15 + rcx_42))
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + r8_10), 1)
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rbx_19), 2)
                            int64_t rcx_43 = zmm1[0].q
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rdx_31), 3)
                            zmm2[0].o = zx.o(*(r15 + rdi_24))
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rsi_18), 1)
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rcx_43), 2)
                            zmm2[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15 + rax_325), 3)
                            arg5 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            var_ba0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                            arg6[0].o = data_143442440
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                            var_ba0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_ba0[0].o, arg6[0].o)
                            zmm4 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(var_ba0, zmm5[0].o, 1))
                            zmm5 = data_143442460
                            zmm4 = _mm256_div_ps(zmm4, zmm5)
                            zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                            zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                            zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm4, var_840_2)
                            arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442420)
                            zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_7a0_2)
                            arg7[0].o = data_143442480
                            zmm2[0].o &= arg7[0].o
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            zmm1[0].o &= arg7[0].o
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                            zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                                __vmulps_ymmqq_ymmqq_memqq(
                                    _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm2[0].o, 
                                            1)), 
                                        zmm5), 
                                    var_820_2), 
                                var_780_2)
                            zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm5[0].o = data_143442490
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                            zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                                __vmulps_ymmqq_ymmqq_memqq(
                                    __vdivps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm2[0].o, 
                                            1)), 
                                        data_1434424a0), 
                                    var_800_2), 
                                var_760_2)
                            arg5 = _mm256_sub_ps(arg12, _mm256_mul_ps(zmm4, zmm4))
                            zmm5 = _mm256_mul_ps(zmm1, zmm1)
                            arg5 = _mm256_sub_ps(arg5, zmm5)
                            var_4e0 = _mm256_maskstore_ps(arg11, zmm4)
                            var_4c0 = _mm256_maskstore_ps(arg11, zmm1)
                            zmm1 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm2, zmm2))
                            var_4a0 = _mm256_maskstore_ps(arg11, zmm2)
                            arg5 = arg11
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            zmm2 = _mm256_cmp_ps(zmm0, zmm1, 1)
                            zmm1 = _mm256_and_ps(zmm2, _mm256_sqrt_ps(zmm1))
                            var_480 = _mm256_maskstore_ps(arg5, zmm1)
                            arg6 = var_ca0
                            zmm5[0].o = var_c80[0].o
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_142fc95c0)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
                        arg9[0].o = zmm5[0].o ^ zmm0[0].o
                        zmm1[0].o = arg15[0].o & arg9[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm0[0].o = data_143442ac0
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, var_860)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm2[0].o &= arg15[0].o
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
                                arg13 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                arg5[0].o = _mm256_extractf128_ps(var_c40_2[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_c40_2[0].o, arg14[0].o)
                                zmm5[0].o = _mm256_extractf128_ps(var_ba0[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60_2[0].o)
                                arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(var_ba0[0].o, var_b80[0].o)
                                zmm2 = var_c60.32
                                arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg10 = var_c00_1.32
                                var_b20 = zmm1[0].o
                                zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                var_ba0[0].o = data_1434426c0
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, var_ba0[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_ba0[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_ba0[0].o)
                                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, var_ba0[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                zmm4[0].o = _mm_permute_ps(arg13[0].o, 0x50)
                                zmm5[0].o = _mm_permute_ps(arg13[0].o, 0xfa)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                var_ba0[0].o = zx.o(0)
                                arg5 = _mm256_blendv_ps(var_ba0, arg5, zmm4)
                                zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                                zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                                zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                zmm1 = _mm256_blendv_ps(var_ba0, zmm1, zmm4)
                                int64_t r8_11 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                int64_t rcx_44 = arg5[0].q
                                arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                int64_t rdx_32 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                int64_t rbx_20 = arg5[0].q
                                int64_t rdi_25 = zmm1[0].q
                                int64_t rsi_19 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rax_328 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg5[0].o = zx.o(*(r15 + rcx_44))
                                arg5[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 + r8_11), 1)
                                arg5[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 + rbx_20), 2)
                                int64_t rcx_45 = zmm1[0].q
                                arg5[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15 + rdx_32), 3)
                                zmm1[0].o = zx.o(*(r15 + rdi_25))
                                zmm1[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rsi_19), 1)
                                zmm1[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rcx_45), 2)
                                zmm4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15 + rax_328), 3)
                                zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                                zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                                arg6 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                                arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 5)
                                var_ba0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 5)
                                zmm0 = _mm256_insertf128_ps(arg7, var_ba0[0].o, 1)
                                arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                                arg10 = data_1434422e0
                                zmm0 = _mm256_and_ps(zmm0, arg10)
                                arg12 = data_143442300
                                arg6 = _mm256_and_ps(arg6, arg12)
                                zmm0 = _mm256_or_ps(zmm0, arg6)
                                arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                                arg8[0].o = arg15[0].o
                                arg11[0].o = data_143442320
                                zmm5[0].o &= arg11[0].o
                                zmm2[0].o = data_143442330
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                zmm1[0].o &= arg11[0].o
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                                zmm5 = _mm256_or_ps(zmm0, zmm1)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 6)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 6)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                                zmm0 = _mm256_and_ps(zmm0, arg10)
                                arg10[0].o = var_d20_3
                                arg14 = var_d60
                                zmm1 = _mm256_and_ps(zmm1, arg12)
                                zmm0 = _mm256_or_ps(zmm0, zmm1)
                                zmm1[0].o = arg6[0].o & arg11[0].o
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                arg6[0].o = arg7[0].o & arg11[0].o
                                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                                zmm0 = _mm256_or_ps(zmm0, _mm256_insertf128_ps(arg6, zmm1[0].o, 1))
                                zmm1 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x11)
                                zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x11)
                                arg5 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_143442340)
                                arg5 = __vandps_ymmqq_ymmqq_memqq(arg5, data_143442360)
                                zmm1 = _mm256_or_ps(arg5, 
                                    __vandps_ymmqq_ymmqq_memqq(zmm1, data_143442380))
                                arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm2[0].o = data_1434423a0
                                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                                zmm1 = _mm256_or_ps(zmm1, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                                arg5 = _mm256_mul_ps(zmm5, zmm5)
                                zmm2 = data_142fc95a0
                                arg5 = _mm256_sub_ps(zmm2, arg5)
                                zmm4 = _mm256_mul_ps(zmm0, zmm0)
                                arg5 = _mm256_sub_ps(arg5, zmm4)
                                var_4e0 = _mm256_maskstore_ps(arg13, zmm5)
                                var_4c0 = _mm256_maskstore_ps(arg13, zmm0)
                                zmm0 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm1, zmm1))
                                var_4a0 = _mm256_maskstore_ps(arg13, zmm1)
                                arg11[0].o = zx.o(0)
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm1 = _mm256_cmp_ps(zmm1, zmm0, 1)
                                zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
                                zmm1[0].o = var_b20
                                var_480 = _mm256_maskstore_ps(arg13, zmm0)
                                arg6 = var_ca0
                            
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_143442ac0)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm0[0].o = arg9[0].o ^ zmm1[0].o
                            zmm0[0].o &= arg15[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                                arg12 = data_142fc95a0
                            else
                                zmm1[0].o = data_142fc95e0
                                zmm2[0].o = zmm1[0].o
                                arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_860)
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
                                zmm2[0].o &= zmm0[0].o
                                arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                                arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                bool cond:63_1 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0
                                arg12 = data_142fc95a0
                                
                                if (not(cond:63_1))
                                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                    arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                    zmm2 = _mm256_insertf128_ps(arg5, zmm2[0].o, 1)
                                    zmm1 = var_c40_2
                                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
                                    zmm1 = var_ba0
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm5[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, var_a60_2[0].o)
                                    arg6[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_b80[0].o)
                                    arg9 = var_c00_1.32
                                    arg7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm1[0].o = data_1434426c0
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                                    arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                                    arg7 = var_c60.32
                                    zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
                                    zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                    zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                    arg6[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                    zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                                    arg10[0].o = zx.o(0)
                                    zmm4 = _mm256_blendv_ps(arg10, zmm4, zmm5)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                    zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                                    arg5 = _mm256_blendv_ps(arg10, arg5, zmm5)
                                    int64_t r8_12 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    double rcx_46 = zmm4[0]
                                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    int64_t rdx_33 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    double rbx_21 = zmm4[0]
                                    int64_t rdi_26 = arg5[0].q
                                    int64_t rsi_20 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                                    int64_t rax_331 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm4[0].o = zx.o(*(r15 i+ rcx_46))
                                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(r15 + r8_12), 1)
                                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(r15 i+ rbx_21), 2)
                                    int64_t rcx_47 = arg5[0].q
                                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(r15 + rdx_33), 3)
                                    zmm4[0].o = zx.o(*(r15 + rdi_26))
                                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(r15 + rsi_20), 1)
                                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(r15 + rcx_47), 2)
                                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                        *(r15 + rax_331), 3)
                                    arg9 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
                                    arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                                    arg7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                                    zmm1[0].o = data_143442440
                                    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                    arg6 =
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, arg7[0].o, 1))
                                    arg7 = data_143442460
                                    arg6 = _mm256_div_ps(arg6, arg7)
                                    zmm5[0].o = data_143442480
                                    zmm4[0].o &= zmm5[0].o
                                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                    arg5[0].o &= zmm5[0].o
                                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                    arg5 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm4[0].o, 
                                            1)), 
                                        arg7)
                                    zmm4 = __vandps_ymmqq_ymmqq_memqq(arg9, data_143442420)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    zmm1[0].o = data_143442490
                                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                    zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                    zmm5 = _mm256_sub_ps(
                                        _mm256_sub_ps(arg12, _mm256_mul_ps(arg6, arg6)), 
                                        _mm256_mul_ps(arg5, arg5))
                                    var_4e0 = _mm256_maskstore_ps(zmm2, arg6)
                                    arg6 = var_ca0
                                    zmm4 = __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm4), 
                                        data_1434424a0)
                                    var_4c0 = _mm256_maskstore_ps(zmm2, arg5)
                                    arg5 = _mm256_sub_ps(zmm5, _mm256_mul_ps(zmm4, zmm4))
                                    var_4a0 = _mm256_maskstore_ps(zmm2, zmm4)
                                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                    arg5 = _mm256_and_ps(_mm256_cmp_ps(arg10, arg5, 1), 
                                        _mm256_sqrt_ps(arg5))
                                    var_480 = _mm256_maskstore_ps(zmm2, arg5)
                                
                                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                zmm1[0].o = arg8[0].o ^ arg5[0].o
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_142fc95e0)
                                zmm2[0].o ^= arg5[0].o
                                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                zmm1[0].o &= zmm0[0].o
                                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                                    zmm2[0].o = data_143442ad0
                                    arg5[0].o = zmm2[0].o
                                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, var_860)
                                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                                    zmm0[0].o &= arg5[0].o
                                    arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                        arg5[0].o = __vpsrad_xmmdq_xmmdq_immb(arg5[0].o, 0x1f)
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                                        arg5[0].o = zx.o(0)
                                        var_4e0 = _mm256_maskstore_ps(zmm0, arg5)
                                        var_4c0 = _mm256_maskstore_ps(zmm0, arg5)
                                        arg11[0].o =
                                            __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                        var_4a0 = _mm256_maskstore_ps(zmm0, arg5)
                                        var_480 = _mm256_maskstore_ps(zmm0, arg12)
                                    
                                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                    zmm0[0].o = zmm2[0].o ^ arg5[0].o
                                    zmm2[0].o =
                                        __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, data_143442ad0)
                                    zmm2[0].o ^= arg5[0].o
                                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                    zmm0[0].o &= zmm1[0].o
                                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                        zmm1[0].o = zx.o(0)
                                        var_4e0 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_4c0 = _mm256_maskstore_ps(zmm0, zmm1)
                                        arg11[0].o =
                                            __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                        var_4a0 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_480 = _mm256_maskstore_ps(zmm0, arg12)
                
                zmm0 = var_600.32
                zmm1 = var_5e0.32
                zmm2 = var_5c0.32
                arg5 = var_5a0.32
                arg8 = _mm256_cmp_ps(arg11, 
                    _mm256_add_ps(
                        _mm256_add_ps(
                            _mm256_add_ps(_mm256_mul_ps(zmm0, var_4e0), 
                                _mm256_mul_ps(zmm1, var_4c0)), 
                            _mm256_mul_ps(zmm2, var_4a0)), 
                        _mm256_mul_ps(arg5, var_480)), 
                    2)
                arg10 = var_c20_1
                zmm4 = _mm256_mul_ps(arg10, var_4e0)
                zmm5 = _mm256_mul_ps(arg10, var_4c0)
                arg6 = _mm256_mul_ps(arg10, var_4a0)
                arg7 = _mm256_mul_ps(arg10, var_480)
                arg8 = _mm256_blendv_ps(data_143442520, arg12, arg8)
                arg8 = _mm256_mul_ps(_mm256_sub_ps(arg12, arg10), arg8)
                zmm0 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg8, zmm0))
                zmm1 = _mm256_add_ps(zmm5, _mm256_mul_ps(arg8, zmm1))
                zmm2 = _mm256_mul_ps(arg8, zmm2)
                var_600.32 = _mm256_maskstore_ps(var_d40, zmm0)
                zmm0 = _mm256_add_ps(arg6, zmm2)
                var_5e0.32 = _mm256_maskstore_ps(var_d40, zmm1)
                zmm1 = _mm256_mul_ps(arg8, arg5)
                var_5c0.32 = _mm256_maskstore_ps(var_d40, zmm0)
                var_5a0.32 = _mm256_maskstore_ps(var_d40, _mm256_add_ps(arg7, zmm1))
            
            zmm0 = var_600.32
            zmm1 = var_5e0.32
            zmm2 = var_5c0.32
            arg5 = var_5a0.32
            zmm4 = _mm256_mul_ps(zmm0, zmm0)
            zmm5 = _mm256_mul_ps(zmm1, zmm1)
            zmm4 = _mm256_add_ps(_mm256_add_ps(zmm4, _mm256_mul_ps(zmm2, zmm2)), 
                _mm256_add_ps(zmm5, _mm256_mul_ps(arg5, arg5)))
            zmm5 = data_142fc9340
            arg6 = zmm5
            zmm5 = _mm256_cmp_ps(zmm5, zmm4, 6)
            arg6 = _mm256_cmp_ps(arg6, zmm4, 2)
            arg7 = data_142fc94a0
            arg9 = arg7
            arg7 = _mm256_mul_ps(zmm4, arg7)
            zmm4 = _mm256_rsqrt_ps(zmm4)
            zmm4 = _mm256_add_ps(zmm4, 
                _mm256_mul_ps(_mm256_sub_ps(arg9, _mm256_mul_ps(arg7, _mm256_mul_ps(zmm4, zmm4))), 
                    zmm4))
            arg8 = _mm256_mul_ps(zmm4, zmm4)
            zmm4 = _mm256_add_ps(zmm4, 
                _mm256_mul_ps(_mm256_sub_ps(arg9, _mm256_mul_ps(arg7, arg8)), zmm4))
            zmm0 = _mm256_mul_ps(zmm4, zmm0)
            zmm1 = _mm256_mul_ps(zmm4, zmm1)
            zmm2 = _mm256_mul_ps(zmm4, zmm2)
            arg5 = _mm256_mul_ps(zmm4, arg5)
            zmm0 = _mm256_and_ps(zmm0, arg6)
            zmm1 = _mm256_and_ps(zmm1, arg6)
            zmm2 = _mm256_and_ps(zmm2, arg6)
            arg7 = var_980
            var_600.32 = _mm256_maskstore_ps(arg7, zmm0)
            zmm0 = _mm256_and_ps(arg5, arg6)
            var_5e0.32 = _mm256_maskstore_ps(arg7, zmm1)
            zmm1 = _mm256_and_ps(zmm5, arg12)
            var_5c0.32 = _mm256_maskstore_ps(arg7, zmm2)
            zmm0 = _mm256_or_ps(zmm0, zmm1)
            var_5a0.32 = _mm256_maskstore_ps(arg7, zmm0)
            zmm5[0].o = var_a20
            arg6[0].o = var_ac0
            zmm4 = var_8a0
        
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg6[0].o, 0x88)
        zmm1 = _mm256_xor_ps(arg7, _mm256_cmp_ps(arg11, arg11, 0xf))
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            var_600.32 = _mm256_maskstore_ps(zmm1, zmm2)
            var_5e0.32 = _mm256_maskstore_ps(zmm1, zmm2)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            var_5c0.32 = _mm256_maskstore_ps(zmm1, zmm2)
            var_5a0.32 = _mm256_maskstore_ps(zmm1, arg12)
        
        zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
        zmm1[0].o = var_600
        int128_t var_5f0
        arg8[0].o = var_5f0
        arg5[0].o = var_5e0
        int128_t var_5d0
        arg9[0].o = var_5d0
        zmm5[0].o = var_5c0
        int128_t var_5b0
        arg6[0].o = var_5b0
        arg7[0].o = var_5a0
        int128_t var_590
        zmm2[0].o = var_590
        zmm4[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        zmm5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        arg7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        arg5[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
        int128_t var_220 = arg5[0].o
        arg5[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
        int128_t var_210_1 = arg5[0].o
        arg5[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        int128_t var_200_1 = arg5[0].o
        zmm1[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        int128_t var_1f0_1 = zmm1[0].o
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
        arg5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        zmm4[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        zmm5[0].o = arg5[0].q | zmm1[0].q << 0x40
        int128_t var_1e0_1 = zmm5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
        int128_t var_1d0_1 = zmm1[0].o
        zmm1[0].o = zmm4[0] | zmm2[0].q << 0x40
        int128_t var_1c0_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
        int128_t var_1b0_1 = zmm1[0].o
        uint64_t rcx_48
        
        for (uint64_t j_4 = 0xff; j_4 != 0; j_4 &= rol.q(-2, rcx_48.b))
            uint64_t rflags_1
            
            if (j_4 == 0)
                rcx_48 = 0x40
            else
                rcx_48, rflags_1 = _bit_scan_forward(j_4)
            double var_120[0x4] = zmm0
            zmm1[0].o = (&var_220)[rcx_48]
            r9[sx.q(*(&var_120 + ((zx.q(rcx_48.d) & 7) << 2))) * 3] = zmm1[0].o
        
        r14 = zx.q(r14.d + 8)
    while (r14.d s< i_5)
    
    i_4 = zx.q(arg19)
    
    if (r14.d s< i_4.d)
        goto label_1401b2739
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
