// 函数: sub_140125440
// 地址: 0x140125440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg13[0].o
int128_t var_68 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
int128_t var_d8 = arg6[0].o
int128_t var_e8 = arg5[0].o
int64_t r15 = sx.q(arg17)
int32_t zmm13[0x8]
zmm13[0].o = arg15
int32_t rax_1 = *(&data_1434425e0 + (r15 << 2)) * *(&data_1434425c0 + (r15 << 2))
int32_t i_1 = ((arg18 s>> 0x1f u>> 0x1d) + arg18) & 0xfffffff8
int64_t var_6b0 = r15
int64_t result
double var_620[0x2]
int128_t var_5c0
double var_5a0[0x2]
float var_580[0x8]
double var_4c0[0x4]
double var_4a0[0x4]
double var_280[0x4]
uint64_t rcx_6
double zmm0[0x4]
float zmm1[0x8]
float zmm2[0x8]
int32_t zmm3[0x8]
int32_t zmm4[0x8]
double zmm5[0x4]

if (i_1 s<= 0)
    rcx_6 = 0
    result = zx.q(arg18)
    
    if (0 s< result.d)
    label_140126e6d:
        zmm0[0].o = zx.o(rcx_6.d)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
        zmm2[0].o = zx.o(result.d)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        arg7 = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm3 = _mm256_and_ps(arg7, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
        int64_t rax_60 = sx.q(zmm3[0])
        int64_t rdx_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        int64_t r14_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        int64_t rcx_51 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        int64_t rbx_27 = sx.q(zmm3[0])
        zmm4[0].o = zx.o(*(arg2 + rbx_27))
        int64_t rbx_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg2 + rbx_29), 1)
        arg5[0].o = zx.o(*(arg2 + rax_60))
        int64_t rax_62 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg2 + rax_62), 2)
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg2 + rdx_40), 1)
        int64_t rdx_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg2 + rdx_42), 3)
        double var_260_1[0x2] = zmm3[0].o
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg2 + r14_10), 2)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg2 + rcx_51), 3)
        int32_t var_640_1[0x8] = zmm3
        zmm3 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9520)
        uint64_t rcx_52 = zx.q(zmm3[0])
        uint64_t r14_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        uint64_t r12_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        arg5[0].o = zx.o(arg4)
        int32_t* r15_8 = zx.q(zmm4[0])
        zmm5[0].o = zx.o(*(r15_8 + arg2 + rbx_27))
        uint32_t* r11_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_8 + arg2 + rbx_29), 1)
        uint32_t* r9_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r9_10 + arg2 + rax_62), 2)
        uint32_t* rdi_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_17 + arg2 + rdx_42), 3)
        uint32_t* rsi_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
        zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
        zmm5[0].o = zx.o(*(rcx_52 + arg2 + rax_60))
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r14_11 + arg2 + rdx_40), 1)
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r12_7 + arg2 + r14_10), 2)
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_21 + arg2 + rcx_51), 3)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o)
        double var_600_1[0x4] = arg7
        zmm3 = _mm256_and_ps(arg7, _mm256_insertf128_ps(zmm3, zmm4[0].o, 1))
        int64_t rax_68 = sx.q(zmm3[0])
        int64_t rbx_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm4[0].o = zx.o(*(arg3 + rax_68))
        int64_t rax_70 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rbx_31), 1)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rax_70), 2)
        int64_t rbx_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rbx_33), 3)
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        var_5a0[0] = rcx_52
        zmm4[0].o = zx.o(*(rcx_52 + arg3 + rax_68))
        int32_t rcx_53 = zmm3[0]
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r14_11 + arg3 + rbx_31), 1)
        int64_t rcx_54 = sx.q(rcx_53)
        int32_t temp0_711 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
        zmm5[0].o = zx.o(*(arg3 + rcx_54))
        int64_t rdx_47 = sx.q(temp0_711)
        var_4c0[0] = r12_7
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r12_7 + arg3 + rax_70), 2)
        int32_t temp0_713 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg3 + rdx_47), 1)
        int64_t rax_73 = sx.q(temp0_713)
        zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_21 + arg3 + rbx_33), 3)
        int32_t temp0_716 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg3 + rax_73), 2)
        int64_t rbx_36 = sx.q(temp0_716)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg3 + rbx_36), 3)
        zmm5[0].o = zx.o(*(r15_8 + arg3 + rcx_54))
        var_4a0[0] = r11_8
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_8 + arg3 + rdx_47), 1)
        var_580[0].q = r9_10
        zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r9_10 + arg3 + rax_73), 2)
        void* var_700_1
        var_700_1.32 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        zmm0 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        void* var_6e0_1
        var_6e0_1.32 = zmm0
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        int32_t var_690
        var_690.q = rdi_17
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_17 + arg3 + rbx_36), 3)
        zmm1 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
        arg11[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
        zmm2[0].o = data_1434422d0
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
        arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
        zmm0[0].o &= arg8[0].o
        arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg5[0])
        zmm2[0].o = zmm4[0].o & arg6[0].o
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0x4e)
        arg7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm4[0].q)
        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        char temp0_736 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
        arg8[0].o = zx.o(0)
        
        if (temp0_736 == 0)
            goto label_1401271fb
        
        zmm5 = var_700_1.32
        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        arg8 = var_6e0_1.32
        zmm2[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm5[0].o)
        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
        char temp0_742 = _mm256_movemask_ps(zmm0)
        arg6[0].o = zx.o(0)
        arg10[0].o = zx.o(0)
        zmm5[0].o = zx.o(0)
        
        if (temp0_742 != temp0_736)
            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
            arg8 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
        label_1401271fb:
            zmm4 = _mm256_cmp_ps(arg9, arg9, 0xf)
            zmm5[0].o = zmm13[0].o
            zmm13 = _mm256_xor_ps(arg8, zmm4)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg6[0].o = zx.o(0)
            arg10[0].o = zx.o(0)
            
            if (not(zmm4[0].o f>= zmm5[0].d))
                zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                arg10 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                
                if (zmm5[0].o f>= 1f)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm13, var_600_1)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    arg10 = _mm256_blendv_ps(arg9, arg10, zmm0)
                    arg6 = arg10
                else
                    zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0)
                    zmm0 = _mm256_mul_ps(_mm256_insertf128_ps(zmm0, zmm0[0].o, 1), 
                        _mm256_cvtepi32_ps(arg10))
                    arg8 = __vandps_ymmqq_ymmqq_memqq(zmm13, var_600_1)
                    zmm5 = _mm256_round_ps(zmm0, 9)
                    zmm2 = _mm256_cvttps_epi32(zmm5)
                    arg9[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                    zmm2 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                    arg6[0].o = zx.o(0)
                    arg6 = _mm256_blendv_ps(arg6, zmm2, arg8)
                    arg9[0].o = zx.o(0)
                    
                    if (arg16 != 1)
                        arg9 = _mm256_sub_ps(zmm0, zmm5)
                    
                    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                    zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                    zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm2[0].o = zx.o(0)
                    arg10 = _mm256_blendv_ps(zmm2, zmm0, arg8)
            
            zmm0[0].o = zx.o(0)
            zmm5 = _mm256_blendv_ps(zmm0, arg9, zmm13)
        
        zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
        int32_t rdx_50 = var_6b0.d
        int32_t rcx_57
        rcx_57.b = rdx_50 == 3
        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm2[0].o = data_142d3f5b0
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = zx.o(neg.d(rcx_57))
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm2)
        zmm13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm13[0].o, zmm13[0].o)
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm13, data_143442540, zmm0)
        arg5 = _mm256_insertf128_ps(arg11, arg13[0].o, 1)
        arg11 = _mm256_insertf128_ps(arg12, arg7[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        arg8 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg13 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm0[0].o = zx.o(rax_1)
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        uint64_t rax_76 = zx.q(rdx_50)
        var_5c0.32 = zmm5
        var_620.32 = arg5
        float var_560_3[0x8] = arg8
        int32_t var_4e0_1[0x8] = zmm3
        int32_t var_480_1[0x8] = zmm4
        int32_t var_540_1[0x8]
        int32_t var_520_1[0x8]
        double var_500_1[0x4]
        
        if (rdx_50 u> 6)
        label_140127fdb:
            zmm0 = var_600_1
            var_540_1 = _mm256_maskstore_ps(zmm0, zmm13)
            var_520_1 = _mm256_maskstore_ps(zmm0, zmm13)
            var_500_1 = _mm256_maskstore_ps(zmm0, zmm13)
            zmm13 = var_700_1.32
            arg12 = var_6e0_1.32
        else
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            arg9 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            switch (rax_76)
                case 0, 1
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                    zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                    zmm5 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    arg8[0].o = arg7[0].o
                    arg7 = var_600_1
                    zmm0[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                    zmm1[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    arg5 = arg6
                    arg6 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                    zmm2 = _mm256_blendv_ps(zmm1, zmm3, arg6)
                    int64_t r8 = zmm2[0].q
                    void* rdi_18 = arg14 + r8
                    int64_t r9_11 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    void* rsi_23 = arg14 + r9_11
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t r11_9 = zmm2[0].q
                    int64_t r14_13 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    arg9 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm2 = _mm256_blendv_ps(zmm1, arg9, arg6)
                    zmm3[0].o = *(zmm2[0].q + rdi_18)
                    int64_t rax_79 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                    int64_t r15_9 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_79 + rsi_23), 0x10)
                    float* r12_8 = zmm2[0].q
                    zmm2 = _mm256_broadcast_sd(3.9525251667299724e-323)
                    zmm4 = _mm256_blendv_ps(zmm1, zmm2, arg6)
                    arg6 = arg5
                    arg5[0].o = *(zmm4[0].q + rdi_18)
                    float* rdx_53 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    float* rbx_39 = zmm4[0].q
                    float* rdi_19 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4 = _mm256_blendv_ps(zmm1, zmm5, zmm0)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_53 + rsi_23), 0x10)
                    int64_t rax_80 = zmm4[0].q
                    void* rsi_24 = arg14 + r11_9
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_8 + rsi_24), 0x20)
                    int64_t r12_9 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_39 + rsi_24), 0x20)
                    void* rsi_25 = arg14 + rax_80
                    void* rbx_40 = arg14 + r14_13
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r15_9 + rbx_40), 0x30)
                    void* rdx_54 = arg14 + r12_9
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_19 + rbx_40), 0x30)
                    int64_t rdi_20 = zmm4[0].q
                    arg5 = _mm256_blendv_ps(zmm1, arg9, zmm0)
                    int32_t* rbx_41 = arg5[0]
                    zmm0 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                    zmm1[0].o = *(rbx_41 + rsi_25)
                    zmm2[0].o = *(zmm0[0] + rsi_25)
                    void* rsi_26 = arg14 + rdi_20
                    float* rbx_43 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_43 + rdx_54), 0x10)
                    float* rbx_44 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_44 + rdx_54), 0x10)
                    int64_t rdx_55 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(zmm4[0].q + rsi_26), 0x20)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(zmm0[0] + rsi_26), 0x20)
                    void* rsi_27 = arg14 + rdx_55
                    int64_t rbx_47 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_47 + rsi_27), 0x30)
                    float* rbx_48 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_48 + rsi_27), 0x30)
                    zmm2[0].o = *(arg14 + rax_80)
                    zmm4[0].o = *(arg14 + r8)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + r9_11), 0x10)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + r11_9), 0x20)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + r14_13), 0x30)
                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg14 + r12_9), 0x10)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg14 + rdi_20), 0x20)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg14 + rdx_55), 0x30)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                    var_540_1 = _mm256_maskstore_ps(arg7, zmm2)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                    var_520_1 = _mm256_maskstore_ps(arg7, zmm1)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                label_140127957:
                    var_500_1 = _mm256_maskstore_ps(arg7, zmm0)
                    arg7[0].o = arg8[0].o
                    zmm13 = var_700_1.32
                    arg12 = var_6e0_1.32
                case 2
                    zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                    zmm5 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    arg8[0].o = arg7[0].o
                    arg7 = var_600_1
                    zmm0[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                    arg5 = arg6
                    arg6 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm3 = _mm256_blendv_ps(zmm0, zmm1, arg6)
                    zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    int64_t r8_1 = zmm3[0].q
                    int64_t r9_12 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    void* rdi_21 = arg14 + r8_1
                    zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    int64_t r11_10 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    void* rsi_28 = arg14 + r9_12
                    arg9 = _mm256_broadcast_sd(9.8813129168249309e-324)
                    zmm3 = _mm256_blendv_ps(zmm0, arg9, arg6)
                    int64_t rcx_60 = zmm2[0].q
                    void* rdx_56 = zmm3[0].q
                    uint16_t* rax_81 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                    uint16_t* rbx_49 = zmm2[0].q
                    zmm3[0].o = zx.o(*(rdx_56 + rdi_21))
                    int64_t rdx_58 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(rax_81 + rsi_28), 1)
                    zmm3 = _mm256_broadcast_sd(1.9762625833649862e-323)
                    zmm4 = _mm256_blendv_ps(zmm0, zmm3, arg6)
                    arg6 = arg5
                    uint32_t rax_83 = zx.d(*(zmm4[0].q + rdi_21))
                    uint16_t* rdi_22 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    arg5[0].o = zx.o(rax_83)
                    uint16_t* rax_84 = zmm4[0].q
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rdi_22 + rsi_28), 1)
                    uint16_t* rsi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4 = _mm256_blendv_ps(zmm0, zmm5, zmm1)
                    void* rdi_23 = arg14 + rcx_60
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rbx_49 + rdi_23), 2)
                    void* rbx_50 = arg14 + r11_10
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rax_84 + rdi_23), 2)
                    int64_t rax_85 = zmm4[0].q
                    void* rdi_24 = arg14 + rax_85
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rdx_58 + rbx_50), 3)
                    int64_t rdx_59 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    arg5 = _mm256_blendv_ps(zmm0, arg9, zmm1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(rsi_29 + rbx_50), 3)
                    void* rsi_30 = arg14 + rdx_59
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg5[0] i+ rdi_24), 4)
                    int64_t rbx_52 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rbx_52 + rsi_30), 5)
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm0 = _mm256_blendv_ps(zmm0, zmm3, zmm1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(zmm0[0] + rdi_24), 4)
                    uint16_t* rdi_25 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rbx_54 = zmm4[0].q
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_25 + rsi_30), 5)
                    void* rsi_31 = arg14 + rbx_54
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(zmm3[0].q + rsi_31), 6)
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm0[0] + rsi_31), 6)
                    zmm5[0].o = zx.o(*(arg14 + r8_1))
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + r9_12), 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rcx_60), 2)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + r11_10), 3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rax_85), 4)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rdx_59), 5)
                    int64_t rax_86 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rbx_54), 6)
                    void* rcx_61 = arg14 + rax_86
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg14 + rax_86), 7)
                    int64_t rax_87 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_87 + rcx_61), 7)
                    uint16_t* rax_88 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
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
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rax_88 + rcx_61), 7)
                    arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 1)), zmm4)
                    zmm3 = data_143442560
                    var_540_1 = _mm256_maskstore_ps(arg7, _mm256_mul_ps(zmm0, zmm3))
                    var_520_1 = _mm256_maskstore_ps(arg7, _mm256_mul_ps(zmm2, zmm3))
                    zmm0 = _mm256_mul_ps(zmm1, zmm3)
                    goto label_140127957
                case 3
                    zmm4 = var_700_1.32
                    zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm5 = var_6e0_1.32
                    zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                    zmm5 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    zmm0 = _mm256_and_ps(zmm5, zmm3)
                    int64_t rcx_63 = sx.q(zmm0[0].d)
                    void* r8_2 = arg14 + rcx_63
                    int32_t temp0_967 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                    var_280[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                    int32_t temp0_969 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                    zmm13[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg12[0].o = *(var_5a0[0] i+ r8_2)
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_142fc9540)
                    zmm2[0].o = *(zx.q(zmm0[0].d) + r8_2)
                    int128_t var_430_1 = zmm2[0].o
                    var_5a0.32 = arg13
                    arg13 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_1434423c0)
                    zmm2[0].o = *(zx.q(arg13[0]) + r8_2)
                    int128_t var_440_1 = zmm2[0].o
                    double var_360_1[0x4] = arg6
                    arg6 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_1434423e0)
                    zmm2[0].o = *(zx.q(arg6[0].d) + r8_2)
                    int128_t var_450_1 = zmm2[0].o
                    zmm5 = __vandps_ymmqq_ymmqq_memqq(zmm5, data_143442400)
                    zmm2[0].o = *(zx.q(zmm5[0].d) + r8_2)
                    int128_t var_460_1 = zmm2[0].o
                    int64_t rax_91 = sx.q(zmm13[0])
                    void* rdi_29 = arg14 + rax_91
                    zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                    zmm4[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm4 = var_5a0.32
                    zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                    zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm1[0].o, var_5a0)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    int128_t var_380_1 = arg7[0].o
                    arg7 = var_600_1
                    zmm2[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                    zmm4[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                    zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    arg5[0].o = zx.o(0)
                    arg9 = _mm256_blendv_ps(arg5, zmm1, zmm2)
                    zmm1[0].o = _mm_permute_ps(zmm4[0].o, 0x50)
                    zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xfa)
                    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                    zmm2[0].o = *(r15_8 + rdi_29)
                    int32_t temp0_999 = __vpextrd_memd_xmmdq_immb(zmm13[0].o, 1)
                    zmm1 = _mm256_blendv_ps(arg5, zmm3, zmm1)
                    int32_t temp0_1001 = __vpextrd_memd_xmmdq_immb(zmm13[0].o, 2)
                    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int32_t temp0_1003 = __vpextrd_memd_xmmdq_immb(zmm13[0].o, 3)
                    zmm4[0].o = *(zx.q(zmm3[0]) + rdi_29)
                    arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    int32_t var_680
                    var_680.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    uint64_t rax_93 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    uint64_t rax_94 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = *(zx.q(arg5[0].d) + rdi_29)
                    uint64_t rsi_32 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    uint64_t rax_95 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    uint64_t rax_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    uint64_t r13_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                    uint64_t rbx_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                    zmm3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                    uint64_t rax_97 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                    int32_t* rax_98 = zx.q(zmm3[0])
                    uint64_t rdx_65 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    uint64_t r11_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    arg5[0].o = *(rax_98 + rdi_29)
                    uint64_t r12_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    uint64_t rcx_65 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    uint64_t r8_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int32_t* rax_99 = zx.q(zmm3[0])
                    uint64_t r14_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = *(rax_99 + rdi_29)
                    int64_t rax_100 = sx.q(temp0_999)
                    void* rdi_30 = arg14 + rax_100
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_4a0[0] i+ rdi_30), 0x10)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_32 + rdi_30), 0x10)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r13_8 + rdi_30), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_65 + rdi_30), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_65 + rdi_30), 0x10)
                    int64_t rcx_66 = sx.q(temp0_1001)
                    float* r15_12 = arg14
                    void* rdx_66 = arg14 + rcx_66
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_580[0].q + rdx_66), 0x20)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_95 + rdx_66), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_55 + rdx_66), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_11 + rdx_66), 0x20)
                    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r8_3 + rdx_66), 0x20)
                    int64_t rdx_67 = sx.q(temp0_1003)
                    void* rbx_56 = arg14 + rdx_67
                    var_580 = arg11
                    arg11[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(var_690.q + rbx_56), 0x30)
                    zmm13[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_96 + rbx_56), 0x30)
                    zmm4[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_97 + rbx_56), 0x30)
                    zmm2[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_10 + rbx_56), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r14_15 + rbx_56), 0x30)
                    var_690.o = zmm0[0].o
                    uint64_t rbx_57 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1))
                    uint64_t r9_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                    uint64_t r8_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3))
                    uint64_t rsi_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    uint64_t r14_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    uint64_t r11_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    zmm3[0].o = *(r15_12 + rcx_63)
                    arg5[0].o = *(r15_12 + rax_91)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_12 + rax_100), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_12 + rcx_66), 0x20)
                    arg13[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_12 + rdx_67), 0x30)
                    int64_t rax_101 = sx.q(temp0_967)
                    void* rcx_67 = r15_12 + rax_101
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r14_11 + rcx_67), 0x10)
                    zmm0[0].o = var_430_1
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_680.q + rcx_67), 0x10)
                    zmm0[0].o = var_440_1
                    arg8[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_57 + rcx_67), 0x10)
                    zmm0[0].o = var_450_1
                    arg12[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_33 + rcx_67), 0x10)
                    float* rdx_70 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    zmm0[0].o = var_460_1
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_70 + rcx_67), 0x10)
                    uint64_t rcx_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    uint64_t rdx_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r15_12 + rax_101), 0x10)
                    int64_t rax_102 = sx.q(var_280[0].d)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r15_12 + rax_102), 0x20)
                    void* rax_103 = r15_12 + rax_102
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(var_4c0[0] i+ rax_103), 0x20)
                    int64_t rsi_35 = sx.q(temp0_969)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r15_12 + rsi_35), 0x30)
                    arg13 = _mm256_insertf128_ps(zmm3, arg13[0].o, 1)
                    void* rsi_36 = r15_12 + rsi_35
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_21 + rsi_36), 0x30)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_93 + rax_103), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_94 + rsi_36), 0x30)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r9_15 + rax_103), 0x20)
                    arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r8_4 + rsi_36), 0x30)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r14_16 + rax_103), 0x20)
                    arg12 = var_6e0_1.32
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_12 + rsi_36), 0x30)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_68 + rax_103), 0x20)
                    zmm0[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_71 + rsi_36), 0x30)
                    int64_t rax_104 = arg9[0].q
                    int64_t rcx_69 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    double rdx_72 = arg6[0]
                    int64_t rbx_58 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    arg6[0].o = zx.o(*(r15_12 + rax_104))
                    int64_t rax_105 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_12 + rcx_69), 1)
                    int64_t rcx_70 = zmm1[0].q
                    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_12 i+ rdx_72), 2)
                    int64_t rdx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    arg6[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r15_12 + rbx_58), 3)
                    int64_t rbx_59 = zmm1[0].q
                    zmm1[0].o = zx.o(*(r15_12 + rcx_70))
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_12 + rax_105), 1)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_12 + rbx_59), 2)
                    zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r15_12 + rdx_73), 3)
                    arg11 = _mm256_insertf128_ps(zmm3, arg11[0].o, 1)
                    arg9 = _mm256_insertf128_ps(arg5, zmm13[0].o, 1)
                    zmm13 = var_700_1.32
                    zmm4 = _mm256_insertf128_ps(arg8, zmm4[0].o, 1)
                    zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                    arg8 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_690.o, 1)
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
                    arg13 = var_5a0.32
                    zmm2 = _mm256_mul_ps(zmm2, zmm3)
                    zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(arg6[0].o, 0x15)
                    arg6 = var_360_1
                    zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 1)), zmm5)
                    zmm2 = _mm256_add_ps(arg11, zmm2)
                    arg11 = var_580
                    var_540_1 = _mm256_maskstore_ps(arg7, zmm0)
                    zmm0 = _mm256_mul_ps(arg8, zmm1)
                    var_520_1 = _mm256_maskstore_ps(arg7, zmm2)
                    zmm0 = _mm256_add_ps(arg9, zmm0)
                    var_500_1 = _mm256_maskstore_ps(arg7, zmm0)
                    arg7[0].o = var_380_1
                case 4, 5
                    goto label_140127fdb
                case 6
                    zmm0[0].o = zx.o(0)
                    zmm1 = var_600_1
                    var_540_1 = _mm256_maskstore_ps(zmm1, zmm0)
                    var_520_1 = _mm256_maskstore_ps(zmm1, zmm0)
                    var_500_1 = _mm256_maskstore_ps(zmm1, zmm0)
                    zmm13 = var_700_1.32
                    arg12 = var_6e0_1.32
        
        zmm0[0].o = _mm256_extractf128_ps(zmm13[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm13[0].o)
        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
        zmm0[0].o = zmm4[0].o & not.o(arg8[0].o)
        arg5[0].o = zmm5[0].o & not.o(zmm3[0].o)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            zmm1 = _mm256_insertf128_ps(zmm3, arg8[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm4[0].o ^= zmm3[0].o
            zmm3[0].o ^= zmm5[0].o
            zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
            arg7 = _mm256_and_ps(zmm3, zmm1)
            double var_340_1[0x4]
            float var_320_1[0x8]
            
            if (var_6b0.d u> 6)
            label_140128364:
                zmm0[0].o = zx.o(0)
                var_340_1 = _mm256_maskstore_ps(arg7, zmm0)
                var_320_1 = _mm256_maskstore_ps(arg7, zmm0)
            else
                zmm1 = var_480_1
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
                
                switch (rax_76)
                    case 0, 1
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_620.32
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6 = var_560_3
                        zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg11[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(arg11, zmm0, zmm2)
                        zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x50)
                        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xfa)
                        arg5 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg11, zmm4, arg5)
                        double r8_5 = zmm0[0]
                        int64_t r9_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        float* rsi_37 = arg14
                        void* rcx_74 = rsi_37 i+ r8_5
                        void* r11_13 = rsi_37 + r9_16
                        arg10[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t r14_17 = zmm1[0].q
                        void* rbx_60 = rsi_37 + r14_17
                        int64_t r15_13 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rdi_41 = rsi_37 + r15_13
                        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        arg9 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg6 = _mm256_blendv_ps(arg11, arg9, arg5)
                        int32_t* rdx_74 = arg6[0]
                        zmm1 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm4 = _mm256_blendv_ps(arg11, zmm1, arg5)
                        arg5[0].o = *(rdx_74 + rbx_60)
                        zmm0[0].o = *(zmm4[0].q + rbx_60)
                        double rdx_76 = zmm5[0]
                        float* rbx_61 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_61 + rdi_41), 0x10)
                        float* rbx_62 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_62 + rdi_41), 0x10)
                        void* rdi_42 = rsi_37 i+ rdx_76
                        arg9 = _mm256_blendv_ps(arg11, arg9, zmm2)
                        zmm3[0].o = *(arg9[0].q + rcx_74)
                        zmm1 = _mm256_blendv_ps(arg11, zmm1, zmm2)
                        zmm2[0].o = *(zmm1[0].q + rcx_74)
                        int64_t rcx_75 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm5[0] + rdi_42), 0x20)
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(zmm4[0].q + rdi_42), 0x20)
                        void* rdi_43 = rsi_37 + rcx_75
                        float* rbx_67 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_67 + rdi_43), 0x30)
                        float* rbx_68 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_68 + r11_13), 0x10)
                        float* rbx_69 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_69 + rdi_43), 0x30)
                        float* rdi_44 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_44 + r11_13), 0x10)
                        int64_t rbx_70 = arg10[0].q
                        void* rdi_45 = rsi_37 + rbx_70
                        zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                            *(zmm4[0].q + rdi_45), 0x20)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(zmm1[0].q + rdi_45), 0x20)
                        arg5[0].o = *(rsi_37 i+ r8_5)
                        arg6[0].o = *(rsi_37 + r14_17)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_37 + r15_13), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_37 i+ rdx_76), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_37 + rcx_75), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_37 + r9_16), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_37 + rbx_70), 0x20)
                        int64_t rax_109 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_37 + rax_109), 0x30)
                        void* rax_110 = rsi_37 + rax_109
                        float* rcx_76 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_76 + rax_110), 0x30)
                        float* rcx_77 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_77 + rax_110), 0x30)
                        var_340_1 =
                            _mm256_maskstore_ps(arg7, _mm256_insertf128_ps(arg5, arg6[0].o, 1))
                        var_320_1 =
                            _mm256_maskstore_ps(arg7, _mm256_insertf128_ps(zmm3, zmm5[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg5 = var_620.32
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg6 = var_560_3
                        zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                        zmm5 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        zmm1 = _mm256_blendv_ps(arg9, zmm1, zmm5)
                        zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg9, zmm3, zmm2)
                        int64_t r8_6 = zmm1[0].q
                        void* rsi_38 = arg14 + r8_6
                        int64_t r9_17 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rcx_78 = arg14 + r9_17
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t r11_14 = zmm1[0].q
                        int64_t rax_111 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        void* rdi_46 = arg14 + r11_14
                        arg5 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg6 = _mm256_blendv_ps(arg9, arg5, zmm5)
                        void* rbx_71 = arg14 + rax_111
                        zmm1[0].o = zx.o(*(arg6[0] i+ rsi_38))
                        int64_t rdx_79 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdx_79 + rcx_78), 1)
                        zmm4 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm5 = _mm256_blendv_ps(arg9, zmm4, zmm5)
                        uint32_t rdx_81 = zx.d(*(zmm5[0] i+ rsi_38))
                        uint16_t* rsi_39 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o = zx.o(rdx_81)
                        int64_t rdx_82 = zmm3[0].q
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_39 + rcx_78), 1)
                        void* rcx_79 = arg14 + rdx_82
                        arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg6[0] i+ rdi_46), 2)
                        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm5[0] + rdi_46), 2)
                        int64_t rsi_42 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5 = _mm256_blendv_ps(arg9, arg5, zmm2)
                        int64_t rdi_47 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_47 + rbx_71), 3)
                        uint16_t* rdi_48 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_48 + rbx_71), 3)
                        void* rdi_49 = arg14 + rsi_42
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg5[0] + rcx_79), 4)
                        uint16_t* rbx_73 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rbx_73 + rdi_49), 5)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm2 = _mm256_blendv_ps(arg9, zmm4, zmm2)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rcx_79), 4)
                        uint16_t* rcx_80 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rbx_75 = zmm3[0].q
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_80 + rdi_49), 5)
                        void* rcx_81 = arg14 + rbx_75
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm4[0].q + rcx_81), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rcx_81), 6)
                        zmm5[0].o = zx.o(*(arg14 + r8_6))
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + r9_17), 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + r11_14), 2)
                        zmm5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rax_111), 3)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rdx_82), 4)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rsi_42), 5)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rbx_75), 6)
                        int64_t rax_112 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(arg14 + rax_112), 7)
                        void* rax_113 = arg14 + rax_112
                        int64_t rcx_83 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_83 + rax_113), 7)
                        int64_t rcx_84 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
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
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_84 + rax_113), 7)
                        arg5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, zmm0[0].o, 1)), zmm3)
                        zmm3 = data_143442560
                        var_340_1 = _mm256_maskstore_ps(arg7, _mm256_mul_ps(zmm2, zmm3))
                        var_320_1 = _mm256_maskstore_ps(arg7, _mm256_mul_ps(zmm1, zmm3))
                        zmm0 = _mm256_mul_ps(zmm0, zmm3)
                    case 3
                        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        arg5 = arg11
                        arg11 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        arg12 = __vandps_ymmqq_ymmqq_memqq(arg11, var_4e0_1)
                        int32_t temp0_1299 = __vextractps_gpr32_xmmdq_immb(arg12[0].o, 1)
                        var_600_1[0].d = __vextractps_memd_xmmdq_immb(arg12[0].o, 2)
                        uint64_t var_5e0_2
                        var_5e0_2.d = __vextractps_memd_xmmdq_immb(arg12[0].o, 3)
                        zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        int64_t rax_115 = sx.q(zmm0[0].d)
                        float* r11_15 = arg14
                        void* r8_7 = r11_15 + rax_115
                        zmm1[0].o = *(r11_15 + rax_115)
                        int64_t rax_117 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rsi_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_1305 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_15 + rax_117), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_15 + rsi_43), 0x20)
                        uint64_t var_6a0_1
                        var_6a0_1.o = zmm0[0].o
                        arg9 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9520)
                        var_690.q = zx.q(__vextractps_gpr32_xmmdq_immb(arg9[0].o, 1))
                        void* rdi_52 = r11_15 + rax_117
                        var_480_1[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(arg9[0].o, 2))
                        zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm1[0].o = *(zx.q(zmm0[0].d) + r8_7)
                        uint64_t rdx_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        uint64_t rbx_76 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        uint64_t r13_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_84 + rdi_52), 0x10)
                        var_580[0].o = zmm0[0].o
                        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9540)
                        var_5a0.32 = zmm0
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        var_4a0[0].o = zmm0[0].o
                        zmm1[0].o = *(zx.q(zmm0[0].d) + r8_7)
                        uint64_t rdx_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_86 + rdi_52), 0x10)
                        var_4c0[0].o = zmm0[0].o
                        zmm0 = var_620.32
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                        zmm4 = var_560_3
                        zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        arg6 = __vandps_ymmqq_ymmqq_memqq(arg11, data_1434423c0)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                        uint64_t rdx_87 = zx.q(zmm5[0].d)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                        uint64_t rax_120 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                        zmm4[0].o = *(rdx_87 + r8_7)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_120 + rdi_52), 0x10)
                        int128_t var_620_1 = zmm0[0].o
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        zmm3[0].o = _mm_permute_ps(arg7[0].o, 0x50)
                        arg5[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                        zmm3 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        zmm3 = _mm256_blendv_ps(arg5, zmm2, zmm3)
                        zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        arg10[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
                        arg10 = __vandps_ymmqq_ymmqq_memqq(arg11, data_1434423e0)
                        zmm2 = _mm256_blendv_ps(arg5, zmm1, zmm2)
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        arg5[0].o = *(zx.q(zmm1[0]) + r8_7)
                        float* rax_122 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_122 + rdi_52), 0x10)
                        int32_t rcx_86 = arg12[0].d
                        arg11 = __vandps_ymmqq_ymmqq_memqq(arg11, data_143442400)
                        arg12[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        int32_t* rdx_88 = zx.q(arg12[0].d)
                        float* rax_123 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                        arg13[0].o = *(rdx_88 + r8_7)
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rax_123 + rdi_52), 0x10)
                        var_560_3[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(arg9[0].o, 3))
                        uint64_t rdx_89 = zx.q(arg9[0])
                        void* rdi_53 = r11_15 + rsi_43
                        zmm0[0].o = var_580[0].o
                        arg9[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_76 + rdi_53), 0x20)
                        zmm0[0].o = var_4a0[0].o
                        float* rbx_77 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
                        zmm13[0].o = var_4c0[0].o
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm13[0].o, *(rbx_77 + rdi_53), 0x20)
                        var_6b0.o = zmm4[0].o
                        uint64_t rbx_78 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                        zmm4[0].o = var_620_1
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_78 + rdi_53), 0x20)
                        var_4e0_1[0].o = zmm4[0].o
                        float* rbx_79 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_79 + rdi_53), 0x20)
                        float* rbx_80 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_80 + rdi_53), 0x20)
                        int64_t rcx_87 = sx.q(rcx_86)
                        zmm4 = var_5a0.32
                        int32_t* rbx_81 = zx.q(zmm4[0])
                        float* rdi_54 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                        var_580[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                        var_4c0[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                        zmm13[0].o = *(r11_15 + rcx_87)
                        void* rcx_88 = r11_15 + rcx_87
                        float* rsi_44 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = *(rdx_89 + rcx_88)
                        int64_t rdx_90 = sx.q(temp0_1305)
                        zmm4[0].o = var_6a0_1.o
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r11_15 + rdx_90), 0x30)
                        var_4a0[0].o = zmm4[0].o
                        void* rdx_91 = r11_15 + rdx_90
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r13_9 + rdx_91), 0x30)
                        double var_620_2[0x2] = zmm4[0].o
                        uint64_t r14_20 = zx.q(arg6[0].d)
                        uint64_t r13_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        uint64_t r15_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        float* r12_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = *(rbx_81 + rcx_88)
                        int64_t rbx_82 = sx.q(temp0_1299)
                        zmm13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm13[0].o, *(r11_15 + rbx_82), 0x10)
                        float* r9_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                        zmm5[0].o = *(r14_20 + rcx_88)
                        uint64_t r14_21 = zx.q(arg10[0])
                        float* r8_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = *(r14_21 + rcx_88)
                        int32_t* r14_22 = zx.q(arg11[0].d)
                        uint64_t rax_127 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                        arg12[0].o = *(r14_22 + rcx_88)
                        void* rcx_89 = r11_15 + rbx_82
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_690.q + rcx_89), 0x10)
                        zmm4[0].o = var_6b0.o
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_44 + rdx_91), 0x30)
                        var_6a0_1.o = zmm4[0].o
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_54 + rcx_89), 0x10)
                        zmm4[0].o = var_4e0_1[0].o
                        arg9[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_19 + rdx_91), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r13_10 + rcx_89), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_8 + rdx_91), 0x30)
                        uint64_t rbx_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rax_127 + rdx_91), 0x30)
                        uint64_t r8_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
                        uint64_t rdx_92 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_84 + rcx_89), 0x10)
                        float* rbx_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1))
                        arg10[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(rbx_85 + rcx_89), 0x10)
                        arg12 = var_6e0_1.32
                        float* rcx_90 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 2))
                        float* rbx_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 3))
                        int64_t rdi_55 = sx.q(var_600_1[0].d)
                        arg11[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm13[0].o, *(r11_15 + rdi_55), 0x20)
                        void* rdi_56 = r11_15 + rdi_55
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_480_1[0].q + rdi_56), 0x20)
                        int64_t rax_129 = sx.q(var_5e0_2.d)
                        arg11[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(r11_15 + rax_129), 0x30)
                        arg11 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg11, var_4a0[0].o, 1)
                        void* rax_130 = r11_15 + rax_129
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(var_560_3[0].q + rax_130), 0x30)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(var_580[0].q + rdi_56), 0x20)
                        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(var_4c0[0] i+ rax_130), 0x30)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r15_14 + rdi_56), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r12_11 + rax_130), 0x30)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_9 + rdi_56), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_92 + rax_130), 0x30)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rcx_90 + rdi_56), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_86 + rax_130), 0x30)
                        int64_t rax_131 = zmm3[0].q
                        int64_t rcx_91 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        int64_t rdx_93 = zmm3[0].q
                        int64_t rbx_87 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = zx.o(*(r11_15 + rax_131))
                        int64_t rax_132 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm3[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r11_15 + rcx_91), 1)
                        int64_t rcx_92 = zmm2[0].q
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm3[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r11_15 + rdx_93), 2)
                        int64_t rdx_94 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm3[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r11_15 + rbx_87), 3)
                        int64_t rbx_88 = zmm2[0].q
                        zmm2[0].o = zx.o(*(r11_15 + rcx_92))
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_15 + rax_132), 1)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_15 + rbx_88), 2)
                        zmm2[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_15 + rdx_94), 3)
                        zmm13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_620_2, 1)
                        arg10 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg6, var_6a0_1.o, 1)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg9[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                        arg9 = _mm256_insertf128_ps(zmm4, arg13[0].o, 1)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm3, zmm2[0].o, 1), 
                            data_143442420)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0xa)
                        zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm4[0].o = data_143442490
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        zmm0 = __vdivps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, zmm0[0].o, 1)), 
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
                        zmm1 = _mm256_mul_ps(zmm1, zmm4)
                        zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm3[0].o, 0x15)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                        zmm2 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm2[0].o, 1)), arg5)
                        zmm1 = _mm256_add_ps(zmm13, zmm1)
                        zmm13 = var_700_1.32
                        var_340_1 = _mm256_maskstore_ps(arg7, zmm0)
                        zmm0 = _mm256_mul_ps(arg9, zmm2)
                        var_320_1 = _mm256_maskstore_ps(arg7, zmm1)
                        zmm0 = _mm256_add_ps(arg10, zmm0)
                    case 4, 5, 6
                        goto label_140128364
            
            float var_300_1[0x8] = _mm256_maskstore_ps(arg7, zmm0)
            zmm3 = var_540_1
            zmm4 = var_520_1
            zmm5 = var_500_1
            zmm0 = _mm256_sub_ps(var_340_1, zmm3)
            zmm1 = _mm256_sub_ps(var_320_1, zmm4)
            zmm2 = _mm256_sub_ps(var_300_1, zmm5)
            arg5 = var_5c0.32
            zmm0 = _mm256_mul_ps(arg5, zmm0)
            zmm1 = _mm256_mul_ps(arg5, zmm1)
            zmm2 = _mm256_mul_ps(arg5, zmm2)
            var_540_1 = _mm256_maskstore_ps(arg7, _mm256_add_ps(zmm3, zmm0))
            var_520_1 = _mm256_maskstore_ps(arg7, _mm256_add_ps(zmm4, zmm1))
            var_500_1 = _mm256_maskstore_ps(arg7, _mm256_add_ps(zmm5, zmm2))
        
        zmm0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_640_1, var_260_1, 1)
        zmm2[0].o = var_540_1[0].o
        zmm3[0].o = var_540_1[4].o
        zmm4[0].o = var_520_1[0].o
        zmm5[0].o = var_520_1[4].o
        arg5[0].o = var_500_1[0].o
        arg6[0].o = var_500_1[2].o
        arg7[0].o = zx.o(0)
        arg10[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
        arg9[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
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
        zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
        zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
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
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm13[0].o)
        zmm1 = _mm256_insertf128_ps(zmm1, arg8[0].o, 1)
        uint64_t i = zx.q(_mm256_movemask_ps(zmm1))
        
        do
            uint64_t rcx_93
            uint64_t rflags_2
            
            if (i == 0)
                rcx_93 = 0x40
            else
                rcx_93, rflags_2 = _bit_scan_forward(i)
            double var_140[0x4] = zmm0
            result = sx.q(*(&var_140 + ((zx.q(rcx_93.d) & 7) << 2))) * 0x30
            zmm1[0].o = (&var_240)[rcx_93]
            *(arg1 + result + 0x20) = zmm1[0].o
            i &= rol.q(-2, rcx_93.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm1 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    zmm0[0].o = _mm_permute_ps(zmm13[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_280 = zmm0
    int32_t rcx_4
    rcx_4.b = r15.d == 3
    zmm0[0].o = zx.o(neg.d(rcx_4))
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    var_4a0 = zmm0
    zmm0[0].o = zx.o(rax_1)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg12 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    rcx_6 = 0
    var_580 = zmm1
    var_5a0 = __vextractf128_memdq_ymmdq_immb(zmm1[0].o, 1)
    zmm4[0].o = data_1434422d0
    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
    var_4c0 = arg12
    
    do
        int64_t rcx_8 = sx.q((rcx_6 << 3).d)
        arg13[0].o = *(arg2 + rcx_8)
        zmm2[0].o = *(arg2 + rcx_8 + 0x10)
        zmm1[0].o = *(arg2 + rcx_8 + 0x20)
        zmm5[0].o = *(arg2 + rcx_8 + 0x30)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg13[0].o, zmm2[0].o, 0xdd)
        int128_t var_640 = zmm1[0].o
        var_5c0 = zmm5[0].o
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xdd)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_5a0)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm3[0].o, var_580[0].o)
        int64_t rcx_10 = sx.q(zmm3[0])
        int64_t r13_1 = sx.q(*(arg3 + rcx_10))
        int64_t rbx_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        int64_t rax_3 = sx.q(*(arg3 + rbx_1))
        int64_t rdi_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        int64_t r12_1 = sx.q(*(arg3 + rdi_1))
        int64_t rdx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        int64_t r14_1 = sx.q(*(arg3 + rdx_3))
        int64_t rsi_2 = sx.q(zmm1[0])
        zmm3[0].o = zx.o(*(arg3 + rcx_10 + 4))
        int32_t temp0_19 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg3 + rbx_1 + 4), 1)
        int64_t rbx_2 = sx.q(*(arg3 + rsi_2))
        int64_t rcx_12 = sx.q(temp0_19)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg3 + rdi_1 + 4), 2)
        int32_t temp0_22 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg3 + rdx_3 + 4), 3)
        int64_t r9 = sx.q(*(arg3 + rcx_12))
        int64_t rdx_4 = sx.q(temp0_22)
        zmm3[0].o = zx.o(*(arg3 + rsi_2 + 4))
        int64_t rdi_3 = sx.q(*(arg3 + rdx_4))
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg3 + rcx_12 + 4), 1)
        int64_t rcx_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = zx.o(rbx_2.d)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, r9.d, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdi_3.d, 2)
        zmm3[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg3 + rdx_4 + 4), 2)
        int64_t r11_1 = sx.q(*(arg3 + rcx_14))
        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, r11_1.d, 3)
        zmm1[0].o = zx.o(r13_1.d)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_3.d, 1)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, r12_1.d, 2)
        arg11[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, r14_1.d, 3)
        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg3 + rcx_14 + 4), 3)
        arg6 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
        arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        arg10[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
        arg9[0].o = __vpmovsxdq_xmmdq_xmmq(arg11[0])
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg11[0].o, 0x4e)
        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0])
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
        zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
        char temp0_44 = _mm256_movemask_ps(zmm1)
        var_620 = zmm0[0].o
        double var_560_1[0x4] = arg11
        int64_t var_700
        int64_t var_6e0
        int64_t var_5e0
        
        if (temp0_44 == 0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg7 = var_5e0.32
        label_14012578d:
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            bool cond:6_1 = zmm4[0].o f>= zmm13[0]
            arg5 = _mm256_cmp_ps(arg8, arg8, 0xf)
            arg11 = _mm256_xor_ps(zmm1, arg5)
            
            if (cond:6_1)
                arg7 = _mm256_blendv_ps(arg7, arg8, arg11)
                zmm1 = _mm256_blendv_ps(var_700.32, arg8, arg11)
            label_140125896:
                var_700.32 = zmm1
                zmm1 = _mm256_blendv_ps(var_6e0.32, arg8, arg11)
                var_6e0.32 = zmm1
            else
                bool cond:3_1 = zmm13[0].o f>= 1f
                zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                zmm13 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                
                if (cond:3_1)
                    arg7 = _mm256_blendv_ps(arg7, zmm13, arg11)
                    zmm1 = _mm256_blendv_ps(var_700.32, zmm13, arg11)
                    goto label_140125896
                
                arg8 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm13), var_280)
                zmm3 = arg7
                arg7 = _mm256_round_ps(arg8, 9)
                zmm1 = _mm256_cvttps_epi32(arg7)
                zmm4[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm13[0].o)
                arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm1[0].o = _mm256_extractf128_ps(zmm13[0].o, 1)
                arg5[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                zmm4 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
                zmm3 = _mm256_blendv_ps(zmm3, zmm4, arg11)
                zmm0[0].o = zx.o(0)
                
                if (arg16 != 1)
                    zmm0 = _mm256_sub_ps(arg8, arg7)
                
                arg7 = zmm3
                zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
                arg5[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm13[0].o)
                zmm1[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                zmm3 = _mm256_blendv_ps(var_700.32, _mm256_insertf128_ps(arg5, zmm1[0].o, 1), arg11)
                var_700.32 = zmm3
                zmm1 = _mm256_blendv_ps(var_6e0.32, zmm0, arg11)
                var_6e0.32 = zmm1
                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        else
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm4[0].o = arg5[0].o ^ zmm3[0].o
            arg7[0].o = zmm1[0].o ^ zmm3[0].o
            zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            arg7 = _mm256_and_ps(zmm4, var_5e0.32)
            var_700.32 = _mm256_and_ps(zmm4, var_700.32)
            zmm3 = _mm256_and_ps(zmm4, var_6e0.32)
            var_6e0.32 = zmm3
            
            if (temp0_44 != 0xff)
                zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                goto label_14012578d
        
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg13[0].o, zmm2[0].o, 0x88)
        int128_t var_260
        var_260.32 = zmm0
        zmm13 = _mm256_insertf128_ps(arg12, arg10[0].o, 1)
        arg10 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
        zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm1[0].o = data_142d3f5b0
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), var_4a0)
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, data_143442540, zmm0)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
        arg13 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
        arg9 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        arg12 = var_4c0
        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        uint64_t rsi_3 = zx.q(r15.d)
        var_5e0.32 = arg7
        int32_t var_480[0x8]
        var_480[0].q = rsi_3
        float var_4e0[0x8]
        float var_400_1[0x8]
        double var_3e0_1[0x4]
        int32_t var_3c0_1[0x8]
        int32_t var_3a0
        int128_t var_380
        float var_360[0x8]
        
        if (r15.d u> 6)
        label_140125ae0:
            zmm3[0].o = zx.o(0)
            var_3c0_1 = zmm3
            var_3e0_1 = zmm3
            var_400_1 = zmm3
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        else
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm3[0].q)
            arg11 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
            zmm3[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
            zmm4 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            
            switch (rsi_3)
                case 0, 1
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm13[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm13[0].o, arg11[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                    arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                    int64_t rdx_7 = zmm3[0].q
                    int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    int64_t r9_1 = zmm1[0].q
                    int64_t r14_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rcx_16 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    double rax_4 = arg5[0]
                    double rsi_4 = zmm5[0]
                    int64_t rdi_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o = *(arg14 i+ rax_4)
                    zmm3[0].o = *(arg14 i+ rax_4 + 4)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + rcx_16), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 i+ rsi_4), 0x20)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + rdi_4), 0x30)
                    zmm4[0].o = *(arg14 + rdx_7)
                    zmm5[0].o = *(arg14 + rdx_7 + 4)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + r11_2), 0x10)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + r9_1), 0x20)
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + r14_2), 0x30)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + rcx_16 + 4), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 i+ rsi_4 + 4), 0x20)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + rdi_4 + 4), 0x30)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r11_2 + 4), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r9_1 + 4), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r14_2 + 4), 0x30)
                    arg8 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                    arg11 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                    zmm1[0].o = *(arg14 + rdx_7 + 8)
                    zmm3[0].o = *(arg14 i+ rax_4 + 8)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + rcx_16 + 8), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 i+ rsi_4 + 8), 0x20)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + rdi_4 + 8), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r11_2 + 8), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r9_1 + 8), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r14_2 + 8), 0x30)
                    zmm3 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                case 2
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(zmm13[0].o, 1)
                    arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm13[0].o, arg11[0].o)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                    arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                    zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                    int64_t rax_5 = zmm3[0].q
                    int64_t r14_3 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                    int64_t r15_1 = zmm1[0].q
                    int64_t rdi_5 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rsi_5 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    double rbx_4 = arg5[0]
                    double r11_3 = zmm5[0]
                    int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    zmm1[0].o = zx.o(*(arg14 + rax_5))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg14 + r14_3), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg14 + r15_1), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg14 + rdi_5), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg14 i+ rbx_4), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg14 + rsi_5), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg14 i+ r11_3), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg14 + r9_2), 7)
                    zmm3[0].o = zx.o(*(arg14 + rax_5 + 2))
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg14 + r14_3 + 2), 1)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg14 + r15_1 + 2), 2)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg14 + rdi_5 + 2), 3)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg14 i+ rbx_4 + 2), 4)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg14 + rsi_5 + 2), 5)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg14 i+ r11_3 + 2), 6)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg14 + r9_2 + 2), 7)
                    zmm4[0].o = zx.o(*(arg14 + rax_5 + 4))
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg14 + r14_3 + 4), 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg14 + r15_1 + 4), 2)
                    r15 = var_6b0
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg14 + rdi_5 + 4), 3)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg14 i+ rbx_4 + 4), 4)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg14 + rsi_5 + 4), 5)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg14 i+ r11_3 + 4), 6)
                    zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                    arg5[0].o = zx.o(0)
                    zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                    arg6[0].o = data_1434424d0
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm1 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm1[0].o, 1))
                    zmm5 = data_1434424e0
                    arg7 = zmm5
                    zmm1 = _mm256_div_ps(zmm1, zmm5)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(arg14 + r9_2 + 4), 7)
                    zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                    zmm3[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zx.o(0))
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm3[0].o, 1)), arg7)
                    zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
                    zmm4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zx.o(0))
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                    zmm5 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm4[0].o, 1)), arg7)
                    zmm4 = data_143442560
                    arg8 = _mm256_mul_ps(zmm1, zmm4)
                    arg11 = _mm256_mul_ps(zmm3, zmm4)
                    zmm3 = _mm256_mul_ps(zmm5, zmm4)
                case 3
                    zmm1[0].o = *(arg14 + rbx_2)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r9), 0x10)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + rdi_3), 0x20)
                    zmm3[0].o = *(arg14 + rbx_2 + 4)
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r11_1), 0x30)
                    zmm5[0].o = *(arg14 + r13_1)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + rax_3), 0x10)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r12_1), 0x20)
                    arg5[0].o = *(arg14 + r13_1 + 4)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r14_1), 0x30)
                    zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
                    var_4e0 = zmm1
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + r9 + 4), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + rdi_3 + 4), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r11_1 + 4), 0x30)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg14 + rax_3 + 4), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + r12_1 + 4), 0x20)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + r14_1 + 4), 0x30)
                    zmm5[0].o = *(arg14 + r13_1 + 8)
                    arg5[0].o = *(arg14 + rbx_2 + 8)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg14 + r9 + 8), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg14 + rdi_3 + 8), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg14 + r11_1 + 8), 0x30)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + rax_3 + 8), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r12_1 + 8), 0x20)
                    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                    var_380.32 = zmm1
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r14_1 + 8), 0x30)
                    zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
                    var_360 = zmm1
                    zmm1[0].o = *(arg14 + r13_1 + 0xc)
                    zmm3[0].o = *(arg14 + rbx_2 + 0xc)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + r9 + 0xc), 0x10)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + rdi_3 + 0xc), 0x20)
                    zmm3[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + r11_1 + 0xc), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + rax_3 + 0xc), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r12_1 + 0xc), 0x20)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r14_1 + 0xc), 0x30)
                    zmm5[0].o = *(arg14 + r13_1 + 0x10)
                    arg5[0].o = *(arg14 + rbx_2 + 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg14 + r9 + 0x10), 0x10)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg14 + rdi_3 + 0x10), 0x20)
                    arg5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg14 + r11_1 + 0x10), 0x30)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + rax_3 + 0x10), 0x10)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r12_1 + 0x10), 0x20)
                    zmm5[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg14 + r14_1 + 0x10), 0x30)
                    arg8 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
                    var_3a0.32 = zmm1
                    zmm1[0].o = *(arg14 + r13_1 + 0x14)
                    arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    arg6[0].o = _mm256_extractf128_ps(zmm13[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                    arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                    arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                    arg6[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                    arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                    arg6[0].o = *(arg14 + rbx_2 + 0x14)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg14 + r9 + 0x14), 0x10)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg14 + rdi_3 + 0x14), 0x20)
                    arg6[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg14 + r11_1 + 0x14), 0x30)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + rax_3 + 0x14), 0x10)
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r12_1 + 0x14), 0x20)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
                    int64_t rax_7 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    int64_t rcx_19 = zmm4[0].q
                    zmm1[0].o =
                        __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg14 + r14_1 + 0x14), 0x30)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm13[0].o, arg11[0].o)
                    zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
                    double rdx_9 = arg5[0]
                    int64_t rbx_5 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    int64_t rdi_6 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                    int64_t r9_3 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                    int64_t rsi_6 = zmm4[0].q
                    zmm4[0].o = zx.o(*(arg14 + rcx_19))
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + rax_7), 1)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 i+ rdx_9), 2)
                    arg5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + rbx_5), 3)
                    double rax_8 = zmm5[0]
                    zmm4[0].o = zx.o(*(arg14 + rsi_6))
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + rdi_6), 1)
                    zmm4[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 i+ rax_8), 2)
                    zmm5[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + r9_3), 3)
                    r15 = var_6b0
                    arg7 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                    zmm4 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg5, zmm5[0].o, 1), 
                        data_143442420)
                    arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                    zmm3[0].o = data_143442490
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                    zmm4 = __vdivps_ymmqq_ymmqq_memqq(
                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm4, arg6[0].o, 1)), 
                        data_1434424a0)
                    zmm3 = _mm256_mul_ps(arg8, zmm4)
                    arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0xa)
                    arg8 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_4e0)
                    zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0xa)
                    zmm4[0].o = data_143442480
                    zmm3[0].o &= zmm4[0].o
                    zmm1[0].o = data_143442440
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                    arg6[0].o &= zmm4[0].o
                    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                    zmm3 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg6, zmm3[0].o, 1))
                    zmm4 = data_143442460
                    zmm3 = __vmulps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm3, zmm4), var_3a0.32)
                    arg11 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_380.32)
                    zmm3[0].o = __vpsrld_xmmdq_xmmdq_immb(arg5[0].o, 0x15)
                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm5[0].o, 0x15)
                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                    zmm1 = _mm256_mul_ps(arg7, 
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm3, zmm5[0].o, 1)), 
                            zmm4))
                    zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_360)
                case 4, 5, 6
                    goto label_140125ae0
            
            var_400_1 = arg8
            var_3e0_1 = arg11
            var_3c0_1 = zmm3
        
        zmm1[0].o = var_640
        zmm4[0].o = var_5c0
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 0x88)
        zmm4 = var_700.32
        zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        arg6[0].o = zmm0[0].o ^ zmm5[0].o
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm4[0].o, var_5e0.o)
        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        zmm0[0].o ^= zmm5[0].o
        zmm5 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
        
        if (_mm256_movemask_ps(zmm5) != 0)
            double var_2e0_1[0x4]
            float var_2c0_1[0x8]
            
            if (r15.d u> 6)
            label_140126320:
                zmm0[0].o = zx.o(0)
                var_2e0_1 = _mm256_maskstore_ps(zmm5, zmm0)
                var_2c0_1 = _mm256_maskstore_ps(zmm5, zmm0)
            else
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg12[0].o, var_700.o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm1[0].q)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm1[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                
                switch (var_480[0].q)
                    case 0, 1
                        zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(zmm13[0].o, 1)
                        arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
                        zmm4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm13[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg10[0].o = zx.o(0)
                        zmm1 = _mm256_blendv_ps(arg10, zmm1, zmm0)
                        zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm3 = _mm256_blendv_ps(arg10, zmm4, zmm2)
                        int64_t r9_4 = zmm1[0].q
                        int64_t r11_4 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        float* r15_3 = arg14
                        void* r13_2 = r15_3 + r9_4
                        void* rbx_6 = r15_3 + r11_4
                        arg9[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        int64_t r14_4 = zmm3[0].q
                        void* rcx_20 = r15_3 + r14_4
                        int64_t r12_2 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        void* rsi_7 = r15_3 + r12_2
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm4 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        arg5 = _mm256_blendv_ps(arg10, zmm4, zmm2)
                        arg6[0].o = *(arg5[0] i+ rcx_20)
                        int64_t rax_14 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        int64_t rdi_7 = zmm3[0].q
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_14 + rsi_7), 0x10)
                        arg8 = _mm256_broadcast_sd(3.9525251667299724e-323)
                        zmm2 = _mm256_blendv_ps(arg10, arg8, zmm2)
                        zmm1[0].o = *(zmm2[0].q + rcx_20)
                        float* rax_16 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_16 + rsi_7), 0x10)
                        void* rax_17 = r15_3 + rdi_7
                        int64_t rcx_21 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                            *(zmm3[0].q + rax_17), 0x20)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                            *(zmm2[0].q + rax_17), 0x20)
                        void* rax_18 = r15_3 + rcx_21
                        int64_t rdx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_12 + rax_18), 0x30)
                        float* rdx_13 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_13 + rax_18), 0x30)
                        int64_t rax_19 = arg9[0].q
                        zmm2 = _mm256_blendv_ps(arg10, zmm4, zmm0)
                        zmm4[0].o = *(zmm2[0].q + r13_2)
                        zmm0 = _mm256_blendv_ps(arg10, arg8, zmm0)
                        arg5[0].o = *(zmm0[0] + r13_2)
                        void* rdx_16 = r15_3 + rax_19
                        int64_t rsi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_8 + rbx_6), 0x10)
                        float* rsi_9 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_9 + rbx_6), 0x10)
                        int64_t rsi_10 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                            *(zmm2[0].q + rdx_16), 0x20)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(zmm0[0] + rdx_16), 0x20)
                        void* rdx_17 = r15_3 + rsi_10
                        int64_t rbx_9 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_9 + rdx_17), 0x30)
                        float* rbx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_10 + rdx_17), 0x30)
                        zmm4[0].o = *(r15_3 + r9_4)
                        arg5[0].o = *(r15_3 + r14_4)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_3 + r12_2), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_3 + rdi_7), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_3 + rcx_21), 0x30)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_3 + r11_4), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_3 + rax_19), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_3 + rsi_10), 0x30)
                        r15 = var_6b0
                        var_2e0_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(zmm4, arg5[0].o, 1))
                        var_2c0_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(zmm2, zmm3[0].o, 1))
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                    case 2
                        zmm1[0].o = _mm256_extractf128_ps(zmm13[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                        zmm3[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm13[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                        zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg6[0].o = zx.o(0)
                        zmm3 = _mm256_blendv_ps(arg6, zmm0, zmm1)
                        zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm0 = _mm256_blendv_ps(arg6, zmm4, zmm2)
                        int64_t rax_20 = zmm3[0].q
                        var_640.q = rax_20
                        void* r12_3 = arg14 + rax_20
                        int64_t r11_5 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        void* r13_3 = arg14 + r11_5
                        zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        int64_t r14_5 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        zmm3 = _mm256_broadcast_sd(9.8813129168249309e-324)
                        arg5 = _mm256_blendv_ps(arg6, zmm3, zmm1)
                        zmm3 = _mm256_blendv_ps(arg6, zmm3, zmm2)
                        int64_t r9_5 = zmm4[0].q
                        double rax_21 = arg5[0]
                        int64_t rdx_18 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        uint16_t* rsi_11 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        arg5 = _mm256_broadcast_sd(1.9762625833649862e-323)
                        zmm1 = _mm256_blendv_ps(arg6, arg5, zmm1)
                        zmm2 = _mm256_blendv_ps(arg6, arg5, zmm2)
                        arg5[0].o = zx.o(*(rax_21 i+ r12_3))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rdx_18 + r13_3), 1)
                        uint16_t* rax_23 = zmm4[0].q
                        void* rdx_19 = zmm1[0].q
                        uint16_t* rbx_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        uint16_t* rcx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        uint16_t* rdi_8 = zmm1[0].q
                        zmm1[0].o = zx.o(*(rdx_19 + r12_3))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rbx_11 + r13_3), 1)
                        void* rdx_21 = arg14 + r9_5
                        void* rbx_12 = arg14 + r14_5
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(rax_23 + rdx_21), 2)
                        double rax_24 = zmm0[0]
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rdi_8 + rdx_21), 2)
                        void* rdx_22 = arg14 i+ rax_24
                        int64_t rdi_9 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rsi_11 + rbx_12), 3)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(zmm3[0].q + rdx_22), 4)
                        int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rcx_22 + rbx_12), 3)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdx_22), 4)
                        double rcx_24 = zmm0[0]
                        void* rdx_23 = arg14 + rdi_9
                        int64_t rbx_13 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(rbx_13 + rdx_23), 5)
                        uint16_t* rbx_14 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rbx_14 + rdx_23), 5)
                        void* rdx_24 = arg14 i+ rcx_24
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm3[0].q + rdx_24), 6)
                        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(zmm2[0].q + rdx_24), 6)
                        void* rdx_25 = arg14 + rsi_13
                        int64_t rbx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rbx_17 + rdx_25), 7)
                        uint16_t* rbx_18 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(rbx_18 + rdx_25), 7)
                        zmm2[0].o = zx.o(*(arg14 + var_640.q))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg14 + r11_5), 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg14 + r9_5), 2)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg14 + r14_5), 3)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg14 i+ rax_24), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg14 + rdi_9), 5)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg14 i+ rcx_24), 6)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg14 + rsi_13), 7)
                        r15 = var_6b0
                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                        arg5[0].o = data_1434424d0
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                        zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                        zmm2 = _mm256_cvtepi32_ps(zmm2)
                        zmm3 = data_1434424e0
                        zmm2 = _mm256_div_ps(zmm2, zmm3)
                        zmm4 = data_143442560
                        var_2e0_1 = _mm256_maskstore_ps(zmm5, _mm256_mul_ps(zmm2, zmm4))
                        var_2c0_1 = _mm256_maskstore_ps(zmm5, 
                            _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm0), zmm3), zmm4))
                        zmm0 = _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm1), zmm3), zmm4)
                    case 3
                        zmm3 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_560_1, var_620, 1)
                        zmm1 = var_5e0.32
                        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm1[0].o, var_700.o)
                        zmm1[0].o ^= zmm4[0].o
                        zmm1 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                        zmm3 = _mm256_and_ps(zmm1, zmm3)
                        int64_t rax_26 = sx.q(zmm3[0])
                        void* r11_6 = arg14 + rax_26
                        int32_t temp0_473 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
                        zmm4[0].o = *(arg14 + rax_26)
                        int64_t r9_6 = sx.q(temp0_473)
                        var_5c0.q = arg14 + r9_6
                        int64_t rcx_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        void* r13_4 = arg14 + rcx_27
                        int64_t rdx_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        var_640.q = arg14 + rdx_29
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        int64_t rsi_15 = sx.q(zmm3[0])
                        void* r15_5 = arg14 + rsi_15
                        arg5[0].o = *(arg14 + rsi_15)
                        int64_t rdi_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        void* r12_4 = arg14 + rdi_10
                        int64_t rbx_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        void* rsi_18 = arg14 + rbx_19
                        int32_t temp0_479 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg14 + rdi_10), 0x10)
                        int64_t rax_30 = sx.q(temp0_479)
                        void* rdi_11 = arg14 + rax_30
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + rbx_19), 0x20)
                        arg8[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg14 + rax_30), 0x30)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + r9_6), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + rcx_27), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg14 + rdx_29), 0x30)
                        arg5 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9520)
                        uint64_t rax_31 = zx.q(arg5[0].d)
                        uint64_t r9_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        uint64_t r14_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        uint64_t rbx_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg6[0].o = *(rax_31 + r11_6)
                        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        zmm3[0].o = *(zx.q(arg5[0].d) + r15_5)
                        float* rax_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        uint64_t rcx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + r12_4), 0x10)
                        float* rax_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_28 + rsi_18), 0x20)
                        int32_t var_650
                        var_650.q = rdi_11
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + rdi_11), 0x30)
                        int64_t r12_5 = var_5c0.q
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_7 + r12_5), 0x10)
                        var_4e0[0].q = r13_4
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r14_7 + r13_4), 0x20)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg8[0].o, 1)
                        var_480 = zmm4
                        int64_t rcx_29 = var_640.q
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_20 + rcx_29), 0x30)
                        var_620.32 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9540)
                        uint64_t rax_35 = zx.q(zmm3[0])
                        uint64_t r9_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        float* r14_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        uint64_t rbx_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm4[0].o = *(rax_35 + r11_6)
                        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        arg5[0].o = *(zx.q(zmm3[0]) + r15_5)
                        float* rax_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        float* rdx_31 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_37 + r12_4), 0x10)
                        float* rax_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_31 + rsi_18), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_38 + rdi_11), 0x30)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_8 + r12_5), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r14_8 + r13_4), 0x20)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_21 + rcx_29), 0x30)
                        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                        int32_t var_560_2[0x8] = zmm3
                        zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_1434423c0)
                        arg8[0].o = *(zx.q(zmm4[0]) + r11_6)
                        var_360[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                        var_380.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                        var_3a0.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        uint64_t rax_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                        arg11 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_1434423e0)
                        arg12[0].o = *(zx.q(arg11[0].d) + r11_6)
                        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_143442400)
                        int32_t* rcx_30 = zx.q(zmm1[0])
                        arg6[0].o = _mm256_extractf128_ps(zmm13[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                        arg6[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                        zmm3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                        arg5[0].o = *(rcx_30 + r11_6)
                        float* r14_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                        uint64_t rcx_31 = zx.q(zmm4[0])
                        uint64_t r15_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                        zmm4[0].o = *(rcx_31 + r15_5)
                        uint64_t rcx_32 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1))
                        uint64_t rcx_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 2))
                        uint64_t rcx_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 3))
                        arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                        uint64_t rbx_22 = zx.q(arg6[0].d)
                        uint64_t r9_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        float* r11_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        uint64_t rsi_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        uint64_t r12_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        uint64_t rcx_35 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        uint64_t rcx_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        arg6[0].o = *(rbx_22 + r15_5)
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        float* rbx_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        float* rcx_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        uint64_t rdx_32 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = *(zx.q(zmm1[0]) + r15_5)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_43 + r12_4), 0x10)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_9 + r12_4), 0x10)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_23 + r12_4), 0x10)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r14_9 + rsi_18), 0x20)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_7 + rsi_18), 0x20)
                        zmm1[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_37 + rsi_18), 0x20)
                        int64_t rax_48 = var_650.q
                        arg11[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_7 + rax_48), 0x30)
                        zmm4[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_19 + rax_48), 0x30)
                        arg6[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_32 + rax_48), 0x30)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm13[0].o, zmm2[0].o)
                        zmm1[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                        zmm2[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                        zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
                        zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                        zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                        zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                        zmm3[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                        arg9[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(arg9, zmm0, zmm2)
                        zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                        zmm1 = _mm256_blendv_ps(arg9, zmm1, zmm2)
                        int64_t rax_49 = var_5c0.q
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, 
                            *(var_360[0].q + rax_49), 0x10)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(rcx_32 + rax_49), 0x10)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_6 + rax_49), 0x10)
                        r15 = var_6b0
                        int64_t rax_50 = var_4e0[0].q
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(var_380.q + rax_50), 0x20)
                        int64_t rcx_41 = var_640.q
                        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                            *(var_3a0.q + rcx_41), 0x30)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_33 + rax_50), 0x20)
                        zmm3[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_34 + rcx_41), 0x30)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_35 + rax_50), 0x20)
                        arg5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_36 + rcx_41), 0x30)
                        double rax_52 = zmm0[0]
                        int64_t rcx_42 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        double rdx_37 = zmm0[0]
                        int64_t rbx_24 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = zx.o(*(arg14 i+ rax_52))
                        int64_t rax_53 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg14 + rcx_42), 1)
                        int64_t rcx_43 = zmm1[0].q
                        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm0[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg14 i+ rdx_37), 2)
                        int64_t rdx_38 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg9[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg14 + rbx_24), 3)
                        int64_t rbx_25 = zmm1[0].q
                        zmm0[0].o = zx.o(*(arg14 + rcx_43))
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg14 + rax_53), 1)
                        zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg14 + rbx_25), 2)
                        zmm1[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg14 + rdx_38), 3)
                        zmm13 = _mm256_insertf128_ps(zmm2, arg11[0].o, 1)
                        arg11 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                        arg10 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        zmm4 = _mm256_insertf128_ps(arg9, zmm1[0].o, 1)
                        arg5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg9[0].o, 0xa)
                        zmm4 = __vandps_ymmqq_ymmqq_memqq(zmm4, data_143442420)
                        arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                        zmm0[0].o = data_143442490
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm4 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
                        arg6[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0xa)
                        zmm0[0].o = data_143442480
                        zmm2[0].o = zmm0[0].o
                        arg6[0].o &= zmm0[0].o
                        zmm3[0].o = data_143442440
                        zmm0[0].o = zmm3[0].o
                        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                        arg5[0].o &= zmm2[0].o
                        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
                        arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                        zmm4 = __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm4), data_1434424a0)
                        arg5 = _mm256_cvtepi32_ps(arg5)
                        zmm2 = data_143442460
                        arg6 = zmm2
                        arg5 = _mm256_div_ps(arg5, zmm2)
                        zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm13, zmm4), var_480)
                        zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg11, arg5), var_620.32)
                        zmm4[0].o = __vpsrld_xmmdq_xmmdq_immb(arg9[0].o, 0x15)
                        zmm1[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm1[0].o, 0x15)
                        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                        zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                        var_2e0_1 = _mm256_maskstore_ps(zmm5, zmm2)
                        zmm0 = _mm256_mul_ps(arg10, _mm256_div_ps(_mm256_cvtepi32_ps(zmm1), arg6))
                        var_2c0_1 = _mm256_maskstore_ps(zmm5, zmm3)
                        zmm0 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_560_2)
                    case 4, 5, 6
                        goto label_140126320
            
            float var_2a0_1[0x8] = _mm256_maskstore_ps(zmm5, zmm0)
            zmm3 = var_400_1
            zmm4 = var_3e0_1
            arg5 = var_3c0_1
            zmm0 = _mm256_sub_ps(var_2e0_1, zmm3)
            zmm1 = _mm256_sub_ps(var_2c0_1, zmm4)
            zmm2 = _mm256_sub_ps(var_2a0_1, arg5)
            arg6 = var_6e0.32
            zmm0 = _mm256_mul_ps(arg6, zmm0)
            zmm1 = _mm256_mul_ps(arg6, zmm1)
            zmm2 = _mm256_mul_ps(arg6, zmm2)
            arg8 = _mm256_maskstore_ps(zmm5, _mm256_add_ps(zmm3, zmm0))
            arg11 = _mm256_maskstore_ps(zmm5, _mm256_add_ps(zmm4, zmm1))
            zmm3 = _mm256_maskstore_ps(zmm5, _mm256_add_ps(arg5, zmm2))
        
        zmm0 = _mm256_insertf128_ps(var_260.32, arg7[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        arg10[0].o = zx.o(0)
        arg9[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
        arg7[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
        zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x28)
        int128_t var_1c0 = arg5[0].o
        zmm4[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg9[0].o)
        int128_t var_1b0_1 = zmm4[0].o
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm3[0].o, 0xa8)
        int128_t var_1a0_1 = zmm3[0].o
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
        int128_t var_190_1 = zmm3[0].o
        zmm3[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        zmm4[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        arg5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm5[0].o, 0x28)
        int128_t var_180_1 = zmm2[0].o
        zmm2[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
        int128_t var_170_1 = zmm2[0].o
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xa8)
        int128_t var_160_1 = zmm2[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
        int128_t var_150_1 = zmm1[0].o
        uint64_t j = 0xff
        zmm13[0].o = arg15
        zmm4[0].o = data_1434422d0
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        
        do
            uint64_t rcx_44
            uint64_t rflags_1
            
            if (j == 0)
                rcx_44 = 0x40
            else
                rcx_44, rflags_1 = _bit_scan_forward(j)
            double var_120[0x4] = zmm0
            zmm1[0].o = (&var_1c0)[rcx_44]
            *(arg1 + sx.q(*(&var_120 + ((zx.q(rcx_44.d) & 7) << 2))) * 0x30 + 0x20) = zmm1[0].o
            j &= rol.q(-2, rcx_44.b)
        while (j != 0)
        
        rcx_6 = zx.q(rcx_6.d + 8)
    while (rcx_6.d s< i_1)
    
    result = zx.q(arg18)
    
    if (rcx_6.d s< result.d)
        goto label_140126e6d
arg5[0].o = var_e8
arg6[0].o = var_d8
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_68
arg13[0].o = var_58
_mm256_zeroupper()
return result
