// 函数: sub_1401be240
// 地址: 0x1401be240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    float zmm4[0x8]
    zmm4[0].o = arg19
    int32_t zmm5[0x8]
    zmm5[0].o = arg24
    double zmm2[0x4] = arg23
    int32_t zmm3[0x8] = arg20
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    
    while (true)
        double zmm10[0x4] = arg9
        float zmm0[0x8]
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x88)
        int32_t zmm1[0x8] = _mm256_xor_ps(zmm3, _mm256_cmp_ps(arg12, arg12, 0xf))
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg39.32 = _mm256_maskstore_ps(zmm1, arg12)
            *arg7 = _mm256_maskstore_ps(zmm1, arg12)
            *(arg7 + 0x20) = _mm256_maskstore_ps(zmm1, arg12)
        
        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
        zmm1[0].o = arg39
        zmm2[0].o = arg40
        int128_t arg_720
        zmm3[0].o = arg_720
        zmm4[0].o = arg41
        zmm5[0].o = arg42
        double zmm6[0x4]
        zmm6[0].o = arg43
        arg9[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
        int32_t zmm8[0x8]
        zmm8[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
        int32_t zmm7[0x8]
        zmm7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm5[0].o, 0x28)
        int128_t arg_b80 = zmm3[0].o
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg9[0].o)
        arg11[0].o = zx.o(0)
        int128_t arg_b90 = zmm3[0].o
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xa8)
        int128_t arg_ba0 = zmm3[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm8[0].o)
        int128_t arg_bb0 = zmm1[0].o
        zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg11[0].o)
        zmm3[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg11[0].o)
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm6[0].o, 0x28)
        int128_t arg_bc0 = zmm4[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
        int128_t arg_bd0 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm6[0].o, 0xa8)
        int128_t arg_be0 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        int128_t arg_bf0 = zmm1[0].o
        uint64_t i = 0xff
        arg9 = zmm10
        zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
        
        do
            uint64_t rcx_9
            uint64_t rflags_1
            
            if (i == 0)
                rcx_9 = 0x40
            else
                rcx_9, rflags_1 = _bit_scan_forward(i)
            float arg_c80[0x8] = zmm0
            zmm1[0].o = (&arg_b80)[rcx_9]
            *(arg6 + sx.q(arg_c80[zx.q(rcx_9.d) & 7]) * 0x30 + 0x10) = zmm1[0].o
            i &= rol.q(-2, rcx_9.b)
        while (i != 0)
        
        arg4 = zx.q(arg4.d + 8)
        double arg_20[0x4]
        int32_t arg_40[0x8]
        float arg_60[0x8]
        double arg_80[0x2]
        int32_t arg_a0[0x8]
        float arg_c0[0x8]
        double arg_e0[0x4]
        int32_t arg_100[0x8]
        float arg_120[0x8]
        double arg_140[0x4]
        float arg_180[0x8]
        float arg_1a0[0x8]
        uint64_t arg_1c0
        int128_t arg_1e0
        uint32_t arg_220[0x4]
        int32_t arg_240[0x4]
        float arg_260[0x8]
        double arg_2c0[0x2]
        int64_t arg_2e0[0x2]
        int32_t arg_300[0x8]
        int64_t arg_320[0x2]
        float arg_340[0x8]
        float arg_380[0x8]
        float arg_480[0x4]
        int32_t arg_4c0[0x8]
        int32_t arg_540[0x8]
        int32_t arg_560[0x8]
        int32_t arg_580[0x8]
        int32_t arg_5a0[0x8]
        int32_t arg_5c0[0x8]
        int32_t arg_5e0[0x8]
        double arg_6e0[0x4]
        double zmm14[0x4]
        float zmm15[0x8]
        
        if (arg4.d s>= arg27)
            uint64_t i_5 = zx.q(*(arg5 + 0xd60))
            
            if (arg4.d s< i_5.d)
                zmm0[0].o = zx.o(arg4.d)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                zmm10[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
                arg10[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
                zmm2[0].o = zx.o(i_5.d)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                zmm8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                arg9[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm10[0].o)
                zmm5 = _mm256_insertf128_ps(arg9, zmm8[0].o, 1)
                zmm6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm10[0].o, 3)
                zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(arg10[0].o, 3)
                zmm6 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(zmm6, zmm7[0].o, 1))
                int64_t r9 = sx.q(zmm6[0].d)
                int64_t r15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm6[0].o, 1))
                int64_t r12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm6[0].o, 2))
                int64_t r13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm6[0].o, 3))
                zmm6[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                zmm7 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_142fc9520)
                zmm3[0].o = zx.o(*(zx.q(zmm7[0]) + arg30 + r9))
                int64_t rdx_12 = sx.q(zmm6[0].d)
                uint64_t rsi_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 1))
                zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_6 + arg30 + r15), 1)
                uint64_t rsi_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 2))
                zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_7 + arg30 + r12), 2)
                int64_t rax_94 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm6[0].o, 1))
                uint32_t* rcx_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 3))
                zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_12 + arg30 + r13), 3)
                zmm7[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                zmm4[0].o = zx.o(*(zx.q(zmm7[0]) + arg30 + rdx_12))
                int32_t temp0_707 = __vpextrd_gpr32d_xmmdq_immb(zmm6[0].o, 2)
                uint32_t* rsi_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 1))
                int64_t rbx_6 = sx.q(temp0_707)
                zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_9 + arg30 + rax_94), 1)
                uint32_t* rsi_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 2))
                zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_10 + arg30 + rbx_6), 2)
                zmm0[0].o = zx.o(*(arg30 + rdx_12))
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg30 + rax_94), 1)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg30 + rbx_6), 2)
                zmm1[0].o = zx.o(*(arg30 + r9))
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg30 + r15), 1)
                int32_t* r15_1 = arg13
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg30 + r12), 2)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg30 + r13), 3)
                arg_300 = zmm1
                int64_t rax_96 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm6[0].o, 3))
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg30 + rax_96), 3)
                arg44 = zmm0[0].o
                uint32_t* rcx_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 3))
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 3)
                zmm1[0].o =
                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_15 + arg30 + rax_96), 3)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
                zmm0 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                float rax_98 = zmm0[0]
                int32_t temp0_725 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                zmm1[0].o = zx.o(*(arg31 + sx.q(rax_98)))
                int64_t rax_101 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                zmm1[0].o =
                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg31 + sx.q(temp0_725)), 1)
                int64_t rcx_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg31 + rax_101), 2)
                int64_t rax_103 = sx.q(zmm0[0])
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg31 + rcx_19), 3)
                int32_t temp0_732 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                zmm3[0].o = zx.o(*(arg31 + rax_103))
                zmm3[0].o =
                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg31 + sx.q(temp0_732)), 1)
                int64_t rax_106 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg31 + rax_106), 2)
                int64_t rax_108 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg31 + rax_108), 3)
                zmm3 = _mm256_insertf128_ps(zmm10, arg10[0].o, 1)
                arg21 = zmm3
                zmm14 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
                zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                zmm0[0].o &= not.o(zmm8[0].o)
                zmm1[0].o &= not.o(arg9[0].o)
                arg10[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg_e0 = zmm14
                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg9[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm15[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm14[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = 4
                    zmm1[0].o = zx.o(r15_1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x44)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg10[0])
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    arg20 = zmm3
                    zmm4 = _mm256_insertf128_ps(zmm3, zmm8[0].o, 1)
                    arg_6e0 = zmm2
                    zmm0 = _mm256_and_ps(zmm4, zmm2)
                    int64_t r8_3 = sx.q(zmm0[0])
                    int32_t temp0_764 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                    int64_t r9_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rbx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rdi_8 = sx.q(zmm0[0])
                    int32_t temp0_768 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                    int32_t temp0_769 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    int32_t temp0_770 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                    zmm0[0].o = zx.o(*(r15_1 + r8_3))
                    zmm0[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + sx.q(temp0_764)), 1)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + r9_1), 2)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rbx_8), 3)
                    zmm2[0].o = zx.o(*(r15_1 + rdi_8))
                    zmm2[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + sx.q(temp0_768)), 1)
                    zmm2[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + sx.q(temp0_769)), 2)
                    zmm3[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r15_1 + sx.q(temp0_770)), 3)
                    arg11 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x18)
                    zmm6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x18)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1c)
                    zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1c)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
                    zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                    zmm7 = _mm256_and_ps(zmm4, zmm0)
                    uint64_t r14_2 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm7[0].o, 1))
                    uint64_t r10_3 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm7[0].o, 2))
                    zmm5 = _mm256_insertf128_ps(zmm5, zmm6[0].o, 1)
                    uint64_t r11_2 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm7[0].o, 3))
                    zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                    uint64_t rsi_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    uint64_t rcx_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    uint64_t r8_4 = zx.q(zmm7[0])
                    arg_2c0.32 = zmm5
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_1434429e0)
                    zmm6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 3)
                    zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 3)
                    zmm6 = _mm256_insertf128_ps(zmm6, zmm7[0].o, 1)
                    zmm5 = _mm256_or_ps(zmm5, zmm6)
                    zmm4 = _mm256_and_ps(zmm4, zmm5)
                    uint64_t rax_114 = zx.q(zmm4[0])
                    uint64_t rbx_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                    zmm5[0].o = zx.o(*(rax_114 + &data_143442ba0))
                    uint64_t rax_116 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                    zmm5[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_9 + &data_143442ba0), 1)
                    uint64_t rbx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm5[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_116 + &data_143442ba0), 2)
                    uint64_t rax_117 = zx.q(zmm4[0])
                    zmm5[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_10 + &data_143442ba0), 3)
                    uint64_t rbx_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                    zmm5[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_117 + &data_143442ba0), 4)
                    uint64_t rax_118 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                    zmm5[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_11 + &data_143442ba0), 5)
                    uint64_t rbx_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                    zmm4[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_118 + &data_143442ba0), 6)
                    zmm4[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(zmm4[0].o, *(rbx_12 + &data_143442ba0), 7)
                    uint64_t rbx_13 = zx.q(zmm0[0])
                    uint64_t rdx_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = __vpmovzxbd_xmmdq_xmmd(zmm4[0])
                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0xe5)
                    zmm4[0].o = __vpmovzxbd_xmmdq_xmmd(zmm4[0])
                    zmm7 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                    zmm4[0].o = data_142fc95c0
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                    zmm0[0].o ^= zmm6[0].o
                    zmm4[0].o ^= zmm6[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm0[0].o &= arg10[0].o
                    zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                    zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    char temp0_826 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o)
                    arg_220.32 = arg9
                    zmm10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                    arg_120 = zmm14
                    arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm14[0].o)
                    zmm4[0].o = zx.o(0)
                    arg_2e0.32 = zmm4
                    zmm4[0].o = zx.o(0)
                    
                    if (temp0_826 != 0)
                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                        zmm4 = _mm256_and_ps(zmm0, zmm7)
                    
                    arg_1e0 = zmm15[0].o
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm15[0].o)
                    zmm6 = __vandps_ymmqq_ymmqq_memqq(arg11, data_143442840)
                    arg_20 = zmm6
                    arg23[0].o = arg12[0].o
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm5[0].o &= arg10[0].o
                    zmm6[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    zmm6[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm6[0].o, 0xf)
                    zmm6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
                    bool cond:1_1 = __vpmovmskb_gpr32d_xmmdq(zmm6[0].o) == 0
                    int32_t rdi_10 = *(arg5 + 0xd40)
                    arg14 = arg11
                    
                    if (cond:1_1)
                        zmm5[0].o = zx.o(0)
                    else
                        zmm6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                        zmm6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm6[0].o, 0x1f)
                        zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        zmm6 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                        zmm5[0].o = zx.o(0)
                        zmm5 = _mm256_blendv_ps(zmm5, zmm7, zmm6)
                        zmm4 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm4, data_143442a00, zmm6)
                    
                    zmm14 = arg_e0
                    arg12 = arg_20
                    zmm6 = arg20
                    zmm10 = _mm256_insertf128_ps(zmm10, zmm0[0].o, 1)
                    zmm0 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                    arg_60 = zmm0
                    arg9 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm1[0].o = zx.o(*(rbx_13 + &data_143442b80))
                    zmm1[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_13 + &data_143442b80), 1)
                    zmm1[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_23 + &data_143442b80), 2)
                    zmm1[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_16 + &data_143442b80), 3)
                    zmm1[0].o &= zmm8[0].o
                    zmm2[0].o = zx.o(*(r8_4 + &data_143442b80))
                    zmm2[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14_2 + &data_143442b80), 1)
                    zmm2[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_3 + &data_143442b80), 2)
                    zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm1[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + &data_143442b80), 3)
                    zmm1[0].o &= zmm6[0].o
                    zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    arg_260 = zmm0
                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm1[0].o = data_142fc95e0
                    zmm2[0].o = zmm8[0].o & zmm1[0].o
                    zmm0[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm1[0].o &= zmm6[0].o
                    zmm1[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    zmm15 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    arg11[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm1[0].o = data_142d3f5b0
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm0[0].o &= arg10[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    bool cond:4_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                    arg_80.32 = arg9
                    arg17 = zmm10
                    arg_40[0].o = arg10[0].o
                    
                    if (cond:4_1)
                        zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
                        zmm0[0].o = zx.o(0)
                        arg_140 = zmm0
                        zmm7 = arg_220.32
                        zmm8[0].o = arg_1e0
                        arg12 = arg_120
                        zmm3[0].o = arg23[0].o
                    else
                        arg_180 = zmm15
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(arg14, data_143442ae0)
                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o &= zmm0[0].o
                        zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                        zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o) == 0
                        arg_c0[0].o = arg11[0].o
                        
                        if (cond:3_1)
                            zmm2[0].o = zx.o(0)
                            arg_140 = zmm2
                            zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
                            zmm2[0].o = zx.o(0)
                            arg_1c0.32 = zmm2
                            zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                            zmm2[0].o = zx.o(0)
                        else
                            zmm5[0].o = zx.o(0)
                            zmm6[0].o = zx.o(0)
                            zmm2[0].o = *(arg5 + 0xd50)
                            
                            if (zx.o(0) f>= zmm2[0].d)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                arg_140 = zmm2
                                zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                arg_1c0.32 = zmm2
                                zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                            else
                                zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                                zmm7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm6[0].o)
                                zmm6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm6[0].o)
                                zmm6 = _mm256_insertf128_ps(zmm6, zmm7[0].o, 1)
                                
                                if (zmm2[0].o f>= 1f)
                                    zmm7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                                    zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    zmm8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    zmm7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                    zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    zmm7 = _mm256_and_ps(_mm256_insertf128_ps(zmm8, zmm7[0].o, 1), 
                                        zmm6)
                                    zmm10 = zmm7
                                    arg_1c0.32 = zmm7
                                    arg_140 = zmm7
                                else
                                    zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0)
                                    zmm5 = _mm256_insertf128_ps(zmm5, zmm5[0].o, 1)
                                    zmm7 = _mm256_cvtepi32_ps(zmm6)
                                    arg9 = _mm256_mul_ps(zmm5, zmm7)
                                    zmm10 = _mm256_round_ps(arg9, 9)
                                    zmm5 = _mm256_cvttps_epi32(zmm10)
                                    zmm8[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    arg10[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                    zmm14[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                                    zmm5 = _mm256_insertf128_ps(zmm8, zmm14[0].o, 1)
                                    zmm7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                                    zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    arg12[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    zmm7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                    zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    arg11 = _mm256_insertf128_ps(arg12, zmm7[0].o, 1)
                                    arg_140 = _mm256_and_ps(arg11, zmm5)
                                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                    
                                    if (*(arg5 + 0xd58) != 1)
                                        zmm5 = _mm256_sub_ps(arg9, zmm10)
                                    
                                    zmm7[0].o &= zmm14[0].o
                                    arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                    zmm10[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg9[0].o)
                                    zmm7[0].o = arg12[0].o & zmm8[0].o
                                    zmm7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg9[0].o)
                                    zmm6[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                                    zmm7[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm10[0].o, arg10[0].o)
                                    zmm6 = _mm256_insertf128_ps(zmm6, zmm7[0].o, 1)
                                    zmm7 = _mm256_and_ps(arg11, zmm6)
                                    zmm10 = arg_140
                                    arg_1c0.32 = zmm7
                                    zmm14 = arg_e0
                                    arg9 = arg_80.32
                                    arg10[0].o = arg_40[0].o
                                    arg12 = arg_20
                                    arg11[0].o = arg_c0[0].o
                            
                            zmm6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                            zmm6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm6[0].o, 0x1f)
                            zmm6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm6[0].o, 0x1f)
                            zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                            zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                            zmm4 = _mm256_insertf128_ps(zmm6, zmm4[0].o, 1)
                            zmm2 = _mm256_and_ps(zmm4, zmm5)
                        
                        arg_2e0.32 = zmm2
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        zmm3[0].o ^= zmm4[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o ^= zmm4[0].o
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                        zmm6[0].o = zmm0[0].o & zmm1[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm6[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                            arg_140 = zmm7
                            zmm7 = arg_220.32
                            zmm8[0].o = arg_1e0
                            arg12 = arg_120
                            zmm3[0].o = arg23[0].o
                            zmm15 = arg_180
                        else
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm6[0])
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm0[0].o = data_142d3f5b0
                            zmm2[0].o = zmm0[0].o
                            zmm0[0].o = __vpminud_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                            zmm2[0].o = __vpminud_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm2[0].o = zx.o(0)
                            zmm3[0].o = *(arg5 + 0xd50)
                            int32_t rax_123
                            rax_123.b = zx.o(0) f>= zmm3[0]
                            zmm2[0].o = zx.o(neg.d(rax_123))
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
                            zmm3 = _mm256_or_ps(zmm0, zmm2)
                            zmm0 = _mm256_and_ps(zmm3, zmm1)
                            zmm15 = arg_180
                            
                            if (_mm256_movemask_ps(zmm0) != 0)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm10 = _mm256_blendv_ps(arg_140, zmm2, zmm0)
                                zmm7 = _mm256_blendv_ps(arg_1c0.32, zmm2, zmm0)
                                arg_140 = zmm10
                                arg_1c0.32 = zmm7
                            
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg12 = _mm256_andnot_ps(zmm3, zmm1)
                            int32_t temp0_969 = _mm256_movemask_ps(arg12)
                            
                            if (temp0_969 == 0)
                                arg_140 = zmm7
                            label_1401c1409:
                                arg9 = arg_80.32
                                zmm7 = arg_220.32
                                zmm8[0].o = arg_1e0
                                arg12 = arg_120
                            else
                                zmm7 = arg_20
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                arg9[0].o = *(arg5 + 0xd50)
                                
                                if (arg9[0].o f>= 1f)
                                    zmm10 = _mm256_blendv_ps(arg_140, zmm2, arg12)
                                    zmm1 = _mm256_blendv_ps(arg_1c0.32, zmm2, arg12)
                                    arg_140 = zmm1
                                    goto label_1401c1409
                                
                                arg19.32 = zmm3
                                arg22 = zmm5
                                arg24 = zmm6[0].o
                                zmm1[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                                zmm14 = zmm2
                                zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                zmm3[0].o = __vpmovzxdq_xmmdq_xmmq(zmm15[0].q)
                                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm15[0].o, 0x4e)
                                zmm6 = arg_260
                                zmm5[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm4[0].o = __vpmovzxdq_xmmdq_xmmq(zmm4[0].q)
                                zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                                zmm6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm7[0].o)
                                arg10 = arg_60
                                zmm7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                                zmm7[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm1[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm2[0].o)
                                zmm7[0].o = data_143442a20
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm6[0])
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0x4e)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm7[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                                zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                zmm2 = data_143442a40
                                zmm1 = _mm256_and_ps(zmm1, zmm2)
                                arg15 = zmm1
                                zmm6 = _mm256_and_ps(zmm3, zmm2)
                                zmm1[0].o = _mm_permute_ps(arg9[0].o, 0)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                                arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                zmm2[0].o = arg11[0].o
                                zmm2[0].d = float.s(rdi_10 - 1)
                                zmm3 = _mm256_cvtepi32_ps(zmm14)
                                zmm1 = _mm256_mul_ps(zmm1, zmm3)
                                zmm8[0].o = zmm2[0].o f* arg9[0].d
                                zmm1 = _mm256_cvttps_epi32(zmm1)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm3[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm2[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                arg_320.32 = zmm14
                                zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm14[0].o)
                                zmm7 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                zmm4 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                                int32_t rdx_17 = int.d(zmm8[0])
                                int32_t rbx_14 = 0
                                
                                if (rdx_17 s>= 0)
                                    rbx_14 = rdx_17
                                
                                if (rdi_10 - 2 s<= rbx_14)
                                    rbx_14 = rdi_10 - 2
                                
                                arg_240.32 = zmm7
                                arg_480 = zmm8[0].o
                                arg_340 = zmm4
                                arg18 = zmm6
                                
                                if (rdi_10 s< 0x100)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x4e)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                    arg_a0[0].o = zmm2[0].o
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
                                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    char rdx_19 = temp0_969.b
                                    
                                    if ((rdx_19 & 1) != 0)
                                        zmm0[0].o = zx.o(*zmm1[0].q)
                                    
                                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                    arg10[0].o = arg_40[0].o
                                    
                                    if ((rdx_19 & 2) != 0)
                                        uint32_t rax_154 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_154, 1)
                                    
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm6 = arg15
                                    arg_100[0].o = __vextractf128_memdq_ymmdq_immb(zmm6[0].o, 1)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm2[0].o)
                                    
                                    if ((rdx_19 & 4) == 0)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_100[0].o)
                                        
                                        if ((rdx_19 & 8) != 0)
                                            goto label_1401c1b7b
                                        
                                        goto label_1401c14d2
                                    
                                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm4[0].q), 2)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_100[0].o)
                                    
                                    if ((rdx_19 & 8) != 0)
                                    label_1401c1b7b:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        uint32_t rax_200 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_200, 3)
                                        zmm1 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                                        
                                        if ((rdx_19 & 0x10) == 0)
                                            goto label_1401c14e1
                                        
                                        goto label_1401c1ba6
                                    
                                label_1401c14d2:
                                    zmm1 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                                    
                                    if ((rdx_19 & 0x10) != 0)
                                    label_1401c1ba6:
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                            zx.d(*zmm1[0].q), 4)
                                        
                                        if ((rdx_19 & 0x20) != 0)
                                        label_1401c1bba:
                                            uint32_t rax_204 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, rax_204, 5)
                                            
                                            if ((rdx_19 & 0x40) == 0)
                                                goto label_1401c14f5
                                            
                                            goto label_1401c1bcb
                                    else
                                    label_1401c14e1:
                                        
                                        if ((rdx_19 & 0x20) != 0)
                                            goto label_1401c1bba
                                    
                                    if ((rdx_19 & 0x40) != 0)
                                    label_1401c1bcb:
                                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                            zx.d(*zmm2[0]), 6)
                                        arg_1a0[0].o = zmm5[0].o
                                        
                                        if (temp0_969.b s< 0)
                                        label_1401c1bef:
                                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            uint32_t rax_208 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, rax_208, 7)
                                    else
                                    label_1401c14f5:
                                        arg_1a0[0].o = zmm5[0].o
                                        
                                        if (temp0_969.b s< 0)
                                            goto label_1401c1bef
                                    
                                    zmm0[0].o &= data_142fc92e0
                                    zmm1[0].o = zx.o(0)
                                    zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                    zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                    zmm0[0].o = zx.o(rbx_14)
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                                    zmm14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                    zmm1[0].o ^= zmm2[0].o
                                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                    zmm0[0].o ^= zmm2[0].o
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    arg_4c0 = zmm0
                                    int32_t temp0_1215 =
                                        _mm256_movemask_ps(_mm256_and_ps(arg12, zmm0))
                                    zmm0 = zmm7
                                    
                                    if (temp0_1215 != 0)
                                        zmm0 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                        arg9[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                                        zmm1[0].o ^= zmm2[0].o
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm14[0].o)
                                        zmm0[0].o ^= zmm2[0].o
                                        zmm3 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                        zmm8 = arg_240.32
                                        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm8, 
                                            arg_320.32, zmm3)
                                        zmm1[0].o = arg_1a0[0].o
                                        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                        zmm4[0].o = arg_c0[0].o
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                        zmm5 = arg_20
                                        zmm5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                        zmm6 = _mm256_and_ps(zmm4, zmm3)
                                        arg11 = _mm256_and_ps(arg12, zmm6)
                                        int32_t i_1 = _mm256_movemask_ps(arg11)
                                        
                                        if (i_1 != 0)
                                            zmm3 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                            arg17[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                                            
                                            do
                                                zmm5 = zmm3
                                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                                zmm3[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                                zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, 
                                                    arg_a0[0].o)
                                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, 
                                                    arg18[0].o)
                                                zmm3 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                                                char temp0_1255 = _mm256_movemask_ps(arg11)
                                                
                                                if ((temp0_1255 & 1) != 0)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, zx.d(*zmm3[0].q), 0)
                                                
                                                arg11[0].o = arg_c0[0].o
                                                zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                                zmm1[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                                
                                                if ((temp0_1255 & 2) == 0)
                                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                                    arg10[0].o = __vpaddq_xmmdq_xmmdq_memdq(
                                                        zmm7[0].o, arg15[0].o)
                                                    
                                                    if ((temp0_1255 & 4) != 0)
                                                        goto label_1401c1616
                                                    
                                                    goto label_1401c174e
                                                
                                                uint32_t rax_157 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_157, 1)
                                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                                arg10[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, 
                                                    arg15[0].o)
                                                
                                                if ((temp0_1255 & 4) != 0)
                                                label_1401c1616:
                                                    zmm7[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, zx.d(*zmm7[0].q), 2)
                                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(
                                                        zmm1[0].o, arg_100[0].o)
                                                    
                                                    if ((temp0_1255 & 8) == 0)
                                                        goto label_1401c1761
                                                    
                                                    goto label_1401c163c
                                                
                                            label_1401c174e:
                                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, 
                                                    arg_100[0].o)
                                                
                                                if ((temp0_1255 & 8) == 0)
                                                label_1401c1761:
                                                    zmm3 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                                                    
                                                    if ((temp0_1255 & 0x10) != 0)
                                                        goto label_1401c1668
                                                    
                                                    goto label_1401c1771
                                                
                                            label_1401c163c:
                                                zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                uint32_t rax_161 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_161, 3)
                                                zmm3 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                                                
                                                if ((temp0_1255 & 0x10) != 0)
                                                label_1401c1668:
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, zx.d(*zmm3[0].q), 4)
                                                    
                                                    if ((temp0_1255 & 0x20) == 0)
                                                        goto label_1401c177b
                                                    
                                                    goto label_1401c167d
                                                
                                            label_1401c1771:
                                                
                                                if ((temp0_1255 & 0x20) == 0)
                                                label_1401c177b:
                                                    
                                                    if ((temp0_1255 & 0x40) != 0)
                                                        goto label_1401c168f
                                                    
                                                    goto label_1401c1785
                                                
                                            label_1401c167d:
                                                uint32_t rax_165 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_165, 5)
                                                
                                                if ((temp0_1255 & 0x40) == 0)
                                                label_1401c1785:
                                                    
                                                    if (temp0_1255 s< 0)
                                                    label_1401c16ab:
                                                        zmm1[0].o =
                                                            _mm256_extractf128_ps(zmm3[0].o, 1)
                                                        uint32_t rax_169 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 
                                                            1))
                                                        zmm2[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm2[0].o, rax_169, 7)
                                                else
                                                label_1401c168f:
                                                    zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, zx.d(*zmm1[0].q), 6)
                                                    
                                                    if (temp0_1255 s< 0)
                                                        goto label_1401c16ab
                                                
                                                zmm1[0].o = zmm2[0].o & data_142fc92e0
                                                zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(
                                                    zmm1[0].o, data_142d8f750)
                                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, 
                                                    arg9[0].o)
                                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, 
                                                    zmm14[0].o)
                                                zmm1 = _mm256_and_ps(
                                                    _mm256_insertf128_ps(zmm1, zmm3[0].o, 1), zmm6)
                                                arg10[0].o = zx.o(0)
                                                
                                                if (_mm256_movemask_ps(_mm256_and_ps(zmm1, arg12))
                                                        != i_1)
                                                    arg10 = _mm256_xor_ps(zmm1, zmm6)
                                                
                                                zmm0 = _mm256_blendv_ps(zmm0, zmm8, zmm1)
                                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, 
                                                    arg17[0].o)
                                                zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm5[0].o, 
                                                    arg17[0].o)
                                                zmm3 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(
                                                    arg11[0].o, zmm1[0].o)
                                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(
                                                    arg_20[0].o, zmm4[0].o)
                                                zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                                zmm6 = _mm256_and_ps(zmm1, arg10)
                                                arg11 = _mm256_and_ps(zmm6, arg12)
                                                i_1 = _mm256_movemask_ps(arg11)
                                                zmm8 = zmm5
                                                arg10[0].o = arg_40[0].o
                                            while (i_1 != 0)
                                    
                                    zmm3 = arg_4c0
                                    zmm1 = _mm256_andnot_ps(zmm3, arg12)
                                    
                                    if (_mm256_movemask_ps(zmm1) == 0)
                                        zmm14 = arg_e0
                                        arg9 = arg_80.32
                                        arg11[0].o = arg_c0[0].o
                                    else
                                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                        zmm2 = _mm256_cmp_ps(zmm1, zmm1, 0xf)
                                        zmm4 = _mm256_xor_ps(zmm3, zmm2)
                                        zmm0 = _mm256_blendv_ps(zmm0, zmm1, zmm4)
                                        zmm5[0].o =
                                            __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                        zmm1[0].o =
                                            __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, arg_1a0[0].o)
                                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, arg_240)
                                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                        zmm6[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                        zmm7[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                                        zmm6 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                                        zmm10 = _mm256_and_ps(zmm6, zmm4)
                                        zmm8 = _mm256_and_ps(zmm10, arg12)
                                        int32_t i_2 = _mm256_movemask_ps(zmm8)
                                        
                                        if (i_2 == 0)
                                            arg11[0].o = arg_c0[0].o
                                        else
                                            arg9 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                            arg11[0].o = arg_c0[0].o
                                            
                                            do
                                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(arg9[0])
                                                zmm3[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(arg9[0].o, 0x4e)
                                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                                zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, 
                                                    arg_a0[0].o)
                                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, 
                                                    arg18[0].o)
                                                zmm3 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                                                char temp0_1324 = _mm256_movemask_ps(zmm8)
                                                
                                                if ((temp0_1324 & 1) == 0)
                                                    zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                                    zmm1[0].o =
                                                        __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                                    
                                                    if ((temp0_1324 & 2) != 0)
                                                        goto label_1401c18be
                                                    
                                                    goto label_1401c19e1
                                                
                                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm6[0].o, zx.d(*zmm3[0].q), 0)
                                                zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                                zmm1[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                                
                                                if ((temp0_1324 & 2) != 0)
                                                label_1401c18be:
                                                    uint32_t rax_177 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                    zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm6[0].o, rax_177, 1)
                                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                                    zmm8[0].o = __vpaddq_xmmdq_xmmdq_memdq(
                                                        zmm7[0].o, arg15[0].o)
                                                    
                                                    if ((temp0_1324 & 4) == 0)
                                                        goto label_1401c19f9
                                                    
                                                    goto label_1401c18de
                                                
                                            label_1401c19e1:
                                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                                zmm8[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, 
                                                    arg15[0].o)
                                                
                                                if ((temp0_1324 & 4) == 0)
                                                label_1401c19f9:
                                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(
                                                        zmm1[0].o, arg_100[0].o)
                                                    
                                                    if ((temp0_1324 & 8) != 0)
                                                        goto label_1401c1904
                                                    
                                                    goto label_1401c1a0c
                                                
                                            label_1401c18de:
                                                zmm7[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm6[0].o, zx.d(*zmm7[0].q), 2)
                                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, 
                                                    arg_100[0].o)
                                                
                                                if ((temp0_1324 & 8) != 0)
                                                label_1401c1904:
                                                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                    uint32_t rax_181 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                    zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm6[0].o, rax_181, 3)
                                                    zmm3 = _mm256_insertf128_ps(zmm8, zmm1[0].o, 1)
                                                    
                                                    if ((temp0_1324 & 0x10) == 0)
                                                        goto label_1401c1a1c
                                                    
                                                    goto label_1401c1930
                                                
                                            label_1401c1a0c:
                                                zmm3 = _mm256_insertf128_ps(zmm8, zmm1[0].o, 1)
                                                
                                                if ((temp0_1324 & 0x10) == 0)
                                                label_1401c1a1c:
                                                    
                                                    if ((temp0_1324 & 0x20) != 0)
                                                        goto label_1401c1945
                                                    
                                                    goto label_1401c1a26
                                                
                                            label_1401c1930:
                                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm6[0].o, zx.d(*zmm3[0].q), 4)
                                                
                                                if ((temp0_1324 & 0x20) != 0)
                                                label_1401c1945:
                                                    uint32_t rax_185 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                    zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm6[0].o, rax_185, 5)
                                                    
                                                    if ((temp0_1324 & 0x40) == 0)
                                                        goto label_1401c1a30
                                                    
                                                    goto label_1401c1957
                                                
                                            label_1401c1a26:
                                                
                                                if ((temp0_1324 & 0x40) != 0)
                                                label_1401c1957:
                                                    zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                    zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm6[0].o, zx.d(*zmm1[0].q), 6)
                                                    
                                                    if (temp0_1324 s< 0)
                                                    label_1401c1973:
                                                        zmm1[0].o =
                                                            _mm256_extractf128_ps(zmm3[0].o, 1)
                                                        uint32_t rax_189 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 
                                                            1))
                                                        zmm6[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm6[0].o, rax_189, 7)
                                                else
                                                label_1401c1a30:
                                                    
                                                    if (temp0_1324 s< 0)
                                                        goto label_1401c1973
                                                
                                                zmm1[0].o = zmm6[0].o & data_142fc92e0
                                                zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(
                                                    zmm1[0].o, zmm2[0].o)
                                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                                zmm7[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, 
                                                    zmm7[0].o)
                                                zmm3[0].o ^= zmm5[0].o
                                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, 
                                                    zmm14[0].o)
                                                zmm1[0].o ^= zmm5[0].o
                                                zmm1 = _mm256_and_ps(
                                                    _mm256_insertf128_ps(zmm1, zmm3[0].o, 1), zmm10)
                                                zmm3[0].o = zx.o(0)
                                                zmm7 = _mm256_and_ps(zmm1, arg12)
                                                
                                                if (_mm256_movemask_ps(zmm7) != i_2)
                                                    zmm3 = _mm256_xor_ps(zmm1, zmm10)
                                                
                                                zmm0 = _mm256_blendv_ps(zmm0, arg9, zmm1)
                                                zmm1[0].o =
                                                    __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                                zmm4[0].o =
                                                    __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm5[0].o)
                                                arg9 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, 
                                                    zmm2[0].o)
                                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, 
                                                    zmm2[0].o)
                                                zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                                zmm10 = _mm256_and_ps(zmm1, zmm3)
                                                zmm8 = _mm256_and_ps(zmm10, arg12)
                                                i_2 = _mm256_movemask_ps(zmm8)
                                            while (i_2 != 0)
                                        
                                        zmm14 = arg_e0
                                        arg9 = arg_80.32
                                    
                                    zmm1 = arg_140
                                    zmm10 = _mm256_blendv_ps(zmm1, zmm0, arg12)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm10[0])
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm10[0].o, 0x4e)
                                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg_a0[0].o)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg18[0].o)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                    
                                    if ((rdx_19 & 1) == 0)
                                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                        
                                        if ((rdx_19 & 2) != 0)
                                            goto label_1401c6923
                                        
                                        goto label_1401c20a6
                                    
                                    zmm2[0].o = zx.o(*zmm1[0].q)
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((rdx_19 & 2) != 0)
                                    label_1401c6923:
                                        uint32_t rax_430 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_430, 1)
                                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg15[0].o)
                                        
                                        if ((rdx_19 & 4) == 0)
                                            goto label_1401c20bd
                                        
                                        goto label_1401c6942
                                    
                                label_1401c20a6:
                                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg15[0].o)
                                    
                                    if ((rdx_19 & 4) == 0)
                                    label_1401c20bd:
                                        zmm4[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg_100[0].o)
                                        
                                        if ((rdx_19 & 8) != 0)
                                            goto label_1401c6967
                                        
                                        goto label_1401c20cf
                                    
                                label_1401c6942:
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm5[0].q), 2)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg_100[0].o)
                                    
                                    if ((rdx_19 & 8) != 0)
                                    label_1401c6967:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        uint32_t rax_434 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_434, 3)
                                        zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                        
                                        if ((rdx_19 & 0x10) == 0)
                                            goto label_1401c20de
                                        
                                        goto label_1401c6992
                                    
                                label_1401c20cf:
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                    
                                    if ((rdx_19 & 0x10) == 0)
                                    label_1401c20de:
                                        
                                        if ((rdx_19 & 0x20) != 0)
                                            goto label_1401c69a6
                                        
                                        goto label_1401c20e7
                                    
                                label_1401c6992:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 4)
                                    
                                    if ((rdx_19 & 0x20) != 0)
                                    label_1401c69a6:
                                        uint32_t rax_438 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_438, 5)
                                        
                                        if ((rdx_19 & 0x40) == 0)
                                            goto label_1401c20f0
                                        
                                        goto label_1401c69b7
                                    
                                label_1401c20e7:
                                    
                                    if ((rdx_19 & 0x40) != 0)
                                    label_1401c69b7:
                                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                            zx.d(*zmm3[0].q), 6)
                                        
                                        if (temp0_969.b s< 0)
                                        label_1401c69d2:
                                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            uint32_t rax_442 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, rax_442, 7)
                                    else
                                    label_1401c20f0:
                                        
                                        if (temp0_969.b s< 0)
                                            goto label_1401c69d2
                                    
                                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm1[0].o)
                                    zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                    zmm6 = _mm256_blendv_ps(arg_1c0.32, zmm0, arg12)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
                                    zmm0[0].o ^= zmm1[0].o
                                    zmm3 = arg_20
                                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                                    zmm1[0].o ^= zmm3[0].o
                                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), 
                                        arg12)
                                    
                                    if (_mm256_movemask_ps(zmm0) != 0)
                                        zmm6 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm6, 
                                            arg_320.32, zmm0)
                                    
                                    zmm7 = arg_220.32
                                    zmm8[0].o = arg_1e0
                                    arg12 = arg_120
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm6[0])
                                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0x4e)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                    zmm3[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_a0[0].o)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg18[0].o)
                                    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    
                                    if ((rdx_19 & 1) == 0)
                                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                        
                                        if ((rdx_19 & 2) != 0)
                                            goto label_1401c6a10
                                        
                                        goto label_1401c21ae
                                    
                                    zmm0[0].o = zx.o(*zmm1[0].q)
                                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                    
                                    if ((rdx_19 & 2) != 0)
                                    label_1401c6a10:
                                        uint32_t rax_446 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_446, 1)
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg15[0].o)
                                        
                                        if ((rdx_19 & 4) == 0)
                                            goto label_1401c21c5
                                        
                                        goto label_1401c6a2f
                                    
                                label_1401c21ae:
                                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg15[0].o)
                                    
                                    if ((rdx_19 & 4) == 0)
                                    label_1401c21c5:
                                        zmm4[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_100[0].o)
                                        
                                        if ((rdx_19 & 8) != 0)
                                            goto label_1401c6a54
                                        
                                        goto label_1401c21d7
                                    
                                label_1401c6a2f:
                                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm4[0].q), 2)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_100[0].o)
                                    
                                    if ((rdx_19 & 8) != 0)
                                    label_1401c6a54:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        uint32_t rax_450 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_450, 3)
                                        zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                        
                                        if ((rdx_19 & 0x10) == 0)
                                            goto label_1401c21e6
                                        
                                        goto label_1401c6a7f
                                    
                                label_1401c21d7:
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                    
                                    if ((rdx_19 & 0x10) == 0)
                                    label_1401c21e6:
                                        zmm2[0].o &= data_142fc92e0
                                        
                                        if ((rdx_19 & 0x20) != 0)
                                            goto label_1401c6a9b
                                        
                                        goto label_1401c21f7
                                    
                                label_1401c6a7f:
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm1[0].q), 4)
                                    zmm2[0].o &= data_142fc92e0
                                    
                                    if ((rdx_19 & 0x20) == 0)
                                    label_1401c21f7:
                                        zmm4[0].o = zx.o(0)
                                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                        
                                        if ((rdx_19 & 0x40) != 0)
                                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, zx.d(*zmm5[0].q), 6)
                                    else
                                    label_1401c6a9b:
                                        uint32_t rax_454 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_454, 5)
                                        zmm4[0].o = zx.o(0)
                                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                        
                                        if ((rdx_19 & 0x40) != 0)
                                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, zx.d(*zmm5[0].q), 6)
                                    
                                    zmm5 = arg22
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                    arg_140 = zmm6
                                    
                                    if (temp0_969.b s< 0)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        uint32_t rax_232 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_232, 7)
                                    
                                    zmm6[0].o = arg24
                                    zmm4 = arg_340
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                    zmm0[0].o &= data_142fc92e0
                                else
                                    zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    arg_4c0[0].o = zmm0[0].o
                                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm3[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                    arg_a0[0].o = zmm3[0].o
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm1[0].o)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    char rdx_18 = temp0_969.b
                                    
                                    if ((rdx_18 & 1) != 0)
                                        zmm0[0].o = zx.o(*zmm1[0].q)
                                    
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                    
                                    if ((rdx_18 & 2) != 0)
                                        int64_t rax_130 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_130, 1)
                                    
                                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                    zmm2 = arg15
                                    arg_100[0].o = __vextractf128_memdq_ymmdq_immb(zmm2[0].o, 1)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                                    
                                    if ((rdx_18 & 4) == 0)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg_100[0].o)
                                        
                                        if ((rdx_18 & 8) != 0)
                                            goto label_1401c1ae1
                                        
                                        goto label_1401c0de5
                                    
                                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm3[0].q, 2)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg_100[0].o)
                                    
                                    if ((rdx_18 & 8) != 0)
                                    label_1401c1ae1:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_192 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_192, 3)
                                        zmm1 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                                        
                                        if ((rdx_18 & 0x10) == 0)
                                            goto label_1401c0df4
                                        
                                        goto label_1401c1b06
                                    
                                label_1401c0de5:
                                    zmm1 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                                    
                                    if ((rdx_18 & 0x10) == 0)
                                    label_1401c0df4:
                                        
                                        if ((rdx_18 & 0x20) != 0)
                                            goto label_1401c1b14
                                        
                                        goto label_1401c0dfd
                                    
                                label_1401c1b06:
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                                    
                                    if ((rdx_18 & 0x20) != 0)
                                    label_1401c1b14:
                                        int64_t rax_194 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_194, 5)
                                        
                                        if ((rdx_18 & 0x40) == 0)
                                            goto label_1401c0e06
                                        
                                        goto label_1401c1b28
                                    
                                label_1401c0dfd:
                                    
                                    if ((rdx_18 & 0x40) != 0)
                                    label_1401c1b28:
                                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0], 6)
                                        
                                        if (temp0_969.b s< 0)
                                        label_1401c1b40:
                                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            int64_t rax_196 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *rax_196, 7)
                                    else
                                    label_1401c0e06:
                                        
                                        if (temp0_969.b s< 0)
                                            goto label_1401c1b40
                                    
                                    zmm1[0].o = zx.o(0)
                                    zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                    zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                    zmm0[0].o = zx.o(rbx_14)
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                                    zmm14 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                    zmm1[0].o ^= zmm2[0].o
                                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                    zmm0[0].o ^= zmm2[0].o
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    arg_380 = zmm0
                                    zmm1 = zmm7
                                    
                                    if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                                        zmm0 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                        zmm3[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        arg_1a0[0].o = zmm3[0].o
                                        zmm1[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                                        zmm1[0].o ^= zmm2[0].o
                                        zmm0[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm14[0].o)
                                        zmm0[0].o ^= zmm2[0].o
                                        zmm3 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                        zmm8 = arg_240.32
                                        zmm1 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm8, 
                                            arg_320.32, zmm3)
                                        zmm0[0].o = arg_4c0[0].o
                                        zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                        zmm4[0].o = arg_c0[0].o
                                        zmm4[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                        zmm5 = arg_20
                                        zmm5[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                        arg9 = _mm256_and_ps(zmm4, zmm3)
                                        arg11 = _mm256_and_ps(arg12, arg9)
                                        int32_t i_3 = _mm256_movemask_ps(arg11)
                                        
                                        if (i_3 != 0)
                                            zmm7 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                            zmm15[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm15[0].o)
                                            
                                            do
                                                zmm4 = zmm7
                                                zmm7[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                                zmm3[0].o =
                                                    __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                                                zmm0[0].o =
                                                    __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                                zmm0[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                    arg_a0[0].o)
                                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, 
                                                    arg18[0].o)
                                                zmm10 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                                char temp0_1091 = _mm256_movemask_ps(arg11)
                                                
                                                if ((temp0_1091 & 1) != 0)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *zmm10[0], 0)
                                                
                                                zmm6[0].o = arg_c0[0].o
                                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                                zmm0[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                                
                                                if ((temp0_1091 & 2) == 0)
                                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                                    arg10[0].o = __vpaddq_xmmdq_xmmdq_memdq(
                                                        zmm5[0].o, arg15[0].o)
                                                    
                                                    if ((temp0_1091 & 4) != 0)
                                                        goto label_1401c0f1e
                                                    
                                                    goto label_1401c1043
                                                
                                                int64_t rax_132 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_132, 1)
                                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                                arg10[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, 
                                                    arg15[0].o)
                                                
                                                if ((temp0_1091 & 4) != 0)
                                                label_1401c0f1e:
                                                    zmm3[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *zmm3[0].q, 2)
                                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(
                                                        zmm0[0].o, arg_100[0].o)
                                                    
                                                    if ((temp0_1091 & 8) == 0)
                                                        goto label_1401c1056
                                                    
                                                    goto label_1401c0f41
                                                
                                            label_1401c1043:
                                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                    arg_100[0].o)
                                                
                                                if ((temp0_1091 & 8) == 0)
                                                label_1401c1056:
                                                    zmm10 =
                                                        _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                                    
                                                    if ((temp0_1091 & 0x10) != 0)
                                                        goto label_1401c0f67
                                                    
                                                    goto label_1401c1066
                                                
                                            label_1401c0f41:
                                                zmm3[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                                int64_t rax_134 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_134, 3)
                                                zmm10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                                
                                                if ((temp0_1091 & 0x10) != 0)
                                                label_1401c0f67:
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *zmm10[0], 4)
                                                    
                                                    if ((temp0_1091 & 0x20) == 0)
                                                        goto label_1401c1070
                                                    
                                                    goto label_1401c0f76
                                                
                                            label_1401c1066:
                                                
                                                if ((temp0_1091 & 0x20) == 0)
                                                label_1401c1070:
                                                    
                                                    if ((temp0_1091 & 0x40) != 0)
                                                        goto label_1401c0f8b
                                                    
                                                    goto label_1401c107a
                                                
                                            label_1401c0f76:
                                                int64_t rax_136 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_136, 5)
                                                
                                                if ((temp0_1091 & 0x40) == 0)
                                                label_1401c107a:
                                                    
                                                    if (temp0_1091 s< 0)
                                                    label_1401c0fa4:
                                                        zmm0[0].o =
                                                            _mm256_extractf128_ps(zmm10[0].o, 1)
                                                        int64_t rax_138 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1)
                                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm2[0].o, *rax_138, 7)
                                                else
                                                label_1401c0f8b:
                                                    zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *zmm0[0].q, 6)
                                                    
                                                    if (temp0_1091 s< 0)
                                                        goto label_1401c0fa4
                                                
                                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(
                                                    zmm2[0].o, data_142d8f750)
                                                zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                    arg_1a0[0].o)
                                                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, 
                                                    zmm14[0].o)
                                                zmm0 = _mm256_and_ps(
                                                    _mm256_insertf128_ps(zmm3, zmm0[0].o, 1), arg9)
                                                zmm3[0].o = zx.o(0)
                                                zmm5 = _mm256_and_ps(zmm0, arg12)
                                                
                                                if (_mm256_movemask_ps(zmm5) != i_3)
                                                    zmm3 = _mm256_xor_ps(zmm0, arg9)
                                                
                                                zmm1 = _mm256_blendv_ps(zmm1, zmm8, zmm0)
                                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm7[0].o, 
                                                    zmm15[0].o)
                                                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, 
                                                    zmm15[0].o)
                                                zmm7 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm6[0].o, 
                                                    zmm0[0].o)
                                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(
                                                    arg_20[0].o, zmm5[0].o)
                                                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                                arg9 = _mm256_and_ps(zmm0, zmm3)
                                                arg11 = _mm256_and_ps(arg9, arg12)
                                                i_3 = _mm256_movemask_ps(arg11)
                                                zmm8 = zmm4
                                            while (i_3 != 0)
                                    
                                    zmm3 = arg_380
                                    zmm0 = _mm256_andnot_ps(zmm3, arg12)
                                    
                                    if (_mm256_movemask_ps(zmm0) == 0)
                                        zmm14 = arg_e0
                                        arg9 = arg_80.32
                                        arg10[0].o = arg_40[0].o
                                        zmm7[0].o = arg_c0[0].o
                                        zmm6 = arg_1c0.32
                                        zmm15 = arg18
                                    else
                                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm2 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                                        zmm4 = _mm256_xor_ps(zmm3, zmm2)
                                        zmm1 = _mm256_blendv_ps(zmm1, zmm0, zmm4)
                                        zmm2[0].o =
                                            __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                        zmm0[0].o =
                                            __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, arg_4c0[0].o)
                                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, arg_240)
                                        arg10[0].o = zx.o(0)
                                        zmm6[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                                        zmm7[0].o =
                                            __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                                        arg9 = _mm256_and_ps(
                                            _mm256_insertf128_ps(zmm7, zmm6[0].o, 1), zmm4)
                                        zmm10 = _mm256_and_ps(arg9, arg12)
                                        int32_t i_4 = _mm256_movemask_ps(zmm10)
                                        
                                        if (i_4 == 0)
                                            arg11[0].o = arg_c0[0].o
                                            zmm15 = arg18
                                        else
                                            zmm6 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                            arg11[0].o = arg_c0[0].o
                                            zmm15 = arg18
                                            
                                            do
                                                zmm7[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                                zmm3[0].o =
                                                    __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                                                zmm0[0].o =
                                                    __vpaddd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                                zmm0[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                    arg_a0[0].o)
                                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, 
                                                    zmm5[0].o)
                                                zmm8 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                                char temp0_1161 = _mm256_movemask_ps(zmm10)
                                                
                                                if ((temp0_1161 & 1) == 0)
                                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                                    zmm3[0].o =
                                                        __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                                    
                                                    if ((temp0_1161 & 2) != 0)
                                                        goto label_1401c11ac
                                                    
                                                    goto label_1401c12c3
                                                
                                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm4[0].o, *zmm8[0].q, 0)
                                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                                zmm3[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                                
                                                if ((temp0_1161 & 2) != 0)
                                                label_1401c11ac:
                                                    int64_t rax_143 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm8[0].o, 1)
                                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm4[0].o, *rax_143, 1)
                                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                                    zmm10[0].o = __vpaddq_xmmdq_xmmdq_memdq(
                                                        zmm0[0].o, arg15[0].o)
                                                    
                                                    if ((temp0_1161 & 4) == 0)
                                                        goto label_1401c12db
                                                    
                                                    goto label_1401c11cf
                                                
                                            label_1401c12c3:
                                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                                zmm10[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                    arg15[0].o)
                                                
                                                if ((temp0_1161 & 4) == 0)
                                                label_1401c12db:
                                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(
                                                        zmm3[0].o, arg_100[0].o)
                                                    
                                                    if ((temp0_1161 & 8) != 0)
                                                        goto label_1401c11f2
                                                    
                                                    goto label_1401c12ee
                                                
                                            label_1401c11cf:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm4[0].o, *zmm0[0].q, 2)
                                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, 
                                                    arg_100[0].o)
                                                
                                                if ((temp0_1161 & 8) != 0)
                                                label_1401c11f2:
                                                    zmm3[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                                                    int64_t rax_145 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm4[0].o, *rax_145, 3)
                                                    zmm8 = _mm256_insertf128_ps(zmm10, zmm0[0].o, 1)
                                                    
                                                    if ((temp0_1161 & 0x10) == 0)
                                                        goto label_1401c12fe
                                                    
                                                    goto label_1401c1218
                                                
                                            label_1401c12ee:
                                                zmm8 = _mm256_insertf128_ps(zmm10, zmm0[0].o, 1)
                                                
                                                if ((temp0_1161 & 0x10) == 0)
                                                label_1401c12fe:
                                                    
                                                    if ((temp0_1161 & 0x20) != 0)
                                                        goto label_1401c1227
                                                    
                                                    goto label_1401c1308
                                                
                                            label_1401c1218:
                                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm4[0].o, *zmm8[0].q, 4)
                                                
                                                if ((temp0_1161 & 0x20) != 0)
                                                label_1401c1227:
                                                    int64_t rax_147 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm8[0].o, 1)
                                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm4[0].o, *rax_147, 5)
                                                    
                                                    if ((temp0_1161 & 0x40) == 0)
                                                        goto label_1401c1312
                                                    
                                                    goto label_1401c123c
                                                
                                            label_1401c1308:
                                                
                                                if ((temp0_1161 & 0x40) != 0)
                                                label_1401c123c:
                                                    zmm0[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm4[0].o, *zmm0[0].q, 6)
                                                    
                                                    if (temp0_1161 s< 0)
                                                    label_1401c1255:
                                                        zmm0[0].o =
                                                            _mm256_extractf128_ps(zmm8[0].o, 1)
                                                        int64_t rax_149 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1)
                                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm4[0].o, *rax_149, 7)
                                                else
                                                label_1401c1312:
                                                    
                                                    if (temp0_1161 s< 0)
                                                        goto label_1401c1255
                                                
                                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(
                                                    zmm4[0].o, arg10[0].o)
                                                zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                                                zmm5[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, 
                                                    zmm5[0].o)
                                                zmm0[0].o ^= zmm2[0].o
                                                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, 
                                                    zmm14[0].o)
                                                zmm3[0].o ^= zmm2[0].o
                                                zmm0 = _mm256_and_ps(
                                                    _mm256_insertf128_ps(zmm3, zmm0[0].o, 1), arg9)
                                                zmm3[0].o = zx.o(0)
                                                zmm5 = _mm256_and_ps(zmm0, arg12)
                                                
                                                if (_mm256_movemask_ps(zmm5) != i_4)
                                                    zmm3 = _mm256_xor_ps(zmm0, arg9)
                                                
                                                zmm1 = _mm256_blendv_ps(zmm1, zmm6, zmm0)
                                                zmm0[0].o =
                                                    __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
                                                zmm5[0].o =
                                                    __vpaddd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm2[0].o)
                                                zmm6 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, 
                                                    arg10[0].o)
                                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, 
                                                    arg10[0].o)
                                                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                                arg9 = _mm256_and_ps(zmm0, zmm3)
                                                zmm10 = _mm256_and_ps(arg9, arg12)
                                                i_4 = _mm256_movemask_ps(zmm10)
                                            while (i_4 != 0)
                                        
                                        zmm14 = arg_e0
                                        arg9 = arg_80.32
                                        arg10[0].o = arg_40[0].o
                                        zmm6 = arg_1c0.32
                                        zmm7[0].o = arg11[0].o
                                    
                                    zmm0 = arg_140
                                    zmm10 = _mm256_blendv_ps(zmm0, zmm1, arg12)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
                                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_a0[0].o)
                                    arg11 = zmm15
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm2[0].o)
                                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                    
                                    if ((rdx_18 & 1) != 0)
                                        zmm2[0].o = zx.o(*zmm1[0].q)
                                    
                                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                    zmm15 = arg_180
                                    
                                    if ((rdx_18 & 2) == 0)
                                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                        zmm4[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg15[0].o)
                                        
                                        if ((rdx_18 & 4) != 0)
                                            goto label_1401c1eda
                                        
                                        goto label_1401c1d1d
                                    
                                    int64_t rax_214 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_214, 1)
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg15[0].o)
                                    
                                    if ((rdx_18 & 4) != 0)
                                    label_1401c1eda:
                                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                            *zmm5[0].q, 2)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_100[0].o)
                                        
                                        if ((rdx_18 & 8) == 0)
                                            goto label_1401c1d2f
                                        
                                        goto label_1401c1efc
                                    
                                label_1401c1d1d:
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_100[0].o)
                                    
                                    if ((rdx_18 & 8) == 0)
                                    label_1401c1d2f:
                                        zmm1 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                        
                                        if ((rdx_18 & 0x10) != 0)
                                            goto label_1401c1f21
                                        
                                        goto label_1401c1d3e
                                    
                                label_1401c1efc:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_216 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_216, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                    
                                    if ((rdx_18 & 0x10) != 0)
                                    label_1401c1f21:
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                            *zmm1[0].q, 4)
                                        
                                        if ((rdx_18 & 0x20) == 0)
                                            goto label_1401c1d47
                                        
                                        goto label_1401c1f2f
                                    
                                label_1401c1d3e:
                                    
                                    if ((rdx_18 & 0x20) == 0)
                                    label_1401c1d47:
                                        
                                        if ((rdx_18 & 0x40) != 0)
                                            goto label_1401c1f43
                                        
                                        goto label_1401c1d50
                                    
                                label_1401c1f2f:
                                    int64_t rax_218 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_218, 5)
                                    
                                    if ((rdx_18 & 0x40) == 0)
                                    label_1401c1d50:
                                        
                                        if (temp0_969.b s< 0)
                                        label_1401c1f5b:
                                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            int64_t rax_220 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *rax_220, 7)
                                    else
                                    label_1401c1f43:
                                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                            *zmm3[0].q, 6)
                                        
                                        if (temp0_969.b s< 0)
                                            goto label_1401c1f5b
                                    
                                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm1[0].o)
                                    zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                    zmm6 = _mm256_blendv_ps(zmm6, zmm0, arg12)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm0[0].o)
                                    zmm0[0].o ^= zmm1[0].o
                                    zmm3 = arg_20
                                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                                    zmm1[0].o ^= zmm3[0].o
                                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), 
                                        arg12)
                                    
                                    if (_mm256_movemask_ps(zmm0) != 0)
                                        zmm6 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm6, 
                                            arg_320.32, zmm0)
                                    
                                    zmm7 = arg_220.32
                                    zmm8[0].o = arg_1e0
                                    arg12 = arg_120
                                    zmm0[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                                    zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg_a0[0].o)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    
                                    if ((rdx_18 & 1) == 0)
                                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                        
                                        if ((rdx_18 & 2) != 0)
                                            goto label_1401c1f90
                                        
                                        goto label_1401c1e11
                                    
                                    zmm0[0].o = zx.o(*zmm1[0].q)
                                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                    
                                    if ((rdx_18 & 2) != 0)
                                    label_1401c1f90:
                                        int64_t rax_223 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_223, 1)
                                        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg15[0].o)
                                        
                                        if ((rdx_18 & 4) == 0)
                                            goto label_1401c1e28
                                        
                                        goto label_1401c1fb2
                                    
                                label_1401c1e11:
                                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg15[0].o)
                                    
                                    if ((rdx_18 & 4) == 0)
                                    label_1401c1e28:
                                        zmm4[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_100[0].o)
                                        
                                        if ((rdx_18 & 8) != 0)
                                            goto label_1401c1fd4
                                        
                                        goto label_1401c1e3a
                                    
                                label_1401c1fb2:
                                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0].q, 2)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_100[0].o)
                                    
                                    if ((rdx_18 & 8) != 0)
                                    label_1401c1fd4:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_225 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_225, 3)
                                        zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                        
                                        if ((rdx_18 & 0x10) == 0)
                                            goto label_1401c1e49
                                        
                                        goto label_1401c1ff9
                                    
                                label_1401c1e3a:
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                    
                                    if ((rdx_18 & 0x10) == 0)
                                    label_1401c1e49:
                                        
                                        if ((rdx_18 & 0x20) != 0)
                                            goto label_1401c2007
                                        
                                        goto label_1401c1e52
                                    
                                label_1401c1ff9:
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                                    
                                    if ((rdx_18 & 0x20) == 0)
                                    label_1401c1e52:
                                        zmm4[0].o = zx.o(0)
                                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                        
                                        if ((rdx_18 & 0x40) != 0)
                                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm5[0].q, 6)
                                    else
                                    label_1401c2007:
                                        int64_t rax_227 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_227, 5)
                                        zmm4[0].o = zx.o(0)
                                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                        
                                        if ((rdx_18 & 0x40) != 0)
                                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm5[0].q, 6)
                                    
                                    zmm5 = arg22
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                    arg_140 = zmm6
                                    
                                    if (temp0_969.b s< 0)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_213 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_213, 7)
                                    
                                    zmm6[0].o = arg24
                                    zmm4 = arg_340
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                
                                zmm2[0].o = zx.o(0)
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                zmm2 = __vxorps_ymmqq_ymmqq_memqq(zmm4, arg19.32)
                                zmm3[0].o = zx.o(0)
                                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                
                                if (*(arg5 + 0xd58) != 1)
                                    zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                    zmm5[0].o = data_142d3f5b0
                                    zmm4[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                    zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                    zmm5 = arg22
                                    zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                    zmm4[0].o = __vpermilps_xmmdq_memdq_immb(arg_480, 0)
                                    zmm1 = _mm256_sub_ps(_mm256_insertf128_ps(zmm4, zmm4[0].o, 1), 
                                        _mm256_cvtepi32_ps(zmm1))
                                    zmm4 = _mm256_div_ps(zmm1, _mm256_cvtepi32_ps(zmm0))
                                
                                zmm0 = _mm256_blendv_ps(zmm3, zmm4, zmm2)
                            
                            zmm3[0].o = arg23[0].o
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                            zmm2 = _mm256_blendv_ps(arg_2e0.32, zmm0, zmm1)
                            arg_2e0.32 = zmm2
                    
                    arg23 = _mm256_insertf128_ps(zmm7, zmm8[0].o, 1)
                    zmm0 = _mm256_insertf128_ps(arg12, zmm3[0].o, 1)
                    arg_c0 = zmm0
                    zmm0[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                    zmm1[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm2[0].o = __vpmovzxdq_xmmdq_xmmq(zmm0[0].q)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    arg_20 = zmm0
                    zmm8[0].o = __vpmovzxdq_xmmdq_xmmq(zmm15[0].q)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm15[0].o, 0x4e)
                    zmm3[0].o = __vpmovzxdq_xmmdq_xmmq(zmm3[0].q)
                    zmm4 = _mm256_insertf128_ps(zmm8, zmm3[0].o, 1)
                    arg15 = zmm4
                    zmm5 = arg_260
                    zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm5[0].o)
                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                    arg_240 = zmm0[0].o
                    arg22[0].o = zmm5[0].o
                    zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                    zmm0 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                    arg_1c0.32 = zmm0
                    zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                    arg12 = arg17
                    zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    arg_a0[0].o = zmm0[0].o
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                    arg_180 = _mm256_insertf128_ps(zmm7, zmm4[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    arg_120 = zmm0
                    zmm2 = arg_60
                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg_100[0].o = zmm0[0].o
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm0[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    arg_320.32 = zmm0
                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg18[0].o = zmm0[0].o
                    zmm1[0].o = data_142d3f5b0
                    zmm15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm15[0].o)
                    arg12[0].o = zmm0[0].o & arg10[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    bool cond:7_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                    arg_220.32 = zmm10
                    zmm8[0].o = arg10[0].o
                    arg_1a0[0].o = zmm15[0].o
                    
                    if (not(cond:7_1))
                        zmm0 = arg14
                        arg11 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b60)
                        zmm3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        arg9[0].o = zx.o(0)
                        arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
                        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg9[0].o)
                        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                        zmm3[0].o &= arg12[0].o
                        zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                        zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                            zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                            zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                            zmm1 = arg_20
                            zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm6[0].o = _mm256_extractf128_ps(arg23[0].o, 1)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm3[0].o)
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg23[0].o, zmm1[0].o)
                            zmm7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg_c0[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                            zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_c0[0].o, arg15[0].o)
                            zmm10 = arg_180
                            zmm4[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm8 = arg_1c0.32
                            arg15[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                            arg_c0[0].o = data_1434426c0
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg_c0[0].o)
                            arg15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm3[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg_c0[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm3[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm3, arg15[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg_c0[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            arg_c0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg_c0[0].o)
                            arg_c0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, arg_c0[0].o)
                            zmm7 = _mm256_insertf128_ps(arg_c0, zmm2[0].o, 1)
                            arg_c0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm3 = _mm256_insertf128_ps(arg_c0, zmm2[0].o, 1)
                            arg_c0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm6[0].o = zx.o(0)
                            zmm2[0].o = _mm_permute_ps(arg_c0[0].o, 0x50)
                            arg_c0[0].o = _mm_permute_ps(arg_c0[0].o, 0xfa)
                            zmm8 = _mm256_insertf128_ps(zmm2, arg_c0[0].o, 1)
                            zmm0 = _mm256_blendv_ps(zmm6, zmm1, zmm8)
                            int64_t r8_5 = zmm0[0].q
                            void* rsi_14 = r15_1 + r8_5
                            int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            void* rdi_15 = r15_1 + r9_2
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t r10_4 = zmm0[0].q
                            int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm10 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            zmm0 = _mm256_blendv_ps(zmm6, zmm10, zmm8)
                            zmm1[0].o = *(zmm0[0].q + rsi_14)
                            int64_t rcx_26 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rdx_20 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rcx_26 + rdi_15), 0x10)
                            float* rcx_27 = zmm0[0].q
                            zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                            zmm2 = _mm256_blendv_ps(zmm6, zmm0, zmm8)
                            zmm4[0].o = *(zmm2[0] + rsi_14)
                            float* rax_236 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            double rsi_15 = zmm2[0]
                            float* rbx_15 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2 = _mm256_blendv_ps(zmm6, zmm7, zmm3)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rax_236 + rdi_15), 0x10)
                            double rax_237 = zmm2[0]
                            void* rdi_16 = r15_1 + r10_4
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rcx_27 + rdi_16), 0x20)
                            int64_t rcx_28 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rsi_15 i+ rdi_16), 0x20)
                            void* rsi_16 = r15_1 i+ rax_237
                            void* rdi_17 = r15_1 + r11_3
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                *(rdx_20 + rdi_17), 0x30)
                            void* rdx_21 = r15_1 + rcx_28
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                *(rbx_15 + rdi_17), 0x30)
                            double rdi_18 = zmm2[0]
                            zmm7 = _mm256_blendv_ps(zmm6, zmm10, zmm3)
                            zmm10 = arg_220.32
                            int32_t* rbx_16 = zmm7[0].q
                            zmm0 = _mm256_blendv_ps(zmm6, zmm0, zmm3)
                            zmm3[0].o = *(rbx_16 + rsi_16)
                            zmm6[0].o = *(zmm0[0].q + rsi_16)
                            void* rsi_17 = r15_1 i+ rdi_18
                            int64_t rbx_18 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(rbx_18 + rdx_21), 0x10)
                            float* rbx_19 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, 
                                *(rbx_19 + rdx_21), 0x10)
                            int64_t rdx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(zmm2[0] + rsi_17), 0x20)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, 
                                *(zmm0[0].q + rsi_17), 0x20)
                            void* rsi_18 = r15_1 + rdx_22
                            int64_t rbx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(rbx_22 + rsi_18), 0x30)
                            float* rbx_23 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, 
                                *(rbx_23 + rsi_18), 0x30)
                            zmm3[0].o = *(r15_1 i+ rax_237)
                            zmm6[0].o = *(r15_1 + r8_5)
                            zmm6[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(r15_1 + r9_2), 0x10)
                            zmm6[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(r15_1 + r10_4), 0x20)
                            zmm6[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(r15_1 + r11_3), 0x30)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(r15_1 + rcx_28), 0x10)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(r15_1 i+ rdi_18), 0x20)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                *(r15_1 + rdx_22), 0x30)
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm6[0].o, 1)
                            arg32.32 = _mm256_maskstore_ps(zmm5, zmm3)
                            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            arg34.32 = _mm256_maskstore_ps(zmm5, zmm1)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                            arg36.32 = _mm256_maskstore_ps(zmm5, zmm0)
                        
                        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        zmm4[0].o = arg10[0].o ^ zmm3[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg9[0].o)
                        zmm1[0].o ^= zmm3[0].o
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                        arg10[0].o = arg12[0].o & zmm1[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg10[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        bool cond:12_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                        arg9 = arg_80.32
                        zmm8[0].o = arg_40[0].o
                        
                        if (not(cond:12_1))
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg10[0])
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm6 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm1 = arg_2c0.32
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm5 = _mm256_and_ps(zmm0, zmm6)
                            
                            if (_mm256_movemask_ps(zmm5) == 0)
                                arg12 = arg_320.32
                                zmm7 = arg_120
                            else
                                arg11 = arg_120
                                zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm3[0].o = data_1434426c0
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
                                arg19.32 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                zmm1 = arg_320.32
                                zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                                arg9 = zmm6
                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                                zmm6 = _mm256_insertf128_ps(zmm6, zmm4[0].o, 1)
                                zmm4[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                zmm7[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm7[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm8 = _mm256_blendv_ps(zmm1, zmm6, zmm4)
                                zmm6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                zmm5 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                                zmm15 = arg_20
                                zmm6[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                                zmm7[0].o = _mm256_extractf128_ps(arg23[0].o, 1)
                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                                zmm14 = arg15
                                zmm7[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                zmm10 = arg_c0
                                zmm1[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                                zmm2 = arg_1c0.32
                                zmm7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm3[0].o)
                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg23[0].o, zmm15[0].o)
                                arg12 = zmm8
                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                zmm6 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                                zmm2 = arg_180
                                zmm7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm1[0].o)
                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm14[0].o)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                zmm3[0].o = zx.o(0)
                                zmm1 = _mm256_blendv_ps(zmm3, zmm1, zmm4)
                                zmm3 = _mm256_blendv_ps(zmm3, zmm6, zmm5)
                                zmm6 = arg9
                                zmm7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg11, arg19.32, zmm5)
                                int64_t r8_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rcx_29 = zmm1[0].q
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rdx_23 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rbx_24 = zmm1[0].q
                                zmm1[0].o = *(r15_1 + rcx_29)
                                int64_t rcx_30 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                int64_t rdi_19 = zmm3[0].q
                                zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                int64_t rsi_19 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                int64_t rax_240 = zmm3[0].q
                                zmm3[0].o = *(r15_1 + rdi_19)
                                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                    *(r15_1 + rcx_30), 0x10)
                                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                    *(r15_1 + rax_240), 0x20)
                                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                    *(r15_1 + rsi_19), 0x30)
                                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                    *(r15_1 + r8_6), 0x10)
                                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                    *(r15_1 + rbx_24), 0x20)
                                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                    *(r15_1 + rdx_23), 0x30)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                            
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            arg32.32 = _mm256_maskstore_ps(zmm6, _mm256_blendv_ps(zmm3, zmm1, zmm0))
                            zmm0 = arg14
                            zmm10 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                            zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm2[0].o = zx.o(0)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            zmm1[0].o = zmm0[0].o ^ zmm5[0].o
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm2[0].o)
                            zmm0[0].o ^= zmm5[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm0[0].o &= arg10[0].o
                            zmm3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm3[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                            char temp0_1729 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
                            
                            if (temp0_1729 == 0)
                                zmm14 = arg_e0
                                zmm15[0].o = arg_1a0[0].o
                                arg9 = arg_80.32
                                zmm8[0].o = arg_40[0].o
                            else
                                if ((temp0_1729 & 1) != 0)
                                    arg11[0].o = *arg12[0].q
                                
                                zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                
                                if ((temp0_1729 & 2) != 0)
                                    int64_t rax_242 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                                        *rax_242, 0x10)
                                    arg11 = _mm256_blend_ps(arg11, zmm0, 0xf)
                                
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                                zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                arg_1e0.32 = zmm6
                                
                                if ((temp0_1729 & 4) != 0)
                                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                                        *zmm4[0].q, 0x20)
                                    arg11 = _mm256_blend_ps(arg11, zmm5, 0xf)
                                
                                zmm6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                                zmm14[0].o = data_1434426c0
                                arg19 = zmm1[0].o
                                
                                if ((temp0_1729 & 8) != 0)
                                    int64_t rax_244 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, 
                                        *rax_244, 0x30)
                                    arg11 = _mm256_blend_ps(arg11, zmm3, 0xf)
                                
                                zmm3[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm14[0].o)
                                arg24.32 = zmm1
                                zmm15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm14[0].o)
                                zmm8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0x50)
                                zmm1 = zmm7
                                
                                if ((temp0_1729 & 0x10) != 0)
                                    zmm5[0].o = *zmm7[0].q
                                    zmm7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm5[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm5[0].o, 1)
                                    arg11 = _mm256_insertf128_ps(arg11, zmm5[0].o, 1)
                                
                                arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm14[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm14[0].o)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0xfa)
                                
                                if ((temp0_1729 & 0x20) != 0)
                                    zmm7 = zmm1
                                    int64_t rax_246 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                    zmm6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm6[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *rax_246, 0x10)
                                    arg11 = _mm256_insertf128_ps(arg11, zmm6[0].o, 1)
                                    zmm14 = arg_e0
                                else
                                    zmm14 = arg_e0
                                    zmm7 = zmm1
                                
                                zmm6 = _mm256_insertf128_ps(arg24.32, arg9[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(zmm15, zmm4[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(zmm8, zmm0[0].o, 1)
                                zmm5 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                                
                                if ((temp0_1729 & 0x40) != 0)
                                    float* rax_247 = zmm3[0].q
                                    zmm7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm7[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *rax_247, 0x20)
                                    arg11 = _mm256_insertf128_ps(arg11, zmm7[0].o, 1)
                                    zmm7 = zmm1
                                
                                arg9 = arg_80.32
                                zmm8[0].o = arg_40[0].o
                                zmm15[0].o = arg_1a0[0].o
                                zmm2[0].o = zx.o(0)
                                zmm1[0].o = arg19
                                arg12 = _mm256_blendv_ps(arg12, zmm4, zmm0)
                                zmm7 = _mm256_blendv_ps(zmm7, zmm6, zmm5)
                                
                                if (temp0_1729 s< 0)
                                    int64_t rax_248 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_248, 0x30)
                                    arg11 = _mm256_insertf128_ps(arg11, zmm0[0].o, 1)
                                
                                zmm6 = arg_1e0.32
                                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm2[0].o)
                            zmm0[0].o ^= zmm5[0].o
                            arg34.32 = _mm256_maskstore_ps(zmm6, 
                                _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), arg11))
                            zmm0 = arg14
                            zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                            zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                            zmm0[0].o ^= zmm5[0].o
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm4[0].o ^= zmm5[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                            zmm0[0].o &= arg10[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            char temp0_1783 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_1783 == 0)
                                zmm10 = arg_220.32
                            else
                                if ((temp0_1783 & 1) == 0)
                                    if ((temp0_1783 & 2) != 0)
                                        goto label_1401c2d3b
                                    
                                    goto label_1401c2ce3
                                
                                zmm0[0].o = *arg12[0].q
                                
                                if ((temp0_1783 & 2) != 0)
                                label_1401c2d3b:
                                    int64_t rax_250 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_250, 0x10)
                                    zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                                    zmm10 = arg_220.32
                                    
                                    if ((temp0_1783 & 4) == 0)
                                        goto label_1401c2cee
                                    
                                    goto label_1401c2d5b
                                
                            label_1401c2ce3:
                                zmm10 = arg_220.32
                                
                                if ((temp0_1783 & 4) == 0)
                                label_1401c2cee:
                                    
                                    if ((temp0_1783 & 8) != 0)
                                        goto label_1401c2d77
                                    
                                    goto label_1401c2cf7
                                
                            label_1401c2d5b:
                                zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm2[0], 0x20)
                                zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                                
                                if ((temp0_1783 & 8) != 0)
                                label_1401c2d77:
                                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    int64_t rax_252 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_252, 0x30)
                                    zmm0 = _mm256_blend_ps(zmm0, zmm2, 0xf)
                                    
                                    if ((temp0_1783 & 0x10) == 0)
                                        goto label_1401c2d00
                                    
                                    goto label_1401c2d9d
                                
                            label_1401c2cf7:
                                
                                if ((temp0_1783 & 0x10) == 0)
                                label_1401c2d00:
                                    
                                    if ((temp0_1783 & 0x20) != 0)
                                        goto label_1401c2dbc
                                    
                                    goto label_1401c2d09
                                
                            label_1401c2d9d:
                                zmm2[0].o = zx.o(*zmm7[0].q)
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 3)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                
                                if ((temp0_1783 & 0x20) != 0)
                                label_1401c2dbc:
                                    int64_t rax_254 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_254, 0x10)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                    
                                    if ((temp0_1783 & 0x40) == 0)
                                        goto label_1401c2d12
                                    
                                    goto label_1401c2ddd
                                
                            label_1401c2d09:
                                
                                if ((temp0_1783 & 0x40) != 0)
                                label_1401c2ddd:
                                    zmm2[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    double rax_255 = zmm2[0]
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_255, 0x20)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                    
                                    if (temp0_1783 s< 0)
                                    label_1401c2dfe:
                                        zmm2[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                        int64_t rax_256 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                            *rax_256, 0x30)
                                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                else
                                label_1401c2d12:
                                    
                                    if (temp0_1783 s< 0)
                                        goto label_1401c2dfe
                            
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                            zmm3[0].o ^= zmm4[0].o
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm1[0].o ^= zmm4[0].o
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                            zmm0 = _mm256_and_ps(zmm1, zmm0)
                            arg36.32 = _mm256_maskstore_ps(zmm6, zmm0)
                    
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    zmm0[0].o = zmm15[0].o ^ zmm5[0].o
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
                    zmm1[0].o ^= zmm5[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    arg_1e0 = zmm0[0].o
                    zmm0[0].o &= zmm8[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    bool cond:9_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                    zmm6 = arg_140
                    arg10[0].o = zmm8[0].o
                    
                    if (not(cond:9_1))
                        zmm2[0].o = data_142fc95c0
                        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, arg18[0].o)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm0[0].o &= arg10[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg24.32 = zmm1
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            arg12[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                            zmm1[0].o = zx.o(0)
                            arg_5e0 = zmm1
                            arg_5c0 = zmm1
                            arg_5a0 = zmm1
                            arg_580 = zmm1
                            arg_560 = zmm1
                            arg_540 = zmm1
                            zmm2 = arg_2c0.32
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            arg11 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm2[0].o, 1))
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(arg20, zmm0[0].o, 1), arg11)
                            int32_t temp0_1846 = _mm256_movemask_ps(zmm0)
                            zmm15 = arg_60
                            zmm1 = arg17
                            arg20[0].o = zmm4[0].o
                            
                            if (temp0_1846 != 0)
                                char rdx_26 = temp0_1846.b
                                
                                if ((rdx_26 & 1) == 0)
                                    zmm8[0].o = arg_a0[0].o
                                    zmm10 = arg17
                                    
                                    if ((rdx_26 & 2) != 0)
                                        goto label_1401c3bf0
                                    
                                    goto label_1401c2fc6
                                
                                zmm1 = arg_60
                                zmm3[0].o = *zmm1[0].q
                                zmm8[0].o = arg_a0[0].o
                                zmm10 = arg17
                                
                                if ((rdx_26 & 2) != 0)
                                label_1401c3bf0:
                                    zmm1 = arg_60
                                    int64_t rax_281 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_281, 0x10)
                                    zmm3 = _mm256_blend_ps(zmm3, zmm1, 0xf)
                                    
                                    if ((rdx_26 & 4) == 0)
                                        goto label_1401c2fcf
                                    
                                    goto label_1401c3c11
                                
                            label_1401c2fc6:
                                
                                if ((rdx_26 & 4) == 0)
                                label_1401c2fcf:
                                    
                                    if ((rdx_26 & 8) != 0)
                                        goto label_1401c3c34
                                    
                                    goto label_1401c2fd8
                                
                            label_1401c3c11:
                                zmm1[0].o = arg_100[0].o
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *zmm1[0].q, 0x20)
                                zmm3 = _mm256_blend_ps(zmm3, zmm1, 0xf)
                                
                                if ((rdx_26 & 8) != 0)
                                label_1401c3c34:
                                    zmm1[0].o = arg_100[0].o
                                    int64_t rax_283 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_283, 0x30)
                                    zmm3 = _mm256_blend_ps(zmm3, zmm1, 0xf)
                                    zmm2[0].o = data_1434426c0
                                    
                                    if ((rdx_26 & 0x10) == 0)
                                        goto label_1401c2fe9
                                    
                                    goto label_1401c3c65
                                
                            label_1401c2fd8:
                                zmm2[0].o = data_1434426c0
                                
                                if ((rdx_26 & 0x10) != 0)
                                label_1401c3c65:
                                    zmm1[0].o = zx.o(*zmm10[0])
                                    zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    zmm1[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 3)
                                    zmm3 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg_60[0].o)
                                    zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                                    
                                    if ((rdx_26 & 0x20) != 0)
                                    label_1401c2ffa:
                                        int64_t rax_259 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                            *rax_259, 0x10)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                else
                                label_1401c2fe9:
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg_60[0].o)
                                    zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                                    
                                    if ((rdx_26 & 0x20) != 0)
                                        goto label_1401c2ffa
                                
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg_100[0].o)
                                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                                
                                if ((rdx_26 & 0x40) != 0)
                                    float* rax_260 = zmm8[0].q
                                    zmm6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    zmm6[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *rax_260, 0x20)
                                    zmm3 = _mm256_insertf128_ps(zmm3, zmm6[0].o, 1)
                                
                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm2[0].o)
                                arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm7[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                
                                if (temp0_1846.b s< 0)
                                    int64_t rax_261 = __vpextrq_gpr64q_xmmdq_immb(zmm8[0].o, 1)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    zmm5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_261, 0x30)
                                    zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                                
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                                zmm1 = _mm256_blendv_ps(arg_60, zmm4, zmm0)
                                arg_5a0 = _mm256_maskstore_ps(arg11, zmm3)
                                
                                if ((rdx_26 & 1) == 0)
                                    zmm4 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                                    zmm6 = _mm256_insertf128_ps(arg9, zmm7[0].o, 1)
                                    
                                    if ((rdx_26 & 2) != 0)
                                        goto label_1401c3cb3
                                    
                                    goto label_1401c30b1
                                
                                zmm3[0].o = *zmm1[0].q
                                zmm4 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                                zmm6 = _mm256_insertf128_ps(arg9, zmm7[0].o, 1)
                                
                                if ((rdx_26 & 2) != 0)
                                label_1401c3cb3:
                                    int64_t rax_286 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_286, 0x10)
                                    zmm3 = _mm256_blend_ps(zmm3, zmm5, 0xf)
                                    zmm10 = _mm256_blendv_ps(zmm10, zmm4, zmm6)
                                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    
                                    if ((rdx_26 & 4) == 0)
                                        goto label_1401c30c6
                                    
                                    goto label_1401c3cdf
                                
                            label_1401c30b1:
                                zmm10 = _mm256_blendv_ps(zmm10, zmm4, zmm6)
                                zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                
                                if ((rdx_26 & 4) == 0)
                                label_1401c30c6:
                                    
                                    if ((rdx_26 & 8) != 0)
                                        goto label_1401c3cf4
                                    
                                    goto label_1401c30cf
                                
                            label_1401c3cdf:
                                zmm5[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *zmm4[0].q, 0x20)
                                zmm3 = _mm256_blend_ps(zmm3, zmm5, 0xf)
                                
                                if ((rdx_26 & 8) == 0)
                                label_1401c30cf:
                                    
                                    if ((rdx_26 & 0x10) != 0)
                                    label_1401c30d9:
                                        zmm5[0].o = zx.o(*zmm10[0])
                                        zmm7[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm5[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, 
                                            zmm5[0].o, 3)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                                else
                                label_1401c3cf4:
                                    int64_t rax_288 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm5[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_288, 0x30)
                                    zmm3 = _mm256_blend_ps(zmm3, zmm5, 0xf)
                                    
                                    if ((rdx_26 & 0x10) != 0)
                                        goto label_1401c30d9
                                
                                zmm5[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm2[0].o)
                                arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                
                                if ((rdx_26 & 0x20) == 0)
                                    zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                                    
                                    if ((rdx_26 & 0x40) != 0)
                                        goto label_1401c3d3d
                                    
                                    goto label_1401c3117
                                
                                float* rax_289 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                zmm7[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                zmm7[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *rax_289, 0x10)
                                zmm3 = _mm256_insertf128_ps(zmm3, zmm7[0].o, 1)
                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                                
                                if ((rdx_26 & 0x40) == 0)
                                label_1401c3117:
                                    zmm4 = _mm256_insertf128_ps(arg9, zmm7[0].o, 1)
                                    zmm2 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                                    
                                    if (temp0_1846.b s< 0)
                                    label_1401c3d68:
                                        int64_t rax_291 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                        zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                            *rax_291, 0x30)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                                else
                                label_1401c3d3d:
                                    float* rax_290 = zmm5[0].q
                                    zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    zmm4[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_290, 0x20)
                                    zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                    zmm4 = _mm256_insertf128_ps(arg9, zmm7[0].o, 1)
                                    zmm2 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                                    
                                    if (temp0_1846.b s< 0)
                                        goto label_1401c3d68
                                
                                arg9 = arg_80.32
                                zmm15 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                                zmm1 = _mm256_blendv_ps(zmm10, zmm4, zmm6)
                                arg_540 = _mm256_maskstore_ps(arg11, zmm3)
                                zmm10 = arg_220.32
                                zmm4[0].o = arg20[0].o
                            
                            arg19.32 = zmm1
                            zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(arg12[0].o, 0x1f)
                            arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, data_143442b00)
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm5[0].o = zx.o(0)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm0[0].o = zmm1[0].o & not.o(zmm4[0].o)
                            zmm2[0].o = zmm3[0].o & not.o(arg10[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm6[0].o = zmm0[0].o & arg_40[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm6[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            char temp0_1897 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_1897 == 0)
                                zmm0[0].o = data_142fc95c0
                                arg10[0].o = arg_40[0].o
                                zmm1 = arg24.32
                            else
                                arg_340[0].o = zmm7[0].o
                                
                                if ((temp0_1897 & 1) == 0)
                                    zmm5 = arg19.32
                                    
                                    if ((temp0_1897 & 2) != 0)
                                        goto label_1401c3da0
                                    
                                    goto label_1401c31ef
                                
                                zmm7[0].o = *zmm15[0].q
                                zmm5 = arg19.32
                                
                                if ((temp0_1897 & 2) != 0)
                                label_1401c3da0:
                                    int64_t rax_293 = __vpextrq_gpr64q_xmmdq_immb(zmm15[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *rax_293, 0x10)
                                    zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm6[0])
                                    zmm4[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                                    
                                    if ((temp0_1897 & 4) == 0)
                                        goto label_1401c3203
                                    
                                    goto label_1401c3dcb
                                
                            label_1401c31ef:
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm6[0])
                                zmm4[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                                
                                if ((temp0_1897 & 4) != 0)
                                label_1401c3dcb:
                                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                        *zmm4[0].q, 0x20)
                                    zmm7 = _mm256_blend_ps(zmm7, zmm2, 0xf)
                                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    
                                    if ((temp0_1897 & 8) != 0)
                                    label_1401c320d:
                                        int64_t rax_263 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                            *rax_263, 0x30)
                                        zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                else
                                label_1401c3203:
                                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    
                                    if ((temp0_1897 & 8) != 0)
                                        goto label_1401c320d
                                
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
                                zmm6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                arg9[0].o = data_1434426c0
                                zmm8[0].o = zmm3[0].o ^ arg11[0].o
                                
                                if ((temp0_1897 & 0x10) != 0)
                                    zmm2[0].o = zx.o(*zmm5[0].q)
                                    zmm3[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm2[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 3)
                                    zmm7 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                                
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, arg9[0].o)
                                arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0x50)
                                zmm0[0].o = zmm1[0].o ^ arg11[0].o
                                
                                if ((temp0_1897 & 0x20) != 0)
                                    int64_t rax_265 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_265, 0x10)
                                    zmm7 = _mm256_insertf128_ps(zmm7, zmm1[0].o, 1)
                                
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                                zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0xfa)
                                zmm10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg10, arg20[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(zmm8, zmm0[0].o, 1)
                                
                                if ((temp0_1897 & 0x40) != 0)
                                    double rax_266 = zmm2[0]
                                    zmm3[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm3[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_266, 0x20)
                                    zmm7 = _mm256_insertf128_ps(zmm7, zmm3[0].o, 1)
                                
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                                arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                                zmm3 = _mm256_insertf128_ps(zmm14, arg11[0].o, 1)
                                zmm8 = _mm256_insertf128_ps(arg12, zmm6[0].o, 1)
                                zmm10 = _mm256_and_ps(zmm0, zmm10)
                                
                                if (temp0_1897 s< 0)
                                    int64_t rbx_27 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rbx_27, 0x30)
                                    zmm7 = _mm256_insertf128_ps(zmm7, zmm0[0].o, 1)
                                
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                                zmm3 = _mm256_blendv_ps(zmm15, zmm3, zmm8)
                                arg_5c0 = _mm256_maskstore_ps(zmm10, zmm7)
                                
                                if ((temp0_1897 & 1) == 0)
                                    zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                    zmm14 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                    
                                    if ((temp0_1897 & 2) != 0)
                                        goto label_1401c3e08
                                    
                                    goto label_1401c333a
                                
                                zmm7[0].o = *zmm3[0].q
                                zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                zmm14 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                                
                                if ((temp0_1897 & 2) != 0)
                                label_1401c3e08:
                                    int64_t rax_296 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *rax_296, 0x10)
                                    zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                    zmm2 = _mm256_blendv_ps(zmm5, zmm1, zmm14)
                                    zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    
                                    if ((temp0_1897 & 4) == 0)
                                        goto label_1401c334f
                                    
                                    goto label_1401c3e34
                                
                            label_1401c333a:
                                zmm2 = _mm256_blendv_ps(zmm5, zmm1, zmm14)
                                zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                
                                if ((temp0_1897 & 4) == 0)
                                label_1401c334f:
                                    
                                    if ((temp0_1897 & 8) != 0)
                                        goto label_1401c3e49
                                    
                                    goto label_1401c3358
                                
                            label_1401c3e34:
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *zmm4[0].q, 0x20)
                                zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                
                                if ((temp0_1897 & 8) == 0)
                                label_1401c3358:
                                    
                                    if ((temp0_1897 & 0x10) != 0)
                                    label_1401c3362:
                                        zmm0[0].o = zx.o(*zmm2[0])
                                        zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                        zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 
                                            zmm0[0].o, 3)
                                        zmm7 = _mm256_insertf128_ps(zmm7, zmm0[0].o, 1)
                                else
                                label_1401c3e49:
                                    int64_t rax_298 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *rax_298, 0x30)
                                    zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                    
                                    if ((temp0_1897 & 0x10) != 0)
                                        goto label_1401c3362
                                
                                zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                                arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
                                
                                if ((temp0_1897 & 0x20) != 0)
                                    int64_t rax_268 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_268, 0x10)
                                    zmm7 = _mm256_insertf128_ps(zmm7, zmm0[0].o, 1)
                                
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                                
                                if ((temp0_1897 & 0x40) != 0)
                                    float* rax_269 = zmm1[0].q
                                    zmm6[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm6[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *rax_269, 0x20)
                                    zmm7 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                                
                                arg9 = arg_80.32
                                zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                zmm4 = _mm256_insertf128_ps(arg10, zmm4[0].o, 1)
                                
                                if (temp0_1897 s< 0)
                                    int64_t rcx_33 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm1[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rcx_33, 0x30)
                                    zmm7 = _mm256_insertf128_ps(zmm7, zmm1[0].o, 1)
                                
                                arg10[0].o = arg_40[0].o
                                zmm1 = arg24.32
                                zmm15 = _mm256_blendv_ps(zmm3, zmm4, zmm8)
                                zmm0 = _mm256_blendv_ps(zmm2, zmm0, zmm14)
                                arg19.32 = zmm0
                                arg_560 = _mm256_maskstore_ps(zmm10, zmm7)
                                zmm14 = arg_e0
                                zmm0[0].o = data_142fc95c0
                                zmm10 = arg_220.32
                                zmm5[0].o = zx.o(0)
                                zmm7[0].o = arg_340[0].o
                            
                            arg11 = _mm256_insertf128_ps(zmm1, zmm7[0].o, 1)
                            arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, data_143442b20)
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            zmm0[0].o = zmm7[0].o & not.o(arg20[0].o)
                            zmm1[0].o = zmm4[0].o & not.o(arg12[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm3[0].o = zmm0[0].o & arg10[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            char temp0_1971 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                            
                            if (temp0_1971 != 0)
                                if ((temp0_1971 & 1) == 0)
                                    zmm5 = arg19.32
                                    
                                    if ((temp0_1971 & 2) != 0)
                                        goto label_1401c3e84
                                    
                                    goto label_1401c34e5
                                
                                zmm1[0].o = *zmm15[0].q
                                zmm5 = arg19.32
                                
                                if ((temp0_1971 & 2) != 0)
                                label_1401c3e84:
                                    int64_t rax_300 = __vpextrq_gpr64q_xmmdq_immb(zmm15[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_300, 0x10)
                                    zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                                    zmm6[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                                    
                                    if ((temp0_1971 & 4) == 0)
                                        goto label_1401c34f9
                                    
                                    goto label_1401c3eaf
                                
                            label_1401c34e5:
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                                zmm6[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                                
                                if ((temp0_1971 & 4) != 0)
                                label_1401c3eaf:
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *zmm6[0], 0x20)
                                    zmm1 = _mm256_blend_ps(zmm1, zmm2, 0xf)
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    
                                    if ((temp0_1971 & 8) != 0)
                                    label_1401c3503:
                                        int64_t rax_270 = __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                            *rax_270, 0x30)
                                        zmm1 = _mm256_blend_ps(zmm1, zmm2, 0xf)
                                else
                                label_1401c34f9:
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    
                                    if ((temp0_1971 & 8) != 0)
                                        goto label_1401c3503
                                
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm10[0].o = data_1434426c0
                                zmm8[0].o = zmm4[0].o ^ data_142d3f800
                                
                                if ((temp0_1971 & 0x10) != 0)
                                    zmm0[0].o = zx.o(*zmm5[0].q)
                                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                
                                zmm4[0].o = arg20[0].o
                                arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm10[0].o)
                                arg10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                zmm7[0].o ^= data_142d3f800
                                
                                if ((temp0_1971 & 0x20) != 0)
                                    int64_t rax_272 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_272, 0x10)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                zmm14[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm10[0].o)
                                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                zmm2 = _mm256_insertf128_ps(arg12, zmm4[0].o, 1)
                                zmm7 = _mm256_insertf128_ps(zmm8, zmm7[0].o, 1)
                                
                                if ((temp0_1971 & 0x40) != 0)
                                    double rax_273 = zmm14[0]
                                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm4[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_273, 0x20)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
                                
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm4 = _mm256_insertf128_ps(arg9, zmm6[0].o, 1)
                                zmm3 = _mm256_insertf128_ps(arg10, zmm3[0].o, 1)
                                zmm7 = _mm256_and_ps(zmm7, zmm2)
                                
                                if (temp0_1971 s< 0)
                                    int64_t rbx_28 = __vpextrq_gpr64q_xmmdq_immb(zmm14[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rbx_28, 0x30)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                
                                arg9 = arg_80.32
                                arg10[0].o = arg_40[0].o
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm4 = _mm256_blendv_ps(zmm15, zmm4, zmm3)
                                arg_5e0 = _mm256_maskstore_ps(zmm7, zmm1)
                                
                                if ((temp0_1971 & 1) == 0)
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm10[0].o)
                                    zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                    
                                    if ((temp0_1971 & 2) != 0)
                                        goto label_1401c3eea
                                    
                                    goto label_1401c3632
                                
                                zmm1[0].o = *zmm4[0].q
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm10[0].o)
                                zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                
                                if ((temp0_1971 & 2) == 0)
                                label_1401c3632:
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm10[0].o)
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                    
                                    if ((temp0_1971 & 4) != 0)
                                    label_1401c3641:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                            *zmm0[0].q, 0x20)
                                        zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                                else
                                label_1401c3eea:
                                    int64_t rax_303 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_303, 0x10)
                                    zmm1 = _mm256_blend_ps(zmm1, zmm0, 0xf)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm10[0].o)
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                    
                                    if ((temp0_1971 & 4) != 0)
                                        goto label_1401c3641
                                
                                zmm14 = arg_e0
                                zmm10 = arg_220.32
                                zmm0 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                                zmm2 = _mm256_insertf128_ps(zmm6, zmm2[0].o, 1)
                                
                                if ((temp0_1971 & 8) == 0)
                                    zmm3 = arg19.32
                                    zmm2 = _mm256_blendv_ps(zmm3, zmm0, zmm2)
                                    
                                    if ((temp0_1971 & 0x10) != 0)
                                        goto label_1401c3f49
                                    
                                    goto label_1401c3697
                                
                                zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                int64_t rax_304 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                zmm3[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_304, 0x30)
                                zmm1 = _mm256_blend_ps(zmm1, zmm3, 0xf)
                                zmm3 = arg19.32
                                zmm2 = _mm256_blendv_ps(zmm3, zmm0, zmm2)
                                
                                if ((temp0_1971 & 0x10) != 0)
                                label_1401c3f49:
                                    zmm0[0].o = *zmm2[0]
                                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 1)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    
                                    if ((temp0_1971 & 0x20) == 0)
                                        goto label_1401c36a0
                                    
                                    goto label_1401c3f68
                                
                            label_1401c3697:
                                
                                if ((temp0_1971 & 0x20) == 0)
                                label_1401c36a0:
                                    
                                    if ((temp0_1971 & 0x40) != 0)
                                        goto label_1401c3f89
                                    
                                    goto label_1401c36b1
                                
                            label_1401c3f68:
                                int64_t rax_306 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_306, 0x10)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                
                                if ((temp0_1971 & 0x40) == 0)
                                label_1401c36b1:
                                    
                                    if (temp0_1971 s< 0)
                                    label_1401c3fb6:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                        int64_t rcx_39 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rcx_39, 0x30)
                                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                else
                                label_1401c3f89:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    float* rax_307 = zmm0[0].q
                                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_307, 0x20)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    
                                    if (temp0_1971 s< 0)
                                        goto label_1401c3fb6
                                
                                arg_580 = _mm256_maskstore_ps(zmm7, zmm1)
                            
                            zmm3 = arg_20
                            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm2 = arg23
                            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm5 = arg15
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm3[0].o = _mm256_extractf128_ps(arg_c0[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_c0[0].o, zmm5[0].o)
                            zmm8 = arg_180
                            arg_c0[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                            zmm7 = arg_1c0.32
                            zmm5[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                            zmm6[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm1[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6[0].o)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_c0[0].o, zmm1[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            zmm2[0].o = _mm_permute_ps(arg11[0].o, 0x50)
                            zmm3[0].o = _mm_permute_ps(arg11[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                            zmm3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            arg_c0[0].o = zx.o(0)
                            zmm1 = _mm256_blendv_ps(arg_c0, zmm1, zmm2)
                            zmm2[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            zmm0 = _mm256_blendv_ps(arg_c0, zmm0, 
                                _mm256_insertf128_ps(zmm2, zmm3[0].o, 1))
                            int64_t r8_7 = zmm1[0].q
                            int64_t rcx_35 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            int64_t rdx_29 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_29 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            int64_t rdi_20 = zmm1[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rsi_20 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rax_275 = zmm0[0].q
                            zmm0[0].o = zx.o(*(r15_1 + r8_7))
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rcx_35), 1)
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rdi_20), 2)
                            zmm0[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rdx_29), 3)
                            int64_t rcx_36 = zmm1[0].q
                            zmm1[0].o = zx.o(*(r15_1 + rax_275))
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rbx_29), 1)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rcx_36), 2)
                            zmm1[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rsi_20), 3)
                            zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                            zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                            zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                            arg_c0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                            zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                            zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm6[0].o = data_143442490
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6[0].o)
                            zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                                __vmulps_ymmqq_ymmqq_memqq(
                                    __vdivps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm5[0].o, 
                                            1)), 
                                        data_1434424a0), 
                                    arg_540), 
                                arg_5a0)
                            zmm5[0].o = data_143442480
                            arg_c0[0].o &= zmm5[0].o
                            zmm6[0].o = data_143442440
                            arg_c0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg_c0[0].o, zmm6[0].o)
                            zmm0[0].o &= zmm5[0].o
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, arg_c0[0].o, 1))
                            zmm4 = data_143442460
                            zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                                __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm0, zmm4), arg_560), 
                                arg_5c0)
                            zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
                            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                            zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                                __vmulps_ymmqq_ymmqq_memqq(
                                    _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 
                                            1)), 
                                        zmm4), 
                                    arg_580), 
                                arg_5e0)
                            arg32.32 = _mm256_maskstore_ps(arg11, zmm2)
                            zmm2[0].o = data_142fc95c0
                            arg34.32 = _mm256_maskstore_ps(arg11, zmm0)
                            arg36.32 = _mm256_maskstore_ps(arg11, zmm1)
                            zmm6 = arg_140
                            zmm15[0].o = arg_1a0[0].o
                            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            zmm4[0].o = arg20[0].o
                        
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm8[0].o = zmm0[0].o ^ arg_1e0
                        zmm0[0].o = zmm8[0].o & arg10[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm14[0].o = data_1434422d0
                            zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm14[0].o, arg18[0].o)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm14[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                            zmm4[0].o = zmm0[0].o & arg10[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                arg24 = zmm7[0].o
                                arg19 = zmm8[0].o
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                arg11 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                zmm1 = arg_2c0.32
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                zmm2 = _mm256_and_ps(zmm0, arg11)
                                
                                if (_mm256_movemask_ps(zmm2) == 0)
                                    zmm10 = arg_320.32
                                else
                                    zmm7 = arg_120
                                    zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm3[0].o = data_1434426b0
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                                    zmm15[0].o = zmm4[0].o
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
                                    zmm4 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                    zmm10 = arg_320.32
                                    zmm1[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm3[0].o)
                                    zmm3 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                    zmm6[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm6[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm10 = _mm256_blendv_ps(zmm10, zmm3, zmm1)
                                    zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                    zmm7 = _mm256_blendv_ps(zmm7, zmm4, zmm2)
                                    arg_120 = zmm7
                                    arg12 = arg_20
                                    zmm3[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    arg10 = arg23
                                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                                    zmm14 = arg15
                                    zmm4[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                    zmm8 = arg_c0
                                    zmm6[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                                    zmm5 = arg11
                                    arg11 = arg_1c0.32
                                    zmm6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm7[0].o = data_1434426c0
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm3[0].o)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg12[0].o)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm7[0].o)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm6[0].o)
                                    arg11 = zmm5
                                    zmm3 = _mm256_insertf128_ps(zmm6, zmm3[0].o, 1)
                                    arg10 = arg_180
                                    zmm6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm14[0].o)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm7[0].o)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm6[0].o)
                                    zmm4 = _mm256_insertf128_ps(zmm6, zmm4[0].o, 1)
                                    zmm6[0].o = zx.o(0)
                                    zmm1 = _mm256_blendv_ps(zmm6, zmm4, zmm1)
                                    zmm4[0].o = zmm15[0].o
                                    zmm2 = _mm256_blendv_ps(zmm6, zmm3, zmm2)
                                    int64_t r8_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    int64_t rcx_37 = zmm1[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t r9_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    int64_t rbx_30 = zmm1[0].q
                                    double rdi_21 = zmm2[0]
                                    int64_t rsi_21 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    int64_t rax_279 = zmm1[0].q
                                    int64_t rdx_30 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm1[0].o = zx.o(*(r15_1 + rcx_37))
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                        *(r15_1 + r8_8), 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                        *(r15_1 + rbx_30), 2)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                        *(r15_1 + r9_3), 3)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                        *(r15_1 i+ rdi_21), 4)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                        *(r15_1 + rsi_21), 5)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                        *(r15_1 + rax_279), 6)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                        *(r15_1 + rdx_30), 7)
                                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                                    zmm3[0].o = data_143442b40
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                                    zmm1 =
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
                                
                                zmm2[0].o = zx.o(0)
                                arg32.32 =
                                    _mm256_maskstore_ps(arg11, _mm256_blendv_ps(zmm2, zmm1, zmm0))
                                zmm0 = arg14
                                zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = zx.o(0)
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                zmm6[0].o = zmm0[0].o ^ zmm3[0].o
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0[0].o ^= zmm3[0].o
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                                zmm0[0].o &= zmm4[0].o
                                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                char temp0_2261 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                                arg20[0].o = zmm6[0].o
                                
                                if (temp0_2261 == 0)
                                    arg12 = zmm10
                                    zmm10 = arg_220.32
                                    zmm6 = arg_140
                                    zmm15[0].o = arg_1a0[0].o
                                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                    zmm8[0].o = arg19
                                    zmm14[0].o = data_1434422d0
                                    zmm7[0].o = zx.o(0)
                                else
                                    arg_1c0.o = zmm4[0].o
                                    
                                    if ((temp0_2261 & 1) != 0)
                                        zmm3[0].o = zx.o(*zmm10[0])
                                    
                                    if ((temp0_2261 & 2) != 0)
                                        int64_t rax_310 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_310, 1)
                                    
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                    zmm7[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    
                                    if ((temp0_2261 & 4) != 0)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *zmm7[0].q, 2)
                                    
                                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    arg_340 = arg11
                                    
                                    if ((temp0_2261 & 8) != 0)
                                        int64_t rax_312 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_312, 3)
                                    
                                    zmm6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    arg11[0].o = data_1434426b0
                                    
                                    if ((temp0_2261 & 0x10) != 0)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg_120[0].q, 4)
                                    
                                    zmm2[0].o = _mm256_extractf128_ps(arg_120[0].o, 1)
                                    zmm14[0].o =
                                        __vpaddq_xmmdq_xmmdq_xmmdq(arg_120[0].o, arg11[0].o)
                                    arg12 = zmm10
                                    zmm15[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, arg11[0].o)
                                    zmm10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                    zmm8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0x50)
                                    
                                    if ((temp0_2261 & 0x20) != 0)
                                        int64_t rax_314 =
                                            __vpextrq_gpr64q_xmmdq_immb(arg_120[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_314, 5)
                                    
                                    arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
                                    zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg11[0].o)
                                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                    arg_120[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0xfa)
                                    
                                    if ((temp0_2261 & 0x40) != 0)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm2[0], 6)
                                    
                                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                    zmm6 = _mm256_insertf128_ps(zmm14, arg9[0].o, 1)
                                    arg11 = _mm256_insertf128_ps(zmm15, zmm7[0].o, 1)
                                    zmm0 = _mm256_insertf128_ps(zmm10, zmm0[0].o, 1)
                                    zmm4 = _mm256_insertf128_ps(zmm8, arg_120[0].o, 1)
                                    
                                    if (temp0_2261 s< 0)
                                        int64_t rax_316 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_316, 7)
                                    
                                    arg9 = arg_80.32
                                    zmm10 = arg_220.32
                                    zmm15[0].o = arg_1a0[0].o
                                    zmm8[0].o = arg19
                                    zmm14[0].o = data_1434422d0
                                    zmm7[0].o = zx.o(0)
                                    arg12 = _mm256_blendv_ps(arg12, arg11, zmm0)
                                    zmm0 = _mm256_blendv_ps(arg_120, zmm6, zmm4)
                                    arg_120 = zmm0
                                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                                    zmm3[0].o = data_143442b40
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                                    zmm0 =
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                                    zmm6 = arg_140
                                    arg11 = arg_340
                                    zmm4[0].o = arg_1c0.o
                                
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                                arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                                zmm1[0].o ^= arg10[0].o
                                arg34.32 = _mm256_maskstore_ps(arg11, 
                                    _mm256_and_ps(
                                        __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm1, arg20[0].o, 1), 
                                        zmm0))
                                zmm0 = arg14
                                zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                                zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
                                zmm0[0].o ^= arg10[0].o
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                                zmm2[0].o ^= arg10[0].o
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                zmm0[0].o &= zmm4[0].o
                                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                char temp0_2313 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                                
                                if (temp0_2313 == 0)
                                    arg10[0].o = arg_40[0].o
                                    zmm7[0].o = arg24
                                else
                                    arg10[0].o = arg_40[0].o
                                    
                                    if ((temp0_2313 & 1) == 0)
                                        if ((temp0_2313 & 2) != 0)
                                            goto label_1401c4cd3
                                        
                                        goto label_1401c42c8
                                    
                                    zmm0[0].o = zx.o(*arg12[0].q)
                                    
                                    if ((temp0_2313 & 2) != 0)
                                    label_1401c4cd3:
                                        int64_t rax_335 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_335, 1)
                                        
                                        if ((temp0_2313 & 4) == 0)
                                            goto label_1401c42d1
                                        
                                        goto label_1401c4ce7
                                    
                                label_1401c42c8:
                                    
                                    if ((temp0_2313 & 4) == 0)
                                    label_1401c42d1:
                                        
                                        if ((temp0_2313 & 8) != 0)
                                            goto label_1401c4d00
                                        
                                        goto label_1401c42da
                                    
                                label_1401c4ce7:
                                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0], 2)
                                    
                                    if ((temp0_2313 & 8) != 0)
                                    label_1401c4d00:
                                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                        int64_t rax_337 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_337, 3)
                                        zmm7[0].o = arg24
                                        
                                        if ((temp0_2313 & 0x10) == 0)
                                            goto label_1401c42ec
                                        
                                        goto label_1401c4d23
                                    
                                label_1401c42da:
                                    zmm7[0].o = arg24
                                    
                                    if ((temp0_2313 & 0x10) == 0)
                                    label_1401c42ec:
                                        
                                        if ((temp0_2313 & 0x20) != 0)
                                            goto label_1401c4d3f
                                        
                                        goto label_1401c42f5
                                    
                                label_1401c4d23:
                                    zmm2 = arg_120
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0], 4)
                                    
                                    if ((temp0_2313 & 0x20) != 0)
                                    label_1401c4d3f:
                                        zmm2 = arg_120
                                        int64_t rax_339 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_339, 5)
                                        
                                        if ((temp0_2313 & 0x40) == 0)
                                            goto label_1401c42fe
                                        
                                        goto label_1401c4d5c
                                    
                                label_1401c42f5:
                                    
                                    if ((temp0_2313 & 0x40) != 0)
                                    label_1401c4d5c:
                                        zmm2 = arg_120
                                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0], 6)
                                        
                                        if (temp0_2313 s< 0)
                                        label_1401c4d7d:
                                            zmm2 = arg_120
                                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                            int64_t rax_341 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *rax_341, 7)
                                    else
                                    label_1401c42fe:
                                        
                                        if (temp0_2313 s< 0)
                                            goto label_1401c4d7d
                                    
                                    zmm2[0].o = zx.o(0)
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                    zmm4[0].o = data_143442b40
                                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                                    zmm0 =
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1))
                                
                                zmm2[0].o = zx.o(0)
                                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                zmm3[0].o ^= zmm4[0].o
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm1[0].o ^= zmm4[0].o
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                                zmm0 = _mm256_and_ps(zmm1, zmm0)
                                arg36.32 = _mm256_maskstore_ps(arg11, zmm0)
                            
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm14[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                            zmm0[0].o ^= zmm8[0].o
                            zmm0[0].o &= arg10[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm14 = arg_e0
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1[0].o = data_143442ad0
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, arg18[0].o)
                                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                                zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                                zmm3[0].o &= arg10[0].o
                                zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                                zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                                zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                                    zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                                    zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                    zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                    zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                                    zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                                    zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                    zmm4[0].o = zx.o(0)
                                    arg32.32 = _mm256_maskstore_ps(zmm3, zmm4)
                                    arg34.32 = _mm256_maskstore_ps(zmm3, zmm4)
                                    arg36.32 = _mm256_maskstore_ps(zmm3, zmm4)
                                
                                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                zmm2[0].o ^= zmm3[0].o
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                                zmm1[0].o ^= zmm3[0].o
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
                                    arg32.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    arg34.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    arg36.32 = _mm256_maskstore_ps(zmm0, zmm1)
                    
                    zmm1[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, arg22[0].o)
                    zmm0[0].o ^= zmm5[0].o
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm6[0].o)
                    zmm2[0].o ^= zmm5[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    arg12[0].o = zmm0[0].o & arg10[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm2 = arg_6e0
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm15[0].o)
                        zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm6[0].o, arg_260[0].o)
                        zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, arg_240)
                        zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                        zmm4 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        arg_260 = zmm4
                        zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                        zmm5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        arg_220.32 = zmm5
                        zmm6 = arg_20
                        zmm5[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                        arg10[0].o = arg_a0[0].o
                        arg_140[0].o = zmm5[0].o
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        zmm10 = arg17
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm10[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm5 = arg15
                        zmm6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm7 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        arg_120[0].o = zmm6[0].o
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, arg_100[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_60[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                        zmm6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        arg_1c0.32 = zmm1
                        zmm14[0].o = arg12[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm14[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_2404 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm15[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg_40[0].o = arg12[0].o
                        arg20 = zmm7
                        
                        if (temp0_2404 != 0)
                            zmm0 = arg14
                            arg12 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b60)
                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm8[0].o = zx.o(0)
                            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8[0].o)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm8[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                            zmm0[0].o &= zmm14[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            bool cond:21_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                            arg_180[0].o = zmm15[0].o
                            
                            if (not(cond:21_1))
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm7 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1 = arg23
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg_140[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_20[0].o)
                                zmm2 = arg_c0
                                zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg_120[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg15[0].o)
                                arg9 = arg_220.32
                                zmm15 = zmm6
                                zmm6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm10 = arg_260
                                zmm3[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                zmm2[0].o = data_1434426c0
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm1[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm1[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                                zmm10 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                zmm1[0].o = _mm_permute_ps(zmm7[0].o, 0x50)
                                zmm2[0].o = _mm_permute_ps(zmm7[0].o, 0xfa)
                                zmm4 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                arg9[0].o = zx.o(0)
                                zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                                arg10 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                zmm0 = _mm256_blendv_ps(arg9, zmm0, arg10)
                                int64_t r8_9 = zmm0[0].q
                                void* rsi_22 = r15_1 + r8_9
                                int64_t r9_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                void* rdi_22 = r15_1 + r9_4
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t r10_5 = zmm0[0].q
                                int64_t r11_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                                zmm0 = _mm256_blendv_ps(arg9, zmm1, arg10)
                                zmm2[0].o = *(zmm0[0].q + rsi_22)
                                int64_t rcx_41 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rdx_33 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                    *(rcx_41 + rdi_22), 0x10)
                                float* rcx_42 = zmm0[0].q
                                zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                                zmm3 = _mm256_blendv_ps(arg9, zmm0, arg10)
                                arg10[0].o = arg_a0[0].o
                                zmm5[0].o = *(zmm3[0].q + rsi_22)
                                float* rax_324 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                float* rsi_23 = zmm3[0].q
                                float* rbx_33 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                zmm3 = _mm256_blendv_ps(arg9, zmm10, zmm4)
                                zmm10 = arg17
                                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                    *(rax_324 + rdi_22), 0x10)
                                int64_t rax_325 = zmm3[0].q
                                void* rdi_23 = r15_1 + r10_5
                                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                    *(rcx_42 + rdi_23), 0x20)
                                int64_t rcx_43 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                    *(rsi_23 + rdi_23), 0x20)
                                void* rsi_24 = r15_1 + rax_325
                                void* rdi_24 = r15_1 + r11_4
                                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                    *(rdx_33 + rdi_24), 0x30)
                                void* rdx_34 = r15_1 + rcx_43
                                zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                    *(rbx_33 + rdi_24), 0x30)
                                int64_t rdi_25 = zmm3[0].q
                                zmm1 = _mm256_blendv_ps(arg9, zmm1, zmm4)
                                int32_t* rbx_34 = zmm1[0].q
                                zmm0 = _mm256_blendv_ps(arg9, zmm0, zmm4)
                                arg9 = arg_80.32
                                zmm4[0].o = *(rbx_34 + rsi_24)
                                zmm6[0].o = *(zmm0[0].q + rsi_24)
                                void* rsi_25 = r15_1 + rdi_25
                                float* rbx_36 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                    *(rbx_36 + rdx_34), 0x10)
                                float* rbx_37 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, 
                                    *(rbx_37 + rdx_34), 0x10)
                                int64_t rdx_35 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                    *(zmm1[0].q + rsi_25), 0x20)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, 
                                    *(zmm0[0].q + rsi_25), 0x20)
                                zmm6 = zmm15
                                zmm15[0].o = arg_180[0].o
                                void* rsi_26 = r15_1 + rdx_35
                                int64_t rbx_40 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                    *(rbx_40 + rsi_26), 0x30)
                                float* rbx_41 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                    *(rbx_41 + rsi_26), 0x30)
                                zmm3[0].o = *(r15_1 + rax_325)
                                zmm4[0].o = *(r15_1 + r8_9)
                                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                    *(r15_1 + r9_4), 0x10)
                                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                    *(r15_1 + r10_5), 0x20)
                                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                                    *(r15_1 + r11_4), 0x30)
                                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                    *(r15_1 + rcx_43), 0x10)
                                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                    *(r15_1 + rdi_25), 0x20)
                                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                    *(r15_1 + rdx_35), 0x30)
                                zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                arg45 = _mm256_maskstore_ps(zmm7, zmm3)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                arg46 = _mm256_maskstore_ps(zmm7, zmm1)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                                arg47 = _mm256_maskstore_ps(zmm7, zmm0)
                                zmm7 = arg20
                            
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm1[0].o = arg11[0].o ^ zmm0[0].o
                            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm8[0].o)
                            zmm0[0].o ^= zmm3[0].o
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm14[0].o &= zmm0[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm14[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            bool cond:26_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                            arg12[0].o = arg_40[0].o
                            
                            if (not(cond:26_1))
                                arg22 = zmm6
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm14[0])
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm0[0].o)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm8 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                zmm1 = arg_2c0.32
                                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm3 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                zmm5 = _mm256_and_ps(zmm3, zmm8)
                                
                                if (_mm256_movemask_ps(zmm5) == 0)
                                    arg10 = arg_1c0.32
                                    arg_1a0 = zmm7
                                else
                                    zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm4[0].o = data_1434426c0
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                                    zmm2 = zmm8
                                    zmm8 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    zmm1 = arg_1c0.32
                                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                    zmm6 = _mm256_insertf128_ps(zmm6, zmm0[0].o, 1)
                                    zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                    arg11 = zmm7
                                    zmm7[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    arg10 = _mm256_blendv_ps(zmm1, zmm6, zmm0)
                                    zmm6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                    zmm5 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                                    zmm1 = arg23
                                    zmm6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, arg_140[0].o)
                                    zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_20[0].o)
                                    zmm10 = arg_260
                                    zmm1[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
                                    arg9 = arg_c0
                                    zmm6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, arg_120[0].o)
                                    zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                                    zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm7[0].o)
                                    zmm1 = _mm256_insertf128_ps(zmm7, zmm1[0].o, 1)
                                    zmm10 = arg_220.32
                                    zmm7[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                                    zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, arg15[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                                    zmm7 = arg11
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm4[0].o)
                                    zmm4 = _mm256_insertf128_ps(zmm4, zmm6[0].o, 1)
                                    zmm6[0].o = zx.o(0)
                                    zmm0 = _mm256_blendv_ps(zmm6, zmm4, zmm0)
                                    zmm1 = _mm256_blendv_ps(zmm6, zmm1, zmm5)
                                    zmm4 = _mm256_blendv_ps(arg11, zmm8, zmm5)
                                    zmm8 = zmm2
                                    arg_1a0 = zmm4
                                    int64_t r8_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    int64_t rcx_44 = zmm0[0].q
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rdx_36 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    int64_t rbx_42 = zmm0[0].q
                                    zmm0[0].o = *(r15_1 + rcx_44)
                                    int64_t rcx_45 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    int64_t rdi_26 = zmm1[0].q
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rsi_27 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    int64_t rax_328 = zmm1[0].q
                                    zmm1[0].o = *(r15_1 + rdi_26)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                        *(r15_1 + rcx_45), 0x10)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                        *(r15_1 + rax_328), 0x20)
                                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                        *(r15_1 + rsi_27), 0x30)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *(r15_1 + r8_10), 0x10)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *(r15_1 + rbx_42), 0x20)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *(r15_1 + rdx_36), 0x30)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg45 =
                                    _mm256_maskstore_ps(zmm8, _mm256_blendv_ps(zmm1, zmm0, zmm3))
                                zmm0 = arg14
                                arg11 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                                zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                zmm2[0].o = zmm0[0].o ^ zmm5[0].o
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                zmm0[0].o ^= zmm5[0].o
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm0[0].o &= zmm14[0].o
                                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                char temp0_2568 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                                
                                if (temp0_2568 == 0)
                                    zmm6 = arg22
                                else
                                    if ((temp0_2568 & 1) != 0)
                                        zmm10[0].o = *arg10[0]
                                    
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                    zmm5 = arg_1a0
                                    
                                    if ((temp0_2568 & 2) != 0)
                                        int64_t rax_330 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, 
                                            *rax_330, 0x10)
                                        zmm10 = _mm256_blend_ps(zmm10, zmm0, 0xf)
                                    
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    arg_240 = zmm2[0].o
                                    
                                    if ((temp0_2568 & 4) != 0)
                                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, 
                                            *zmm1[0].q, 0x20)
                                        zmm10 = _mm256_blend_ps(zmm10, zmm4, 0xf)
                                    
                                    zmm15[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    zmm8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                                    zmm6[0].o = data_1434426c0
                                    arg_320.32 = zmm8
                                    
                                    if ((temp0_2568 & 8) != 0)
                                        int64_t rax_332 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, 
                                            *rax_332, 0x30)
                                        zmm10 = _mm256_blend_ps(zmm10, zmm0, 0xf)
                                    
                                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm6[0].o)
                                    zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm8[0].o, 0x50)
                                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm15[0].o, 0x50)
                                    arg9 = arg10
                                    
                                    if ((temp0_2568 & 0x10) != 0)
                                        arg10 = zmm5
                                        zmm3[0].o = zx.o(*zmm5[0].q)
                                        zmm5[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                        zmm3[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, 
                                            zmm3[0].o, 3)
                                        zmm10 = _mm256_insertf128_ps(zmm10, zmm3[0].o, 1)
                                    else
                                        arg10 = zmm5
                                    
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6[0].o)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
                                    zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm8[0].o, 0xfa)
                                    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm15[0].o, 0xfa)
                                    
                                    if ((temp0_2568 & 0x20) != 0)
                                        int64_t rax_343 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rax_343, 0x10)
                                        zmm10 = _mm256_insertf128_ps(zmm10, zmm0[0].o, 1)
                                    
                                    zmm15[0].o = arg_180[0].o
                                    zmm3 = _mm256_insertf128_ps(arg12, zmm3[0].o, 1)
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    zmm1 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                                    zmm5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                    
                                    if ((temp0_2568 & 0x40) != 0)
                                        double rax_344 = zmm2[0]
                                        zmm6[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                        zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, 
                                            *rax_344, 0x20)
                                        zmm10 = _mm256_insertf128_ps(zmm10, zmm6[0].o, 1)
                                    
                                    arg12[0].o = arg_40[0].o
                                    zmm6 = arg22
                                    zmm8 = arg_320.32
                                    zmm4[0].o = zx.o(0)
                                    arg9 = _mm256_blendv_ps(arg9, zmm0, zmm1)
                                    arg_1a0 = _mm256_blendv_ps(arg10, zmm3, zmm5)
                                    
                                    if (temp0_2568 s< 0)
                                        int64_t rax_345 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rax_345, 0x30)
                                        zmm10 = _mm256_insertf128_ps(zmm10, zmm0[0].o, 1)
                                    
                                    arg10 = arg9
                                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                    zmm2[0].o = arg_240
                                
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm4[0].o)
                                zmm0[0].o ^= zmm5[0].o
                                arg46 = _mm256_maskstore_ps(zmm8, 
                                    _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1), zmm10))
                                zmm0 = arg14
                                arg9 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                                zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                                zmm0[0].o ^= zmm5[0].o
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                                zmm1[0].o ^= zmm5[0].o
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm0[0].o &= zmm14[0].o
                                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                char temp0_2633 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                                
                                if (temp0_2633 == 0)
                                    zmm10 = arg17
                                    arg10[0].o = arg_a0[0].o
                                else
                                    zmm10 = arg17
                                    
                                    if ((temp0_2633 & 1) == 0)
                                        zmm4 = arg_1a0
                                        
                                        if ((temp0_2633 & 2) != 0)
                                            goto label_1401c4f81
                                        
                                        goto label_1401c4f14
                                    
                                    zmm2[0].o = *arg10[0]
                                    zmm4 = arg_1a0
                                    
                                    if ((temp0_2633 & 2) != 0)
                                    label_1401c4f81:
                                        int64_t rax_347 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                            *rax_347, 0x10)
                                        zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                        
                                        if ((temp0_2633 & 4) == 0)
                                            goto label_1401c4f19
                                        
                                        goto label_1401c4f98
                                    
                                label_1401c4f14:
                                    
                                    if ((temp0_2633 & 4) == 0)
                                    label_1401c4f19:
                                        
                                        if ((temp0_2633 & 8) != 0)
                                            goto label_1401c4fb8
                                        
                                        goto label_1401c4f22
                                    
                                label_1401c4f98:
                                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                        *zmm0[0].q, 0x20)
                                    zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                    
                                    if ((temp0_2633 & 8) != 0)
                                    label_1401c4fb8:
                                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        int64_t rax_349 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                            *rax_349, 0x30)
                                        zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                                        arg10[0].o = arg_a0[0].o
                                        
                                        if ((temp0_2633 & 0x10) == 0)
                                            goto label_1401c4f34
                                        
                                        goto label_1401c4fe7
                                    
                                label_1401c4f22:
                                    arg10[0].o = arg_a0[0].o
                                    
                                    if ((temp0_2633 & 0x10) == 0)
                                    label_1401c4f34:
                                        
                                        if ((temp0_2633 & 0x20) != 0)
                                            goto label_1401c5006
                                        
                                        goto label_1401c4f3d
                                    
                                label_1401c4fe7:
                                    zmm0[0].o = zx.o(*zmm4[0].q)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm0[0].o =
                                        __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 3)
                                    zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                    
                                    if ((temp0_2633 & 0x20) != 0)
                                    label_1401c5006:
                                        int64_t rax_351 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rax_351, 0x10)
                                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                        
                                        if ((temp0_2633 & 0x40) == 0)
                                            goto label_1401c4f46
                                        
                                        goto label_1401c5027
                                    
                                label_1401c4f3d:
                                    
                                    if ((temp0_2633 & 0x40) != 0)
                                    label_1401c5027:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        float* rax_352 = zmm0[0].q
                                        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rax_352, 0x20)
                                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                        
                                        if (temp0_2633 s< 0)
                                        label_1401c5048:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                            int64_t rax_353 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                                                zmm0[0].o, *rax_353, 0x30)
                                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                    else
                                    label_1401c4f46:
                                        
                                        if (temp0_2633 s< 0)
                                            goto label_1401c5048
                                
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                zmm1[0].o ^= zmm3[0].o
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                                zmm0[0].o ^= zmm3[0].o
                                zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), zmm2)
                                arg47 = _mm256_maskstore_ps(zmm8, zmm0)
                                arg9 = arg_80.32
                        
                        zmm8 = _mm256_insertf128_ps(zmm6, zmm15[0].o, 1)
                        zmm0[0].o = arg12[0].o & arg_1e0
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm14 = arg_e0
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm2[0].o = data_142fc95c0
                            zmm15[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, arg18[0].o)
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm15[0].o)
                            zmm0[0].o &= arg12[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            arg_a0 = zmm8
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg11[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm15[0].o, 1)
                                zmm1[0].o = zx.o(0)
                                arg_5e0 = zmm1
                                arg_5c0 = zmm1
                                arg_5a0 = zmm1
                                arg_580 = zmm1
                                arg_560 = zmm1
                                arg_540 = zmm1
                                zmm2 = arg_2c0.32
                                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                zmm14 = _mm256_and_ps(zmm0, zmm1)
                                zmm5 = _mm256_and_ps(zmm14, zmm8)
                                int32_t temp0_2690 = _mm256_movemask_ps(zmm5)
                                arg_180 = zmm3
                                
                                if (temp0_2690 == 0)
                                    zmm2[0].o = data_142fc95c0
                                else
                                    char rdx_39 = temp0_2690.b
                                    
                                    if ((rdx_39 & 1) == 0)
                                        if ((rdx_39 & 2) != 0)
                                            goto label_1401c5daf
                                        
                                        goto label_1401c51c0
                                    
                                    zmm0 = arg_60
                                    zmm7[0].o = *zmm0[0].q
                                    
                                    if ((rdx_39 & 2) != 0)
                                    label_1401c5daf:
                                        zmm0 = arg_60
                                        int64_t rax_381 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                            *rax_381, 0x10)
                                        zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                        
                                        if ((rdx_39 & 4) == 0)
                                            goto label_1401c51c9
                                        
                                        goto label_1401c5dd0
                                    
                                label_1401c51c0:
                                    
                                    if ((rdx_39 & 4) == 0)
                                    label_1401c51c9:
                                        
                                        if ((rdx_39 & 8) != 0)
                                            goto label_1401c5df3
                                        
                                        goto label_1401c51d2
                                    
                                label_1401c5dd0:
                                    zmm0[0].o = arg_100[0].o
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                        *zmm0[0].q, 0x20)
                                    zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                    
                                    if ((rdx_39 & 8) != 0)
                                    label_1401c5df3:
                                        zmm0[0].o = arg_100[0].o
                                        int64_t rax_383 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                            *rax_383, 0x30)
                                        zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                        zmm3[0].o = data_1434426c0
                                        
                                        if ((rdx_39 & 0x10) == 0)
                                            goto label_1401c51e3
                                        
                                        goto label_1401c5e24
                                    
                                label_1401c51d2:
                                    zmm3[0].o = data_1434426c0
                                    
                                    if ((rdx_39 & 0x10) != 0)
                                    label_1401c5e24:
                                        zmm0[0].o = *zmm10[0]
                                        zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 
                                            zmm0[0].o, 1)
                                        zmm7 = _mm256_insertf128_ps(zmm7, zmm0[0].o, 1)
                                        zmm4[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_60[0].o)
                                        zmm6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                        
                                        if ((rdx_39 & 0x20) != 0)
                                        label_1401c51f4:
                                            int64_t rax_356 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                            zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                                                zmm0[0].o, *rax_356, 0x10)
                                            zmm7 = _mm256_insertf128_ps(zmm7, zmm0[0].o, 1)
                                    else
                                    label_1401c51e3:
                                        zmm4[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_60[0].o)
                                        zmm6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                        
                                        if ((rdx_39 & 0x20) != 0)
                                            goto label_1401c51f4
                                    
                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_100[0].o)
                                    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                    
                                    if ((rdx_39 & 0x40) != 0)
                                        double rax_357 = arg10[0]
                                        zmm2[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                            *rax_357, 0x20)
                                        zmm7 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                                    
                                    zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm3[0].o)
                                    arg9[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                                    zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                                    arg12 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                                    
                                    if (temp0_2690.b s< 0)
                                        int64_t rax_358 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        zmm2[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                            *rax_358, 0x30)
                                        zmm7 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                                    
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                                    zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                                    zmm6 = _mm256_blendv_ps(arg_60, zmm1, arg12)
                                    arg_5a0 = _mm256_maskstore_ps(zmm14, zmm7)
                                    
                                    if ((rdx_39 & 1) == 0)
                                        zmm0 = _mm256_insertf128_ps(zmm8, zmm4[0].o, 1)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                        
                                        if ((rdx_39 & 2) != 0)
                                            goto label_1401c5e72
                                        
                                        goto label_1401c52ad
                                    
                                    zmm7[0].o = *zmm6[0]
                                    zmm0 = _mm256_insertf128_ps(zmm8, zmm4[0].o, 1)
                                    arg9 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                                    
                                    if ((rdx_39 & 2) != 0)
                                    label_1401c5e72:
                                        int64_t rax_386 = __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                            *rax_386, 0x10)
                                        zmm7 = _mm256_blend_ps(zmm7, zmm1, 0xf)
                                        zmm10 = _mm256_blendv_ps(zmm10, zmm0, arg9)
                                        zmm4[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                        
                                        if ((rdx_39 & 4) == 0)
                                            goto label_1401c52c2
                                        
                                        goto label_1401c5e9e
                                    
                                label_1401c52ad:
                                    zmm10 = _mm256_blendv_ps(zmm10, zmm0, arg9)
                                    zmm4[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                                    
                                    if ((rdx_39 & 4) == 0)
                                    label_1401c52c2:
                                        
                                        if ((rdx_39 & 8) != 0)
                                            goto label_1401c5eb3
                                        
                                        goto label_1401c52cb
                                    
                                label_1401c5e9e:
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                        *zmm4[0].q, 0x20)
                                    zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                    
                                    if ((rdx_39 & 8) == 0)
                                    label_1401c52cb:
                                        
                                        if ((rdx_39 & 0x10) != 0)
                                        label_1401c52d5:
                                            zmm0[0].o = *zmm10[0]
                                            zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
                                                zmm1[0].o, zmm0[0].o, 1)
                                            zmm7 = _mm256_insertf128_ps(zmm7, zmm0[0].o, 1)
                                    else
                                    label_1401c5eb3:
                                        int64_t rax_388 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                            *rax_388, 0x30)
                                        zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                                        
                                        if ((rdx_39 & 0x10) != 0)
                                            goto label_1401c52d5
                                    
                                    zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm3[0].o)
                                    arg10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm3[0].o)
                                    
                                    if ((rdx_39 & 0x20) != 0)
                                        int64_t rax_360 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                            *rax_360, 0x10)
                                        zmm7 = _mm256_insertf128_ps(zmm7, zmm1[0].o, 1)
                                    
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                                    
                                    if ((rdx_39 & 0x40) != 0)
                                        float* rax_361 = zmm0[0].q
                                        zmm2[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                            *rax_361, 0x20)
                                        zmm7 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                                    
                                    zmm2[0].o = data_142fc95c0
                                    zmm1 = _mm256_insertf128_ps(zmm8, zmm1[0].o, 1)
                                    zmm3 = _mm256_insertf128_ps(arg10, zmm3[0].o, 1)
                                    
                                    if (temp0_2690.b s< 0)
                                        int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rax_362, 0x30)
                                        zmm7 = _mm256_insertf128_ps(zmm7, zmm0[0].o, 1)
                                    
                                    arg_60 = _mm256_blendv_ps(zmm6, zmm3, arg12)
                                    zmm10 = _mm256_blendv_ps(zmm10, zmm1, arg9)
                                    arg_540 = _mm256_maskstore_ps(zmm14, zmm7)
                                    arg9 = arg_80.32
                                    arg12[0].o = arg_40[0].o
                                
                                zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(arg11[0].o, 0x1f)
                                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                                zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, data_143442b00)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm8[0].o = zx.o(0)
                                zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm8[0].o)
                                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8[0].o)
                                zmm0[0].o = zmm6[0].o & not.o(zmm15[0].o)
                                zmm1[0].o = zmm7[0].o & not.o(zmm3[0].o)
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm2[0].o = arg12[0].o & zmm0[0].o
                                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                char temp0_2750 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                                
                                if (temp0_2750 != 0)
                                    arg11 = arg_60
                                    
                                    if ((temp0_2750 & 1) == 0)
                                        arg17[0].o = zmm4[0].o
                                        
                                        if ((temp0_2750 & 2) != 0)
                                            goto label_1401c5eee
                                        
                                        goto label_1401c5422
                                    
                                    arg9[0].o = *arg11[0].q
                                    arg17[0].o = zmm4[0].o
                                    
                                    if ((temp0_2750 & 2) != 0)
                                    label_1401c5eee:
                                        int64_t rax_390 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, 
                                            *rax_390, 0x10)
                                        arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                        zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                        
                                        if ((temp0_2750 & 4) == 0)
                                            goto label_1401c5436
                                        
                                        goto label_1401c5f19
                                    
                                label_1401c5422:
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                    zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    
                                    if ((temp0_2750 & 4) != 0)
                                    label_1401c5f19:
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, 
                                            *zmm4[0].q, 0x20)
                                        arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        
                                        if ((temp0_2750 & 8) != 0)
                                        label_1401c5440:
                                            int64_t rax_363 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                                                arg9[0].o, *rax_363, 0x30)
                                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                    else
                                    label_1401c5436:
                                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        
                                        if ((temp0_2750 & 8) != 0)
                                            goto label_1401c5440
                                    
                                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    arg10[0].o = data_1434426c0
                                    arg12[0].o = zmm7[0].o ^ zmm5[0].o
                                    zmm14 = zmm10
                                    
                                    if ((temp0_2750 & 0x10) != 0)
                                        zmm2[0].o = zx.o(*zmm10[0])
                                        zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm2[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, 
                                            zmm2[0].o, 3)
                                        zmm5[0].o =
                                            __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                                    
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    zmm10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg10[0].o)
                                    arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x50)
                                    zmm6[0].o ^= zmm5[0].o
                                    zmm7 = zmm14
                                    
                                    if ((temp0_2750 & 0x20) != 0)
                                        int64_t rax_365 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                            *rax_365, 0x10)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                                    
                                    zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg10[0].o)
                                    zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0xfa)
                                    zmm3 = _mm256_insertf128_ps(zmm3, zmm15[0].o, 1)
                                    arg12 = _mm256_insertf128_ps(arg12, zmm6[0].o, 1)
                                    
                                    if ((temp0_2750 & 0x40) != 0)
                                        float* rax_366 = zmm0[0].q
                                        zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                            *rax_366, 0x20)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                                    
                                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, arg10[0].o)
                                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                                    zmm2 = _mm256_insertf128_ps(zmm10, zmm2[0].o, 1)
                                    zmm6 = _mm256_insertf128_ps(arg11, zmm7[0].o, 1)
                                    zmm3 = _mm256_and_ps(arg12, zmm3)
                                    
                                    if (temp0_2750 s< 0)
                                        int64_t rbx_45 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                            *rbx_45, 0x30)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm7[0].o, 1)
                                    
                                    zmm7 = arg_60
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                                    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                                    zmm10 = _mm256_blendv_ps(zmm7, zmm2, zmm6)
                                    arg_5c0 = _mm256_maskstore_ps(zmm3, arg9)
                                    
                                    if ((temp0_2750 & 1) == 0)
                                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                        arg12 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                        
                                        if ((temp0_2750 & 2) != 0)
                                            goto label_1401c5f56
                                        
                                        goto label_1401c5578
                                    
                                    arg9[0].o = *zmm10[0]
                                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                    arg12 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                                    
                                    if ((temp0_2750 & 2) != 0)
                                    label_1401c5f56:
                                        int64_t rax_393 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, 
                                            *rax_393, 0x10)
                                        arg9 = _mm256_blend_ps(arg9, zmm1, 0xf)
                                        arg11 = _mm256_blendv_ps(zmm14, zmm0, arg12)
                                        zmm4[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                        
                                        if ((temp0_2750 & 4) == 0)
                                            goto label_1401c558d
                                        
                                        goto label_1401c5f82
                                    
                                label_1401c5578:
                                    arg11 = _mm256_blendv_ps(zmm14, zmm0, arg12)
                                    zmm4[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    
                                    if ((temp0_2750 & 4) == 0)
                                    label_1401c558d:
                                        
                                        if ((temp0_2750 & 8) != 0)
                                            goto label_1401c5f97
                                        
                                        goto label_1401c5596
                                    
                                label_1401c5f82:
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, 
                                        *zmm4[0].q, 0x20)
                                    arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                    
                                    if ((temp0_2750 & 8) == 0)
                                    label_1401c5596:
                                        
                                        if ((temp0_2750 & 0x10) != 0)
                                        label_1401c55a0:
                                            zmm0[0].o = *arg11[0].q
                                            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
                                                zmm1[0].o, zmm0[0].o, 1)
                                            arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                                    else
                                    label_1401c5f97:
                                        int64_t rax_395 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, 
                                            *rax_395, 0x30)
                                        arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                                        
                                        if ((temp0_2750 & 0x10) != 0)
                                            goto label_1401c55a0
                                    
                                    zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg10[0].o)
                                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, arg10[0].o)
                                    
                                    if ((temp0_2750 & 0x20) != 0)
                                        int64_t rax_368 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                            *rax_368, 0x10)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                                    
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg10[0].o)
                                    
                                    if ((temp0_2750 & 0x40) != 0)
                                        float* rax_369 = zmm1[0].q
                                        zmm7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                            *rax_369, 0x20)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm7[0].o, 1)
                                    
                                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                    zmm2 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                    
                                    if (temp0_2750 s< 0)
                                        int64_t rcx_48 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                            *rcx_48, 0x30)
                                        arg9 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                                    
                                    zmm4[0].o = arg17[0].o
                                    zmm1 = _mm256_blendv_ps(zmm10, zmm2, zmm6)
                                    arg_60 = zmm1
                                    zmm10 = _mm256_blendv_ps(arg11, zmm0, arg12)
                                    arg_560 = _mm256_maskstore_ps(zmm3, arg9)
                                    arg9 = arg_80.32
                                    arg12[0].o = arg_40[0].o
                                
                                arg10 = _mm256_insertf128_ps(arg_180, zmm4[0].o, 1)
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                                zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, data_143442b20)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm8[0].o)
                                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8[0].o)
                                zmm0[0].o = zmm7[0].o & not.o(zmm15[0].o)
                                zmm1[0].o = zmm4[0].o & not.o(zmm2[0].o)
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm5[0].o = arg12[0].o & zmm0[0].o
                                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                char temp0_2825 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                                zmm14 = arg_e0
                                
                                if (temp0_2825 != 0)
                                    arg11 = arg_60
                                    
                                    if ((temp0_2825 & 1) == 0)
                                        if ((temp0_2825 & 2) != 0)
                                            goto label_1401c5fc9
                                        
                                        goto label_1401c56ef
                                    
                                    zmm3[0].o = *arg11[0].q
                                    
                                    if ((temp0_2825 & 2) != 0)
                                    label_1401c5fc9:
                                        int64_t rax_397 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                            *rax_397, 0x10)
                                        zmm3 = _mm256_blend_ps(zmm3, zmm0, 0xf)
                                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                                        zmm6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                        
                                        if ((temp0_2825 & 4) == 0)
                                            goto label_1401c5703
                                        
                                        goto label_1401c5ff4
                                    
                                label_1401c56ef:
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                                    zmm6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    
                                    if ((temp0_2825 & 4) != 0)
                                    label_1401c5ff4:
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                            *zmm6[0], 0x20)
                                        zmm3 = _mm256_blend_ps(zmm3, zmm1, 0xf)
                                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        
                                        if ((temp0_2825 & 8) != 0)
                                        label_1401c570d:
                                            int64_t rax_370 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                                                zmm3[0].o, *rax_370, 0x30)
                                            zmm3 = _mm256_blend_ps(zmm3, zmm1, 0xf)
                                    else
                                    label_1401c5703:
                                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        
                                        if ((temp0_2825 & 8) != 0)
                                            goto label_1401c570d
                                    
                                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    arg9[0].o = data_1434426c0
                                    zmm8[0].o = zmm4[0].o ^ data_142d3f800
                                    arg12 = zmm10
                                    
                                    if ((temp0_2825 & 0x10) != 0)
                                        zmm1[0].o = *zmm10[0]
                                        zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, 
                                            zmm1[0].o, 1)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    
                                    zmm10[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg9[0].o)
                                    arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                    zmm7[0].o ^= data_142d3f800
                                    
                                    if ((temp0_2825 & 0x20) != 0)
                                        int64_t rax_372 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                                            *rax_372, 0x10)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    
                                    zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                                    arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg9[0].o)
                                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                    zmm0 = _mm256_insertf128_ps(zmm2, zmm15[0].o, 1)
                                    zmm2 = _mm256_insertf128_ps(zmm8, zmm7[0].o, 1)
                                    
                                    if ((temp0_2825 & 0x40) != 0)
                                        float* rax_373 = arg12[0].q
                                        zmm7[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                            *rax_373, 0x20)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm7[0].o, 1)
                                    
                                    zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                                    zmm5 = _mm256_insertf128_ps(zmm10, zmm6[0].o, 1)
                                    zmm1 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                                    zmm2 = _mm256_and_ps(zmm2, zmm0)
                                    
                                    if (temp0_2825 s< 0)
                                        int64_t rbx_46 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rbx_46, 0x30)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                    
                                    zmm8 = arg12
                                    arg12[0].o = arg_40[0].o
                                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                                    zmm6 = arg_60
                                    zmm5 = _mm256_blendv_ps(zmm6, zmm5, zmm1)
                                    arg_5e0 = _mm256_maskstore_ps(zmm2, zmm3)
                                    
                                    if ((temp0_2825 & 1) == 0)
                                        zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, arg9[0].o)
                                        zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                        
                                        if ((temp0_2825 & 2) != 0)
                                            goto label_1401c602f
                                        
                                        goto label_1401c583e
                                    
                                    zmm3[0].o = *zmm5[0].q
                                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, arg9[0].o)
                                    zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                                    
                                    if ((temp0_2825 & 2) == 0)
                                    label_1401c583e:
                                        arg12[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                        
                                        if ((temp0_2825 & 4) != 0)
                                        label_1401c584d:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                                                zmm3[0].o, *zmm0[0].q, 0x20)
                                            zmm3 = _mm256_blend_ps(zmm3, zmm0, 0xf)
                                    else
                                    label_1401c602f:
                                        int64_t rax_400 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                                            *rax_400, 0x10)
                                        zmm3 = _mm256_blend_ps(zmm3, zmm1, 0xf)
                                        arg12[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                                        
                                        if ((temp0_2825 & 4) != 0)
                                            goto label_1401c584d
                                    
                                    arg9 = arg_80.32
                                    zmm0 = _mm256_insertf128_ps(zmm6, arg12[0].o, 1)
                                    zmm1 = _mm256_insertf128_ps(zmm7, zmm1[0].o, 1)
                                    
                                    if ((temp0_2825 & 8) == 0)
                                        zmm4 = _mm256_blendv_ps(zmm8, zmm0, zmm1)
                                        
                                        if ((temp0_2825 & 0x10) != 0)
                                            goto label_1401c6085
                                        
                                        goto label_1401c5891
                                    
                                    arg12[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    int64_t rax_401 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    arg12[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_401, 0x30)
                                    zmm3 = _mm256_blend_ps(zmm3, arg12, 0xf)
                                    zmm4 = _mm256_blendv_ps(zmm8, zmm0, zmm1)
                                    
                                    if ((temp0_2825 & 0x10) != 0)
                                    label_1401c6085:
                                        zmm0[0].o = *zmm4[0].q
                                        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 
                                            zmm0[0].o, 1)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                        
                                        if ((temp0_2825 & 0x20) == 0)
                                            goto label_1401c589a
                                        
                                        goto label_1401c60a4
                                    
                                label_1401c5891:
                                    
                                    if ((temp0_2825 & 0x20) == 0)
                                    label_1401c589a:
                                        
                                        if ((temp0_2825 & 0x40) != 0)
                                            goto label_1401c60c5
                                        
                                        goto label_1401c58ab
                                    
                                label_1401c60a4:
                                    int64_t rax_403 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    zmm0[0].o =
                                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_403, 0x10)
                                    zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                    
                                    if ((temp0_2825 & 0x40) == 0)
                                    label_1401c58ab:
                                        
                                        if (temp0_2825 s< 0)
                                        label_1401c60f2:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                            int64_t rcx_54 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                                                zmm0[0].o, *rcx_54, 0x30)
                                            zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                    else
                                    label_1401c60c5:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                        float* rax_404 = zmm0[0].q
                                        zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                            *rax_404, 0x20)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                        
                                        if (temp0_2825 s< 0)
                                            goto label_1401c60f2
                                    
                                    arg_580 = _mm256_maskstore_ps(zmm2, zmm3)
                                
                                zmm1 = arg23
                                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg_140[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_20[0].o)
                                zmm3 = arg_c0
                                zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg_120[0].o)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg15[0].o)
                                zmm7 = arg_220.32
                                zmm4[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                zmm8 = arg_260
                                zmm5[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                                zmm6[0].o = data_1434426c0
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm1[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                zmm2[0].o = _mm_permute_ps(arg10[0].o, 0x50)
                                zmm3[0].o = _mm_permute_ps(arg10[0].o, 0xfa)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                                zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm4[0].o = zx.o(0)
                                zmm1 = _mm256_blendv_ps(zmm4, zmm1, zmm2)
                                zmm2[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                                zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                                zmm0 = _mm256_blendv_ps(zmm4, zmm0, 
                                    _mm256_insertf128_ps(zmm2, zmm3[0].o, 1))
                                int64_t r8_11 = zmm1[0].q
                                int64_t rcx_50 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                int64_t rdx_42 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rbx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rdi_27 = zmm1[0].q
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rsi_28 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rax_375 = zmm0[0].q
                                zmm0[0].o = zx.o(*(r15_1 + r8_11))
                                zmm0[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rcx_50), 1)
                                zmm0[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rdi_27), 2)
                                zmm0[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r15_1 + rdx_42), 3)
                                int64_t rcx_51 = zmm1[0].q
                                zmm1[0].o = zx.o(*(r15_1 + rax_375))
                                zmm1[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rbx_47), 1)
                                zmm1[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rcx_51), 2)
                                zmm1[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_1 + rsi_28), 3)
                                zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                                zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                                zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                                zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                                zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm6[0].o = data_143442490
                                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6[0].o)
                                zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                                    __vmulps_ymmqq_ymmqq_memqq(
                                        __vdivps_ymmqq_ymmqq_memqq(
                                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, 
                                                zmm5[0].o, 1)), 
                                            data_1434424a0), 
                                        arg_540), 
                                    arg_5a0)
                                zmm5[0].o = data_143442480
                                zmm4[0].o &= zmm5[0].o
                                zmm6[0].o = data_143442440
                                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6[0].o)
                                zmm0[0].o &= zmm5[0].o
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm4[0].o, 1))
                                zmm4 = data_143442460
                                zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                                    __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm0, zmm4), arg_560), 
                                    arg_5c0)
                                zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
                                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                                zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                                    __vmulps_ymmqq_ymmqq_memqq(
                                        _mm256_div_ps(
                                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, 
                                                zmm1[0].o, 1)), 
                                            zmm4), 
                                        arg_580), 
                                    arg_5e0)
                                arg45 = _mm256_maskstore_ps(arg10, zmm2)
                                arg46 = _mm256_maskstore_ps(arg10, zmm0)
                                arg47 = _mm256_maskstore_ps(arg10, zmm1)
                                zmm2[0].o = data_142fc95c0
                                zmm8 = arg_a0
                            
                            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm15[0].o)
                            zmm5[0].o = zmm0[0].o ^ arg_1e0
                            zmm0[0].o = arg12[0].o & zmm5[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm10 = arg20
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                zmm7[0].o = data_1434422d0
                                zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm7[0].o, arg18[0].o)
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm7[0].o)
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                                zmm14[0].o = arg12[0].o & zmm0[0].o
                                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm14[0].o, 0xf)
                                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm14[0])
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    zmm1[0].o =
                                        __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm0[0].o)
                                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    zmm15 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    zmm1 = arg_2c0.32
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                    zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                    zmm1 = _mm256_and_ps(zmm2, zmm15)
                                    bool cond:45_1 = _mm256_movemask_ps(zmm1) == 0
                                    arg_60[0].o = zmm5[0].o
                                    arg17[0].o = zmm6[0].o
                                    
                                    if (cond:45_1)
                                        arg10 = arg_1c0.32
                                    else
                                        zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                        zmm3[0].o = data_1434426b0
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                                        zmm4[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm3[0].o)
                                        zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                                        arg10 = arg_1c0.32
                                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                        zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                        zmm6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                                        arg9 = _mm256_insertf128_ps(zmm0, zmm6[0].o, 1)
                                        arg10 = _mm256_blendv_ps(arg10, zmm3, arg9)
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                                        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                        zmm10 = _mm256_blendv_ps(zmm10, zmm4, zmm1)
                                        zmm3[0].o = _mm256_extractf128_ps(arg23[0].o, 1)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_140[0].o)
                                        zmm4[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg23[0].o, arg_20[0].o)
                                        zmm6[0].o = _mm256_extractf128_ps(arg_c0[0].o, 1)
                                        zmm6[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, arg_120[0].o)
                                        zmm7[0].o =
                                            __vpaddq_xmmdq_xmmdq_memdq(arg_c0[0].o, arg15[0].o)
                                        zmm8[0].o = zmm14[0].o
                                        zmm14 = zmm15
                                        arg11 = arg_220.32
                                        zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                        arg_20 = zmm2
                                        zmm2[0].o = _mm256_extractf128_ps(arg_260[0].o, 1)
                                        arg_c0[0].o = data_1434426c0
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg_c0[0].o)
                                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg_c0[0].o)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg_260[0].o, zmm3[0].o)
                                        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                        zmm3[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg_c0[0].o)
                                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o)
                                        arg_c0[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg_c0[0].o)
                                        arg_c0[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg_c0[0].o)
                                        zmm15 = zmm14
                                        zmm14[0].o = zmm8[0].o
                                        zmm0 = _mm256_insertf128_ps(arg_c0, zmm3[0].o, 1)
                                        zmm3[0].o = zx.o(0)
                                        zmm0 = _mm256_blendv_ps(zmm3, zmm0, arg9)
                                        zmm1 = _mm256_blendv_ps(zmm3, zmm2, zmm1)
                                        int64_t r8_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        int64_t rcx_52 = zmm0[0].q
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        int64_t r9_5 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        int64_t rbx_48 = zmm0[0].q
                                        int64_t rdi_28 = zmm1[0].q
                                        int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_379 = zmm0[0].q
                                        int64_t rdx_43 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm0[0].o = zx.o(*(r15_1 + rcx_52))
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                            *(r15_1 + r8_12), 1)
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                            *(r15_1 + rbx_48), 2)
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                            *(r15_1 + r9_5), 3)
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                            *(r15_1 + rdi_28), 4)
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                            *(r15_1 + rsi_29), 5)
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                            *(r15_1 + rax_379), 6)
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                            *(r15_1 + rdx_43), 7)
                                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                        zmm2[0].o = data_143442b40
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                        zmm2 = arg_20
                                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, 
                                            zmm0[0].o, 1))
                                    
                                    zmm1[0].o = zx.o(0)
                                    arg45 = _mm256_maskstore_ps(zmm15, 
                                        _mm256_blendv_ps(zmm1, zmm0, zmm2))
                                    zmm0 = arg14
                                    arg11 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b00)
                                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                    zmm6[0].o = zx.o(0)
                                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                    zmm3[0].o = zmm0[0].o ^ zmm2[0].o
                                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm6[0].o)
                                    zmm0[0].o ^= zmm2[0].o
                                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                                    zmm0[0].o &= zmm14[0].o
                                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    char temp0_3097 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                                    
                                    if (temp0_3097 == 0)
                                        arg9 = arg_80.32
                                        zmm8 = arg_a0
                                        zmm5[0].o = arg_60[0].o
                                    else
                                        if ((temp0_3097 & 1) != 0)
                                            zmm7[0].o = zx.o(*arg10[0])
                                        
                                        if ((temp0_3097 & 2) != 0)
                                            int64_t rax_407 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm7[0].o, 
                                                *rax_407, 1)
                                        
                                        zmm2[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        
                                        if ((temp0_3097 & 4) != 0)
                                            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm7[0].o, 
                                                *zmm1[0].q, 2)
                                        
                                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        arg_20[0].o = zmm3[0].o
                                        zmm8 = arg10
                                        
                                        if ((temp0_3097 & 8) != 0)
                                            int64_t rax_409 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm7[0].o, 
                                                *rax_409, 3)
                                        
                                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                                        zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        arg10[0].o = data_1434426b0
                                        arg_1e0.32 = zmm15
                                        
                                        if ((temp0_3097 & 0x10) != 0)
                                            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm7[0].o, 
                                                *zmm10[0], 4)
                                        
                                        zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                        zmm4 = zmm10
                                        zmm15[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg10[0].o)
                                        arg9[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, arg10[0].o)
                                        zmm10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x50)
                                        zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                                        
                                        if ((temp0_3097 & 0x20) != 0)
                                            zmm5 = zmm4
                                            int64_t rax_411 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm7[0].o, 
                                                *rax_411, 5)
                                        else
                                            zmm5 = zmm4
                                        
                                        arg12[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                                        zmm1[0].o =
                                            __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                                        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0xfa)
                                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                                        
                                        if ((temp0_3097 & 0x40) != 0)
                                            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm7[0].o, 
                                                *zmm0[0].q, 6)
                                        
                                        arg10 = zmm8
                                        zmm8 = arg_a0
                                        zmm2 = _mm256_insertf128_ps(zmm15, arg12[0].o, 1)
                                        zmm1 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                                        zmm3 = _mm256_insertf128_ps(zmm10, zmm3[0].o, 1)
                                        zmm4 = _mm256_insertf128_ps(zmm6, zmm4[0].o, 1)
                                        
                                        if (temp0_3097 s< 0)
                                            int64_t rax_413 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm7[0].o, 
                                                *rax_413, 7)
                                        
                                        arg9 = arg_80.32
                                        arg12[0].o = arg_40[0].o
                                        zmm5[0].o = arg_60[0].o
                                        zmm15 = arg_1e0.32
                                        zmm6[0].o = zx.o(0)
                                        arg10 = _mm256_blendv_ps(arg10, zmm1, zmm3)
                                        zmm10 = _mm256_blendv_ps(zmm5, zmm2, zmm4)
                                        zmm0[0].o = zx.o(0)
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zx.o(0))
                                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm7[0].q)
                                        zmm2[0].o = data_143442b40
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, 
                                            zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                        zmm3[0].o = arg_20[0].o
                                    
                                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm6[0].o)
                                    zmm1[0].o ^= zmm2[0].o
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                                    arg46 = _mm256_maskstore_ps(zmm15, _mm256_and_ps(zmm1, zmm0))
                                    zmm0 = arg14
                                    zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442b20)
                                    zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                                    zmm0[0].o ^= zmm2[0].o
                                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6[0].o)
                                    zmm1[0].o ^= zmm2[0].o
                                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    zmm0[0].o &= zmm14[0].o
                                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    char temp0_3146 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                                    
                                    if (temp0_3146 == 0)
                                        zmm7[0].o = data_1434422d0
                                        zmm6[0].o = arg17[0].o
                                    else
                                        if ((temp0_3146 & 1) == 0)
                                            if ((temp0_3146 & 2) != 0)
                                                goto label_1401c6851
                                            
                                            goto label_1401c63a9
                                        
                                        zmm2[0].o = zx.o(*arg10[0])
                                        
                                        if ((temp0_3146 & 2) != 0)
                                        label_1401c6851:
                                            int64_t rax_420 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *rax_420, 1)
                                            
                                            if ((temp0_3146 & 4) == 0)
                                                goto label_1401c63b2
                                            
                                            goto label_1401c6865
                                        
                                    label_1401c63a9:
                                        
                                        if ((temp0_3146 & 4) == 0)
                                        label_1401c63b2:
                                            
                                            if ((temp0_3146 & 8) != 0)
                                                goto label_1401c687e
                                            
                                            goto label_1401c63bb
                                        
                                    label_1401c6865:
                                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                            *zmm0[0].q, 2)
                                        
                                        if ((temp0_3146 & 8) != 0)
                                        label_1401c687e:
                                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                            int64_t rax_422 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *rax_422, 3)
                                            zmm7[0].o = data_1434422d0
                                            zmm6[0].o = arg17[0].o
                                            
                                            if ((temp0_3146 & 0x10) == 0)
                                                goto label_1401c63d5
                                            
                                            goto label_1401c68ae
                                        
                                    label_1401c63bb:
                                        zmm7[0].o = data_1434422d0
                                        zmm6[0].o = arg17[0].o
                                        
                                        if ((temp0_3146 & 0x10) == 0)
                                        label_1401c63d5:
                                            
                                            if ((temp0_3146 & 0x20) != 0)
                                                goto label_1401c68bc
                                            
                                            goto label_1401c63de
                                        
                                    label_1401c68ae:
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm10[0], 4)
                                        
                                        if ((temp0_3146 & 0x20) != 0)
                                        label_1401c68bc:
                                            int64_t rax_424 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *rax_424, 5)
                                            
                                            if ((temp0_3146 & 0x40) == 0)
                                                goto label_1401c63e7
                                            
                                            goto label_1401c68d0
                                        
                                    label_1401c63de:
                                        
                                        if ((temp0_3146 & 0x40) != 0)
                                        label_1401c68d0:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_3146 s< 0)
                                            label_1401c68e8:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                                int64_t rax_426 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_426, 7)
                                        else
                                        label_1401c63e7:
                                            
                                            if (temp0_3146 s< 0)
                                                goto label_1401c68e8
                                        
                                        zmm0[0].o = zx.o(0)
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                        zmm2[0].o = data_143442b40
                                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, 
                                            zmm0[0].o, 1))
                                    
                                    zmm1[0].o = zx.o(0)
                                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                                    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                    zmm2[0].o ^= zmm3[0].o
                                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                                    zmm1[0].o ^= zmm3[0].o
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                    zmm0 = _mm256_and_ps(zmm1, zmm0)
                                    arg47 = _mm256_maskstore_ps(zmm15, zmm0)
                                
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm7[0].o)
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                                zmm0[0].o ^= zmm5[0].o
                                zmm1[0].o = arg12[0].o & zmm0[0].o
                                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm14 = arg_e0
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                    zmm0[0].o = data_143442ad0
                                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, arg18[0].o)
                                    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                                    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                                    zmm3[0].o &= arg12[0].o
                                    zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                                    zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                                    zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                                        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                        zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                                        zmm3[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                                        zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                                        zmm4[0].o = zx.o(0)
                                        arg45 = _mm256_maskstore_ps(zmm3, zmm4)
                                        arg46 = _mm256_maskstore_ps(zmm3, zmm4)
                                        arg47 = _mm256_maskstore_ps(zmm3, zmm4)
                                    
                                    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                    zmm2[0].o ^= zmm3[0].o
                                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                                    zmm0[0].o ^= zmm3[0].o
                                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                    zmm0[0].o &= zmm1[0].o
                                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                                        zmm0[0].o =
                                            __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                        zmm1[0].o = zx.o(0)
                                        arg45 = _mm256_maskstore_ps(zmm0, zmm1)
                                        arg46 = _mm256_maskstore_ps(zmm0, zmm1)
                                        arg47 = _mm256_maskstore_ps(zmm0, zmm1)
                        
                        zmm3 = arg32.32
                        zmm4 = arg34.32
                        zmm5 = arg36.32
                        zmm0 = _mm256_sub_ps(arg45, zmm3)
                        zmm1 = _mm256_sub_ps(arg46, zmm4)
                        zmm2 = _mm256_sub_ps(arg47, zmm5)
                        zmm6 = arg_2e0.32
                        zmm0 = _mm256_mul_ps(zmm6, zmm0)
                        zmm1 = _mm256_mul_ps(zmm6, zmm1)
                        zmm2 = _mm256_mul_ps(zmm6, zmm2)
                        arg32.32 = _mm256_maskstore_ps(zmm8, _mm256_add_ps(zmm3, zmm0))
                        arg34.32 = _mm256_maskstore_ps(zmm8, _mm256_add_ps(zmm4, zmm1))
                        zmm0 = _mm256_add_ps(zmm5, zmm2)
                        arg36.32 = _mm256_maskstore_ps(zmm8, zmm0)
                        zmm2 = arg_6e0
                
                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm4 = arg21
                zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                zmm3[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                zmm8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm4[0].o)
                zmm1[0].o = zmm8[0].o & zmm0[0].o
                zmm4[0].o = zmm3[0].o & zmm2[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(zmm3, zmm8[0].o, 1)
                    zmm0 = _mm256_and_ps(zmm1, zmm0)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg32.32 = _mm256_maskstore_ps(zmm0, zmm1)
                    arg34.32 = _mm256_maskstore_ps(zmm0, zmm1)
                    arg36.32 = _mm256_maskstore_ps(zmm0, zmm1)
                
                zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg_300, arg44, 1)
                zmm2[0].o = arg32
                zmm3[0].o = arg33
                zmm4[0].o = arg34
                zmm5[0].o = arg35
                zmm6[0].o = arg36
                zmm7[0].o = arg37
                arg9[0].o = zx.o(0)
                arg10[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg9[0].o)
                zmm10[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg9[0].o)
                zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6[0].o, 0x28)
                int128_t arg_b00 = zmm4[0].o
                zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                int128_t arg_b10 = zmm1[0].o
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm6[0].o, 0xa8)
                int128_t arg_b20 = zmm1[0].o
                zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm10[0].o)
                int128_t arg_b30 = zmm1[0].o
                zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg9[0].o)
                zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg9[0].o)
                zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                zmm3[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm7[0].o, 0x28)
                int128_t arg_b40 = zmm5[0].o
                zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                int128_t arg_b50 = zmm1[0].o
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm7[0].o, 0xa8)
                int128_t arg_b60 = zmm1[0].o
                zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                int128_t arg_b70 = zmm1[0].o
                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm14[0].o, arg21[0].o)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm8[0].o, 1)
                i_5 = zx.q(_mm256_movemask_ps(zmm1))
                
                do
                    uint64_t rcx_55
                    uint64_t rflags_2
                    
                    if (i_5 == 0)
                        rcx_55 = 0x40
                    else
                        rcx_55, rflags_2 = _bit_scan_forward(i_5)
                    float arg_c60[0x8] = zmm0
                    zmm1[0].o = (&arg_b00)[rcx_55]
                    *(arg26 + sx.q(arg_c60[zx.q(rcx_55.d) & 7]) * 0x30 + 0x10) = zmm1[0].o
                    i_5 &= rol.q(-2, rcx_55.b)
                while (i_5 != 0)
            
            zmm6[0].o = *(arg5 + 0xc30)
            zmm7[0].o = *(arg5 + 0xc40)
            zmm8[0].o = *(arg5 + 0xc50)
            arg9[0].o = *(arg5 + 0xc60)
            zmm10[0].o = *(arg5 + 0xc70)
            arg10[0].o = *(arg5 + 0xc80)
            arg11[0].o = *(arg5 + 0xc90)
            arg12[0].o = *(arg5 + 0xca0)
            zmm14[0].o = *(arg5 + 0xcb0)
            zmm15[0].o = *(arg5 + 0xcc0)
            *(arg5 + 0xcd8)
            *(arg5 + 0xce0)
            *(arg5 + 0xce8)
            *(arg5 + 0xcf0)
            *(arg5 + 0xcf8)
            *(arg5 + 0xd00)
            *(arg5 + 0xd08)
            *(arg5 + 0xd10)
            _mm256_zeroupper()
            return i_5
        
        int64_t rax_468 = sx.q((arg4 << 3).d)
        zmm2[0].o = *(arg30 + rax_468)
        zmm3[0].o = *(arg30 + rax_468 + 0x10)
        zmm4[0].o = *(arg30 + rax_468 + 0x20)
        zmm5[0].o = *(arg30 + rax_468 + 0x30)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0xdd)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0xdd)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        int64_t r8_13 = sx.q(zmm0[0])
        int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t rbx_54 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        int64_t rdi_32 = sx.q(zmm1[0])
        int64_t rsi_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int32_t temp0_3321 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_3322 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm0[0].o = zx.o(*(arg31 + r8_13))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg31 + r10_6), 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg31 + r11_5), 2)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg31 + rbx_54), 3)
        zmm1[0].o = zx.o(*(arg31 + rdi_32))
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg31 + rsi_32), 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg31 + sx.q(temp0_3321)), 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg31 + sx.q(temp0_3322)), 3)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x88)
        arg23 = zmm2
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
        zmm2[0].o ^= zmm6[0].o
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
        zmm3[0].o ^= zmm6[0].o
        zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        
        if (_mm256_movemask_ps(zmm3) == 0)
            zmm2 = arg23
        else
            arg20 = zmm3
            arg24 = zmm5[0].o
            arg19 = zmm4[0].o
            arg_1c0 = arg4
            arg12 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            zmm3[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            zmm14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
            zmm2[0].o = zmm14[0].o ^ zmm6[0].o
            zmm10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm6[0].o)
            zmm0[0].o = zmm10[0].o ^ zmm6[0].o
            arg_e0 = zmm0
            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
            arg_c0 = zmm1
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
            arg_2e0 = zmm1[0].o
            zmm8[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
            zmm3 = _mm256_and_ps(zmm0, arg12)
            int64_t r8_14 = sx.q(zmm3[0])
            int32_t temp0_3344 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            int64_t rbx_56 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            int64_t rdi_34 = sx.q(zmm3[0])
            int32_t temp0_3348 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_3349 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_3350 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = zx.o(*(arg8 + r8_14))
            zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg8 + sx.q(temp0_3344)), 1)
            zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg8 + r10_7), 2)
            zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg8 + rbx_56), 3)
            zmm4[0].o = zx.o(*(arg8 + rdi_34))
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg8 + sx.q(temp0_3348)), 1)
            zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg8 + sx.q(temp0_3349)), 2)
            zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg8 + sx.q(temp0_3350)), 3)
            zmm1 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
            zmm6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x18)
            zmm7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x18)
            zmm6 =
                __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm6, zmm7[0].o, 1), data_1434429c0)
            zmm15 = _mm256_blendv_ps(arg14, zmm6, zmm0)
            zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1c)
            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1c)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
            arg9 = _mm256_blendv_ps(arg9, zmm3, zmm0)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm3 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm3, zmm5[0].o, 1))
            int32_t temp0_3372 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_3373 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
            int32_t rcx_63 = zmm3[0]
            int32_t temp0_3374 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            int32_t temp0_3376 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_3377 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_3378 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            arg14 = zmm15
            zmm7 = __vandps_ymmqq_ymmqq_memqq(zmm15, data_1434429e0)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 3)
            zmm6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
            arg_260 = zmm7
            zmm5 = _mm256_and_ps(zmm0, _mm256_or_ps(zmm7, _mm256_insertf128_ps(zmm5, zmm6[0].o, 1)))
            int64_t rax_478 = sx.q(zmm5[0])
            int32_t temp0_3385 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            zmm6[0].o = zx.o(*(rax_478 + &data_143442ba0))
            int64_t rax_481 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            zmm6[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm6[0].o, *(sx.q(temp0_3385) + &data_143442ba0), 1)
            int64_t rdx_58 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm6[0].o, *(rax_481 + &data_143442ba0), 2)
            int64_t rax_483 = sx.q(zmm5[0])
            zmm6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm6[0].o, *(rdx_58 + &data_143442ba0), 3)
            int32_t temp0_3392 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            zmm6[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm6[0].o, *(rax_483 + &data_143442ba0), 4)
            int64_t rax_485 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            zmm6[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm6[0].o, *(sx.q(temp0_3392) + &data_143442ba0), 5)
            int32_t temp0_3396 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm6[0].o, *(rax_485 + &data_143442ba0), 6)
            int32_t rdx_61 = zmm3[0]
            zmm3[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(sx.q(temp0_3396) + &data_143442ba0), 7)
            zmm5[0].o = __vpmovzxbd_xmmdq_xmmd(zmm3[0])
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0xe5)
            zmm3[0].o = __vpmovzxbd_xmmdq_xmmd(zmm3[0])
            arg11 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            arg_220 = zmm1[0].o
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
            arg_60 = arg9
            zmm15[0].o = arg10[0].o
            zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
            arg_2c0 = zmm2[0].o
            zmm3[0].o = zmm4[0].o & not.o(zmm2[0].o)
            zmm2[0].o = zmm6[0].o & not.o(arg_e0[0].o)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            arg_300 = arg12
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            char temp0_3409 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            zmm3[0].o = _mm256_extractf128_ps(arg77[0].o, 1)
            zmm2 = zmm1
            arg9 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442840)
            arg12[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg77[0].o, arg_c0[0].o)
            arg_140 = zmm8
            zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg77[0].o, zmm8[0].o)
            arg77[0].o = zx.o(0)
            arg_6e0 = arg77
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            
            if (temp0_3409 != 0)
                arg77[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                zmm2[0].o = zmm4[0].o ^ arg77[0].o
                zmm7[0].o = zmm6[0].o ^ arg77[0].o
                zmm2 = _mm256_and_ps(_mm256_and_ps(_mm256_insertf128_ps(zmm7, zmm2[0].o, 1), zmm0), 
                    arg11)
            
            zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_2e0)
            arg_1e0 = zmm5[0].o
            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm1 = _mm256_blendv_ps(arg18, arg9, zmm0)
            arg18 = zmm1
            arg_e0[0].o = zmm14[0].o
            zmm5[0].o = zmm14[0].o & not.o(zmm4[0].o)
            zmm1[0].o = zmm10[0].o & not.o(zmm6[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:0_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            int32_t arg_500[0x4] = zmm5[0].o
            
            if (cond:0_1)
                zmm5[0].o = zx.o(0)
            else
                zmm1 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm6, zmm4[0].o, 1))
                zmm5 = _mm256_and_ps(zmm1, arg11)
                zmm2 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm2, data_143442a00, zmm1)
            
            arg6 = arg26
            arg8 = arg13
            arg4 = arg_1c0
            arg7 = &arg_720
            arg9 = arg_60
            zmm6[0].o = zmm4[0].o
            arg10[0].o = zmm15[0].o
            zmm1 = _mm256_insertf128_ps(arg12, zmm7[0].o, 1)
            arg_40 = zmm1
            arg12 = _mm256_insertf128_ps(zmm8, zmm3[0].o, 1)
            zmm1[0].o = zx.o(*(sx.q(rdx_61) + &data_143442b80))
            zmm1[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(sx.q(temp0_3376) + &data_143442b80), 1)
            zmm1[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(sx.q(temp0_3377) + &data_143442b80), 2)
            zmm1[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(sx.q(temp0_3378) + &data_143442b80), 3)
            zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm4[0].o = arg_e0[0].o
            zmm1[0].o = zmm4[0].o & not.o(zmm1[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm3[0].o = zx.o(*(sx.q(rcx_63) + &data_143442b80))
            zmm3[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(sx.q(temp0_3372) + &data_143442b80), 1)
            zmm3[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(sx.q(temp0_3373) + &data_143442b80), 2)
            zmm3[0].o =
                __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(sx.q(temp0_3374) + &data_143442b80), 3)
            zmm3[0].o = zmm10[0].o & not.o(zmm3[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm2 = _mm256_blendv_ps(arg44.32, zmm1, zmm0)
            arg44.32 = zmm2
            zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm2[0].o = data_142fc95e0
            zmm3[0].o = zmm2[0].o
            zmm2[0].o = zmm4[0].o & not.o(zmm2[0].o)
            zmm1[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = zmm10[0].o & not.o(zmm3[0].o)
            zmm2[0].o = __vpmaddwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm14 = _mm256_blendv_ps(arg22, zmm1, zmm0)
            zmm0[0].o = data_142d3f5b0
            zmm2[0].o = zmm0[0].o
            zmm0 = arg18
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = zmm4[0].o & not.o(zmm2[0].o)
            zmm1[0].o = zmm10[0].o & not.o(zmm1[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:2_1 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0
            arg_80 = zmm6[0].o
            arg_20 = arg12
            arg22 = zmm14
            float arg_620[0x8]
            int32_t arg_7e0[0x4]
            
            if (cond:2_1)
                zmm8[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                arg_4c0 = zmm0
                zmm6 = arg_c0
                zmm2[0].o = arg_2e0
                zmm3 = arg_140
                zmm1[0].o = arg_1e0
                zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
            else
                zmm2 = __vandps_ymmqq_ymmqq_memqq(arg14, data_142fc9540)
                zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm7[0].o = zx.o(0)
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                zmm5[0].o = zmm3[0].o & zmm1[0].o
                zmm3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm3[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0)
                    zmm3[0].o = zx.o(0)
                    arg_a0 = zmm3
                    zmm8[0].o = zx.o(0)
                    zmm3[0].o = zx.o(0)
                    arg_180 = zmm3
                    zmm6[0].o = zx.o(0)
                    arg12[0].o = zx.o(0)
                else
                    zmm3[0].o = zx.o(0)
                    zmm6[0].o = *(arg5 + 0xd50)
                    zmm7[0].o = zx.o(0)
                    
                    if (zmm7[0].o f>= zmm6[0].d)
                        zmm6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                        arg_a0 = zmm6
                        zmm8[0].o = zx.o(0)
                        zmm6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                        arg_180 = zmm6
                        zmm10[0].o = zx.o(0)
                        zmm7[0].o = zx.o(0)
                    else
                        bool cond:6_1 = zmm6[0].o f>= 1f
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                        zmm6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                        zmm7[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm7[0].o, arg18[0].o)
                        zmm6 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                        
                        if (cond:6_1)
                            zmm7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                            zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                            zmm8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                            zmm7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                            zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                            zmm7 = _mm256_insertf128_ps(zmm8, zmm7[0].o, 1)
                            zmm10 = _mm256_and_ps(zmm7, zmm6)
                            zmm8 = zmm10
                            arg_180 = zmm10
                            arg_a0 = zmm10
                            zmm7[0].o = zx.o(0)
                        else
                            arg9 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm6), arg63)
                            arg10 = _mm256_round_ps(arg9, 9)
                            zmm3 = _mm256_cvttps_epi32(arg10)
                            zmm8[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            arg11[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                            zmm14[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                            zmm3 = _mm256_insertf128_ps(zmm8, zmm14[0].o, 1)
                            zmm7[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                            zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                            arg12[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                            zmm7[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm7[0].o = __vpslld_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                            zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm7[0].o, 0x1f)
                            zmm10 = _mm256_insertf128_ps(arg12, zmm7[0].o, 1)
                            zmm3 = _mm256_and_ps(zmm10, zmm3)
                            arg_a0 = zmm3
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            
                            if (*(arg5 + 0xd58) != 1)
                                zmm3 = _mm256_sub_ps(arg9, arg10)
                            
                            zmm7[0].o &= zmm14[0].o
                            arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            arg9[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg10[0].o)
                            zmm7[0].o = arg12[0].o & zmm8[0].o
                            zmm7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg10[0].o)
                            zmm6[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                            zmm7[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                            zmm6 = _mm256_insertf128_ps(zmm6, zmm7[0].o, 1)
                            zmm10 = _mm256_and_ps(zmm10, zmm6)
                            zmm8 = arg_a0
                            arg_180 = zmm10
                            zmm7[0].o = zx.o(0)
                            arg10[0].o = data_142fc95c0
                            arg9 = arg_60
                    
                    zmm6[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                    zmm6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm6[0].o, 0x1f)
                    zmm6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm6[0].o, 0x1f)
                    zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                    zmm5 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                    arg12 = _mm256_and_ps(zmm5, zmm3)
                    zmm6 = zmm10
                
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                zmm3[0].o = zmm4[0].o ^ zmm5[0].o
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                zmm2[0].o ^= zmm5[0].o
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm5[0].o = zmm1[0].o & zmm2[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg_4c0 = zmm6
                    arg_6e0 = arg12
                    zmm6 = arg_c0
                    zmm2[0].o = arg_2e0
                    zmm3 = arg_140
                    zmm1[0].o = arg_1e0
                    arg12 = arg_20
                    zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                else
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                    zmm10[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm10[0].o, 0x1f)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2[0].o = data_1434422d0
                    zmm3[0].o = zmm2[0].o
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm4 = arg18
                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                    arg9 =
                        __vorps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm3, zmm2[0].o, 1), arg76)
                    zmm2 = _mm256_and_ps(arg9, zmm1)
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        zmm3[0].o = zx.o(0)
                        zmm8 = _mm256_blendv_ps(arg_a0, zmm3, zmm2)
                        zmm6 = _mm256_blendv_ps(arg_180, zmm3, zmm2)
                        arg_a0 = zmm8
                        arg_180 = zmm6
                    
                    arg_320.32 = arg9
                    arg9 = _mm256_andnot_ps(arg9, zmm1)
                    int32_t temp0_3533 = _mm256_movemask_ps(arg9)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    
                    if (temp0_3533 == 0)
                        arg_4c0 = zmm6
                        arg7 = &arg_720
                        arg9 = arg_60
                        zmm6 = arg_c0
                        zmm2[0].o = arg_2e0
                        zmm3 = arg_140
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                    else
                        arg_240 = zmm5[0].o
                        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                        zmm15 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm2[0].o = *(arg5 + 0xd50)
                        
                        if (zmm2[0].o f>= 1f)
                            zmm8 = _mm256_blendv_ps(arg_a0, zmm15, arg9)
                            zmm0 = _mm256_blendv_ps(arg_180, zmm15, arg9)
                            arg_4c0 = zmm0
                            arg7 = &arg_720
                            arg9 = arg_60
                            zmm6 = arg_c0
                            zmm2[0].o = arg_2e0
                            zmm3 = arg_140
                            zmm5[0].o = arg_240
                            zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                        else
                            arg_480.32 = zmm10
                            arg_6e0 = arg12
                            zmm1[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm14[0])
                            zmm8 = zmm4
                            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm14[0].o, 0x4e)
                            zmm6 = arg44.32
                            zmm5[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm8[0].o)
                            zmm6[0].o = _mm256_extractf128_ps(arg_20[0].o, 1)
                            zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_20[0].o, zmm3[0].o)
                            zmm4 = arg_40
                            zmm6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg_20[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm1[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            zmm4[0].o = data_143442a20
                            zmm1[0].o = zmm4[0].o
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm3[0].o)
                            zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm2[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm4[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_20[0].o, zmm1[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm2 = data_143442a40
                            arg10 = _mm256_and_ps(zmm0, zmm2)
                            arg12 = _mm256_and_ps(zmm1, zmm2)
                            zmm0 = _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                _mm256_cvtepi32_ps(zmm15), arg63))
                            zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                            zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm15[0].o)
                            arg_1a0 = zmm15
                            zmm6[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                            zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                            arg11 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm0[0].o = zx.o(0)
                            zmm0 = _mm256_cmp_ps(zmm0, zmm0, 0xf)
                            arg_340 = zmm0
                            arg_120[0].o = zmm6[0].o
                            arg_4c0 = arg11
                            
                            if (*(arg5 + 0xd40) s< 0x100)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm8[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm15[0].o = zmm2[0].o
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                                char r14_6 = temp0_3533.b
                                zmm2[0].o = arg61
                                zmm5 = arg62
                                
                                if ((r14_6 & 1) != 0)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 0)
                                
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm8[0].q)
                                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm8[0].o, 0x4e)
                                
                                if ((r14_6 & 2) != 0)
                                    uint32_t rax_497 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_497, 1)
                                
                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                arg_100[0].o = __vextractf128_memdq_ymmdq_immb(arg10[0].o, 1)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                                
                                if ((r14_6 & 4) == 0)
                                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_100[0].o)
                                    
                                    if ((r14_6 & 8) != 0)
                                        goto label_1401ba80b
                                    
                                    goto label_1401ba07d
                                
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm4[0].q), 2)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_100[0].o)
                                
                                if ((r14_6 & 8) != 0)
                                label_1401ba80b:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    uint32_t rax_531 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_531, 3)
                                    zmm0 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                                    
                                    if ((r14_6 & 0x10) == 0)
                                        goto label_1401ba08d
                                    
                                    goto label_1401ba837
                                
                            label_1401ba07d:
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                                
                                if ((r14_6 & 0x10) != 0)
                                label_1401ba837:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 4)
                                    
                                    if ((r14_6 & 0x20) != 0)
                                    label_1401ba84c:
                                        uint32_t rax_535 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_535, 5)
                                        
                                        if ((r14_6 & 0x40) == 0)
                                            goto label_1401ba0a4
                                        
                                        goto label_1401ba85e
                                else
                                label_1401ba08d:
                                    
                                    if ((r14_6 & 0x20) != 0)
                                        goto label_1401ba84c
                                
                                if ((r14_6 & 0x40) != 0)
                                label_1401ba85e:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    arg_380 = arg10
                                    
                                    if (temp0_3533.b s< 0)
                                    label_1401ba883:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint32_t rax_539 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_539, 7)
                                else
                                label_1401ba0a4:
                                    arg_380 = arg10
                                    
                                    if (temp0_3533.b s< 0)
                                        goto label_1401ba883
                                
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                                zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                zmm0 = zmm5
                                zmm14[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm14[0].o)
                                zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                                zmm4[0].o ^= zmm6[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                                zmm5[0].o ^= zmm6[0].o
                                zmm5 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                zmm4 = _mm256_and_ps(arg9, zmm5)
                                bool cond:75_1 = _mm256_movemask_ps(zmm4) == 0
                                arg61 = zmm2[0].o
                                arg_620[0].o = zmm8[0].o
                                arg_7e0.32 = zmm5
                                
                                if (cond:75_1)
                                    zmm10 = zmm0
                                    arg10 = arg_380
                                else
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm14[0].o)
                                    zmm3[0].o ^= zmm6[0].o
                                    zmm10 = zmm0
                                    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    zmm1[0].o ^= zmm6[0].o
                                    zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                                    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                    arg10 = arg11
                                    arg11 = _mm256_blendv_ps(arg11, arg_1a0, zmm1)
                                    zmm8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm3[0].o)
                                    zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                                    zmm5[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_memdq(zmm8[0].o, arg_120[0].o)
                                    zmm5[0].o ^= zmm3[0].o
                                    zmm6[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg_1a0[0].o)
                                    zmm6[0].o ^= zmm3[0].o
                                    zmm5 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                                    zmm1 = _mm256_and_ps(zmm1, zmm5)
                                    zmm6 = _mm256_and_ps(arg9, zmm1)
                                    int32_t i_6 = _mm256_movemask_ps(zmm6)
                                    
                                    if (i_6 == 0)
                                        arg10 = arg_380
                                    else
                                        zmm3 = _mm256_insertf128_ps(zmm4, zmm8[0].o, 1)
                                        zmm5 = arg10
                                        arg10 = arg_380
                                        
                                        do
                                            zmm4 = zmm3
                                            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                            zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
                                            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                            zmm8[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                            zmm7[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm7[0].o)
                                            zmm3[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm3[0].o)
                                            zmm3 = _mm256_insertf128_ps(zmm3, zmm7[0].o, 1)
                                            char temp0_3654 = _mm256_movemask_ps(zmm6)
                                            
                                            if ((temp0_3654 & 1) == 0)
                                                zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm8[0].q)
                                                zmm7[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm8[0].o, 0x4e)
                                                
                                                if ((temp0_3654 & 2) != 0)
                                                    goto label_1401ba2ba
                                                
                                                goto label_1401ba226
                                            
                                            zmm2[0].o = arg15[0].o
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm3[0].q), 0)
                                            arg15[0].o = zmm2[0].o
                                            zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm8[0].q)
                                            zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm8[0].o, 0x4e)
                                            
                                            if ((temp0_3654 & 2) != 0)
                                            label_1401ba2ba:
                                                uint32_t rax_506 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                zmm2[0].o = arg15[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_506, 1)
                                                arg15[0].o = zmm2[0].o
                                                zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, 
                                                    zmm6[0].o)
                                                
                                                if ((temp0_3654 & 4) == 0)
                                                    goto label_1401ba239
                                                
                                                goto label_1401ba2e7
                                            
                                        label_1401ba226:
                                            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                            zmm6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm6[0].o)
                                            
                                            if ((temp0_3654 & 4) == 0)
                                            label_1401ba239:
                                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, 
                                                    arg_100[0].o)
                                                
                                                if ((temp0_3654 & 8) != 0)
                                                    goto label_1401ba31f
                                                
                                                goto label_1401ba24c
                                            
                                        label_1401ba2e7:
                                            zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                            zmm2[0].o = arg15[0].o
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm2[0]), 2)
                                            arg15[0].o = zmm2[0].o
                                            zmm7[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, arg_100[0].o)
                                            
                                            if ((temp0_3654 & 8) != 0)
                                            label_1401ba31f:
                                                zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                uint32_t rax_510 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                zmm2[0].o = arg15[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_510, 3)
                                                arg15[0].o = zmm2[0].o
                                                zmm3 = _mm256_insertf128_ps(zmm6, zmm7[0].o, 1)
                                                
                                                if ((temp0_3654 & 0x10) == 0)
                                                    goto label_1401ba25c
                                                
                                                goto label_1401ba35d
                                            
                                        label_1401ba24c:
                                            zmm3 = _mm256_insertf128_ps(zmm6, zmm7[0].o, 1)
                                            uint32_t rax_514
                                            
                                            if ((temp0_3654 & 0x10) != 0)
                                            label_1401ba35d:
                                                zmm6[0].o = arg15[0].o
                                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm6[0].o, zx.d(*zmm3[0].q), 4)
                                                zmm7[0].o = zx.o(0)
                                                
                                                if ((temp0_3654 & 0x20) != 0)
                                                    rax_514 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                    zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm6[0].o, rax_514, 5)
                                            else
                                            label_1401ba25c:
                                                zmm7[0].o = zx.o(0)
                                                zmm6[0].o = arg15[0].o
                                                
                                                if ((temp0_3654 & 0x20) != 0)
                                                    rax_514 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                    zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm6[0].o, rax_514, 5)
                                            
                                            if ((temp0_3654 & 0x40) != 0)
                                                zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm6[0].o, zx.d(*zmm2[0]), 6)
                                                
                                                if (temp0_3654 s< 0)
                                                label_1401ba1bc:
                                                    zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                    uint32_t rax_502 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    zmm6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm6[0].o, rax_502, 7)
                                            else if (temp0_3654 s< 0)
                                                goto label_1401ba1bc
                                            
                                            arg15[0].o = zmm6[0].o
                                            zmm2[0].o = zmm6[0].o & data_142fc92e0
                                            zmm3[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                            zmm3[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm14[0].o)
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm10[0].o)
                                            zmm3 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, zmm3[0].o, 1), zmm1)
                                            zmm6[0].o = zx.o(0)
                                            zmm2 = _mm256_and_ps(zmm3, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm2) != i_6)
                                                zmm6 = _mm256_xor_ps(zmm3, zmm1)
                                            
                                            arg11 = _mm256_blendv_ps(arg11, zmm5, zmm3)
                                            zmm5[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                            zmm1[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm5[0].o)
                                            zmm2[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                                            zmm3 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm1[0].o, 
                                                arg_120[0].o)
                                            zmm1[0].o ^= zmm5[0].o
                                            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, 
                                                arg_1a0[0].o)
                                            zmm2[0].o ^= zmm5[0].o
                                            zmm1 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, zmm1[0].o, 1), zmm6)
                                            zmm6 = _mm256_and_ps(zmm1, arg9)
                                            i_6 = _mm256_movemask_ps(zmm6)
                                            zmm5 = zmm4
                                        while (i_6 != 0)
                                
                                zmm0 = arg_7e0.32
                                zmm1 = _mm256_andnot_ps(zmm0, arg9)
                                
                                if (_mm256_movemask_ps(zmm1) != 0)
                                    zmm2 = __vxorps_ymmqq_ymmqq_memqq(zmm0, arg_340)
                                    arg11 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg11, 
                                        data_142fc9440, zmm2)
                                    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm3[0].o, arg_620[0].o)
                                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm3[0].o, arg_4c0[0].o)
                                    zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
                                    zmm4 = _mm256_and_ps(_mm256_insertf128_ps(zmm5, zmm4[0].o, 1), 
                                        zmm2)
                                    zmm6 = _mm256_and_ps(zmm4, arg9)
                                    int32_t i_7 = _mm256_movemask_ps(zmm6)
                                    
                                    if (i_7 != 0)
                                        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                        
                                        do
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                            zmm3[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm3[0].o)
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                                            zmm3 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                                            char temp0_3840 = _mm256_movemask_ps(zmm6)
                                            uint32_t rax_562
                                            
                                            if ((temp0_3840 & 1) != 0)
                                                zmm2[0].o = arg55
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*zmm3[0].q), 0)
                                                zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                                zmm7[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                                
                                                if ((temp0_3840 & 2) != 0)
                                                    rax_562 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_562, 1)
                                            else
                                                zmm2[0].o = arg55
                                                zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                                                zmm7[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                                                
                                                if ((temp0_3840 & 2) != 0)
                                                    rax_562 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_562, 1)
                                            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                            zmm6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm6[0].o)
                                            
                                            if ((temp0_3840 & 4) == 0)
                                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, 
                                                    arg_100[0].o)
                                                
                                                if ((temp0_3840 & 8) != 0)
                                                    goto label_1401ba9ee
                                                
                                                goto label_1401bab4a
                                            
                                            zmm0[0].o = zmm2[0].o
                                            zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                            zmm2[0].o = zmm0[0].o
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, zx.d(*zmm2[0]), 2)
                                            zmm7[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, arg_100[0].o)
                                            
                                            if ((temp0_3840 & 8) != 0)
                                            label_1401ba9ee:
                                                zmm0[0].o = zmm2[0].o
                                                zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                int64_t rax_549 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm2[0].o = zmm0[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm0[0].o, zx.d(*rax_549), 3)
                                                zmm3 = _mm256_insertf128_ps(zmm6, zmm7[0].o, 1)
                                                
                                                if ((temp0_3840 & 0x10) == 0)
                                                    goto label_1401bab5a
                                                
                                                goto label_1401baa22
                                            
                                        label_1401bab4a:
                                            zmm3 = _mm256_insertf128_ps(zmm6, zmm7[0].o, 1)
                                            
                                            if ((temp0_3840 & 0x10) == 0)
                                            label_1401bab5a:
                                                zmm7[0].o = zx.o(0)
                                                
                                                if ((temp0_3840 & 0x20) != 0)
                                                    goto label_1401baa3b
                                                
                                                goto label_1401bab68
                                            
                                        label_1401baa22:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm3[0].q), 4)
                                            zmm7[0].o = zx.o(0)
                                            
                                            if ((temp0_3840 & 0x20) != 0)
                                            label_1401baa3b:
                                                uint32_t rax_554 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_554, 5)
                                                
                                                if ((temp0_3840 & 0x40) == 0)
                                                    goto label_1401bab72
                                                
                                                goto label_1401baa4d
                                            
                                        label_1401bab68:
                                            
                                            if ((temp0_3840 & 0x40) != 0)
                                            label_1401baa4d:
                                                zmm0[0].o = zmm2[0].o
                                                zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                zmm2[0].o = zmm0[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm0[0].o, zx.d(*zmm2[0]), 6)
                                                
                                                if (temp0_3840 s< 0)
                                                label_1401baa71:
                                                    zmm0[0].o = zmm2[0].o
                                                    zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                    int64_t rax_557 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                    zmm2[0].o = zmm0[0].o
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm0[0].o, zx.d(*rax_557), 7)
                                            else
                                            label_1401bab72:
                                                
                                                if (temp0_3840 s< 0)
                                                    goto label_1401baa71
                                            
                                            arg55 = zmm2[0].o
                                            zmm2[0].o &= data_142fc92e0
                                            zmm3[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                            zmm3[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm14[0].o)
                                            zmm6[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                                            zmm3[0].o ^= zmm6[0].o
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm10[0].o)
                                            zmm2[0].o ^= zmm6[0].o
                                            zmm6 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, zmm3[0].o, 1), zmm4)
                                            zmm3[0].o = zx.o(0)
                                            zmm2 = _mm256_and_ps(zmm6, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm2) != i_7)
                                                zmm3 = _mm256_xor_ps(zmm6, zmm4)
                                            
                                            arg11 = _mm256_blendv_ps(arg11, zmm1, zmm6)
                                            zmm4[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                            zmm2[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                                            zmm4[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                            zmm1 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                            zmm4[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
                                            zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                            zmm4 = _mm256_and_ps(zmm2, zmm3)
                                            zmm6 = _mm256_and_ps(zmm4, arg9)
                                            i_7 = _mm256_movemask_ps(zmm6)
                                        while (i_7 != 0)
                                
                                zmm14 = arg22
                                zmm10 = arg_480.32
                                zmm6 = arg_180
                                zmm0 = arg_a0
                                zmm8 = _mm256_blendv_ps(zmm0, arg11, arg9)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm8[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm8[0].o, 0x4e)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm2[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                uint32_t rax_567
                                
                                if ((r14_6 & 1) != 0)
                                    zmm2[0].o = arg38
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 0)
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((r14_6 & 2) != 0)
                                        rax_567 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_567, 1)
                                else
                                    zmm2[0].o = arg38
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                    zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                    
                                    if ((r14_6 & 2) != 0)
                                        rax_567 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_567, 1)
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                                
                                if ((r14_6 & 4) == 0)
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg_100[0].o)
                                    
                                    if ((r14_6 & 8) != 0)
                                        goto label_1401baebc
                                    
                                    goto label_1401bacce
                                
                                zmm5[0].o = zmm2[0].o
                                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm2[0].o = zmm5[0].o
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, zx.d(*zmm2[0]), 2)
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg_100[0].o)
                                
                                if ((r14_6 & 8) != 0)
                                label_1401baebc:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    uint32_t rax_578 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_578, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                    
                                    if ((r14_6 & 0x10) == 0)
                                        goto label_1401bacde
                                    
                                    goto label_1401baee8
                                
                            label_1401bacce:
                                zmm1 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                                
                                if ((r14_6 & 0x10) == 0)
                                label_1401bacde:
                                    zmm4[0].o = arg48
                                    
                                    if ((r14_6 & 0x20) != 0)
                                        goto label_1401baf06
                                    
                                    goto label_1401bacf1
                                
                            label_1401baee8:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                zmm4[0].o = arg48
                                
                                if ((r14_6 & 0x20) != 0)
                                label_1401baf06:
                                    uint32_t rax_582 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_582, 5)
                                    
                                    if ((r14_6 & 0x40) == 0)
                                        goto label_1401bacfb
                                    
                                    goto label_1401baf18
                                
                            label_1401bacf1:
                                
                                if ((r14_6 & 0x40) != 0)
                                label_1401baf18:
                                    zmm3[0].o = zmm2[0].o
                                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm2[0].o = zmm3[0].o
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm2[0]), 6)
                                    
                                    if (temp0_3533.b s< 0)
                                    label_1401baf3c:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        uint32_t rax_586 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_586, 7)
                                else
                                label_1401bacfb:
                                    
                                    if (temp0_3533.b s< 0)
                                        goto label_1401baf3c
                                
                                arg38 = zmm2[0].o
                                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm1[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm3 = _mm256_blendv_ps(zmm6, zmm0, arg9)
                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg_120[0].o)
                                zmm2 = arg_1a0
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                                zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg9)
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    zmm3 = _mm256_blendv_ps(zmm3, zmm2, zmm0)
                                
                                arg9 = arg_60
                                zmm5[0].o = arg_240
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm2[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                arg_4c0 = zmm3
                                
                                if ((r14_6 & 1) != 0)
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm0[0].q), 0)
                                
                                arg12[0].o = data_142fc95c0
                                zmm6[0].o = arg12[0].o
                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                
                                if ((r14_6 & 2) != 0)
                                    uint32_t rax_572 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_572, 1)
                                
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                                
                                if ((r14_6 & 4) != 0)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm2[0]), 2)
                                
                                arg10[0].o = zmm6[0].o
                                zmm6 = arg_c0
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_100[0].o)
                                
                                if ((r14_6 & 8) == 0)
                                    zmm0 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                    
                                    if ((r14_6 & 0x10) != 0)
                                        goto label_1401baf81
                                    
                                    goto label_1401bae24
                                
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                uint32_t rax_588 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_588, 3)
                                zmm0 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                
                                if ((r14_6 & 0x10) != 0)
                                label_1401baf81:
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm0[0].q), 4)
                                    zmm1[0].o = arg38
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if ((r14_6 & 0x20) == 0)
                                        goto label_1401bae3f
                                    
                                    goto label_1401bafa7
                                
                            label_1401bae24:
                                zmm1[0].o = arg38
                                zmm1[0].o &= data_142fc92e0
                                
                                if ((r14_6 & 0x20) == 0)
                                label_1401bae3f:
                                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                    
                                    if ((r14_6 & 0x40) != 0)
                                        goto label_1401bafbe
                                    
                                    goto label_1401bae4e
                                
                            label_1401bafa7:
                                uint32_t rax_592 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_592, 5)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                
                                if ((r14_6 & 0x40) == 0)
                                label_1401bae4e:
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                                    
                                    if (temp0_3533.b s< 0)
                                    label_1401bafde:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        uint32_t rax_596 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rax_596, 7)
                                else
                                label_1401bafbe:
                                    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm3[0].q), 6)
                                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                                    
                                    if (temp0_3533.b s< 0)
                                        goto label_1401bafde
                                
                                arg7 = &arg_720
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                                arg48 = zmm4[0].o
                                zmm1[0].o = zmm4[0].o & data_142fc92e0
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                            else
                                zmm15[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm15[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                arg_20[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_20[0].o, zmm3[0].o)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                                char rdi_37 = temp0_3533.b
                                int64_t rax_517
                                
                                if ((rdi_37 & 1) != 0)
                                    zmm0[0].o = arg50
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 0)
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                    
                                    if ((rdi_37 & 2) != 0)
                                        rax_517 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_517, 1)
                                else
                                    zmm0[0].o = arg50
                                    zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                    
                                    if ((rdi_37 & 2) != 0)
                                        rax_517 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_517, 1)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                zmm8[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
                                
                                if ((rdi_37 & 4) == 0)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                    
                                    if ((rdi_37 & 8) != 0)
                                        goto label_1401ba8ba
                                    
                                    goto label_1401ba47f
                                
                                zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0].q, 2)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                
                                if ((rdi_37 & 8) != 0)
                                label_1401ba8ba:
                                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    int64_t rax_541 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_541, 3)
                                    zmm1 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                    
                                    if ((rdi_37 & 0x10) == 0)
                                        goto label_1401ba48f
                                    
                                    goto label_1401ba8e0
                                
                            label_1401ba47f:
                                zmm1 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                
                                if ((rdi_37 & 0x10) == 0)
                                label_1401ba48f:
                                    
                                    if ((rdi_37 & 0x20) != 0)
                                        goto label_1401ba8ef
                                    
                                    goto label_1401ba499
                                
                            label_1401ba8e0:
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                                
                                if ((rdi_37 & 0x20) != 0)
                                label_1401ba8ef:
                                    int64_t rax_543 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_543, 5)
                                    
                                    if ((rdi_37 & 0x40) == 0)
                                        goto label_1401ba4a3
                                    
                                    goto label_1401ba904
                                
                            label_1401ba499:
                                
                                if ((rdi_37 & 0x40) != 0)
                                label_1401ba904:
                                    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0], 6)
                                    
                                    if (temp0_3533.b s< 0)
                                    label_1401ba91d:
                                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                        int64_t rax_545 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_545, 7)
                                else
                                label_1401ba4a3:
                                    
                                    if (temp0_3533.b s< 0)
                                        goto label_1401ba91d
                                
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                                zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                                zmm1[0].o = _mm256_extractf128_ps(arg62[0].o, 1)
                                zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                                zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                                zmm4[0].o ^= zmm7[0].o
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg62[0].o)
                                zmm5[0].o ^= zmm7[0].o
                                zmm5 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                zmm4 = _mm256_and_ps(arg9, zmm5)
                                bool cond:76_1 = _mm256_movemask_ps(zmm4) == 0
                                arg50 = zmm0[0].o
                                arg_7e0 = zmm15[0].o
                                arg_100 = zmm5
                                
                                if (not(cond:76_1))
                                    arg_380 = arg10
                                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                                    zmm3[0].o ^= zmm7[0].o
                                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg62[0].o)
                                    zmm2[0].o ^= zmm7[0].o
                                    zmm4 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                    arg10 = arg11
                                    zmm5[0].o = zmm6[0].o
                                    zmm6 = arg_1a0
                                    arg11 = _mm256_blendv_ps(arg11, zmm6, zmm4)
                                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm0[0].o)
                                    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                                    zmm5[0].o ^= zmm0[0].o
                                    zmm6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                                    zmm6[0].o ^= zmm0[0].o
                                    zmm5 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                                    zmm15 = _mm256_and_ps(zmm4, zmm5)
                                    zmm7 = _mm256_and_ps(arg9, zmm15)
                                    int32_t i_8 = _mm256_movemask_ps(zmm7)
                                    
                                    if (i_8 == 0)
                                        arg10 = arg_380
                                    else
                                        zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                        zmm5 = arg10
                                        arg10 = arg_380
                                        
                                        do
                                            zmm4 = zmm3
                                            zmm6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                            zmm2[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                                            zmm3[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                                            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                                            zmm3[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg_20[0].o, zmm3[0].o)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                            zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                                            char temp0_3742 = _mm256_movemask_ps(zmm7)
                                            
                                            if ((temp0_3742 & 1) == 0)
                                                zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                                zmm2[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                                
                                                if ((temp0_3742 & 2) != 0)
                                                    goto label_1401ba68b
                                                
                                                goto label_1401ba617
                                            
                                            zmm0[0].o = arg21[0].o
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm3[0].q, 0)
                                            arg21[0].o = zmm0[0].o
                                            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                            
                                            if ((temp0_3742 & 2) != 0)
                                            label_1401ba68b:
                                                int64_t rax_522 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                                zmm0[0].o = arg21[0].o
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_522, 1)
                                                arg21[0].o = zmm0[0].o
                                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, 
                                                    zmm7[0].o)
                                                
                                                if ((temp0_3742 & 4) == 0)
                                                    goto label_1401ba629
                                                
                                                goto label_1401ba6ba
                                            
                                        label_1401ba617:
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                            zmm7[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm7[0].o)
                                            
                                            if ((temp0_3742 & 4) == 0)
                                            label_1401ba629:
                                                zmm2[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                                
                                                if ((temp0_3742 & 8) != 0)
                                                    goto label_1401ba6e9
                                                
                                                goto label_1401ba636
                                            
                                        label_1401ba6ba:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                            zmm0[0].o = arg21[0].o
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm0[0].q, 2)
                                            arg21[0].o = zmm0[0].o
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                            
                                            if ((temp0_3742 & 8) != 0)
                                            label_1401ba6e9:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                int64_t rax_524 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm0[0].o = arg21[0].o
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_524, 3)
                                                arg21[0].o = zmm0[0].o
                                                zmm3 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                                                
                                                if ((temp0_3742 & 0x10) == 0)
                                                    goto label_1401ba645
                                                
                                                goto label_1401ba720
                                            
                                        label_1401ba636:
                                            zmm3 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                                            uint16_t* rax_526
                                            
                                            if ((temp0_3742 & 0x10) != 0)
                                            label_1401ba720:
                                                zmm7[0].o = arg21[0].o
                                                zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm7[0].o, *zmm3[0].q, 4)
                                                zmm2[0].o = zx.o(0)
                                                
                                                if ((temp0_3742 & 0x20) != 0)
                                                    rax_526 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                                    zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm7[0].o, *rax_526, 5)
                                            else
                                            label_1401ba645:
                                                zmm2[0].o = zx.o(0)
                                                zmm7[0].o = arg21[0].o
                                                
                                                if ((temp0_3742 & 0x20) != 0)
                                                    rax_526 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                                    zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm7[0].o, *rax_526, 5)
                                            
                                            if ((temp0_3742 & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm7[0].o, *zmm0[0].q, 6)
                                                
                                                if (temp0_3742 s< 0)
                                                label_1401ba5b8:
                                                    zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                    uint16_t* rax_520 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    zmm7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm7[0].o, *rax_520, 7)
                                            else if (temp0_3742 s< 0)
                                                goto label_1401ba5b8
                                            
                                            zmm0[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
                                            arg21[0].o = zmm7[0].o
                                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm7[0].q)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg62[0].o)
                                            zmm3 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, zmm0[0].o, 1), zmm15)
                                            zmm2[0].o = zx.o(0)
                                            zmm0 = _mm256_and_ps(zmm3, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm0) != i_8)
                                                zmm2 = _mm256_xor_ps(zmm3, zmm15)
                                            
                                            arg11 = _mm256_blendv_ps(arg11, zmm5, zmm3)
                                            zmm7[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                                            zmm0[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm7[0].o)
                                            zmm5[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
                                            zmm3 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, 
                                                arg_120[0].o)
                                            zmm0[0].o ^= zmm7[0].o
                                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, 
                                                arg_1a0[0].o)
                                            zmm5[0].o ^= zmm7[0].o
                                            zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                                            zmm15 = _mm256_and_ps(zmm0, zmm2)
                                            zmm7 = _mm256_and_ps(zmm15, arg9)
                                            i_8 = _mm256_movemask_ps(zmm7)
                                            zmm5 = zmm4
                                        while (i_8 != 0)
                                
                                zmm0 = arg_100
                                zmm2 = _mm256_andnot_ps(zmm0, arg9)
                                
                                if (_mm256_movemask_ps(zmm2) == 0)
                                    zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                                else
                                    zmm0 = __vxorps_ymmqq_ymmqq_memqq(zmm0, arg_340)
                                    arg11 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg11, 
                                        data_142fc9440, zmm0)
                                    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm3[0].o, arg_7e0)
                                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm3[0].o, arg_4c0[0].o)
                                    zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                                    zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
                                    zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                                    zmm15 = _mm256_and_ps(zmm4, zmm0)
                                    zmm6 = _mm256_and_ps(zmm15, arg9)
                                    int32_t i_9 = _mm256_movemask_ps(zmm6)
                                    
                                    if (i_9 != 0)
                                        zmm4 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                                        
                                        do
                                            zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                            zmm2[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                            zmm0[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg_20[0].o, zmm0[0].o)
                                            zmm3[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm3[0].o)
                                            zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                            char temp0_3976 = _mm256_movemask_ps(zmm6)
                                            
                                            if ((temp0_3976 & 1) == 0)
                                                zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                                zmm2[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                                
                                                if ((temp0_3976 & 2) != 0)
                                                    goto label_1401bb16b
                                                
                                                goto label_1401bb0f3
                                            
                                            zmm0[0].o = arg17[0].o
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm3[0].q, 0)
                                            arg17[0].o = zmm0[0].o
                                            zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                            
                                            if ((temp0_3976 & 2) != 0)
                                            label_1401bb16b:
                                                int64_t rax_601 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                                zmm0[0].o = arg17[0].o
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_601, 1)
                                                arg17[0].o = zmm0[0].o
                                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                                zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, 
                                                    zmm6[0].o)
                                                
                                                if ((temp0_3976 & 4) == 0)
                                                    goto label_1401bb105
                                                
                                                goto label_1401bb19a
                                            
                                        label_1401bb0f3:
                                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                            zmm6[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm6[0].o)
                                            
                                            if ((temp0_3976 & 4) == 0)
                                            label_1401bb105:
                                                zmm2[0].o =
                                                    __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                                
                                                if ((temp0_3976 & 8) != 0)
                                                    goto label_1401bb1c9
                                                
                                                goto label_1401bb112
                                            
                                        label_1401bb19a:
                                            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                            zmm0[0].o = arg17[0].o
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                                *zmm0[0].q, 2)
                                            arg17[0].o = zmm0[0].o
                                            zmm2[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                            
                                            if ((temp0_3976 & 8) != 0)
                                            label_1401bb1c9:
                                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                int64_t rax_603 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm0[0].o = arg17[0].o
                                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm0[0].o, *rax_603, 3)
                                                arg17[0].o = zmm0[0].o
                                                zmm3 = _mm256_insertf128_ps(zmm6, zmm2[0].o, 1)
                                                
                                                if ((temp0_3976 & 0x10) == 0)
                                                    goto label_1401bb121
                                                
                                                goto label_1401bb200
                                            
                                        label_1401bb112:
                                            zmm3 = _mm256_insertf128_ps(zmm6, zmm2[0].o, 1)
                                            int64_t rax_605
                                            
                                            if ((temp0_3976 & 0x10) != 0)
                                            label_1401bb200:
                                                zmm2[0].o = arg17[0].o
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *zmm3[0].q, 4)
                                                
                                                if ((temp0_3976 & 0x20) != 0)
                                                    rax_605 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_605, 5)
                                            else
                                            label_1401bb121:
                                                zmm2[0].o = arg17[0].o
                                                
                                                if ((temp0_3976 & 0x20) != 0)
                                                    rax_605 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_605, 5)
                                            
                                            if ((temp0_3976 & 0x40) != 0)
                                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *zmm0[0].q, 6)
                                                
                                                if (temp0_3976 s< 0)
                                                label_1401bb098:
                                                    zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                                    int64_t rax_599 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_599, 7)
                                            else if (temp0_3976 s< 0)
                                                goto label_1401bb098
                                            
                                            zmm0[0].o =
                                                __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                            arg17[0].o = zmm2[0].o
                                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                            zmm3[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                            zmm0[0].o ^= zmm3[0].o
                                            zmm2[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg62[0].o)
                                            zmm2[0].o ^= zmm3[0].o
                                            zmm3 = _mm256_and_ps(
                                                _mm256_insertf128_ps(zmm2, zmm0[0].o, 1), zmm15)
                                            zmm2[0].o = zx.o(0)
                                            zmm0 = _mm256_and_ps(zmm3, arg9)
                                            
                                            if (_mm256_movemask_ps(zmm0) != i_9)
                                                zmm2 = _mm256_xor_ps(zmm3, zmm15)
                                            
                                            arg11 = _mm256_blendv_ps(arg11, zmm4, zmm3)
                                            zmm3[0].o =
                                                __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o)
                                            zmm3[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                                            zmm4 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                                            zmm3[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
                                            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                            zmm15 = _mm256_and_ps(zmm0, zmm2)
                                            zmm6 = _mm256_and_ps(zmm15, arg9)
                                            i_9 = _mm256_movemask_ps(zmm6)
                                        while (i_9 != 0)
                                
                                zmm14 = arg22
                                zmm6 = arg_180
                                zmm0 = _mm256_blendv_ps(arg_a0, arg11, arg9)
                                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                zmm15 = zmm0
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_20[0].o, zmm0[0].o)
                                zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm3[0].o)
                                zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                                
                                if ((rdi_37 & 1) == 0)
                                    zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                    
                                    if ((rdi_37 & 2) != 0)
                                        goto label_1401bb39c
                                    
                                    goto label_1401bb31e
                                
                                zmm0[0].o = arg16
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm3[0].q, 0)
                                arg16 = zmm0[0].o
                                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                
                                if ((rdi_37 & 2) != 0)
                                label_1401bb39c:
                                    int64_t rax_608 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    zmm0[0].o = arg16
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_608, 1)
                                    arg16 = zmm0[0].o
                                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                                    
                                    if ((rdi_37 & 4) == 0)
                                        goto label_1401bb331
                                    
                                    goto label_1401bb3cc
                                
                            label_1401bb31e:
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
                                zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                                
                                if ((rdi_37 & 4) == 0)
                                label_1401bb331:
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                    
                                    if ((rdi_37 & 8) != 0)
                                        goto label_1401bb3fc
                                    
                                    goto label_1401bb33f
                                
                            label_1401bb3cc:
                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                zmm0[0].o = arg16
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm0[0].q, 2)
                                arg16 = zmm0[0].o
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm2[0].o)
                                
                                if ((rdi_37 & 8) != 0)
                                label_1401bb3fc:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    int64_t rax_610 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = arg16
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_610, 3)
                                    arg16 = zmm0[0].o
                                    zmm3 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                    
                                    if ((rdi_37 & 0x10) == 0)
                                        goto label_1401bb34f
                                    
                                    goto label_1401bb434
                                
                            label_1401bb33f:
                                zmm3 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                                int64_t rax_612
                                
                                if ((rdi_37 & 0x10) != 0)
                                label_1401bb434:
                                    zmm2[0].o = arg16
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm3[0].q, 4)
                                    zmm4[0].o = arg49
                                    
                                    if ((rdi_37 & 0x20) != 0)
                                        rax_612 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_612, 5)
                                else
                                label_1401bb34f:
                                    zmm2[0].o = arg16
                                    zmm4[0].o = arg49
                                    
                                    if ((rdi_37 & 0x20) != 0)
                                        rax_612 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_612, 5)
                                
                                if ((rdi_37 & 0x40) != 0)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_3533.b s< 0)
                                    label_1401b934a:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                        int64_t rax_462 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_462, 7)
                                else if (temp0_3533.b s< 0)
                                    goto label_1401b934a
                                
                                arg16 = zmm2[0].o
                                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm3 = _mm256_blendv_ps(zmm6, zmm0, arg9)
                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg_120[0].o)
                                zmm2 = arg_1a0
                                zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                                zmm1 = _mm256_and_ps(zmm0, arg9)
                                
                                if (_mm256_movemask_ps(zmm1) != 0)
                                    zmm3 = _mm256_blendv_ps(zmm3, zmm2, zmm1)
                                
                                arg9 = arg_60
                                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_20[0].o, zmm0[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                arg_4c0 = zmm3
                                
                                if ((rdi_37 & 1) != 0)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0].q, 0)
                                
                                arg12[0].o = data_142fc95c0
                                zmm6[0].o = arg12[0].o
                                zmm10 = arg_480.32
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                                
                                if ((rdi_37 & 2) != 0)
                                    int64_t rax_615 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_615, 1)
                                
                                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                                zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm2[0].o)
                                
                                if ((rdi_37 & 4) != 0)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0], 2)
                                
                                arg10[0].o = zmm6[0].o
                                zmm6 = arg_c0
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm3[0].o)
                                
                                if ((rdi_37 & 8) != 0)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rax_617 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_617, 3)
                                
                                zmm8 = zmm15
                                zmm5[0].o = arg_240
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                
                                if ((rdi_37 & 0x10) == 0)
                                    zmm2[0].o = arg16
                                    
                                    if ((rdi_37 & 0x20) != 0)
                                        goto label_1401b937d
                                    
                                    goto label_1401bb5b7
                                
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0].q, 4)
                                zmm2[0].o = arg16
                                
                                if ((rdi_37 & 0x20) != 0)
                                label_1401b937d:
                                    int64_t rax_464 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_464, 5)
                                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                    
                                    if ((rdi_37 & 0x40) == 0)
                                        goto label_1401bb5c6
                                    
                                    goto label_1401b9397
                                
                            label_1401bb5b7:
                                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                                
                                if ((rdi_37 & 0x40) != 0)
                                label_1401b9397:
                                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = arg16
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm2[0], 6)
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                    
                                    if (temp0_3533.b s< 0)
                                    label_1401b93bd:
                                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                        int64_t rax_466 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rax_466, 7)
                                else
                                label_1401bb5c6:
                                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                    
                                    if (temp0_3533.b s< 0)
                                        goto label_1401b93bd
                                
                                arg7 = &arg_720
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
                                arg49 = zmm4[0].o
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                            
                            zmm2 = __vxorps_ymmqq_ymmqq_memqq(arg_340, arg_320.32)
                            zmm3[0].o = zx.o(0)
                            bool cond:97_1 = *(arg5 + 0xd58) == 1
                            zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                            
                            if (not(cond:97_1))
                                zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                zmm4[0].o = data_142d3f5b0
                                zmm3[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                                zmm1[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                                zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                                zmm0 = _mm256_sub_ps(arg75, _mm256_cvtepi32_ps(zmm0))
                                zmm3 = _mm256_div_ps(zmm0, _mm256_cvtepi32_ps(zmm1))
                            
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm1 = _mm256_blendv_ps(zmm0, zmm3, zmm2)
                            zmm2[0].o = arg_2e0
                            zmm3 = arg_140
                            arg12 = arg_6e0
                    
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    arg_6e0 =
                        _mm256_blendv_ps(arg12, zmm1, _mm256_insertf128_ps(zmm10, zmm0[0].o, 1))
                    zmm1[0].o = arg_1e0
                    arg12 = arg_20
            
            arg_140 = _mm256_insertf128_ps(zmm6, zmm2[0].o, 1)
            arg_1e0.32 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            zmm10[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm7[0].o, arg_300[0].o)
            zmm1[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            arg_2e0.32 = zmm1
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm14[0])
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm14[0].o, 0x4e)
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
            zmm5 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
            arg_c0 = zmm5
            zmm0 = arg44.32
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm0[0].o)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg_340 = zmm8
            zmm6[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
            arg_7e0 = zmm0[0].o
            arg_480 = zmm6[0].o
            zmm6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm6[0])
            zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0x4e)
            zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm6[0])
            zmm0[0].o = _mm256_extractf128_ps(arg_40[0].o, 1)
            arg_320 = zmm0[0].o
            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm3[0].o)
            arg_180 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg_40[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
            zmm6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            arg_100 = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            arg_120[0].o = zmm0[0].o
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            zmm0 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
            arg_1a0 = zmm0
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm1[0].o)
            zmm15 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm1[0].o = data_142d3f5b0
            zmm2[0].o = zmm1[0].o
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
            zmm0[0].o = zmm10[0].o & not.o(zmm1[0].o)
            zmm14[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm2[0].o, arg_220)
            zmm4[0].o = arg_e0[0].o
            zmm1[0].o = zmm4[0].o & not.o(zmm14[0].o)
            zmm10[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm0[0].o)
            bool cond:5_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            arg_240 = zmm14[0].o
            float arg_6c0[0x8]
            
            if (cond:5_1)
                arg11[0].o = zx.o(0)
                zmm10[0].o = arg_2c0
                zmm8 = arg_300
                zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
            else
                zmm0 = arg_260
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                arg11[0].o = zx.o(0)
                arg_40[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg_40[0].o)
                zmm2[0].o &= zmm10[0].o
                zmm3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm3[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                bool cond:8_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
                arg12[0].o = zx.o(0)
                
                if (not(cond:8_1))
                    zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                    zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm1 = arg_2e0.32
                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0 = arg_140
                    zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm1 = arg_c0
                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0 = arg_1e0.32
                    zmm6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm5[0].o)
                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg10 = arg_1a0
                    zmm7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg9 = arg_180
                    zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = data_1434426c0
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                    zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                    zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    zmm5 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                    zmm6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    arg9 = _mm256_blendv_ps(arg12, zmm3, zmm5)
                    zmm3[0].o = _mm_permute_ps(zmm6[0].o, 0x50)
                    zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm6[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg12, zmm1, zmm3)
                    double r10_9 = arg9[0]
                    int64_t r8_16 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t r14_7 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r11_7 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* rcx_67 = arg8 + r14_7
                    zmm6 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm7 = _mm256_blendv_ps(arg12, zmm6, zmm3)
                    int64_t rbx_59 = zmm1[0].q
                    int32_t* rdx_63 = zmm7[0].q
                    float* rsi_38 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                    zmm1[0].o = *(rdx_63 + rcx_67)
                    zmm7[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                    float* rdx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                    float* rax_620 = zmm7[0].q
                    zmm7 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm3 = _mm256_blendv_ps(arg12, zmm7, zmm3)
                    zmm4[0].o = *(zmm3[0].q + rcx_67)
                    int64_t rcx_68 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    void* rdi_39 = arg8 + r8_16
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_38 + rdi_39), 0x10)
                    void* rsi_39 = arg8 + rbx_59
                    zmm6 = _mm256_blendv_ps(arg12, zmm6, zmm5)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_620 + rsi_39), 0x20)
                    float* rax_621 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_621 + rdi_39), 0x10)
                    zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(zmm3[0].q + rsi_39), 0x20)
                    void* rax_623 = arg8 i+ r10_9
                    int32_t* rsi_40 = zmm6[0]
                    zmm5 = _mm256_blendv_ps(arg12, zmm7, zmm5)
                    zmm7[0].o = *(rsi_40 + rax_623)
                    int32_t* rsi_41 = zmm5[0].q
                    float* rdi_40 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm3[0].o = *(rsi_41 + rax_623)
                    void* rax_624 = arg8 + rcx_68
                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg9 = arg_60
                    void* rsi_42 = arg8 + r11_7
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_64 + rsi_42), 0x30)
                    float* rdx_65 = __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                    zmm7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *(rdx_65 + rax_624), 0x10)
                    int64_t rdx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_40 + rsi_42), 0x30)
                    float* rsi_43 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    int64_t rdi_41 = zmm0[0].q
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_43 + rax_624), 0x10)
                    void* rax_625 = arg8 + rdi_41
                    zmm3[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                    zmm6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *(zmm3[0].q + rax_625), 0x20)
                    arg11[0].o = zx.o(0)
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(zmm5[0].q + rax_625), 0x20)
                    void* rax_626 = arg8 + rdx_66
                    float* rsi_46 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(rsi_46 + rax_626), 0x30)
                    float* rsi_47 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_47 + rax_626), 0x30)
                    zmm5[0].o = *(arg8 i+ r10_9)
                    zmm6[0].o = *(arg8 + r14_7)
                    zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(arg8 + r8_16), 0x10)
                    zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(arg8 + rbx_59), 0x20)
                    zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(arg8 + r11_7), 0x30)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg8 + rcx_68), 0x10)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg8 + rdi_41), 0x20)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg8 + rdx_66), 0x30)
                    zmm5 = _mm256_insertf128_ps(zmm5, zmm6[0].o, 1)
                    arg39.32 = _mm256_maskstore_ps(zmm2, zmm5)
                    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                    arg_720.32 = _mm256_maskstore_ps(zmm2, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                    zmm4[0].o = arg_e0[0].o
                    arg42.32 = _mm256_maskstore_ps(zmm2, zmm0)
                
                zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                zmm1[0].o = arg_40[0].o ^ zmm7[0].o
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, arg_260[0].o)
                zmm2[0].o ^= zmm7[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                arg10[0].o = zmm10[0].o & zmm1[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg10[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg10[0].o = data_142fc95c0
                    arg12 = arg_20
                    zmm10[0].o = arg_2c0
                    zmm8 = arg_300
                else
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg10[0])
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm6 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                    zmm1 = arg14
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm8 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0 = _mm256_and_ps(zmm8, zmm6)
                    int32_t temp0_4249 = _mm256_movemask_ps(zmm0)
                    zmm1[0].o = zx.o(0)
                    zmm10 = zmm15
                    arg9 = arg_100
                    zmm4 = arg9
                    arg_a0 = zmm6
                    
                    if (temp0_4249 != 0)
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm4[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        arg_620 = zmm0
                        zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm4[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        arg_6c0 = zmm0
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm5, zmm0[0].o, 1), zmm8)
                        zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                        zmm6[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm5, zmm6[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm6, zmm0[0].o, 1)
                        zmm14 = arg_2e0.32
                        zmm6[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                        arg12 = arg_140
                        zmm7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                        arg11 = arg_c0
                        zmm7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm3[0].o = arg10[0].o
                        arg10 = arg_1e0.32
                        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                        zmm1 = arg_180
                        zmm7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                        zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm14[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                        zmm6 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                        zmm1 = arg_1a0
                        zmm7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
                        arg10[0].o = zmm3[0].o
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
                        zmm1[0].o = zx.o(0)
                        zmm2 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                        arg11[0].o = zx.o(0)
                        zmm15 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm10, arg_6c0, zmm5)
                        zmm2 = _mm256_blendv_ps(zmm1, zmm2, zmm5)
                        zmm4 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, arg_620, zmm0)
                        zmm0 = _mm256_blendv_ps(zmm1, zmm6, zmm0)
                        zmm6 = arg_a0
                        int64_t r8_17 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        double rcx_69 = zmm2[0]
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_67 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        double rbx_60 = zmm2[0]
                        zmm2[0].o = *(arg8 i+ rcx_69)
                        int64_t rcx_70 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_42 = zmm0[0].q
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_48 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rax_629 = zmm0[0].q
                        zmm0[0].o = *(arg8 + rdi_42)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg8 + rcx_70), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg8 + rax_629), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg8 + rsi_48), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + r8_17), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 i+ rbx_60), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + rdx_67), 0x30)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    
                    arg39.32 = _mm256_maskstore_ps(zmm6, _mm256_blendv_ps(zmm1, zmm0, zmm8))
                    zmm0 = arg14
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm3[0].o = zmm0[0].o ^ zmm1[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                    zmm0[0].o ^= zmm1[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm1[0].o = arg10[0].o & zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_4314 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_4314 == 0)
                        zmm2 = arg60
                        zmm8 = arg_300
                        arg9 = arg_60
                    else
                        if ((temp0_4314 & 1) != 0)
                            zmm0[0].o = *zmm15[0].q
                            zmm7 = _mm256_blend_ps(arg29, zmm0, 1)
                        else
                            zmm7 = arg29
                        
                        arg9[0].o = data_1434426c0
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        arg_620[0].o = zmm3[0].o
                        
                        if ((temp0_4314 & 2) != 0)
                            int64_t rax_631 = __vpextrq_gpr64q_xmmdq_immb(zmm15[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *rax_631, 0x10)
                            zmm7 = _mm256_blend_ps(zmm7, zmm1, 0xf)
                        
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm6[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm3[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                        arg_6c0 = zmm5
                        
                        if ((temp0_4314 & 4) != 0)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *zmm3[0].q, 0x20)
                            zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                        
                        zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm8[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm6[0].o, 0x1f)
                        
                        if ((temp0_4314 & 8) != 0)
                            float* rax_633 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *rax_633, 0x30)
                            zmm7 = _mm256_blend_ps(zmm7, zmm0, 0xf)
                        
                        arg29 = zmm7
                        zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, arg9[0].o)
                        zmm10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm8[0].o, 0x50)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                        
                        if ((temp0_4314 & 0x10) != 0)
                            zmm0[0].o = *zmm4[0].q
                            zmm2[0].o = _mm256_extractf128_ps(arg29[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 1)
                            zmm14 = _mm256_insertf128_ps(arg29, zmm0[0].o, 1)
                            arg29 = zmm14
                        
                        zmm0[0].o = data_1434426c0
                        zmm14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm8[0].o, 0xfa)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                        arg12[0].o = arg10[0].o
                        
                        if ((temp0_4314 & 0x20) != 0)
                            arg10 = zmm4
                            float* rax_635 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm8 = arg29
                            zmm5[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_635, 0x10)
                            arg29 = _mm256_insertf128_ps(zmm8, zmm5[0].o, 1)
                        else
                            arg10 = zmm4
                        
                        zmm5 = _mm256_insertf128_ps(zmm6, zmm14[0].o, 1)
                        zmm3 = _mm256_insertf128_ps(zmm7, zmm3[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm10, zmm0[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                        
                        if ((temp0_4314 & 0x40) != 0)
                            float* rax_636 = zmm1[0].q
                            zmm7 = arg29
                            zmm6[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                            zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *rax_636, 0x20)
                            zmm7 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                            arg29 = zmm7
                        
                        arg11[0].o = zx.o(0)
                        arg9 = arg_60
                        zmm8 = arg_300
                        zmm6 = arg_a0
                        arg10[0].o = arg12[0].o
                        zmm15 = _mm256_blendv_ps(zmm15, zmm3, zmm0)
                        zmm4 = _mm256_blendv_ps(arg10, zmm5, zmm2)
                        
                        if (temp0_4314 s< 0)
                            int64_t rax_637 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1 = arg29
                            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_637, 0x30)
                            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            arg29 = zmm1
                        
                        zmm2 = arg60
                        zmm3[0].o = arg_620[0].o
                        zmm5 = arg_6c0
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm0[0].o ^= zmm1[0].o
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                    zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                    arg_720.32 = _mm256_maskstore_ps(zmm6, __vandps_ymmqq_ymmqq_memqq(zmm0, arg29))
                    zmm0 = arg14
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                    zmm5[0].o = zmm0[0].o ^ zmm7[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                    zmm0[0].o ^= zmm7[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o &= arg10[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_4371 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_4371 == 0)
                        zmm15 = zmm10
                        arg10[0].o = data_142fc95c0
                        arg12 = arg_20
                        zmm4[0].o = arg_e0[0].o
                        zmm14[0].o = arg_240
                    else
                        if ((temp0_4371 & 1) == 0)
                            if ((temp0_4371 & 2) != 0)
                                goto label_1401bc37d
                            
                            goto label_1401bc137
                        
                        zmm0[0].o = *zmm15[0].q
                        zmm2 = _mm256_blend_ps(zmm2, zmm0, 1)
                        
                        if ((temp0_4371 & 2) != 0)
                        label_1401bc37d:
                            int64_t rax_641 = __vpextrq_gpr64q_xmmdq_immb(zmm15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_641, 0x10)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            zmm14[0].o = arg_240
                            
                            if ((temp0_4371 & 4) == 0)
                                goto label_1401bc14a
                            
                            goto label_1401bc3a2
                        
                    label_1401bc137:
                        zmm14[0].o = arg_240
                        
                        if ((temp0_4371 & 4) == 0)
                        label_1401bc14a:
                            
                            if ((temp0_4371 & 8) != 0)
                                goto label_1401bc3c3
                            
                            goto label_1401bc154
                        
                    label_1401bc3a2:
                        zmm0[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *zmm0[0].q, 0x20)
                        zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                        
                        if ((temp0_4371 & 8) != 0)
                        label_1401bc3c3:
                            zmm0[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                            int64_t rax_643 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_643, 0x30)
                            zmm2 = _mm256_blend_ps(zmm2, zmm0, 0xf)
                            arg10[0].o = data_142fc95c0
                            arg12 = arg_20
                            
                            if ((temp0_4371 & 0x10) == 0)
                                goto label_1401bc16c
                            
                            goto label_1401bc3f8
                        
                    label_1401bc154:
                        arg10[0].o = data_142fc95c0
                        arg12 = arg_20
                        
                        if ((temp0_4371 & 0x10) != 0)
                        label_1401bc3f8:
                            zmm0[0].o = zx.o(*zmm4[0].q)
                            zmm3 = zmm2
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 3)
                            zmm2 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                            
                            if ((temp0_4371 & 0x20) != 0)
                            label_1401bc420:
                                int64_t rax_645 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_645, 0x10)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                                
                                if ((temp0_4371 & 0x40) == 0)
                                    goto label_1401bc180
                                
                                goto label_1401bc442
                        else
                        label_1401bc16c:
                            
                            if ((temp0_4371 & 0x20) != 0)
                                goto label_1401bc420
                        
                        if ((temp0_4371 & 0x40) != 0)
                        label_1401bc442:
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            float* rax_646 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_646, 0x20)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm15 = zmm10
                            
                            if (temp0_4371 s< 0)
                            label_1401bc46c:
                                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                int64_t rax_647 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_647, 0x30)
                                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        else
                        label_1401bc180:
                            zmm15 = zmm10
                            
                            if (temp0_4371 s< 0)
                                goto label_1401bc46c
                        
                        zmm4[0].o = arg_e0[0].o
                    
                    zmm10[0].o = arg_2c0
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                    zmm0[0].o ^= zmm7[0].o
                    arg60 = zmm2
                    zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm0, zmm5[0].o, 1), zmm2)
                    arg42.32 = _mm256_maskstore_ps(zmm6, zmm0)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm7[0].o)
            zmm1[0].o = zmm14[0].o ^ zmm7[0].o
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
            zmm2[0].o ^= zmm7[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm1[0].o = zmm4[0].o & not.o(zmm1[0].o)
            zmm0[0].o &= not.o(zmm2[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:10_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            arg_a0[0].o = zmm5[0].o
            
            if (cond:10_1)
                zmm2[0].o = arg_480
            else
                zmm3[0].o = zmm10[0].o
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm7[0].o)
                zmm10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
                zmm1[0].o = zmm0[0].o & not.o(zmm10[0].o)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm1[0].o, arg_500)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                arg_380 = zmm15
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg9 = arg_100
                    zmm10[0].o = zmm3[0].o
                else
                    zmm5[0].o = zmm0[0].o ^ zmm7[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
                    zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, arg_80, 1)
                    zmm1[0].o = zx.o(0)
                    arg_5e0 = zmm1
                    arg_5c0 = zmm1
                    arg_5a0 = zmm1
                    arg_580 = zmm1
                    arg_560 = zmm1
                    arg_540 = zmm1
                    zmm2 = arg14
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                    zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                    zmm14 = _mm256_and_ps(zmm0, zmm1)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm14, arg20)
                    int32_t temp0_4397 = _mm256_movemask_ps(zmm0)
                    arg_500.32 = zmm5
                    
                    if (temp0_4397 == 0)
                        arg10 = arg_40
                        zmm1 = arg14
                    else
                        char rdi_43 = temp0_4397.b
                        
                        if ((rdi_43 & 1) != 0)
                            zmm1[0].o = *arg12[0].q
                            zmm8 = _mm256_blend_ps(arg74, zmm1, 1)
                            zmm2 = arg_40
                            arg9[0].o = arg_320
                            
                            if ((rdi_43 & 2) != 0)
                            label_1401bc4bc:
                                float* rax_649 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm8[0].o, *rax_649, 0x10)
                                zmm8 = _mm256_blend_ps(zmm8, zmm1, 0xf)
                        else
                            zmm8 = arg74
                            zmm2 = arg_40
                            arg9[0].o = arg_320
                            
                            if ((rdi_43 & 2) != 0)
                                goto label_1401bc4bc
                        
                        zmm7[0].o = data_1434426c0
                        
                        if ((rdi_43 & 4) != 0)
                            zmm1[0].o = arg_120[0].o
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm8[0].o, *zmm1[0].q, 0x20)
                            zmm8 = _mm256_blend_ps(zmm8, zmm1, 0xf)
                            
                            if ((rdi_43 & 8) != 0)
                            label_1401bc7bf:
                                zmm1[0].o = arg_120[0].o
                                float* rax_658 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm8[0].o, *rax_658, 0x30)
                                zmm8 = _mm256_blend_ps(zmm8, zmm1, 0xf)
                                
                                if ((rdi_43 & 0x10) == 0)
                                    goto label_1401bc4f4
                                
                                goto label_1401bc7e9
                        else if ((rdi_43 & 8) != 0)
                            goto label_1401bc7bf
                        
                        if ((rdi_43 & 0x10) != 0)
                        label_1401bc7e9:
                            zmm1[0].o = *zmm2[0]
                            zmm3[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 1)
                            zmm8 = _mm256_insertf128_ps(zmm8, zmm1[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm7[0].o)
                            zmm6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdi_43 & 0x20) != 0)
                            label_1401bc504:
                                int64_t rax_650 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_650, 0x10)
                                zmm8 = _mm256_insertf128_ps(zmm8, zmm1[0].o, 1)
                        else
                        label_1401bc4f4:
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm7[0].o)
                            zmm6[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                            
                            if ((rdi_43 & 0x20) != 0)
                                goto label_1401bc504
                        
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, arg_120[0].o)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        
                        if ((rdi_43 & 0x40) != 0)
                            double rax_651 = arg9[0]
                            zmm4[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_651, 0x20)
                            zmm8 = _mm256_insertf128_ps(zmm8, zmm4[0].o, 1)
                        
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                        zmm7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                        arg10 = _mm256_insertf128_ps(zmm6, zmm0[0].o, 1)
                        
                        if (temp0_4397.b s< 0)
                            int64_t rax_652 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_652, 0x30)
                            zmm8 = _mm256_insertf128_ps(zmm8, zmm5[0].o, 1)
                        
                        zmm0 = arg73
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg9[0].o, data_1434426c0)
                        zmm6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm1 = _mm256_blendv_ps(arg12, zmm3, arg10)
                        arg_5a0 = _mm256_maskstore_ps(zmm14, zmm8)
                        
                        if ((rdi_43 & 1) == 0)
                            zmm3 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            zmm5 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                            
                            if ((rdi_43 & 2) != 0)
                                goto label_1401bc83d
                            
                            goto label_1401bc5c7
                        
                        zmm3[0].o = *zmm1[0].q
                        zmm0 = _mm256_blend_ps(zmm0, zmm3, 1)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
                        
                        if ((rdi_43 & 2) != 0)
                        label_1401bc83d:
                            int64_t rax_661 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_661, 0x10)
                            zmm0 = _mm256_blend_ps(zmm0, zmm4, 0xf)
                            zmm6 = _mm256_blendv_ps(zmm2, zmm3, zmm5)
                            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((rdi_43 & 4) == 0)
                                goto label_1401bc5dd
                            
                            goto label_1401bc86a
                        
                    label_1401bc5c7:
                        zmm6 = _mm256_blendv_ps(zmm2, zmm3, zmm5)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        
                        if ((rdi_43 & 4) == 0)
                        label_1401bc5dd:
                            
                            if ((rdi_43 & 8) != 0)
                                goto label_1401bc880
                            
                            goto label_1401bc5eb
                        
                    label_1401bc86a:
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm4[0].q, 0x20)
                        zmm0 = _mm256_blend_ps(zmm0, zmm3, 0xf)
                        
                        if ((rdi_43 & 8) == 0)
                        label_1401bc5eb:
                            arg74 = zmm8
                            
                            if ((rdi_43 & 0x10) != 0)
                            label_1401bc5fb:
                                zmm3[0].o = *zmm6[0]
                                zmm7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm3[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm3[0].o, 1)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                        else
                        label_1401bc880:
                            int64_t rax_663 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_663, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, zmm3, 0xf)
                            arg74 = zmm8
                            
                            if ((rdi_43 & 0x10) != 0)
                                goto label_1401bc5fb
                        
                        zmm7[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                        zmm3[0].o = data_1434426c0
                        zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm3[0].o)
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                        
                        if ((rdi_43 & 0x20) != 0)
                            int64_t rax_654 = __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_654, 0x10)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                        
                        zmm3[0].o = data_1434426c0
                        zmm2[0].o = zmm3[0].o
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                        
                        if ((rdi_43 & 0x40) != 0)
                            float* rax_655 = zmm7[0].q
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_655, 0x20)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                        
                        zmm3 = _mm256_insertf128_ps(zmm8, zmm3[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg9, zmm4[0].o, 1)
                        
                        if (temp0_4397.b s< 0)
                            int64_t rax_656 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_656, 0x30)
                            zmm7 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm0 = zmm7
                        
                        arg11[0].o = zx.o(0)
                        arg9 = arg_60
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                        arg12 = _mm256_blendv_ps(zmm1, zmm4, arg10)
                        arg10 = _mm256_blendv_ps(zmm6, zmm3, zmm5)
                        arg73 = zmm0
                        arg_540 = _mm256_maskstore_ps(zmm14, zmm0)
                        zmm1 = arg14
                        zmm8 = arg_300
                        zmm4[0].o = arg_e0[0].o
                    
                    zmm2[0].o = arg_80
                    zmm15[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm7[0].o)
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_143442a60)
                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                    zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                    zmm1[0].o = zmm6[0].o & not.o(zmm15[0].o)
                    zmm0[0].o &= not.o(zmm1[0].o)
                    zmm1[0].o = zmm5[0].o & not.o(zmm2[0].o)
                    zmm1[0].o = zmm4[0].o & not.o(zmm1[0].o)
                    zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    char temp0_4481 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    zmm0 = arg_500.32
                    zmm8 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, arg_2c0, 1)
                    arg9 = _mm256_insertf128_ps(zmm10, zmm2[0].o, 1)
                    
                    if (temp0_4481 == 0)
                        zmm0 = arg_300
                        zmm4[0].o = arg_e0[0].o
                    else
                        if ((temp0_4481 & 1) != 0)
                            zmm0[0].o = *arg12[0].q
                            zmm10 = _mm256_blend_ps(arg72, zmm0, 1)
                            
                            if ((temp0_4481 & 2) != 0)
                            label_1401bc8c8:
                                float* rax_665 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, *rax_665, 0x10)
                                zmm10 = _mm256_blend_ps(zmm10, zmm0, 0xf)
                        else
                            zmm10 = arg72
                            
                            if ((temp0_4481 & 2) != 0)
                                goto label_1401bc8c8
                        
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        zmm3[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        
                        if ((temp0_4481 & 4) != 0)
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, *zmm3[0].q, 0x20)
                            zmm10 = _mm256_blend_ps(zmm10, zmm1, 0xf)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            
                            if ((temp0_4481 & 8) != 0)
                            label_1401bc8fa:
                                int64_t rax_666 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, *rax_666, 0x30)
                                zmm10 = _mm256_blend_ps(zmm10, zmm0, 0xf)
                        else
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            
                            if ((temp0_4481 & 8) != 0)
                                goto label_1401bc8fa
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm4[0].o = zmm6[0].o ^ zmm2[0].o
                        
                        if ((temp0_4481 & 0x10) != 0)
                            zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                            zmm1[0].o = zx.o(*arg10[0])
                            zmm2[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm1[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 3)
                            zmm10 = _mm256_insertf128_ps(zmm10, zmm1[0].o, 1)
                            zmm14 = zmm10
                        else
                            zmm14 = zmm10
                            zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm10[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg12[0].o, data_1434426c0)
                        arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x50)
                        zmm2[0].o = zmm5[0].o ^ zmm6[0].o
                        arg_500.32 = zmm8
                        
                        if ((temp0_4481 & 0x20) != 0)
                            int64_t rax_669 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_669, 0x10)
                            zmm14 = _mm256_insertf128_ps(zmm14, zmm1[0].o, 1)
                        
                        zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, data_1434426c0)
                        zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0xfa)
                        zmm7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm15, arg_80, 1)
                        zmm8 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        
                        if ((temp0_4481 & 0x40) != 0)
                            float* rax_670 = zmm0[0].q
                            zmm2[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_670, 0x20)
                            zmm14 = _mm256_insertf128_ps(zmm14, zmm2[0].o, 1)
                        
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg10[0].o, data_1434426c0)
                        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                        zmm2 = _mm256_insertf128_ps(zmm10, zmm1[0].o, 1)
                        zmm15 = _mm256_insertf128_ps(arg11, zmm6[0].o, 1)
                        zmm10 = _mm256_and_ps(zmm8, zmm7)
                        
                        if (temp0_4481 s< 0)
                            int64_t rax_671 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm6[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *rax_671, 0x30)
                            zmm14 = _mm256_insertf128_ps(zmm14, zmm6[0].o, 1)
                        
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, data_1434426c0)
                        zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                        zmm5 = _mm256_blendv_ps(arg12, zmm2, zmm15)
                        arg72 = zmm14
                        arg_5c0 = _mm256_maskstore_ps(zmm10, zmm14)
                        
                        if ((temp0_4481 & 1) != 0)
                            zmm2[0].o = *zmm5[0].q
                            arg12 = _mm256_blend_ps(arg71, zmm2, 1)
                        else
                            arg12 = arg71
                        
                        zmm7[0].o = arg21[0].o
                        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm6 = _mm256_insertf128_ps(zmm4, zmm6[0].o, 1)
                        
                        if ((temp0_4481 & 2) == 0)
                            zmm0 = _mm256_blendv_ps(arg10, zmm0, zmm6)
                            zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            
                            if ((temp0_4481 & 4) != 0)
                                goto label_1401bcc4a
                            
                            goto label_1401bcab3
                        
                        int64_t rax_674 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_674, 0x10)
                        arg12 = _mm256_blend_ps(arg12, zmm2, 0xf)
                        zmm0 = _mm256_blendv_ps(arg10, zmm0, zmm6)
                        zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((temp0_4481 & 4) != 0)
                        label_1401bcc4a:
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *zmm3[0].q, 0x20)
                            arg12 = _mm256_blend_ps(arg12, zmm2, 0xf)
                            zmm1[0].o = data_1434426c0
                            
                            if ((temp0_4481 & 8) == 0)
                                goto label_1401bcac9
                            
                            goto label_1401bcc68
                        
                    label_1401bcab3:
                        zmm1[0].o = data_1434426c0
                        
                        if ((temp0_4481 & 8) != 0)
                        label_1401bcc68:
                            int64_t rax_676 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_676, 0x30)
                            arg12 = _mm256_blend_ps(arg12, zmm2, 0xf)
                            arg21[0].o = zmm7[0].o
                            
                            if ((temp0_4481 & 0x10) != 0)
                            label_1401bcad9:
                                zmm2[0].o = *zmm0[0].q
                                zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm2[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 1)
                                arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                        else
                        label_1401bcac9:
                            arg21[0].o = zmm7[0].o
                            
                            if ((temp0_4481 & 0x10) != 0)
                                goto label_1401bcad9
                        
                        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        
                        if ((temp0_4481 & 0x20) == 0)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                            
                            if ((temp0_4481 & 0x40) != 0)
                                goto label_1401bccbc
                            
                            goto label_1401bcb19
                        
                        int64_t rax_677 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_677, 0x10)
                        arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        
                        if ((temp0_4481 & 0x40) == 0)
                        label_1401bcb19:
                            zmm2 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                            zmm3 = _mm256_insertf128_ps(zmm8, zmm3[0].o, 1)
                            
                            if (temp0_4481 s< 0)
                            label_1401bcce7:
                                int64_t rax_679 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_679, 0x30)
                                arg12 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                        else
                        label_1401bccbc:
                            float* rax_678 = zmm4[0].q
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_678, 0x20)
                            arg12 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                            zmm3 = _mm256_insertf128_ps(zmm8, zmm3[0].o, 1)
                            
                            if (temp0_4481 s< 0)
                                goto label_1401bcce7
                        
                        arg11[0].o = zx.o(0)
                        zmm1 = arg12
                        zmm4[0].o = arg_e0[0].o
                        zmm8 = arg_500.32
                        arg12 = _mm256_blendv_ps(zmm5, zmm3, zmm15)
                        arg10 = _mm256_blendv_ps(zmm0, zmm2, zmm6)
                        arg71 = zmm1
                        arg_560 = _mm256_maskstore_ps(zmm10, zmm1)
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                        zmm0 = arg_300
                    
                    zmm8 = _mm256_and_ps(arg9, zmm8)
                    arg9 = arg_60
                    zmm10[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142fc95c0)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                    zmm1 = arg14
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9520)
                    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                    zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
                    zmm2[0].o = zmm5[0].o & not.o(arg_80)
                    zmm2[0].o = zmm4[0].o & not.o(zmm2[0].o)
                    zmm3[0].o = zmm6[0].o & not.o(zmm10[0].o)
                    zmm0[0].o &= not.o(zmm3[0].o)
                    zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    char temp0_4579 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_4579 == 0)
                        zmm6[0].o = zx.o(0)
                        arg10[0].o = data_142fc95c0
                        zmm5[0].o = data_1434426c0
                        arg12 = arg_20
                    else
                        if ((temp0_4579 & 1) != 0)
                            zmm0[0].o = *arg12[0].q
                            zmm3 = _mm256_blend_ps(arg70, zmm0, 1)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_4579 & 2) != 0)
                            label_1401bcd26:
                                int64_t rax_681 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_681, 0x10)
                                zmm3 = _mm256_blend_ps(zmm3, zmm0, 0xf)
                        else
                            zmm3 = arg70
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_4579 & 2) != 0)
                                goto label_1401bcd26
                        
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                        zmm7[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        
                        if ((temp0_4579 & 4) != 0)
                            zmm2[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *zmm7[0].q, 0x20)
                            zmm3 = _mm256_blend_ps(zmm3, zmm2, 0xf)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_4579 & 8) != 0)
                            label_1401bcd58:
                                int64_t rax_682 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                zmm2[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_682, 0x30)
                                zmm3 = _mm256_blend_ps(zmm3, zmm2, 0xf)
                        else
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            
                            if ((temp0_4579 & 8) != 0)
                                goto label_1401bcd58
                        
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm6[0].o ^= zmm1[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        
                        if ((temp0_4579 & 0x10) != 0)
                            zmm2[0].o = *arg10[0]
                            arg9 = zmm3
                            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 1)
                            zmm3 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                        
                        arg9[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg12[0].o, data_1434426c0)
                        arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        zmm5[0].o ^= zmm1[0].o
                        
                        if ((temp0_4579 & 0x20) != 0)
                            int64_t rax_684 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_684, 0x10)
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        
                        zmm14 = zmm3
                        zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, data_1434426c0)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm10, arg_80, 1)
                        zmm1 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                        
                        if ((temp0_4579 & 0x40) != 0)
                            float* rax_685 = zmm3[0].q
                            zmm5[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *rax_685, 0x20)
                            zmm14 = _mm256_insertf128_ps(zmm14, zmm5[0].o, 1)
                        
                        zmm10 = arg69
                        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(arg9, zmm7[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                        arg9 = _mm256_and_ps(zmm1, zmm0)
                        
                        if (temp0_4579 s< 0)
                            int64_t rax_686 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_686, 0x30)
                            zmm14 = _mm256_insertf128_ps(zmm14, zmm0[0].o, 1)
                        
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                        arg11[0].o = zx.o(0)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        zmm4 = _mm256_blendv_ps(arg12, zmm4, zmm2)
                        arg70 = zmm14
                        arg_5e0 = _mm256_maskstore_ps(arg9, zmm14)
                        
                        if ((temp0_4579 & 1) != 0)
                            zmm2[0].o = *zmm4[0].q
                            zmm10 = _mm256_blend_ps(zmm10, zmm2, 1)
                        
                        arg12[0].o = data_142fc95c0
                        zmm1[0].o = arg12[0].o
                        arg12 = arg_20
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg10[0].o, data_1434426c0)
                        zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        
                        if ((temp0_4579 & 2) == 0)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, data_1434426c0)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            
                            if ((temp0_4579 & 4) != 0)
                                goto label_1401bd4eb
                            
                            goto label_1401bced2
                        
                        float* rax_694 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, *rax_694, 0x10)
                        zmm10 = _mm256_blend_ps(zmm10, zmm2, 0xf)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, data_1434426c0)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        
                        if ((temp0_4579 & 4) != 0)
                        label_1401bd4eb:
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, *zmm0[0].q, 0x20)
                            zmm10 = _mm256_blend_ps(zmm10, zmm0, 0xf)
                            zmm0 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm6, zmm2[0].o, 1)
                            
                            if ((temp0_4579 & 8) == 0)
                                goto label_1401bcee8
                            
                            goto label_1401bd518
                        
                    label_1401bced2:
                        zmm0 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(zmm6, zmm2[0].o, 1)
                        
                        if ((temp0_4579 & 8) == 0)
                        label_1401bcee8:
                            zmm0 = _mm256_blendv_ps(arg10, zmm0, zmm2)
                            
                            if ((temp0_4579 & 0x10) != 0)
                                goto label_1401bd545
                            
                            goto label_1401bcef8
                        
                    label_1401bd518:
                        zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        float* rax_696 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, *rax_696, 0x30)
                        zmm10 = _mm256_blend_ps(zmm10, zmm3, 0xf)
                        zmm0 = _mm256_blendv_ps(arg10, zmm0, zmm2)
                        
                        if ((temp0_4579 & 0x10) != 0)
                        label_1401bd545:
                            zmm2[0].o = *zmm0[0].q
                            zmm3[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 1)
                            zmm10 = _mm256_insertf128_ps(zmm10, zmm2[0].o, 1)
                            zmm5[0].o = data_1434426c0
                            arg10[0].o = zmm1[0].o
                            
                            if ((temp0_4579 & 0x20) == 0)
                                goto label_1401bcf0e
                            
                            goto label_1401bd571
                        
                    label_1401bcef8:
                        zmm5[0].o = data_1434426c0
                        arg10[0].o = zmm1[0].o
                        
                        if ((temp0_4579 & 0x20) == 0)
                        label_1401bcf0e:
                            
                            if ((temp0_4579 & 0x40) != 0)
                                goto label_1401bd593
                            
                            goto label_1401bcf18
                        
                    label_1401bd571:
                        int64_t rax_698 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_698, 0x10)
                        zmm10 = _mm256_insertf128_ps(zmm10, zmm2[0].o, 1)
                        
                        if ((temp0_4579 & 0x40) == 0)
                        label_1401bcf18:
                            
                            if (temp0_4579 s< 0)
                            label_1401bd5b8:
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_700 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_700, 0x30)
                                zmm10 = _mm256_insertf128_ps(zmm10, zmm0[0].o, 1)
                        else
                        label_1401bd593:
                            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            double rax_699 = zmm2[0]
                            zmm2[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_699, 0x20)
                            zmm10 = _mm256_insertf128_ps(zmm10, zmm2[0].o, 1)
                            
                            if (temp0_4579 s< 0)
                                goto label_1401bd5b8
                        
                        arg69 = zmm10
                        arg_580 = _mm256_maskstore_ps(arg9, zmm10)
                        zmm6[0].o = zx.o(0)
                    
                    zmm14[0].o = arg_240
                    zmm3 = arg_2e0.32
                    zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg_140[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_140[0].o, zmm3[0].o)
                    zmm10 = arg_c0
                    arg_140[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                    zmm4 = arg_1e0.32
                    zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    arg_140[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg_140[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm10[0].o)
                    arg9 = arg_180
                    zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm10 = arg_1a0
                    zmm4[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_140[0].o, zmm5[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    arg_140[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    arg_140[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, arg_140[0].o)
                    zmm1 = _mm256_insertf128_ps(arg_140, zmm1[0].o, 1)
                    arg_140[0].o = _mm_permute_ps(zmm8[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(zmm8[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(arg_140, zmm3[0].o, 1)
                    zmm1 = _mm256_blendv_ps(zmm6, zmm1, zmm2)
                    zmm2[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                    zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    zmm0 = _mm256_blendv_ps(zmm6, zmm0, _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
                    int64_t r8_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rcx_76 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rdx_68 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_61 = zmm1[0].q
                    int64_t rdi_46 = zmm0[0].q
                    int64_t rsi_51 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rax_688 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm1[0].o = zx.o(*(arg8 + rcx_76))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg8 + r8_18), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg8 + rbx_61), 2)
                    int64_t rcx_77 = zmm0[0].q
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg8 + rdx_68), 3)
                    zmm1[0].o = zx.o(*(arg8 + rdi_46))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg8 + rsi_51), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg8 + rcx_77), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg8 + rax_688), 3)
                    zmm2 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                    zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o = data_143442490
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    zmm5[0].o = data_143442480
                    zmm4[0].o &= zmm5[0].o
                    zmm6[0].o = data_143442440
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6[0].o)
                    zmm3[0].o &= zmm5[0].o
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(
                            __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), data_1434424a0), 
                            arg_540), 
                        arg_5a0)
                    zmm2 = _mm256_cvtepi32_ps(zmm3)
                    zmm3 = data_143442460
                    zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm2, zmm3), arg_560), arg_5c0)
                    zmm0 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(_mm256_cvtepi32_ps(zmm0), zmm3), 
                            arg_580), 
                        arg_5e0)
                    arg39.32 = _mm256_maskstore_ps(zmm8, zmm1)
                    arg_720.32 = _mm256_maskstore_ps(zmm8, zmm2)
                    arg42.32 = _mm256_maskstore_ps(zmm8, zmm0)
                    zmm10[0].o = arg_2c0
                    zmm8 = arg_300
                    zmm4[0].o = arg_e0[0].o
                    arg9 = arg_100
                    zmm5[0].o = arg_a0[0].o
                
                zmm3 = arg_60
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm0[0].o, arg_80)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm7[0].o)
                zmm1[0].o ^= zmm7[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm10[0].o)
                zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                zmm7[0].o = zmm0[0].o ^ zmm5[0].o
                zmm0[0].o = zmm7[0].o & zmm1[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    zmm2[0].o = arg_480
                    arg9 = zmm3
                    zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                else
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm6[0].o)
                    zmm0[0].o = data_1434422d0
                    zmm15[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, arg_220)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    zmm2[0].o = zmm4[0].o & not.o(zmm15[0].o)
                    zmm3[0].o = zmm1[0].o & not.o(zmm0[0].o)
                    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0)
                        arg9 = arg_60
                    else
                        zmm1[0].o ^= zmm6[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm10[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm15[0].o, 1)
                        arg12 = _mm256_and_ps(zmm0, zmm1)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg14[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg14[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        arg14[0].o = __vpslld_xmmdq_xmmdq_immb(arg14[0].o, 0x1f)
                        arg14[0].o = __vpsrad_xmmdq_xmmdq_immb(arg14[0].o, 0x1f)
                        zmm1 = _mm256_insertf128_ps(zmm0, arg14[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm1, arg12)
                        bool cond:35_1 = _mm256_movemask_ps(zmm0) == 0
                        arg_500 = zmm3[0].o
                        arg_620[0].o = zmm7[0].o
                        arg_6c0[0].o = zmm15[0].o
                        
                        if (cond:35_1)
                            zmm4[0].o = zx.o(0)
                        else
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm2[0].o = data_1434426b0
                            zmm3[0].o = zmm2[0].o
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg_380[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg_380[0].o, zmm3[0].o)
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                            zmm2[0].o = __vpmovzxwd_xmmdq_memq(arg_500[0].q)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm5[0].o = arg_500
                            zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                            zmm5 = _mm256_and_ps(zmm2, zmm1)
                            zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            zmm6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm6[0].o, 1)
                            zmm4 = _mm256_blendv_ps(arg_380, zmm3, zmm2)
                            arg_380 = zmm4
                            zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm5[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                            arg_100 = _mm256_blendv_ps(arg9, zmm0, zmm3)
                            zmm10 = arg_2e0.32
                            zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm14 = arg_140
                            zmm5[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                            zmm15 = arg_c0
                            zmm5[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                            zmm7 = arg12
                            arg12 = arg_1e0.32
                            zmm6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm5[0].o)
                            arg9 = arg_180
                            zmm6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm4[0].o = data_1434426c0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm10[0].o)
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm6[0].o)
                            zmm0 = _mm256_insertf128_ps(zmm6, zmm0[0].o, 1)
                            arg9 = arg_1a0
                            zmm6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm5[0].o)
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm15[0].o)
                            arg12 = zmm7
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm6[0].o)
                            zmm5 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                            zmm4[0].o = zx.o(0)
                            zmm2 = _mm256_blendv_ps(zmm4, zmm5, zmm2)
                            zmm0 = _mm256_blendv_ps(zmm4, zmm0, zmm3)
                            double rdx_69 = zmm2[0]
                            int64_t r8_19 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            double r10_10 = zmm2[0]
                            int64_t rbx_62 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            int64_t rdi_47 = zmm0[0].q
                            int64_t rsi_52 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rcx_78 = zmm0[0].q
                            int64_t rax_692 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zx.o(*(arg8 i+ rdx_69))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + r8_19), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 i+ r10_10), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rbx_62), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rdi_47), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rsi_52), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rcx_78), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rax_692), 7)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                            zmm3[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm3[0].o = arg_500
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                        
                        arg9 = arg_60
                        zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                        arg39.32 = _mm256_maskstore_ps(arg12, _mm256_blendv_ps(zmm4, zmm0, zmm1))
                        zmm0 = arg14
                        zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                        zmm1[0].o = zmm0[0].o ^ zmm6[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                        zmm0[0].o ^= zmm6[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm3[0].o &= zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_4845 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4845 == 0)
                            zmm8 = arg_300
                            zmm4[0].o = arg_e0[0].o
                            zmm14[0].o = arg_240
                            zmm10 = arg_100
                            arg10 = arg_380
                            zmm15[0].o = arg_6c0[0].o
                        else
                            int64_t rax_702
                            
                            if ((temp0_4845 & 1) != 0)
                                arg9 = arg_380
                                zmm6[0].o = arg54
                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *arg9[0], 0)
                                
                                if ((temp0_4845 & 2) != 0)
                                    rax_702 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    zmm6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *rax_702, 1)
                            else
                                zmm6[0].o = arg54
                                arg9 = arg_380
                                
                                if ((temp0_4845 & 2) != 0)
                                    rax_702 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    zmm6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *rax_702, 1)
                            zmm4[0].o = arg_e0[0].o
                            zmm10 = arg_100
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                            zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            
                            if ((temp0_4845 & 4) != 0)
                                zmm6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *zmm3[0].q, 2)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_4845 & 8) != 0)
                                int64_t rax_704 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *rax_704, 3)
                            
                            zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_4845 & 0x10) != 0)
                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *zmm10[0], 4)
                            
                            arg12[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm0[0].o = data_1434426b0
                            zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm0[0].o)
                            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                            arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                            zmm15[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x50)
                            
                            if ((temp0_4845 & 0x20) != 0)
                                int64_t rax_706 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *rax_706, 5)
                            
                            zmm14[0].o = data_1434426b0
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm14[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm14[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0xfa)
                            
                            if ((temp0_4845 & 0x40) != 0)
                                zmm6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *arg12[0].q, 6)
                            
                            zmm0 = _mm256_insertf128_ps(zmm8, zmm0[0].o, 1)
                            zmm3 = _mm256_insertf128_ps(arg9, zmm3[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg11, zmm2[0].o, 1)
                            zmm7 = _mm256_insertf128_ps(zmm15, zmm7[0].o, 1)
                            
                            if (temp0_4845 s< 0)
                                int64_t rax_708 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm6[0].o, *rax_708, 7)
                            
                            arg9 = arg_60
                            zmm14[0].o = arg_240
                            zmm15[0].o = arg_6c0[0].o
                            arg10 = _mm256_blendv_ps(arg_380, zmm3, zmm2)
                            zmm10 = _mm256_blendv_ps(zmm10, zmm0, zmm7)
                            arg11[0].o = zx.o(0)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zx.o(0))
                            arg54 = zmm6[0].o
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm6[0])
                            zmm3[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                            zmm8 = arg_300
                            zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                        
                        zmm3[0].o = arg_500
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                        zmm2[0].o ^= zmm6[0].o
                        arg_720.32 = _mm256_maskstore_ps(arg12, 
                            _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), zmm0))
                        zmm0 = arg14
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                        zmm5[0].o = zmm0[0].o ^ zmm6[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                        zmm0[0].o ^= zmm6[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0[0].o &= zmm3[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_4895 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_4895 == 0)
                            zmm7[0].o = arg_620[0].o
                            zmm10[0].o = arg_2c0
                        else
                            int64_t rax_710
                            
                            if ((temp0_4895 & 1) != 0)
                                zmm2[0].o = arg53
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0], 0)
                                
                                if ((temp0_4895 & 2) != 0)
                                    rax_710 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_710, 1)
                            else
                                zmm2[0].o = arg53
                                
                                if ((temp0_4895 & 2) != 0)
                                    rax_710 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_710, 1)
                            
                            if ((temp0_4895 & 4) == 0)
                                if ((temp0_4895 & 8) != 0)
                                    goto label_1401be2e5
                                
                                goto label_1401bd905
                            
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                            
                            if ((temp0_4895 & 8) != 0)
                            label_1401be2e5:
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_2, 3)
                                
                                if ((temp0_4895 & 0x10) == 0)
                                    goto label_1401bd90f
                                
                                goto label_1401be305
                            
                        label_1401bd905:
                            
                            if ((temp0_4895 & 0x10) == 0)
                            label_1401bd90f:
                                
                                if ((temp0_4895 & 0x20) != 0)
                                    goto label_1401be314
                                
                                goto label_1401bd919
                            
                        label_1401be305:
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm10[0], 4)
                            
                            if ((temp0_4895 & 0x20) != 0)
                            label_1401be314:
                                int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 5)
                                
                                if ((temp0_4895 & 0x40) == 0)
                                    goto label_1401bd923
                                
                                goto label_1401be329
                            
                        label_1401bd919:
                            
                            if ((temp0_4895 & 0x40) != 0)
                            label_1401be329:
                                zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                
                                if (temp0_4895 s< 0)
                                label_1401be341:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                    int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 7)
                            else
                            label_1401bd923:
                                
                                if (temp0_4895 s< 0)
                                    goto label_1401be341
                            
                            zmm7[0].o = arg_620[0].o
                            zmm10[0].o = arg_2c0
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
                            arg53 = zmm2[0].o
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                            zmm3[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                        
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                        zmm6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
                        zmm1[0].o ^= zmm6[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm1, zmm0)
                        arg42.32 = _mm256_maskstore_ps(arg12, zmm0)
                        arg10[0].o = data_142fc95c0
                        arg12 = arg_20
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_1434422d0)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm15[0].o)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm6[0].o)
                    zmm1[0].o ^= zmm6[0].o
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm10[0].o)
                    zmm0[0].o ^= zmm7[0].o
                    zmm0[0].o &= zmm1[0].o
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        zmm2[0].o = arg_480
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                    else
                        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm6[0].o)
                        zmm1[0].o = data_143442ad0
                        zmm2[0].o = zmm1[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, arg_220)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm4[0].o &= not.o(zmm1[0].o)
                        zmm5[0].o = zmm3[0].o & not.o(zmm2[0].o)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        bool cond:52_1 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                        
                        if (not(cond:52_1))
                            zmm3[0].o ^= zmm7[0].o
                            zmm3 = _mm256_insertf128_ps(zmm3, zmm10[0].o, 1)
                            zmm2 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), zmm3)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            arg39.32 = _mm256_maskstore_ps(zmm2, zmm3)
                            arg_720.32 = _mm256_maskstore_ps(zmm2, zmm3)
                            arg42.32 = _mm256_maskstore_ps(zmm2, zmm3)
                        
                        zmm1[0].o ^= zmm7[0].o
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_143442ad0)
                        zmm2[0].o ^= zmm7[0].o
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        bool cond:62_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                        zmm2[0].o = arg_480
                        
                        if (not(cond:62_1))
                            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            zmm1[0].o = zx.o(0)
                            arg39.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            arg_720.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            arg42.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm7[0].o)
            zmm0[0].o ^= zmm7[0].o
            zmm6 = arg_4c0
            zmm1[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm6[0].o, arg_340[0].o)
            zmm4[0].o = zmm2[0].o & not.o(zmm10[0].o)
            zmm5[0].o = zmm3[0].o & not.o(zmm0[0].o)
            zmm15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0)
                break
            
            zmm8 = _mm256_insertf128_ps(zmm0, zmm10[0].o, 1)
            zmm0[0].o = zmm2[0].o ^ zmm7[0].o
            zmm2[0].o = zmm3[0].o ^ zmm7[0].o
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            arg_1a0 = zmm0
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_142d3f5b0)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm14[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm6[0].o, arg44)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, arg_7e0)
            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm4 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            arg_2c0.32 = zmm4
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0])
            zmm5 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
            arg_300 = zmm5
            zmm6 = arg_2e0.32
            zmm5[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
            arg_100[0].o = zmm5[0].o
            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_320)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, arg_40[0].o)
            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm5 = arg_c0
            zmm6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm14 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            arg_180[0].o = zmm6[0].o
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, arg_120[0].o)
            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            arg_240.32 = zmm1
            zmm10[0].o = zmm15[0].o & zmm0[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm10[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            bool cond:22_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            zmm5[0].o = zmm15[0].o
            arg_e0[0].o = zmm15[0].o
            
            if (cond:22_1)
                zmm3[0].o = arg_a0[0].o
                zmm6 = arg_1a0
            else
                arg_480.32 = zmm8
                zmm0 = arg_260
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm8[0].o)
                zmm2[0].o &= zmm10[0].o
                zmm3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm3[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                    zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                    zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm4 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm0 = arg_140
                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg_100[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg_2e0)
                    zmm0 = arg_1e0.32
                    zmm15[0].o = zmm5[0].o
                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_180[0].o)
                    zmm6[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg_c0[0].o)
                    arg9 = arg_300
                    zmm7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg12 = arg_2c0.32
                    zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm0[0].o = data_1434426c0
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    zmm6 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0[0].o = zx.o(0)
                    zmm5 = _mm256_blendv_ps(zmm0, zmm2, zmm6)
                    zmm2[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                    zmm7 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, zmm7)
                    int64_t r9_6 = zmm5[0].q
                    int64_t r13_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    void* r8_20 = arg8 + r9_6
                    int64_t r14_8 = zmm1[0].q
                    int64_t r11_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    void* r10_11 = arg8 + r14_8
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t r15_4 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rsi_55 = zmm1[0].q
                    zmm1 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    arg9 = _mm256_blendv_ps(zmm0, zmm1, zmm6)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, zmm7)
                    float* rdx_71 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int32_t* rdi_48 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    float* rbx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    float* rax_717 = zmm1[0].q
                    zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm2 = _mm256_blendv_ps(zmm0, zmm1, zmm6)
                    zmm3[0].o = *(rdi_48 + r10_11)
                    zmm1 = _mm256_blendv_ps(zmm0, zmm1, zmm7)
                    zmm6[0].o = *(zmm1[0].q + r10_11)
                    void* rdi_50 = arg13 + r13_4
                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    void* rcx_83 = arg13 + r11_8
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_71 + rcx_83), 0x10)
                    float* rdx_72 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(rdx_72 + rcx_83), 0x10)
                    int64_t rcx_84 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    void* rdx_74 = arg13 + rsi_55
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_717 + rdx_74), 0x20)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(zmm1[0].q + rdx_74), 0x20)
                    int32_t* rax_719 = arg9[0]
                    float* rdx_75 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = *(rax_719 + r8_20)
                    void* rax_721 = arg13 + r15_4
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_63 + rax_721), 0x30)
                    float* rbx_64 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_64 + rdi_50), 0x10)
                    zmm6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *(rdx_75 + rax_721), 0x30)
                    int64_t rax_722 = zmm5[0].q
                    int32_t* rdx_76 = zmm2[0]
                    float* rbx_65 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm5[0].o = *(rdx_76 + r8_20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_65 + rdi_50), 0x10)
                    void* rdx_78 = arg13 + rax_722
                    zmm7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm7[0].q + rdx_78), 0x20)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(zmm2[0] + rdx_78), 0x20)
                    void* rdx_80 = arg13 + rcx_84
                    float* rbx_68 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_68 + rdx_80), 0x30)
                    float* rbx_69 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_69 + rdx_80), 0x30)
                    zmm5[0].o = *(arg13 + r9_6)
                    zmm7[0].o = *(arg13 + r14_8)
                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *(arg13 + r11_8), 0x10)
                    zmm7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *(arg13 + rsi_55), 0x20)
                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *(arg13 + r15_4), 0x30)
                    arg4 = arg_1c0
                    arg8 = arg13
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg8 + r13_4), 0x10)
                    arg7 = &arg_720
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg8 + rax_722), 0x20)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg8 + rcx_84), 0x30)
                    zmm5 = _mm256_insertf128_ps(zmm5, zmm7[0].o, 1)
                    zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                    arg11[0].o = zx.o(0)
                    arg56 = _mm256_maskstore_ps(zmm4, zmm5)
                    zmm5[0].o = zmm15[0].o
                    arg57 = _mm256_maskstore_ps(zmm4, _mm256_insertf128_ps(zmm1, zmm3[0].o, 1))
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm6[0].o, 1)
                    arg58 = _mm256_maskstore_ps(zmm4, zmm1)
                
                zmm1[0].o = zmm8[0].o ^ zmm7[0].o
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, arg_260[0].o)
                zmm2[0].o ^= zmm7[0].o
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm4[0].o = zmm10[0].o & zmm1[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg9 = arg_60
                    zmm3[0].o = arg_a0[0].o
                    arg12 = arg_20
                    zmm8 = arg_480.32
                    zmm6 = arg_1a0
                else
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm3 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(arg14[0].o, 0x1f)
                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    arg14[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                    arg14[0].o = __vpslld_xmmdq_xmmdq_immb(arg14[0].o, 0x1f)
                    arg14[0].o = __vpsrad_xmmdq_xmmdq_immb(arg14[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm0, arg14[0].o, 1)
                    zmm0 = _mm256_and_ps(zmm1, zmm3)
                    int32_t temp0_5077 = _mm256_movemask_ps(zmm0)
                    arg10[0].o = zx.o(0)
                    zmm5 = arg_240.32
                    zmm15 = zmm5
                    zmm10 = zmm14
                    
                    if (temp0_5077 != 0)
                        zmm0[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                        zmm6[0].o = data_1434426c0
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                        arg9 = zmm3
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm6[0].o)
                        zmm8 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
                        zmm10 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1), zmm1)
                        zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0x50)
                        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm5 = arg_140
                        zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_100[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_2e0)
                        arg12 = arg_2c0.32
                        zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o)
                        arg10 = arg_1e0.32
                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg_180[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm7[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm7, zmm3[0].o, 1)
                        zmm15 = arg_300
                        zmm7[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm5[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg10[0].o, arg_c0[0].o)
                        arg10[0].o = zx.o(0)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm7[0].o)
                        zmm5 = _mm256_insertf128_ps(zmm7, zmm5[0].o, 1)
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                        arg11[0].o = zx.o(0)
                        zmm6 = arg_240.32
                        zmm15 = _mm256_blendv_ps(zmm6, zmm10, zmm2)
                        zmm2 = _mm256_blendv_ps(arg10, zmm5, zmm2)
                        zmm10 = _mm256_blendv_ps(zmm14, zmm8, zmm0)
                        zmm0 = _mm256_blendv_ps(arg10, zmm3, zmm0)
                        zmm3 = arg9
                        int64_t r8_21 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        double rcx_85 = zmm2[0]
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        int64_t rdx_86 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        double rbx_70 = zmm2[0]
                        zmm2[0].o = *(arg8 i+ rcx_85)
                        int64_t rcx_86 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_51 = zmm0[0].q
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_56 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rax_725 = zmm0[0].q
                        zmm0[0].o = *(arg8 + rdi_51)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg8 + rcx_86), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg8 + rax_725), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg8 + rsi_56), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + r8_21), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 i+ rbx_70), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + rdx_86), 0x30)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    
                    arg_340 = zmm14
                    arg56 = _mm256_maskstore_ps(zmm3, _mm256_blendv_ps(arg10, zmm0, zmm1))
                    zmm0 = arg14
                    arg9 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                    arg10[0].o = zmm0[0].o ^ zmm7[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                    zmm0[0].o ^= zmm7[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                    zmm1[0].o = zmm4[0].o & zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_5140 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_5140 == 0)
                        arg_260 = zmm10
                        arg12 = arg_20
                        zmm8 = arg_480.32
                        zmm6 = arg_1a0
                    else
                        arg_1c0.32 = zmm3
                        
                        if ((temp0_5140 & 1) != 0)
                            zmm0[0].o = *zmm15[0].q
                            zmm3 = _mm256_blend_ps(arg28, zmm0, 1)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            
                            if ((temp0_5140 & 2) != 0)
                            label_1401be37e:
                                int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm15[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_8, 0x10)
                                zmm3 = _mm256_blend_ps(zmm3, zmm1, 0xf)
                        else
                            zmm3 = arg28
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                            
                            if ((temp0_5140 & 2) != 0)
                                goto label_1401be37e
                        
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm5[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                        
                        if ((temp0_5140 & 4) != 0)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *zmm5[0].q, 0x20)
                            zmm3 = _mm256_blend_ps(zmm3, zmm0, 0xf)
                        
                        zmm6[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        arg11[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        
                        if ((temp0_5140 & 8) != 0)
                            int64_t rax_10 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *rax_10, 0x30)
                            zmm3 = _mm256_blend_ps(zmm3, zmm0, 0xf)
                        
                        arg28 = zmm3
                        zmm1[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                        zmm0[0].o = data_1434426c0
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm0[0].o)
                        zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm0[0].o)
                        arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x50)
                        zmm0 = zmm10
                        zmm10[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0x50)
                        
                        if ((temp0_5140 & 0x10) != 0)
                            zmm14 = zmm0
                            zmm0[0].o = zx.o(*zmm0[0].q)
                            zmm2 = arg28
                            zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 3)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            arg28 = zmm2
                        else
                            zmm14 = zmm0
                        
                        zmm0[0].o = data_1434426c0
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0xfa)
                        zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm6[0].o, 0xfa)
                        
                        if ((temp0_5140 & 0x20) != 0)
                            int64_t rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm14[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg28[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *rax_12, 0x10)
                            arg11 = _mm256_insertf128_ps(arg28, zmm2[0].o, 1)
                            arg28 = arg11
                        
                        zmm3 = _mm256_insertf128_ps(zmm7, zmm3[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(zmm8, zmm5[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(zmm10, zmm6[0].o, 1)
                        
                        if ((temp0_5140 & 0x40) != 0)
                            float* rax_13 = zmm1[0].q
                            zmm6[0].o = _mm256_extractf128_ps(arg28[0].o, 1)
                            zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6[0].o, *rax_13, 0x20)
                            zmm7 = _mm256_insertf128_ps(arg28, zmm6[0].o, 1)
                            arg28 = zmm7
                        
                        arg11[0].o = zx.o(0)
                        arg12 = arg_20
                        zmm8 = arg_480.32
                        zmm6 = arg_1a0
                        zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                        zmm15 = _mm256_blendv_ps(zmm15, zmm5, zmm0)
                        arg_260 = _mm256_blendv_ps(zmm14, zmm3, zmm2)
                        
                        if (temp0_5140 s< 0)
                            int64_t rax_14 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg28[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_14, 0x30)
                            arg28 = _mm256_insertf128_ps(arg28, zmm0[0].o, 1)
                        
                        zmm3 = arg_1c0.32
                    
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
                    zmm0[0].o ^= zmm7[0].o
                    arg57 = _mm256_maskstore_ps(zmm3, 
                        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, arg10[0].o, 1), 
                            arg28))
                    zmm0 = arg14
                    zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                    zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                    zmm10[0].o = zmm0[0].o ^ zmm7[0].o
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                    zmm0[0].o ^= zmm7[0].o
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm10[0].o)
                    zmm0[0].o &= zmm4[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_66 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_66 == 0)
                        arg9 = arg_60
                        zmm4[0].o = arg_a0[0].o
                        arg10[0].o = data_142fc95c0
                        zmm5[0].o = arg_e0[0].o
                    else
                        if ((temp0_66 & 1) == 0)
                            if ((temp0_66 & 2) != 0)
                                goto label_1401be676
                            
                            goto label_1401be5c7
                        
                        zmm0[0].o = *zmm15[0].q
                        zmm2 = _mm256_blend_ps(arg25, zmm0, 1)
                        arg25 = zmm2
                        
                        if ((temp0_66 & 2) != 0)
                        label_1401be676:
                            int64_t rax_16 = __vpextrq_gpr64q_xmmdq_immb(zmm15[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg25[0].o, *rax_16, 0x10)
                            zmm2 = _mm256_blend_ps(arg25, zmm0, 0xf)
                            arg25 = zmm2
                            arg9 = arg_60
                            arg10[0].o = data_142fc95c0
                            
                            if ((temp0_66 & 4) == 0)
                                goto label_1401be5df
                            
                            goto label_1401be6b2
                        
                    label_1401be5c7:
                        arg9 = arg_60
                        arg10[0].o = data_142fc95c0
                        
                        if ((temp0_66 & 4) == 0)
                        label_1401be5df:
                            
                            if ((temp0_66 & 8) != 0)
                                goto label_1401be6e5
                            
                            goto label_1401be5e9
                        
                    label_1401be6b2:
                        zmm0[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg25[0].o, *zmm0[0].q, 0x20)
                        zmm2 = _mm256_blend_ps(arg25, zmm0, 0xf)
                        arg25 = zmm2
                        
                        if ((temp0_66 & 8) != 0)
                        label_1401be6e5:
                            zmm0[0].o = _mm256_extractf128_ps(zmm15[0].o, 1)
                            int64_t rax_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg25[0].o, *rax_18, 0x30)
                            zmm2 = _mm256_blend_ps(arg25, zmm0, 0xf)
                            arg25 = zmm2
                            zmm4[0].o = arg_a0[0].o
                            zmm5[0].o = arg_e0[0].o
                            
                            if ((temp0_66 & 0x10) == 0)
                                goto label_1401be605
                            
                            goto label_1401be72b
                        
                    label_1401be5e9:
                        zmm4[0].o = arg_a0[0].o
                        zmm5[0].o = arg_e0[0].o
                        
                        if ((temp0_66 & 0x10) == 0)
                        label_1401be605:
                            
                            if ((temp0_66 & 0x20) != 0)
                                goto label_1401be773
                            
                            goto label_1401be60f
                        
                    label_1401be72b:
                        zmm0 = arg_260
                        zmm0[0].o = zx.o(*zmm0[0].q)
                        zmm14 = zmm3
                        zmm3 = arg25
                        zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 3)
                        arg25 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm3 = zmm14
                        
                        if ((temp0_66 & 0x20) != 0)
                        label_1401be773:
                            zmm0 = arg_260
                            int64_t rax_20 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg25[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_20, 0x10)
                            zmm2 = _mm256_insertf128_ps(arg25, zmm0[0].o, 1)
                            arg25 = zmm2
                            
                            if ((temp0_66 & 0x40) == 0)
                                goto label_1401be619
                            
                            goto label_1401be7b0
                        
                    label_1401be60f:
                        
                        if ((temp0_66 & 0x40) != 0)
                        label_1401be7b0:
                            zmm0 = arg_260
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            float* rax_21 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(arg25[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_21, 0x20)
                            zmm2 = _mm256_insertf128_ps(arg25, zmm0[0].o, 1)
                            arg25 = zmm2
                            
                            if (temp0_66 s< 0)
                            label_1401be7ec:
                                zmm0 = arg_260
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                int64_t rax_22 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg25[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_22, 0x30)
                                zmm2 = _mm256_insertf128_ps(arg25, zmm0[0].o, 1)
                                arg25 = zmm2
                        else
                        label_1401be619:
                            
                            if (temp0_66 s< 0)
                                goto label_1401be7ec
                    
                    zmm14 = arg_340
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                    zmm0[0].o ^= zmm7[0].o
                    zmm0 =
                        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, zmm10[0].o, 1), arg25)
                    arg58 = _mm256_maskstore_ps(zmm3, zmm0)
                    zmm3[0].o = zmm4[0].o
            
            zmm8 = _mm256_and_ps(zmm6, zmm8)
            zmm0[0].o = zmm5[0].o & zmm3[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            else
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
                zmm2[0].o = arg_80
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm0[0].o &= zmm5[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                arg_260 = zmm8
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    zmm15 = arg9
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                else
                    zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm10[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm1[0].o = zx.o(0)
                    arg_5e0 = zmm1
                    arg_5c0 = zmm1
                    arg_5a0 = zmm1
                    arg_580 = zmm1
                    arg_560 = zmm1
                    arg_540 = zmm1
                    zmm2 = arg14
                    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2[0].o = arg10[0].o
                    arg10 = _mm256_and_ps(zmm0, zmm1)
                    zmm1 = _mm256_and_ps(arg10, zmm8)
                    int32_t temp0_120 = _mm256_movemask_ps(zmm1)
                    arg_340 = zmm14
                    arg_1c0.32 = zmm4
                    
                    if (temp0_120 == 0)
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        arg10[0].o = zmm2[0].o
                    else
                        char rdi_1 = temp0_120.b
                        
                        if ((rdi_1 & 1) != 0)
                            zmm0[0].o = *arg12[0].q
                            arg9 = _mm256_blend_ps(arg68, zmm0, 1)
                        else
                            arg9 = arg68
                        
                        zmm14 = arg67
                        zmm4[0].o = data_1434426c0
                        zmm6 = arg_40
                        
                        if ((rdi_1 & 2) == 0)
                            if ((rdi_1 & 4) != 0)
                                goto label_1401bea9d
                            
                            goto label_1401be9de
                        
                        int64_t rax_28 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_28, 0x10)
                        arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                        
                        if ((rdi_1 & 4) != 0)
                        label_1401bea9d:
                            zmm0[0].o = arg_120[0].o
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *zmm0[0].q, 0x20)
                            arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                            
                            if ((rdi_1 & 8) == 0)
                                goto label_1401be9e8
                            
                            goto label_1401beac1
                        
                    label_1401be9de:
                        
                        if ((rdi_1 & 8) == 0)
                        label_1401be9e8:
                            
                            if ((rdi_1 & 0x10) != 0)
                                goto label_1401beaeb
                            
                            goto label_1401be9f2
                        
                    label_1401beac1:
                        zmm0[0].o = arg_120[0].o
                        int64_t rax_30 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *rax_30, 0x30)
                        arg9 = _mm256_blend_ps(arg9, zmm0, 0xf)
                        
                        if ((rdi_1 & 0x10) == 0)
                        label_1401be9f2:
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
                            zmm7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            
                            if ((rdi_1 & 0x20) != 0)
                            label_1401bea02:
                                int64_t rax_26 = __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_26, 0x10)
                                arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                        else
                        label_1401beaeb:
                            zmm0[0].o = *zmm6[0]
                            zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 1)
                            arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
                            zmm7[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                            
                            if ((rdi_1 & 0x20) != 0)
                                goto label_1401bea02
                        
                        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm4[0].o, arg_120[0].o)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        
                        if ((rdi_1 & 0x40) != 0)
                            zmm0[0].o = arg_320
                            float* rax_27 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_27, 0x20)
                            arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                        
                        zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                        zmm8[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm5 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                        arg12 = _mm256_insertf128_ps(zmm7, zmm1[0].o, 1)
                        
                        if (temp0_120.b s< 0)
                            zmm1[0].o = arg_320
                            int64_t rax_32 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_32, 0x30)
                            arg9 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
                        else
                            zmm1[0].o = arg_320
                        
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm0 = arg_20
                        zmm5 = _mm256_blendv_ps(zmm0, zmm5, arg12)
                        arg_5a0 = _mm256_maskstore_ps(arg10, arg9)
                        
                        if ((rdi_1 & 1) != 0)
                            zmm0[0].o = *zmm5[0].q
                            zmm14 = _mm256_blend_ps(zmm14, zmm0, 1)
                        
                        zmm3 = _mm256_insertf128_ps(zmm6, zmm3[0].o, 1)
                        zmm6 = _mm256_insertf128_ps(zmm8, zmm2[0].o, 1)
                        arg68 = arg9
                        
                        if ((rdi_1 & 2) != 0)
                            float* rax_34 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm14[0].o, *rax_34, 0x10)
                            zmm14 = _mm256_blend_ps(zmm14, zmm0, 0xf)
                        
                        zmm0 = arg_40
                        arg9 = _mm256_blendv_ps(zmm0, zmm3, zmm6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((rdi_1 & 4) == 0)
                            if ((rdi_1 & 8) != 0)
                                goto label_1401bed46
                            
                            goto label_1401bebc3
                        
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm14[0].o, *zmm2[0], 0x20)
                        zmm14 = _mm256_blend_ps(zmm14, zmm0, 0xf)
                        
                        if ((rdi_1 & 8) == 0)
                        label_1401bebc3:
                            
                            if ((rdi_1 & 0x10) != 0)
                            label_1401bebce:
                                zmm0[0].o = *arg9[0]
                                zmm3[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                zmm0[0].o =
                                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 1)
                                zmm14 = _mm256_insertf128_ps(zmm14, zmm0[0].o, 1)
                        else
                        label_1401bed46:
                            float* rax_38 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm14[0].o, *rax_38, 0x30)
                            zmm14 = _mm256_blend_ps(zmm14, zmm0, 0xf)
                            
                            if ((rdi_1 & 0x10) != 0)
                                goto label_1401bebce
                        
                        zmm7[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                        zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        
                        if ((rdi_1 & 0x20) == 0)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            
                            if ((rdi_1 & 0x40) != 0)
                                goto label_1401bed91
                            
                            goto label_1401bec0e
                        
                        int64_t rax_39 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_39, 0x10)
                        zmm14 = _mm256_insertf128_ps(zmm14, zmm0[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        
                        if ((rdi_1 & 0x40) == 0)
                        label_1401bec0e:
                            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm8, zmm2[0].o, 1)
                            
                            if (temp0_120.b s< 0)
                            label_1401bedbc:
                                int64_t rax_41 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                zmm1[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_41, 0x30)
                                zmm14 = _mm256_insertf128_ps(zmm14, zmm1[0].o, 1)
                        else
                        label_1401bed91:
                            float* rax_40 = zmm7[0].q
                            zmm1[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_40, 0x20)
                            zmm14 = _mm256_insertf128_ps(zmm14, zmm1[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(zmm8, zmm2[0].o, 1)
                            
                            if (temp0_120.b s< 0)
                                goto label_1401bedbc
                        
                        arg11[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(zmm5, zmm2, arg12)
                        arg_20 = zmm1
                        arg_40 = _mm256_blendv_ps(arg9, zmm0, zmm6)
                        arg67 = zmm14
                        arg_540 = _mm256_maskstore_ps(arg10, zmm14)
                        arg10[0].o = data_142fc95c0
                        arg9 = arg_60
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    
                    zmm14[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm10[0].o, 0x1f)
                    zmm8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg14, data_143442a60)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                    zmm0[0].o = zmm4[0].o & not.o(arg_80)
                    zmm1[0].o = zmm5[0].o & not.o(zmm8[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm2[0].o = zmm0[0].o & arg_e0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_189 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_189 == 0)
                        zmm0 = arg59
                        zmm8 = arg_260
                    else
                        if ((temp0_189 & 1) == 0)
                            arg12 = arg64
                            
                            if ((temp0_189 & 2) == 0)
                                goto label_1401bee01
                            
                            goto label_1401bece2
                        
                        zmm0 = arg_20
                        zmm0[0].o = *zmm0[0].q
                        arg12 = _mm256_blend_ps(arg64, zmm0, 1)
                        
                        if ((temp0_189 & 2) != 0)
                        label_1401bece2:
                            zmm1 = arg_20
                            int64_t rax_36 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_36, 0x10)
                            arg12 = _mm256_blend_ps(arg12, zmm0, 0xf)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                            zmm6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((temp0_189 & 4) != 0)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *zmm6[0], 0x20)
                                arg12 = _mm256_blend_ps(arg12, zmm1, 0xf)
                        else
                        label_1401bee01:
                            zmm1 = arg_20
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                            zmm6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            
                            if ((temp0_189 & 4) != 0)
                                zmm1[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *zmm6[0], 0x20)
                                arg12 = _mm256_blend_ps(arg12, zmm1, 0xf)
                        
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        
                        if ((temp0_189 & 8) != 0)
                            int64_t rax_44 = __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *rax_44, 0x30)
                            arg12 = _mm256_blend_ps(arg12, zmm0, 0xf)
                        
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm10[0].o = zmm5[0].o ^ zmm3[0].o
                        
                        if ((temp0_189 & 0x10) != 0)
                            arg_40[0].o = zx.o(*arg_40[0].q)
                            zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg_40[0].o =
                                __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg_40[0].o, 3)
                            arg12 = _mm256_insertf128_ps(arg12, arg_40[0].o, 1)
                        
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1 = arg_20
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, data_1434426c0)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x50)
                        zmm4[0].o ^= zmm3[0].o
                        
                        if ((temp0_189 & 0x20) != 0)
                            zmm2 = arg_40
                            int64_t rax_46 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_46, 0x10)
                            arg12 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                        else
                            zmm2 = arg_40
                        
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, data_1434426c0)
                        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0xfa)
                        zmm7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm8, arg_80, 1)
                        zmm10 = _mm256_insertf128_ps(zmm10, zmm4[0].o, 1)
                        
                        if ((temp0_189 & 0x40) != 0)
                            float* rax_47 = zmm3[0].q
                            zmm4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_47, 0x20)
                            arg12 = _mm256_insertf128_ps(arg12, zmm4[0].o, 1)
                        
                        zmm4 = arg65
                        zmm6 = arg_40
                        zmm8[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, data_1434426c0)
                        zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                        zmm5 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                        arg10 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                        zmm10 = _mm256_and_ps(zmm10, zmm7)
                        
                        if (temp0_189 s< 0)
                            int64_t rax_48 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *rax_48, 0x30)
                            arg12 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                        
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, data_1434426c0)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                        zmm1 = arg_20
                        zmm5 = _mm256_blendv_ps(zmm1, zmm5, arg10)
                        arg64 = arg12
                        arg_5c0 = _mm256_maskstore_ps(zmm10, arg12)
                        
                        if ((temp0_189 & 1) != 0)
                            zmm1[0].o = *zmm5[0].q
                            zmm4 = _mm256_blend_ps(zmm4, zmm1, 1)
                        
                        zmm2 = _mm256_insertf128_ps(zmm8, zmm3[0].o, 1)
                        zmm6 = _mm256_insertf128_ps(zmm6, zmm0[0].o, 1)
                        
                        if ((temp0_189 & 2) == 0)
                            arg9 = _mm256_blendv_ps(arg_40, zmm2, zmm6)
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            
                            if ((temp0_189 & 4) != 0)
                                goto label_1401bf1ad
                            
                            goto label_1401befca
                        
                        int64_t rax_54 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_54, 0x10)
                        zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                        arg9 = _mm256_blendv_ps(arg_40, zmm2, zmm6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((temp0_189 & 4) != 0)
                        label_1401bf1ad:
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *zmm2[0], 0x20)
                            zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                            
                            if ((temp0_189 & 8) == 0)
                                goto label_1401befd4
                            
                            goto label_1401bf1c3
                        
                    label_1401befca:
                        
                        if ((temp0_189 & 8) != 0)
                        label_1401bf1c3:
                            int64_t rax_56 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_56, 0x30)
                            zmm4 = _mm256_blend_ps(zmm4, zmm0, 0xf)
                            
                            if ((temp0_189 & 0x10) != 0)
                            label_1401befdf:
                                zmm0[0].o = zx.o(*arg9[0])
                                arg_40[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(arg_40[0].o, zmm0[0].o, 3)
                                zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                        else
                        label_1401befd4:
                            
                            if ((temp0_189 & 0x10) != 0)
                                goto label_1401befdf
                        
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg_40[0].o = data_1434426c0
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg_40[0].o)
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg_40[0].o)
                        
                        if ((temp0_189 & 0x20) != 0)
                            int64_t rax_51 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                            arg_40[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            arg_40[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg_40[0].o, *rax_51, 0x10)
                            zmm4 = _mm256_insertf128_ps(zmm4, arg_40[0].o, 1)
                        
                        zmm8 = zmm4
                        arg_40[0].o = data_1434426c0
                        zmm4[0].o = arg_40[0].o
                        arg_40[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg_40[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                        
                        if ((temp0_189 & 0x40) != 0)
                            float* rax_52 = zmm0[0].q
                            zmm4[0].o = _mm256_extractf128_ps(zmm8[0].o, 1)
                            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *rax_52, 0x20)
                            zmm8 = _mm256_insertf128_ps(zmm8, zmm4[0].o, 1)
                        
                        zmm4 = zmm8
                        zmm8 = arg_260
                        zmm1 = _mm256_insertf128_ps(zmm3, arg_40[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(zmm7, zmm2[0].o, 1)
                        
                        if (temp0_189 s< 0)
                            int64_t rax_53 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_53, 0x30)
                            zmm4 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                        
                        arg11[0].o = zx.o(0)
                        zmm0 = arg59
                        arg_20 = _mm256_blendv_ps(zmm5, zmm2, arg10)
                        arg_40 = _mm256_blendv_ps(arg9, zmm1, zmm6)
                        arg65 = zmm4
                        arg_560 = _mm256_maskstore_ps(zmm10, zmm4)
                        arg10[0].o = data_142fc95c0
                        arg9 = arg_60
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    
                    zmm1 = arg_1c0.32
                    zmm10 = _mm256_insertf128_ps(zmm1, zmm14[0].o, 1)
                    zmm15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
                    zmm2 = __vandps_ymmqq_ymmqq_memqq(arg14, data_142fc9520)
                    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
                    zmm2[0].o = zmm4[0].o & not.o(arg_80)
                    zmm3[0].o = zmm5[0].o & not.o(zmm15[0].o)
                    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                    zmm2[0].o &= arg_e0[0].o
                    zmm3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm3[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    char temp0_290 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
                    
                    if (temp0_290 == 0)
                        zmm15 = arg9
                        zmm14[0].o = data_1434426c0
                    else
                        if ((temp0_290 & 1) != 0)
                            arg9 = arg_20
                            zmm3[0].o = *arg9[0]
                            zmm0 = _mm256_blend_ps(zmm0, zmm3, 1)
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_290 & 2) != 0)
                            label_1401bf203:
                                int64_t rax_58 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                zmm3[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_58, 0x10)
                                zmm0 = _mm256_blend_ps(zmm0, zmm3, 0xf)
                        else
                            arg9 = arg_20
                            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            
                            if ((temp0_290 & 2) != 0)
                                goto label_1401bf203
                        
                        zmm14[0].o = data_1434426c0
                        zmm7[0].o = arg21[0].o
                        arg10 = arg66
                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                        zmm6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg21[0].o = zmm7[0].o
                        
                        if ((temp0_290 & 4) == 0)
                            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                            
                            if ((temp0_290 & 8) != 0)
                                goto label_1401bf2c4
                            
                            goto label_1401bf254
                        
                        zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *zmm6[0], 0x20)
                        zmm0 = _mm256_blend_ps(zmm0, zmm7, 0xf)
                        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                        
                        if ((temp0_290 & 8) == 0)
                        label_1401bf254:
                            zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                            zmm5[0].o ^= zmm1[0].o
                            
                            if ((temp0_290 & 0x10) != 0)
                            label_1401bf263:
                                zmm3 = arg_40
                                zmm3[0].o = zx.o(*zmm3[0].q)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm0[0].o =
                                    __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 3)
                                zmm8 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                                zmm0 = zmm8
                        else
                        label_1401bf2c4:
                            int64_t rax_61 = __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                            zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_61, 0x30)
                            zmm0 = _mm256_blend_ps(zmm0, zmm7, 0xf)
                            zmm7[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                            zmm5[0].o ^= zmm1[0].o
                            
                            if ((temp0_290 & 0x10) != 0)
                                goto label_1401bf263
                        
                        zmm8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm14[0].o)
                        arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x50)
                        zmm3[0].o = zmm4[0].o ^ zmm1[0].o
                        
                        if ((temp0_290 & 0x20) != 0)
                            arg12 = arg_40
                            int64_t rax_62 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_62, 0x10)
                            zmm4 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm0 = zmm4
                        else
                            arg12 = arg_40
                        
                        zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm14[0].o)
                        zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0xfa)
                        zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm15, arg_80, 1)
                        zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                        
                        if ((temp0_290 & 0x40) != 0)
                            double rax_63 = zmm2[0]
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_63, 0x20)
                            zmm5 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm0 = zmm5
                        
                        arg12 = arg_20
                        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
                        zmm4 = _mm256_insertf128_ps(zmm8, zmm6[0].o, 1)
                        zmm6 = _mm256_insertf128_ps(arg9, zmm7[0].o, 1)
                        zmm1 = _mm256_and_ps(zmm3, zmm1)
                        
                        if (temp0_290 s< 0)
                            int64_t rax_64 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_64, 0x30)
                            zmm3 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            zmm0 = zmm3
                        
                        arg11[0].o = zx.o(0)
                        zmm15 = arg_60
                        zmm8 = arg_260
                        zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                        zmm4 = _mm256_blendv_ps(arg12, zmm4, zmm6)
                        arg_5e0 = _mm256_maskstore_ps(zmm1, zmm0)
                        arg59 = zmm0
                        
                        if ((temp0_290 & 1) != 0)
                            zmm0[0].o = *zmm4[0].q
                            arg10 = _mm256_blend_ps(arg10, zmm0, 1)
                        
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm14[0].o, arg_40[0].o)
                        zmm6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x50)
                        
                        if ((temp0_290 & 2) == 0)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm14[0].o)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                            
                            if ((temp0_290 & 4) != 0)
                                goto label_1401bf994
                            
                            goto label_1401bf413
                        
                        float* rax_71 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_71, 0x10)
                        arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm14[0].o)
                        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0xfa)
                        
                        if ((temp0_290 & 4) != 0)
                        label_1401bf994:
                            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *zmm0[0].q, 0x20)
                            arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                            zmm3 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                            
                            if ((temp0_290 & 8) == 0)
                                goto label_1401bf429
                            
                            goto label_1401bf9c1
                        
                    label_1401bf413:
                        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm3 = _mm256_insertf128_ps(zmm6, zmm5[0].o, 1)
                        
                        if ((temp0_290 & 8) == 0)
                        label_1401bf429:
                            zmm0 = arg_40
                            zmm2 = _mm256_blendv_ps(zmm0, zmm2, zmm3)
                            
                            if ((temp0_290 & 0x10) != 0)
                                goto label_1401bf9f4
                            
                            goto label_1401bf43f
                        
                    label_1401bf9c1:
                        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        float* rax_73 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *rax_73, 0x30)
                        arg10 = _mm256_blend_ps(arg10, zmm0, 0xf)
                        zmm0 = arg_40
                        zmm2 = _mm256_blendv_ps(zmm0, zmm2, zmm3)
                        
                        if ((temp0_290 & 0x10) != 0)
                        label_1401bf9f4:
                            zmm0[0].o = *zmm2[0]
                            zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 1)
                            arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            
                            if ((temp0_290 & 0x20) == 0)
                                goto label_1401bf449
                            
                            goto label_1401bfa14
                        
                    label_1401bf43f:
                        
                        if ((temp0_290 & 0x20) == 0)
                        label_1401bf449:
                            
                            if ((temp0_290 & 0x40) != 0)
                                goto label_1401bfa36
                            
                            goto label_1401bf453
                        
                    label_1401bfa14:
                        int64_t rax_75 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_75, 0x10)
                        arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                        
                        if ((temp0_290 & 0x40) == 0)
                        label_1401bf453:
                            
                            if (temp0_290 s< 0)
                            label_1401bfa5b:
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                int64_t rax_77 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm0[0].o =
                                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_77, 0x30)
                                arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                        else
                        label_1401bfa36:
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            float* rax_76 = zmm0[0].q
                            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *rax_76, 0x20)
                            arg10 = _mm256_insertf128_ps(arg10, zmm0[0].o, 1)
                            
                            if (temp0_290 s< 0)
                                goto label_1401bfa5b
                        
                        arg66 = arg10
                        arg_580 = _mm256_maskstore_ps(zmm1, arg10)
                        arg10[0].o = data_142fc95c0
                    
                    zmm0 = arg_140
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_100[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg_2e0)
                    zmm0 = arg_1e0.32
                    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm3[0].o, arg_180[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg_c0[0].o)
                    zmm6 = arg_2c0.32
                    zmm5[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm14[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    zmm0 = arg_300
                    zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm14[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm2[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm14[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm14[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                    zmm3[0].o = _mm_permute_ps(zmm10[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(zmm10[0].o, 0xfa)
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                    zmm2 = _mm256_blendv_ps(arg12, zmm2, zmm3)
                    zmm3[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                    zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                    zmm1 = _mm256_blendv_ps(arg12, zmm1, _mm256_insertf128_ps(zmm4, zmm3[0].o, 1))
                    int64_t r8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    double rcx_4 = zmm2[0]
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t rdx = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    double rbx_1 = zmm2[0]
                    int64_t rdi_4 = zmm1[0].q
                    int64_t rsi_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    int64_t rax_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm2[0].o = zx.o(*(arg8 i+ rcx_4))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + r8), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 i+ rbx_1), 2)
                    int64_t rcx_5 = zmm1[0].q
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + rdx), 3)
                    zmm2[0].o = zx.o(*(arg8 + rdi_4))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + rsi_2), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + rcx_5), 2)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg8 + rax_66), 3)
                    zmm3 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442420)
                    zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o = data_143442490
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                    zmm0[0].o = data_143442480
                    zmm5[0].o &= zmm0[0].o
                    zmm6[0].o = data_143442440
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
                    zmm4[0].o &= zmm0[0].o
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6[0].o)
                    zmm4 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6[0].o)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(
                            __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm3), data_1434424a0), 
                            arg_540), 
                        arg_5a0)
                    zmm3 = _mm256_cvtepi32_ps(zmm4)
                    zmm0 = data_143442460
                    zmm3 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm3, zmm0), arg_560), arg_5c0)
                    zmm1 = __vaddps_ymmqq_ymmqq_memqq(
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(_mm256_cvtepi32_ps(zmm1), zmm0), 
                            arg_580), 
                        arg_5e0)
                    arg56 = _mm256_maskstore_ps(zmm10, zmm2)
                    arg57 = _mm256_maskstore_ps(zmm10, zmm3)
                    arg58 = _mm256_maskstore_ps(zmm10, zmm1)
                    zmm14 = arg_340
                    zmm3[0].o = arg_a0[0].o
                    zmm5[0].o = arg_e0[0].o
                
                arg9 = zmm15
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm0[0].o, arg_80)
                zmm6[0].o = zmm0[0].o ^ zmm3[0].o
                zmm0[0].o = zmm5[0].o & zmm6[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg10[0].o = data_142fc95c0
                else
                    zmm0[0].o = data_1434422d0
                    zmm7[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm0[0].o, arg_220)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
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
                        zmm3 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm2 = arg14
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                        zmm8 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm2 = _mm256_and_ps(zmm8, zmm3)
                        bool cond:72_1 = _mm256_movemask_ps(zmm2) == 0
                        arg_80.32 = zmm3
                        arg_40[0].o = zmm6[0].o
                        arg_20[0].o = zmm7[0].o
                        
                        if (cond:72_1)
                            arg10 = arg_240.32
                        else
                            zmm2[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                            zmm3[0].o = data_1434426b0
                            zmm4[0].o = zmm3[0].o
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm3[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                            arg10 = arg_240.32
                            zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                            zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                            zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm5[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm5[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                            zmm5 = _mm256_and_ps(zmm0, zmm8)
                            zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                            zmm6[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm6[0].o, 1)
                            arg10 = _mm256_blendv_ps(arg10, zmm3, zmm0)
                            zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            zmm5[0].o = _mm_permute_ps(zmm3[0].o, 0x50)
                            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xfa)
                            zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                            zmm14 = _mm256_blendv_ps(zmm14, zmm2, zmm3)
                            zmm1 = arg_140
                            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg_100[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_2e0)
                            zmm1 = arg_1e0.32
                            zmm6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm6[0].o, arg_180[0].o)
                            zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, arg_c0[0].o)
                            zmm10 = arg_2c0.32
                            zmm4[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm1[0].o = data_1434426c0
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm4[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                            zmm10 = arg_300
                            zmm4[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm1[0].o)
                            zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm1[0].o)
                            arg11[0].o = zx.o(0)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm5[0].o)
                            zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                            zmm0 = _mm256_blendv_ps(arg12, zmm4, zmm0)
                            zmm2 = _mm256_blendv_ps(arg12, zmm2, zmm3)
                            int64_t rdx_1 = zmm0[0].q
                            int64_t r8_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t r10_1 = zmm0[0].q
                            int64_t rbx_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rdi_5 = zmm2[0]
                            int64_t rsi_3 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            int64_t rcx_6 = zmm0[0].q
                            int64_t rax_70 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zx.o(*(arg8 + rdx_1))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + r8_1), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + r10_1), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rbx_2), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 i+ rdi_5), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rsi_3), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rcx_6), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg8 + rax_70), 7)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                            zmm3[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm3 = arg_80.32
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                        
                        arg56 = _mm256_maskstore_ps(zmm3, _mm256_blendv_ps(arg12, zmm0, zmm8))
                        zmm0 = arg14
                        zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_143442a60)
                        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        zmm4[0].o = zmm0[0].o ^ zmm1[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                        zmm0[0].o ^= zmm1[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm0[0].o &= arg9[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        char temp0_541 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_541 == 0)
                            zmm10 = arg10
                            arg10 = zmm14
                            zmm8 = arg_260
                            zmm6[0].o = arg_40[0].o
                            zmm7[0].o = arg_20[0].o
                        else
                            int64_t rax_79
                            
                            if ((temp0_541 & 1) != 0)
                                zmm3[0].o = arg51
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg10[0], 0)
                                
                                if ((temp0_541 & 2) != 0)
                                    rax_79 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_79, 1)
                            else
                                zmm3[0].o = arg51
                                
                                if ((temp0_541 & 2) != 0)
                                    rax_79 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_79, 1)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            
                            if ((temp0_541 & 4) != 0)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm6[0], 2)
                            
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            
                            if ((temp0_541 & 8) != 0)
                                int64_t rax_81 = __vpextrq_gpr64q_xmmdq_immb(zmm6[0].o, 1)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rax_81, 3)
                            
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            arg_300[0].o = zmm4[0].o
                            
                            if ((temp0_541 & 0x10) != 0)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm14[0], 4)
                            
                            zmm4 = zmm14
                            zmm14[0].o = zmm3[0].o
                            zmm7[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                            zmm1[0].o = data_1434426b0
                            zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                            arg11[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x50)
                            zmm15[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x50)
                            zmm10 = arg10
                            
                            if ((temp0_541 & 0x20) != 0)
                                arg10 = zmm4
                                uint16_t* rax_83 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                zmm14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm14[0].o, *rax_83, 5)
                            else
                                arg10 = zmm4
                            
                            zmm1[0].o = data_1434426b0
                            zmm4[0].o = zmm1[0].o
                            zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm1[0].o)
                            zmm6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
                            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0xfa)
                            zmm8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xfa)
                            
                            if ((temp0_541 & 0x40) != 0)
                                zmm14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm14[0].o, *zmm7[0].q, 6)
                            
                            zmm4[0].o = arg_300[0].o
                            zmm0 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                            zmm1 = _mm256_insertf128_ps(arg11, zmm6[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                            zmm3 = _mm256_insertf128_ps(zmm15, zmm8[0].o, 1)
                            
                            if (temp0_541 s< 0)
                                uint16_t* rax_85 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                zmm14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm14[0].o, *rax_85, 7)
                            
                            arg11[0].o = zx.o(0)
                            arg12[0].o = zx.o(0)
                            zmm15 = arg_60
                            zmm8 = arg_260
                            zmm6[0].o = arg_40[0].o
                            zmm7[0].o = arg_20[0].o
                            zmm10 = _mm256_blendv_ps(zmm10, zmm1, zmm2)
                            arg10 = _mm256_blendv_ps(arg10, zmm0, zmm3)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm14[0].o, zx.o(0))
                            arg51 = zmm14[0].o
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm14[0])
                            zmm2[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                            zmm3 = arg_80.32
                        
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg11[0].o)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        zmm1[0].o ^= zmm2[0].o
                        arg57 = _mm256_maskstore_ps(zmm3, 
                            _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm4[0].o, 1), zmm0))
                        zmm0 = arg14
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
                        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                        zmm5[0].o = zmm0[0].o ^ zmm2[0].o
                        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                        zmm0[0].o ^= zmm2[0].o
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm0[0].o &= arg9[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_591 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_591 == 0)
                            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        else
                            int64_t rax_87
                            
                            if ((temp0_591 & 1) != 0)
                                zmm2[0].o = arg52
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm10[0], 0)
                                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                
                                if ((temp0_591 & 2) != 0)
                                    rax_87 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_87, 1)
                            else
                                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                zmm2[0].o = arg52
                                
                                if ((temp0_591 & 2) != 0)
                                    rax_87 = __vpextrq_gpr64q_xmmdq_immb(zmm10[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_87, 1)
                            
                            if ((temp0_591 & 4) == 0)
                                if ((temp0_591 & 8) != 0)
                                    goto label_1401b92bf
                                
                                goto label_1401bfd7c
                            
                            zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                            
                            if ((temp0_591 & 8) != 0)
                            label_1401b92bf:
                                zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                                int64_t rax_456 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_456, 3)
                                
                                if ((temp0_591 & 0x10) == 0)
                                    goto label_1401bfd86
                                
                                goto label_1401b92df
                            
                        label_1401bfd7c:
                            
                            if ((temp0_591 & 0x10) == 0)
                            label_1401bfd86:
                                
                                if ((temp0_591 & 0x20) != 0)
                                    goto label_1401b92ee
                                
                                goto label_1401bfd90
                            
                        label_1401b92df:
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0], 4)
                            
                            if ((temp0_591 & 0x20) != 0)
                            label_1401b92ee:
                                int64_t rax_458 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_458, 5)
                                
                                if ((temp0_591 & 0x40) == 0)
                                    goto label_1401bfd9a
                                
                                goto label_1401b9303
                            
                        label_1401bfd90:
                            
                            if ((temp0_591 & 0x40) != 0)
                            label_1401b9303:
                                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                
                                if (temp0_591 s< 0)
                                label_1401b931b:
                                    zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                                    int64_t rax_460 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_460, 7)
                            else
                            label_1401bfd9a:
                                
                                if (temp0_591 s< 0)
                                    goto label_1401b931b
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
                            arg52 = zmm2[0].o
                            zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                            zmm3[0].o = data_143442b40
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                            zmm3 = arg_80.32
                        
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                        zmm1[0].o ^= zmm4[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm5[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm1, zmm0)
                        arg58 = _mm256_maskstore_ps(zmm3, zmm0)
                        zmm5[0].o = arg_e0[0].o
                    
                    arg9 = zmm15
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg9[0].o, data_1434422d0)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                    zmm0[0].o ^= zmm6[0].o
                    zmm0[0].o &= zmm5[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg10[0].o = data_142fc95c0
                    else
                        zmm1[0].o = data_143442ad0
                        zmm2[0].o = zmm1[0].o
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, arg_220)
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm2[0].o &= zmm5[0].o
                        zmm3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm3[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm3[0].o, 0xf)
                        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                            zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0])
                            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                            zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                            arg56 = _mm256_maskstore_ps(zmm2, arg12)
                            arg57 = _mm256_maskstore_ps(zmm2, arg12)
                            arg58 = _mm256_maskstore_ps(zmm2, arg12)
                        
                        zmm1[0].o ^= zmm4[0].o
                        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm15[0].o, data_143442ad0)
                        zmm2[0].o ^= zmm4[0].o
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        bool cond:83_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                        arg10[0].o = data_142fc95c0
                        
                        if (not(cond:83_1))
                            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                            arg56 = _mm256_maskstore_ps(zmm0, arg12)
                            arg57 = _mm256_maskstore_ps(zmm0, arg12)
                            arg58 = _mm256_maskstore_ps(zmm0, arg12)
                        
                        arg9 = zmm15
            
            zmm3 = arg39.32
            zmm4 = arg_720.32
            zmm5 = arg42.32
            zmm0 = _mm256_sub_ps(arg56, zmm3)
            zmm1 = _mm256_sub_ps(arg57, zmm4)
            zmm2 = _mm256_sub_ps(arg58, zmm5)
            zmm6 = arg_6e0
            zmm0 = _mm256_mul_ps(zmm6, zmm0)
            zmm1 = _mm256_mul_ps(zmm6, zmm1)
            zmm2 = _mm256_mul_ps(zmm6, zmm2)
            arg39.32 = _mm256_maskstore_ps(zmm8, _mm256_add_ps(zmm3, zmm0))
            arg_720.32 = _mm256_maskstore_ps(zmm8, _mm256_add_ps(zmm4, zmm1))
            zmm0 = _mm256_add_ps(zmm5, zmm2)
            arg42.32 = _mm256_maskstore_ps(zmm8, zmm0)
            zmm4[0].o = arg19
            zmm5[0].o = arg24
            zmm2 = arg23
            zmm3 = arg20
