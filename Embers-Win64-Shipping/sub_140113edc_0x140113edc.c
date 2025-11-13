// 函数: sub_140113edc
// 地址: 0x140113edc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
int128_t var_d8 = arg6[0].o
int128_t var_e8 = arg5[0].o
int64_t rax = sx.q(arg16)
float zmm14[0x8]
zmm14[0].o = arg14
int32_t rdx_1 = *(&data_1434425e0 + (rax << 2)) * *(&data_1434425c0 + (rax << 2))
int32_t i_1 = ((arg17 s>> 0x1f u>> 0x1d) + arg17) & 0xfffffff8
int32_t var_6c8 = rax.d
uint64_t result
double var_560[0x2]
double var_480[0x4]
uint64_t rcx_6
double zmm0[0x4]
float zmm1[0x8]
int32_t zmm2[0x8]
float zmm3[0x8]
int32_t zmm4[0x8]
uint32_t zmm5[0x8]

if (i_1 s<= 0)
    rcx_6 = 0
    result = zx.q(arg17)
    
    if (0 s< result.d)
    label_14011591d:
        zmm0[0].o = zx.o(rcx_6.d)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
        zmm2[0].o = zx.o(result.d)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm5 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm3 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
        int64_t r10_11 = sx.q(zmm3[0])
        int32_t* rcx_54 = arg2
        int64_t r13_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        int64_t rdx_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        int64_t rbx_23 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        int64_t rax_64 = sx.q(zmm3[0])
        int64_t rsi_25 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm4[0].o = zx.o(*(rcx_54 + rax_64))
        int32_t temp0_671 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_54 + rsi_25), 1)
        int64_t rax_66 = sx.q(temp0_671)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_54 + rax_66), 2)
        arg5[0].o = zx.o(*(rcx_54 + r10_11))
        int64_t rsi_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_54 + rsi_28), 3)
        double var_400_1[0x2] = zmm3[0].o
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_54 + r13_8), 1)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + rdx_36), 2)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + rbx_23), 3)
        float var_260_2[0x8] = zmm3
        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_142fc9520)
        uint64_t r11_8 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1))
        uint32_t* rsi_29 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2))
        uint64_t rcx_55 = zx.q(zmm3[0])
        uint32_t* r13_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        zmm4[0].o = zx.o(*(rcx_55 + rcx_54 + r10_11))
        uint64_t rbx_24 = zx.q(zmm3[0])
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r11_8 + rcx_54 + r13_8), 1)
        uint64_t r10_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_29 + rcx_54 + rdx_36), 2)
        uint32_t* r12_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r13_9 + rcx_54 + rbx_23), 3)
        uint32_t* rdi_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 4)
        zmm4[0].o = zx.o(*(rbx_24 + rcx_54 + rax_64))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r10_12 + rcx_54 + rsi_25), 1)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r12_8 + rcx_54 + rax_66), 2)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_20 + rcx_54 + rsi_28), 3)
        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 4)
        void* var_6a0_1
        var_6a0_1.32 = zmm5
        zmm3 = _mm256_and_ps(zmm5, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
        int64_t rax_69 = sx.q(zmm3[0])
        int64_t rdx_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm4[0].o = zx.o(*(arg3 + rax_69))
        int64_t rax_71 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rdx_43), 1)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rax_71), 2)
        int64_t rdx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rdx_45), 3)
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        zmm4[0].o = zx.o(*(rcx_55 + arg3 + rax_69))
        float rcx_56 = zmm3[0]
        int32_t var_630
        var_630.q = r11_8
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r11_8 + arg3 + rdx_43), 1)
        int64_t rcx_57 = sx.q(rcx_56)
        int32_t temp0_705 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
        zmm5[0].o = zx.o(*(arg3 + rcx_57))
        int64_t rbx_28 = sx.q(temp0_705)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_29 + arg3 + rax_71), 2)
        int32_t* rsi_30 = rbx_24
        int32_t temp0_707 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg3 + rbx_28), 1)
        int64_t rax_74 = sx.q(temp0_707)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r13_9 + arg3 + rdx_45), 3)
        int32_t temp0_710 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg3 + rax_74), 2)
        int64_t rdx_48 = sx.q(temp0_710)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg3 + rdx_48), 3)
        zmm5[0].o = zx.o(*(rsi_30 + arg3 + rcx_57))
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r10_12 + arg3 + rbx_28), 1)
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r12_8 + arg3 + rax_74), 2)
        arg10 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        zmm0 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        void* var_680_2
        var_680_2.32 = zmm0
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        var_480[0] = rdi_20
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_20 + arg3 + rdx_48), 3)
        zmm1 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
        arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
        zmm2[0].o = data_1434422d0
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
        arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        zmm0[0].o &= arg7[0].o
        arg8[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
        zmm2[0].o = zmm4[0].o & arg6[0].o
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
        arg6[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        char temp0_730 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
        arg7[0].o = zx.o(0)
        int32_t rbx_30 = var_6c8
        void* var_660_2
        var_660_2.32 = arg10
        
        if (temp0_730 == 0)
            goto label_140115cc5
        
        zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
        arg7 = var_680_2.32
        zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
        char temp0_736 = _mm256_movemask_ps(zmm0)
        zmm5[0].o = zx.o(0)
        arg10[0].o = zx.o(0)
        arg7[0].o = zx.o(0)
        
        if (temp0_736 != temp0_730)
            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
            arg7 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
        label_140115cc5:
            zmm4 = _mm256_cmp_ps(arg9, arg9, 0xf)
            arg11 = _mm256_xor_ps(arg7, zmm4)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm5[0].o = zx.o(0)
            arg10[0].o = zx.o(0)
            
            if (not(zmm4[0].o f>= zmm14[0]))
                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                arg10 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                
                if (zmm14[0].o f>= 1f)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg11, var_6a0_1.32)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    arg10 = _mm256_blendv_ps(arg9, arg10, zmm0)
                    zmm5 = arg10
                else
                    zmm0[0].o = _mm_permute_ps(zmm14[0].o, 0)
                    zmm0 = _mm256_mul_ps(_mm256_insertf128_ps(zmm0, zmm0[0].o, 1), 
                        _mm256_cvtepi32_ps(arg10))
                    arg7 = __vandps_ymmqq_ymmqq_memqq(arg11, var_6a0_1.32)
                    zmm14 = _mm256_round_ps(zmm0, 9)
                    zmm2 = _mm256_cvttps_epi32(zmm14)
                    arg9[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                    zmm2 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                    zmm5[0].o = zx.o(0)
                    zmm5 = _mm256_blendv_ps(zmm5, zmm2, arg7)
                    arg9[0].o = zx.o(0)
                    
                    if (arg15 != 1)
                        arg9 = _mm256_sub_ps(zmm0, zmm14)
                    
                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                    zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                    zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm2[0].o = zx.o(0)
                    arg10 = _mm256_blendv_ps(zmm2, zmm0, arg7)
            
            zmm0[0].o = zx.o(0)
            arg7 = _mm256_blendv_ps(zmm0, arg9, arg11)
        
        zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
        int32_t rax_77
        rax_77.b = rbx_30 == 3
        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm2[0].o = data_142d3f5b0
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = zx.o(neg.d(rax_77))
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm2)
        arg11[0].o = zx.o(0)
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg11, data_143442540, zmm0)
        arg5 = _mm256_insertf128_ps(arg12, arg13[0].o, 1)
        arg12 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm14 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg13 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm0[0].o = zx.o(rdx_1)
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        uint64_t r12_9 = zx.q(rbx_30)
        void* var_580_1
        var_580_1.32 = arg7
        double var_5c0_1[0x4] = arg5
        var_560.32 = zmm14
        float var_360_2[0x8] = zmm3
        int32_t var_500_2[0x8] = zmm4
        uint64_t var_5e0_2
        uint32_t* var_5a0_1
        float var_4e0_1[0x8]
        int32_t var_4c0_1[0x8]
        uint32_t var_4a0_1[0x8]
        
        if (rbx_30 u> 6)
        label_140116a7e:
            zmm0 = var_6a0_1.32
            var_4e0_1 = _mm256_maskstore_ps(zmm0, arg11)
            var_4c0_1 = _mm256_maskstore_ps(zmm0, arg11)
            var_4a0_1 = _mm256_maskstore_ps(zmm0, arg11)
            arg11 = var_660_2.32
            zmm14 = var_680_2.32
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            arg9 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (r12_9)
                case 0, 1
                    zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                    arg7 = zmm5
                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm4[0].o)
                    zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                    zmm5 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    arg8 = var_6a0_1.32
                    zmm0[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                    zmm1[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    arg5[0].o = arg6[0].o
                    arg6 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                    zmm2 = _mm256_blendv_ps(zmm1, zmm3, arg6)
                    int64_t r8 = zmm2[0].q
                    void* rcx_62 = arg4 + r8
                    int64_t r10_13 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    void* rsi_31 = arg4 + r10_13
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t r11_9 = zmm2[0].q
                    int64_t r14_11 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    arg9 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm2 = _mm256_blendv_ps(zmm1, arg9, arg6)
                    zmm3[0].o = *(zmm2[0].q + rcx_62)
                    int64_t rax_80 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t rdx_50 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_80 + rsi_31), 0x10)
                    float* rax_81 = zmm2[0].q
                    zmm2 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm4 = _mm256_blendv_ps(zmm1, zmm2, arg6)
                    arg6[0].o = arg5[0].o
                    arg5[0].o = *(zmm4[0].q + rcx_62)
                    float* rcx_63 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    float* rbx_32 = zmm4[0].q
                    float* rdi_21 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4 = _mm256_blendv_ps(zmm1, zmm5, zmm0)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_63 + rsi_31), 0x10)
                    int64_t rcx_64 = zmm4[0].q
                    void* rsi_32 = arg4 + r11_9
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_81 + rsi_32), 0x20)
                    int64_t rax_82 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_32 + rsi_32), 0x20)
                    void* rsi_33 = arg4 + rcx_64
                    void* rbx_33 = arg4 + r14_11
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_50 + rbx_33), 0x30)
                    void* rdx_51 = arg4 + rax_82
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_21 + rbx_33), 0x30)
                    int64_t rdi_22 = zmm4[0].q
                    arg5 = _mm256_blendv_ps(zmm1, arg9, zmm0)
                    int32_t* rbx_34 = arg5[0]
                    zmm0 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                    zmm1[0].o = *(rbx_34 + rsi_33)
                    zmm2[0].o = *(zmm0[0] + rsi_33)
                    void* rsi_34 = arg4 + rdi_22
                    float* rbx_36 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_36 + rdx_51), 0x10)
                    float* rbx_37 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_37 + rdx_51), 0x10)
                    int64_t rdx_52 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm4[0].q + rsi_34), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(zmm0[0] + rsi_34), 0x20)
                    void* rsi_35 = arg4 + rdx_52
                    int64_t rbx_40 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_40 + rsi_35), 0x30)
                    float* rbx_41 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_41 + rsi_35), 0x30)
                    zmm2[0].o = *(arg4 + rcx_64)
                    zmm4[0].o = *(arg4 + r8)
                    rbx_30 = var_6c8
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r10_13), 0x10)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r11_9), 0x20)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r14_11), 0x30)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rax_82), 0x10)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rdi_22), 0x20)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rdx_52), 0x30)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                    var_4e0_1 = _mm256_maskstore_ps(arg8, zmm2)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                    var_4c0_1 = _mm256_maskstore_ps(arg8, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                    zmm5 = arg7
                    var_4a0_1 = _mm256_maskstore_ps(arg8, zmm0)
                    arg11 = var_660_2.32
                    zmm14 = var_680_2.32
                case 2
                    zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                    arg7 = zmm5
                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm4[0].o)
                    zmm5 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    arg8 = var_6a0_1.32
                    zmm0[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                    arg5[0].o = arg6[0].o
                    arg6 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm3 = _mm256_blendv_ps(zmm0, zmm1, arg6)
                    zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    int64_t r8_1 = zmm3[0].q
                    int64_t r10_14 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    void* rdi_23 = arg4 + r8_1
                    zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    int64_t r11_10 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    void* rsi_36 = arg4 + r10_14
                    arg9 = _mm256_broadcast_sd(9.8813129168249309e-324)
                    zmm3 = _mm256_blendv_ps(zmm0, arg9, arg6)
                    int64_t r14_12 = zmm2[0].q
                    void* rax_83 = zmm3[0].q
                    uint16_t* rbx_42 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    uint16_t* rdx_53 = zmm2[0].q
                    zmm3[0].o = zx.o(*(rax_83 + rdi_23))
                    int64_t rax_85 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(rbx_42 + rsi_36), 1)
                    zmm3 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm4 = _mm256_blendv_ps(zmm0, zmm3, arg6)
                    arg6[0].o = arg5[0].o
                    uint32_t rdi_24 = zx.d(*(zmm4[0].q + rdi_23))
                    uint16_t* rbx_44 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    arg5[0].o = zx.o(rdi_24)
                    uint16_t* rdi_25 = zmm4[0].q
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rbx_44 + rsi_36), 1)
                    uint16_t* rsi_37 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4 = _mm256_blendv_ps(zmm0, zmm5, zmm1)
                    void* rbx_45 = arg4 + r14_12
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rdx_53 + rbx_45), 2)
                    void* rdx_54 = arg4 + r11_10
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rdi_25 + rbx_45), 2)
                    int64_t rdi_26 = zmm4[0].q
                    void* rbx_46 = arg4 + rdi_26
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_85 + rdx_54), 3)
                    int64_t rax_86 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    arg5 = _mm256_blendv_ps(zmm0, arg9, zmm1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rsi_37 + rdx_54), 3)
                    void* rdx_55 = arg4 + rax_86
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg5[0] i+ rbx_46), 4)
                    int64_t rsi_39 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_39 + rdx_55), 5)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0 = _mm256_blendv_ps(zmm0, zmm3, zmm1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm0[0] + rbx_46), 4)
                    uint16_t* rsi_41 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rcx_65 = zmm4[0].q
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_41 + rdx_55), 5)
                    void* rdx_56 = arg4 + rcx_65
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm3[0].q + rdx_56), 6)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm0[0] + rdx_56), 6)
                    rbx_30 = var_6c8
                    zmm5[0].o = zx.o(*(arg4 + r8_1))
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r10_14), 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r14_12), 2)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r11_10), 3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rdi_26), 4)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rax_86), 5)
                    int64_t rax_87 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rcx_65), 6)
                    void* rcx_66 = arg4 + rax_87
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg4 + rax_87), 7)
                    int64_t rax_88 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_88 + rcx_66), 7)
                    int64_t rax_89 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                    zmm3[0].o = zx.o(0)
                    zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zx.o(0))
                    zmm5[0].o = data_1434424d0
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm4[0].o, 1))
                    zmm4 = data_1434424e0
                    zmm0 = _mm256_div_ps(zmm0, zmm4)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    zmm2 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm2[0].o, 1)), zmm4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_89 + rcx_66), 7)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    zmm5 = arg7
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 1)), zmm4)
                    zmm3 = data_143442560
                    var_4e0_1 = _mm256_maskstore_ps(arg8, _mm256_mul_ps(zmm0, zmm3))
                    var_4c0_1 = _mm256_maskstore_ps(arg8, _mm256_mul_ps(zmm2, zmm3))
                    zmm0 = _mm256_mul_ps(zmm1, zmm3)
                    var_4a0_1 = _mm256_maskstore_ps(arg8, zmm0)
                    arg11 = var_660_2.32
                    zmm14 = var_680_2.32
                case 3
                    zmm4 = var_660_2.32
                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    arg7 = var_680_2.32
                    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                    uint32_t var_280_1[0x8] = zmm5
                    zmm5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm0 = _mm256_and_ps(zmm5, zmm3)
                    int64_t rax_91 = sx.q(zmm0[0].d)
                    void* r8_2 = arg4 + rax_91
                    int32_t temp0_961 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                    int32_t temp0_962 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                    int32_t temp0_963 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                    arg11[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg7[0].o = *(rcx_55 + r8_2)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_142fc9540)
                    zmm2[0].o = *(zx.q(zmm0[0].d) + r8_2)
                    int128_t var_420_1 = zmm2[0].o
                    var_5e0_2.32 = arg13
                    arg13 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_1434423c0)
                    zmm2[0].o = *(zx.q(arg13[0].d) + r8_2)
                    int128_t var_430_1 = zmm2[0].o
                    int128_t var_410_1 = arg6[0].o
                    arg6 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_1434423e0)
                    zmm2[0].o = *(zx.q(arg6[0].d) + r8_2)
                    int128_t var_440_1 = zmm2[0].o
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442400)
                    zmm2[0].o = *(zx.q(zmm5[0]) + r8_2)
                    int128_t var_450_1 = zmm2[0].o
                    int64_t rax_98 = sx.q(arg11[0])
                    void* rdi_27 = arg4 + rax_98
                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                    zmm4[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm4 = var_5e0_2.32
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, arg5[0].o)
                    zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_5e0_2.o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    arg8 = var_6a0_1.32
                    zmm2[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg5[0].o = zx.o(0)
                    arg9 = _mm256_blendv_ps(arg5, zmm1, zmm2)
                    zmm1[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2[0].o = *(rsi_30 + rdi_27)
                    int32_t temp0_993 = __vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg5, zmm3, zmm1)
                    int32_t temp0_995 = __vpextrd_memd_xmmdq_immb(arg11[0].o, 2)
                    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int32_t temp0_997 = __vpextrd_memd_xmmdq_immb(arg11[0].o, 3)
                    zmm4[0].o = *(zx.q(zmm3[0]) + rdi_27)
                    arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    uint64_t rax_99 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int32_t var_618
                    var_618.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    uint64_t rax_101 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = *(zx.q(arg5[0].d) + rdi_27)
                    uint64_t rsi_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    uint64_t rax_102 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    uint64_t rax_103 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    uint64_t r11_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                    uint64_t r14_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                    zmm3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    uint64_t rax_104 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                    int32_t* rax_105 = zx.q(zmm3[0])
                    uint64_t rdx_58 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    uint64_t r10_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    arg5[0].o = *(rax_105 + rdi_27)
                    uint64_t r12_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    uint64_t rcx_67 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    uint64_t r8_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int32_t* rax_106 = zx.q(zmm3[0])
                    uint64_t rbx_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = *(rax_106 + rdi_27)
                    int64_t rax_107 = sx.q(temp0_993)
                    void* rdi_28 = arg4 + rax_107
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_12 + rdi_28), 0x10)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_44 + rdi_28), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_11 + rdi_28), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_58 + rdi_28), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_67 + rdi_28), 0x10)
                    int64_t rcx_68 = sx.q(temp0_995)
                    void* rdx_59 = arg4 + rcx_68
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r12_8 + rdx_59), 0x20)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_102 + rdx_59), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_14 + rdx_59), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_15 + rdx_59), 0x20)
                    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r8_3 + rdx_59), 0x20)
                    int64_t rdx_60 = sx.q(temp0_997)
                    void* rdi_31 = arg4 + rdx_60
                    arg11[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_480[0] i+ rdi_31), 0x30)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_103 + rdi_31), 0x30)
                    var_480[0].o = zmm2[0].o
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_104 + rdi_31), 0x30)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_10 + rdi_31), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_48 + rdi_31), 0x30)
                    var_5a0_1.o = zmm0[0].o
                    uint64_t rbx_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1))
                    uint64_t r10_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                    float* r8_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3))
                    uint64_t rsi_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    uint64_t r14_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    float* r11_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    zmm3[0].o = *(arg4 + rax_91)
                    arg5[0].o = *(arg4 + rax_98)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_107), 0x10)
                    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rcx_68), 0x20)
                    arg13[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdx_60), 0x30)
                    int64_t rax_108 = sx.q(temp0_961)
                    void* rcx_69 = arg4 + rax_108
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(var_630.q + rcx_69), 0x10)
                    zmm0[0].o = var_420_1
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_99 + rcx_69), 0x10)
                    zmm0[0].o = var_430_1
                    arg7[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_49 + rcx_69), 0x10)
                    zmm0[0].o = var_440_1
                    zmm14[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_48 + rcx_69), 0x10)
                    float* rdx_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    zmm0[0].o = var_450_1
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_63 + rcx_69), 0x10)
                    uint64_t rcx_70 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    float* rdx_64 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rax_108), 0x10)
                    int64_t rax_109 = sx.q(temp0_962)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rax_109), 0x20)
                    void* rax_110 = arg4 + rax_109
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_29 + rax_110), 0x20)
                    int64_t rsi_50 = sx.q(temp0_963)
                    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rsi_50), 0x30)
                    arg13 = _mm256_insertf128_ps(zmm3, arg13[0].o, 1)
                    void* rsi_51 = arg4 + rsi_50
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r13_9 + rsi_51), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(var_618.q + rax_110), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_101 + rsi_51), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r10_16 + rax_110), 0x20)
                    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r8_4 + rsi_51), 0x30)
                    rbx_30 = var_6c8
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm14[0].o, *(r14_15 + rax_110), 0x20)
                    zmm14 = var_680_2.32
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_12 + rsi_51), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_70 + rax_110), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_64 + rsi_51), 0x30)
                    int64_t rax_111 = arg9[0].q
                    int64_t rcx_71 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    double rdx_65 = arg6[0]
                    int64_t rdi_36 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    arg6[0].o = zx.o(*(arg4 + rax_111))
                    int64_t rax_112 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rcx_71), 1)
                    int64_t rcx_72 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 i+ rdx_65), 2)
                    int64_t rdx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rdi_36), 3)
                    int64_t rdi_37 = zmm1[0].q
                    zmm1[0].o = zx.o(*(arg4 + rcx_72))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_112), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdi_37), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdx_66), 3)
                    arg11 = _mm256_insertf128_ps(zmm3, arg11[0].o, 1)
                    arg9 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, var_480[0].o, 1)
                    zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
                    zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                    arg7 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_5a0_1.o, 1)
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg6, zmm1[0].o, 1), 
                        data_143442420)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0xa)
                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm3[0].o = data_143442490
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                    zmm0 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm0[0].o, 1)), 
                        data_1434424a0)
                    zmm3[0].o = data_143442480
                    zmm5[0].o &= zmm3[0].o
                    zmm3[0].o &= arg5[0].o
                    arg5[0].o = data_143442440
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                    zmm3 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm5[0].o, 1))
                    zmm5 = data_143442460
                    zmm3 = _mm256_div_ps(zmm3, zmm5)
                    zmm0 = _mm256_add_ps(arg13, _mm256_mul_ps(zmm4, zmm0))
                    arg13 = var_5e0_2.32
                    zmm2 = _mm256_mul_ps(zmm2, zmm3)
                    zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0x15)
                    arg6[0].o = var_410_1
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 1)), zmm5)
                    zmm5 = var_280_1
                    zmm2 = _mm256_add_ps(arg11, zmm2)
                    arg11 = var_660_2.32
                    var_4e0_1 = _mm256_maskstore_ps(arg8, zmm0)
                    zmm0 = _mm256_mul_ps(arg7, zmm1)
                    var_4c0_1 = _mm256_maskstore_ps(arg8, zmm2)
                    zmm0 = _mm256_add_ps(arg9, zmm0)
                    var_4a0_1 = _mm256_maskstore_ps(arg8, zmm0)
                case 4, 5
                    goto label_140116a7e
                case 6
                    zmm0[0].o = zx.o(0)
                    zmm1 = var_6a0_1.32
                    var_4e0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                    var_4c0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                    var_4a0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                    arg11 = var_660_2.32
                    zmm14 = var_680_2.32
        
        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm14[0].o, arg11[0].o)
        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        zmm0[0].o = zmm4[0].o & not.o(arg7[0].o)
        arg5[0].o = zmm5[0].o & not.o(zmm3[0].o)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            zmm1 = _mm256_insertf128_ps(zmm3, arg7[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm4[0].o ^= zmm3[0].o
            zmm3[0].o ^= zmm5[0].o
            zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
            arg8 = _mm256_and_ps(zmm3, zmm1)
            double var_340_1[0x4]
            float var_320_1[0x8]
            
            if (rbx_30 u> 6)
            label_140116dfd:
                zmm0[0].o = zx.o(0)
                var_340_1 = _mm256_maskstore_ps(arg8, zmm0)
                var_320_1 = _mm256_maskstore_ps(arg8, zmm0)
            else
                zmm1 = var_500_2
                zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
                zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                arg10 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                
                switch (r12_9)
                    case 0, 1
                        zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(var_5c0_1[0].o, 1)
                        arg6 = var_560.32
                        zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_5c0_1[0].o, arg10[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg12 = arg11
                        arg11[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, zmm2)
                        zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg11, zmm4, arg5)
                        double r8_5 = zmm0[0]
                        int64_t r10_17 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        void* rcx_75 = arg4 i+ r8_5
                        void* r11_13 = arg4 + r10_17
                        arg10[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r14_16 = zmm1[0].q
                        void* rbx_51 = arg4 + r14_16
                        int64_t rsi_52 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rdx_67 = arg4 + rsi_52
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg9 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg6 = _mm256_blendv_ps(arg11, arg9, arg5)
                        double rax_114 = arg6[0]
                        zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm4 = _mm256_blendv_ps(arg11, zmm1, arg5)
                        arg5[0].o = *(rax_114 i+ rbx_51)
                        zmm0[0].o = *(zmm4[0].q + rbx_51)
                        int64_t rax_116 = zmm5[0].q
                        float* rbx_52 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_52 + rdx_67), 0x10)
                        float* rbx_53 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_53 + rdx_67), 0x10)
                        void* rdx_68 = arg4 + rax_116
                        arg9 = _mm256_blendv_ps(arg11, arg9, zmm2)
                        zmm3[0].o = *(arg9[0].q + rcx_75)
                        zmm1 = _mm256_blendv_ps(arg11, zmm1, zmm2)
                        arg11 = arg12
                        zmm2[0].o = *(zmm1[0].q + rcx_75)
                        int64_t rcx_76 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(zmm5[0].q + rdx_68), 0x20)
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(zmm4[0].q + rdx_68), 0x20)
                        void* rdx_69 = arg4 + rcx_76
                        int64_t rbx_58 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_58 + rdx_69), 0x30)
                        int64_t rbx_59 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_59 + r11_13), 0x10)
                        float* rbx_60 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_60 + rdx_69), 0x30)
                        float* rdx_70 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_70 + r11_13), 0x10)
                        int64_t rdx_71 = arg10[0].q
                        void* rbx_61 = arg4 + rdx_71
                        zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(zmm4[0].q + rbx_61), 0x20)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(zmm1[0].q + rbx_61), 0x20)
                        arg5[0].o = *(arg4 i+ r8_5)
                        arg6[0].o = *(arg4 + r14_16)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rsi_52), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rax_116), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + rcx_76), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r10_17), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdx_71), 0x20)
                        int64_t rax_117 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rax_117), 0x30)
                        void* rax_118 = arg4 + rax_117
                        float* rcx_77 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_77 + rax_118), 0x30)
                        float* rcx_78 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_78 + rax_118), 0x30)
                        var_340_1 =
                            _mm256_maskstore_ps(arg8, _mm256_insertf128_ps(arg5, arg6[0].o, 1))
                        var_320_1 =
                            _mm256_maskstore_ps(arg8, _mm256_insertf128_ps(zmm3, zmm5[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(var_5c0_1[0].o, 1)
                        arg6 = var_560.32
                        zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_5c0_1[0].o, arg10[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        zmm1 = _mm256_blendv_ps(arg9, zmm1, zmm5)
                        zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg9, zmm3, zmm2)
                        int64_t r8_6 = zmm1[0].q
                        void* rsi_53 = arg4 + r8_6
                        int64_t r10_18 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rcx_79 = arg4 + r10_18
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t r11_14 = zmm1[0].q
                        int64_t rdi_40 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rdx_72 = arg4 + r11_14
                        arg5 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg6 = _mm256_blendv_ps(arg9, arg5, zmm5)
                        void* rbx_62 = arg4 + rdi_40
                        zmm1[0].o = zx.o(*(arg6[0] i+ rsi_53))
                        int64_t rax_121 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_121 + rcx_79), 1)
                        zmm4 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm5 = _mm256_blendv_ps(arg9, zmm4, zmm5)
                        uint32_t rax_123 = zx.d(*(zmm5[0].q + rsi_53))
                        uint16_t* rsi_54 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o = zx.o(rax_123)
                        int64_t rax_124 = zmm3[0].q
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_54 + rcx_79), 1)
                        void* rcx_80 = arg4 + rax_124
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg6[0] i+ rdx_72), 2)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm5[0].q + rdx_72), 2)
                        int64_t rdx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg9, arg5, zmm2)
                        uint16_t* rsi_57 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rsi_57 + rbx_62), 3)
                        uint16_t* rsi_58 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_58 + rbx_62), 3)
                        void* rsi_59 = arg4 + rdx_73
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg5[0] i+ rcx_80), 4)
                        uint16_t* rbx_64 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rbx_64 + rsi_59), 5)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm2 = _mm256_blendv_ps(arg9, zmm4, zmm2)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rcx_80), 4)
                        uint16_t* rcx_81 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_66 = zmm3[0].q
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_81 + rsi_59), 5)
                        void* rcx_82 = arg4 + rbx_66
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm4[0].q + rcx_82), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rcx_82), 6)
                        zmm5[0].o = zx.o(*(arg4 + r8_6))
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r10_18), 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + r11_14), 2)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rdi_40), 3)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rax_124), 4)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rdx_73), 5)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rbx_66), 6)
                        int64_t rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg4 + rax_125), 7)
                        void* rax_126 = arg4 + rax_125
                        int64_t rcx_84 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_84 + rax_126), 7)
                        uint16_t* rcx_85 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                        zmm4[0].o = zx.o(0)
                        zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                        zmm5[0].o = data_1434424d0
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, zmm3[0].o, 1))
                        zmm3 = data_1434424e0
                        zmm2 = _mm256_div_ps(zmm2, zmm3)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1)), zmm3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_85 + rax_126), 7)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, zmm0[0].o, 1)), zmm3)
                        zmm3 = data_143442560
                        var_340_1 = _mm256_maskstore_ps(arg8, _mm256_mul_ps(zmm2, zmm3))
                        var_320_1 = _mm256_maskstore_ps(arg8, _mm256_mul_ps(zmm1, zmm3))
                        zmm0 = _mm256_mul_ps(zmm0, zmm3)
                    case 3
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg5 = arg12
                        arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm14 = __vandps_ymmqq_ymmqq_memqq(arg12, var_360_2)
                        var_500_2[0] = __vextractps_memd_xmmdq_immb(zmm14[0].o, 1)
                        uint64_t var_6c0_1
                        var_6c0_1.d = __vextractps_memd_xmmdq_immb(zmm14[0].o, 2)
                        var_6a0_1.d = __vextractps_memd_xmmdq_immb(zmm14[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                        int64_t rax_128 = sx.q(zmm0[0].d)
                        void* r8_7 = arg4 + rax_128
                        zmm1[0].o = *(arg4 + rax_128)
                        int64_t rax_130 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_1299 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_130), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r10_19), 0x20)
                        uint32_t* var_520_1
                        var_520_1.o = zmm0[0].o
                        arg9 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9520)
                        float* rcx_86 = zx.q(__vextractps_gpr32_xmmdq_immb(arg9[0].o, 1))
                        void* rdi_41 = arg4 + rax_130
                        float* rax_131 = zx.q(__vextractps_gpr32_xmmdq_immb(arg9[0].o, 2))
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm1[0].o = *(zx.q(zmm0[0].d) + r8_7)
                        uint64_t rax_132 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t rbx_67 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t rsi_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_132 + rdi_41), 0x10)
                        var_630.o = zmm0[0].o
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9540)
                        uint64_t var_540_2
                        var_540_2.32 = zmm0
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        var_480[0].o = zmm0[0].o
                        zmm1[0].o = *(zx.q(zmm0[0].d) + r8_7)
                        uint64_t rax_134 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_134 + rdi_41), 0x10)
                        var_5a0_1.o = zmm0[0].o
                        zmm1[0].o = _mm256_extractf128_ps(var_5c0_1[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                        zmm4 = var_560.32
                        zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        arg6 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423c0)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(var_5c0_1[0].o, arg10[0].o)
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        uint64_t rcx_87 = zx.q(zmm5[0])
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        uint64_t rax_135 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                        zmm4[0].o = *(rcx_87 + r8_7)
                        var_5c0_1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_135 + rdi_41), 0x10)
                        var_5c0_1[0].o = var_5c0_1[0].o
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm3[0].o = _mm_permute_ps(arg8[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg8[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm3 = _mm256_blendv_ps(arg5, zmm2, zmm3)
                        zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg10[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423e0)
                        zmm2 = _mm256_blendv_ps(arg5, zmm1, zmm2)
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg5[0].o = *(zx.q(zmm1[0]) + r8_7)
                        float* rax_137 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_137 + rdi_41), 0x10)
                        float rdx_75 = zmm14[0]
                        arg12 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442400)
                        zmm14[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        int32_t* rcx_88 = zx.q(zmm14[0])
                        float* rax_138 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm14[0].o, 1))
                        arg13[0].o = *(rcx_88 + r8_7)
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rax_138 + rdi_41), 0x10)
                        var_560[0] = zx.q(__vextractps_gpr32_xmmdq_immb(arg9[0].o, 3))
                        uint64_t rcx_89 = zx.q(arg9[0])
                        void* rdi_42 = arg4 + r10_19
                        var_5c0_1[0].o = var_630.o
                        arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_5c0_1[0].o, 
                            *(rbx_67 + rdi_42), 0x20)
                        var_5c0_1[0].o = var_480[0].o
                        uint64_t rbx_68 = zx.q(__vextractps_gpr32_xmmdq_immb(var_5c0_1[0].o, 2))
                        arg11[0].o = var_5a0_1.o
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rbx_68 + rdi_42), 0x20)
                        var_5e0_2.o = zmm4[0].o
                        uint64_t rbx_69 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                        zmm4[0].o = var_5c0_1[0].o
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_69 + rdi_42), 0x20)
                        var_360_2[0].o = zmm4[0].o
                        uint64_t rbx_70 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_70 + rdi_42), 0x20)
                        uint64_t rbx_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm14[0].o, 2))
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_71 + rdi_42), 0x20)
                        int64_t rdx_76 = sx.q(rdx_75)
                        zmm4 = var_540_2.32
                        int32_t* rbx_72 = zx.q(zmm4[0])
                        float* rdi_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                        var_630.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                        uint64_t rax_141 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                        arg11[0].o = *(arg4 + rdx_76)
                        void* rdx_77 = arg4 + rdx_76
                        float* r11_15 = zx.q(__vextractps_gpr32_xmmdq_immb(var_5c0_1[0].o, 3))
                        var_5c0_1[0].o = *(rcx_89 + rdx_77)
                        int64_t rcx_90 = sx.q(temp0_1299)
                        zmm4[0].o = var_520_1.o
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rcx_90), 0x30)
                        var_520_1.o = zmm4[0].o
                        void* rcx_91 = arg4 + rcx_90
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rsi_63 + rcx_91), 0x30)
                        var_5c0_1[0].o = zmm4[0].o
                        int32_t* rsi_64 = zx.q(arg6[0].d)
                        float* r14_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        float* r13_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        uint64_t r12_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = *(rbx_72 + rdx_77)
                        int64_t rbx_73 = sx.q(var_500_2[0])
                        arg11[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(arg4 + rbx_73), 0x10)
                        float* r10_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                        zmm5[0].o = *(rsi_64 + rdx_77)
                        uint64_t rsi_65 = zx.q(arg10[0])
                        float* r8_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = *(rsi_65 + rdx_77)
                        int32_t* rsi_66 = zx.q(arg12[0])
                        uint64_t rax_142 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm14[0].o, 3))
                        zmm14[0].o = *(rsi_66 + rdx_77)
                        void* rdx_78 = arg4 + rbx_73
                        var_5c0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_5c0_1[0].o, 
                            *(rcx_86 + rdx_78), 0x10)
                        zmm4[0].o = var_5e0_2.o
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r11_15 + rcx_91), 0x30)
                        var_500_2[0].o = zmm4[0].o
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_43 + rdx_78), 0x10)
                        zmm4[0].o = var_360_2[0].o
                        arg9[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r10_20 + rcx_91), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r14_18 + rdx_78), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_8 + rcx_91), 0x30)
                        uint64_t rbx_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rax_142 + rcx_91), 0x30)
                        uint64_t r8_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        uint64_t rcx_92 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_74 + rdx_78), 0x10)
                        float* rbx_75 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                        arg10[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm14[0].o, *(rbx_75 + rdx_78), 0x10)
                        zmm14 = var_680_2.32
                        uint64_t rdx_79 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                        uint64_t rbx_76 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                        int64_t rdi_44 = sx.q(var_6c0_1.d)
                        arg11[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(arg4 + rdi_44), 0x20)
                        void* rdi_45 = arg4 + rdi_44
                        var_5c0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_5c0_1[0].o, 
                            *(rax_131 + rdi_45), 0x20)
                        int64_t rsi_69 = sx.q(var_6a0_1.d)
                        arg11[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(arg4 + rsi_69), 0x30)
                        arg11 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg11, var_520_1.o, 1)
                        void* rsi_70 = arg4 + rsi_69
                        var_5c0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_5c0_1[0].o, 
                            *(var_560[0] i+ rsi_70), 0x30)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(var_630.q + rdi_45), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_141 + rsi_70), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r13_12 + rdi_45), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r12_11 + rsi_70), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_9 + rdi_45), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_92 + rsi_70), 0x30)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rdx_79 + rdi_45), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_76 + rsi_70), 0x30)
                        int64_t rax_146 = zmm3[0].q
                        int64_t rcx_93 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        int64_t rdx_80 = zmm3[0].q
                        int64_t rbx_77 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = zx.o(*(arg4 + rax_146))
                        int64_t rax_147 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rcx_93), 1)
                        int64_t rcx_94 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdx_80), 2)
                        int64_t rdx_81 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rbx_77), 3)
                        int64_t rbx_78 = zmm2[0].q
                        zmm2[0].o = zx.o(*(arg4 + rcx_94))
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rax_147), 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rbx_78), 2)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rdx_81), 3)
                        arg12 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_5c0_1, var_5c0_1[0].o, 1)
                        arg10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg6, var_500_2[0].o, 1)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg9[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        arg9 = _mm256_insertf128_ps(zmm4, arg13[0].o, 1)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm3, zmm2[0].o, 1), 
                            data_143442420)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0xa)
                        var_5c0_1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = data_143442490
                        var_5c0_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_5c0_1[0].o, zmm4[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm0 = __vdivps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, var_5c0_1[0].o, 1)), 
                            data_1434424a0)
                        zmm4[0].o = data_143442480
                        arg5[0].o &= zmm4[0].o
                        zmm4[0].o &= arg6[0].o
                        arg6[0].o = data_143442440
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm4 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                        arg5 = data_143442460
                        zmm4 = _mm256_div_ps(zmm4, arg5)
                        zmm0 = _mm256_add_ps(arg11, _mm256_mul_ps(zmm5, zmm0))
                        arg11 = var_660_2.32
                        zmm1 = _mm256_mul_ps(zmm1, zmm4)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x15)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                        zmm2 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm2[0].o, 1)), arg5)
                        zmm1 = _mm256_add_ps(arg12, zmm1)
                        var_340_1 = _mm256_maskstore_ps(arg8, zmm0)
                        zmm0 = _mm256_mul_ps(arg9, zmm2)
                        var_320_1 = _mm256_maskstore_ps(arg8, zmm1)
                        zmm0 = _mm256_add_ps(arg10, zmm0)
                    case 4, 5, 6
                        goto label_140116dfd
            
            int32_t var_300_1[0x8] = _mm256_maskstore_ps(arg8, zmm0)
            zmm3 = var_4e0_1
            zmm4 = var_4c0_1
            zmm5 = var_4a0_1
            zmm0 = _mm256_sub_ps(var_340_1, zmm3)
            zmm1 = _mm256_sub_ps(var_320_1, zmm4)
            zmm2 = _mm256_sub_ps(var_300_1, zmm5)
            arg5 = var_580_1.32
            zmm0 = _mm256_mul_ps(arg5, zmm0)
            zmm1 = _mm256_mul_ps(arg5, zmm1)
            zmm2 = _mm256_mul_ps(arg5, zmm2)
            var_4e0_1 = _mm256_maskstore_ps(arg8, _mm256_add_ps(zmm3, zmm0))
            var_4c0_1 = _mm256_maskstore_ps(arg8, _mm256_add_ps(zmm4, zmm1))
            var_4a0_1 = _mm256_maskstore_ps(arg8, _mm256_add_ps(zmm5, zmm2))
        
        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_260_2, var_400_1, 1)
        zmm2[0].o = var_4e0_1[0].o
        zmm3[0].o = var_4e0_1[4].o
        zmm4[0].o = var_4c0_1[0].o
        zmm5[0].o = var_4c0_1[4].o
        arg5[0].o = var_4a0_1[0].o
        arg6[0].o = var_4a0_1[4].o
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        arg10[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
        arg9[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0x28)
        int128_t var_240 = zmm4[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
        int128_t var_230_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg5[0].o, 0xa8)
        int128_t var_220_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
        int128_t var_210_1 = zmm1[0].o
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
        zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
        zmm3[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg6[0].o, 0x28)
        int128_t var_200_1 = zmm5[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
        int128_t var_1f0_1 = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg6[0].o, 0xa8)
        int128_t var_1e0_1 = zmm1[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
        int128_t var_1d0_1 = zmm1[0].o
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm14[0].o, arg11[0].o)
        zmm1 = _mm256_insertf128_ps(zmm1, arg7[0].o, 1)
        uint64_t i = zx.q(_mm256_movemask_ps(zmm1))
        
        do
            uint64_t rcx_95
            uint64_t rflags_2
            
            if (i == 0)
                rcx_95 = 0x40
            else
                rcx_95, rflags_2 = _bit_scan_forward(i)
            double var_140[0x4] = zmm0
            result = sx.q(*(&var_140 + ((zx.q(rcx_95.d) & 7) << 2))) * 0x30
            zmm1[0].o = (&var_240)[rcx_95]
            *(arg1 + result + 0x10) = zmm1[0].o
            i &= rol.q(-2, rcx_95.b)
        while (i != 0)
else
    zmm0[0].o = _mm_permute_ps(zmm14[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_360_1[0x4] = zmm0
    int32_t rcx_4
    rcx_4.b = rax.d == 3
    zmm0[0].o = zx.o(neg.d(rcx_4))
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_480 = zmm0
    zmm0[0].o = zx.o(rdx_1)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg12 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    rcx_6 = 0
    zmm4[0].o = data_1434422d0
    uint32_t var_500_1[0x8] = arg12
    
    do
        int64_t rcx_8 = sx.q((rcx_6 << 3).d)
        arg10[0].o = *(arg2 + rcx_8)
        arg6[0].o = *(arg2 + rcx_8 + 0x10)
        zmm0[0].o = *(arg2 + rcx_8 + 0x20)
        zmm2[0].o = *(arg2 + rcx_8 + 0x30)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg10[0].o, arg6[0].o, 0xdd)
        int64_t var_580
        var_580.o = zmm0[0].o
        void* var_6c0
        var_6c0.o = zmm2[0].o
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0xdd)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 4)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 4)
        int64_t rcx_10 = sx.q(zmm1[0])
        int64_t r12_1 = sx.q(*(arg3 + rcx_10))
        int64_t rbx_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t rax_2 = sx.q(*(arg3 + rbx_1))
        int64_t rdi_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int64_t r11_1 = sx.q(*(arg3 + rdi_1))
        int64_t rdx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        int64_t r13_1 = sx.q(*(arg3 + rdx_5))
        int64_t rsi_2 = sx.q(zmm0[0].d)
        zmm1[0].o = zx.o(*(arg3 + rcx_10 + 4))
        int32_t temp0_14 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rbx_1 + 4), 1)
        int64_t rbx_2 = sx.q(*(arg3 + rsi_2))
        int64_t rcx_12 = sx.q(temp0_14)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rdi_1 + 4), 2)
        int32_t temp0_17 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + rdx_5 + 4), 3)
        int64_t r14_1 = sx.q(*(arg3 + rcx_12))
        int64_t rdx_6 = sx.q(temp0_17)
        zmm2[0].o = zx.o(*(arg3 + rsi_2 + 4))
        int64_t rdi_3 = sx.q(*(arg3 + rdx_6))
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rcx_12 + 4), 1)
        int64_t rcx_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = zx.o(rbx_2.d)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r14_1.d, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rdi_3.d, 2)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rdx_6 + 4), 2)
        int64_t r10_1 = sx.q(*(arg3 + rcx_14))
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r10_1.d, 3)
        zmm0[0].o = zx.o(r12_1.d)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_2.d, 1)
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r11_1.d, 2)
        arg11[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r13_1.d, 3)
        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rcx_14 + 4), 3)
        zmm3 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        arg8[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
        arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg9[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0].q)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        char temp0_39 = _mm256_movemask_ps(zmm1)
        var_560 = zmm5[0].o
        int64_t var_520
        var_520.32 = arg11
        int64_t var_6a0
        int64_t var_680
        int64_t var_660
        
        if (temp0_39 == 0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg5 = var_660.32
        label_1401141ed:
            zmm2[0].o = zx.o(0)
            bool cond:6_1 = zmm2[0].o f>= zmm14[0]
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm2 = _mm256_cmp_ps(zmm4, zmm4, 0xf)
            arg11 = _mm256_xor_ps(zmm1, zmm2)
            
            if (cond:6_1)
                zmm14 = _mm256_blendv_ps(var_6a0.32, zmm4, arg11)
                zmm1 = _mm256_blendv_ps(var_680.32, zmm4, arg11)
                var_680.32 = zmm1
                arg5 = _mm256_blendv_ps(arg5, zmm4, arg11)
            else
                zmm5 = arg12
                bool cond:3_1 = zmm14[0].o f>= 1f
                zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                arg12 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                
                if (cond:3_1)
                    zmm14 = _mm256_blendv_ps(var_6a0.32, arg12, arg11)
                    zmm1 = _mm256_blendv_ps(var_680.32, arg12, arg11)
                    var_680.32 = zmm1
                    arg5 = _mm256_blendv_ps(arg5, zmm4, arg11)
                    arg12 = zmm5
                else
                    zmm5 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg12), var_360_1)
                    arg7 = _mm256_round_ps(zmm5, 9)
                    zmm1 = _mm256_cvttps_epi32(arg7)
                    zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm4[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                    zmm4 = _mm256_blendv_ps(var_6a0.32, zmm2, arg11)
                    var_6a0.32 = zmm4
                    zmm14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm14[0].o)
                    
                    if (arg15 != 1)
                        zmm14 = _mm256_sub_ps(zmm5, arg7)
                    
                    arg7 = var_6a0.32
                    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                    zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
                    zmm4[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg12[0].o)
                    zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                    zmm2 = _mm256_blendv_ps(var_680.32, zmm1, arg11)
                    var_680.32 = zmm2
                    arg5 = _mm256_blendv_ps(arg5, zmm14, arg11)
                    zmm14 = arg7
                    arg12 = var_500_1
                    zmm4[0].o = zx.o(0)
        else
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            zmm4[0].o = zmm2[0].o ^ arg5[0].o
            arg7[0].o = zmm1[0].o ^ arg5[0].o
            zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            var_6a0.32 = _mm256_and_ps(zmm4, var_6a0.32)
            var_680.32 = _mm256_and_ps(zmm4, var_680.32)
            arg5 = _mm256_and_ps(zmm4, var_660.32)
            
            if (temp0_39 != 0xff)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                goto label_1401141ed
            
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm14 = var_6a0.32
        
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg10[0].o, arg6[0].o, 0x88)
        arg11 = _mm256_insertf128_ps(arg8, arg13[0].o, 1)
        arg13 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
        zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        zmm1[0].o = data_142d3f5b0
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), var_480)
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm4, data_143442540, zmm0)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        arg8 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg9 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm5[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
        uint64_t rsi_3 = zx.q(var_6c8)
        var_660.32 = arg5
        double var_260_1[0x4] = arg7
        int64_t var_5a0
        float var_3c0_1[0x8]
        uint32_t var_3a0_1[0x8]
        double var_380_1[0x4]
        
        if (var_6c8 u> 6)
        label_140114590:
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            var_380_1 = arg5
            var_3a0_1 = arg5
            var_3c0_1 = arg5
            arg12[0].o = zx.o(0)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm14[0].o, arg12[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            arg12 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm3 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (rsi_3)
                case 0, 1
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    int64_t rdx_9 = zmm1[0].q
                    int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    double r10_2 = zmm0[0]
                    int64_t rbx_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rcx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    int64_t rax_3 = zmm4[0].q
                    int64_t rsi_4 = zmm2[0].q
                    int64_t rdi_4 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm0[0].o = *(arg4 + rax_3)
                    zmm1[0].o = *(arg4 + rax_3 + 4)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rcx_17), 0x10)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rsi_4), 0x20)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdi_4), 0x30)
                    zmm2[0].o = *(arg4 + rdx_9)
                    zmm3[0].o = *(arg4 + rdx_9 + 4)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r11_2), 0x10)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 i+ r10_2), 0x20)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rbx_3), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_17 + 4), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_4 + 4), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdi_4 + 4), 0x30)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + r11_2 + 4), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 i+ r10_2 + 4), 0x20)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rbx_3 + 4), 0x30)
                    arg10 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    arg12 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                    zmm0[0].o = *(arg4 + rdx_9 + 8)
                    zmm1[0].o = *(arg4 + rax_3 + 8)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rcx_17 + 8), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rsi_4 + 8), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdi_4 + 8), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r11_2 + 8), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 i+ r10_2 + 8), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rbx_3 + 8), 0x30)
                    arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                case 2
                    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                    int64_t rax_4 = zmm1[0].q
                    int64_t r14_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    double rdx_10 = zmm0[0]
                    int64_t rdi_5 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rsi_5 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    int64_t rbx_4 = zmm4[0].q
                    int64_t r11_3 = zmm2[0].q
                    int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm0[0].o = zx.o(*(arg4 + rax_4))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_2), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 i+ rdx_10), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_5), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_4), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_5), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_3), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_3), 7)
                    zmm1[0].o = zx.o(*(arg4 + rax_4 + 2))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r14_2 + 2), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 i+ rdx_10 + 2), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdi_5 + 2), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rbx_4 + 2), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_5 + 2), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r11_3 + 2), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r10_3 + 2), 7)
                    zmm2[0].o = zx.o(*(arg4 + rax_4 + 4))
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r14_2 + 4), 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 i+ rdx_10 + 4), 2)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdi_5 + 4), 3)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rbx_4 + 4), 4)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rsi_5 + 4), 5)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r11_3 + 4), 6)
                    zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm4[0].o = zx.o(0)
                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                    arg5[0].o = data_1434424d0
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm0[0].o, 1))
                    zmm3 = data_1434424e0
                    arg7 = zmm3
                    zmm0 = _mm256_div_ps(zmm0, zmm3)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r10_3 + 4), 7)
                    zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 1)), arg7)
                    zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                    zmm2 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm2[0].o, 1)), arg7)
                    zmm3 = data_143442560
                    arg10 = _mm256_mul_ps(zmm0, zmm3)
                    arg12 = _mm256_mul_ps(zmm1, zmm3)
                    arg5 = _mm256_mul_ps(zmm2, zmm3)
                case 3
                    zmm0[0].o = *(arg4 + rbx_2)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r14_1), 0x10)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdi_3), 0x20)
                    zmm1[0].o = *(arg4 + rbx_2 + 4)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r10_1), 0x30)
                    zmm2[0].o = *(arg4 + r12_1)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rax_2), 0x10)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r11_1), 0x20)
                    zmm4[0].o = *(arg4 + r12_1 + 4)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r13_1), 0x30)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    var_6a0.32 = zmm0
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r14_1 + 4), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdi_3 + 4), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r10_1 + 4), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rax_2 + 4), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r11_1 + 4), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r13_1 + 4), 0x30)
                    zmm2[0].o = *(arg4 + r12_1 + 8)
                    zmm4[0].o = *(arg4 + rbx_2 + 8)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r14_1 + 8), 0x10)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rdi_3 + 8), 0x20)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r10_1 + 8), 0x30)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rax_2 + 8), 0x10)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r11_1 + 8), 0x20)
                    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    uint64_t var_540
                    var_540.32 = zmm0
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r13_1 + 8), 0x30)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                    var_5a0.32 = zmm0
                    zmm0[0].o = *(arg4 + r12_1 + 0xc)
                    zmm1[0].o = *(arg4 + rbx_2 + 0xc)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r14_1 + 0xc), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rdi_3 + 0xc), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r10_1 + 0xc), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rax_2 + 0xc), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r11_1 + 0xc), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + r13_1 + 0xc), 0x30)
                    zmm2[0].o = *(arg4 + r12_1 + 0x10)
                    zmm4[0].o = *(arg4 + rbx_2 + 0x10)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r14_1 + 0x10), 0x10)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rdi_3 + 0x10), 0x20)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + r10_1 + 0x10), 0x30)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rax_2 + 0x10), 0x10)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r11_1 + 0x10), 0x20)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r13_1 + 0x10), 0x30)
                    arg10 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                    float* var_5e0
                    var_5e0.32 = zmm0
                    zmm1[0].o = *(arg4 + r12_1 + 0x14)
                    zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                    arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                    arg5[0].o = *(arg4 + rbx_2 + 0x14)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r14_1 + 0x14), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdi_3 + 0x14), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r10_1 + 0x14), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + rax_2 + 0x14), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r11_1 + 0x14), 0x20)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                    int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    int64_t rcx_20 = zmm3[0].q
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + r13_1 + 0x14), 0x30)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
                    int64_t rdx_11 = zmm2[0].q
                    int64_t rbx_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rdi_6 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    int64_t r10_4 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    int64_t rsi_6 = zmm3[0].q
                    zmm2[0].o = zx.o(*(arg4 + rcx_20))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rax_6), 1)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rdx_11), 2)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rbx_5), 3)
                    int64_t rax_7 = zmm4[0].q
                    zmm3[0].o = zx.o(*(arg4 + rsi_6))
                    zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rdi_6), 1)
                    zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + rax_7), 2)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + r10_4), 3)
                    arg7 = arg13
                    arg13 = zmm14
                    zmm14 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    zmm3 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm2, zmm4[0].o, 1), 
                        data_143442420)
                    arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    zmm0[0].o = data_143442490
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                    zmm3 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, arg5[0].o, 1)), 
                        data_1434424a0)
                    zmm0 = _mm256_mul_ps(arg10, zmm3)
                    arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                    arg10 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_6a0.32)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                    zmm3[0].o = data_143442480
                    zmm0[0].o &= zmm3[0].o
                    zmm1[0].o = data_143442440
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    arg5[0].o &= zmm3[0].o
                    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1))
                    zmm3 = data_143442460
                    zmm0 = __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm0, zmm3), var_5e0.32)
                    arg12 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_540.32)
                    zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm0 = _mm256_mul_ps(zmm14, 
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1)), 
                            zmm3))
                    zmm14 = arg13
                    arg13 = arg7
                    arg5 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_5a0.32)
                case 4, 5, 6
                    goto label_140114590
            
            var_3c0_1 = arg10
            var_3a0_1 = arg12
            var_380_1 = arg5
        
        zmm0[0].o = var_580.o
        zmm1[0].o = var_6c0.o
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x88)
        zmm1 = var_680.32
        arg7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm0[0].o ^= zmm2[0].o
        var_6a0.32 = zmm14
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm1[0].o)
        zmm14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm14[0].o)
        zmm1[0].o ^= zmm2[0].o
        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_580.o = zmm3[0].o
            double var_2e0_1[0x4]
            int32_t var_2c0_1[0x8]
            
            if (var_6c8 u> 6)
            label_140114dd0:
                zmm0[0].o = zx.o(0)
                var_2e0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                var_2c0_1 = _mm256_maskstore_ps(zmm1, zmm0)
            else
                zmm2 = var_680.32
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm2[0].o, var_500_1[0].o)
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
                zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
                arg6 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm5 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                
                switch (rsi_3)
                    case 0, 1
                        zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm5[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg9[0].o = zx.o(0)
                        zmm5 = _mm256_blendv_ps(arg9, zmm0, zmm2)
                        zmm0[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                        zmm4 = _mm256_blendv_ps(arg9, zmm3, zmm0)
                        int64_t r10_5 = zmm5[0].q
                        int64_t r11_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* r13_2 = arg4 + r10_5
                        void* rax_12 = arg4 + r11_4
                        arg8[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        int64_t r14_3 = zmm4[0].q
                        void* rcx_21 = arg4 + r14_3
                        int64_t r12_2 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        void* rsi_7 = arg4 + r12_2
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg5 = _mm256_blendv_ps(arg9, zmm5, zmm0)
                        arg6[0].o = *(arg5[0] i+ rcx_21)
                        int64_t rdx_13 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rdi_7 = zmm4[0].q
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_13 + rsi_7), 0x10)
                        arg7 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm0 = _mm256_blendv_ps(arg9, arg7, zmm0)
                        zmm3[0].o = *(zmm0[0] + rcx_21)
                        float* rcx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_22 + rsi_7), 0x10)
                        void* rcx_23 = arg4 + rdi_7
                        int64_t rdx_15 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(zmm4[0].q + rcx_23), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(zmm0[0] + rcx_23), 0x20)
                        void* rcx_24 = arg4 + rdx_15
                        int64_t rsi_10 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_10 + rcx_24), 0x30)
                        float* rsi_11 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_11 + rcx_24), 0x30)
                        int64_t rcx_25 = arg8[0].q
                        zmm3 = _mm256_blendv_ps(arg9, zmm5, zmm2)
                        zmm5[0].o = *(zmm3[0].q + r13_2)
                        zmm2 = _mm256_blendv_ps(arg9, arg7, zmm2)
                        arg5[0].o = *(zmm2[0].q + r13_2)
                        void* rsi_14 = arg4 + rcx_25
                        int64_t rbx_6 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_6 + rax_12), 0x10)
                        float* rbx_7 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_7 + rax_12), 0x10)
                        int64_t rax_13 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(zmm3[0].q + rsi_14), 0x20)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(zmm2[0].q + rsi_14), 0x20)
                        void* rsi_15 = arg4 + rax_13
                        int64_t rbx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_10 + rsi_15), 0x30)
                        float* rbx_11 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_11 + rsi_15), 0x30)
                        zmm5[0].o = *(arg4 + r10_5)
                        arg5[0].o = *(arg4 + r14_3)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + r12_2), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdi_7), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + rdx_15), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + r11_4), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rcx_25), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + rax_13), 0x30)
                        var_2e0_1 =
                            _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm5, arg5[0].o, 1))
                        var_2c0_1 =
                            _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                        zmm3[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                        zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = zx.o(0)
                        zmm5 = _mm256_blendv_ps(arg6, zmm3, zmm2)
                        zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg6, zmm0, zmm3)
                        void* rax_14 = zmm5[0].q
                        int64_t r13_3 = arg4 + rax_14
                        int64_t r11_5 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        void* rdi_8 = arg4 + r11_5
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        int64_t r14_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm4 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg5 = _mm256_blendv_ps(arg6, zmm4, zmm2)
                        zmm4 = _mm256_blendv_ps(arg6, zmm4, zmm3)
                        int64_t r10_6 = zmm5[0].q
                        double rax_15 = arg5[0]
                        int64_t rdx_16 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        int64_t r12_3 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        arg5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm2 = _mm256_blendv_ps(arg6, arg5, zmm2)
                        zmm3 = _mm256_blendv_ps(arg6, arg5, zmm3)
                        arg5[0].o = zx.o(*(rax_15 i+ r13_3))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rdx_16 + rdi_8), 1)
                        uint16_t* rax_17 = zmm5[0].q
                        void* rdx_17 = zmm2[0].q
                        uint16_t* rbx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        uint16_t* rcx_26 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        uint16_t* r13_4 = zmm2[0].q
                        zmm2[0].o = zx.o(*(rdx_17 + r13_3))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rbx_12 + rdi_8), 1)
                        void* rdx_19 = arg4 + r10_6
                        void* rdi_9 = arg4 + r14_4
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rax_17 + rdx_19), 2)
                        double rax_18 = zmm0[0]
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r13_4 + rdx_19), 2)
                        void* rdx_20 = arg4 i+ rax_18
                        int64_t rbx_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12_3 + rdi_9), 3)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm4[0].q + rdx_20), 4)
                        int64_t rsi_17 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rcx_26 + rdi_9), 3)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm3[0].q + rdx_20), 4)
                        double rcx_28 = zmm0[0]
                        void* rdx_21 = arg4 + rbx_13
                        int64_t rdi_10 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rdi_10 + rdx_21), 5)
                        int64_t rdi_11 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rdi_11 + rdx_21), 5)
                        void* rdx_22 = arg4 i+ rcx_28
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm4[0].q + rdx_22), 6)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm3[0].q + rdx_22), 6)
                        void* rdx_23 = arg4 + rsi_17
                        int64_t rdi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_14 + rdx_23), 7)
                        uint16_t* rdi_15 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rdi_15 + rdx_23), 7)
                        zmm3[0].o = zx.o(*(arg4 + rax_14))
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r11_5), 1)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r10_6), 2)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r14_4), 3)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 i+ rax_18), 4)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rbx_13), 5)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 i+ rcx_28), 6)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rsi_17), 7)
                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                        zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                        arg5[0].o = data_1434424d0
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                        zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        zmm3 = _mm256_cvtepi32_ps(zmm3)
                        zmm4 = data_1434424e0
                        zmm3 = _mm256_div_ps(zmm3, zmm4)
                        zmm5 = data_143442560
                        var_2e0_1 = _mm256_maskstore_ps(zmm1, _mm256_mul_ps(zmm3, zmm5))
                        var_2c0_1 = _mm256_maskstore_ps(zmm1, 
                            _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm0), zmm4), zmm5))
                        zmm0 = _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm2), zmm4), zmm5)
                    case 3
                        zmm2 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_520.32, var_560, 1)
                        zmm3 = var_6a0.32
                        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_680.o)
                        zmm3[0].o ^= zmm14[0].o
                        zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm0 = _mm256_and_ps(zmm3, zmm2)
                        int64_t rax_20 = sx.q(zmm0[0].d)
                        void* r14_5 = arg4 + rax_20
                        int32_t temp0_470 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = *(arg4 + rax_20)
                        int64_t r10_7 = sx.q(temp0_470)
                        uint64_t rcx_30 = arg4 + r10_7
                        int64_t rdx_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* rcx_31 = arg4 + rdx_26
                        int64_t rbx_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        var_560[0] = arg4 + rbx_14
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rsi_18 = sx.q(zmm0[0].d)
                        void* r11_6 = arg4 + rsi_18
                        zmm4[0].o = *(arg4 + rsi_18)
                        int64_t rdi_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        void* r13_5 = arg4 + rdi_16
                        int64_t rax_25 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        void* rsi_21 = arg4 + rax_25
                        int32_t temp0_476 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rdi_16), 0x10)
                        int64_t rcx_33 = sx.q(temp0_476)
                        void* rdi_17 = arg4 + rcx_33
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rax_25), 0x20)
                        arg7[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rcx_33), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + r10_7), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rdx_26), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg4 + rbx_14), 0x30)
                        zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9520)
                        int32_t* rax_26 = zx.q(zmm4[0])
                        uint64_t r12_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                        uint64_t r10_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                        uint64_t rbx_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                        arg5[0].o = *(rax_26 + r14_5)
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = *(zx.q(zmm4[0]) + r11_6)
                        float* rax_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                        uint64_t r14_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                        int32_t var_5f8
                        var_5f8.q = r13_5
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_28 + r13_5), 0x10)
                        uint64_t rax_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                        int32_t var_5f0
                        var_5f0.q = rsi_21
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_6 + rsi_21), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_29 + rdi_17), 0x30)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_4 + rcx_30), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r10_8 + rcx_31), 0x20)
                        zmm2 = _mm256_insertf128_ps(zmm2, arg7[0].o, 1)
                        var_520.32 = zmm2
                        double r10_9 = var_560[0]
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_15 i+ r10_9), 0x30)
                        var_5a0.32 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9540)
                        uint64_t rax_30 = zx.q(zmm0[0].d)
                        uint64_t rbx_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* rbx_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* r12_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm2[0].o = *(rax_30 + r14_5)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o = *(zx.q(zmm0[0].d) + r11_6)
                        float* rax_32 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* rbx_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_32 + r13_5), 0x10)
                        float* rax_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_18 + rsi_21), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_33 + rdi_17), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_16 + rcx_30), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_17 + rcx_31), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r12_5 i+ r10_9), 0x30)
                        arg12 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_1434423c0)
                        arg7[0].o = *(zx.q(zmm0[0].d) + r14_5)
                        uint64_t rax_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        float* rax_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        float* rax_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int32_t var_600
                        var_600.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_1434423e0)
                        arg10[0].o = *(zx.q(zmm0[0].d) + r14_5)
                        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442400)
                        int32_t* rcx_35 = zx.q(zmm3[0])
                        arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        arg5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        arg5[0].o = *(rcx_35 + r14_5)
                        uint64_t r14_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        int32_t* rcx_36 = zx.q(zmm2[0])
                        uint64_t r13_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = *(rcx_36 + r11_6)
                        uint64_t rcx_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t rcx_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t rcx_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        uint64_t rbx_19 = zx.q(zmm0[0].d)
                        uint64_t r10_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t r11_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t rsi_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        uint64_t rcx_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        uint64_t rcx_41 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        float* var_610_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm0[0].o = *(rbx_19 + r11_6)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        uint64_t rbx_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        uint64_t rcx_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        float* rdx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm3[0].o = *(zx.q(zmm3[0]) + r11_6)
                        int64_t rax_44 = var_5f8.q
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(var_600.q + rax_44), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_10 + rax_44), 0x10)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_20 + rax_44), 0x10)
                        int64_t rax_45 = var_5f0.q
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14_8 + rax_45), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_7 + rax_45), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_43 + rax_45), 0x20)
                        zmm14 = arg13
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r13_7 + rdi_17), 0x30)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_22 + rdi_17), 0x30)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_28 + rdi_17), 0x30)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                        arg6[0].o = _mm256_extractf128_ps(zmm14[0].o, 1)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm5[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm5[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
                        zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        arg8[0].o = zx.o(0)
                        zmm4 = _mm256_blendv_ps(arg8, zmm4, zmm5)
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg8, zmm0, zmm5)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_37 + rcx_30), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rcx_37 + rcx_30), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_40 + rcx_30), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_38 + rcx_31), 0x20)
                        double rcx_48 = var_560[0]
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_39 i+ rcx_48), 0x30)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_38 + rcx_31), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_39 i+ rcx_48), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_41 + rcx_31), 0x20)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                            *(var_610_1 i+ rcx_48), 0x30)
                        int64_t rax_50 = zmm4[0].q
                        int64_t rcx_49 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        int64_t rdx_33 = zmm4[0].q
                        int64_t rbx_21 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm4[0].o = zx.o(*(arg4 + rax_50))
                        int64_t rax_51 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rcx_49), 1)
                        double rcx_50 = zmm0[0]
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rdx_33), 2)
                        int64_t rdx_34 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + rbx_21), 3)
                        double rbx_22 = zmm0[0]
                        zmm0[0].o = zx.o(*(arg4 i+ rcx_50))
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rax_51), 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 i+ rbx_22), 2)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + rdx_34), 3)
                        arg9 = _mm256_insertf128_ps(zmm5, arg13[0].o, 1)
                        arg8 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                        arg7 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0xa)
                        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm3, data_143442420)
                        zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        arg6[0].o = data_143442490
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                        arg6[0].o = data_143442480
                        zmm3[0].o &= arg6[0].o
                        zmm5[0].o = data_143442440
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        arg5[0].o &= arg6[0].o
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                        zmm2 = __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), data_1434424a0)
                        zmm3 = _mm256_cvtepi32_ps(zmm3)
                        arg5 = data_143442460
                        zmm3 = _mm256_div_ps(zmm3, arg5)
                        zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg9, zmm2), var_520.32)
                        zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg8, zmm3), var_5a0.32)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm4[0].o, 0x15)
                        zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
                        var_2e0_1 = _mm256_maskstore_ps(zmm1, zmm2)
                        zmm0 = _mm256_mul_ps(arg7, _mm256_div_ps(_mm256_cvtepi32_ps(zmm0), arg5))
                        var_2c0_1 = _mm256_maskstore_ps(zmm1, zmm3)
                        zmm0 = _mm256_add_ps(arg12, zmm0)
                    case 4, 5, 6
                        goto label_140114dd0
            
            float var_2a0_1[0x8] = _mm256_maskstore_ps(zmm1, zmm0)
            zmm4 = var_3c0_1
            zmm5 = var_3a0_1
            zmm0 = _mm256_sub_ps(var_2e0_1, zmm4)
            zmm2 = _mm256_sub_ps(var_2c0_1, zmm5)
            zmm3 = _mm256_sub_ps(var_2a0_1, var_380_1)
            arg6 = var_660.32
            zmm0 = _mm256_mul_ps(arg6, zmm0)
            zmm2 = _mm256_mul_ps(arg6, zmm2)
            zmm3 = _mm256_mul_ps(arg6, zmm3)
            arg10 = _mm256_maskstore_ps(zmm1, _mm256_add_ps(zmm4, zmm0))
            arg12 = _mm256_maskstore_ps(zmm1, _mm256_add_ps(zmm5, zmm2))
            arg5 = _mm256_maskstore_ps(zmm1, _mm256_add_ps(var_380_1, zmm3))
            zmm3[0].o = var_580.o
        
        zmm0 = _mm256_insertf128_ps(var_260_1, zmm3[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        arg9[0].o = zx.o(0)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
        arg7[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
        zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg12[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg12[0].o)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0x28)
        int128_t var_1c0 = zmm5[0].o
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
        int128_t var_1b0_1 = zmm3[0].o
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg5[0].o, 0xa8)
        int128_t var_1a0_1 = zmm3[0].o
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
        int128_t var_190_1 = zmm3[0].o
        zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
        zmm5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
        arg5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm4[0].o, 0x28)
        int128_t var_180_1 = zmm2[0].o
        zmm2[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
        int128_t var_170_1 = zmm2[0].o
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 0xa8)
        int128_t var_160_1 = zmm2[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        int128_t var_150_1 = zmm1[0].o
        uint64_t j = 0xff
        zmm14[0].o = arg14
        arg12 = var_500_1
        zmm4[0].o = data_1434422d0
        
        do
            uint64_t rcx_51
            uint64_t rflags_1
            
            if (j == 0)
                rcx_51 = 0x40
            else
                rcx_51, rflags_1 = _bit_scan_forward(j)
            double var_120[0x4] = zmm0
            zmm1[0].o = (&var_1c0)[rcx_51]
            *(arg1 + sx.q(*(&var_120 + ((zx.q(rcx_51.d) & 7) << 2))) * 0x30 + 0x10) = zmm1[0].o
            j &= rol.q(-2, rcx_51.b)
        while (j != 0)
        
        rcx_6 = zx.q(rcx_6.d + 8)
    while (rcx_6.d s< i_1)
    
    result = zx.q(arg17)
    
    if (rcx_6.d s< result.d)
        goto label_14011591d
arg5[0].o = var_e8
arg6[0].o = var_d8
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_58
_mm256_zeroupper()
return result
