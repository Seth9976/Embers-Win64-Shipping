// 函数: sub_14034caa0
// 地址: 0x14034caa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t var_40 = rbx
__chkstk(0x1378)
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
int128_t* r14 = arg4
float* r15 = arg15
float zmm0[0x8] = *arg18
int32_t i_5 = _mm256_movemask_ps(zmm0)
uint64_t i_2
double var_13c0[0x4]
float var_1320[0x8]
int64_t var_1300
float var_12e0[0x8]
uint64_t var_12c0
int64_t var_12a0
int64_t var_1280
uint64_t var_1240
int64_t var_1220
double var_1200[0x4]
float var_11e0[0x8]
int32_t var_11c0[0x8]
float var_11a0[0x8]
double var_1180[0x4]
double var_1160[0x4]
double var_1140[0x4]
double var_1120[0x4]
double var_1100[0x4]
int32_t var_10e0[0x8]
double var_10c0[0x4]
double var_10a0[0x4]
float var_1080[0x8]
float var_1060[0x8]
float var_1040[0x8]
float var_1020[0x8]
int32_t* var_f20
int128_t* var_ee0
uint32_t (* var_ec0)[0x4]
double zmm1[0x4]
int32_t zmm2[0x8]
double zmm3[0x4]
double zmm4[0x4]
double zmm5[0x4]

