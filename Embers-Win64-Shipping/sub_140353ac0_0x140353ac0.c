// 函数: sub_140353ac0
// 地址: 0x140353ac0
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
int32_t rcx_4 = ((arg17 s>> 0x1f u>> 0x1d) + arg17) & 0xfffffff8
arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
float var_720[0x8] = arg14
int32_t var_740[0x8] = arg14
int32_t var_760[0x8] = arg14
float var_780[0x8] = arg14
double var_7a0[0x4] = arg14
double var_7c0[0x4] = arg14
uint8_t var_700[0x8] = 0
uint64_t r10 = 0
double var_a20[0x4]
int32_t var_a00[0x8]
float var_9e0[0x8]
float var_9c0[0x8]
int32_t var_9a0[0x8]
double var_980[0x4]
float var_960[0x8]
int32_t var_940[0x8]
int32_t var_920[0x8]
int32_t var_900[0x8]
int32_t var_8e0[0x8]
int32_t var_8c0[0x8]
float var_8a0[0x8]
float var_880[0x8]
float var_860[0x8]
float var_840[0x8]
double zmm0[0x4]
double zmm1[0x4]
int32_t zmm2[0x8]
float zmm3[0x8]
double zmm4[0x4]
float zmm5[0x8]

if (rcx_4 s> 0)
    arg9[0].o = zx.o(0)
    arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
    int128_t* var_c60_1 = arg4
    
    while (true)
        int64_t rcx_7 = sx.q((r10 << 3).d - r10.d)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg9[0].o, *(arg4 + (rcx_7 << 2) + 0x18), 0)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(arg4 + (rcx_7 << 2) + 0x34), 2)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(arg4 + (rcx_7 << 2) + 0x50), 4)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(arg4 + (rcx_7 << 2) + 0x6c), 6)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(arg4 + (rcx_7 << 2) + 0x88), 8)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(arg4 + (rcx_7 << 2) + 0xa4), 0xa)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(arg4 + (rcx_7 << 2) + 0xc0), 0xc)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(arg4 + (rcx_7 << 2) + 0xdc), 0xe)
        int64_t r8 = sx.q((r10 << 2).d)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, *(arg1 + r8 + 0x10))
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, *(arg1 + r8))
        zmm1[0].o ^= arg10[0].o
        zmm2[0].o ^= arg10[0].o
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
        zmm3[0].o = zmm0[0].o & not.o(zmm1[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        char temp0_23 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
        
        if (temp0_23 != 0)
            int64_t rbx_1 = sx.q((r10 * 9).d * 3 + r10.d)
            arg6[0].o = *(arg4 + rbx_1)
            zmm0[0].o = *(arg4 + rbx_1 + 0x1c)
            zmm1[0].o = *(arg4 + rbx_1 + 0x38)
            arg5[0].o = *(arg4 + rbx_1 + 0x54)
            zmm4[0].o = *(arg4 + rbx_1 + 0x70)
            arg7[0].o = *(arg4 + rbx_1 + 0x8c)
            arg8[0].o = *(arg4 + rbx_1 + 0xa8)
            arg13[0].o = *(arg4 + rbx_1 + 0xc4)
            zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            zmm5[0].o = zmm5[0].q | zmm1[0] << 0x40
            zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x24)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 8)
            int32_t var_b60
            var_b60.32 = zmm2
            zmm2[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
            zmm2[0].o = zmm2[0].q | arg8[0].q << 0x40
            zmm5[0].o = _mm_permute_ps(arg13[0].o, 0x24)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
            int64_t var_ba0
            var_ba0.o = zmm2[0].o
            zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xe5)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x68)
            zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x44)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
            int32_t var_b80
            var_b80.32 = zmm2
            zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xe5)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 2)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 0x68)
            zmm5[0].o = _mm_permute_ps(arg13[0].o, 0x44)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
            int64_t var_bc0
            var_bc0.o = zmm2[0].o
            zmm2[0].o = _mm_permute_ps(arg6[0].o, 0x4e)
            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 2)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0xc)
            zmm5[0].o = _mm_permute_ps(arg5[0].o, 0xa4)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
            int32_t var_c80
            var_c80.32 = zmm2
            zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0x4e)
            zmm5[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 2)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 0xc)
            zmm5[0].o = _mm_permute_ps(arg13[0].o, 0xa4)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
            int64_t var_a60
            var_a60.o = zmm2[0].o
            zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xe7)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xe8)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 8)
            int64_t var_820
            var_820.32 = zmm0
            int64_t rsi_1 = *(arg4 + rbx_1 + 0x10)
            zmm0[0].o = zx.o(rsi_1.d)
            int64_t rdi_1 = *(arg4 + rbx_1 + 0x2c)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rdi_1.d, 1)
            int64_t r13_1 = *(arg4 + rbx_1 + 0x48)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r13_1.d, 2)
            int64_t r10_1 = *(arg4 + rbx_1 + 0x64)
            int64_t rcx_12 = *(arg4 + rbx_1 + 0x80)
            zmm1[0].o = zx.o(rcx_12.d)
            int64_t rdx = *(arg4 + rbx_1 + 0x9c)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx.d, 1)
            int64_t rax_3 = *(arg4 + rbx_1 + 0xb8)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_3.d, 2)
            int64_t rbx_2 = *(arg4 + rbx_1 + 0xd4)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rbx_2.d, 3)
            int64_t var_be0
            var_be0.o = zmm1[0].o
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r10_1.d, 3)
            int64_t var_c00
            var_c00.32 = zmm0
            zmm0[0].o = *(arg2 + r8)
            zmm1[0].o = *(arg2 + r8 + 0x10)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 6)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
            arg12 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm1[0].o = zx.o((rcx_12 u>> 0x20).d)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (rdx u>> 0x20).d, 1)
            zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (rax_3 u>> 0x20).d, 2)
            arg10[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (rbx_2 u>> 0x20).d, 3)
            zmm0 = _mm256_and_ps(arg12, zmm0)
            int32_t temp0_77 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            void* var_ce0
            var_ce0.d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
            int32_t r14_1 = zmm0[0].d
            double var_ca0[0x4]
            var_ca0[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int32_t temp0_81 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_82 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t r8_1 = zmm0[0].d
            int32_t temp0_83 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = zx.o((rsi_1 u>> 0x20).d)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (rdi_1 u>> 0x20).d, 1)
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (r13_1 u>> 0x20).d, 2)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9520)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            uint64_t r13_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            uint64_t rdi_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            uint64_t r9_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            uint64_t rax_5 = zx.q(zmm2[0])
            arg9[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (r10_1 u>> 0x20).d, 3)
            int64_t r8_2 = sx.q(r8_1)
            void* r15_1 = arg3 + r8_2
            int64_t rbx_5 = sx.q(temp0_81)
            zmm0[0].o = *(arg3 + r8_2)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rbx_5), 0x10)
            uint64_t r8_3 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
            void* rbx_6 = arg3 + rbx_5
            uint64_t r10_3 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
            zmm2[0].o = *(rax_5 + r15_1)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r13_3 + rbx_6), 0x10)
            uint64_t rsi_3 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rax_6 = zx.q(zmm1[0].d)
            int64_t rdx_3 = sx.q(temp0_82)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdx_3), 0x20)
            void* rdx_4 = arg3 + rdx_3
            double var_d00[0x4]
            var_d00[0] = rdx_4
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_3 + rdx_4), 0x20)
            zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xe7)
            int64_t rdx_5 = sx.q(r14_1)
            int64_t r14_2 = sx.q(temp0_77)
            void* rdi_4 = arg3 + rdx_5
            zmm4[0].o = *(arg3 + rdx_5)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + r14_2), 0x10)
            void* r14_3 = arg3 + r14_2
            int64_t rdx_6 = sx.q(var_ce0.d)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rdx_6), 0x20)
            void* r11_2 = arg3 + rdx_6
            int64_t rdx_7 = sx.q(var_ca0[0].d)
            int64_t r12_2 = sx.q(temp0_83)
            zmm5[0].o = zmm3[0].o
            arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r12_2), 0x30)
            void* rbx_7 = arg3 + r12_2
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rdx_7), 0x30)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_1 + rbx_7), 0x30)
            var_ca0[0].o = zmm0[0].o
            void* rcx_15 = arg3 + rdx_7
            zmm0[0].o = *(rax_6 + rdi_4)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_3 + r14_3), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_3 + r11_2), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_3 + rcx_15), 0x30)
            double var_6c0_1[0x4] = zmm0
            zmm0[0].o = _mm_permute_ps(arg7[0].o, 0x4e)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg12, data_142fc9540)
            uint64_t r8_4 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            uint64_t r10_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            uint64_t rsi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            uint64_t rax_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            uint64_t rcx_16 = zx.q(zmm2[0])
            uint64_t rdx_8 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
            zmm2[0].o = *(rcx_16 + r15_1)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_4 + rbx_6), 0x10)
            uint64_t rcx_17 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
            double rdi_5 = var_d00[0]
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_4 i+ rdi_5), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_7 + rbx_7), 0x30)
            double var_c20[0x4]
            var_c20[0].o = zmm2[0].o
            zmm1[0].o = *(zx.q(zmm1[0].d) + rdi_4)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_4 + r14_3), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_8 + r11_2), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_17 + rcx_15), 0x30)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg8[0].o, 0xe8)
            zmm2 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423c0)
            float* r8_5 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm2[0].o, 1))
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg13[0].o, 8)
            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            uint64_t rcx_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rdx_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t rsi_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            uint64_t rax_9 = zx.q(zmm0[0].d)
            uint64_t r10_5 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm2[0].o, 2))
            zmm0[0].o = *(rax_9 + r15_1)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_18 + rbx_6), 0x10)
            uint64_t rax_10 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm2[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_9 i+ rdi_5), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_5 + rbx_7), 0x30)
            double var_690_1[0x2] = zmm0[0].o
            zmm0[0].o = *(zx.q(zmm2[0]) + rdi_4)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_5 + r14_3), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_5 + r11_2), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_10 + rcx_15), 0x30)
            var_b60.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_b60.32, var_ba0.o, 1)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434423e0)
            uint64_t r12_4 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            zmm3 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_b80.32, var_bc0.o, 1)
            var_b80.32 = zmm3
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            uint64_t rdx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            float* rsi_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            uint64_t rax_11 = zx.q(arg5[0].d)
            uint64_t r10_6 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            arg5[0].o = *(rax_11 + r15_1)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_20 + rbx_6), 0x10)
            uint64_t rax_12 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            double r8_6 = var_d00[0]
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_10 i+ r8_6), 0x20)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_6 + rbx_7), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0].d) + rdi_4)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r12_4 + r14_3), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_6 + r11_2), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_12 + rcx_15), 0x30)
            var_ba0.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_c80.32, var_a60.o, 1)
            arg5 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442400)
            uint64_t r12_5 = zx.q(__vextractps_gpr32_xmmdq_immb(arg5[0].o, 1))
            var_c80.32 = _mm256_insertf128_ps(var_820.32, zmm1[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            uint64_t rcx_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rax_13 = zx.q(zmm1[0].d)
            uint64_t r10_7 = zx.q(__vextractps_gpr32_xmmdq_immb(arg5[0].o, 2))
            zmm1[0].o = *(rax_13 + r15_1)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_22 + rbx_6), 0x10)
            uint64_t rax_14 = zx.q(__vextractps_gpr32_xmmdq_immb(arg5[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_11 i+ r8_6), 0x20)
            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_7 + rbx_7), 0x30)
            zmm1[0].o = *(zx.q(arg5[0].d) + rdi_4)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_5 + r14_3), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_7 + r11_2), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_14 + rcx_15), 0x30)
            var_bc0.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_c00.32, var_be0.o, 1)
            arg7 = __vandps_ymmqq_ymmqq_memqq(arg12, data_143442540)
            float* r8_7 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 1))
            var_be0.32 = _mm256_insertf128_ps(arg9, arg10[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            uint64_t rcx_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            uint64_t rsi_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rax_15 = zx.q(zmm1[0].d)
            uint64_t r10_8 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 2))
            zmm1[0].o = *(rax_15 + r15_1)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_24 + rbx_6), 0x10)
            uint64_t rax_16 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_12 i+ r8_6), 0x20)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_8 + rbx_7), 0x30)
            zmm1[0].o = *(zx.q(arg7[0]) + rdi_4)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_7 + r14_3), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_8 + r11_2), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_16 + rcx_15), 0x30)
            arg7 = __vandps_ymmqq_ymmqq_memqq(arg12, data_1434b2d00)
            uint64_t r10_9 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 1))
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
            zmm3[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0].q)
            uint64_t r12_6 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 2))
            var_820.o = zmm5[0].o
            arg10[0].o = __vpmovsxwd_xmmdq_xmmq(zmm5[0].q)
            var_a60.32 = _mm256_insertf128_ps(arg10, zmm3[0].o, 1)
            zmm3[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            uint64_t rdx_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
            uint64_t r8_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            uint64_t rax_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = *(zx.q(zmm3[0]) + r15_1)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_13 + rbx_6), 0x10)
            uint64_t rsi_9 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 3))
            double rdx_14 = var_d00[0]
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r8_8 i+ rdx_14), 0x20)
            uint64_t rdi_9 = zx.q(arg7[0])
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_17 + rbx_7), 0x30)
            zmm3[0].o = *(rdi_9 + rdi_4)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r10_9 + r14_3), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_6 + r11_2), 0x20)
            var_c00.32 = _mm256_insertf128_ps(zmm4, arg11[0].o, 1)
            arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_9 + rcx_15), 0x30)
            zmm3 = __vandps_ymmqq_ymmqq_memqq(arg12, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0].32)
            uint64_t r10_10 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1))
            uint64_t r12_7 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2))
            var_ca0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_6c0_1, var_ca0[0].o, 1)
            zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            uint64_t rax_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            uint64_t rdi_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
            uint64_t rsi_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = *(zx.q(zmm4[0].d) + r15_1)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_18 + rbx_6), 0x10)
            float* rax_19 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 3))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_10 i+ rdx_14), 0x20)
            uint64_t rbx_12 = zx.q(zmm3[0])
            arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_10 + rbx_7), 0x30)
            zmm3[0].o = *(rbx_12 + rdi_4)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r10_10 + r14_3), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_7 + r11_2), 0x20)
            var_c20 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm1, var_c20[0].o, 1)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_19 + rcx_15), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg12, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[8].32)
            uint64_t r10_11 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            uint64_t r14_5 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm2 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm2, var_690_1, 1)
            int32_t var_6e0_2[0x8] = zmm2
            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rdx_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            uint64_t rbx_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            uint64_t rdi_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            zmm2[0].o = *(zx.q(zmm2[0]) + r15_1)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_15 + rbx_6), 0x10)
            uint64_t rdx_16 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            double rcx_27 = var_d00[0]
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_13 i+ rcx_27), 0x20)
            uint64_t rbx_14 = zx.q(zmm0[0].d)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_11 + rbx_7), 0x30)
            zmm0[0].o = *(rbx_14 + rdi_4)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_11 + r14_3), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_5 + r11_2), 0x20)
            zmm5 = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_16 + rcx_15), 0x30)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg12, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x10].32)
            float* r10_12 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
            uint64_t r14_6 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
            arg13 = _mm256_insertf128_ps(arg5, arg13[0].o, 1)
            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            uint64_t rdx_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            uint64_t rbx_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            uint64_t rdi_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            arg5[0].o = *(zx.q(arg5[0].d) + r15_1)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_17 + rbx_6), 0x10)
            float* rdx_18 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_15 i+ rcx_27), 0x20)
            uint64_t rbx_16 = zx.q(arg6[0])
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_12 + rbx_7), 0x30)
            arg6[0].o = *(rbx_16 + rdi_4)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r10_12 + r14_3), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14_6 + r11_2), 0x20)
            arg9 = _mm256_insertf128_ps(zmm1, arg9[0].o, 1)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_18 + rcx_15), 0x30)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg12, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x18].32)
            float* r10_13 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
            uint64_t rax_21 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
            arg8 = _mm256_insertf128_ps(arg11, arg7[0].o, 1)
            arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            uint64_t rdx_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            uint64_t rbx_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            float* rdi_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            zmm4[0].o = *(zx.q(arg7[0]) + r15_1)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_19 + rbx_6), 0x10)
            uint64_t rdx_20 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_17 i+ rcx_27), 0x20)
            uint64_t rbx_18 = zx.q(arg6[0])
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_13 + rbx_7), 0x30)
            zmm4[0].o = *(rbx_18 + rdi_4)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r10_13 + r14_3), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_21 + r11_2), 0x20)
            arg11 = _mm256_insertf128_ps(zmm3, arg10[0].o, 1)
            arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_20 + rcx_15), 0x30)
            zmm4 = __vandps_ymmqq_ymmqq_memqq(arg12, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x20].32)
            uint64_t r10_14 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 1))
            uint64_t r8_10 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 2))
            zmm3 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            uint64_t rdx_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rbx_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            float* rax_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = *(zx.q(zmm0[0].d) + r15_1)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_21 + rbx_6), 0x10)
            uint64_t rdx_22 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_19 i+ rcx_27), 0x20)
            uint64_t rbx_20 = zx.q(zmm4[0].d)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_22 + rbx_7), 0x30)
            zmm2[0].o = *(rbx_20 + rdi_4)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_14 + r14_3), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r8_10 + r11_2), 0x20)
            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_22 + rcx_15), 0x30)
            zmm4 = __vandps_ymmqq_ymmqq_memqq(arg12, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x28].32)
            uint64_t r10_15 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 1))
            float* r8_11 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 2))
            arg7 = _mm256_insertf128_ps(arg10, arg7[0].o, 1)
            arg5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            float* rdx_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            uint64_t rbx_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            float* r12_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            arg5[0].o = *(zx.q(arg5[0].d) + r15_1)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_23 + rbx_6), 0x10)
            uint64_t rdx_24 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_21 i+ rcx_27), 0x20)
            uint64_t rbx_22 = zx.q(zmm4[0].d)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_10 + rbx_7), 0x30)
            arg5[0].o = *(rbx_22 + rdi_4)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_15 + r14_3), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_11 + r11_2), 0x20)
            arg10 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_24 + rcx_15), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
            arg5 = __vandps_ymmqq_ymmqq_memqq(arg12, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x30].32)
            zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            float* rax_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
            uint64_t rcx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
            uint64_t r10_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
            zmm4[0].o = *(zx.q(zmm4[0].d) + r15_1)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_24 + rbx_6), 0x10)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg12, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x38].32)
            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            float* rax_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t r11_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            float* rbx_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            int32_t* rdi_15 = zx.q(zmm0[0].d)
            uint64_t rsi_17 = zx.q(__vextractps_gpr32_xmmdq_immb(arg5[0].o, 1))
            zmm0[0].o = *(rdi_15 + r15_1)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_25 + rbx_6), 0x10)
            float* r15_4 = zx.q(__vextractps_gpr32_xmmdq_immb(arg5[0].o, 2))
            uint64_t r8_12 = zx.q(__vextractps_gpr32_xmmdq_immb(arg5[0].o, 3))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_28 i+ rcx_27), 0x20)
            uint64_t rcx_29 = zx.q(arg5[0].d)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r10_16 + rbx_7), 0x30)
            arg5[0].o = *(rcx_29 + rdi_4)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_17 + r14_3), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_3 i+ rcx_27), 0x20)
            uint64_t rcx_30 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
            float* rdx_27 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_23 + rbx_7), 0x30)
            uint64_t rbx_24 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
            arg6[0].o = *(zx.q(arg6[0]) + rdi_4)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_30 + r14_3), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_4 + r11_2), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_27 + r11_2), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_12 + rcx_15), 0x30)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_24 + rcx_15), 0x30)
            zmm4 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
            double var_380[0x4] = var_c00.32
            double var_360[0x4] = var_ca0
            double var_340[0x4] = var_c20
            arg5 = var_6e0_2
            double var_320[0x4] = arg5
            float var_300_1[0x8] = zmm5
            float var_2e0_1[0x8] = arg13
            double var_2c0_1[0x4] = arg9
            int32_t var_2a0_1[0x8] = arg8
            int32_t var_280_1[0x8] = arg11
            float var_260_1[0x8] = zmm3
            double var_240_1[0x4] = zmm1
            int32_t var_220_1[0x8] = arg7
            float var_200_1[0x8] = arg10
            int32_t var_1e0_1[0x8] = zmm2
            double var_1c0_1[0x4] = zmm4
            double var_1a0_1[0x4] = zmm0
            arg7[0].o = arg15[9]
            zmm2[0].o = zx.o(arg15[0xd])
            zmm3[0].o = zx.o(arg15[2])
            zmm4[0].o = arg15[3]
            zmm5[0].o = arg15[6]
            arg5[0].o = arg15[0xa]
            arg6[0].o = arg15[0xe]
            zmm0[0].o = zx.o(arg15[7])
            zmm1[0].o = zx.o(arg15[0xb])
            
            for (int64_t i = 0; i != 0x200; i -= -0x80)
                arg12 = _mm256_broadcast_ss(*arg15)
                arg11 = *(&var_380 + i)
                arg10 = *(&var_360 + i)
                arg9 = *(&var_340 + i)
                arg8 = *(&var_320 + i)
                *(&var_a20 + i) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg11, arg12), arg14), 
                            _mm256_mul_ps(arg10, _mm256_broadcast_ss(arg15[4]))), 
                        _mm256_mul_ps(arg9, _mm256_broadcast_ss(arg15[8]))), 
                    _mm256_mul_ps(arg8, _mm256_broadcast_ss(arg15[0xc])))
                arg12 = _mm256_add_ps(_mm256_mul_ps(arg11, _mm256_broadcast_ss(arg15[1])), arg14)
                arg13 = _mm256_mul_ps(arg10, _mm256_broadcast_ss(arg15[5]))
                arg12 = _mm256_add_ps(arg12, arg13)
                arg13[0].o = _mm_permute_ps(arg7[0].o, 0)
                arg13 = _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                arg12 = _mm256_add_ps(arg12, arg13)
                arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                arg13 = _mm256_mul_ps(arg8, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                arg12 = _mm256_add_ps(arg12, arg13)
                *(&var_a00 + i) = arg12
                arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                arg12 = _mm256_add_ps(
                    _mm256_mul_ps(arg11, _mm256_insertf128_ps(arg12, arg12[0].o, 1)), arg14)
                arg13[0].o = _mm_permute_ps(zmm5[0].o, 0)
                arg13 = _mm256_mul_ps(arg10, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                arg12 = _mm256_add_ps(arg12, arg13)
                arg13[0].o = _mm_permute_ps(arg5[0].o, 0)
                arg13 = _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                arg12 = _mm256_add_ps(arg12, arg13)
                arg13[0].o = _mm_permute_ps(arg6[0].o, 0)
                arg12 = _mm256_add_ps(arg12, 
                    _mm256_mul_ps(arg8, _mm256_insertf128_ps(arg13, arg13[0].o, 1)))
                *(&var_9e0 + i) = arg12
                arg12[0].o = _mm_permute_ps(zmm4[0].o, 0)
                arg12 = _mm256_insertf128_ps(arg12, arg12[0].o, 1)
                arg11 = _mm256_add_ps(_mm256_mul_ps(arg11, arg12), arg14)
                arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                arg10 = _mm256_add_ps(arg11, 
                    _mm256_mul_ps(arg10, _mm256_insertf128_ps(arg12, arg12[0].o, 1)))
                arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                *(&var_9c0 + i) = _mm256_add_ps(
                    _mm256_add_ps(arg10, 
                        _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg11, arg11[0].o, 1))), 
                    _mm256_mul_ps(arg8, _mm256_broadcast_ss(arg15[0xf])))
            
            zmm1 = var_a20
            var_d00 = zmm1
            zmm2 = var_a00
            void* var_c40_1
            var_c40_1.32 = zmm2
            zmm4 = __vaddps_ymmqq_ymmqq_memqq(var_c80.32, var_b60.32)
            zmm0 = data_142fc94a0
            zmm4 = _mm256_mul_ps(zmm4, zmm0)
            zmm5 = _mm256_mul_ps(zmm4, zmm1)
            arg5 = _mm256_mul_ps(zmm4, zmm2)
            arg10 = var_bc0.32
            arg6 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(arg10, var_b80.32), zmm0)
            zmm3 = zmm0
            void* var_a40_1
            var_a40_1.32 = var_9a0
            zmm0 = _mm256_add_ps(_mm256_mul_ps(arg6, var_9a0), zmm5)
            arg5 = _mm256_add_ps(_mm256_mul_ps(arg6, var_980), arg5)
            zmm2 = var_9e0
            var_ce0.32 = zmm2
            arg7 = _mm256_mul_ps(zmm4, zmm2)
            zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm4, var_9c0)
            arg11 = _mm256_add_ps(_mm256_mul_ps(arg6, var_960), arg7)
            zmm4 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg6, var_940))
            arg14 = var_ba0.32
            zmm2 = var_be0.32
            arg13 = _mm256_mul_ps(_mm256_add_ps(arg14, zmm2), zmm3)
            zmm3 = _mm256_add_ps(zmm0, _mm256_mul_ps(arg13, var_920))
            arg5 = _mm256_add_ps(_mm256_mul_ps(arg13, var_900), arg5)
            zmm0 = _mm256_add_ps(_mm256_mul_ps(arg13, var_8e0), arg11)
            arg13 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg13, var_8c0))
            zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_8a0)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_880)
            arg5 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_860)
            zmm0 = __vaddps_ymmqq_ymmqq_memqq(arg13, var_840)
            var_a20 = var_9a0
            var_a00 = var_980
            var_9e0 = var_960
            var_9c0 = var_940
            int32_t var_600_1[0x8] = var_920
            int32_t var_5e0_1[0x8] = var_900
            int32_t var_5c0_1[0x8] = var_8e0
            int32_t var_5a0_1[0x8] = var_8c0
            arg11 = __vsubps_ymmqq_ymmqq_memqq(arg10, var_b80.32)
            arg12 = _mm256_sub_ps(zmm2, arg14)
            arg13 = __vsubps_ymmqq_ymmqq_memqq(var_c80.32, var_b60.32)
            double var_680_1[0x4] = zmm4
            float var_660_1[0x8] = zmm3
            arg14 = zmm3
            double var_640_1[0x4] = arg5
            double var_620_1[0x4] = zmm0
            zmm2 = data_142fc94a0
            zmm0 = _mm256_mul_ps(arg13, zmm2)
            arg13 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_d00)
            zmm1 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_c40_1.32)
            zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_ce0.32)
            arg10 = _mm256_mul_ps(arg11, zmm2)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(arg10, var_a40_1.32)
            zmm3 = _mm256_mul_ps(arg10, var_980)
            arg9 = _mm256_mul_ps(arg10, var_960)
            arg10 = data_142fc9320
            arg11 = arg10
            arg10 = _mm256_and_ps(arg13, arg10)
            zmm2 = _mm256_add_ps(arg10, _mm256_and_ps(zmm2, arg11))
            zmm1 = _mm256_add_ps(_mm256_and_ps(zmm1, arg11), _mm256_and_ps(zmm3, arg11))
            zmm0 = _mm256_add_ps(_mm256_and_ps(zmm0, arg11), _mm256_and_ps(arg9, arg11))
            zmm3 = __vmulps_ymmqq_ymmqq_memqq(arg12, data_142fc94a0)
            arg6 = _mm256_mul_ps(zmm3, var_920)
            arg7 = _mm256_mul_ps(zmm3, var_900)
            zmm3 = _mm256_mul_ps(zmm3, var_8e0)
            zmm2 = _mm256_add_ps(zmm2, _mm256_and_ps(arg6, arg11))
            arg6 = _mm256_and_ps(arg7, arg11)
            zmm1 = _mm256_add_ps(zmm1, arg6)
            zmm0 = _mm256_add_ps(zmm0, _mm256_and_ps(zmm3, arg11))
            arg7 = _mm256_sub_ps(zmm4, zmm2)
            arg8 = _mm256_sub_ps(arg14, zmm1)
            zmm3 = _mm256_sub_ps(arg5, zmm0)
            zmm4 = _mm256_add_ps(zmm4, zmm2)
            zmm5 = _mm256_add_ps(arg14, zmm1)
            arg5 = _mm256_add_ps(arg5, zmm0)
            zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_700)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            zmm2[0].o = zmm0[0].o ^ arg10[0].o
            arg6[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
            zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
            arg6 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
            zmm2[0].o = zmm0[0].o & not.o(var_820.o)
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_468 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            char rdi_17
            
            if (temp0_468 == 0)
                zmm0[0].o = zx.o(0)
                arg4 = var_c60_1
                rdi_17 = temp0_23
                arg11 = var_a60.32
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                zmm1 = _mm256_andnot_ps(arg6, arg11)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                label_140355183:
                    zmm2 = _mm256_xor_ps(arg6, _mm256_cmp_ps(arg14, arg14, 0xf))
                    var_a20 = _mm256_maskstore_ps(zmm2, arg7)
                    var_a00 = _mm256_maskstore_ps(zmm2, arg8)
                    var_9e0 = _mm256_maskstore_ps(zmm2, zmm3)
                    var_9c0 = _mm256_maskstore_ps(zmm2, zmm4)
                    var_9a0 = _mm256_maskstore_ps(zmm2, zmm5)
                    var_980 = _mm256_maskstore_ps(zmm2, arg5)
                    char temp0_516 = _mm256_movemask_ps(zmm2)
                    
                    if ((temp0_516 & 1) == 0)
                        if ((temp0_516 & 2) != 0)
                            goto label_140353c8c
                        
                        goto label_1403551cf
                    
                    var_960[0].b = 1
                    
                    if ((temp0_516 & 2) != 0)
                    label_140353c8c:
                        var_960[0]:1.b = 1
                        
                        if ((temp0_516 & 4) == 0)
                            goto label_1403551d8
                        
                        goto label_140353c9d
                    
                label_1403551cf:
                    
                    if ((temp0_516 & 4) == 0)
                    label_1403551d8:
                        
                        if ((temp0_516 & 8) != 0)
                            goto label_140353cae
                        
                        goto label_1403551e1
                    
                label_140353c9d:
                    var_960[0]:2.b = 1
                    
                    if ((temp0_516 & 8) != 0)
                    label_140353cae:
                        var_960[0]:3.b = 1
                        
                        if ((temp0_516 & 0x10) == 0)
                            goto label_1403551ea
                        
                        goto label_140353cbf
                    
                label_1403551e1:
                    
                    if ((temp0_516 & 0x10) == 0)
                    label_1403551ea:
                        
                        if ((temp0_516 & 0x20) != 0)
                            goto label_140353cd0
                        
                        goto label_1403551f3
                    
                label_140353cbf:
                    var_960[1].b = 1
                    
                    if ((temp0_516 & 0x20) != 0)
                    label_140353cd0:
                        var_960[1]:1.b = 1
                        
                        if ((temp0_516 & 0x40) == 0)
                            goto label_1403551fc
                        
                        goto label_140353ce1
                    
                label_1403551f3:
                    
                    if ((temp0_516 & 0x40) != 0)
                    label_140353ce1:
                        var_960[1]:2.b = 1
                        
                        if (temp0_516 s< 0)
                            var_960[1]:3.b = 1
                    else
                    label_1403551fc:
                        
                        if (temp0_516 s< 0)
                            var_960[1]:3.b = 1
                    
                    _mm256_movemask_ps(_mm256_or_ps(zmm0, zmm1))
            else
                arg9 = var_7a0
                arg10 = var_780
                arg12 = var_740
                arg13 = var_720
                var_a20 = _mm256_maskstore_ps(arg6, _mm256_min_ps(var_7c0, arg7))
                zmm0 = _mm256_min_ps(arg9, arg8)
                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                var_a00 = _mm256_maskstore_ps(arg6, zmm0)
                zmm0 = _mm256_min_ps(arg10, zmm3)
                arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                var_9e0 = _mm256_maskstore_ps(arg6, zmm0)
                var_9c0 = _mm256_maskstore_ps(arg6, _mm256_max_ps(var_760, zmm4))
                var_9a0 = _mm256_maskstore_ps(arg6, _mm256_max_ps(arg12, zmm5))
                zmm0 = _mm256_max_ps(arg13, arg5)
                var_980 = _mm256_maskstore_ps(arg6, zmm0)
                zmm0[0].o = zmm1[0].o & data_142fc92e0
                zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                zmm0[0].o ^= arg10[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_485 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                arg4 = var_c60_1
                rdi_17 = temp0_23
                
                if ((temp0_485 & 1) == 0)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    
                    if ((temp0_485 & 2) != 0)
                        goto label_1403550b5
                    
                    goto label_140355008
                
                var_960[0].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                
                if ((temp0_485 & 2) != 0)
                label_1403550b5:
                    var_960[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                    arg11 = var_a60.32
                    
                    if ((temp0_485 & 4) == 0)
                        goto label_140355017
                    
                    goto label_1403550d2
                
            label_140355008:
                arg11 = var_a60.32
                
                if ((temp0_485 & 4) == 0)
                label_140355017:
                    
                    if ((temp0_485 & 8) != 0)
                        goto label_1403550e6
                    
                    goto label_140355020
                
            label_1403550d2:
                var_960[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
                
                if ((temp0_485 & 8) != 0)
                label_1403550e6:
                    var_960[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                    
                    if ((temp0_485 & 0x10) == 0)
                        goto label_140355029
                    
                    goto label_1403550fa
                
            label_140355020:
                
                if ((temp0_485 & 0x10) == 0)
                label_140355029:
                    
                    if ((temp0_485 & 0x20) != 0)
                        goto label_14035510e
                    
                    goto label_140355032
                
            label_1403550fa:
                var_960[1].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
                
                if ((temp0_485 & 0x20) != 0)
                label_14035510e:
                    var_960[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                    
                    if ((temp0_485 & 0x40) == 0)
                        goto label_14035503b
                    
                    goto label_140355122
                
            label_140355032:
                
                if ((temp0_485 & 0x40) == 0)
                label_14035503b:
                    
                    if (temp0_485 s< 0)
                        goto label_140355135
                    
                    goto label_140355043
                
            label_140355122:
                var_960[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                
                if (temp0_485 s>= 0)
                label_140355043:
                    
                    if (rdi_17 != temp0_468)
                    label_140355149:
                        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                        zmm1 = _mm256_andnot_ps(arg6, arg11)
                        
                        if (_mm256_movemask_ps(zmm1) != 0)
                            goto label_140355183
                else
                label_140355135:
                    var_960[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                    
                    if (rdi_17 != temp0_468)
                        goto label_140355149
            
            zmm0 = var_a20
            zmm2 = var_a00
            zmm3 = var_9e0
            zmm4 = var_9c0
            zmm5 = var_9a0
            arg5 = var_980
            zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_960[0].q)
            var_7c0 = _mm256_maskstore_ps(arg11, zmm0)
            var_7a0 = _mm256_maskstore_ps(arg11, zmm2)
            var_780 = _mm256_maskstore_ps(arg11, zmm3)
            var_760 = _mm256_maskstore_ps(arg11, zmm4)
            var_740 = _mm256_maskstore_ps(arg11, zmm5)
            var_720 = _mm256_maskstore_ps(arg11, arg5)
            
            if ((rdi_17 & 1) == 0)
                if ((rdi_17 & 2) != 0)
                    goto label_140353be4
                
                goto label_14035529b
            
            var_700[0] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
            
            if ((rdi_17 & 2) != 0)
            label_140353be4:
                var_700[1] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                
                if ((rdi_17 & 4) == 0)
                    goto label_1403552a4
                
                goto label_140353bf8
            
        label_14035529b:
            
            if ((rdi_17 & 4) == 0)
            label_1403552a4:
                
                if ((rdi_17 & 8) != 0)
                    goto label_140353c0c
                
                goto label_1403552ad
            
        label_140353bf8:
            var_700[2] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
            
            if ((rdi_17 & 8) != 0)
            label_140353c0c:
                var_700[3] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                
                if ((rdi_17 & 0x10) == 0)
                    goto label_1403552b6
                
                goto label_140353c20
            
        label_1403552ad:
            
            if ((rdi_17 & 0x10) == 0)
            label_1403552b6:
                
                if ((rdi_17 & 0x20) != 0)
                    goto label_140353c34
                
                goto label_1403552bf
            
        label_140353c20:
            var_700[4] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
            
            if ((rdi_17 & 0x20) != 0)
            label_140353c34:
                var_700[5] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                
                if ((rdi_17 & 0x40) == 0)
                    goto label_1403552c8
                
                goto label_140353c48
            
        label_1403552bf:
            
            if ((rdi_17 & 0x40) != 0)
            label_140353c48:
                var_700[6] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                
                if (rdi_17 s< 0)
                label_140353c5c:
                    var_700[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                    r10 = zx.q(r10.d + 8)
                    
                    if (r10.d s>= rcx_4)
                        break
                    
                    continue
            else
            label_1403552c8:
                
                if (rdi_17 s< 0)
                    goto label_140353c5c
        
        r10 = zx.q(r10.d + 8)
        
        if (r10.d s>= rcx_4)
            break

if (r10.d s< arg17)
    zmm0[0].o = zx.o(r10.d)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
    zmm2[0].o = zx.o(arg17)
    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
    arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
    int32_t var_d00_1[0x8] = zmm2
    arg7 = _mm256_insertf128_ps(zmm2, arg8[0].o, 1)
    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
    zmm0 = _mm256_and_ps(arg7, _mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
    int64_t rcx_33 = sx.q(zmm0[0].d)
    void* rsi_19 = arg4 + (rcx_33 << 2)
    int64_t rdx_30 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
    int32_t temp0_540 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_541 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    int32_t rcx_34 = zmm0[0].d
    int32_t temp0_543 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_544 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_545 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm2 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9520)
    arg11[0].o = *(zx.q(zmm2[0]) + rsi_19)
    zmm4 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9540)
    arg13[0].o = *(zx.q(zmm4[0].d) + rsi_19)
    arg5 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423c0)
    arg10[0].o = *(zx.q(arg5[0].d) + rsi_19)
    arg6 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423e0)
    arg14[0].o = *(zx.q(arg6[0]) + rsi_19)
    arg9 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442400)
    zmm5[0].o = *(zx.q(arg9[0].d) + rsi_19)
    arg12 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442540)
    zmm0[0].o = zx.o(0)
    zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zx.o(0), *(zx.q(arg12[0]) + rsi_19), 0)
    void* rax_39 = arg4 + (rdx_30 << 2)
    int64_t rdx_31 = sx.q(temp0_540)
    uint64_t rdi_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rdi_19 + rax_39), 0x10)
    uint64_t rdi_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
    arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rdi_20 + rax_39), 0x10)
    uint64_t rdi_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
    arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rdi_21 + rax_39), 0x10)
    uint64_t rdi_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *(rdi_22 + rax_39), 0x10)
    uint64_t rdi_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_23 + rax_39), 0x10)
    uint8_t* rdi_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
    zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdi_24 + rax_39), 2)
    void* rax_40 = arg4 + (rdx_31 << 2)
    int64_t rdx_32 = sx.q(temp0_541)
    uint64_t rsi_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_20 + rax_40), 0x20)
    uint64_t rsi_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
    arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rsi_21 + rax_40), 0x20)
    uint64_t rsi_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rsi_22 + rax_40), 0x20)
    uint64_t rsi_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rsi_23 + rax_40), 0x20)
    uint64_t rsi_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_24 + rax_40), 0x20)
    uint8_t* rsi_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
    zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rsi_25 + rax_40), 4)
    void* rax_41 = arg4 + (rdx_32 << 2)
    int64_t rdi_25 = sx.q(rcx_34)
    uint64_t rdx_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_33 + rax_41), 0x30)
    double var_ca0_1[0x4] = zmm1
    uint64_t rdx_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rdx_34 + rax_41), 0x30)
    double var_c20_1[0x4] = zmm1
    uint64_t rdx_35 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *(rdx_35 + rax_41), 0x30)
    float* rdx_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rdx_36 + rax_41), 0x30)
    uint64_t rdx_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_37 + rax_41), 0x30)
    uint64_t rdx_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
    zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdx_38 + rax_41), 6)
    void* rax_42 = arg4 + (rdi_25 << 2)
    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    uint64_t r11_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
    uint64_t rcx_35 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
    uint64_t rbx_26 = zx.q(zmm1[0].d)
    uint64_t rcx_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
    zmm1[0].o = *(rbx_26 + rax_42)
    zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
    uint64_t rbx_27 = zx.q(zmm2[0])
    uint64_t r14_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
    uint64_t rcx_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
    uint64_t rcx_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
    zmm2[0].o = *(rbx_27 + rax_42)
    zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    uint64_t rbx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
    uint64_t r15_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
    uint64_t rcx_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
    zmm4[0].o = *(zx.q(zmm4[0].d) + rax_42)
    zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
    uint64_t r13_8 = zx.q(zmm5[0])
    uint64_t rdx_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
    uint64_t rsi_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
    uint64_t rcx_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
    zmm5[0].o = *(r13_8 + rax_42)
    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
    uint64_t r13_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
    uint64_t r8_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
    uint64_t rcx_41 = zx.q(arg5[0].d)
    float* var_bc0_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
    arg5[0].o = *(rcx_41 + rax_42)
    arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
    zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(zx.q(arg6[0]) + rax_42), 8)
    int64_t rax_43 = sx.q(temp0_543)
    void* rcx_43 = arg4 + (rax_43 << 2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_4 + rcx_43), 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14_8 + rcx_43), 0x10)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_28 + rcx_43), 0x10)
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_39 + rcx_43), 0x10)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r13_9 + rcx_43), 0x10)
    uint8_t* rdx_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
    zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdx_40 + rcx_43), 0xa)
    int64_t rcx_44 = sx.q(temp0_544)
    void* rdx_41 = arg4 + (rcx_44 << 2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_35 + rdx_41), 0x20)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_37 + rdx_41), 0x20)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r15_5 + rdx_41), 0x20)
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_26 + rdx_41), 0x20)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_13 + rdx_41), 0x20)
    uint8_t* rbx_31 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
    zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rbx_31 + rdx_41), 0xc)
    uint8_t* rdx_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
    arg6[0].o = *(arg4 + (rdi_25 << 2))
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rax_43 << 2)), 0x10)
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rcx_44 << 2)), 0x20)
    zmm3[0].o = *(arg4 + (rcx_33 << 2))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rdx_30 << 2)), 0x10)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rdx_31 << 2)), 0x20)
    arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rdx_32 << 2)), 0x30)
    int64_t rax_48 = sx.q(temp0_545)
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rax_48 << 2)), 0x30)
    zmm3 = var_d00_1
    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
    void* rax_49 = arg4 + (rax_48 << 2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_36 + rax_49), 0x30)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_38 + rax_49), 0x30)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_39 + rax_49), 0x30)
    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_40 + rax_49), 0x30)
    arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(var_bc0_1 + rax_49), 0x30)
    zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdx_42 + rax_49), 0xe)
    int64_t rcx_50 = sx.q(r10.d << 2)
    arg12 = _mm256_maskload_ps(arg7, *(arg1 + rcx_50))
    arg8[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
    arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
    arg5[0].o ^= arg10[0].o
    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg10[0].o)
    zmm5[0].o ^= arg10[0].o
    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
    zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d8f750)
    zmm0[0].o &= not.o(zmm3[0].o)
    zmm3[0].o = zmm0[0].o & zmm5[0].o
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    uint32_t temp0_647 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
    
    if (temp0_647.b != 0)
        double var_d00_2[0x4] = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
        int32_t var_b60_1
        var_b60_1.32 = _mm256_insertf128_ps(var_ca0_1, zmm1[0].o, 1)
        uint64_t var_820_1
        var_820_1.32 = _mm256_insertf128_ps(var_c20_1, zmm2[0].o, 1)
        int64_t var_c40_2
        var_c40_2.32 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
        int32_t var_b80_1
        var_b80_1.32 = _mm256_insertf128_ps(zmm1, arg13[0].o, 1)
        zmm0 = _mm256_insertf128_ps(arg14, arg11[0].o, 1)
        uint64_t var_a60_1
        var_a60_1.32 = zmm0
        zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0])
        uint64_t var_800_2
        var_800_2.32 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        zmm0 = _mm256_maskload_ps(arg7, *(arg2 + rcx_50))
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
        zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
        uint64_t var_cb0_1
        var_cb0_1.o = zmm3[0].o
        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
        zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
        arg7 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        zmm0 = _mm256_and_ps(arg7, zmm0)
        int64_t rcx_51 = sx.q(zmm0[0].d)
        int32_t* rdi_26 = arg3
        void* r9_5 = rdi_26 + rcx_51
        zmm1[0].o = *(rdi_26 + rcx_51)
        int64_t var_a40_2
        var_a40_2.d = temp0_647
        int64_t r8_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        void* r14_9 = rdi_26 + r8_14
        int64_t rsi_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        void* r15_6 = rdi_26 + rsi_27
        int64_t rax_53 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        void* r12_13 = rdi_26 + rax_53
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        int64_t rdx_44 = sx.q(zmm0[0].d)
        void* r13_10 = rdi_26 + rdx_44
        zmm2[0].o = *(rdi_26 + rdx_44)
        int64_t rbx_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        void* r11_5 = rdi_26 + rbx_32
        int64_t rcx_57 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int32_t temp0_677 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_26 + rbx_32), 0x10)
        void* rbx_33 = rdi_26 + rcx_57
        int64_t r10_19 = sx.q(temp0_677)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_26 + rcx_57), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_26 + r10_19), 0x30)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_26 + r8_14), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_26 + rsi_27), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_26 + rax_53), 0x30)
        void* r8_15 = rdi_26 + r10_19
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9520)
        uint64_t rax_54 = zx.q(zmm0[0].d)
        uint64_t r10_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        uint64_t rsi_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm3[0].o = *(rax_54 + r9_5)
        uint64_t rax_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm4[0].o = *(zx.q(zmm0[0].d) + r13_10)
        uint64_t rdx_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        float* rcx_58 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_47 + r11_5), 0x10)
        uint64_t rdx_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_58 + rbx_33), 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_48 + r8_15), 0x30)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r10_20 + r14_9), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_28 + r15_6), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_55 + r12_13), 0x30)
        uint64_t var_ba0_1
        var_ba0_1.32 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9540)
        uint64_t rax_56 = zx.q(zmm1[0].d)
        uint64_t r10_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rdx_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm4[0].o = *(rax_56 + r9_5)
        uint64_t rax_57 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm2[0].o = *(zx.q(zmm1[0].d) + r13_10)
        uint64_t rsi_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        float* rcx_59 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_30 + r11_5), 0x10)
        uint64_t rsi_31 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_59 + rbx_33), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_31 + r8_15), 0x30)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r10_21 + r14_9), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_49 + r15_6), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_57 + r12_13), 0x30)
        var_bc0_1.32 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423c0)
        uint64_t rax_58 = zx.q(zmm0[0].d)
        uint64_t r10_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        uint64_t rdx_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm3[0].o = *(rax_58 + r9_5)
        uint64_t rax_59 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm4[0].o = *(zx.q(zmm0[0].d) + r13_10)
        uint64_t rsi_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        float* rcx_60 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_33 + r11_5), 0x10)
        uint64_t rsi_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_60 + rbx_33), 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_34 + r8_15), 0x30)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r10_22 + r14_9), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_50 + r15_6), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_59 + r12_13), 0x30)
        int64_t var_be0_1
        var_be0_1.32 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423e0)
        uint64_t rax_60 = zx.q(zmm1[0].d)
        uint64_t r10_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t r8_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm4[0].o = *(rax_60 + r9_5)
        int32_t var_c80_1
        var_c80_1.q = r9_5
        uint64_t r9_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm2[0].o = *(zx.q(zmm1[0].d) + r13_10)
        uint64_t rsi_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rax_61 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_36 + r11_5), 0x10)
        uint64_t rsi_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_61 + rbx_33), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_37 + r8_15), 0x30)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r10_23 + r14_9), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_16 + r15_6), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_6 + r12_13), 0x30)
        arg11 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442400)
        uint64_t rax_62 = zx.q(zmm0[0].d)
        uint64_t r10_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        uint64_t r9_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = *(rax_62 + r9_5)
        uint64_t r8_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        uint64_t rsi_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        uint64_t rdx_52 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        uint64_t rax_63 = zx.q(zmm0[0].d)
        uint64_t rcx_62 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = *(rax_63 + r13_10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_38 + r11_5), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_52 + rbx_33), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_62 + r8_15), 0x30)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_24 + r14_9), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_7 + r15_6), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_17 + r12_13), 0x30)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442540)
        uint64_t r8_18 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
        arg12 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        uint64_t rcx_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rdx_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        uint64_t rsi_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        uint64_t rax_64 = zx.q(zmm1[0].d)
        uint64_t r9_8 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = *(rax_64 + r13_10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_63 + r11_5), 0x10)
        uint64_t rax_65 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_53 + rbx_33), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_39 + r8_15), 0x30)
        int64_t r11_7 = var_c80_1.q
        zmm0[0].o = *(zx.q(zmm0[0].d) + r11_7)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_18 + r14_9), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_8 + r15_6), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_65 + r12_13), 0x30)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434b2d00)
        uint64_t rbx_35 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
        arg13 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        uint64_t rcx_65 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rdx_54 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        float* rsi_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        uint64_t rax_66 = zx.q(zmm1[0].d)
        uint64_t r9_9 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = *(rax_66 + r13_10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_65 + r11_5), 0x10)
        uint64_t rax_67 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_54 + rbx_33), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_40 + r8_15), 0x30)
        zmm0[0].o = *(zx.q(zmm0[0].d) + r11_7)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_35 + r14_9), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_9 + r15_6), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_67 + r12_13), 0x30)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
            (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0].32)
        uint64_t r8_20 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
        arg14 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        uint64_t rcx_67 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rdx_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        float* rsi_41 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        uint64_t rax_68 = zx.q(zmm1[0].d)
        uint64_t r9_10 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = *(rax_68 + r13_10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_67 + r11_5), 0x10)
        uint64_t rax_69 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_55 + rbx_33), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_41 + r8_15), 0x30)
        var_c20_1[0] = r8_15
        zmm0[0].o = *(zx.q(zmm0[0].d) + r11_7)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_20 + r14_9), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_10 + r15_6), 0x20)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_69 + r12_13), 0x30)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
            (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[8].32)
        uint64_t r8_21 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
        arg10 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        float* rcx_69 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rdx_56 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        float* rsi_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        uint64_t rax_70 = zx.q(zmm1[0].d)
        uint64_t r9_11 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = *(rax_70 + r13_10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_69 + r11_5), 0x10)
        uint64_t rax_71 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_56 + rbx_33), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_42 + r8_15), 0x30)
        zmm0[0].o = *(zx.q(zmm0[0].d) + r11_7)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_21 + r14_9), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_11 + r15_6), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_71 + r12_13), 0x30)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
            (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x10].32)
        uint64_t r8_22 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
        arg8 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        float* rcx_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rdx_57 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        uint64_t rsi_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        uint64_t rax_72 = zx.q(zmm1[0].d)
        uint64_t r9_12 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = *(rax_72 + r13_10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_71 + r11_5), 0x10)
        uint64_t rax_73 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_57 + rbx_33), 0x20)
        double rbx_37 = var_c20_1[0]
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_43 i+ rbx_37), 0x30)
        zmm0[0].o = *(zx.q(zmm0[0].d) + r11_7)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_22 + r14_9), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_12 + r15_6), 0x20)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_73 + r12_13), 0x30)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
            (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x18].32)
        uint64_t r8_23 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
        zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        float* rcx_73 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rdx_58 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        uint64_t rsi_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        uint64_t rax_74 = zx.q(zmm1[0].d)
        uint64_t r9_13 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = *(rax_74 + r13_10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_73 + r11_5), 0x10)
        uint64_t rax_75 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_58 + rbx_33), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_44 i+ rbx_37), 0x30)
        zmm0[0].o = *(zx.q(zmm0[0].d) + r11_7)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_23 + r14_9), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_13 + r15_6), 0x20)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_75 + r12_13), 0x30)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
            (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x20].32)
        float* r8_24 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
        zmm4 = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        uint64_t rcx_75 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        float* rdx_59 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        uint64_t rsi_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        uint64_t rax_76 = zx.q(zmm1[0].d)
        uint64_t r9_14 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
        zmm1[0].o = *(rax_76 + r13_10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_75 + r11_5), 0x10)
        uint64_t rax_77 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_59 + rbx_33), 0x20)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_45 i+ rbx_37), 0x30)
        zmm0[0].o = *(zx.q(zmm0[0].d) + r11_7)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_24 + r14_9), 0x10)
        var_ca0_1[0] = r14_9
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_14 + r15_6), 0x20)
        arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_77 + r12_13), 0x30)
        zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, 
            (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x28].32)
        float* r8_25 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
        zmm5 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
        zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        float* rcx_77 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        float* rdx_60 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        uint64_t rsi_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        uint64_t rax_78 = zx.q(zmm0[0].d)
        uint64_t r9_15 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
        zmm0[0].o = *(rax_78 + r13_10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_77 + r11_5), 0x10)
        float* rax_79 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_60 + rbx_33), 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_46 i+ rbx_37), 0x30)
        zmm1[0].o = *(zx.q(zmm1[0].d) + r11_7)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_25 + r14_9), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_15 + r15_6), 0x20)
        arg6 = __vandps_ymmqq_ymmqq_memqq(arg7, 
            (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x30].32)
        arg9 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
        arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        float* rcx_79 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        uint64_t r11_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        float* r8_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        uint64_t rdx_61 = zx.q(arg5[0].d)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_79 + r12_13), 0x30)
        arg5[0].o = *(rdx_61 + r13_10)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_79 + r11_5), 0x10)
        arg7 = __vandps_ymmqq_ymmqq_memqq(arg7, 
            (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x38].32)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        float* rax_80 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        float* r9_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        float* rdx_62 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        int32_t* rsi_47 = zx.q(zmm1[0].d)
        uint64_t rcx_80 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
        zmm1[0].o = *(rsi_47 + r13_10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_80 + r11_5), 0x10)
        uint64_t r13_11 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
        float* r14_12 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_8 + rbx_33), 0x20)
        uint64_t rsi_48 = zx.q(arg6[0])
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_26 i+ rbx_37), 0x30)
        char r8_27 = var_a40_2.b
        int64_t rax_81 = var_c80_1.q
        arg6[0].o = *(rsi_48 + rax_81)
        double rsi_49 = var_ca0_1[0]
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_80 i+ rsi_49), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_16 + rbx_33), 0x20)
        uint64_t rcx_81 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 1))
        float* rbx_39 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 2))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_62 i+ rbx_37), 0x30)
        float* rdx_63 = zx.q(__vextractps_gpr32_xmmdq_immb(arg7[0].o, 3))
        zmm2[0].o = *(zx.q(arg7[0]) + rax_81)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_81 i+ rsi_49), 0x10)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r13_11 + r15_6), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_39 + r15_6), 0x20)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14_12 + r12_13), 0x30)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_63 + r12_13), 0x30)
        arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        int32_t var_580[0x8] = var_ba0_1.32
        int32_t var_560[0x8] = var_bc0_1.32
        int32_t var_540[0x8] = var_be0_1.32
        int32_t var_520[0x8] = arg11
        int32_t var_500_1[0x8] = arg12
        float var_4e0_1[0x8] = arg13
        float var_4c0_1[0x8] = arg14
        float var_4a0_1[0x8] = arg10
        int32_t var_480_1[0x8] = arg8
        float var_460_1[0x8] = zmm3
        double var_440_1[0x4] = zmm4
        float var_420_1[0x8] = zmm5
        double var_400_1[0x4] = arg9
        double var_3e0_1[0x4] = zmm0
        double var_3c0_1[0x4] = arg5
        double var_3a0_1[0x4] = zmm1
        zmm0[0].o = arg15[9]
        zmm1[0].o = arg15[0xd]
        zmm3[0].o = arg15[2]
        arg7[0].o = arg15[3]
        zmm4[0].o = arg15[6]
        zmm5[0].o = arg15[0xa]
        arg5[0].o = arg15[0xe]
        arg6[0].o = arg15[7]
        arg9[0].o = arg15[0xb]
        int64_t i_1 = 0
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
        zmm2 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0)
        zmm3 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        zmm1[0].o = _mm_permute_ps(zmm4[0].o, 0)
        zmm4 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        zmm1[0].o = _mm_permute_ps(zmm5[0].o, 0)
        zmm5 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        zmm1[0].o = _mm_permute_ps(arg5[0].o, 0)
        arg5 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        zmm1[0].o = _mm_permute_ps(arg7[0].o, 0)
        arg7 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        zmm1[0].o = _mm_permute_ps(arg6[0].o, 0)
        arg8 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        zmm1[0].o = _mm_permute_ps(arg9[0].o, 0)
        arg10 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        
        do
            zmm1 = _mm256_broadcast_ss(*arg15)
            arg14 = *(&var_580 + i_1)
            arg13 = *(&var_560 + i_1)
            arg12 = *(&var_540 + i_1)
            arg6 = *(&var_520 + i_1)
            *(&var_a20 + i_1) = _mm256_add_ps(
                _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, zmm1), arg11), 
                        _mm256_mul_ps(arg13, _mm256_broadcast_ss(arg15[4]))), 
                    _mm256_mul_ps(arg12, _mm256_broadcast_ss(arg15[8]))), 
                _mm256_mul_ps(arg6, _mm256_broadcast_ss(arg15[0xc])))
            *(&var_a00 + i_1) = _mm256_add_ps(
                _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(_mm256_mul_ps(arg14, _mm256_broadcast_ss(arg15[1])), arg11), 
                        _mm256_mul_ps(arg13, _mm256_broadcast_ss(arg15[5]))), 
                    _mm256_mul_ps(arg12, zmm0)), 
                _mm256_mul_ps(arg6, zmm2))
            *(&var_9e0 + i_1) = _mm256_add_ps(
                _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, zmm3), arg11), 
                        _mm256_mul_ps(arg13, zmm4)), 
                    _mm256_mul_ps(arg12, zmm5)), 
                _mm256_mul_ps(arg6, arg5))
            *(&var_9c0 + i_1) = _mm256_add_ps(
                _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, arg7), arg11), 
                        _mm256_mul_ps(arg13, arg8)), 
                    _mm256_mul_ps(arg12, arg10)), 
                _mm256_mul_ps(arg6, _mm256_broadcast_ss(arg15[0xf])))
            i_1 -= -0x80
        while (i_1 != 0x200)
        
        zmm0 = var_a20
        var_ba0_1.32 = zmm0
        zmm2 = var_a00
        int32_t var_c20_2[0x8] = zmm2
        zmm3 = var_9a0
        var_bc0_1.32 = zmm3
        void* var_c00_2
        var_c00_2.32 = var_980
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(var_d00_2, var_c40_2.32)
        arg6 = data_142fc94a0
        zmm1 = _mm256_mul_ps(zmm1, arg6)
        zmm5 = _mm256_mul_ps(zmm1, zmm0)
        arg5 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_b60_1.32, var_b80_1.32), arg6)
        zmm0 = arg6
        zmm5 = _mm256_add_ps(_mm256_mul_ps(arg5, zmm3), zmm5)
        arg6 = _mm256_mul_ps(zmm1, zmm2)
        arg6 = _mm256_add_ps(_mm256_mul_ps(arg5, var_980), arg6)
        arg13 = var_9e0
        arg12 = var_960
        arg7 = _mm256_mul_ps(zmm1, arg13)
        arg9 = _mm256_add_ps(_mm256_mul_ps(arg5, arg12), arg7)
        arg14 = var_9c0
        zmm3 = var_940
        zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm1, arg14), _mm256_mul_ps(arg5, zmm3))
        arg11 = var_820_1.32
        arg7 = var_a60_1.32
        arg5 = _mm256_mul_ps(_mm256_add_ps(arg11, arg7), zmm0)
        zmm0 = var_920
        var_c80_1.32 = zmm0
        zmm5 = _mm256_add_ps(zmm5, _mm256_mul_ps(arg5, zmm0))
        arg6 = _mm256_add_ps(_mm256_mul_ps(arg5, var_900), arg6)
        arg10 = var_8e0
        zmm2 = _mm256_add_ps(_mm256_mul_ps(arg5, arg10), arg9)
        arg9 = var_8c0
        zmm1 = _mm256_add_ps(zmm1, _mm256_mul_ps(arg5, arg9))
        arg5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_8a0)
        void* var_ce0_2
        var_ce0_2.32 = arg5
        double var_ca0_2[0x4] = __vaddps_ymmqq_ymmqq_memqq(arg6, var_880)
        arg6 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_860)
        var_be0_1.32 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_840)
        zmm4 = var_ba0_1.32
        var_a20 = zmm4
        zmm5 = var_c20_2
        var_a00 = zmm5
        var_9e0 = arg13
        var_9c0 = arg14
        arg14 = var_bc0_1.32
        float var_600_2[0x8] = arg14
        zmm1 = var_c00_2.32
        double var_5e0_2[0x4] = zmm1
        int32_t var_5c0_2[0x8] = arg12
        float var_5a0_2[0x8] = zmm3
        double var_680_2[0x4] = zmm0
        int32_t var_660_2[0x8] = var_900
        float var_640_2[0x8] = arg10
        double var_620_2[0x4] = arg9
        zmm0 = __vsubps_ymmqq_ymmqq_memqq(var_b80_1.32, var_b60_1.32)
        zmm2 = _mm256_sub_ps(arg7, arg11)
        arg9 = __vsubps_ymmqq_ymmqq_memqq(var_c40_2.32, var_d00_2)
        zmm3 = data_142fc94a0
        zmm0 = _mm256_mul_ps(zmm0, zmm3)
        arg9 = _mm256_mul_ps(arg9, zmm3)
        zmm2 = _mm256_mul_ps(zmm2, zmm3)
        double var_180_1[0x4] = arg5
        double var_160_1[0x4] = var_ca0_2
        int32_t var_140_1[0x8] = arg6
        float var_120_1[0x8] = var_be0_1.32
        arg7 = _mm256_mul_ps(arg9, zmm4)
        arg11 = _mm256_mul_ps(arg9, zmm5)
        arg9 = _mm256_mul_ps(arg9, arg13)
        zmm3 = _mm256_mul_ps(zmm0, arg14)
        zmm4 = _mm256_mul_ps(zmm0, zmm1)
        zmm0 = _mm256_mul_ps(zmm0, arg12)
        arg12 = data_142fc9320
        zmm1 = _mm256_add_ps(_mm256_and_ps(arg7, arg12), _mm256_and_ps(zmm3, arg12))
        zmm3 = _mm256_add_ps(_mm256_and_ps(arg11, arg12), _mm256_and_ps(zmm4, arg12))
        zmm0 = _mm256_add_ps(_mm256_and_ps(arg9, arg12), _mm256_and_ps(zmm0, arg12))
        zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_c80_1.32)
        arg7 = _mm256_mul_ps(zmm2, var_900)
        zmm2 = _mm256_mul_ps(zmm2, arg10)
        zmm1 = _mm256_add_ps(zmm1, _mm256_and_ps(zmm4, arg12))
        zmm3 = _mm256_add_ps(zmm3, _mm256_and_ps(arg7, arg12))
        zmm0 = _mm256_add_ps(zmm0, _mm256_and_ps(zmm2, arg12))
        zmm2 = var_ce0_2.32
        arg11 = _mm256_sub_ps(zmm2, zmm1)
        zmm4 = var_ca0_2
        arg12 = _mm256_sub_ps(var_ca0_2, zmm3)
        arg9 = _mm256_sub_ps(arg6, zmm0)
        zmm1 = _mm256_add_ps(zmm2, zmm1)
        double var_d00_3[0x4] = zmm1
        arg5 = _mm256_add_ps(var_ca0_2, zmm3)
        arg6 = _mm256_add_ps(arg6, zmm0)
        zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_700)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm1[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm4[0].o = zmm1[0].o ^ zmm3[0].o
        arg7[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
        zmm4[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
        arg7 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
        zmm1[0].o &= not.o(var_cb0_1.o)
        zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
        zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        char temp0_1045 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o)
        zmm4[0].o = zx.o(0)
        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        
        if (temp0_1045 == 0)
            goto label_1403568f4
        
        arg10 = var_7a0
        arg13 = var_780
        arg14 = var_760
        var_a20 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_7c0, arg11))
        var_a00 = _mm256_maskstore_ps(arg7, _mm256_min_ps(arg10, arg12))
        var_9e0 = _mm256_maskstore_ps(arg7, _mm256_min_ps(arg13, arg9))
        var_9c0 = _mm256_maskstore_ps(arg7, __vmaxps_ymmqq_ymmqq_memqq(arg14, var_d00_3))
        var_9a0 = _mm256_maskstore_ps(arg7, _mm256_max_ps(var_740, arg5))
        zmm4 = _mm256_max_ps(var_720, arg6)
        var_980 = _mm256_maskstore_ps(arg7, zmm4)
        zmm4[0].o = zmm0[0].o & data_142fc92e0
        zmm2[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
        zmm2[0].o ^= zmm3[0].o
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        char temp0_1061 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
        
        if ((temp0_1061 & 1) == 0)
            if ((temp0_1061 & 2) != 0)
                goto label_140356842
            
            goto label_1403567a1
        
        var_960[0].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
        
        if ((temp0_1061 & 2) != 0)
        label_140356842:
            var_960[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
            zmm4[0].o = zx.o(0)
            
            if ((temp0_1061 & 4) == 0)
                goto label_1403567ab
            
            goto label_14035685a
        
    label_1403567a1:
        zmm4[0].o = zx.o(0)
        
        if ((temp0_1061 & 4) == 0)
        label_1403567ab:
            
            if ((temp0_1061 & 8) != 0)
                goto label_14035686e
            
            goto label_1403567b4
        
    label_14035685a:
        var_960[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
        
        if ((temp0_1061 & 8) != 0)
        label_14035686e:
            var_960[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
            
            if ((temp0_1061 & 0x10) == 0)
                goto label_1403567bd
            
            goto label_140356882
        
    label_1403567b4:
        
        if ((temp0_1061 & 0x10) == 0)
        label_1403567bd:
            
            if ((temp0_1061 & 0x20) != 0)
                goto label_140356896
            
            goto label_1403567c6
        
    label_140356882:
        var_960[1].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
        
        if ((temp0_1061 & 0x20) != 0)
        label_140356896:
            var_960[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
            
            if ((temp0_1061 & 0x40) == 0)
                goto label_1403567cf
            
            goto label_1403568aa
        
    label_1403567c6:
        
        if ((temp0_1061 & 0x40) != 0)
        label_1403568aa:
            var_960[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
            
            if (temp0_1061 s< 0)
            label_1403568bd:
                var_960[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
                
                if (r8_27 == temp0_1045)
                    goto label_1403567e0
                
                goto label_1403568d1
        else
        label_1403567cf:
            
            if (temp0_1061 s< 0)
                goto label_1403568bd
        
        if (r8_27 != temp0_1045)
        label_1403568d1:
            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            arg10 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        label_1403568f4:
            arg8 = var_800_2.32
            zmm0 = _mm256_andnot_ps(arg7, arg8)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1 = _mm256_xor_ps(arg7, _mm256_cmp_ps(zmm4, zmm4, 0xf))
                var_a20 = _mm256_maskstore_ps(zmm1, arg11)
                var_a00 = _mm256_maskstore_ps(zmm1, arg12)
                var_9e0 = _mm256_maskstore_ps(zmm1, arg9)
                var_9c0 = _mm256_maskstore_ps(zmm1, var_d00_3)
                var_9a0 = _mm256_maskstore_ps(zmm1, arg5)
                var_980 = _mm256_maskstore_ps(zmm1, arg6)
                char temp0_1088 = _mm256_movemask_ps(zmm1)
                
                if ((temp0_1088 & 1) == 0)
                    if ((temp0_1088 & 2) != 0)
                        goto label_140356f76
                    
                    goto label_14035696d
                
                var_960[0].b = 1
                
                if ((temp0_1088 & 2) != 0)
                label_140356f76:
                    var_960[0]:1.b = 1
                    
                    if ((temp0_1088 & 4) == 0)
                        goto label_140356975
                    
                    goto label_140356f86
                
            label_14035696d:
                
                if ((temp0_1088 & 4) == 0)
                label_140356975:
                    
                    if ((temp0_1088 & 8) != 0)
                        goto label_140356f96
                    
                    goto label_14035697d
                
            label_140356f86:
                var_960[0]:2.b = 1
                
                if ((temp0_1088 & 8) != 0)
                label_140356f96:
                    var_960[0]:3.b = 1
                    
                    if ((temp0_1088 & 0x10) == 0)
                        goto label_140356985
                    
                    goto label_140356fa6
                
            label_14035697d:
                
                if ((temp0_1088 & 0x10) == 0)
                label_140356985:
                    
                    if ((temp0_1088 & 0x20) != 0)
                        goto label_140356fb6
                    
                    goto label_14035698d
                
            label_140356fa6:
                var_960[1].b = 1
                
                if ((temp0_1088 & 0x20) != 0)
                label_140356fb6:
                    var_960[1]:1.b = 1
                    
                    if ((temp0_1088 & 0x40) == 0)
                        goto label_140356995
                    
                    goto label_140356fc6
                
            label_14035698d:
                
                if ((temp0_1088 & 0x40) != 0)
                label_140356fc6:
                    var_960[1]:2.b = 1
                    
                    if (temp0_1088 s< 0)
                        var_960[1]:3.b = 1
                else
                label_140356995:
                    
                    if (temp0_1088 s< 0)
                        var_960[1]:3.b = 1
                
                zmm0 = _mm256_or_ps(arg10, zmm0)
                _mm256_movemask_ps(zmm0)
            
            zmm1 = var_a20
            zmm2 = var_a00
            zmm3 = var_9e0
            zmm4 = var_9c0
            zmm5 = var_9a0
            arg5 = var_980
            zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_960[0].q)
        else
        label_1403567e0:
            zmm1 = var_a20
            zmm2 = var_a00
            zmm3 = var_9e0
            zmm4 = var_9c0
            zmm5 = var_9a0
            arg5 = var_980
            zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_960[0].q)
            arg8 = var_800_2.32
        
        var_7c0 = _mm256_maskstore_ps(arg8, zmm1)
        var_7a0 = _mm256_maskstore_ps(arg8, zmm2)
        var_780 = _mm256_maskstore_ps(arg8, zmm3)
        var_760 = _mm256_maskstore_ps(arg8, zmm4)
        var_740 = _mm256_maskstore_ps(arg8, zmm5)
        var_720 = _mm256_maskstore_ps(arg8, arg5)
        
        if ((r8_27 & 1) == 0)
            if ((r8_27 & 2) != 0)
                goto label_140356ee3
            
            goto label_140356a2b
        
        var_700[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
        
        if ((r8_27 & 2) != 0)
        label_140356ee3:
            var_700[1] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
            
            if ((r8_27 & 4) == 0)
                goto label_140356a33
            
            goto label_140356ef6
        
    label_140356a2b:
        
        if ((r8_27 & 4) == 0)
        label_140356a33:
            
            if ((r8_27 & 8) != 0)
                goto label_140356f09
            
            goto label_140356a3b
        
    label_140356ef6:
        var_700[2] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
        
        if ((r8_27 & 8) != 0)
        label_140356f09:
            var_700[3] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
            
            if ((r8_27 & 0x10) == 0)
                goto label_140356a43
            
            goto label_140356f1c
        
    label_140356a3b:
        
        if ((r8_27 & 0x10) == 0)
        label_140356a43:
            
            if ((r8_27 & 0x20) != 0)
                goto label_140356f2f
            
            goto label_140356a4b
        
    label_140356f1c:
        var_700[4] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
        
        if ((r8_27 & 0x20) != 0)
        label_140356f2f:
            var_700[5] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
            
            if ((r8_27 & 0x40) == 0)
                goto label_140356a53
            
            goto label_140356f42
        
    label_140356a4b:
        
        if ((r8_27 & 0x40) != 0)
        label_140356f42:
            var_700[6] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
            
            if (r8_27 s< 0)
                var_700[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
        else
        label_140356a53:
            
            if (r8_27 s< 0)
                var_700[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)

zmm0[0].o = var_7c0[0].o
int32_t var_b40 = zmm0[0].d
float var_b24 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_b08 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm1[0].o = var_7c0[2].o
float var_aec = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
int32_t var_ad0 = zmm1[0].d
float var_ab4 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float var_a98 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm0[0].o = var_7a0[0].o
float var_a7c = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
int32_t var_b3c = zmm0[0].d
float var_b20 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_b04 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm1[0].o = var_7a0[2].o
float var_ae8 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
int32_t var_acc = zmm1[0].d
float var_ab0 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float var_a94 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
float var_a78 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
zmm0[0].o = var_780[0].o
int32_t var_b38 = zmm0[0].d
float var_b1c = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_b00 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm1[0].o = var_780[4].o
float var_ae4 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
int32_t var_ac8 = zmm1[0].d
float var_aac = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float var_a90 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm0[0].o = var_760[0].o
float var_a74 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
int32_t var_b34 = zmm0[0].d
float var_b18 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_afc = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm1[0].o = var_760[4].o
float var_ae0 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
int32_t var_ac4 = zmm1[0].d
float var_aa8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float var_a8c = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm0[0].o = var_740[0].o
float var_a70 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
int32_t var_b30 = zmm0[0].d
float var_b14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_af8 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm1[0].o = var_740[4].o
float var_adc = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
int32_t var_ac0 = zmm1[0].d
float var_aa4 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float var_a88 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm0[0].o = var_720[0].o
float var_a6c = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
int32_t var_b2c = zmm0[0].d
float var_b10 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_af4 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm1[0].o = var_720[4].o
float var_ad8 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
int32_t var_abc = zmm1[0].d
float var_aa0 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float var_a84 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
float var_a68 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
zmm0[0].o = zx.o(var_700)
char var_b28[0x4]
var_b28[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
uint8_t var_b0c = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 1)
uint8_t var_af0 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
uint8_t var_ad4 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 3)
uint8_t var_ab8 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
uint8_t var_a9c = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 5)
uint8_t var_a80 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
uint8_t var_a64 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 7)

for (uint64_t i_2 = 0xff; i_2 != 0; )
    uint64_t rcx_83
    uint64_t rflags_1
    
    if (i_2 == 0)
        rcx_83 = 0x40
    else
        rcx_83, rflags_1 = _bit_scan_forward(i_2)
    i_2 &= not.q(1 << (rcx_83 u% 0x40))
    uint64_t rbx_41 = rcx_83 * 0x1c
    char rcx_84 = arg16[3].b
    char rdx_67 = var_b28[rbx_41]
    void var_d20
    
    if (rcx_84 != 0 && rdx_67 != 0)
        zmm0[0].o = *(&var_d20 + rbx_41 + 0x1e0)
        zmm1[0].o = __vmovsd_xmmdq_memq(*arg16)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg16[1].d, 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_b3c)[rcx_83 * 7], 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_b38)[rcx_83 * 7], 0x20)
        zmm2[0].o = __vmovsd_xmmdq_memq(*(arg16 + 0xc))
        zmm0 = _mm256_min_ps(zmm1, zmm0)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg16 + 0x14), 0x20)
        zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm2[0].o = __vmovsd_xmmdq_memq(*(&var_b34 + rbx_41))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, (&var_b2c)[rcx_83 * 7], 0x20)
        zmm2[0].o = _mm_permute_pd(zmm0[0].o, 1)
        zmm3 = _mm256_max_ps(zmm3, zmm4)
        zmm4[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
        zmm5[0].o = _mm_permute_pd(zmm3[0].o, 1)
    else if (rdx_67 == 0)
        rcx_84 = arg16[3].b
        zmm5[0].o = *(arg16 + 0x14)
        zmm4[0].o = arg16[2].d
        zmm3[0].o = *(arg16 + 0xc)
        zmm2[0].o = arg16[1].d
        zmm0[0].o = *arg16
        zmm1[0].o = *(arg16 + 4)
    else
        zmm0[0].o = *(&var_d20 + rbx_41 + 0x1e0)
        zmm1[0].o = (&var_b3c)[rcx_83 * 7]
        zmm2[0].o = (&var_b38)[rcx_83 * 7]
        zmm3[0].o = (&var_b34)[rcx_83 * 7]
        zmm4[0].o = (&var_b30)[rcx_83 * 7]
        zmm5[0].o = (&var_b2c)[rcx_83 * 7]
        rcx_84 = rdx_67
    *arg16 = zmm0[0].d
    *(arg16 + 4) = zmm1[0].d
    arg16[1].d = zmm2[0]
    *(arg16 + 0xc) = zmm3[0]
    arg16[2].d = zmm4[0].d
    *(arg16 + 0x14) = zmm5[0]
    arg16[3].b = rcx_84

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
return arg16