if (i_5 != 0xff)
    int32_t rax_106 = ((arg17 s>> 0x1f u>> 0x1d) + arg17) & 0xfffffff8
    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
    float var_ac0_1[0x8] = arg14
    float var_ae0_1[0x8] = arg14
    float var_b00_1[0x8] = arg14
    float var_b20_1[0x8] = arg14
    float var_b40_1[0x8] = arg14
    float var_b60_1[0x8] = arg14
    uint8_t var_aa0_1[0x8] = 0
    uint64_t rcx_91 = 0
    
    if (rax_106 s> 0)
        arg9[0].o = zx.o(0)
        arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        
        while (true)
            int64_t rax_109 = sx.q((rcx_91 << 3).d - rcx_91.d)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(arg9[0].o, *(r14 + (rax_109 << 2) + 0x18), 0)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rax_109 << 2) + 0x34), 2)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rax_109 << 2) + 0x50), 4)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rax_109 << 2) + 0x6c), 6)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rax_109 << 2) + 0x88), 8)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rax_109 << 2) + 0xa4), 0xa)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rax_109 << 2) + 0xc0), 0xc)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rax_109 << 2) + 0xdc), 0xe)
            int64_t r8_29 = sx.q((rcx_91 << 2).d)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, *(arg1 + r8_29 + 0x10))
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, *(arg1 + r8_29))
            zmm1[0].o ^= arg10[0].o
            zmm2[0].o ^= arg10[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
            zmm3[0].o = zmm0[0].o & not.o(zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            char temp0_1086 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            
            if (temp0_1086 != 0)
                int64_t rdx_67 = sx.q((rcx_91 * 9).d * 3 + rcx_91.d)
                arg6[0].o = *(r14 + rdx_67)
                zmm0[0].o = *(r14 + rdx_67 + 0x1c)
                zmm1[0].o = *(r14 + rdx_67 + 0x38)
                arg5[0].o = *(r14 + rdx_67 + 0x54)
                zmm4[0].o = *(r14 + rdx_67 + 0x70)
                arg7[0].o = *(r14 + rdx_67 + 0x8c)
                arg8[0].o = *(r14 + rdx_67 + 0xa8)
                arg13[0].o = *(r14 + rdx_67 + 0xc4)
                zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm5[0].o = zmm5[0] | zmm1[0] << 0x40
                zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x24)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 8)
                var_1280.32 = zmm2
                zmm2[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                zmm2[0].o = zmm2[0].q | arg8[0] << 0x40
                zmm5[0].o = _mm_permute_ps(arg13[0].o, 0x24)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_12c0.o = zmm2[0].o
                zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xe5)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x68)
                zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x44)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_12a0.32 = zmm2
                zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xe5)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 2)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 0x68)
                zmm5[0].o = _mm_permute_ps(arg13[0].o, 0x44)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_1320[0].o = zmm2[0].o
                zmm2[0].o = _mm_permute_ps(arg6[0].o, 0x4e)
                zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 2)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0xc)
                zmm5[0].o = _mm_permute_ps(arg5[0].o, 0xa4)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_1300.32 = zmm2
                zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0x4e)
                zmm5[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 2)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 0xc)
                zmm5[0].o = _mm_permute_ps(arg13[0].o, 0xa4)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_1240.o = zmm2[0].o
                zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xe7)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xe8)
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 8)
                var_1220.32 = zmm0
                int64_t rdi_27 = *(r14 + rdx_67 + 0x10)
                zmm0[0].o = zx.o(rdi_27.d)
                int64_t rbx_38 = *(r14 + rdx_67 + 0x2c)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rbx_38.d, 1)
                int64_t rsi_59 = *(r14 + rdx_67 + 0x48)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rsi_59.d, 2)
                int64_t r11_19 = *(r14 + rdx_67 + 0x64)
                int64_t rax_116 = *(r14 + rdx_67 + 0x80)
                zmm1[0].o = zx.o(rax_116.d)
                int64_t rcx_92 = *(r14 + rdx_67 + 0x9c)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_92.d, 1)
                int64_t r9_25 = *(r14 + rdx_67 + 0xb8)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, r9_25.d, 2)
                int64_t rdx_68 = *(r14 + rdx_67 + 0xd4)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_68.d, 3)
                var_12e0[0].o = zmm1[0].o
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r11_19.d, 3)
                float var_fa0_2[0x8] = zmm0
                zmm0[0].o = *(arg2 + r8_29)
                zmm1[0].o = *(arg2 + r8_29 + 0x10)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 6)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0])
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                double temp0_1135[0x4] = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                zmm1[0].o = zx.o((rax_116 u>> 0x20).d)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (rcx_92 u>> 0x20).d, 1)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (r9_25 u>> 0x20).d, 2)
                arg10[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (rdx_68 u>> 0x20).d, 3)
                zmm0 = _mm256_and_ps(temp0_1135, zmm0)
                var_13c0[0].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
                float temp0_1141 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
                float r13_12 = zmm0[0]
                void* var_1000
                var_1000.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                int32_t temp0_1144 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                int32_t temp0_1145 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                float rdx_70 = zmm0[0]
                int32_t temp0_1146 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = zx.o((rdi_27 u>> 0x20).d)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (rbx_38 u>> 0x20).d, 1)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (rsi_59 u>> 0x20).d, 2)
                zmm1 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, data_142fc9520)
                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                uint64_t rdi_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                uint64_t rbx_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                float* r9_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                uint64_t rax_118 = zx.q(zmm2[0])
                arg9[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (r11_19 u>> 0x20).d, 3)
                int64_t rdx_71 = sx.q(rdx_70)
                void* r14_17 = arg3 + rdx_71
                int64_t r8_31 = sx.q(temp0_1144)
                zmm0[0].o = *(arg3 + rdx_71)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r8_31), 0x10)
                float* r11_21 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
                void* rdx_72 = arg3 + r8_31
                int32_t var_1260
                var_1260.q = rdx_72
                float* r8_32 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
                zmm2[0].o = *(rax_118 + r14_17)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_29 + rdx_72), 0x10)
                float* rcx_94 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
                int32_t* rax_119 = zx.q(zmm1[0].d)
                int64_t rdi_30 = sx.q(temp0_1145)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdi_30), 0x20)
                void* r12_19 = arg3 + rdi_30
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_40 + r12_19), 0x20)
                zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xe7)
                int64_t rdi_31 = sx.q(r13_12)
                int64_t rbx_41 = sx.q(var_13c0[0].d)
                void* rdx_73 = arg3 + rdi_31
                zmm4[0].o = *(arg3 + rdi_31)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rbx_41), 0x10)
                void* rdi_32 = arg3 + rbx_41
                int64_t rbx_42 = sx.q(temp0_1141)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rbx_42), 0x20)
                void* rbx_43 = arg3 + rbx_42
                int64_t r13_13 = sx.q(var_1000.d)
                int64_t r10_22 = sx.q(temp0_1146)
                zmm5[0].o = zmm3[0].o
                arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r10_22), 0x30)
                void* r10_23 = arg3 + r10_22
                float var_1360_2
                var_1360_2.q = r10_23
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + r13_13), 0x30)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_27 + r10_23), 0x30)
                float var_f00[0x8]
                var_f00[0].o = zmm0[0].o
                void* rsi_62 = arg3 + r13_13
                zmm0[0].o = *(rax_119 + rdx_73)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_21 + rdi_32), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_32 + rbx_43), 0x20)
                var_13c0[0] = rbx_43
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_94 + rsi_62), 0x30)
                float var_e80_3[0x8] = zmm0
                zmm0[0].o = _mm_permute_ps(arg7[0].o, 0x4e)
                zmm1 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, data_142fc9540)
                float* r9_28 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                uint64_t r11_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                uint64_t rsi_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                uint64_t rax_120 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                int32_t* rcx_95 = zx.q(zmm2[0])
                float* r8_33 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
                zmm2[0].o = *(rcx_95 + r14_17)
                int64_t rdx_74 = var_1260.q
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_22 + rdx_74), 0x10)
                float* rcx_96 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_63 + r12_19), 0x20)
                int64_t rsi_64 = var_1360_2.q
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_120 + rsi_64), 0x30)
                double var_c80_2[0x2] = zmm2[0].o
                zmm1[0].o = *(zx.q(zmm1[0].d) + rdx_73)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_28 + rdi_32), 0x10)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_33 + rbx_43), 0x20)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_96 + rsi_62), 0x30)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg8[0].o, 0xe8)
                int32_t temp0_1188[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_1135, data_1434423c0)
                float* rbx_44 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1188[0].o, 1))
                zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg13[0].o, 8)
                zmm0[0].o = _mm256_extractf128_ps(temp0_1188[0].o, 1)
                uint64_t r9_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                float* r8_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                uint64_t rax_122 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                int32_t* rcx_97 = zx.q(zmm0[0])
                uint64_t r11_23 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1188[0].o, 2))
                zmm0[0].o = *(rcx_97 + r14_17)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_29 + rdx_74), 0x10)
                float* rcx_98 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1188[0].o, 3))
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_34 + r12_19), 0x20)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_122 + rsi_64), 0x30)
                double var_ea0_1[0x2] = zmm0[0].o
                zmm0[0].o = *(zx.q(temp0_1188[0]) + rdx_73)
                int32_t var_1340
                var_1340.q = rdx_73
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_44 + rdi_32), 0x10)
                double rbx_45 = var_13c0[0]
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_23 i+ rbx_45), 0x20)
                temp0_1188[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_98 + rsi_62), 0x30)
                var_1280.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_1280.32, var_12c0.o, 1)
                zmm0 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, data_1434423e0)
                uint64_t rax_124 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
                double temp0_1206[0x4] =
                    __vinsertf128_ymmqq_ymmqq_memdq_immb(var_12a0.32, var_1320[0].o, 1)
                var_12a0.32 = temp0_1206
                arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                uint64_t r9_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                float* r10_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                uint64_t rax_125 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                uint64_t rcx_99 = zx.q(arg5[0])
                float* r11_24 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
                arg5[0].o = *(rcx_99 + r14_17)
                int64_t rsi_65 = var_1260.q
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_30 + rsi_65), 0x10)
                float* rcx_100 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_25 + r12_19), 0x20)
                arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_125 + rsi_64), 0x30)
                zmm0[0].o = *(zx.q(zmm0[0]) + rdx_73)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_124 + rdi_32), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_24 i+ rbx_45), 0x20)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_100 + rsi_62), 0x30)
                var_12c0.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_1300.32, var_1240.o, 1)
                int32_t temp0_1220[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_1135, data_143442400)
                float* r14_19 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1220[0].o, 1))
                var_1300.32 = _mm256_insertf128_ps(var_1220.32, zmm1[0].o, 1)
                zmm1[0].o = _mm256_extractf128_ps(temp0_1220[0].o, 1)
                uint64_t r9_31 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                float* r10_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                uint64_t rax_128 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                int32_t* rcx_101 = zx.q(zmm1[0].d)
                float* r11_25 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1220[0].o, 2))
                zmm1[0].o = *(rcx_101 + r14_17)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_31 + rsi_65), 0x10)
                float* rcx_102 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1220[0].o, 3))
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_26 + r12_19), 0x20)
                int64_t r10_27 = var_1360_2.q
                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_128 + r10_27), 0x30)
                int64_t rsi_66 = var_1340.q
                zmm1[0].o = *(zx.q(temp0_1220[0]) + rsi_66)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14_19 + rdi_32), 0x10)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_25 i+ rbx_45), 0x20)
                temp0_1220[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_102 + rsi_62), 0x30)
                var_1320 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_fa0_2, var_12e0[0].o, 1)
                int32_t temp0_1236[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_1135, data_143442540)
                float* r14_20 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1236[0].o, 1))
                var_12e0 = _mm256_insertf128_ps(arg9, arg10[0].o, 1)
                zmm1[0].o = _mm256_extractf128_ps(temp0_1236[0].o, 1)
                uint64_t r9_32 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                float* rdx_76 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                uint64_t rax_130 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                int32_t* rcx_103 = zx.q(zmm1[0].d)
                uint64_t r11_26 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1236[0].o, 2))
                zmm1[0].o = *(rcx_103 + r14_17)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_32 + rsi_65), 0x10)
                float* rcx_104 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1236[0].o, 3))
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_76 + r12_19), 0x20)
                arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_130 + r10_27), 0x30)
                zmm1[0].o = *(zx.q(temp0_1236[0]) + rsi_66)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14_20 + rdi_32), 0x10)
                double r14_21 = var_13c0[0]
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_26 i+ r14_21), 0x20)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_104 + rsi_62), 0x30)
                int32_t temp0_1251[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_1135, data_1434b2d00)
                var_fa0_2[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1251[0].o, 1))
                temp0_1206[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                temp0_1206[0].o = __vpmovsxwd_xmmdq_xmmq(temp0_1206[0])
                uint64_t r12_20 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1251[0].o, 2))
                var_1220.o = zmm5[0].o
                arg10[0].o = __vpmovsxwd_xmmdq_xmmq(zmm5[0])
                var_1240.32 = _mm256_insertf128_ps(arg10, temp0_1206[0].o, 1)
                temp0_1206[0].o = _mm256_extractf128_ps(temp0_1251[0].o, 1)
                uint64_t r11_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1206[0].o, 1))
                float* rax_133 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1206[0].o, 2))
                uint64_t rcx_105 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1206[0].o, 3))
                temp0_1206[0].o = *(zx.q(temp0_1206[0].d) + r14_17)
                temp0_1206[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1206[0].o, *(r11_27 + rsi_65), 0x10)
                float* rsi_68 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1251[0].o, 3))
                temp0_1206[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1206[0].o, *(rax_133 + r12_19), 0x20)
                uint64_t rax_134 = zx.q(temp0_1251[0])
                temp0_1251[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1206[0].o, *(rcx_105 + r10_27), 0x30)
                int64_t r8_38 = var_1340.q
                temp0_1206[0].o = *(rax_134 + r8_38)
                temp0_1206[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1206[0].o, 
                    *(var_fa0_2[0].q + rdi_32), 0x10)
                temp0_1206[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1206[0].o, *(r12_20 i+ r14_21), 0x20)
                float var_fa0_3[0x8] = _mm256_insertf128_ps(zmm4, arg11[0].o, 1)
                arg11[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1206[0].o, *(rsi_68 + rsi_62), 0x30)
                zmm3 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0].32)
                float* rax_136 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1))
                float* r12_21 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2))
                var_f00 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_e80_3, var_f00[0].o, 1)
                zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                uint64_t r14_22 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                float* rsi_69 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                uint64_t rax_137 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                zmm4[0].o = *(zx.q(zmm4[0].d) + r14_17)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r14_22 + rsi_65), 0x10)
                float* rdx_78 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 3))
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_69 + r12_19), 0x20)
                uint64_t rdi_34 = zx.q(zmm3[0].d)
                arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_137 + r10_27), 0x30)
                zmm3[0].o = *(rdi_34 + r8_38)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_136 + rdi_32), 0x10)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_21 i+ r14_21), 0x20)
                var_c80_2.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm1, var_c80_2, 1)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_78 + rsi_62), 0x30)
                zmm0 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[8].32)
                var_e80_3[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
                float* r9_35 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
                zmm2 = __vinsertf128_ymmqq_ymmqq_memdq_immb(temp0_1188, var_ea0_1, 1)
                int32_t var_ca0_2[0x8] = zmm2
                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                uint64_t rdx_79 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                float* rdi_35 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                uint64_t rsi_70 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                zmm2[0].o = *(zx.q(zmm2[0]) + r14_17)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_79 + rsi_65), 0x10)
                float* rdx_80 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_35 + r12_19), 0x20)
                uint64_t rbx_50 = zx.q(zmm0[0])
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_70 + r10_27), 0x30)
                zmm0[0].o = *(rbx_50 + r8_38)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_e80_3[0].q + rdi_32), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_35 i+ r14_21), 0x20)
                double temp0_1300[0x4] = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_80 + rsi_62), 0x30)
                arg6 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x10].32)
                float* r12_23 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
                uint64_t r9_36 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
                double temp0_1305[0x4] = _mm256_insertf128_ps(temp0_1220, arg13[0].o, 1)
                temp0_1220[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                uint64_t rdx_81 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1220[0].o, 1))
                float* rbx_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1220[0].o, 2))
                uint64_t rdi_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1220[0].o, 3))
                temp0_1220[0].o = *(zx.q(temp0_1220[0]) + r14_17)
                temp0_1220[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, *(rdx_81 + rsi_65), 0x10)
                float* rsi_72 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
                temp0_1220[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, *(rbx_51 + r12_19), 0x20)
                uint64_t rbx_52 = zx.q(arg6[0].d)
                temp0_1220[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, *(rdi_36 + r10_27), 0x30)
                arg6[0].o = *(rbx_52 + r8_38)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r12_23 + rdi_32), 0x10)
                double rdx_82 = var_13c0[0]
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r9_36 i+ rdx_82), 0x20)
                double temp0_1316[0x4] = _mm256_insertf128_ps(zmm1, arg9[0].o, 1)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_72 + rsi_62), 0x30)
                arg6 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x18].32)
                float* r13_15 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
                float* r11_29 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
                double temp0_1321[0x4] = _mm256_insertf128_ps(arg11, temp0_1251[0].o, 1)
                temp0_1251[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                uint64_t r12_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1251[0].o, 1))
                float* rbx_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1251[0].o, 2))
                uint64_t rdi_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1251[0].o, 3))
                zmm4[0].o = *(zx.q(temp0_1251[0]) + r14_17)
                int64_t r9_37 = var_1260.q
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r12_24 + r9_37), 0x10)
                float* rsi_74 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_53 + r12_19), 0x20)
                uint64_t rbx_54 = zx.q(arg6[0].d)
                temp0_1251[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_37 + r10_27), 0x30)
                zmm4[0].o = *(rbx_54 + r8_38)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r13_15 + rdi_32), 0x10)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r11_29 i+ rdx_82), 0x20)
                double temp0_1332[0x4] = _mm256_insertf128_ps(zmm3, arg10[0].o, 1)
                arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_74 + rsi_62), 0x30)
                zmm4 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x20].32)
                float* r11_30 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 1))
                uint64_t r10_29 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 2))
                double temp0_1337[0x4] = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                uint64_t rdx_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                float* rbx_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                uint64_t rdi_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                zmm0[0].o = *(zx.q(zmm0[0]) + r14_17)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_83 + r9_37), 0x10)
                float* rsi_76 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 3))
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_55 + r12_19), 0x20)
                uint64_t rbx_56 = zx.q(zmm4[0].d)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_38 + r10_27), 0x30)
                zmm2[0].o = *(rbx_56 + r8_38)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_30 + rdi_32), 0x10)
                double r11_31 = var_13c0[0]
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_29 i+ r11_31), 0x20)
                double temp0_1348[0x4] = _mm256_insertf128_ps(zmm1, temp0_1220[0].o, 1)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_76 + rsi_62), 0x30)
                zmm4 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x28].32)
                var_e80_3[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 1))
                float* r10_30 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 2))
                arg7 = _mm256_insertf128_ps(arg10, temp0_1251[0].o, 1)
                temp0_1220[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                uint64_t r14_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1220[0].o, 1))
                float* rbx_57 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1220[0].o, 2))
                uint64_t rax_145 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1220[0].o, 3))
                temp0_1220[0].o = *(zx.q(temp0_1220[0]) + r14_17)
                temp0_1220[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, *(r14_24 + r9_37), 0x10)
                float* rcx_107 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 3))
                temp0_1220[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, *(rbx_57 + r12_19), 0x20)
                uint64_t rbx_58 = zx.q(zmm4[0].d)
                zmm4[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, *(rax_145 + r10_27), 0x30)
                temp0_1220[0].o = *(rbx_58 + r8_38)
                temp0_1220[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, 
                    *(var_e80_3[0].q + rdi_32), 0x10)
                temp0_1220[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, *(r10_30 i+ r11_31), 0x20)
                arg10 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1220[0].o, *(rcx_107 + rsi_62), 0x30)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                int32_t temp0_1367[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_1135, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x30].32)
                zmm4[0].o = _mm256_extractf128_ps(temp0_1367[0].o, 1)
                uint64_t rax_147 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                float* r8_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                uint64_t r9_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                zmm4[0].o = *(zx.q(zmm4[0].d) + r14_17)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_147 + r9_37), 0x10)
                arg6 = __vandps_ymmqq_ymmqq_memqq(temp0_1135, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x38].32)
                zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                uint64_t rax_148 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                float* r10_31 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                uint64_t rdi_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                int32_t* rsi_79 = zx.q(zmm0[0])
                float* rcx_108 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1367[0].o, 1))
                zmm0[0].o = *(rsi_79 + r14_17)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_148 + r9_37), 0x10)
                uint64_t r12_26 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1367[0].o, 2))
                float* r11_32 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1367[0].o, 3))
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r8_40 + r12_19), 0x20)
                uint64_t r8_41 = zx.q(temp0_1367[0])
                int64_t rdx_86 = var_1360_2.q
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_38 + rdx_86), 0x30)
                int64_t rax_149 = var_1340.q
                temp0_1367[0].o = *(r8_41 + rax_149)
                temp0_1367[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1367[0].o, *(rcx_108 + rdi_32), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_31 + r12_19), 0x20)
                float* rcx_109 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
                uint64_t rsi_81 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_40 + rdx_86), 0x30)
                float* rdx_87 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
                arg6[0].o = *(zx.q(arg6[0].d) + rax_149)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_109 + rdi_32), 0x10)
                double rcx_110 = var_13c0[0]
                temp0_1367[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1367[0].o, *(r12_26 i+ rcx_110), 0x20)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rsi_81 i+ rcx_110), 0x20)
                temp0_1367[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1367[0].o, *(r11_32 + rsi_62), 0x30)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_87 + rsi_62), 0x30)
                double temp0_1395[0x4] = _mm256_insertf128_ps(temp0_1367, zmm4[0].o, 1)
                zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                int32_t var_700[0x8] = var_fa0_3
                int32_t var_6e0[0x8] = var_f00
                int32_t var_6c0[0x8] = var_c80_2.32
                int32_t var_6a0[0x8] = var_ca0_2
                double var_680_1[0x4] = temp0_1300
                double var_660_1[0x4] = temp0_1305
                double var_640_1[0x4] = temp0_1316
                double var_620_1[0x4] = temp0_1321
                double var_600_1[0x4] = temp0_1332
                double var_5e0_1[0x4] = temp0_1337
                double var_5c0_1[0x4] = temp0_1348
                int32_t var_5a0_1[0x8] = arg7
                float var_580_1[0x8] = arg10
                int32_t var_560_1[0x8] = zmm2
                double var_540_1[0x4] = temp0_1395
                float var_520_1[0x8] = zmm0
                arg7[0].o = r15[9]
                zmm2[0].o = zx.o(r15[0xd])
                temp0_1337[0].o = zx.o(r15[2])
                temp0_1395[0].o = r15[3]
                temp0_1300[0].o = r15[6]
                var_ca0_2[0].o = r15[0xa]
                arg6[0].o = r15[0xe]
                zmm0[0].o = r15[7]
                temp0_1348[0].o = zx.o(r15[0xb])
                
                for (int64_t i = 0; i != 0x200; i -= -0x80)
                    arg12 = _mm256_broadcast_ss(*r15)
                    arg11 = *(&var_700 + i)
                    arg10 = *(&var_6e0 + i)
                    arg9 = *(&var_6c0 + i)
                    arg8 = *(&var_6a0 + i)
                    *(&var_1200 + i) = _mm256_add_ps(
                        _mm256_add_ps(
                            _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg11, arg12), arg14), 
                                _mm256_mul_ps(arg10, _mm256_broadcast_ss(r15[4]))), 
                            _mm256_mul_ps(arg9, _mm256_broadcast_ss(r15[8]))), 
                        _mm256_mul_ps(arg8, _mm256_broadcast_ss(r15[0xc])))
                    arg12 = _mm256_add_ps(_mm256_mul_ps(arg11, _mm256_broadcast_ss(r15[1])), arg14)
                    arg13 = _mm256_mul_ps(arg10, _mm256_broadcast_ss(r15[5]))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    arg13[0].o = _mm_permute_ps(arg7[0].o, 0)
                    arg13 = _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                    arg13 = _mm256_mul_ps(arg8, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    *(&var_11e0 + i) = arg12
                    arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_1337[0].o, 0)
                    arg12 = _mm256_add_ps(
                        _mm256_mul_ps(arg11, _mm256_insertf128_ps(arg12, arg12[0].o, 1)), arg14)
                    arg13[0].o = _mm_permute_ps(temp0_1300[0].o, 0)
                    arg13 = _mm256_mul_ps(arg10, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    arg13[0].o = _mm_permute_ps(var_ca0_2[0].o, 0)
                    arg13 = _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    arg13[0].o = _mm_permute_ps(arg6[0].o, 0)
                    arg12 = _mm256_add_ps(arg12, 
                        _mm256_mul_ps(arg8, _mm256_insertf128_ps(arg13, arg13[0].o, 1)))
                    *(&var_11c0 + i) = arg12
                    arg12[0].o = _mm_permute_ps(temp0_1395[0].o, 0)
                    double temp0_1440[0x4] = _mm256_insertf128_ps(arg12, arg12[0].o, 1)
                    arg11 = _mm256_add_ps(_mm256_mul_ps(arg11, temp0_1440), arg14)
                    temp0_1440[0].o = _mm_permute_ps(zmm0[0].o, 0)
                    float temp0_1446[0x8] = _mm256_add_ps(arg11, 
                        _mm256_mul_ps(arg10, _mm256_insertf128_ps(temp0_1440, temp0_1440[0].o, 1)))
                    arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_1348[0].o, 0)
                    *(&var_11a0 + i) = _mm256_add_ps(
                        _mm256_add_ps(temp0_1446, 
                            _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg11, arg11[0].o, 1))), 
                        _mm256_mul_ps(arg8, _mm256_broadcast_ss(r15[0xf])))
                
                zmm1 = var_1200
                var_13c0 = zmm1
                zmm2 = var_11e0
                void* var_13a0_4
                var_13a0_4.32 = zmm2
                zmm4 = __vaddps_ymmqq_ymmqq_memqq(var_1300.32, var_1280.32)
                zmm0 = data_142fc94a0
                zmm4 = _mm256_mul_ps(zmm4, zmm0)
                zmm5 = _mm256_mul_ps(zmm4, zmm1)
                arg5 = _mm256_mul_ps(zmm4, zmm2)
                arg6 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_1320, var_12a0.32), zmm0)
                var_1360_2.32 = var_1180
                float temp0_1461[0x8] = _mm256_add_ps(_mm256_mul_ps(arg6, var_1180), zmm5)
                arg5 = _mm256_add_ps(_mm256_mul_ps(arg6, var_1160), arg5)
                zmm2 = var_11c0
                var_1340.32 = zmm2
                arg7 = _mm256_mul_ps(zmm4, zmm2)
                zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm4, var_11a0)
                arg11 = _mm256_add_ps(_mm256_mul_ps(arg6, var_1140), arg7)
                zmm4 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg6, var_1120))
                arg14 = var_12c0.32
                zmm2 = var_12e0
                arg13 = _mm256_mul_ps(_mm256_add_ps(arg14, zmm2), zmm0)
                zmm3 = _mm256_add_ps(temp0_1461, _mm256_mul_ps(arg13, var_1100))
                arg5 = _mm256_add_ps(_mm256_mul_ps(arg13, var_10e0), arg5)
                float temp0_1477[0x8] = _mm256_add_ps(_mm256_mul_ps(arg13, var_10c0), arg11)
                arg13 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg13, var_10a0))
                zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_1080)
                zmm3 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_1060)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_1477, var_1040)
                float temp0_1483[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg13, var_1020)
                var_1200 = var_1180
                var_11e0 = var_1160
                var_11c0 = var_1140
                var_11a0 = var_1120
                double var_a00_3[0x4] = var_1100
                int32_t var_9e0_3[0x8] = var_10e0
                double var_9c0_3[0x4] = var_10c0
                double var_9a0_3[0x4] = var_10a0
                arg11 = __vsubps_ymmqq_ymmqq_memqq(var_1320, var_12a0.32)
                arg12 = _mm256_sub_ps(zmm2, arg14)
                arg13 = __vsubps_ymmqq_ymmqq_memqq(var_1300.32, var_1280.32)
                double var_a80_3[0x4] = zmm4
                double var_a60_3[0x4] = zmm3
                arg14 = zmm3
                int32_t var_a40_3[0x8] = arg5
                float var_a20_3[0x8] = temp0_1483
                zmm2 = data_142fc94a0
                float temp0_1487[0x8] = _mm256_mul_ps(arg13, zmm2)
                arg13 = __vmulps_ymmqq_ymmqq_memqq(temp0_1487, var_13c0)
                zmm1 = __vmulps_ymmqq_ymmqq_memqq(temp0_1487, var_13a0_4.32)
                float temp0_1490[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_1487, var_1340.32)
                float temp0_1491[0x8] = _mm256_mul_ps(arg11, zmm2)
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(temp0_1491, var_1360_2.32)
                zmm3 = _mm256_mul_ps(temp0_1491, var_1160)
                arg9 = _mm256_mul_ps(temp0_1491, var_1140)
                arg10 = data_142fc9320
                arg11 = arg10
                arg10 = _mm256_and_ps(arg13, arg10)
                zmm2 = _mm256_add_ps(arg10, _mm256_and_ps(zmm2, arg11))
                zmm1 = _mm256_add_ps(_mm256_and_ps(zmm1, arg11), _mm256_and_ps(zmm3, arg11))
                float temp0_1503[0x8] =
                    _mm256_add_ps(_mm256_and_ps(temp0_1490, arg11), _mm256_and_ps(arg9, arg11))
                zmm3 = __vmulps_ymmqq_ymmqq_memqq(arg12, data_142fc94a0)
                arg6 = _mm256_mul_ps(zmm3, var_1100)
                arg7 = _mm256_mul_ps(zmm3, var_10e0)
                zmm3 = _mm256_mul_ps(zmm3, var_10c0)
                zmm2 = _mm256_add_ps(zmm2, _mm256_and_ps(arg6, arg11))
                arg6 = _mm256_and_ps(arg7, arg11)
                zmm1 = _mm256_add_ps(zmm1, arg6)
                zmm0 = _mm256_add_ps(temp0_1503, _mm256_and_ps(zmm3, arg11))
                arg7 = _mm256_sub_ps(zmm4, zmm2)
                arg8 = _mm256_sub_ps(arg14, zmm1)
                zmm3 = _mm256_sub_ps(arg5, zmm0)
                zmm4 = _mm256_add_ps(zmm4, zmm2)
                zmm5 = _mm256_add_ps(arg14, zmm1)
                arg5 = _mm256_add_ps(arg5, zmm0)
                zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_aa0_1)
                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                zmm2[0].o = zmm0[0].o ^ arg10[0].o
                arg6[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
                arg6 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                zmm2[0].o = zmm0[0].o & not.o(var_1220.o)
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_1531 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                char rdx_89
                
                if (temp0_1531 == 0)
                    zmm0[0].o = zx.o(0)
                    r14 = arg4
                    rdx_89 = temp0_1086
                    arg11 = var_1240.32
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    zmm1 = _mm256_andnot_ps(arg6, arg11)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                    label_140351054:
                        int32_t temp0_1572[0x8] =
                            _mm256_xor_ps(arg6, _mm256_cmp_ps(arg14, arg14, 0xf))
                        var_1200 = _mm256_maskstore_ps(temp0_1572, arg7)
                        var_11e0 = _mm256_maskstore_ps(temp0_1572, arg8)
                        var_11c0 = _mm256_maskstore_ps(temp0_1572, zmm3)
                        var_11a0 = _mm256_maskstore_ps(temp0_1572, zmm4)
                        var_1180 = _mm256_maskstore_ps(temp0_1572, zmm5)
                        var_1160 = _mm256_maskstore_ps(temp0_1572, arg5)
                        char temp0_1579 = _mm256_movemask_ps(temp0_1572)
                        
                        if ((temp0_1579 & 1) == 0)
                            if ((temp0_1579 & 2) != 0)
                                goto label_14034fad4
                            
                            goto label_1403510a0
                        
                        var_1140[0].b = 1
                        
                        if ((temp0_1579 & 2) != 0)
                        label_14034fad4:
                            var_1140[0]:1.b = 1
                            
                            if ((temp0_1579 & 4) == 0)
                                goto label_1403510a9
                            
                            goto label_14034fae5
                        
                    label_1403510a0:
                        
                        if ((temp0_1579 & 4) == 0)
                        label_1403510a9:
                            
                            if ((temp0_1579 & 8) != 0)
                                goto label_14034faf6
                            
                            goto label_1403510b2
                        
                    label_14034fae5:
                        var_1140[0]:2.b = 1
                        
                        if ((temp0_1579 & 8) != 0)
                        label_14034faf6:
                            var_1140[0]:3.b = 1
                            
                            if ((temp0_1579 & 0x10) == 0)
                                goto label_1403510bb
                            
                            goto label_14034fb07
                        
                    label_1403510b2:
                        
                        if ((temp0_1579 & 0x10) == 0)
                        label_1403510bb:
                            
                            if ((temp0_1579 & 0x20) != 0)
                                goto label_14034fb18
                            
                            goto label_1403510c4
                        
                    label_14034fb07:
                        var_1140[0]:4.b = 1
                        
                        if ((temp0_1579 & 0x20) != 0)
                        label_14034fb18:
                            var_1140[0]:5.b = 1
                            
                            if ((temp0_1579 & 0x40) == 0)
                                goto label_1403510cd
                            
                            goto label_14034fb29
                        
                    label_1403510c4:
                        
                        if ((temp0_1579 & 0x40) != 0)
                        label_14034fb29:
                            var_1140[0]:6.b = 1
                            
                            if (temp0_1579 s< 0)
                                var_1140[0]:7.b = 1
                        else
                        label_1403510cd:
                            
                            if (temp0_1579 s< 0)
                                var_1140[0]:7.b = 1
                        
                        _mm256_movemask_ps(_mm256_or_ps(zmm0, zmm1))
                else
                    arg9 = var_b40_1
                    arg10 = var_b20_1
                    arg12 = var_ae0_1
                    arg13 = var_ac0_1
                    var_1200 = _mm256_maskstore_ps(arg6, _mm256_min_ps(var_b60_1, arg7))
                    float temp0_1534[0x8] = _mm256_min_ps(arg9, arg8)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    var_11e0 = _mm256_maskstore_ps(arg6, temp0_1534)
                    float temp0_1537[0x8] = _mm256_min_ps(arg10, zmm3)
                    arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    var_11c0 = _mm256_maskstore_ps(arg6, temp0_1537)
                    var_11a0 = _mm256_maskstore_ps(arg6, _mm256_max_ps(var_b00_1, zmm4))
                    var_1180 = _mm256_maskstore_ps(arg6, _mm256_max_ps(arg12, zmm5))
                    float temp0_1544[0x8] = _mm256_max_ps(arg13, arg5)
                    var_1160 = _mm256_maskstore_ps(arg6, temp0_1544)
                    temp0_1544[0].o = zmm1[0].o & data_142fc92e0
                    temp0_1544[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(temp0_1544[0].o, arg9[0].o)
                    temp0_1544[0].o ^= arg10[0].o
                    temp0_1544[0].o =
                        __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1544[0].o, temp0_1544[0].o)
                    char temp0_1548 = __vpmovmskb_gpr32d_xmmdq(temp0_1544[0].o)
                    r14 = arg4
                    
                    if ((temp0_1548 & 1) == 0)
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        
                        if ((temp0_1548 & 2) != 0)
                            goto label_140350f80
                        
                        goto label_140350ed5
                    
                    var_1140[0].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    
                    if ((temp0_1548 & 2) != 0)
                    label_140350f80:
                        var_1140[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                        arg11 = var_1240.32
                        
                        if ((temp0_1548 & 4) == 0)
                            goto label_140350ee4
                        
                        goto label_140350f9d
                    
                label_140350ed5:
                    arg11 = var_1240.32
                    
                    if ((temp0_1548 & 4) == 0)
                    label_140350ee4:
                        
                        if ((temp0_1548 & 8) != 0)
                            goto label_140350fb1
                        
                        goto label_140350eed
                    
                label_140350f9d:
                    var_1140[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
                    
                    if ((temp0_1548 & 8) != 0)
                    label_140350fb1:
                        var_1140[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                        
                        if ((temp0_1548 & 0x10) == 0)
                            goto label_140350ef6
                        
                        goto label_140350fc5
                    
                label_140350eed:
                    
                    if ((temp0_1548 & 0x10) == 0)
                    label_140350ef6:
                        
                        if ((temp0_1548 & 0x20) != 0)
                            goto label_140350fd9
                        
                        goto label_140350eff
                    
                label_140350fc5:
                    var_1140[0]:4.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
                    
                    if ((temp0_1548 & 0x20) != 0)
                    label_140350fd9:
                        var_1140[0]:5.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                        
                        if ((temp0_1548 & 0x40) == 0)
                            goto label_140350f08
                        
                        goto label_140350fed
                    
                label_140350eff:
                    
                    if ((temp0_1548 & 0x40) == 0)
                    label_140350f08:
                        
                        if (temp0_1548 s< 0)
                            goto label_140351000
                        
                        goto label_140350f10
                    
                label_140350fed:
                    var_1140[0]:6.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                    
                    if (temp0_1548 s>= 0)
                    label_140350f10:
                        rdx_89 = temp0_1086
                        
                        if (rdx_89 != temp0_1531)
                        label_14035101a:
                            temp0_1544[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            temp0_1544[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1544[0].o, 0x1f)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_1544[0].o)
                            temp0_1544[0].o = __vpsrad_xmmdq_xmmdq_immb(temp0_1544[0].o, 0x1f)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(temp0_1544, zmm1[0].o, 1)
                            zmm1 = _mm256_andnot_ps(arg6, arg11)
                            
                            if (_mm256_movemask_ps(zmm1) != 0)
                                goto label_140351054
                    else
                    label_140351000:
                        var_1140[0]:7.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                        rdx_89 = temp0_1086
                        
                        if (rdx_89 != temp0_1531)
                            goto label_14035101a
                
                zmm0 = var_1200
                zmm2 = var_11e0
                zmm3 = var_11c0
                zmm4 = var_11a0
                zmm5 = var_1180
                arg5 = var_1160
                zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_1140[0])
                var_b60_1 = _mm256_maskstore_ps(arg11, zmm0)
                var_b40_1 = _mm256_maskstore_ps(arg11, zmm2)
                var_b20_1 = _mm256_maskstore_ps(arg11, zmm3)
                var_b00_1 = _mm256_maskstore_ps(arg11, zmm4)
                var_ae0_1 = _mm256_maskstore_ps(arg11, zmm5)
                var_ac0_1 = _mm256_maskstore_ps(arg11, arg5)
                
                if ((rdx_89 & 1) == 0)
                    if ((rdx_89 & 2) != 0)
                        goto label_14034fa24
                    
                    goto label_14035116a
                
                var_aa0_1[0] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
                
                if ((rdx_89 & 2) != 0)
                label_14034fa24:
                    var_aa0_1[1] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                    
                    if ((rdx_89 & 4) == 0)
                        goto label_140351173
                    
                    goto label_14034fa38
                
            label_14035116a:
                
                if ((rdx_89 & 4) == 0)
                label_140351173:
                    
                    if ((rdx_89 & 8) != 0)
                        goto label_14034fa4c
                    
                    goto label_14035117c
                
            label_14034fa38:
                var_aa0_1[2] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
                
                if ((rdx_89 & 8) != 0)
                label_14034fa4c:
                    var_aa0_1[3] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                    
                    if ((rdx_89 & 0x10) == 0)
                        goto label_140351185
                    
                    goto label_14034fa60
                
            label_14035117c:
                
                if ((rdx_89 & 0x10) == 0)
                label_140351185:
                    
                    if ((rdx_89 & 0x20) != 0)
                        goto label_14034fa74
                    
                    goto label_14035118e
                
            label_14034fa60:
                var_aa0_1[4] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
                
                if ((rdx_89 & 0x20) != 0)
                label_14034fa74:
                    var_aa0_1[5] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                    
                    if ((rdx_89 & 0x40) == 0)
                        goto label_140351197
                    
                    goto label_14034fa88
                
            label_14035118e:
                
                if ((rdx_89 & 0x40) != 0)
                label_14034fa88:
                    var_aa0_1[6] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                    
                    if (rdx_89 s< 0)
                    label_14034faa3:
                        var_aa0_1[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                        rcx_91 = zx.q(rcx_91.d + 8)
                        
                        if (rcx_91.d s>= rax_106)
                            break
                        
                        continue
                else
                label_140351197:
                    
                    if (rdx_89 s< 0)
                        goto label_14034faa3
            
            rcx_91 = zx.q(rcx_91.d + 8)
            
            if (rcx_91.d s>= rax_106)
                break
    
    if (rcx_91.d s< arg17)
        zmm0[0].o = zx.o(rcx_91.d)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
        zmm2[0].o = zx.o(arg17)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        var_13c0 = zmm2
        arg7 = _mm256_insertf128_ps(zmm2, arg8[0].o, 1)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm0 = _mm256_and_ps(arg7, _mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
        int64_t rdx_90 = sx.q(zmm0[0])
        void* rsi_82 = r14 + (rdx_90 << 2)
        int64_t rdx_91 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int32_t temp0_1603 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_1604 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        float r9_39 = zmm0[0]
        int32_t temp0_1606 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_1607 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_1608 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
        int32_t temp0_1609[0x8] = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9520)
        arg11[0].o = *(zx.q(temp0_1609[0]) + rsi_82)
        zmm4 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9540)
        arg13[0].o = *(zx.q(zmm4[0].d) + rsi_82)
        int32_t temp0_1611[0x8] = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423c0)
        arg10[0].o = *(zx.q(temp0_1611[0]) + rsi_82)
        arg6 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423e0)
        arg14[0].o = *(zx.q(arg6[0].d) + rsi_82)
        arg9 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442400)
        zmm5[0].o = *(zx.q(arg9[0].d) + rsi_82)
        arg12 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442540)
        zmm0[0].o = zx.o(0)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zx.o(0), *(zx.q(arg12[0].d) + rsi_82), 0)
        void* rax_163 = r14 + (rdx_91 << 2)
        int64_t rdx_92 = sx.q(temp0_1603)
        uint64_t rbx_60 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1609[0].o, 1))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rbx_60 + rax_163), 0x10)
        uint64_t rbx_61 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_61 + rax_163), 0x10)
        uint64_t rbx_62 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 1))
        arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rbx_62 + rax_163), 0x10)
        uint64_t rbx_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *(rbx_63 + rax_163), 0x10)
        uint64_t rbx_64 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_64 + rax_163), 0x10)
        uint8_t* rbx_65 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rbx_65 + rax_163), 2)
        void* rax_164 = r14 + (rdx_92 << 2)
        int64_t rcx_115 = sx.q(temp0_1604)
        uint64_t rdi_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1609[0].o, 2))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_42 + rax_164), 0x20)
        uint64_t rdi_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rdi_43 + rax_164), 0x20)
        uint64_t rdi_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 2))
        arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rdi_44 + rax_164), 0x20)
        uint64_t rdi_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rdi_45 + rax_164), 0x20)
        uint64_t rdi_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_46 + rax_164), 0x20)
        uint64_t rdi_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdi_47 + rax_164), 4)
        void* rax_165 = r14 + (rcx_115 << 2)
        int64_t rdi_48 = sx.q(r9_39)
        uint64_t rcx_116 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1609[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_116 + rax_165), 0x30)
        double var_1320_2[0x4] = zmm1
        uint64_t rcx_117 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rcx_117 + rax_165), 0x30)
        uint64_t rcx_118 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *(rcx_118 + rax_165), 0x30)
        uint64_t rcx_119 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rcx_119 + rax_165), 0x30)
        uint64_t rcx_120 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
        arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_120 + rax_165), 0x30)
        uint8_t* rcx_121 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rcx_121 + rax_165), 6)
        void* rax_166 = r14 + (rdi_48 << 2)
        zmm1[0].o = _mm256_extractf128_ps(temp0_1609[0].o, 1)
        uint64_t rbx_66 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rcx_122 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        uint64_t rdx_93 = zx.q(zmm1[0].d)
        uint64_t rcx_123 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = *(rdx_93 + rax_166)
        temp0_1609[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        uint64_t rdx_94 = zx.q(temp0_1609[0])
        uint64_t r11_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1609[0].o, 1))
        uint64_t rcx_124 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1609[0].o, 2))
        uint64_t rcx_125 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1609[0].o, 3))
        temp0_1609[0].o = *(rdx_94 + rax_166)
        zmm4[0].o = _mm256_extractf128_ps(temp0_1611[0].o, 1)
        uint64_t r9_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
        uint64_t rsi_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
        uint64_t rcx_126 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
        zmm4[0].o = *(zx.q(zmm4[0].d) + rax_166)
        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        uint64_t r13_19 = zx.q(zmm5[0].d)
        uint64_t rdx_95 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
        uint64_t r10_32 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
        uint64_t rcx_127 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
        zmm5[0].o = *(r13_19 + rax_166)
        temp0_1611[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
        uint64_t r13_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 1))
        uint64_t r8_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 2))
        uint64_t rcx_128 = zx.q(temp0_1611[0])
        uint64_t r12_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 3))
        temp0_1611[0].o = *(rcx_128 + rax_166)
        arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(zx.q(arg6[0].d) + rax_166), 8)
        int64_t rax_167 = sx.q(temp0_1606)
        void* rcx_130 = r14 + (rax_167 << 2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_66 + rcx_130), 0x10)
        temp0_1609[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(r11_33 + rcx_130), 0x10)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r9_40 + rcx_130), 0x10)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_95 + rcx_130), 0x10)
        temp0_1611[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1611[0].o, *(r13_20 + rcx_130), 0x10)
        uint8_t* rdx_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdx_96 + rcx_130), 0xa)
        int64_t rcx_131 = sx.q(temp0_1607)
        void* rdx_97 = r14 + (rcx_131 << 2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + rdx_97), 0x20)
        temp0_1609[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(rcx_124 + rdx_97), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_83 + rdx_97), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r10_32 + rdx_97), 0x20)
        temp0_1611[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1611[0].o, *(r8_42 + rdx_97), 0x20)
        rbx = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rbx + rdx_97), 0xc)
        uint64_t rdx_98 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        arg6[0].o = *(r14 + (rdi_48 << 2))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + (rax_167 << 2)), 0x10)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + (rcx_131 << 2)), 0x20)
        zmm3[0].o = *(r14 + (rdx_90 << 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r14 + (rdx_91 << 2)), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r14 + (rdx_92 << 2)), 0x20)
        arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r14 + (rcx_115 << 2)), 0x30)
        int64_t rax_172 = sx.q(temp0_1608)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + (rax_172 << 2)), 0x30)
        zmm3 = var_13c0
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
        void* rax_173 = r14 + (rax_172 << 2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_123 + rax_173), 0x30)
        temp0_1609[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(rcx_125 + rax_173), 0x30)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_126 + rax_173), 0x30)
        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_127 + rax_173), 0x30)
        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1611[0].o, *(r12_27 + rax_173), 0x30)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdx_98 + rax_173), 0xe)
        int64_t rcx_137 = sx.q(rcx_91.d << 2)
        arg12 = _mm256_maskload_ps(arg7, *(arg1 + rcx_137))
        arg8[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        temp0_1611[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
        temp0_1611[0].o ^= arg10[0].o
        zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg10[0].o)
        zmm5[0].o ^= arg10[0].o
        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_1611[0].o)
        zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d8f750)
        zmm0[0].o &= not.o(zmm3[0].o)
        zmm3[0].o = zmm0[0].o & zmm5[0].o
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        uint32_t temp0_1710 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
        
        if (temp0_1710.b != 0)
            int32_t var_1260_3
            var_1260_3.32 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
            int64_t var_1280_2
            var_1280_2.32 = _mm256_insertf128_ps(var_1320_2, zmm1[0].o, 1)
            uint64_t var_f40_2
            var_f40_2.32 = _mm256_insertf128_ps(zmm1, temp0_1609[0].o, 1)
            var_ec0.32 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
            int64_t var_12a0_2
            var_12a0_2.32 = _mm256_insertf128_ps(zmm1, arg13[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg14, arg11[0].o, 1)
            uint64_t var_f80_3
            var_f80_3.32 = zmm0
            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0])
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0])
            uint64_t var_f60_4
            var_f60_4.32 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            float temp0_1721[0x8] = _mm256_maskload_ps(arg7, *(arg2 + rcx_137))
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1721[0].o, 6)
            temp0_1721[0].o = _mm256_extractf128_ps(temp0_1721[0].o, 1)
            temp0_1721[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1721[0].o, 6)
            zmm0 = _mm256_insertf128_ps(zmm1, temp0_1721[0].o, 1)
            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0])
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            var_ee0.o = zmm3[0].o
            temp0_1609[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            temp0_1609[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1609[0].o, 0x1f)
            temp0_1609[0].o = __vpsrad_xmmdq_xmmdq_immb(temp0_1609[0].o, 0x1f)
            arg7 = _mm256_insertf128_ps(zmm1, temp0_1609[0].o, 1)
            zmm0 = _mm256_and_ps(arg7, zmm0)
            int64_t rcx_138 = sx.q(zmm0[0])
            void* r10_33 = arg3 + rcx_138
            zmm1[0].o = *(arg3 + rcx_138)
            int64_t r9_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            void* r13_21 = arg3 + r9_41
            int64_t rcx_140 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int32_t var_1340_3
            var_1340_3.q = arg3 + rcx_140
            int64_t rax_180 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            void* r12_28 = arg3 + rax_180
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int64_t rdx_102 = sx.q(zmm0[0])
            void* r11_34 = arg3 + rdx_102
            temp0_1609[0].o = *(arg3 + rdx_102)
            int64_t rbx_69 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            void* r14_26 = arg3 + rbx_69
            int64_t rsi_85 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t var_1000_3
            var_1000_3.d = temp0_1710
            int32_t temp0_1740 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(arg3 + rbx_69), 0x10)
            void* rbx_70 = arg3 + rsi_85
            int64_t r8_45 = sx.q(temp0_1740)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rsi_85), 0x20)
            temp0_1609[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r8_45), 0x30)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + r9_41), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rcx_140), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rax_180), 0x30)
            void* r9_42 = arg3 + r8_45
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9520)
            uint64_t rax_181 = zx.q(zmm0[0])
            float* r8_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rsi_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm3[0].o = *(rax_181 + r10_33)
            uint64_t rax_182 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm4[0].o = *(zx.q(zmm0[0]) + r11_34)
            uint64_t rdx_105 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rcx_141 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_105 + r14_26), 0x10)
            uint64_t rdx_106 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_141 + rbx_70), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_106 + r9_42), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r8_46 + r13_21), 0x10)
            int64_t r13_22 = var_1340_3.q
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_86 + r13_22), 0x20)
            int32_t var_1360_3
            var_1360_3.q = r12_28
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_182 + r12_28), 0x30)
            var_f20.32 = _mm256_insertf128_ps(zmm1, temp0_1609[0].o, 1)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9540)
            uint64_t rax_183 = zx.q(zmm1[0].d)
            uint64_t r8_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_107 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm4[0].o = *(rax_183 + r10_33)
            float* rax_184 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            temp0_1609[0].o = *(zx.q(zmm1[0].d) + r11_34)
            uint64_t rsi_88 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            float* rcx_142 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            temp0_1609[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(rsi_88 + r14_26), 0x10)
            uint64_t rsi_89 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(rcx_142 + rbx_70), 0x20)
            temp0_1609[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_89 + r9_42), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r8_47 + r13_21), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_107 + r13_22), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_184 + r12_28), 0x30)
            uint64_t var_1220_2
            var_1220_2.32 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423c0)
            uint64_t rax_185 = zx.q(zmm0[0])
            uint64_t r12_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rdx_108 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm3[0].o = *(rax_185 + r10_33)
            uint64_t r8_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm4[0].o = *(zx.q(zmm0[0]) + r11_34)
            uint64_t rsi_91 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rax_186 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_91 + r14_26), 0x10)
            uint64_t rsi_92 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_186 + rbx_70), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_92 + r9_42), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_29 + r13_21), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_108 + r13_22), 0x20)
            int64_t r10_34 = var_1360_3.q
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r8_48 + r10_34), 0x30)
            uint64_t var_1240_3
            var_1240_3.32 = _mm256_insertf128_ps(zmm1, temp0_1609[0].o, 1)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423e0)
            uint64_t rax_187 = zx.q(zmm1[0].d)
            uint64_t r8_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            var_1320_2[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm4[0].o = *(rax_187 + r10_33)
            var_13c0[0] = r10_33
            uint64_t rax_188 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            temp0_1609[0].o = *(zx.q(zmm1[0].d) + r11_34)
            uint64_t rsi_94 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rcx_145 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            temp0_1609[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(rsi_94 + r14_26), 0x10)
            uint64_t rsi_95 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(rcx_145 + rbx_70), 0x20)
            temp0_1609[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_95 + r9_42), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r8_49 + r13_21), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_1320_2[0] i+ r13_22), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_188 + r10_34), 0x30)
            double temp0_1806[0x4] = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442400)
            int32_t* rax_189 = zx.q(zmm0[0])
            var_1320_2[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t r10_35 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_189 + r10_33)
            uint64_t r9_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t r12_31 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rsi_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t rax_190 = zx.q(zmm0[0])
            uint64_t rcx_148 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = *(rax_190 + r11_34)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r12_31 + r14_26), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_96 + rbx_70), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_148 + r9_42), 0x30)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_1320_2[0] + r13_21), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_35 + r13_22), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_43 + r10_34), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442540)
            uint64_t r8_51 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_1823[0x4] = _mm256_insertf128_ps(zmm4, temp0_1609[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t r10_36 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rcx_149 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            uint64_t rsi_97 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rax_192 = zx.q(zmm1[0].d)
            uint64_t r9_44 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_192 + r11_34)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_36 + r14_26), 0x10)
            uint64_t rax_193 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_149 + rbx_70), 0x20)
            temp0_1609[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_97 + r9_42), 0x30)
            double r10_37 = var_13c0[0]
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r10_37)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_51 + r13_21), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_44 + r13_22), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_193 + r10_34), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434b2d00)
            var_1320_2[0] = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_1838[0x4] = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t r8_52 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_111 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_98 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rcx_151 = zx.q(zmm1[0].d)
            uint64_t r9_45 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rcx_151 + r11_34)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_52 + r14_26), 0x10)
            uint64_t rax_196 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_111 + rbx_70), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_98 + r9_42), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r10_37)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_1320_2[0] i+ r13_21), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_45 + r13_22), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_196 + r10_34), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0].32)
            var_1320_2[0] = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            arg14 = _mm256_insertf128_ps(zmm4, temp0_1609[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_154 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_112 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            uint64_t rsi_99 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rax_198 = zx.q(zmm1[0].d)
            uint64_t r9_46 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_198 + r11_34)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_154 + r14_26), 0x10)
            uint64_t rax_199 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_112 + rbx_70), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_99 + r9_42), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r10_37)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_1320_2[0] i+ r13_21), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_46 + r13_22), 0x20)
            temp0_1611[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_199 + r10_34), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[8].32)
            uint64_t r10_38 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            arg10 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_157 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_113 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_100 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rax_200 = zx.q(zmm1[0].d)
            uint64_t r9_47 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_200 + r11_34)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_157 + r14_26), 0x10)
            uint64_t rax_201 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_113 + rbx_70), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_100 + r9_42), 0x30)
            double r13_24 = var_13c0[0]
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r13_24)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_38 + r13_21), 0x10)
            int64_t r11_38 = var_1340_3.q
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_47 + r11_38), 0x20)
            int64_t r10_39 = var_1360_3.q
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_201 + r10_39), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x10].32)
            var_1320_2[0] = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_1883[0x4] = _mm256_insertf128_ps(temp0_1611, zmm4[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_159 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            float* rdx_114 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_101 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rax_203 = zx.q(zmm1[0].d)
            uint64_t r9_48 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_203 + r11_34)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_159 + r14_26), 0x10)
            uint64_t rax_204 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_114 + rbx_70), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_101 + r9_42), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r13_24)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_1320_2[0] i+ r13_21), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_48 + r11_38), 0x20)
            temp0_1611[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_204 + r10_39), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x18].32)
            uint64_t r10_40 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_1898[0x4] = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_162 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            float* rdx_115 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_102 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rax_205 = zx.q(zmm1[0].d)
            uint64_t r9_49 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_205 + r11_34)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_162 + r14_26), 0x10)
            uint64_t rax_206 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_115 + rbx_70), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_102 + r9_42), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r13_24)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_40 + r13_21), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_49 + r11_38), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_206 + r10_39), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x20].32)
            uint64_t r8_56 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_1913[0x4] = _mm256_insertf128_ps(temp0_1611, zmm4[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_164 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_116 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_103 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rax_207 = zx.q(zmm1[0].d)
            uint64_t r9_50 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_207 + r11_34)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_164 + r14_26), 0x10)
            uint64_t rax_208 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_116 + rbx_70), 0x20)
            temp0_1611[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_103 + r9_42), 0x30)
            double rsi_104 = var_13c0[0]
            zmm0[0].o = *(zx.q(zmm0[0]) i+ rsi_104)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_56 + r13_21), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_50 + r11_38), 0x20)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_208 + r10_39), 0x30)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x28].32)
            uint64_t r8_57 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
            double temp0_1928[0x4] = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            uint64_t r13_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            float* rdi_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            float* rcx_166 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            uint64_t rax_209 = zx.q(zmm0[0])
            uint64_t r9_51 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
            zmm0[0].o = *(rax_209 + r11_34)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r13_26 + r14_26), 0x10)
            uint64_t rax_210 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_53 + rbx_70), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_166 + r9_42), 0x30)
            zmm1[0].o = *(zx.q(zmm1[0].d) i+ rsi_104)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_57 + r13_21), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_51 + r11_38), 0x20)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x30].32)
            double temp0_1941[0x4] = _mm256_insertf128_ps(arg9, temp0_1611[0].o, 1)
            temp0_1611[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            float* rdx_118 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 1))
            float* r8_58 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 2))
            float* r9_52 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1611[0].o, 3))
            uint64_t rsi_105 = zx.q(temp0_1611[0])
            int64_t r12_33 = var_1360_3.q
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_210 + r12_33), 0x30)
            temp0_1611[0].o = *(rsi_105 + r11_34)
            temp0_1611[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1611[0].o, *(rdx_118 + r14_26), 0x10)
            int32_t temp0_1948[0x8] = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x38].32)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(temp0_1948[0].o, 1)
            float* rax_211 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            float* r10_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_106 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rcx_168 = zx.q(zmm1[0].d)
            float* rdx_119 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
            zmm1[0].o = *(rcx_168 + r11_34)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_211 + r14_26), 0x10)
            uint64_t r14_29 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
            uint64_t r11_40 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
            temp0_1611[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1611[0].o, *(r8_58 + rbx_70), 0x20)
            char r8_59 = var_1000_3.b
            uint64_t rcx_169 = zx.q(arg6[0].d)
            temp0_1611[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1611[0].o, *(r9_52 + r9_42), 0x30)
            double rax_212 = var_13c0[0]
            arg6[0].o = *(rcx_169 i+ rax_212)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_119 + r13_21), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_42 + rbx_70), 0x20)
            float* rdx_120 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1948[0].o, 1))
            uint64_t r9_53 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1948[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_106 + r9_42), 0x30)
            rbx = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_1948[0].o, 3))
            temp0_1609[0].o = *(zx.q(temp0_1948[0]) i+ rax_212)
            temp0_1609[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(rdx_120 + r13_21), 0x10)
            int64_t rax_213 = var_1340_3.q
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14_29 + rax_213), 0x20)
            temp0_1609[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(r9_53 + rax_213), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_40 + r12_33), 0x30)
            temp0_1609[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1609[0].o, *(rbx + r12_33), 0x30)
            arg5 = _mm256_insertf128_ps(arg6, temp0_1611[0].o, 1)
            double temp0_1972[0x4] = _mm256_insertf128_ps(temp0_1609, zmm1[0].o, 1)
            int32_t var_900[0x8] = var_f20.32
            int32_t var_8e0[0x8] = var_1220_2.32
            int32_t var_8c0[0x8] = var_1240_3.32
            double var_8a0[0x4] = temp0_1806
            double var_880_1[0x4] = temp0_1823
            double var_860_1[0x4] = temp0_1838
            float var_840_1[0x8] = arg14
            float var_820_1[0x8] = arg10
            double var_800_1[0x4] = temp0_1883
            double var_7e0_1[0x4] = temp0_1898
            double var_7c0_1[0x4] = temp0_1913
            double var_7a0_1[0x4] = temp0_1928
            double var_780_1[0x4] = temp0_1941
            float var_760_1[0x8] = zmm0
            int32_t var_740_1[0x8] = arg5
            double var_720_1[0x4] = temp0_1972
            zmm0[0].o = r15[9]
            temp0_1972[0].o = r15[0xd]
            temp0_1898[0].o = r15[2]
            temp0_1948[0].o = r15[3]
            temp0_1913[0].o = r15[6]
            temp0_1928[0].o = r15[0xa]
            arg5[0].o = r15[0xe]
            arg6[0].o = r15[7]
            temp0_1941[0].o = r15[0xb]
            int64_t i_1 = 0
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
            temp0_1972[0].o = _mm_permute_ps(temp0_1972[0].o, 0)
            zmm2 = _mm256_insertf128_ps(temp0_1972, temp0_1972[0].o, 1)
            temp0_1972[0].o = _mm_permute_ps(temp0_1898[0].o, 0)
            double temp0_1978[0x4] = _mm256_insertf128_ps(temp0_1972, temp0_1972[0].o, 1)
            temp0_1972[0].o = _mm_permute_ps(temp0_1913[0].o, 0)
            double temp0_1980[0x4] = _mm256_insertf128_ps(temp0_1972, temp0_1972[0].o, 1)
            temp0_1972[0].o = _mm_permute_ps(temp0_1928[0].o, 0)
            double temp0_1982[0x4] = _mm256_insertf128_ps(temp0_1972, temp0_1972[0].o, 1)
            temp0_1972[0].o = _mm_permute_ps(arg5[0].o, 0)
            arg5 = _mm256_insertf128_ps(temp0_1972, temp0_1972[0].o, 1)
            temp0_1972[0].o = _mm_permute_ps(temp0_1948[0].o, 0)
            arg7 = _mm256_insertf128_ps(temp0_1972, temp0_1972[0].o, 1)
            temp0_1972[0].o = _mm_permute_ps(arg6[0].o, 0)
            double temp0_1988[0x4] = _mm256_insertf128_ps(temp0_1972, temp0_1972[0].o, 1)
            temp0_1972[0].o = _mm_permute_ps(temp0_1941[0].o, 0)
            arg10 = _mm256_insertf128_ps(temp0_1972, temp0_1972[0].o, 1)
            temp0_1806[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_1806[0].o, temp0_1806[0].o)
            
            do
                zmm1 = _mm256_broadcast_ss(*r15)
                arg14 = *(&var_900 + i_1)
                arg13 = *(&var_8e0 + i_1)
                arg12 = *(&var_8c0 + i_1)
                arg6 = *(&var_8a0 + i_1)
                *(&var_1200 + i_1) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, zmm1), temp0_1806), 
                            _mm256_mul_ps(arg13, _mm256_broadcast_ss(r15[4]))), 
                        _mm256_mul_ps(arg12, _mm256_broadcast_ss(r15[8]))), 
                    _mm256_mul_ps(arg6, _mm256_broadcast_ss(r15[0xc])))
                *(&var_11e0 + i_1) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(
                            _mm256_add_ps(_mm256_mul_ps(arg14, _mm256_broadcast_ss(r15[1])), 
                                temp0_1806), 
                            _mm256_mul_ps(arg13, _mm256_broadcast_ss(r15[5]))), 
                        _mm256_mul_ps(arg12, zmm0)), 
                    _mm256_mul_ps(arg6, zmm2))
                *(&var_11c0 + i_1) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, temp0_1978), temp0_1806), 
                            _mm256_mul_ps(arg13, temp0_1980)), 
                        _mm256_mul_ps(arg12, temp0_1982)), 
                    _mm256_mul_ps(arg6, arg5))
                *(&var_11a0 + i_1) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, arg7), temp0_1806), 
                            _mm256_mul_ps(arg13, temp0_1988)), 
                        _mm256_mul_ps(arg12, arg10)), 
                    _mm256_mul_ps(arg6, _mm256_broadcast_ss(r15[0xf])))
                i_1 -= -0x80
            while (i_1 != 0x200)
            
            zmm0 = var_1200
            var_1340_3.32 = zmm0
            zmm2 = var_11e0
            var_1220_2.32 = zmm2
            var_1360_3.32 = var_1180
            void* var_fe0_5
            var_fe0_5.32 = var_1160
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(var_1260_3.32, var_ec0.32)
            arg6 = data_142fc94a0
            zmm1 = _mm256_mul_ps(zmm1, arg6)
            zmm5 = _mm256_mul_ps(zmm1, zmm0)
            arg5 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_1280_2.32, var_12a0_2.32), arg6)
            zmm0 = arg6
            zmm5 = _mm256_add_ps(_mm256_mul_ps(arg5, var_1180), zmm5)
            arg6 = _mm256_mul_ps(zmm1, zmm2)
            arg6 = _mm256_add_ps(_mm256_mul_ps(arg5, var_1160), arg6)
            arg13 = var_11c0
            arg7 = _mm256_mul_ps(zmm1, arg13)
            arg9 = _mm256_add_ps(_mm256_mul_ps(arg5, var_1140), arg7)
            arg14 = var_11a0
            zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm1, arg14), _mm256_mul_ps(arg5, var_1120))
            arg11 = var_f40_2.32
            arg7 = var_f80_3.32
            arg5 = _mm256_mul_ps(_mm256_add_ps(arg11, arg7), zmm0)
            zmm0 = var_1100
            arg8 = _mm256_mul_ps(arg5, zmm0)
            var_13c0 = zmm0
            zmm5 = _mm256_add_ps(zmm5, arg8)
            arg8 = var_10e0
            arg6 = _mm256_add_ps(_mm256_mul_ps(arg5, arg8), arg6)
            arg10 = var_10c0
            zmm2 = _mm256_add_ps(_mm256_mul_ps(arg5, arg10), arg9)
            zmm1 = _mm256_add_ps(zmm1, _mm256_mul_ps(arg5, var_10a0))
            arg5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_1080)
            void* var_13a0_6
            var_13a0_6.32 = arg5
            var_f20.32 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_1060)
            arg6 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_1040)
            void* var_1300_4
            var_1300_4.32 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_1020)
            zmm4 = var_1340_3.32
            var_1200 = zmm4
            zmm5 = var_1220_2.32
            var_11e0 = zmm5
            var_11c0 = arg13
            var_11a0 = arg14
            arg14 = var_1360_3.32
            float var_a00_4[0x8] = arg14
            zmm1 = var_fe0_5.32
            double var_9e0_4[0x4] = zmm1
            double var_9c0_4[0x4] = var_1140
            double var_9a0_4[0x4] = var_1120
            float var_a80_4[0x8] = zmm0
            double var_a60_4[0x4] = arg8
            float var_a40_4[0x8] = arg10
            double var_a20_4[0x4] = var_10a0
            float temp0_2061[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_12a0_2.32, var_1280_2.32)
            zmm2 = _mm256_sub_ps(arg7, arg11)
            arg9 = __vsubps_ymmqq_ymmqq_memqq(var_ec0.32, var_1260_3.32)
            zmm3 = data_142fc94a0
            float temp0_2064[0x8] = _mm256_mul_ps(temp0_2061, zmm3)
            arg9 = _mm256_mul_ps(arg9, zmm3)
            zmm2 = _mm256_mul_ps(zmm2, zmm3)
            int32_t var_980_2[0x8] = arg5
            arg5 = var_f20.32
            int32_t var_960_2[0x8] = arg5
            double var_940_2[0x4] = arg6
            double var_920_2[0x4] = var_1300_4.32
            arg7 = _mm256_mul_ps(arg9, zmm4)
            arg11 = _mm256_mul_ps(arg9, zmm5)
            arg9 = _mm256_mul_ps(arg9, arg13)
            zmm3 = _mm256_mul_ps(temp0_2064, arg14)
            zmm4 = _mm256_mul_ps(temp0_2064, zmm1)
            float temp0_2072[0x8] = _mm256_mul_ps(temp0_2064, var_1140)
            arg12 = data_142fc9320
            zmm1 = _mm256_add_ps(_mm256_and_ps(arg7, arg12), _mm256_and_ps(zmm3, arg12))
            zmm3 = _mm256_add_ps(_mm256_and_ps(arg11, arg12), _mm256_and_ps(zmm4, arg12))
            float temp0_2081[0x8] =
                _mm256_add_ps(_mm256_and_ps(arg9, arg12), _mm256_and_ps(temp0_2072, arg12))
            zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_13c0)
            arg7 = _mm256_mul_ps(zmm2, arg8)
            zmm2 = _mm256_mul_ps(zmm2, arg10)
            zmm1 = _mm256_add_ps(zmm1, _mm256_and_ps(zmm4, arg12))
            zmm3 = _mm256_add_ps(zmm3, _mm256_and_ps(arg7, arg12))
            zmm0 = _mm256_add_ps(temp0_2081, _mm256_and_ps(zmm2, arg12))
            zmm2 = var_13a0_6.32
            arg11 = _mm256_sub_ps(zmm2, zmm1)
            zmm4 = arg5
            arg12 = _mm256_sub_ps(arg5, zmm3)
            arg9 = _mm256_sub_ps(arg6, zmm0)
            zmm1 = _mm256_add_ps(zmm2, zmm1)
            var_13c0 = zmm1
            arg5 = _mm256_add_ps(arg5, zmm3)
            arg6 = _mm256_add_ps(arg6, zmm0)
            zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_aa0_1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm1[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm4[0].o = zmm1[0].o ^ zmm3[0].o
            arg7[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm4[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
            arg7 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            zmm1[0].o &= not.o(var_ee0.o)
            zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            char temp0_2108 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o)
            zmm4[0].o = zx.o(0)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            
            if (temp0_2108 == 0)
                goto label_140352f6a
            
            arg10 = var_b40_1
            arg13 = var_b20_1
            arg14 = var_b00_1
            var_1200 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_b60_1, arg11))
            var_11e0 = _mm256_maskstore_ps(arg7, _mm256_min_ps(arg10, arg12))
            var_11c0 = _mm256_maskstore_ps(arg7, _mm256_min_ps(arg13, arg9))
            var_11a0 = _mm256_maskstore_ps(arg7, __vmaxps_ymmqq_ymmqq_memqq(arg14, var_13c0))
            var_1180 = _mm256_maskstore_ps(arg7, _mm256_max_ps(var_ae0_1, arg5))
            zmm4 = _mm256_max_ps(var_ac0_1, arg6)
            var_1160 = _mm256_maskstore_ps(arg7, zmm4)
            zmm4[0].o = zmm0[0].o & data_142fc92e0
            zmm2[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
            zmm2[0].o ^= zmm3[0].o
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            char temp0_2124 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            
            if ((temp0_2124 & 1) == 0)
                if ((temp0_2124 & 2) != 0)
                    goto label_140352eb8
                
                goto label_14035273a
            
            var_1140[0].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((temp0_2124 & 2) != 0)
            label_140352eb8:
                var_1140[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                zmm4[0].o = zx.o(0)
                
                if ((temp0_2124 & 4) == 0)
                    goto label_140352744
                
                goto label_140352ed0
            
        label_14035273a:
            zmm4[0].o = zx.o(0)
            
            if ((temp0_2124 & 4) == 0)
            label_140352744:
                
                if ((temp0_2124 & 8) != 0)
                    goto label_140352ee4
                
                goto label_14035274d
            
        label_140352ed0:
            var_1140[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((temp0_2124 & 8) != 0)
            label_140352ee4:
                var_1140[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((temp0_2124 & 0x10) == 0)
                    goto label_140352756
                
                goto label_140352ef8
            
        label_14035274d:
            
            if ((temp0_2124 & 0x10) == 0)
            label_140352756:
                
                if ((temp0_2124 & 0x20) != 0)
                    goto label_140352f0c
                
                goto label_14035275f
            
        label_140352ef8:
            var_1140[0]:4.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            
            if ((temp0_2124 & 0x20) != 0)
            label_140352f0c:
                var_1140[0]:5.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                
                if ((temp0_2124 & 0x40) == 0)
                    goto label_140352768
                
                goto label_140352f20
            
        label_14035275f:
            
            if ((temp0_2124 & 0x40) != 0)
            label_140352f20:
                var_1140[0]:6.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
                
                if (temp0_2124 s< 0)
                label_140352f33:
                    var_1140[0]:7.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
                    
                    if (r8_59 == temp0_2108)
                        goto label_140352779
                    
                    goto label_140352f47
            else
            label_140352768:
                
                if (temp0_2124 s< 0)
                    goto label_140352f33
            
            if (r8_59 != temp0_2108)
            label_140352f47:
                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                arg10 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            label_140352f6a:
                arg8 = var_f60_4.32
                zmm0 = _mm256_andnot_ps(arg7, arg8)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm1 = _mm256_xor_ps(arg7, _mm256_cmp_ps(zmm4, zmm4, 0xf))
                    var_1200 = _mm256_maskstore_ps(zmm1, arg11)
                    var_11e0 = _mm256_maskstore_ps(zmm1, arg12)
                    var_11c0 = _mm256_maskstore_ps(zmm1, arg9)
                    var_11a0 = _mm256_maskstore_ps(zmm1, var_13c0)
                    var_1180 = _mm256_maskstore_ps(zmm1, arg5)
                    var_1160 = _mm256_maskstore_ps(zmm1, arg6)
                    char temp0_2252 = _mm256_movemask_ps(zmm1)
                    
                    if ((temp0_2252 & 1) == 0)
                        if ((temp0_2252 & 2) != 0)
                            goto label_140353a50
                        
                        goto label_140352fe2
                    
                    var_1140[0].b = 1
                    
                    if ((temp0_2252 & 2) != 0)
                    label_140353a50:
                        var_1140[0]:1.b = 1
                        
                        if ((temp0_2252 & 4) == 0)
                            goto label_140352fea
                        
                        goto label_140353a60
                    
                label_140352fe2:
                    
                    if ((temp0_2252 & 4) == 0)
                    label_140352fea:
                        
                        if ((temp0_2252 & 8) != 0)
                            goto label_140353a70
                        
                        goto label_140352ff2
                    
                label_140353a60:
                    var_1140[0]:2.b = 1
                    
                    if ((temp0_2252 & 8) != 0)
                    label_140353a70:
                        var_1140[0]:3.b = 1
                        
                        if ((temp0_2252 & 0x10) == 0)
                            goto label_140352ffa
                        
                        goto label_140353a80
                    
                label_140352ff2:
                    
                    if ((temp0_2252 & 0x10) == 0)
                    label_140352ffa:
                        
                        if ((temp0_2252 & 0x20) != 0)
                            goto label_140353a90
                        
                        goto label_140353002
                    
                label_140353a80:
                    var_1140[0]:4.b = 1
                    
                    if ((temp0_2252 & 0x20) != 0)
                    label_140353a90:
                        var_1140[0]:5.b = 1
                        
                        if ((temp0_2252 & 0x40) == 0)
                            goto label_14035300a
                        
                        goto label_140353aa0
                    
                label_140353002:
                    
                    if ((temp0_2252 & 0x40) != 0)
                    label_140353aa0:
                        var_1140[0]:6.b = 1
                        
                        if (temp0_2252 s< 0)
                            var_1140[0]:7.b = 1
                    else
                    label_14035300a:
                        
                        if (temp0_2252 s< 0)
                            var_1140[0]:7.b = 1
                    
                    zmm0 = _mm256_or_ps(arg10, zmm0)
                    _mm256_movemask_ps(zmm0)
                
                zmm1 = var_1200
                zmm2 = var_11e0
                zmm3 = var_11c0
                zmm4 = var_11a0
                zmm5 = var_1180
                arg5 = var_1160
                zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_1140[0])
            else
            label_140352779:
                zmm1 = var_1200
                zmm2 = var_11e0
                zmm3 = var_11c0
                zmm4 = var_11a0
                zmm5 = var_1180
                arg5 = var_1160
                zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_1140[0])
                arg8 = var_f60_4.32
            
            var_b60_1 = _mm256_maskstore_ps(arg8, zmm1)
            var_b40_1 = _mm256_maskstore_ps(arg8, zmm2)
            var_b20_1 = _mm256_maskstore_ps(arg8, zmm3)
            var_b00_1 = _mm256_maskstore_ps(arg8, zmm4)
            var_ae0_1 = _mm256_maskstore_ps(arg8, zmm5)
            var_ac0_1 = _mm256_maskstore_ps(arg8, arg5)
            
            if ((r8_59 & 1) == 0)
                if ((r8_59 & 2) != 0)
                    goto label_140353940
                
                goto label_1403530a0
            
            var_aa0_1[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((r8_59 & 2) != 0)
            label_140353940:
                var_aa0_1[1] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                
                if ((r8_59 & 4) == 0)
                    goto label_1403530a8
                
                goto label_140353953
            
        label_1403530a0:
            
            if ((r8_59 & 4) == 0)
            label_1403530a8:
                
                if ((r8_59 & 8) != 0)
                    goto label_140353966
                
                goto label_1403530b0
            
        label_140353953:
            var_aa0_1[2] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((r8_59 & 8) != 0)
            label_140353966:
                var_aa0_1[3] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((r8_59 & 0x10) == 0)
                    goto label_1403530b8
                
                goto label_140353979
            
        label_1403530b0:
            
            if ((r8_59 & 0x10) == 0)
            label_1403530b8:
                
                if ((r8_59 & 0x20) != 0)
                    goto label_14035398c
                
                goto label_1403530c0
            
        label_140353979:
            var_aa0_1[4] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            
            if ((r8_59 & 0x20) != 0)
            label_14035398c:
                var_aa0_1[5] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                
                if ((r8_59 & 0x40) == 0)
                    goto label_1403530c8
                
                goto label_14035399f
            
        label_1403530c0:
            
            if ((r8_59 & 0x40) != 0)
            label_14035399f:
                var_aa0_1[6] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
                
                if (r8_59 s< 0)
                    var_aa0_1[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
            else
            label_1403530c8:
                
                if (r8_59 s< 0)
                    var_aa0_1[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
    
    arg5 = var_b60_1
    zmm5 = var_b40_1
    zmm4 = var_b20_1
    zmm3 = var_b00_1
    zmm2 = var_ae0_1
    zmm1 = var_ac0_1
    zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_aa0_1)
    i_2 = zx.q(i_5)
    
    if ((i_2.b & 1) == 0)
        if ((i_2.b & 2) != 0)
            goto label_140353491
        
        goto label_140353129
    
    int32_t var_e60_1 = arg5[0]
    float* rsi_108
    
    if ((i_2.b & 2) != 0)
    label_140353491:
        float var_e44_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
        rsi_108 = arg16
        
        if ((i_2.b & 4) == 0)
            goto label_140353136
        
        goto label_1403534ab
    
label_140353129:
    rsi_108 = arg16
    
    if ((i_2.b & 4) == 0)
    label_140353136:
        
        if ((i_2.b & 8) != 0)
            goto label_1403534be
        
        goto label_14035313e
    
label_1403534ab:
    float var_e28_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_1403534be:
        float var_e0c_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_140353146
        
        goto label_1403534d1
    
label_14035313e:
    
    if ((i_2.b & 0x10) == 0)
    label_140353146:
        
        if ((i_2.b & 0x20) != 0)
            goto label_1403534e8
        
        goto label_14035314e
    
label_1403534d1:
    arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    int32_t var_df0_1 = arg6[0].d
    
    if ((i_2.b & 0x20) != 0)
    label_1403534e8:
        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        float var_dd4_1 = __vextractps_memd_xmmdq_immb(arg6[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_140353156
        
        goto label_140353501
    
label_14035314e:
    
    if ((i_2.b & 0x40) == 0)
    label_140353156:
        
        if (i_5.b s< 0)
            goto label_14035351a
        
        goto label_14035315e
    
label_140353501:
    arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    float var_db8_1 = __vextractps_memd_xmmdq_immb(arg6[0].o, 2)
    
    if (i_5.b s< 0)
    label_14035351a:
        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        float var_d9c_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_140353166
        
        goto label_140353533
    
label_14035315e:
    
    if ((i_2.b & 1) == 0)
    label_140353166:
        
        if ((i_2.b & 2) != 0)
            goto label_140353544
        
        goto label_14035316e
    
label_140353533:
    int32_t var_e5c = zmm5[0].d
    
    if ((i_2.b & 2) != 0)
    label_140353544:
        float var_e40_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_140353176
        
        goto label_140353557
    
label_14035316e:
    
    if ((i_2.b & 4) == 0)
    label_140353176:
        
        if ((i_2.b & 8) != 0)
            goto label_14035356a
        
        goto label_14035317e
    
label_140353557:
    float var_e24_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14035356a:
        float var_e08_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_140353186
        
        goto label_14035357d
    
label_14035317e:
    
    if ((i_2.b & 0x10) == 0)
    label_140353186:
        
        if ((i_2.b & 0x20) != 0)
            goto label_140353594
        
        goto label_14035318e
    
label_14035357d:
    arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    int32_t var_dec_1 = arg5[0]
    
    if ((i_2.b & 0x20) != 0)
    label_140353594:
        arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        float var_dd0_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_140353196
        
        goto label_1403535ad
    
label_14035318e:
    
    if ((i_2.b & 0x40) == 0)
    label_140353196:
        
        if (i_5.b s< 0)
            goto label_1403535c6
        
        goto label_14035319e
    
label_1403535ad:
    arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    float var_db4_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
    
    if (i_5.b s< 0)
    label_1403535c6:
        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        float var_d98_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_1403531a6
        
        goto label_1403535df
    
label_14035319e:
    
    if ((i_2.b & 1) == 0)
    label_1403531a6:
        
        if ((i_2.b & 2) != 0)
            goto label_1403535f0
        
        goto label_1403531ae
    
label_1403535df:
    int32_t var_e58 = zmm4[0].d
    
    if ((i_2.b & 2) != 0)
    label_1403535f0:
        float var_e3c_1 = __vextractps_memd_xmmdq_immb(zmm4[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_1403531b6
        
        goto label_140353603
    
label_1403531ae:
    
    if ((i_2.b & 4) == 0)
    label_1403531b6:
        
        if ((i_2.b & 8) != 0)
            goto label_140353616
        
        goto label_1403531be
    
label_140353603:
    float var_e20_1 = __vextractps_memd_xmmdq_immb(zmm4[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_140353616:
        float var_e04_1 = __vextractps_memd_xmmdq_immb(zmm4[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_1403531c6
        
        goto label_140353629
    
label_1403531be:
    
    if ((i_2.b & 0x10) == 0)
    label_1403531c6:
        
        if ((i_2.b & 0x20) != 0)
            goto label_140353640
        
        goto label_1403531ce
    
label_140353629:
    zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
    int32_t var_de8_1 = zmm5[0].d
    
    if ((i_2.b & 0x20) != 0)
    label_140353640:
        zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        float var_dcc_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_1403531d6
        
        goto label_140353659
    
label_1403531ce:
    
    if ((i_2.b & 0x40) == 0)
    label_1403531d6:
        
        if (i_5.b s< 0)
            goto label_140353672
        
        goto label_1403531de
    
label_140353659:
    zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
    float var_db0_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 2)
    
    if (i_5.b s< 0)
    label_140353672:
        zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        float var_d94_1 = __vextractps_memd_xmmdq_immb(zmm4[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_1403531e6
        
        goto label_14035368b
    
label_1403531de:
    
    if ((i_2.b & 1) == 0)
    label_1403531e6:
        
        if ((i_2.b & 2) != 0)
            goto label_14035369c
        
        goto label_1403531ee
    
label_14035368b:
    int32_t var_e54 = zmm3[0].d
    
    if ((i_2.b & 2) != 0)
    label_14035369c:
        float var_e38_1 = __vextractps_memd_xmmdq_immb(zmm3[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_1403531f6
        
        goto label_1403536af
    
label_1403531ee:
    
    if ((i_2.b & 4) == 0)
    label_1403531f6:
        
        if ((i_2.b & 8) != 0)
            goto label_1403536c2
        
        goto label_1403531fe
    
label_1403536af:
    float var_e1c_1 = __vextractps_memd_xmmdq_immb(zmm3[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_1403536c2:
        float var_e00_1 = __vextractps_memd_xmmdq_immb(zmm3[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_140353206
        
        goto label_1403536d5
    
label_1403531fe:
    
    if ((i_2.b & 0x10) == 0)
    label_140353206:
        
        if ((i_2.b & 0x20) != 0)
            goto label_1403536ec
        
        goto label_14035320e
    
label_1403536d5:
    zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    int32_t var_de4_1 = zmm4[0].d
    
    if ((i_2.b & 0x20) != 0)
    label_1403536ec:
        zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        float var_dc8_1 = __vextractps_memd_xmmdq_immb(zmm4[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_140353216
        
        goto label_140353705
    
label_14035320e:
    
    if ((i_2.b & 0x40) == 0)
    label_140353216:
        
        if (i_5.b s< 0)
            goto label_14035371e
        
        goto label_14035321e
    
label_140353705:
    zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    float var_dac_1 = __vextractps_memd_xmmdq_immb(zmm4[0].o, 2)
    
    if (i_5.b s< 0)
    label_14035371e:
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        float var_d90_1 = __vextractps_memd_xmmdq_immb(zmm3[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_140353226
        
        goto label_140353737
    
label_14035321e:
    
    if ((i_2.b & 1) == 0)
    label_140353226:
        
        if ((i_2.b & 2) != 0)
            goto label_140353748
        
        goto label_14035322e
    
label_140353737:
    int32_t var_e50 = zmm2[0]
    
    if ((i_2.b & 2) != 0)
    label_140353748:
        float var_e34_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_140353236
        
        goto label_14035375b
    
label_14035322e:
    
    if ((i_2.b & 4) == 0)
    label_140353236:
        
        if ((i_2.b & 8) != 0)
            goto label_14035376e
        
        goto label_14035323e
    
label_14035375b:
    float var_e18_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14035376e:
        float var_dfc_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_140353246
        
        goto label_140353781
    
label_14035323e:
    
    if ((i_2.b & 0x10) == 0)
    label_140353246:
        
        if ((i_2.b & 0x20) != 0)
            goto label_140353798
        
        goto label_14035324e
    
label_140353781:
    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    int32_t var_de0_1 = zmm3[0].d
    
    if ((i_2.b & 0x20) != 0)
    label_140353798:
        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        float var_dc4_1 = __vextractps_memd_xmmdq_immb(zmm3[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_140353256
        
        goto label_1403537b1
    
label_14035324e:
    
    if ((i_2.b & 0x40) == 0)
    label_140353256:
        
        if (i_5.b s< 0)
            goto label_1403537ca
        
        goto label_14035325e
    
label_1403537b1:
    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    float var_da8_1 = __vextractps_memd_xmmdq_immb(zmm3[0].o, 2)
    
    if (i_5.b s< 0)
    label_1403537ca:
        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        float var_d8c_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_140353266
        
        goto label_1403537e3
    
label_14035325e:
    
    if ((i_2.b & 1) == 0)
    label_140353266:
        
        if ((i_2.b & 2) != 0)
            goto label_1403537f4
        
        goto label_14035326e
    
label_1403537e3:
    int32_t var_e4c = zmm1[0].d
    
    if ((i_2.b & 2) != 0)
    label_1403537f4:
        float var_e30_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_140353276
        
        goto label_140353807
    
label_14035326e:
    
    if ((i_2.b & 4) == 0)
    label_140353276:
        
        if ((i_2.b & 8) != 0)
            goto label_14035381a
        
        goto label_14035327e
    
label_140353807:
    float var_e14_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14035381a:
        float var_df8_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_140353286
        
        goto label_14035382d
    
label_14035327e:
    
    if ((i_2.b & 0x10) == 0)
    label_140353286:
        
        if ((i_2.b & 0x20) != 0)
            goto label_140353844
        
        goto label_14035328e
    
label_14035382d:
    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    int32_t var_ddc_1 = zmm2[0]
    
    if ((i_2.b & 0x20) != 0)
    label_140353844:
        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        float var_dc0_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_140353296
        
        goto label_14035385d
    
label_14035328e:
    
    if ((i_2.b & 0x40) == 0)
    label_140353296:
        
        if (i_5.b s< 0)
            goto label_140353876
        
        goto label_14035329e
    
label_14035385d:
    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    float var_da4_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
    
    if (i_5.b s< 0)
    label_140353876:
        zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        float var_d88_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_1403532a6
        
        goto label_14035388f
    
label_14035329e:
    
    if ((i_2.b & 1) == 0)
    label_1403532a6:
        
        if ((i_2.b & 2) != 0)
            goto label_1403538a2
        
        goto label_1403532ae
    
label_14035388f:
    char var_e48[0x4]
    var_e48[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
    
    if ((i_2.b & 2) != 0)
    label_1403538a2:
        uint8_t var_e2c_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
        
        if ((i_2.b & 4) == 0)
            goto label_1403532b6
        
        goto label_1403538b5
    
label_1403532ae:
    
    if ((i_2.b & 4) == 0)
    label_1403532b6:
        
        if ((i_2.b & 8) != 0)
            goto label_1403538c8
        
        goto label_1403532be
    
label_1403538b5:
    uint8_t var_e10_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
    
    if ((i_2.b & 8) != 0)
    label_1403538c8:
        uint8_t var_df4_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
        
        if ((i_2.b & 0x10) == 0)
            goto label_1403532c6
        
        goto label_1403538db
    
label_1403532be:
    
    if ((i_2.b & 0x10) == 0)
    label_1403532c6:
        
        if ((i_2.b & 0x20) != 0)
            goto label_1403538ee
        
        goto label_1403532ce
    
label_1403538db:
    uint8_t var_dd8_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
    
    if ((i_2.b & 0x20) != 0)
    label_1403538ee:
        uint8_t var_dbc_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
        
        if ((i_2.b & 0x40) == 0)
            goto label_1403532d6
        
        goto label_140353901
    
label_1403532ce:
    
    if ((i_2.b & 0x40) != 0)
    label_140353901:
        uint8_t var_da0_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
        
        if (i_5.b s< 0)
        label_140353914:
            uint8_t var_d84_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
            
            if (i_2 != 0)
                goto label_1403532e5
            
            goto label_1403532f0
    else
    label_1403532d6:
        
        if (i_5.b s< 0)
            goto label_140353914
    
    do
        uint64_t rcx_175
        
        if (i_2 == 0)
        label_1403532f0:
            rcx_175 = 0x40
        else
        label_1403532e5:
            uint64_t rflags_2
            rcx_175, rflags_2 = _bit_scan_forward(i_2)
        
        i_2 &= not.q(1 << (rcx_175 u% 0x40))
        uint64_t rdx_127 = rcx_175 * 0x1c
        rbx.b = rsi_108[6].b
        rcx_175.b = var_e48[rdx_127]
        
        if (rbx.b != 0 && rcx_175.b != 0)
            zmm0[0].o = *(&var_13c0 + rdx_127 + 0x560)
            zmm1[0].o = __vmovsd_xmmdq_memq(*rsi_108)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, rsi_108[2], 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_e5c)[rcx_175 * 7], 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_e58)[rcx_175 * 7], 0x20)
            zmm2[0].o = __vmovsd_xmmdq_memq(*(rsi_108 + 0xc))
            zmm0 = _mm256_min_ps(zmm1, zmm0)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, rsi_108[5], 0x20)
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
            zmm2[0].o = __vmovsd_xmmdq_memq(*(&var_e54 + rdx_127))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, (&var_e4c)[rcx_175 * 7], 0x20)
            zmm2[0].o = _mm_permute_pd(zmm0[0].o, 1)
            zmm3 = _mm256_max_ps(zmm3, zmm4)
            zmm4[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
            zmm5[0].o = _mm_permute_pd(zmm3[0].o, 1)
        else if (rcx_175.b == 0)
            rbx.b = rsi_108[6].b
            zmm5[0].o = rsi_108[5]
            zmm4[0].o = rsi_108[4]
            zmm3[0].o = rsi_108[3]
            zmm2[0].o = rsi_108[2]
            zmm0[0].o = *rsi_108
            zmm1[0].o = rsi_108[1]
        else
            zmm0[0].o = *(&var_13c0 + rdx_127 + 0x560)
            zmm1[0].o = (&var_e5c)[rcx_175 * 7]
            zmm2[0].o = (&var_e58)[rcx_175 * 7]
            zmm3[0].o = (&var_e54)[rcx_175 * 7]
            zmm4[0].o = (&var_e50)[rcx_175 * 7]
            zmm5[0].o = (&var_e4c)[rcx_175 * 7]
            rbx = zx.q(rcx_175.d)
        
        *rsi_108 = zmm0[0]
        rsi_108[1] = zmm1[0].d
        rsi_108[2] = zmm2[0]
        rsi_108[3] = zmm3[0].d
        rsi_108[4] = zmm4[0].d
        rsi_108[5] = zmm5[0].d
        rsi_108[6].b = rbx.b
    while (i_2 != 0)
else
    int32_t rax_5 = ((arg17 s>> 0x1f u>> 0x1d) + arg17) & 0xfffffff8
    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
    double var_ba0_1[0x4] = arg14
    double var_bc0_1[0x4] = arg14
    double var_be0_1[0x4] = arg14
    float var_c00_1[0x8] = arg14
    double var_c20_1[0x4] = arg14
    float var_c40_1[0x8] = arg14
    uint8_t var_b80_1[0x8] = 0
    uint64_t rdi_1 = 0
    
    if (rax_5 s> 0)
        arg9[0].o = zx.o(0)
        arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        
        while (true)
            int64_t rcx_3 = sx.q((rdi_1 << 3).d - rdi_1.d)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg9[0].o, *(r14 + (rcx_3 << 2) + 0x18), 0)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rcx_3 << 2) + 0x34), 2)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rcx_3 << 2) + 0x50), 4)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rcx_3 << 2) + 0x6c), 6)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rcx_3 << 2) + 0x88), 8)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rcx_3 << 2) + 0xa4), 0xa)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rcx_3 << 2) + 0xc0), 0xc)
            zmm0[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14 + (rcx_3 << 2) + 0xdc), 0xe)
            int64_t r8 = sx.q((rdi_1 << 2).d)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, *(arg1 + r8 + 0x10))
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, *(arg1 + r8))
            zmm1[0].o ^= arg10[0].o
            zmm2[0].o ^= arg10[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
            zmm3[0].o = zmm0[0].o & not.o(zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            uint32_t temp0_23 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            
            if (temp0_23.b != 0)
                var_1220.d = temp0_23
                int64_t rdx_4 = sx.q((rdi_1 * 9).d * 3 + rdi_1.d)
                arg6[0].o = *(r14 + rdx_4)
                zmm0[0].o = *(r14 + rdx_4 + 0x1c)
                zmm1[0].o = *(r14 + rdx_4 + 0x38)
                arg5[0].o = *(r14 + rdx_4 + 0x54)
                zmm4[0].o = *(r14 + rdx_4 + 0x70)
                arg7[0].o = *(r14 + rdx_4 + 0x8c)
                arg8[0].o = *(r14 + rdx_4 + 0xa8)
                arg13[0].o = *(r14 + rdx_4 + 0xc4)
                zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm5[0].o = zmm5[0] | zmm1[0] << 0x40
                zmm2[0].o = _mm_permute_ps(arg5[0].o, 0x24)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 8)
                var_1280.32 = zmm2
                zmm2[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                zmm2[0].o = zmm2[0].q | arg8[0] << 0x40
                zmm5[0].o = _mm_permute_ps(arg13[0].o, 0x24)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_1320[0].o = zmm2[0].o
                zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xe5)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x68)
                zmm5[0].o = _mm_permute_ps(arg5[0].o, 0x44)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_12a0.32 = zmm2
                zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xe5)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 2)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 0x68)
                zmm5[0].o = _mm_permute_ps(arg13[0].o, 0x44)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_12e0[0].o = zmm2[0].o
                zmm2[0].o = _mm_permute_ps(arg6[0].o, 0x4e)
                zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xfa)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 2)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0xc)
                zmm5[0].o = _mm_permute_ps(arg5[0].o, 0xa4)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_1300.32 = zmm2
                zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0x4e)
                zmm5[0].o = _mm_permute_ps(arg7[0].o, 0xfa)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 2)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 0xc)
                zmm5[0].o = _mm_permute_ps(arg13[0].o, 0xa4)
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 8)
                var_12c0.o = zmm2[0].o
                zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xe7)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xe8)
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 8)
                var_1240.32 = zmm0
                int64_t rdi_2 = *(r14 + rdx_4 + 0x10)
                zmm0[0].o = zx.o(rdi_2.d)
                int64_t rsi_1 = *(r14 + rdx_4 + 0x2c)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rsi_1.d, 1)
                int64_t rbx_1 = *(r14 + rdx_4 + 0x48)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rbx_1.d, 2)
                int64_t r11_1 = *(r14 + rdx_4 + 0x64)
                int64_t rcx_5 = *(r14 + rdx_4 + 0x80)
                zmm1[0].o = zx.o(rcx_5.d)
                int64_t rax_8 = *(r14 + rdx_4 + 0x9c)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_8.d, 1)
                int64_t r10_1 = *(r14 + rdx_4 + 0xb8)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, r10_1.d, 2)
                int64_t rdx_5 = *(r14 + rdx_4 + 0xd4)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_5.d, 3)
                float var_fa0[0x8]
                var_fa0[0].o = zmm1[0].o
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r11_1.d, 3)
                float var_f00_1[0x8] = zmm0
                zmm0[0].o = *(arg2 + r8)
                zmm1[0].o = *(arg2 + r8 + 0x10)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 6)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 6)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0])
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
                double temp0_72[0x4] = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                zmm1[0].o = zx.o((rcx_5 u>> 0x20).d)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (rax_8 u>> 0x20).d, 1)
                zmm1[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (r10_1 u>> 0x20).d, 2)
                arg10[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, (rdx_5 u>> 0x20).d, 3)
                zmm0 = _mm256_and_ps(temp0_72, zmm0)
                int32_t temp0_77 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
                var_13c0[0].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
                float r14_1 = zmm0[0]
                int32_t temp0_79 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                int32_t temp0_81 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                int32_t temp0_82 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                float r13_1 = zmm0[0]
                int32_t temp0_83 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = zx.o((rdi_2 u>> 0x20).d)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (rsi_1 u>> 0x20).d, 1)
                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (rbx_1 u>> 0x20).d, 2)
                zmm1 = __vandps_ymmqq_ymmqq_memqq(temp0_72, data_142fc9520)
                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                uint64_t rdi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                uint64_t r10_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                uint64_t r12_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                uint64_t rax_10 = zx.q(zmm2[0])
                arg9[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, (r11_1 u>> 0x20).d, 3)
                int64_t rbx_3 = sx.q(r13_1)
                void* r13_2 = arg3 + rbx_3
                int64_t rdx_8 = sx.q(temp0_81)
                zmm0[0].o = *(arg3 + rbx_3)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdx_8), 0x10)
                uint64_t rbx_4 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
                void* rcx_7 = arg3 + rdx_8
                uint64_t rsi_3 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
                zmm2[0].o = *(rax_10 + r13_2)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_4 + rcx_7), 0x10)
                uint64_t rdi_5 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
                uint64_t rdx_9 = zx.q(zmm1[0].d)
                int64_t rcx_8 = sx.q(temp0_82)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rcx_8), 0x20)
                void* rcx_9 = arg3 + rcx_8
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_3 + rcx_9), 0x20)
                zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0xe7)
                int64_t rcx_10 = sx.q(r14_1)
                int64_t r9_2 = sx.q(temp0_77)
                void* r15_2 = arg3 + rcx_10
                zmm4[0].o = *(arg3 + rcx_10)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + r9_2), 0x10)
                void* rax_11 = arg3 + r9_2
                int64_t rcx_11 = sx.q(var_13c0[0].d)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + rcx_11), 0x20)
                void* r9_3 = arg3 + rcx_11
                int64_t r14_2 = sx.q(temp0_79)
                int64_t rcx_12 = sx.q(temp0_83)
                zmm5[0].o = zmm3[0].o
                arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rcx_12), 0x30)
                void* rcx_13 = arg3 + rcx_12
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg3 + r14_2), 0x30)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_1 + rcx_13), 0x30)
                double var_c80_1[0x2] = zmm0[0].o
                int32_t var_1260_1
                var_1260_1.q = rcx_13
                void* r12_2 = arg3 + r14_2
                zmm0[0].o = *(rdx_9 + r15_2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_4 + rax_11), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_3 + r9_3), 0x20)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_5 + r12_2), 0x30)
                int128_t var_ea0
                var_ea0.32 = zmm0
                zmm0[0].o = _mm_permute_ps(arg7[0].o, 0x4e)
                zmm1 = __vandps_ymmqq_ymmqq_memqq(temp0_72, data_142fc9540)
                float* r8_2 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 2)
                zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                uint64_t rdx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                uint64_t rdi_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                float* rsi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                uint64_t rax_12 = zx.q(zmm2[0])
                uint64_t r14_3 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
                zmm2[0].o = *(rax_12 + r13_2)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_10 + rcx_7), 0x10)
                float* rax_13 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_6 + rcx_9), 0x20)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_4 + rcx_13), 0x30)
                float var_ca0[0x8]
                var_ca0[0].o = zmm2[0].o
                zmm1[0].o = *(zx.q(zmm1[0].d) + r15_2)
                r15 = arg15
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_2 + rax_11), 0x10)
                int32_t var_1360
                var_1360.q = rax_11
                var_13c0[0] = r9_3
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14_3 + r9_3), 0x20)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_13 + r12_2), 0x30)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg8[0].o, 0xe8)
                int32_t temp0_125[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_72, data_1434423c0)
                int32_t var_fa8
                var_fa8.q = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_125[0].o, 1))
                zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg13[0].o, 8)
                zmm0[0].o = _mm256_extractf128_ps(temp0_125[0].o, 1)
                uint64_t rdx_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                uint64_t rdi_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                uint64_t rsi_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                uint64_t rax_15 = zx.q(zmm0[0])
                float* r14_4 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_125[0].o, 2))
                zmm0[0].o = *(rax_15 + r13_2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_12 + rcx_7), 0x10)
                uint64_t rax_16 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_125[0].o, 3))
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_7 + rcx_9), 0x20)
                int64_t r8_3 = var_1260_1.q
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_5 + r8_3), 0x30)
                int64_t var_c50
                var_c50.o = zmm0[0].o
                zmm0[0].o = *(zx.q(temp0_125[0]) + r15_2)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_fa8.q + rax_11), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_4 + r9_3), 0x20)
                temp0_125[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_16 + r12_2), 0x30)
                var_1280.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_1280.32, var_1320[0].o, 1)
                zmm0 = __vandps_ymmqq_ymmqq_memqq(temp0_72, data_1434423e0)
                uint64_t r9_4 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
                double temp0_143[0x4] =
                    __vinsertf128_ymmqq_ymmqq_memdq_immb(var_12a0.32, var_12e0[0].o, 1)
                var_12a0.32 = temp0_143
                arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                float* rdx_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                uint64_t rdi_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                uint64_t rsi_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                uint64_t rax_17 = zx.q(arg5[0])
                uint64_t r14_5 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
                arg5[0].o = *(rax_17 + r13_2)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_15 + rcx_7), 0x10)
                uint64_t rax_18 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_8 + rcx_9), 0x20)
                arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rsi_6 + r8_3), 0x30)
                zmm0[0].o = *(zx.q(zmm0[0]) + r15_2)
                int64_t r13_3 = var_1360.q
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_4 + r13_3), 0x10)
                double rdi_9 = var_13c0[0]
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_5 i+ rdi_9), 0x20)
                int32_t var_1340_1
                var_1340_1.q = r12_2
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_18 + r12_2), 0x30)
                var_1320 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_1300.32, var_12c0.o, 1)
                int32_t temp0_157[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_72, data_143442400)
                uint64_t rax_19 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_157[0].o, 1))
                var_1300.32 = _mm256_insertf128_ps(var_1240.32, zmm1[0].o, 1)
                zmm1[0].o = _mm256_extractf128_ps(temp0_157[0].o, 1)
                float* r9_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                uint64_t rdx_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                uint64_t rsi_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                uint64_t rax_20 = zx.q(zmm1[0].d)
                uint64_t r14_6 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_157[0].o, 2))
                zmm1[0].o = *(rax_20 + r13_2)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_5 + rcx_7), 0x10)
                float* rax_21 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_157[0].o, 3))
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_17 + rcx_9), 0x20)
                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_7 + r8_3), 0x30)
                zmm1[0].o = *(zx.q(temp0_157[0]) + r15_2)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_19 + r13_3), 0x10)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14_6 i+ rdi_9), 0x20)
                temp0_157[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_21 + r12_2), 0x30)
                var_12e0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_f00_1, var_fa0[0].o, 1)
                int32_t temp0_173[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_72, data_143442540)
                uint64_t rax_22 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_173[0].o, 1))
                var_fa0 = _mm256_insertf128_ps(arg9, arg10[0].o, 1)
                zmm1[0].o = _mm256_extractf128_ps(temp0_173[0].o, 1)
                float* rdx_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                uint64_t rdi_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                uint64_t rsi_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                uint64_t rax_23 = zx.q(zmm1[0].d)
                uint64_t r14_7 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_173[0].o, 2))
                zmm1[0].o = *(rax_23 + r13_2)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_20 + rcx_7), 0x10)
                uint64_t rax_24 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_173[0].o, 3))
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_10 + rcx_9), 0x20)
                int64_t r10_5 = var_1260_1.q
                arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_8 + r10_5), 0x30)
                zmm1[0].o = *(zx.q(temp0_173[0]) + r15_2)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_22 + r13_3), 0x10)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r14_7 i+ rdi_9), 0x20)
                int64_t rdi_11 = var_1340_1.q
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_24 + rdi_11), 0x30)
                int32_t temp0_188[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_72, data_1434b2d00)
                uint64_t rdx_23 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_188[0].o, 1))
                temp0_143[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                temp0_143[0].o = __vpmovsxwd_xmmdq_xmmq(temp0_143[0])
                uint64_t r14_8 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_188[0].o, 2))
                var_1240.o = zmm5[0].o
                arg10[0].o = __vpmovsxwd_xmmdq_xmmq(zmm5[0])
                var_12c0.32 = _mm256_insertf128_ps(arg10, temp0_143[0].o, 1)
                temp0_143[0].o = _mm256_extractf128_ps(temp0_188[0].o, 1)
                float* r8_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_143[0].o, 1))
                uint64_t rsi_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_143[0].o, 2))
                uint64_t rax_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_143[0].o, 3))
                temp0_143[0].o = *(zx.q(temp0_143[0].d) + r13_2)
                temp0_143[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_143[0].o, *(r8_5 + rcx_7), 0x10)
                uint64_t rbx_7 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_188[0].o, 3))
                temp0_143[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_143[0].o, *(rsi_9 + rcx_9), 0x20)
                int32_t* rsi_10 = zx.q(temp0_188[0])
                temp0_188[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_143[0].o, *(rax_25 + r10_5), 0x30)
                temp0_143[0].o = *(rsi_10 + r15_2)
                int64_t rax_26 = var_1360.q
                temp0_143[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_143[0].o, *(rdx_23 + rax_26), 0x10)
                double rdx_24 = var_13c0[0]
                temp0_143[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_143[0].o, *(r14_8 i+ rdx_24), 0x20)
                float var_f00_2[0x8] = _mm256_insertf128_ps(zmm4, arg11[0].o, 1)
                arg11[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_143[0].o, *(rbx_7 + rdi_11), 0x30)
                zmm3 = __vandps_ymmqq_ymmqq_memqq(temp0_72, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0].32)
                uint64_t r8_6 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1))
                uint64_t r9_7 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2))
                var_c80_1.32 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_ea0.32, var_c80_1, 1)
                zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                uint64_t rbx_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                float* rdi_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                uint64_t rsi_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                zmm4[0].o = *(zx.q(zmm4[0].d) + r13_2)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_8 + rcx_7), 0x10)
                uint64_t rcx_18 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 3))
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_12 + rcx_9), 0x20)
                uint64_t rbx_9 = zx.q(zmm3[0].d)
                arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_11 + r10_5), 0x30)
                zmm3[0].o = *(rbx_9 + r15_2)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r8_6 + rax_26), 0x10)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r9_7 i+ rdx_24), 0x20)
                var_ca0 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm1, var_ca0[0].o, 1)
                int64_t r9_8 = var_1340_1.q
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_18 + r9_8), 0x30)
                zmm0 = __vandps_ymmqq_ymmqq_memqq(temp0_72, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[8].32)
                var_ea0.q = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
                uint64_t rcx_20 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
                zmm2 = __vinsertf128_ymmqq_ymmqq_memdq_immb(temp0_125, var_c50.o, 1)
                int32_t var_e80_2[0x8] = zmm2
                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                float* rdx_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                uint64_t rbx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                uint64_t rdi_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                zmm2[0].o = *(zx.q(zmm2[0]) + r13_2)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_25 + rcx_7), 0x10)
                uint64_t rdx_26 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_10 + rcx_9), 0x20)
                uint64_t rbx_11 = zx.q(zmm0[0])
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdi_13 + r10_5), 0x30)
                zmm0[0].o = *(rbx_11 + r15_2)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_ea0.q + rax_26), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_20 i+ rdx_24), 0x20)
                double temp0_237[0x4] = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_26 + r9_8), 0x30)
                arg6 = __vandps_ymmqq_ymmqq_memqq(temp0_72, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x10].32)
                uint64_t r14_10 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
                uint64_t rcx_21 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
                double temp0_242[0x4] = _mm256_insertf128_ps(temp0_157, arg13[0].o, 1)
                temp0_157[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                uint64_t rdx_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_157[0].o, 1))
                uint64_t rbx_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_157[0].o, 2))
                uint64_t rdi_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_157[0].o, 3))
                temp0_157[0].o = *(zx.q(temp0_157[0]) + r13_2)
                temp0_157[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(rdx_27 + rcx_7), 0x10)
                uint64_t rdx_28 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
                temp0_157[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(rbx_12 + rcx_9), 0x20)
                uint64_t rbx_13 = zx.q(arg6[0].d)
                int64_t r11_9 = var_1260_1.q
                temp0_157[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(rdi_14 + r11_9), 0x30)
                arg6[0].o = *(rbx_13 + r15_2)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14_10 + rax_26), 0x10)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_21 i+ rdx_24), 0x20)
                double temp0_253[0x4] = _mm256_insertf128_ps(zmm1, arg9[0].o, 1)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_28 + r9_8), 0x30)
                arg6 = __vandps_ymmqq_ymmqq_memqq(temp0_72, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x18].32)
                var_ea0.q = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
                uint64_t rcx_23 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
                double temp0_258[0x4] = _mm256_insertf128_ps(arg11, temp0_188[0].o, 1)
                temp0_188[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                uint64_t rdx_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_188[0].o, 1))
                uint64_t rbx_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_188[0].o, 2))
                uint64_t rdi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_188[0].o, 3))
                zmm4[0].o = *(zx.q(temp0_188[0]) + r13_2)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_29 + rcx_7), 0x10)
                uint64_t rdx_30 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_14 + rcx_9), 0x20)
                int32_t* rbx_15 = zx.q(arg6[0].d)
                temp0_188[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdi_15 + r11_9), 0x30)
                zmm4[0].o = *(rbx_15 + r15_2)
                zmm4[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(var_ea0.q + rax_26), 0x10)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_23 i+ rdx_24), 0x20)
                double temp0_269[0x4] = _mm256_insertf128_ps(zmm3, arg10[0].o, 1)
                arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_30 + r9_8), 0x30)
                zmm4 = __vandps_ymmqq_ymmqq_memqq(temp0_72, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x20].32)
                uint64_t r8_8 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 1))
                uint64_t rcx_24 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 2))
                double temp0_274[0x4] = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                uint64_t rdx_31 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                uint64_t rbx_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                uint64_t rdi_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                zmm0[0].o = *(zx.q(zmm0[0]) + r13_2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_31 + rcx_7), 0x10)
                uint64_t rsi_18 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 3))
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_16 + rcx_9), 0x20)
                int32_t* rbx_17 = zx.q(zmm4[0].d)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_16 + r11_9), 0x30)
                zmm2[0].o = *(rbx_17 + r15_2)
                int64_t r12_7 = var_1360.q
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r8_8 + r12_7), 0x10)
                double rdx_32 = var_13c0[0]
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_24 i+ rdx_32), 0x20)
                double temp0_285[0x4] = _mm256_insertf128_ps(zmm1, temp0_157[0].o, 1)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_18 + r9_8), 0x30)
                zmm4 = __vandps_ymmqq_ymmqq_memqq(temp0_72, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x28].32)
                var_ea0.q = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 1))
                uint64_t r8_9 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 2))
                arg7 = _mm256_insertf128_ps(arg10, temp0_188[0].o, 1)
                temp0_157[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                uint64_t rcx_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_157[0].o, 1))
                float* rbx_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_157[0].o, 2))
                uint64_t rdi_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_157[0].o, 3))
                temp0_157[0].o = *(zx.q(temp0_157[0]) + r13_2)
                temp0_157[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(rcx_26 + rcx_7), 0x10)
                uint64_t rcx_27 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 3))
                temp0_157[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(rbx_18 + rcx_9), 0x20)
                int32_t* rbx_19 = zx.q(zmm4[0].d)
                zmm4[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(rdi_17 + r11_9), 0x30)
                temp0_157[0].o = *(rbx_19 + r15_2)
                temp0_157[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(var_ea0.q + r12_7), 0x10)
                temp0_157[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(r8_9 i+ rdx_32), 0x20)
                arg10 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_157[0].o, *(rcx_27 + r9_8), 0x30)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                int32_t temp0_304[0x8] = __vandps_ymmqq_ymmqq_memqq(temp0_72, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x30].32)
                zmm4[0].o = _mm256_extractf128_ps(temp0_304[0].o, 1)
                uint64_t rcx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                uint64_t rax_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                uint64_t r10_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                zmm4[0].o = *(zx.q(zmm4[0].d) + r13_2)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_28 + rcx_7), 0x10)
                arg6 = __vandps_ymmqq_ymmqq_memqq(temp0_72, 
                    (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x38].32)
                zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                float* rcx_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                float* r9_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                uint64_t rsi_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                uint64_t rdi_18 = zx.q(zmm0[0])
                uint64_t rbx_20 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_304[0].o, 1))
                zmm0[0].o = *(rdi_18 + r13_2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_29 + rcx_7), 0x10)
                uint64_t r14_12 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_304[0].o, 2))
                uint64_t r8_10 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_304[0].o, 3))
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_30 + rcx_9), 0x20)
                uint64_t rax_31 = zx.q(temp0_304[0])
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r10_8 + r11_9), 0x30)
                temp0_304[0].o = *(rax_31 + r15_2)
                temp0_304[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_304[0].o, *(rbx_20 + r12_7), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_9 + rcx_9), 0x20)
                uint64_t rax_32 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
                uint64_t rdx_35 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_20 + r11_9), 0x30)
                uint64_t rbx_21 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
                arg6[0].o = *(zx.q(arg6[0].d) + r15_2)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_32 + r12_7), 0x10)
                double rax_33 = var_13c0[0]
                temp0_304[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_304[0].o, *(r14_12 i+ rax_33), 0x20)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_35 i+ rax_33), 0x20)
                int64_t rax_34 = var_1340_1.q
                temp0_304[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(temp0_304[0].o, *(r8_10 + rax_34), 0x30)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_21 + rax_34), 0x30)
                double temp0_332[0x4] = _mm256_insertf128_ps(temp0_304, zmm4[0].o, 1)
                zmm0 = _mm256_insertf128_ps(arg6, zmm0[0].o, 1)
                int32_t var_300[0x8] = var_f00_2
                int32_t var_2e0[0x8] = var_c80_1.32
                int32_t var_2c0[0x8] = var_ca0
                int32_t var_2a0[0x8] = var_e80_2
                double var_280_1[0x4] = temp0_237
                double var_260_1[0x4] = temp0_242
                double var_240_1[0x4] = temp0_253
                double var_220_1[0x4] = temp0_258
                double var_200_1[0x4] = temp0_269
                double var_1e0_1[0x4] = temp0_274
                double var_1c0_1[0x4] = temp0_285
                int32_t var_1a0_1[0x8] = arg7
                float var_180_1[0x8] = arg10
                int32_t var_160_1[0x8] = zmm2
                double var_140_1[0x4] = temp0_332
                float var_120_1[0x8] = zmm0
                arg7[0].o = r15[9]
                zmm2[0].o = zx.o(r15[0xd])
                temp0_274[0].o = zx.o(r15[2])
                temp0_332[0].o = r15[3]
                temp0_237[0].o = r15[6]
                var_e80_2[0].o = r15[0xa]
                arg6[0].o = r15[0xe]
                zmm0[0].o = r15[7]
                temp0_285[0].o = zx.o(r15[0xb])
                
                for (int64_t i_3 = 0; i_3 != 0x200; i_3 -= -0x80)
                    arg12 = _mm256_broadcast_ss(*r15)
                    arg11 = *(&var_300 + i_3)
                    arg10 = *(&var_2e0 + i_3)
                    arg9 = *(&var_2c0 + i_3)
                    arg8 = *(&var_2a0 + i_3)
                    *(&var_1200 + i_3) = _mm256_add_ps(
                        _mm256_add_ps(
                            _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg11, arg12), arg14), 
                                _mm256_mul_ps(arg10, _mm256_broadcast_ss(r15[4]))), 
                            _mm256_mul_ps(arg9, _mm256_broadcast_ss(r15[8]))), 
                        _mm256_mul_ps(arg8, _mm256_broadcast_ss(r15[0xc])))
                    arg12 = _mm256_add_ps(_mm256_mul_ps(arg11, _mm256_broadcast_ss(r15[1])), arg14)
                    arg13 = _mm256_mul_ps(arg10, _mm256_broadcast_ss(r15[5]))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    arg13[0].o = _mm_permute_ps(arg7[0].o, 0)
                    arg13 = _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                    arg13 = _mm256_mul_ps(arg8, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    *(&var_11e0 + i_3) = arg12
                    arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_274[0].o, 0)
                    arg12 = _mm256_add_ps(
                        _mm256_mul_ps(arg11, _mm256_insertf128_ps(arg12, arg12[0].o, 1)), arg14)
                    arg13[0].o = _mm_permute_ps(temp0_237[0].o, 0)
                    arg13 = _mm256_mul_ps(arg10, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    arg13[0].o = _mm_permute_ps(var_e80_2[0].o, 0)
                    arg13 = _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg13, arg13[0].o, 1))
                    arg12 = _mm256_add_ps(arg12, arg13)
                    arg13[0].o = _mm_permute_ps(arg6[0].o, 0)
                    arg12 = _mm256_add_ps(arg12, 
                        _mm256_mul_ps(arg8, _mm256_insertf128_ps(arg13, arg13[0].o, 1)))
                    *(&var_11c0 + i_3) = arg12
                    arg12[0].o = _mm_permute_ps(temp0_332[0].o, 0)
                    double temp0_377[0x4] = _mm256_insertf128_ps(arg12, arg12[0].o, 1)
                    arg11 = _mm256_add_ps(_mm256_mul_ps(arg11, temp0_377), arg14)
                    temp0_377[0].o = _mm_permute_ps(zmm0[0].o, 0)
                    float temp0_383[0x8] = _mm256_add_ps(arg11, 
                        _mm256_mul_ps(arg10, _mm256_insertf128_ps(temp0_377, temp0_377[0].o, 1)))
                    arg11[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_285[0].o, 0)
                    *(&var_11a0 + i_3) = _mm256_add_ps(
                        _mm256_add_ps(temp0_383, 
                            _mm256_mul_ps(arg9, _mm256_insertf128_ps(arg11, arg11[0].o, 1))), 
                        _mm256_mul_ps(arg8, _mm256_broadcast_ss(r15[0xf])))
                
                zmm1 = var_1200
                var_13c0 = zmm1
                zmm2 = var_11e0
                void* var_13a0_1
                var_13a0_1.32 = zmm2
                zmm4 = __vaddps_ymmqq_ymmqq_memqq(var_1300.32, var_1280.32)
                zmm0 = data_142fc94a0
                zmm4 = _mm256_mul_ps(zmm4, zmm0)
                zmm5 = _mm256_mul_ps(zmm4, zmm1)
                arg5 = _mm256_mul_ps(zmm4, zmm2)
                arg6 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_12e0, var_12a0.32), zmm0)
                var_1360.32 = var_1180
                float temp0_398[0x8] = _mm256_add_ps(_mm256_mul_ps(arg6, var_1180), zmm5)
                arg5 = _mm256_add_ps(_mm256_mul_ps(arg6, var_1160), arg5)
                zmm2 = var_11c0
                var_1340_1.32 = zmm2
                arg7 = _mm256_mul_ps(zmm4, zmm2)
                zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm4, var_11a0)
                arg11 = _mm256_add_ps(_mm256_mul_ps(arg6, var_1140), arg7)
                zmm4 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg6, var_1120))
                zmm2 = var_fa0
                arg13 = _mm256_mul_ps(_mm256_add_ps(var_1320, zmm2), zmm0)
                zmm3 = _mm256_add_ps(temp0_398, _mm256_mul_ps(arg13, var_1100))
                arg5 = _mm256_add_ps(_mm256_mul_ps(arg13, var_10e0), arg5)
                float temp0_414[0x8] = _mm256_add_ps(_mm256_mul_ps(arg13, var_10c0), arg11)
                arg13 = _mm256_add_ps(zmm4, _mm256_mul_ps(arg13, var_10a0))
                zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_1080)
                zmm3 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_1060)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_414, var_1040)
                float temp0_420[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg13, var_1020)
                var_1200 = var_1180
                var_11e0 = var_1160
                var_11c0 = var_1140
                var_11a0 = var_1120
                double var_a00_1[0x4] = var_1100
                int32_t var_9e0_1[0x8] = var_10e0
                double var_9c0_1[0x4] = var_10c0
                double var_9a0_1[0x4] = var_10a0
                arg11 = __vsubps_ymmqq_ymmqq_memqq(var_12e0, var_12a0.32)
                arg12 = _mm256_sub_ps(zmm2, var_1320)
                arg13 = __vsubps_ymmqq_ymmqq_memqq(var_1300.32, var_1280.32)
                double var_a80_1[0x4] = zmm4
                double var_a60_1[0x4] = zmm3
                arg14 = zmm3
                int32_t var_a40_1[0x8] = arg5
                float var_a20_1[0x8] = temp0_420
                zmm2 = data_142fc94a0
                float temp0_424[0x8] = _mm256_mul_ps(arg13, zmm2)
                arg13 = __vmulps_ymmqq_ymmqq_memqq(temp0_424, var_13c0)
                zmm1 = __vmulps_ymmqq_ymmqq_memqq(temp0_424, var_13a0_1.32)
                float temp0_427[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_424, var_1340_1.32)
                float temp0_428[0x8] = _mm256_mul_ps(arg11, zmm2)
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(temp0_428, var_1360.32)
                zmm3 = _mm256_mul_ps(temp0_428, var_1160)
                arg9 = _mm256_mul_ps(temp0_428, var_1140)
                arg10 = data_142fc9320
                arg11 = arg10
                arg10 = _mm256_and_ps(arg13, arg10)
                zmm2 = _mm256_add_ps(arg10, _mm256_and_ps(zmm2, arg11))
                zmm1 = _mm256_add_ps(_mm256_and_ps(zmm1, arg11), _mm256_and_ps(zmm3, arg11))
                float temp0_440[0x8] =
                    _mm256_add_ps(_mm256_and_ps(temp0_427, arg11), _mm256_and_ps(arg9, arg11))
                zmm3 = __vmulps_ymmqq_ymmqq_memqq(arg12, data_142fc94a0)
                arg6 = _mm256_mul_ps(zmm3, var_1100)
                arg7 = _mm256_mul_ps(zmm3, var_10e0)
                zmm3 = _mm256_mul_ps(zmm3, var_10c0)
                zmm2 = _mm256_add_ps(zmm2, _mm256_and_ps(arg6, arg11))
                arg6 = _mm256_and_ps(arg7, arg11)
                zmm1 = _mm256_add_ps(zmm1, arg6)
                zmm0 = _mm256_add_ps(temp0_440, _mm256_and_ps(zmm3, arg11))
                arg7 = _mm256_sub_ps(zmm4, zmm2)
                arg8 = _mm256_sub_ps(arg14, zmm1)
                zmm3 = _mm256_sub_ps(arg5, zmm0)
                zmm4 = _mm256_add_ps(zmm4, zmm2)
                zmm5 = _mm256_add_ps(arg14, zmm1)
                arg5 = _mm256_add_ps(arg5, zmm0)
                zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_b80_1)
                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                zmm2[0].o = zmm0[0].o ^ arg10[0].o
                arg6[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
                arg6 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
                zmm2[0].o = zmm0[0].o & not.o(var_1240.o)
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_468 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                char rdx_37
                
                if (temp0_468 == 0)
                    zmm0[0].o = zx.o(0)
                    r14 = arg4
                    rdx_37 = var_1220.b
                    arg11 = var_12c0.32
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    zmm1 = _mm256_andnot_ps(arg6, arg11)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                    label_14034e22c:
                        int32_t temp0_509[0x8] =
                            _mm256_xor_ps(arg6, _mm256_cmp_ps(arg14, arg14, 0xf))
                        var_1200 = _mm256_maskstore_ps(temp0_509, arg7)
                        var_11e0 = _mm256_maskstore_ps(temp0_509, arg8)
                        var_11c0 = _mm256_maskstore_ps(temp0_509, zmm3)
                        var_11a0 = _mm256_maskstore_ps(temp0_509, zmm4)
                        var_1180 = _mm256_maskstore_ps(temp0_509, zmm5)
                        var_1160 = _mm256_maskstore_ps(temp0_509, arg5)
                        char temp0_516 = _mm256_movemask_ps(temp0_509)
                        
                        if ((temp0_516 & 1) == 0)
                            if ((temp0_516 & 2) != 0)
                                goto label_14034cc89
                            
                            goto label_14034e278
                        
                        var_1140[0].b = 1
                        
                        if ((temp0_516 & 2) != 0)
                        label_14034cc89:
                            var_1140[0]:1.b = 1
                            
                            if ((temp0_516 & 4) == 0)
                                goto label_14034e281
                            
                            goto label_14034cc9a
                        
                    label_14034e278:
                        
                        if ((temp0_516 & 4) == 0)
                        label_14034e281:
                            
                            if ((temp0_516 & 8) != 0)
                                goto label_14034ccab
                            
                            goto label_14034e28a
                        
                    label_14034cc9a:
                        var_1140[0]:2.b = 1
                        
                        if ((temp0_516 & 8) != 0)
                        label_14034ccab:
                            var_1140[0]:3.b = 1
                            
                            if ((temp0_516 & 0x10) == 0)
                                goto label_14034e293
                            
                            goto label_14034ccbc
                        
                    label_14034e28a:
                        
                        if ((temp0_516 & 0x10) == 0)
                        label_14034e293:
                            
                            if ((temp0_516 & 0x20) != 0)
                                goto label_14034cccd
                            
                            goto label_14034e29c
                        
                    label_14034ccbc:
                        var_1140[0]:4.b = 1
                        
                        if ((temp0_516 & 0x20) != 0)
                        label_14034cccd:
                            var_1140[0]:5.b = 1
                            
                            if ((temp0_516 & 0x40) == 0)
                                goto label_14034e2a5
                            
                            goto label_14034ccde
                        
                    label_14034e29c:
                        
                        if ((temp0_516 & 0x40) != 0)
                        label_14034ccde:
                            var_1140[0]:6.b = 1
                            
                            if (temp0_516 s< 0)
                                var_1140[0]:7.b = 1
                        else
                        label_14034e2a5:
                            
                            if (temp0_516 s< 0)
                                var_1140[0]:7.b = 1
                        
                        _mm256_movemask_ps(_mm256_or_ps(zmm0, zmm1))
                else
                    arg9 = var_c20_1
                    arg10 = var_c00_1
                    arg12 = var_bc0_1
                    arg13 = var_ba0_1
                    var_1200 = _mm256_maskstore_ps(arg6, _mm256_min_ps(var_c40_1, arg7))
                    float temp0_471[0x8] = _mm256_min_ps(arg9, arg8)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    var_11e0 = _mm256_maskstore_ps(arg6, temp0_471)
                    float temp0_474[0x8] = _mm256_min_ps(arg10, zmm3)
                    arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    var_11c0 = _mm256_maskstore_ps(arg6, temp0_474)
                    var_11a0 = _mm256_maskstore_ps(arg6, _mm256_max_ps(var_be0_1, zmm4))
                    var_1180 = _mm256_maskstore_ps(arg6, _mm256_max_ps(arg12, zmm5))
                    float temp0_481[0x8] = _mm256_max_ps(arg13, arg5)
                    var_1160 = _mm256_maskstore_ps(arg6, temp0_481)
                    temp0_481[0].o = zmm1[0].o & data_142fc92e0
                    temp0_481[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(temp0_481[0].o, arg9[0].o)
                    temp0_481[0].o ^= arg10[0].o
                    temp0_481[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_481[0].o, temp0_481[0].o)
                    char temp0_485 = __vpmovmskb_gpr32d_xmmdq(temp0_481[0].o)
                    r14 = arg4
                    
                    if ((temp0_485 & 1) == 0)
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        
                        if ((temp0_485 & 2) != 0)
                            goto label_14034e158
                        
                        goto label_14034e0ad
                    
                    var_1140[0].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    
                    if ((temp0_485 & 2) != 0)
                    label_14034e158:
                        var_1140[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                        arg11 = var_12c0.32
                        
                        if ((temp0_485 & 4) == 0)
                            goto label_14034e0bc
                        
                        goto label_14034e175
                    
                label_14034e0ad:
                    arg11 = var_12c0.32
                    
                    if ((temp0_485 & 4) == 0)
                    label_14034e0bc:
                        
                        if ((temp0_485 & 8) != 0)
                            goto label_14034e189
                        
                        goto label_14034e0c5
                    
                label_14034e175:
                    var_1140[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
                    
                    if ((temp0_485 & 8) != 0)
                    label_14034e189:
                        var_1140[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                        
                        if ((temp0_485 & 0x10) == 0)
                            goto label_14034e0ce
                        
                        goto label_14034e19d
                    
                label_14034e0c5:
                    
                    if ((temp0_485 & 0x10) == 0)
                    label_14034e0ce:
                        
                        if ((temp0_485 & 0x20) != 0)
                            goto label_14034e1b1
                        
                        goto label_14034e0d7
                    
                label_14034e19d:
                    var_1140[0]:4.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
                    
                    if ((temp0_485 & 0x20) != 0)
                    label_14034e1b1:
                        var_1140[0]:5.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                        
                        if ((temp0_485 & 0x40) == 0)
                            goto label_14034e0e0
                        
                        goto label_14034e1c5
                    
                label_14034e0d7:
                    
                    if ((temp0_485 & 0x40) == 0)
                    label_14034e0e0:
                        
                        if (temp0_485 s< 0)
                            goto label_14034e1d8
                        
                        goto label_14034e0e8
                    
                label_14034e1c5:
                    var_1140[0]:6.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                    
                    if (temp0_485 s>= 0)
                    label_14034e0e8:
                        rdx_37 = var_1220.b
                        
                        if (rdx_37 != temp0_468)
                        label_14034e1f2:
                            temp0_481[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            temp0_481[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_481[0].o, 0x1f)
                            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_481[0].o)
                            temp0_481[0].o = __vpsrad_xmmdq_xmmdq_immb(temp0_481[0].o, 0x1f)
                            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                            zmm0 = _mm256_insertf128_ps(temp0_481, zmm1[0].o, 1)
                            zmm1 = _mm256_andnot_ps(arg6, arg11)
                            
                            if (_mm256_movemask_ps(zmm1) != 0)
                                goto label_14034e22c
                    else
                    label_14034e1d8:
                        var_1140[0]:7.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                        rdx_37 = var_1220.b
                        
                        if (rdx_37 != temp0_468)
                            goto label_14034e1f2
                
                zmm0 = var_1200
                zmm2 = var_11e0
                zmm3 = var_11c0
                zmm4 = var_11a0
                zmm5 = var_1180
                arg5 = var_1160
                zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_1140[0])
                var_c40_1 = _mm256_maskstore_ps(arg11, zmm0)
                var_c20_1 = _mm256_maskstore_ps(arg11, zmm2)
                var_c00_1 = _mm256_maskstore_ps(arg11, zmm3)
                var_be0_1 = _mm256_maskstore_ps(arg11, zmm4)
                var_bc0_1 = _mm256_maskstore_ps(arg11, zmm5)
                var_ba0_1 = _mm256_maskstore_ps(arg11, arg5)
                
                if ((rdx_37 & 1) == 0)
                    if ((rdx_37 & 2) != 0)
                        goto label_14034cbe4
                    
                    goto label_14034e342
                
                var_b80_1[0] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
                
                if ((rdx_37 & 2) != 0)
                label_14034cbe4:
                    var_b80_1[1] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                    
                    if ((rdx_37 & 4) == 0)
                        goto label_14034e34b
                    
                    goto label_14034cbf8
                
            label_14034e342:
                
                if ((rdx_37 & 4) == 0)
                label_14034e34b:
                    
                    if ((rdx_37 & 8) != 0)
                        goto label_14034cc0c
                    
                    goto label_14034e354
                
            label_14034cbf8:
                var_b80_1[2] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
                
                if ((rdx_37 & 8) != 0)
                label_14034cc0c:
                    var_b80_1[3] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                    
                    if ((rdx_37 & 0x10) == 0)
                        goto label_14034e35d
                    
                    goto label_14034cc20
                
            label_14034e354:
                
                if ((rdx_37 & 0x10) == 0)
                label_14034e35d:
                    
                    if ((rdx_37 & 0x20) != 0)
                        goto label_14034cc34
                    
                    goto label_14034e366
                
            label_14034cc20:
                var_b80_1[4] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
                
                if ((rdx_37 & 0x20) != 0)
                label_14034cc34:
                    var_b80_1[5] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                    
                    if ((rdx_37 & 0x40) == 0)
                        goto label_14034e36f
                    
                    goto label_14034cc48
                
            label_14034e366:
                
                if ((rdx_37 & 0x40) != 0)
                label_14034cc48:
                    var_b80_1[6] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                    
                    if (rdx_37 s< 0)
                    label_14034cc5b:
                        var_b80_1[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                        rdi_1 = zx.q(rdi_1.d + 8)
                        
                        if (rdi_1.d s>= rax_5)
                            break
                        
                        continue
                else
                label_14034e36f:
                    
                    if (rdx_37 s< 0)
                        goto label_14034cc5b
            
            rdi_1 = zx.q(rdi_1.d + 8)
            
            if (rdi_1.d s>= rax_5)
                break
    
    if (rdi_1.d s< arg17)
        zmm0[0].o = zx.o(rdi_1.d)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
        zmm2[0].o = zx.o(arg17)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        var_13c0 = zmm2
        arg7 = _mm256_insertf128_ps(zmm2, arg8[0].o, 1)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm0 = _mm256_and_ps(arg7, _mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
        int64_t rcx_34 = sx.q(zmm0[0])
        void* rsi_22 = r14 + (rcx_34 << 2)
        int64_t rdx_38 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int32_t temp0_540 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_541 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        float r9_10 = zmm0[0]
        int32_t temp0_543 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_544 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_545 = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
        zmm2 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9520)
        arg11[0].o = *(zx.q(zmm2[0]) + rsi_22)
        zmm4 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9540)
        arg13[0].o = *(zx.q(zmm4[0].d) + rsi_22)
        arg5 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423c0)
        arg10[0].o = *(zx.q(arg5[0]) + rsi_22)
        arg6 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423e0)
        arg14[0].o = *(zx.q(arg6[0].d) + rsi_22)
        arg9 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442400)
        zmm5[0].o = *(zx.q(arg9[0].d) + rsi_22)
        arg12 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442540)
        zmm0[0].o = zx.o(0)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zx.o(0), *(zx.q(arg12[0].d) + rsi_22), 0)
        void* rax_47 = r14 + (rdx_38 << 2)
        int64_t rdx_39 = sx.q(temp0_540)
        uint64_t rsi_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rsi_23 + rax_47), 0x10)
        uint64_t rsi_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rsi_24 + rax_47), 0x10)
        uint64_t rsi_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rsi_25 + rax_47), 0x10)
        uint64_t rsi_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *(rsi_26 + rax_47), 0x10)
        uint64_t rsi_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_27 + rax_47), 0x10)
        uint8_t* rsi_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rsi_28 + rax_47), 2)
        void* rax_48 = r14 + (rdx_39 << 2)
        int64_t rcx_36 = sx.q(temp0_541)
        uint64_t rsi_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_29 + rax_48), 0x20)
        uint64_t rsi_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rsi_30 + rax_48), 0x20)
        uint64_t rsi_31 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg10[0].o, *(rsi_31 + rax_48), 0x20)
        uint64_t rsi_32 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rsi_32 + rax_48), 0x20)
        uint64_t rsi_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rsi_33 + rax_48), 0x20)
        uint8_t* rsi_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rsi_34 + rax_48), 4)
        void* rax_49 = r14 + (rcx_36 << 2)
        int64_t rsi_35 = sx.q(r9_10)
        uint64_t rcx_37 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_37 + rax_49), 0x30)
        double var_1320_1[0x4] = zmm1
        uint64_t rcx_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg11[0].o, *(rcx_38 + rax_49), 0x30)
        double var_12e0_1[0x4] = zmm1
        uint64_t rcx_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, *(rcx_39 + rax_49), 0x30)
        uint64_t rcx_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rcx_40 + rax_49), 0x30)
        uint64_t rcx_41 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
        arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_41 + rax_49), 0x30)
        uint64_t rcx_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rcx_42 + rax_49), 6)
        void* rax_50 = r14 + (rsi_35 << 2)
        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        uint64_t rdi_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        uint64_t rcx_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        uint64_t rbx_23 = zx.q(zmm1[0].d)
        uint64_t rcx_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = *(rbx_23 + rax_50)
        zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        uint64_t rbx_24 = zx.q(zmm2[0])
        uint64_t r10_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        uint64_t rcx_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
        uint64_t rcx_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
        zmm2[0].o = *(rbx_24 + rax_50)
        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        uint64_t rbx_25 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
        uint64_t r11_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
        uint64_t rcx_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
        zmm4[0].o = *(zx.q(zmm4[0].d) + rax_50)
        zmm5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        uint64_t r12_9 = zx.q(zmm5[0].d)
        uint64_t rdx_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
        uint64_t r9_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
        uint64_t rcx_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
        zmm5[0].o = *(r12_9 + rax_50)
        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
        uint64_t r12_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        uint64_t r8_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        uint64_t rcx_49 = zx.q(arg5[0])
        uint64_t r13_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        arg5[0].o = *(rcx_49 + rax_50)
        arg6[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(zx.q(arg6[0].d) + rax_50), 8)
        int64_t rax_51 = sx.q(temp0_543)
        void* rcx_51 = r14 + (rax_51 << 2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_19 + rcx_51), 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r10_9 + rcx_51), 0x10)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rbx_25 + rcx_51), 0x10)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_40 + rcx_51), 0x10)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r12_10 + rcx_51), 0x10)
        uint8_t* rdx_41 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdx_41 + rcx_51), 0xa)
        int64_t rcx_52 = sx.q(temp0_544)
        void* rdx_42 = r14 + (rcx_52 << 2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_43 + rdx_42), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_45 + rdx_42), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r11_10 + rdx_42), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r9_11 + rdx_42), 0x20)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_11 + rdx_42), 0x20)
        uint8_t* rbx_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rbx_28 + rdx_42), 0xc)
        uint64_t rdx_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        arg6[0].o = *(r14 + (rsi_35 << 2))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + (rax_51 << 2)), 0x10)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + (rcx_52 << 2)), 0x20)
        zmm3[0].o = *(r14 + (rcx_34 << 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r14 + (rdx_38 << 2)), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r14 + (rdx_39 << 2)), 0x20)
        arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r14 + (rcx_36 << 2)), 0x30)
        int64_t rax_56 = sx.q(temp0_545)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r14 + (rax_56 << 2)), 0x30)
        zmm3 = var_13c0
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
        void* rax_57 = r14 + (rax_56 << 2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_44 + rax_57), 0x30)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_46 + rax_57), 0x30)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_47 + rax_57), 0x30)
        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_48 + rax_57), 0x30)
        arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r13_6 + rax_57), 0x30)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdx_43 + rax_57), 0xe)
        int64_t rcx_58 = sx.q(rdi_1.d << 2)
        arg12 = _mm256_maskload_ps(arg7, *(arg1 + rcx_58))
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
            int32_t var_1260_2
            var_1260_2.32 = _mm256_insertf128_ps(arg9, arg6[0].o, 1)
            int64_t var_1280_1
            var_1280_1.32 = _mm256_insertf128_ps(var_1320_1, zmm1[0].o, 1)
            uint64_t var_f40_1
            var_f40_1.32 = _mm256_insertf128_ps(var_12e0_1, zmm2[0].o, 1)
            var_ec0.32 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
            int64_t var_12a0_1
            var_12a0_1.32 = _mm256_insertf128_ps(zmm1, arg13[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg14, arg11[0].o, 1)
            uint64_t var_f80_2
            var_f80_2.32 = zmm0
            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm3[0])
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0x4e)
            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0])
            uint64_t var_1000_2
            var_1000_2.32 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            float temp0_658[0x8] = _mm256_maskload_ps(arg7, *(arg2 + rcx_58))
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_658[0].o, 6)
            temp0_658[0].o = _mm256_extractf128_ps(temp0_658[0].o, 1)
            temp0_658[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_658[0].o, 6)
            zmm0 = _mm256_insertf128_ps(zmm1, temp0_658[0].o, 1)
            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0])
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            uint64_t var_f60_2
            var_f60_2.o = zmm3[0].o
            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
            zmm2[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm2[0].o, 0x1f)
            arg7 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm0 = _mm256_and_ps(arg7, zmm0)
            int64_t rax_63 = sx.q(zmm0[0])
            void* r10_10 = arg3 + rax_63
            zmm1[0].o = *(arg3 + rax_63)
            int64_t r9_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            void* r14_13 = arg3 + r9_12
            int64_t rdi_20 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int32_t var_1340_2
            var_1340_2.q = arg3 + rdi_20
            int64_t rax_66 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            void* r13_7 = arg3 + rax_66
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int64_t rdx_47 = sx.q(zmm0[0])
            void* r11_11 = arg3 + rdx_47
            zmm2[0].o = *(arg3 + rdx_47)
            int64_t rbx_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            void* r12_11 = arg3 + rbx_29
            int64_t rsi_37 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t var_fe0_2
            var_fe0_2.d = temp0_647
            int32_t temp0_677 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg3 + rbx_29), 0x10)
            void* rbx_30 = arg3 + rsi_37
            int64_t r8_14 = sx.q(temp0_677)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rsi_37), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + r8_14), 0x30)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg3 + r9_12), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rdi_20), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg3 + rax_66), 0x30)
            void* r9_13 = arg3 + r8_14
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9520)
            uint64_t rax_67 = zx.q(zmm0[0])
            uint64_t r8_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rsi_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm3[0].o = *(rax_67 + r10_10)
            uint64_t rax_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm4[0].o = *(zx.q(zmm0[0]) + r11_11)
            float* rdx_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rcx_60 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            var_1320_1[0] = r12_11
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rdx_50 + r12_11), 0x10)
            uint64_t rdx_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_60 + rbx_30), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_51 + r9_13), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r8_15 + r14_13), 0x10)
            int64_t r12_12 = var_1340_2.q
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rsi_38 + r12_12), 0x20)
            int32_t var_1360_1
            var_1360_1.q = r13_7
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_68 + r13_7), 0x30)
            var_f20.32 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, data_142fc9540)
            uint64_t rax_69 = zx.q(zmm1[0].d)
            uint64_t r8_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_52 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm4[0].o = *(rax_69 + r10_10)
            float* rax_70 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o = *(zx.q(zmm1[0].d) + r11_11)
            float* rsi_40 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            float* rcx_61 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_40 + r12_11), 0x10)
            uint64_t rsi_41 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_61 + rbx_30), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_41 + r9_13), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r8_16 + r14_13), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_52 + r12_12), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_70 + r13_7), 0x30)
            var_ee0.32 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423c0)
            uint64_t rax_71 = zx.q(zmm0[0])
            uint64_t r8_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rdx_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm3[0].o = *(rax_71 + r10_10)
            uint64_t rax_72 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm4[0].o = *(zx.q(zmm0[0]) + r11_11)
            uint64_t rsi_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rcx_62 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            double r13_8 = var_1320_1[0]
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rsi_43 i+ r13_8), 0x10)
            uint64_t rsi_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_62 + rbx_30), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_44 + r9_13), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r8_17 + r14_13), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_53 + r12_12), 0x20)
            int64_t r10_11 = var_1360_1.q
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_72 + r10_11), 0x30)
            uint64_t var_1220_1
            var_1220_1.32 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434423e0)
            uint64_t rax_73 = zx.q(zmm1[0].d)
            uint64_t r8_18 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            var_12e0_1[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm4[0].o = *(rax_73 + r10_10)
            var_13c0[0] = r10_10
            uint64_t rax_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o = *(zx.q(zmm1[0].d) + r11_11)
            uint64_t rsi_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rcx_64 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_46 i+ r13_8), 0x10)
            uint64_t rsi_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_64 + rbx_30), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_47 + r9_13), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r8_18 + r14_13), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_12e0_1[0] i+ r12_12), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_74 + r10_11), 0x30)
            double temp0_743[0x4] = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442400)
            int32_t* rax_75 = zx.q(zmm0[0])
            var_12e0_1[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t r10_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_75 + r10_10)
            uint64_t r9_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t r14_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rsi_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t rax_76 = zx.q(zmm0[0])
            uint64_t rcx_67 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = *(rax_76 + r11_11)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_14 i+ r13_8), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_48 + rbx_30), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_67 + r9_13), 0x30)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(var_12e0_1[0] + r14_13), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_12 + r12_12), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_14 + r10_11), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_143442540)
            uint64_t r8_20 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_760[0x4] = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t r10_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rcx_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            uint64_t rsi_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rax_78 = zx.q(zmm1[0].d)
            uint64_t r9_15 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_78 + r11_11)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_13 i+ r13_8), 0x10)
            uint64_t rax_79 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_68 + rbx_30), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_49 + r9_13), 0x30)
            double r10_14 = var_13c0[0]
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r10_14)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_20 + r14_13), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_15 + r12_12), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_79 + r10_11), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, data_1434b2d00)
            var_12e0_1[0] = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_775[0x4] = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t r8_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_56 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            uint64_t rsi_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rcx_70 = zx.q(zmm1[0].d)
            uint64_t r9_16 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rcx_70 + r11_11)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_21 i+ r13_8), 0x10)
            uint64_t rax_82 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_56 + rbx_30), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_50 + r9_13), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r10_14)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_12e0_1[0] i+ r14_13), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_16 + r12_12), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_82 + r10_11), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0].32)
            var_12e0_1[0] = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            arg14 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_73 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_57 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            uint64_t rsi_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rax_84 = zx.q(zmm1[0].d)
            uint64_t r9_17 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_84 + r11_11)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_73 i+ r13_8), 0x10)
            uint64_t rax_85 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_57 + rbx_30), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_51 + r9_13), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r10_14)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_12e0_1[0] i+ r14_13), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_17 + r12_12), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_85 + r10_11), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[8].32)
            uint64_t r10_15 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            arg10 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_76 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_58 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_52 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rax_86 = zx.q(zmm1[0].d)
            uint64_t r9_18 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_86 + r11_11)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_76 i+ r13_8), 0x10)
            uint64_t rax_87 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_58 + rbx_30), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_52 + r9_13), 0x30)
            double r12_14 = var_13c0[0]
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r12_14)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_15 + r14_13), 0x10)
            int64_t r11_16 = var_1340_2.q
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_18 + r11_16), 0x20)
            int64_t r10_16 = var_1360_1.q
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_87 + r10_16), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x10].32)
            var_12e0_1[0] = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_820[0x4] = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_78 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_59 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rax_89 = zx.q(zmm1[0].d)
            uint64_t r9_19 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_89 + r11_11)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_78 i+ r13_8), 0x10)
            uint64_t rax_90 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_59 + rbx_30), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_53 + r9_13), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r12_14)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(var_12e0_1[0] i+ r14_13), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_19 + r11_16), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_90 + r10_16), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x18].32)
            uint64_t r10_17 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_835[0x4] = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            uint64_t rcx_81 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            float* rdx_60 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            uint64_t rsi_54 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rax_91 = zx.q(zmm1[0].d)
            uint64_t r9_20 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_91 + r11_11)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_81 i+ r13_8), 0x10)
            uint64_t rax_92 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_60 + rbx_30), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_54 + r9_13), 0x30)
            zmm0[0].o = *(zx.q(zmm0[0]) i+ r12_14)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_17 + r14_13), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_20 + r11_16), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_92 + r10_16), 0x30)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x20].32)
            uint64_t r8_25 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1))
            double temp0_850[0x4] = _mm256_insertf128_ps(arg5, zmm4[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            float* rcx_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            uint64_t rdx_61 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            uint64_t rax_93 = zx.q(zmm1[0].d)
            uint64_t r9_21 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2))
            zmm1[0].o = *(rax_93 + r11_11)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_83 i+ r13_8), 0x10)
            uint64_t rax_94 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_61 + rbx_30), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_55 + r9_13), 0x30)
            double rsi_56 = var_13c0[0]
            zmm0[0].o = *(zx.q(zmm0[0]) i+ rsi_56)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r8_25 + r14_13), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r9_21 + r11_16), 0x20)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_94 + r10_16), 0x30)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x28].32)
            uint64_t r8_26 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1))
            double temp0_865[0x4] = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            uint64_t r12_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rdi_24 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t rcx_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            uint64_t rax_95 = zx.q(zmm0[0])
            uint64_t r9_22 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2))
            zmm0[0].o = *(rax_95 + r11_11)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r12_16 i+ r13_8), 0x10)
            uint64_t rax_96 = zx.q(__vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdi_24 + rbx_30), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_85 + r9_13), 0x30)
            zmm1[0].o = *(zx.q(zmm1[0].d) i+ rsi_56)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r8_26 + r14_13), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r9_22 + r11_16), 0x20)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x30].32)
            double temp0_878[0x4] = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            uint64_t rdx_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            float* r8_27 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            uint64_t r9_23 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            uint64_t rsi_57 = zx.q(arg5[0])
            int64_t r14_16 = var_1360_1.q
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_96 + r14_16), 0x30)
            arg5[0].o = *(rsi_57 + r11_11)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdx_63 i+ r13_8), 0x10)
            int32_t temp0_885[0x8] = __vandps_ymmqq_ymmqq_memqq(arg7, 
                (*        $$$$$$$$((((((((,,,,,,,,000000004444444488888888<<<<<<<<")[0x38].32)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(temp0_885[0].o, 1)
            float* rax_97 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            float* r10_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            float* rsi_58 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int32_t* rcx_87 = zx.q(zmm1[0].d)
            float* rdx_64 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 1))
            zmm1[0].o = *(rcx_87 + r11_11)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_97 i+ r13_8), 0x10)
            uint64_t r13_11 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 2))
            uint64_t r11_18 = zx.q(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r8_27 + rbx_30), 0x20)
            char r8_28 = var_fe0_2.b
            uint64_t rcx_88 = zx.q(arg6[0].d)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r9_23 + r9_13), 0x30)
            double rax_98 = var_13c0[0]
            arg6[0].o = *(rcx_88 i+ rax_98)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_64 + r14_13), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_19 + rbx_30), 0x20)
            float* rdx_65 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_885[0].o, 1))
            uint64_t r9_24 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_885[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rsi_58 + r9_13), 0x30)
            uint64_t rbx_37 = zx.q(__vextractps_gpr32_xmmdq_immb(temp0_885[0].o, 3))
            zmm2[0].o = *(zx.q(temp0_885[0]) i+ rax_98)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_65 + r14_13), 0x10)
            int64_t rax_99 = var_1340_2.q
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r13_11 + rax_99), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r9_24 + rax_99), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_18 + r14_16), 0x30)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_37 + r14_16), 0x30)
            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
            double temp0_909[0x4] = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            int32_t var_500[0x8] = var_f20.32
            int32_t var_4e0[0x8] = var_ee0.32
            int32_t var_4c0[0x8] = var_1220_1.32
            double var_4a0[0x4] = temp0_743
            double var_480_1[0x4] = temp0_760
            double var_460_1[0x4] = temp0_775
            float var_440_1[0x8] = arg14
            float var_420_1[0x8] = arg10
            double var_400_1[0x4] = temp0_820
            double var_3e0_1[0x4] = temp0_835
            double var_3c0_1[0x4] = temp0_850
            double var_3a0_1[0x4] = temp0_865
            double var_380_1[0x4] = temp0_878
            float var_360_1[0x8] = zmm0
            int32_t var_340_1[0x8] = arg5
            double var_320_1[0x4] = temp0_909
            zmm0[0].o = r15[9]
            temp0_909[0].o = r15[0xd]
            temp0_835[0].o = r15[2]
            temp0_885[0].o = r15[3]
            temp0_850[0].o = r15[6]
            temp0_865[0].o = r15[0xa]
            arg5[0].o = r15[0xe]
            arg6[0].o = r15[7]
            temp0_878[0].o = r15[0xb]
            int64_t i_4 = 0
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
            temp0_909[0].o = _mm_permute_ps(temp0_909[0].o, 0)
            zmm2 = _mm256_insertf128_ps(temp0_909, temp0_909[0].o, 1)
            temp0_909[0].o = _mm_permute_ps(temp0_835[0].o, 0)
            double temp0_915[0x4] = _mm256_insertf128_ps(temp0_909, temp0_909[0].o, 1)
            temp0_909[0].o = _mm_permute_ps(temp0_850[0].o, 0)
            double temp0_917[0x4] = _mm256_insertf128_ps(temp0_909, temp0_909[0].o, 1)
            temp0_909[0].o = _mm_permute_ps(temp0_865[0].o, 0)
            double temp0_919[0x4] = _mm256_insertf128_ps(temp0_909, temp0_909[0].o, 1)
            temp0_909[0].o = _mm_permute_ps(arg5[0].o, 0)
            arg5 = _mm256_insertf128_ps(temp0_909, temp0_909[0].o, 1)
            temp0_909[0].o = _mm_permute_ps(temp0_885[0].o, 0)
            arg7 = _mm256_insertf128_ps(temp0_909, temp0_909[0].o, 1)
            temp0_909[0].o = _mm_permute_ps(arg6[0].o, 0)
            double temp0_925[0x4] = _mm256_insertf128_ps(temp0_909, temp0_909[0].o, 1)
            temp0_909[0].o = _mm_permute_ps(temp0_878[0].o, 0)
            arg10 = _mm256_insertf128_ps(temp0_909, temp0_909[0].o, 1)
            temp0_743[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_743[0].o, temp0_743[0].o)
            
            do
                zmm1 = _mm256_broadcast_ss(*r15)
                arg14 = *(&var_500 + i_4)
                arg13 = *(&var_4e0 + i_4)
                arg12 = *(&var_4c0 + i_4)
                arg6 = *(&var_4a0 + i_4)
                *(&var_1200 + i_4) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, zmm1), temp0_743), 
                            _mm256_mul_ps(arg13, _mm256_broadcast_ss(r15[4]))), 
                        _mm256_mul_ps(arg12, _mm256_broadcast_ss(r15[8]))), 
                    _mm256_mul_ps(arg6, _mm256_broadcast_ss(r15[0xc])))
                *(&var_11e0 + i_4) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(
                            _mm256_add_ps(_mm256_mul_ps(arg14, _mm256_broadcast_ss(r15[1])), 
                                temp0_743), 
                            _mm256_mul_ps(arg13, _mm256_broadcast_ss(r15[5]))), 
                        _mm256_mul_ps(arg12, zmm0)), 
                    _mm256_mul_ps(arg6, zmm2))
                *(&var_11c0 + i_4) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, temp0_915), temp0_743), 
                            _mm256_mul_ps(arg13, temp0_917)), 
                        _mm256_mul_ps(arg12, temp0_919)), 
                    _mm256_mul_ps(arg6, arg5))
                *(&var_11a0 + i_4) = _mm256_add_ps(
                    _mm256_add_ps(
                        _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(arg14, arg7), temp0_743), 
                            _mm256_mul_ps(arg13, temp0_925)), 
                        _mm256_mul_ps(arg12, arg10)), 
                    _mm256_mul_ps(arg6, _mm256_broadcast_ss(r15[0xf])))
                i_4 -= -0x80
            while (i_4 != 0x200)
            
            zmm0 = var_1200
            var_1340_2.32 = zmm0
            zmm2 = var_11e0
            var_1220_1.32 = zmm2
            var_1360_1.32 = var_1180
            var_f20.32 = var_1160
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(var_1260_2.32, var_ec0.32)
            arg6 = data_142fc94a0
            zmm1 = _mm256_mul_ps(zmm1, arg6)
            zmm5 = _mm256_mul_ps(zmm1, zmm0)
            arg5 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_1280_1.32, var_12a0_1.32), arg6)
            zmm0 = arg6
            zmm5 = _mm256_add_ps(_mm256_mul_ps(arg5, var_1180), zmm5)
            arg6 = _mm256_mul_ps(zmm1, zmm2)
            arg6 = _mm256_add_ps(_mm256_mul_ps(arg5, var_1160), arg6)
            arg13 = var_11c0
            arg7 = _mm256_mul_ps(zmm1, arg13)
            arg9 = _mm256_add_ps(_mm256_mul_ps(arg5, var_1140), arg7)
            arg14 = var_11a0
            zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm1, arg14), _mm256_mul_ps(arg5, var_1120))
            arg11 = var_f40_1.32
            arg7 = var_f80_2.32
            arg5 = _mm256_mul_ps(_mm256_add_ps(arg11, arg7), zmm0)
            zmm0 = var_1100
            arg8 = _mm256_mul_ps(arg5, zmm0)
            var_13c0 = zmm0
            zmm5 = _mm256_add_ps(zmm5, arg8)
            arg8 = var_10e0
            arg6 = _mm256_add_ps(_mm256_mul_ps(arg5, arg8), arg6)
            arg10 = var_10c0
            zmm2 = _mm256_add_ps(_mm256_mul_ps(arg5, arg10), arg9)
            zmm1 = _mm256_add_ps(zmm1, _mm256_mul_ps(arg5, var_10a0))
            arg5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_1080)
            void* var_13a0_3
            var_13a0_3.32 = arg5
            var_ee0.32 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_1060)
            arg6 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_1040)
            void* var_1300_2
            var_1300_2.32 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_1020)
            zmm4 = var_1340_2.32
            var_1200 = zmm4
            zmm5 = var_1220_1.32
            var_11e0 = zmm5
            var_11c0 = arg13
            var_11a0 = arg14
            arg14 = var_1360_1.32
            float var_a00_2[0x8] = arg14
            zmm1 = var_f20.32
            double var_9e0_2[0x4] = zmm1
            double var_9c0_2[0x4] = var_1140
            double var_9a0_2[0x4] = var_1120
            float var_a80_2[0x8] = zmm0
            double var_a60_2[0x4] = arg8
            float var_a40_2[0x8] = arg10
            double var_a20_2[0x4] = var_10a0
            float temp0_998[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_12a0_1.32, var_1280_1.32)
            zmm2 = _mm256_sub_ps(arg7, arg11)
            arg9 = __vsubps_ymmqq_ymmqq_memqq(var_ec0.32, var_1260_2.32)
            zmm3 = data_142fc94a0
            float temp0_1001[0x8] = _mm256_mul_ps(temp0_998, zmm3)
            arg9 = _mm256_mul_ps(arg9, zmm3)
            zmm2 = _mm256_mul_ps(zmm2, zmm3)
            int32_t var_980_1[0x8] = arg5
            arg5 = var_ee0.32
            int32_t var_960_1[0x8] = arg5
            double var_940_1[0x4] = arg6
            double var_920_1[0x4] = var_1300_2.32
            arg7 = _mm256_mul_ps(arg9, zmm4)
            arg11 = _mm256_mul_ps(arg9, zmm5)
            arg9 = _mm256_mul_ps(arg9, arg13)
            zmm3 = _mm256_mul_ps(temp0_1001, arg14)
            zmm4 = _mm256_mul_ps(temp0_1001, zmm1)
            float temp0_1009[0x8] = _mm256_mul_ps(temp0_1001, var_1140)
            arg12 = data_142fc9320
            zmm1 = _mm256_add_ps(_mm256_and_ps(arg7, arg12), _mm256_and_ps(zmm3, arg12))
            zmm3 = _mm256_add_ps(_mm256_and_ps(arg11, arg12), _mm256_and_ps(zmm4, arg12))
            float temp0_1018[0x8] =
                _mm256_add_ps(_mm256_and_ps(arg9, arg12), _mm256_and_ps(temp0_1009, arg12))
            zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_13c0)
            arg7 = _mm256_mul_ps(zmm2, arg8)
            zmm2 = _mm256_mul_ps(zmm2, arg10)
            zmm1 = _mm256_add_ps(zmm1, _mm256_and_ps(zmm4, arg12))
            zmm3 = _mm256_add_ps(zmm3, _mm256_and_ps(arg7, arg12))
            zmm0 = _mm256_add_ps(temp0_1018, _mm256_and_ps(zmm2, arg12))
            zmm2 = var_13a0_3.32
            arg11 = _mm256_sub_ps(zmm2, zmm1)
            zmm4 = arg5
            arg12 = _mm256_sub_ps(arg5, zmm3)
            arg9 = _mm256_sub_ps(arg6, zmm0)
            zmm1 = _mm256_add_ps(zmm2, zmm1)
            var_13c0 = zmm1
            arg5 = _mm256_add_ps(arg5, zmm3)
            arg6 = _mm256_add_ps(arg6, zmm0)
            zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_b80_1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm1[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm4[0].o = zmm1[0].o ^ zmm3[0].o
            arg7[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm4[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
            arg7 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            zmm1[0].o &= not.o(var_f60_2.o)
            zmm4[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm4[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm4[0].o, 0xf)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            char temp0_1045 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o)
            zmm4[0].o = zx.o(0)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            
            if (temp0_1045 == 0)
                goto label_14035288d
            
            arg10 = var_c20_1
            arg13 = var_c00_1
            arg14 = var_be0_1
            var_1200 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_c40_1, arg11))
            var_11e0 = _mm256_maskstore_ps(arg7, _mm256_min_ps(arg10, arg12))
            var_11c0 = _mm256_maskstore_ps(arg7, _mm256_min_ps(arg13, arg9))
            var_11a0 = _mm256_maskstore_ps(arg7, __vmaxps_ymmqq_ymmqq_memqq(arg14, var_13c0))
            var_1180 = _mm256_maskstore_ps(arg7, _mm256_max_ps(var_bc0_1, arg5))
            zmm4 = _mm256_max_ps(var_ba0_1, arg6)
            var_1160 = _mm256_maskstore_ps(arg7, zmm4)
            zmm4[0].o = zmm0[0].o & data_142fc92e0
            zmm2[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
            zmm2[0].o ^= zmm3[0].o
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            char temp0_1061 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            
            if ((temp0_1061 & 1) == 0)
                if ((temp0_1061 & 2) != 0)
                    goto label_1403527db
                
                goto label_14034f90a
            
            var_1140[0].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((temp0_1061 & 2) != 0)
            label_1403527db:
                var_1140[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                zmm4[0].o = zx.o(0)
                
                if ((temp0_1061 & 4) == 0)
                    goto label_14034f914
                
                goto label_1403527f3
            
        label_14034f90a:
            zmm4[0].o = zx.o(0)
            
            if ((temp0_1061 & 4) == 0)
            label_14034f914:
                
                if ((temp0_1061 & 8) != 0)
                    goto label_140352807
                
                goto label_14034f91d
            
        label_1403527f3:
            var_1140[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((temp0_1061 & 8) != 0)
            label_140352807:
                var_1140[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((temp0_1061 & 0x10) == 0)
                    goto label_14034f926
                
                goto label_14035281b
            
        label_14034f91d:
            
            if ((temp0_1061 & 0x10) == 0)
            label_14034f926:
                
                if ((temp0_1061 & 0x20) != 0)
                    goto label_14035282f
                
                goto label_14034f92f
            
        label_14035281b:
            var_1140[0]:4.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            
            if ((temp0_1061 & 0x20) != 0)
            label_14035282f:
                var_1140[0]:5.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                
                if ((temp0_1061 & 0x40) == 0)
                    goto label_14034f938
                
                goto label_140352843
            
        label_14034f92f:
            
            if ((temp0_1061 & 0x40) != 0)
            label_140352843:
                var_1140[0]:6.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
                
                if (temp0_1061 s< 0)
                label_140352856:
                    var_1140[0]:7.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
                    
                    if (r8_28 == temp0_1045)
                        goto label_14034f949
                    
                    goto label_14035286a
            else
            label_14034f938:
                
                if (temp0_1061 s< 0)
                    goto label_140352856
            
            if (r8_28 != temp0_1045)
            label_14035286a:
                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0])
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                arg10 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            label_14035288d:
                arg8 = var_1000_2.32
                zmm0 = _mm256_andnot_ps(arg7, arg8)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm1 = _mm256_xor_ps(arg7, _mm256_cmp_ps(zmm4, zmm4, 0xf))
                    var_1200 = _mm256_maskstore_ps(zmm1, arg11)
                    var_11e0 = _mm256_maskstore_ps(zmm1, arg12)
                    var_11c0 = _mm256_maskstore_ps(zmm1, arg9)
                    var_11a0 = _mm256_maskstore_ps(zmm1, var_13c0)
                    var_1180 = _mm256_maskstore_ps(zmm1, arg5)
                    var_1160 = _mm256_maskstore_ps(zmm1, arg6)
                    char temp0_2151 = _mm256_movemask_ps(zmm1)
                    
                    if ((temp0_2151 & 1) == 0)
                        if ((temp0_2151 & 2) != 0)
                            goto label_1403539d3
                        
                        goto label_140352905
                    
                    var_1140[0].b = 1
                    
                    if ((temp0_2151 & 2) != 0)
                    label_1403539d3:
                        var_1140[0]:1.b = 1
                        
                        if ((temp0_2151 & 4) == 0)
                            goto label_14035290d
                        
                        goto label_1403539e3
                    
                label_140352905:
                    
                    if ((temp0_2151 & 4) == 0)
                    label_14035290d:
                        
                        if ((temp0_2151 & 8) != 0)
                            goto label_1403539f3
                        
                        goto label_140352915
                    
                label_1403539e3:
                    var_1140[0]:2.b = 1
                    
                    if ((temp0_2151 & 8) != 0)
                    label_1403539f3:
                        var_1140[0]:3.b = 1
                        
                        if ((temp0_2151 & 0x10) == 0)
                            goto label_14035291d
                        
                        goto label_140353a03
                    
                label_140352915:
                    
                    if ((temp0_2151 & 0x10) == 0)
                    label_14035291d:
                        
                        if ((temp0_2151 & 0x20) != 0)
                            goto label_140353a13
                        
                        goto label_140352925
                    
                label_140353a03:
                    var_1140[0]:4.b = 1
                    
                    if ((temp0_2151 & 0x20) != 0)
                    label_140353a13:
                        var_1140[0]:5.b = 1
                        
                        if ((temp0_2151 & 0x40) == 0)
                            goto label_14035292d
                        
                        goto label_140353a23
                    
                label_140352925:
                    
                    if ((temp0_2151 & 0x40) != 0)
                    label_140353a23:
                        var_1140[0]:6.b = 1
                        
                        if (temp0_2151 s< 0)
                            var_1140[0]:7.b = 1
                    else
                    label_14035292d:
                        
                        if (temp0_2151 s< 0)
                            var_1140[0]:7.b = 1
                    
                    zmm0 = _mm256_or_ps(arg10, zmm0)
                    _mm256_movemask_ps(zmm0)
                
                zmm1 = var_1200
                zmm2 = var_11e0
                zmm3 = var_11c0
                zmm4 = var_11a0
                zmm5 = var_1180
                arg5 = var_1160
                zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_1140[0])
            else
            label_14034f949:
                zmm1 = var_1200
                zmm2 = var_11e0
                zmm3 = var_11c0
                zmm4 = var_11a0
                zmm5 = var_1180
                arg5 = var_1160
                zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_1140[0])
                arg8 = var_1000_2.32
            
            var_c40_1 = _mm256_maskstore_ps(arg8, zmm1)
            var_c20_1 = _mm256_maskstore_ps(arg8, zmm2)
            var_c00_1 = _mm256_maskstore_ps(arg8, zmm3)
            var_be0_1 = _mm256_maskstore_ps(arg8, zmm4)
            var_bc0_1 = _mm256_maskstore_ps(arg8, zmm5)
            var_ba0_1 = _mm256_maskstore_ps(arg8, arg5)
            
            if ((r8_28 & 1) == 0)
                if ((r8_28 & 2) != 0)
                    goto label_140352e21
                
                goto label_1403529c3
            
            var_b80_1[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((r8_28 & 2) != 0)
            label_140352e21:
                var_b80_1[1] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                
                if ((r8_28 & 4) == 0)
                    goto label_1403529cb
                
                goto label_140352e34
            
        label_1403529c3:
            
            if ((r8_28 & 4) == 0)
            label_1403529cb:
                
                if ((r8_28 & 8) != 0)
                    goto label_140352e47
                
                goto label_1403529d3
            
        label_140352e34:
            var_b80_1[2] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((r8_28 & 8) != 0)
            label_140352e47:
                var_b80_1[3] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((r8_28 & 0x10) == 0)
                    goto label_1403529db
                
                goto label_140352e5a
            
        label_1403529d3:
            
            if ((r8_28 & 0x10) == 0)
            label_1403529db:
                
                if ((r8_28 & 0x20) != 0)
                    goto label_140352e6d
                
                goto label_1403529e3
            
        label_140352e5a:
            var_b80_1[4] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            
            if ((r8_28 & 0x20) != 0)
            label_140352e6d:
                var_b80_1[5] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                
                if ((r8_28 & 0x40) == 0)
                    goto label_1403529eb
                
                goto label_140352e80
            
        label_1403529e3:
            
            if ((r8_28 & 0x40) != 0)
            label_140352e80:
                var_b80_1[6] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
                
                if (r8_28 s< 0)
                    var_b80_1[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
            else
            label_1403529eb:
                
                if (r8_28 s< 0)
                    var_b80_1[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
    
    zmm0[0].o = var_c40_1[0].o
    float var_d80_1 = zmm0[0]
    float var_d64_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_d48_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    zmm1[0].o = var_c40_1[4].o
    float var_d2c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    int32_t var_d10_1 = zmm1[0].d
    float var_cf4_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_cd8_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0[0].o = var_c20_1[0].o
    float var_cbc_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
    float var_d7c = zmm0[0]
    float var_d60_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_d44_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    zmm1[0].o = var_c20_1[2].o
    float var_d28_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    int32_t var_d0c_1 = zmm1[0].d
    float var_cf0_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_cd4_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    float var_cb8_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
    zmm0[0].o = var_c00_1[0].o
    float var_d78 = zmm0[0]
    float var_d5c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_d40_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    zmm1[0].o = var_c00_1[4].o
    float var_d24_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    int32_t var_d08_1 = zmm1[0].d
    float var_cec_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_cd0_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0[0].o = var_be0_1[0].o
    float var_cb4_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
    float var_d74 = zmm0[0]
    float var_d58_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_d3c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    zmm1[0].o = var_be0_1[2].o
    float var_d20_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    int32_t var_d04_1 = zmm1[0].d
    float var_ce8_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_ccc_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0[0].o = var_bc0_1[0].o
    float var_cb0_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
    float var_d70 = zmm0[0]
    float var_d54_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_d38_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    zmm1[0].o = var_bc0_1[2].o
    float var_d1c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    int32_t var_d00_1 = zmm1[0].d
    float var_ce4_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_cc8_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0[0].o = var_ba0_1[0].o
    float var_cac_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
    float var_d6c = zmm0[0]
    float var_d50_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_d34_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    zmm1[0].o = var_ba0_1[2].o
    float var_d18_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    int32_t var_cfc_1 = zmm1[0].d
    float var_ce0_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_cc4_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    float var_ca8_1 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 3)
    zmm0[0].o = zx.o(var_b80_1)
    char var_d68[0x4]
    var_d68[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
    uint8_t var_d4c_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 1)
    uint8_t var_d30_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
    uint8_t var_d14_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 3)
    uint8_t var_cf8_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
    uint8_t var_cdc_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 5)
    uint8_t var_cc0_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
    uint8_t var_ca4_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 7)
    
    for (i_2 = 0xff; i_2 != 0; )
        uint64_t rcx_172
        uint64_t rflags_1
        
        if (i_2 == 0)
            rcx_172 = 0x40
        else
            rcx_172, rflags_1 = _bit_scan_forward(i_2)
        i_2 &= not.q(1 << (rcx_172 u% 0x40))
        uint64_t rdx_124 = rcx_172 * 0x1c
        char rbx_77 = arg16[3].b
        char rcx_173 = var_d68[rdx_124]
        
        if (rbx_77 != 0 && rcx_173 != 0)
            zmm0[0].o = *(&var_13c0 + rdx_124 + 0x640)
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg16)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg16[1].d, 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_d7c)[rcx_172 * 7], 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_d78)[rcx_172 * 7], 0x20)
            zmm2[0].o = __vmovsd_xmmdq_memq(*(arg16 + 0xc))
            zmm0 = _mm256_min_ps(zmm1, zmm0)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg16 + 0x14), 0x20)
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
            zmm2[0].o = __vmovsd_xmmdq_memq(*(&var_d74 + rdx_124))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, (&var_d6c)[rcx_172 * 7], 0x20)
            zmm2[0].o = _mm_permute_pd(zmm0[0].o, 1)
            zmm3 = _mm256_max_ps(zmm3, zmm4)
            zmm4[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
            zmm5[0].o = _mm_permute_pd(zmm3[0].o, 1)
        else if (rcx_173 == 0)
            rbx_77 = arg16[3].b
            zmm5[0].o = *(arg16 + 0x14)
            zmm4[0].o = arg16[2].d
            zmm3[0].o = *(arg16 + 0xc)
            zmm2[0].o = arg16[1].d
            zmm0[0].o = *arg16
            zmm1[0].o = *(arg16 + 4)
        else
            zmm0[0].o = *(&var_13c0 + rdx_124 + 0x640)
            zmm1[0].o = (&var_d7c)[rcx_172 * 7]
            zmm2[0].o = (&var_d78)[rcx_172 * 7]
            zmm3[0].o = (&var_d74)[rcx_172 * 7]
            zmm4[0].o = (&var_d70)[rcx_172 * 7]
            zmm5[0].o = (&var_d6c)[rcx_172 * 7]
            rbx_77 = rcx_173
        
        *arg16 = zmm0[0]
        *(arg16 + 4) = zmm1[0].d
        arg16[1].d = zmm2[0]
        *(arg16 + 0xc) = zmm3[0].d
        arg16[2].d = zmm4[0].d
        *(arg16 + 0x14) = zmm5[0].d
        arg16[3].b = rbx_77
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
return i_2
