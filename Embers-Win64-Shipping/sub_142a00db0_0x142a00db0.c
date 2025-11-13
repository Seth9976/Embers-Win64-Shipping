// 函数: sub_142a00db0
// 地址: 0x142a00db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x11d0)
int128_t var_38 = arg4[0].o
int128_t var_48 = arg5[0].o
int128_t var_58 = arg6[0].o
int128_t var_68 = arg7[0].o
int128_t var_78 = arg8[0].o
int128_t var_88 = arg9[0].o
int128_t var_a8 = arg10[0].o
void var_11f8
int64_t rax_1 = __security_cookie ^ &var_11f8
int16_t zmm12[0x10] = *"A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-"
int32_t zmm14[0x8] = data_1435fff60
int64_t r15 = sx.q(arg3)
int64_t i_1 = 2
void var_8e0
void* r13 = &var_8e0 - arg2
void* rcx = arg2 + 0x200
void* var_e00 = rcx
void var_860
void* result = arg1 - &var_860
int32_t r8 = (r15 * 2).d
int32_t r9 = r8 + r15.d
void* result_1 = result
int64_t rsi = 0
int16_t zmm15[0x10]
zmm15[0].o = zx.o(0)
int16_t temp0_715[0x10]
int64_t i

do
    void* rdi_1 = &var_860
    void* r14_1 = rcx
    int64_t j_1 = 2
    int64_t j
    
    do
        int16_t var_11c0_1[0x10]
        int16_t var_11a0_1[0x10]
        int16_t var_1180_1[0x10]
        int16_t var_1140_1[0x10]
        int16_t var_1120_1[0x10]
        int16_t var_1100_1[0x10]
        int16_t var_10e0_1[0x10]
        int16_t var_10c0_1[0x10]
        int16_t var_10a0_1[0x10]
        int16_t var_1080_1[0x10]
        int16_t var_1060_1[0x10]
        int16_t var_1040_1[0x10]
        int16_t var_1020_1[0x10]
        int16_t var_1000_1[0x10]
        int16_t var_fe0_1[0x10]
        int16_t var_fc0_1[0x10]
        int16_t var_fa0_1[0x10]
        int16_t var_f80_1[0x10]
        int16_t var_f40_1[0x10]
        int16_t var_ea0_1[0x10]
        int16_t var_e80_1[0x10]
        int16_t var_e60_1[0x10]
        int16_t var_e40_1[0x10]
        int16_t var_de0_1[0x10]
        int16_t var_d80_1[0x10]
        int16_t var_d20_1[0x10]
        int16_t zmm0[0x10]
        int16_t zmm1[0x10]
        int16_t zmm2[0x10]
        int16_t zmm3[0x10]
        int16_t zmm4[0x10]
        int16_t zmm5[0x10]
        
        if (rsi != 0)
            arg5 = *(rdi_1 - 0x80)
            arg4 = *(rdi_1 - 0x40)
            zmm5 = *rdi_1
            zmm4 = *(rdi_1 + 0x40)
            zmm0 = *(rdi_1 + 0x740)
            zmm1 = *(rdi_1 + 0x700)
            zmm2 = *(rdi_1 + 0x6c0)
            zmm3 = *(rdi_1 + 0x680)
            arg8 = _mm256_add_epi16(zmm2, zmm5)
            int16_t temp0_66[0x10] = _mm256_sub_epi16(zmm5, zmm2)
            zmm5 = *(rdi_1 + 0x100)
            arg7 = _mm256_add_epi16(zmm1, arg4)
            int16_t temp0_68[0x10] = _mm256_sub_epi16(arg4, zmm1)
            arg4 = *(rdi_1 + 0xc0)
            arg9 = _mm256_add_epi16(zmm3, zmm4)
            int16_t temp0_70[0x10] = _mm256_sub_epi16(zmm4, zmm3)
            zmm4 = *(rdi_1 + 0x140)
            arg6 = _mm256_add_epi16(zmm0, arg5)
            int16_t temp0_72[0x10] = _mm256_sub_epi16(arg5, zmm0)
            arg5 = *(rdi_1 + 0x80)
            var_ea0_1 = temp0_66
            zmm2 = *(rdi_1 + 0x5c0)
            var_e40_1 = temp0_68
            zmm1 = *(rdi_1 + 0x600)
            var_f80_1 = temp0_70
            zmm3 = *(rdi_1 + 0x580)
            var_d20_1 = temp0_72
            zmm0 = *(rdi_1 + 0x640)
            var_fe0_1 = _mm256_add_epi16(zmm0, arg5)
            var_1020_1 = _mm256_add_epi16(zmm1, arg4)
            var_1180_1 = _mm256_add_epi16(zmm2, zmm5)
            int16_t temp0_76[0x10] = _mm256_add_epi16(zmm3, zmm4)
            int16_t temp0_77[0x10] = _mm256_sub_epi16(zmm5, zmm2)
            zmm5 = *(rdi_1 + 0x200)
            var_1080_1 = temp0_76
            int16_t temp0_78[0x10] = _mm256_sub_epi16(arg4, zmm1)
            arg4 = *(rdi_1 + 0x1c0)
            int16_t temp0_79[0x10] = _mm256_sub_epi16(zmm4, zmm3)
            zmm4 = *(rdi_1 + 0x240)
            var_e60_1 = temp0_77
            int16_t temp0_80[0x10] = _mm256_sub_epi16(arg5, zmm0)
            arg5 = *(rdi_1 + 0x180)
            zmm0 = *(rdi_1 + 0x540)
            var_10a0_1 = _mm256_add_epi16(zmm0, arg5)
            var_1140_1 = temp0_78
            zmm1 = *(rdi_1 + 0x500)
            var_1060_1 = _mm256_add_epi16(zmm1, arg4)
            var_1100_1 = temp0_80
            zmm2 = *(rdi_1 + 0x4c0)
            var_1040_1 = _mm256_add_epi16(zmm2, zmm5)
            var_fa0_1 = temp0_79
            zmm3 = *(rdi_1 + 0x480)
            int16_t temp0_84[0x10] = _mm256_add_epi16(zmm3, zmm4)
            int16_t temp0_85[0x10] = _mm256_sub_epi16(arg5, zmm0)
            arg5 = *(rdi_1 + 0x280)
            int16_t temp0_86[0x10] = _mm256_sub_epi16(arg4, zmm1)
            arg4 = *(rdi_1 + 0x2c0)
            var_1000_1 = temp0_84
            int16_t temp0_87[0x10] = _mm256_sub_epi16(zmm5, zmm2)
            zmm5 = *(rdi_1 + 0x300)
            int16_t temp0_88[0x10] = _mm256_sub_epi16(zmm4, zmm3)
            zmm4 = *(rdi_1 + 0x340)
            var_f40_1 = temp0_85
            zmm0 = *(rdi_1 + 0x440)
            var_10e0_1 = _mm256_add_epi16(zmm0, arg5)
            var_fc0_1 = temp0_86
            zmm1 = *(rdi_1 + 0x400)
            int16_t temp0_90[0x10] = _mm256_add_epi16(zmm1, arg4)
            var_e80_1 = temp0_87
            zmm2 = *(rdi_1 + 0x3c0)
            var_11c0_1 = temp0_90
            var_1120_1 = temp0_88
            zmm3 = *(rdi_1 + 0x380)
            var_10c0_1 = _mm256_add_epi16(zmm2, zmm5)
            int16_t temp0_92[0x10] = _mm256_add_epi16(zmm3, zmm4)
            int16_t temp0_93[0x10] = _mm256_sub_epi16(zmm5, zmm2)
            int16_t temp0_94[0x10] = _mm256_sub_epi16(zmm4, zmm3)
            var_11a0_1 = temp0_92
            zmm12 = *"A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-"
            var_d80_1 = temp0_93
            var_de0_1 = temp0_94
            zmm1 = _mm256_sub_epi16(arg4, zmm1)
            zmm2 = _mm256_sub_epi16(arg5, zmm0)
        else
            arg9 = *(result + rdi_1)
            void* r10_1 = result + rdi_1
            int64_t rbx_1 = r15 * 2
            arg8 = *(r10_1 + rbx_1)
            int64_t rcx_1 = sx.q(r15.d * 0x1f)
            int16_t temp0_1[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg9, *(r10_1 + (rcx_1 << 1)))
            int16_t temp0_2[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg9, *(r10_1 + (rcx_1 << 1)))
            void* rdx = r10_1 + (rcx_1 << 1)
            int16_t var_11e0_1[0x10] = _mm256_slli_epi16(temp0_1, 2)
            var_d20_1 = _mm256_slli_epi16(temp0_2, 2)
            int64_t r11_1 = sx.q(r8) * 2
            arg7 = *(r10_1 + r11_1)
            int64_t r9_1 = sx.q(r9) * 2
            arg6 = *(r10_1 + r9_1)
            zmm5 = *(rdx - r9_1)
            int16_t temp0_5[0x10] = _mm256_add_epi16(arg6, zmm5)
            int16_t temp0_6[0x10] = _mm256_sub_epi16(arg6, zmm5)
            arg4 = *(rdx - r11_1)
            int16_t temp0_7[0x10] = _mm256_add_epi16(arg7, arg4)
            int16_t temp0_8[0x10] = _mm256_sub_epi16(arg7, arg4)
            void* rax_11 = rdx - rbx_1
            int16_t temp0_9[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg8, *rax_11)
            int16_t temp0_10[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg8, *rax_11)
            int16_t var_ec0_1[0x10] = _mm256_slli_epi16(temp0_9, 2)
            zmm2 = _mm256_slli_epi16(temp0_7, 2)
            int64_t rcx_2 = sx.q((r15 << 2).d)
            arg9 = *(r10_1 + (rcx_2 << 1))
            void* rdx_1 = r10_1 + (rcx_2 << 1)
            arg8 = *(rbx_1 + rdx_1)
            arg7 = *(r11_1 + rdx_1)
            arg6 = *(r9_1 + rdx_1)
            zmm1 = _mm256_slli_epi16(temp0_5, 2)
            int64_t rcx_3 = sx.q(r15.d * 0x1b)
            int16_t temp0_14[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg9, *(r10_1 + (rcx_3 << 1)))
            int16_t var_f20_1[0x10] = zmm1
            void* r8_1 = r10_1 + (rcx_3 << 1)
            var_f80_1 = _mm256_slli_epi16(temp0_6, 2)
            var_e40_1 = _mm256_slli_epi16(temp0_10, 2)
            var_fe0_1 = _mm256_slli_epi16(__vpaddw_ymmqq_ymmqq_memqq(arg9, *r8_1), 2)
            int16_t var_f00_1[0x10] = zmm2
            var_ea0_1 = _mm256_slli_epi16(temp0_8, 2)
            zmm5 = *(r8_1 - r9_1)
            int16_t temp0_20[0x10] = _mm256_add_epi16(arg6, zmm5)
            int16_t temp0_21[0x10] = _mm256_sub_epi16(arg6, zmm5)
            arg4 = *(r8_1 - r11_1)
            int16_t temp0_22[0x10] = _mm256_add_epi16(arg7, arg4)
            void* rax_19 = r8_1 - rbx_1
            int16_t temp0_23[0x10] = _mm256_sub_epi16(arg7, arg4)
            int16_t temp0_24[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg8, *rax_19)
            int16_t temp0_25[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg8, *rax_19)
            var_1020_1 = _mm256_slli_epi16(temp0_24, 2)
            var_1180_1 = _mm256_slli_epi16(temp0_22, 2)
            var_1080_1 = _mm256_slli_epi16(temp0_20, 2)
            var_fa0_1 = _mm256_slli_epi16(temp0_21, 2)
            zmm2 = _mm256_slli_epi16(temp0_23, 2)
            int64_t rcx_4 = sx.q((r15 << 3).d)
            arg9 = *(r10_1 + (rcx_4 << 1))
            void* rdx_2 = r10_1 + (rcx_4 << 1)
            arg8 = *(rbx_1 + rdx_2)
            arg7 = *(r11_1 + rdx_2)
            arg6 = *(r9_1 + rdx_2)
            var_e60_1 = zmm2
            void* r8_2 = r10_1 + (sx.q(r15.d * 0x17) << 1)
            zmm2 = _mm256_slli_epi16(temp0_14, 2)
            int16_t temp0_32[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg9, *r8_2)
            var_1140_1 = _mm256_slli_epi16(temp0_25, 2)
            var_10a0_1 = _mm256_slli_epi16(__vpaddw_ymmqq_ymmqq_memqq(arg9, *r8_2), 2)
            var_1100_1 = zmm2
            var_f40_1 = _mm256_slli_epi16(temp0_32, 2)
            zmm5 = *(r8_2 - r9_1)
            int16_t temp0_37[0x10] = _mm256_add_epi16(arg6, zmm5)
            int16_t temp0_38[0x10] = _mm256_sub_epi16(arg6, zmm5)
            arg4 = *(r8_2 - r11_1)
            int16_t temp0_39[0x10] = _mm256_add_epi16(arg7, arg4)
            int16_t temp0_40[0x10] = _mm256_sub_epi16(arg7, arg4)
            void* rax_27 = r8_2 - rbx_1
            int16_t temp0_41[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg8, *rax_27)
            int16_t temp0_42[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg8, *rax_27)
            var_1060_1 = _mm256_slli_epi16(temp0_41, 2)
            var_1040_1 = _mm256_slli_epi16(temp0_39, 2)
            zmm3 = _mm256_slli_epi16(temp0_38, 2)
            zmm2 = _mm256_slli_epi16(temp0_40, 2)
            int64_t rax_30 = sx.q((r15 * 3).d << 2)
            arg9 = *(r10_1 + (rax_30 << 1))
            void* rdx_3 = r10_1 + (rax_30 << 1)
            arg8 = *(rbx_1 + rdx_3)
            arg7 = *(r11_1 + rdx_3)
            arg6 = *(r9_1 + rdx_3)
            zmm1 = _mm256_slli_epi16(temp0_37, 2)
            int64_t rcx_6 = sx.q(r15.d * 0x13)
            int16_t temp0_48[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg9, *(r10_1 + (rcx_6 << 1)))
            void* r8_3 = r10_1 + (rcx_6 << 1)
            var_1000_1 = zmm1
            var_fc0_1 = _mm256_slli_epi16(temp0_42, 2)
            var_10e0_1 = _mm256_slli_epi16(__vpaddw_ymmqq_ymmqq_memqq(arg9, *r8_3), 2)
            var_e80_1 = zmm2
            var_1120_1 = zmm3
            zmm5 = *(r8_3 - r9_1)
            int16_t temp0_52[0x10] = _mm256_add_epi16(arg6, zmm5)
            int16_t temp0_53[0x10] = _mm256_sub_epi16(arg6, zmm5)
            arg4 = *(r8_3 - r11_1)
            int16_t temp0_54[0x10] = _mm256_add_epi16(arg7, arg4)
            void* rax_37 = r8_3 - rbx_1
            int16_t temp0_55[0x10] = _mm256_sub_epi16(arg7, arg4)
            int16_t temp0_56[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg8, *rax_37)
            int16_t temp0_57[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg8, *rax_37)
            var_11c0_1 = _mm256_slli_epi16(temp0_56, 2)
            var_10c0_1 = _mm256_slli_epi16(temp0_54, 2)
            arg6 = var_11e0_1
            arg7 = var_ec0_1
            arg8 = var_f00_1
            arg9 = var_f20_1
            var_11a0_1 = _mm256_slli_epi16(temp0_52, 2)
            var_de0_1 = _mm256_slli_epi16(temp0_53, 2)
            var_d80_1 = _mm256_slli_epi16(temp0_55, 2)
            zmm1 = _mm256_slli_epi16(temp0_57, 2)
            zmm2 = _mm256_slli_epi16(temp0_48, 2)
        
        int16_t var_ec0_2[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg6, var_11a0_1)
        int16_t var_da0_1[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg7, var_10c0_1)
        int16_t var_f20_2[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg8, var_11c0_1)
        int16_t var_d60_1[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg9, var_10e0_1)
        int16_t var_ee0_1[0x10] = zmm1
        int16_t var_e20_1[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_fe0_1, var_1000_1)
        int16_t temp0_102[0x10] = _mm256_add_epi16(var_1020_1, var_1040_1)
        int16_t var_f60_1[0x10] = zmm2
        int16_t var_d40_1[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_1180_1, var_1060_1)
        int16_t temp0_104[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_1080_1, var_10a0_1)
        int16_t var_1040_2[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_1080_1, var_10a0_1)
        int16_t temp0_106[0x10] = _mm256_sub_epi16(var_1020_1, var_1040_1)
        int16_t var_10a0_2[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg8, var_11c0_1)
        int16_t var_f00_2[0x10] = temp0_102
        int16_t temp0_108[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_1180_1, var_1060_1)
        int16_t temp0_109[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_fe0_1, var_1000_1)
        int16_t var_1060_2[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg9, var_10e0_1)
        int16_t var_fe0_2[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg7, var_10c0_1)
        int16_t var_1000_2[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg6, var_11a0_1)
        arg9 = __vpunpcklwd_ymmqq_ymmqq_memqq(var_1100_1, var_1120_1)
        arg8 = __vpunpckhwd_ymmqq_ymmqq_memqq(var_1100_1, var_1120_1)
        arg7 = __vpunpcklwd_ymmqq_ymmqq_memqq(var_1140_1, var_e80_1)
        arg6 = __vpunpckhwd_ymmqq_ymmqq_memqq(var_1140_1, var_e80_1)
        arg5 = __vpunpcklwd_ymmqq_ymmqq_memqq(var_e60_1, var_fc0_1)
        arg4 = __vpunpckhwd_ymmqq_ymmqq_memqq(var_e60_1, var_fc0_1)
        zmm5 = __vpunpcklwd_ymmqq_ymmqq_memqq(var_fa0_1, var_f40_1)
        int16_t var_1080_2[0x10] = temp0_109
        int16_t var_dc0_1[0x10] = temp0_104
        arg10 = data_143600660
        zmm2 = _mm256_madd_epi16(arg9, arg10)
        int16_t var_1020_2[0x10] = temp0_108
        zmm4 = __vpunpckhwd_ymmqq_ymmqq_memqq(var_fa0_1, var_f40_1)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg8, arg10), zmm14), 0xe)
        int16_t var_1120_2[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg6, arg10), zmm14), 0xe)
        int16_t var_11a0_2[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg7, arg10), zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, arg10), zmm14), 0xe)
        int16_t var_1140_2[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg5, arg10), zmm14), 0xe), zmm3)
        zmm1 = _mm256_add_epi32(_mm256_madd_epi16(zmm4, arg10), zmm14)
        zmm2 = _mm256_madd_epi16(zmm5, arg10)
        zmm3 = _mm256_srai_epi32(zmm1, 0xe)
        int16_t var_10e0_2[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm4, zmm12), zmm14), 0xe)
        int16_t var_10c0_2[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm5, zmm12), zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, zmm12), zmm14), 0xe)
        int16_t var_11c0_2[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg5, zmm12), zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg6, zmm12), zmm14), 0xe)
        int16_t var_1100_2[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg7, zmm12), zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg8, zmm12), zmm14), 0xe)
        int16_t var_1180_2[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg9, zmm12), zmm14), 0xe), zmm3)
        
        if (rsi != 1)
            arg9 = var_d80_1
            zmm15 = var_f60_1
            arg4 = var_f00_2
            arg7 = temp0_106
        else
            int16_t temp0_178[0x10] =
                _mm256_sub_epi16(var_ec0_2, _mm256_cmpgt_epi16(zmm15, var_ec0_2))
            int16_t temp0_180[0x10] =
                _mm256_sub_epi16(var_da0_1, _mm256_cmpgt_epi16(zmm15, var_da0_1))
            int16_t temp0_182[0x10] =
                _mm256_sub_epi16(var_f20_2, _mm256_cmpgt_epi16(zmm15, var_f20_2))
            int16_t temp0_184[0x10] =
                _mm256_sub_epi16(var_d60_1, _mm256_cmpgt_epi16(zmm15, var_d60_1))
            int16_t temp0_186[0x10] =
                _mm256_sub_epi16(var_e20_1, _mm256_cmpgt_epi16(zmm15, var_e20_1))
            int16_t temp0_188[0x10] =
                _mm256_sub_epi16(var_f00_2, _mm256_cmpgt_epi16(zmm15, var_f00_2))
            int16_t temp0_190[0x10] =
                _mm256_sub_epi16(var_d40_1, _mm256_cmpgt_epi16(zmm15, var_d40_1))
            int16_t temp0_192[0x10] =
                _mm256_sub_epi16(var_dc0_1, _mm256_cmpgt_epi16(zmm15, var_dc0_1))
            int16_t temp0_194[0x10] =
                _mm256_sub_epi16(var_1040_2, _mm256_cmpgt_epi16(zmm15, var_1040_2))
            int16_t temp0_196[0x10] =
                _mm256_sub_epi16(var_1020_2, _mm256_cmpgt_epi16(zmm15, var_1020_2))
            int16_t temp0_198[0x10] =
                _mm256_sub_epi16(temp0_106, _mm256_cmpgt_epi16(zmm15, temp0_106))
            int16_t temp0_200[0x10] =
                _mm256_sub_epi16(var_1080_2, _mm256_cmpgt_epi16(zmm15, var_1080_2))
            int16_t temp0_202[0x10] =
                _mm256_sub_epi16(var_1060_2, _mm256_cmpgt_epi16(zmm15, var_1060_2))
            zmm14 = _mm256_sub_epi16(var_10a0_2, _mm256_cmpgt_epi16(zmm15, var_10a0_2))
            int16_t temp0_206[0x10] =
                _mm256_sub_epi16(var_fe0_2, _mm256_cmpgt_epi16(zmm15, var_fe0_2))
            var_fe0_2[0].o = zx.o(0)
            int16_t temp0_207[0x10] = _mm256_cmpgt_epi16(var_fe0_2, var_1000_2)
            int16_t temp0_208[0x10] = _mm256_sub_epi16(var_1000_2, temp0_207)
            temp0_207[0].o = zx.o(0)
            int16_t temp0_210[0x10] =
                _mm256_sub_epi16(var_de0_1, __vpcmpgtw_ymmqq_ymmqq_memqq(temp0_207, var_de0_1))
            var_de0_1[0].o = zx.o(0)
            int16_t temp0_211[0x10] = _mm256_cmpgt_epi16(var_de0_1, var_d80_1)
            int16_t temp0_212[0x10] = _mm256_sub_epi16(var_d80_1, temp0_211)
            temp0_211[0].o = zx.o(0)
            int16_t temp0_214[0x10] =
                _mm256_sub_epi16(var_ee0_1, __vpcmpgtw_ymmqq_ymmqq_memqq(temp0_211, var_ee0_1))
            var_ee0_1[0].o = zx.o(0)
            int16_t temp0_215[0x10] = _mm256_cmpgt_epi16(var_ee0_1, var_f60_1)
            int16_t temp0_216[0x10] = _mm256_sub_epi16(var_f60_1, temp0_215)
            temp0_215[0].o = zx.o(0)
            int16_t temp0_218[0x10] =
                _mm256_sub_epi16(var_1120_2, __vpcmpgtw_ymmqq_ymmqq_memqq(temp0_215, var_1120_2))
            var_1120_2[0].o = zx.o(0)
            int16_t temp0_219[0x10] = _mm256_cmpgt_epi16(var_1120_2, var_11a0_2)
            int16_t temp0_220[0x10] = _mm256_sub_epi16(var_11a0_2, temp0_219)
            temp0_219[0].o = zx.o(0)
            int16_t temp0_222[0x10] =
                _mm256_sub_epi16(var_1140_2, __vpcmpgtw_ymmqq_ymmqq_memqq(temp0_219, var_1140_2))
            var_1140_2[0].o = zx.o(0)
            int16_t temp0_223[0x10] = _mm256_cmpgt_epi16(var_1140_2, var_10e0_2)
            int16_t temp0_224[0x10] = _mm256_sub_epi16(var_10e0_2, temp0_223)
            temp0_223[0].o = zx.o(0)
            int16_t temp0_226[0x10] =
                _mm256_sub_epi16(var_10c0_2, __vpcmpgtw_ymmqq_ymmqq_memqq(temp0_223, var_10c0_2))
            var_10c0_2[0].o = zx.o(0)
            int16_t temp0_227[0x10] = _mm256_cmpgt_epi16(var_10c0_2, var_11c0_2)
            int16_t temp0_228[0x10] = _mm256_sub_epi16(var_11c0_2, temp0_227)
            temp0_227[0].o = zx.o(0)
            int16_t temp0_230[0x10] =
                _mm256_sub_epi16(var_1100_2, __vpcmpgtw_ymmqq_ymmqq_memqq(temp0_227, var_1100_2))
            var_1100_2[0].o = zx.o(0)
            int16_t temp0_231[0x10] = _mm256_cmpgt_epi16(var_1100_2, var_1180_2)
            int16_t temp0_232[0x10] = _mm256_sub_epi16(var_1180_2, temp0_231)
            temp0_231[0].o = zx.o(0)
            int16_t temp0_234[0x10] =
                _mm256_sub_epi16(var_f80_1, __vpcmpgtw_ymmqq_ymmqq_memqq(temp0_231, var_f80_1))
            var_f80_1[0].o = zx.o(0)
            int16_t temp0_235[0x10] = _mm256_cmpgt_epi16(var_f80_1, var_ea0_1)
            int16_t temp0_236[0x10] = _mm256_sub_epi16(var_ea0_1, temp0_235)
            temp0_235[0].o = zx.o(0)
            int16_t temp0_238[0x10] =
                _mm256_sub_epi16(var_e40_1, __vpcmpgtw_ymmqq_ymmqq_memqq(temp0_235, var_e40_1))
            var_e40_1[0].o = zx.o(0)
            int16_t temp0_240[0x10] =
                _mm256_sub_epi16(var_d20_1, _mm256_cmpgt_epi16(var_e40_1, var_d20_1))
            zmm0 = data_143600220
            int16_t temp0_241[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm0, temp0_180)
            int16_t temp0_242[0x10] = _mm256_add_epi16(zmm0, temp0_178)
            int16_t temp0_243[0x10] = _mm256_add_epi16(zmm0, temp0_184)
            int16_t temp0_244[0x10] = _mm256_add_epi16(zmm0, temp0_186)
            int16_t temp0_245[0x10] = _mm256_add_epi16(zmm0, temp0_188)
            int16_t temp0_246[0x10] = _mm256_add_epi16(zmm0, temp0_182)
            int16_t temp0_247[0x10] = _mm256_add_epi16(zmm0, temp0_190)
            int16_t temp0_248[0x10] = _mm256_add_epi16(zmm0, temp0_192)
            int16_t temp0_249[0x10] = _mm256_add_epi16(zmm0, temp0_194)
            int16_t temp0_250[0x10] = _mm256_add_epi16(zmm0, temp0_196)
            int16_t temp0_251[0x10] = _mm256_add_epi16(zmm0, temp0_198)
            int16_t temp0_252[0x10] = _mm256_add_epi16(zmm0, temp0_200)
            int16_t temp0_253[0x10] = _mm256_add_epi16(zmm0, temp0_202)
            zmm14 = _mm256_add_epi16(zmm0, zmm14)
            int16_t temp0_255[0x10] = _mm256_add_epi16(zmm0, temp0_206)
            int16_t temp0_256[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_240, data_143600220)
            var_ec0_2 = _mm256_srai_epi16(temp0_242, 2)
            var_da0_1 = _mm256_srai_epi16(temp0_241, 2)
            var_f20_2 = _mm256_srai_epi16(temp0_246, 2)
            int16_t var_fa0_2[0x10] = temp0_242
            var_d60_1 = _mm256_srai_epi16(temp0_243, 2)
            var_e20_1 = _mm256_srai_epi16(temp0_244, 2)
            arg4 = _mm256_srai_epi16(temp0_245, 2)
            zmm3 = data_143600220
            int16_t temp0_263[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_210)
            var_1040_2 = _mm256_srai_epi16(temp0_249, 2)
            var_1020_2 = _mm256_srai_epi16(temp0_250, 2)
            int16_t temp0_266[0x10] = _mm256_srai_epi16(temp0_263, 2)
            int16_t temp0_267[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_214)
            int16_t temp0_268[0x10] = _mm256_srai_epi16(temp0_252, 2)
            zmm12 = *"A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-"
            var_1080_2 = temp0_268
            var_1060_2 = _mm256_srai_epi16(temp0_253, 2)
            int16_t temp0_270[0x10] = _mm256_srai_epi16(zmm14, 2)
            zmm14 = data_1435fff60
            var_10a0_2 = temp0_270
            var_fe0_2 = _mm256_srai_epi16(temp0_255, 2)
            var_1000_2 = _mm256_srai_epi16(__vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_208), 2)
            int16_t temp0_274[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_212)
            arg7 = _mm256_srai_epi16(temp0_251, 2)
            arg9 = _mm256_srai_epi16(temp0_274, 2)
            int16_t temp0_277[0x10] = _mm256_srai_epi16(temp0_267, 2)
            int16_t temp0_278[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_218)
            var_ee0_1 = temp0_277
            zmm15 = _mm256_srai_epi16(__vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_216), 2)
            int16_t temp0_281[0x10] = _mm256_srai_epi16(temp0_278, 2)
            int16_t temp0_282[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_222)
            var_1120_2 = temp0_281
            var_11a0_2 = _mm256_srai_epi16(__vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_220), 2)
            int16_t temp0_285[0x10] = _mm256_srai_epi16(temp0_282, 2)
            int16_t temp0_286[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_226)
            var_1140_2 = temp0_285
            var_10e0_2 = _mm256_srai_epi16(__vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_224), 2)
            int16_t temp0_289[0x10] = _mm256_srai_epi16(temp0_286, 2)
            int16_t temp0_290[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_230)
            var_10c0_2 = temp0_289
            var_11c0_2 = _mm256_srai_epi16(__vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_228), 2)
            int16_t temp0_293[0x10] = _mm256_srai_epi16(temp0_290, 2)
            int16_t temp0_294[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_234)
            var_1100_2 = temp0_293
            var_1180_2 = _mm256_srai_epi16(__vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_232), 2)
            int16_t temp0_297[0x10] = _mm256_srai_epi16(temp0_294, 2)
            int16_t temp0_298[0x10] = __vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_238)
            var_f80_1 = temp0_297
            var_ea0_1 = _mm256_srai_epi16(__vpaddw_ymmqq_ymmqq_memqq(zmm3, temp0_236), 2)
            var_e40_1 = _mm256_srai_epi16(temp0_298, 2)
            var_d20_1 = _mm256_srai_epi16(temp0_256, 2)
            var_f00_2 = arg4
            var_d40_1 = _mm256_srai_epi16(temp0_247, 2)
            var_dc0_1 = _mm256_srai_epi16(temp0_248, 2)
            var_de0_1 = temp0_266
            var_d80_1 = arg9
        
        int16_t temp0_305[0x10] = __vpaddw_ymmqq_ymmqq_memqq(arg4, var_f20_2)
        arg6 = data_143600660
        zmm5 = __vpunpcklwd_ymmqq_ymmqq_memqq(var_1060_2, var_1080_2)
        zmm4 = __vpunpckhwd_ymmqq_ymmqq_memqq(var_1060_2, var_1080_2)
        arg5 = _mm256_unpacklo_epi16(var_10a0_2, arg7)
        arg4 = _mm256_unpackhi_epi16(var_10a0_2, arg7)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, arg6), zmm14), 0xe)
        int16_t temp0_316[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg5, arg6), zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm4, arg6), zmm14), 0xe)
        int16_t temp0_323[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm5, arg6), zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm4, zmm12), zmm14), 0xe)
        int16_t temp0_330[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm5, zmm12), zmm14), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, zmm12), zmm14), 0xe)
        zmm0 = _mm256_add_epi32(_mm256_madd_epi16(arg5, zmm12), zmm14)
        zmm14 = __vpaddw_ymmqq_ymmqq_memqq(zmm15, var_1120_2)
        int16_t temp0_337[0x10] = __vpsubw_ymmqq_ymmqq_memqq(zmm15, var_1120_2)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        int16_t temp0_339[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_ee0_1, var_11a0_2)
        int16_t temp0_340[0x10] = __vpsubw_ymmqq_ymmqq_memqq(arg9, var_1140_2)
        int16_t temp0_341[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        int16_t temp0_342[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_ea0_1, var_1100_2)
        int16_t temp0_343[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_ea0_1, var_1100_2)
        int16_t temp0_344[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_ec0_2, var_dc0_1)
        int16_t temp0_345[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_f80_1, var_1180_2)
        int16_t temp0_346[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_f80_1, var_1180_2)
        int16_t temp0_347[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_d60_1, var_e20_1)
        int16_t temp0_348[0x10] = _mm256_add_epi16(temp0_347, temp0_344)
        int16_t temp0_349[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_da0_1, var_d40_1)
        int16_t temp0_350[0x10] = _mm256_add_epi16(temp0_349, temp0_305)
        int16_t temp0_351[0x10] = _mm256_sub_epi16(temp0_349, temp0_305)
        int16_t temp0_352[0x10] = _mm256_sub_epi16(temp0_344, temp0_347)
        int16_t temp0_353[0x10] = _mm256_add_epi16(temp0_323, var_1040_2)
        int16_t temp0_354[0x10] = _mm256_add_epi16(temp0_316, var_1020_2)
        int16_t temp0_355[0x10] = _mm256_sub_epi16(var_1020_2, temp0_316)
        int16_t temp0_356[0x10] = _mm256_sub_epi16(var_1040_2, temp0_323)
        int16_t temp0_357[0x10] = _mm256_sub_epi16(var_1000_2, temp0_330)
        int16_t temp0_358[0x10] = _mm256_sub_epi16(var_fe0_2, temp0_341)
        int16_t temp0_359[0x10] = _mm256_add_epi16(temp0_341, var_fe0_2)
        int16_t var_11e0_5[0x10] = temp0_305
        int16_t var_f40_3[0x10] = temp0_337
        arg6 = data_1435fff60
        int16_t temp0_360[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_f20_2, var_f00_2)
        int16_t temp0_361[0x10] = _mm256_add_epi16(temp0_330, var_1000_2)
        int16_t temp0_362[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_da0_1, var_d40_1)
        zmm5 = _mm256_unpacklo_epi16(temp0_362, temp0_360)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_143600660)
        zmm4 = _mm256_unpackhi_epi16(temp0_362, temp0_360)
        zmm3 = _mm256_srai_epi32(
            _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_143600660), arg6), 0xe)
        zmm1 = _mm256_srai_epi32(_mm256_add_epi32(zmm2, arg6), 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, *"A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-")
        int16_t temp0_372[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg6), 0xe)
        int16_t temp0_378[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(
                _mm256_add_epi32(
                    __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, *"A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-"), arg6), 
                0xe), 
            zmm3)
        int16_t temp0_379[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_ee0_1, var_11a0_2)
        zmm5 = _mm256_unpacklo_epi16(temp0_379, temp0_342)
        arg7 = _mm256_unpacklo_epi16(zmm14, temp0_346)
        arg6 = _mm256_unpackhi_epi16(zmm14, temp0_346)
        zmm14 = data_143600640
        arg10 = _mm256_unpacklo_epi16(temp0_339, temp0_343)
        arg5 = _mm256_unpacklo_epi16(temp0_337, temp0_345)
        zmm12 = _mm256_unpackhi_epi16(temp0_339, temp0_343)
        arg4 = _mm256_unpackhi_epi16(temp0_337, temp0_345)
        zmm15 = data_1435fff60
        arg8 = data_143600320
        zmm4 = _mm256_unpackhi_epi16(temp0_379, temp0_342)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm12, arg8), zmm15), 0xe)
        int16_t temp0_394[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg10, arg8), zmm15), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg6, arg8), zmm15), 0xe)
        int16_t temp0_401[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg7, arg8), zmm15), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, zmm14), zmm15), 0xe)
        int16_t temp0_408[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg5, zmm14), zmm15), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm4, zmm14), zmm15), 0xe)
        zmm14 = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm5, zmm14), zmm15), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm4, arg8), zmm15), 0xe)
        int16_t temp0_422[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm5, arg8), zmm15), 0xe), zmm3)
        int32_t var_f20_3[0x8] = zmm14
        zmm1 = _mm256_add_epi32(_mm256_madd_epi16(arg4, arg8), zmm15)
        zmm5 = data_143600520
        zmm3 = _mm256_srai_epi32(zmm1, 0xe)
        int16_t temp0_429[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg5, arg8), zmm15), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg6, zmm5), zmm15), 0xe)
        zmm2 = _mm256_madd_epi16(arg7, zmm5)
        arg7 = data_143600320
        int16_t temp0_436[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm15), 0xe), zmm3)
        zmm2 = _mm256_madd_epi16(arg10, zmm5)
        arg10 = data_143600520
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm12, zmm5), zmm15), 0xe)
        int16_t temp0_443[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm15), 0xe), zmm3)
        int16_t temp0_444[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_d60_1, var_e20_1)
        int16_t temp0_445[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_444, temp0_372)
        int16_t temp0_446[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_444, temp0_372)
        int16_t temp0_447[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_ec0_2, var_dc0_1)
        int16_t temp0_448[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_447, temp0_378)
        int16_t temp0_449[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_447, temp0_378)
        zmm5 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_348, temp0_350)
        zmm4 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_348, temp0_350)
        arg5 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_351, temp0_352)
        arg4 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_351, temp0_352)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, *"A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-")
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, *"A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-")
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm15)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_143600660)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_143600660)
        int16_t var_ce0_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        int16_t var_ae0_1[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm15), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, arg10), zmm15), 0xe)
        int16_t temp0_474[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg5, arg10), zmm15), 0xe), zmm3)
        zmm1 = _mm256_add_epi32(_mm256_madd_epi16(arg4, arg7), zmm15)
        zmm0 = _mm256_add_epi32(_mm256_madd_epi16(arg5, arg7), zmm15)
        arg4 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_354, temp0_359)
        arg5 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_354, temp0_359)
        int16_t var_be0_1[0x10] = temp0_474
        zmm3 = _mm256_srai_epi32(zmm1, 0xe)
        int16_t temp0_483[0x10] = _mm256_packs_epi32(_mm256_srai_epi32(zmm0, 0xe), zmm3)
        zmm5 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_355, temp0_358)
        zmm4 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_355, temp0_358)
        int16_t var_9e0_1[0x10] = temp0_483
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, arg7), zmm15), 0xe)
        zmm0 = _mm256_add_epi32(_mm256_madd_epi16(arg5, arg7), zmm15)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_143600640)
        int16_t temp0_493[0x10] = _mm256_packs_epi32(_mm256_srai_epi32(zmm0, 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(
            _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_143600640), zmm15), 0xe)
        int16_t temp0_499[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm15), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(
            __vpaddd_ymmqq_ymmqq_memqq(_mm256_madd_epi16(zmm4, arg7), data_1435fff60), 0xe)
        zmm2 = _mm256_madd_epi16(zmm5, arg7)
        zmm5 = data_1435fff60
        int16_t temp0_506[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm5), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, arg10), zmm5), 0xe)
        zmm0 = _mm256_add_epi32(_mm256_madd_epi16(arg5, arg10), zmm5)
        int16_t temp0_512[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_de0_1, var_10e0_2)
        int16_t temp0_514[0x10] = _mm256_packs_epi32(_mm256_srai_epi32(zmm0, 0xe), zmm3)
        int16_t temp0_515[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_d80_1, var_1140_2)
        int16_t temp0_516[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_de0_1, var_10e0_2)
        int16_t temp0_517[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_d20_1, var_10c0_2)
        int16_t temp0_518[0x10] = _mm256_add_epi16(temp0_512, temp0_401)
        int16_t temp0_519[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_515, temp0_394)
        int16_t temp0_520[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_516, temp0_408)
        int16_t temp0_521[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_516, temp0_408)
        int16_t temp0_522[0x10] = __vpsubw_ymmqq_ymmqq_memqq(var_e40_1, var_11c0_2)
        zmm14 = __vpaddw_ymmqq_ymmqq_memqq(temp0_522, temp0_422)
        int16_t temp0_524[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_522, temp0_422)
        int16_t temp0_525[0x10] = _mm256_sub_epi16(temp0_517, temp0_429)
        int16_t temp0_526[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_d20_1, var_10c0_2)
        int16_t temp0_527[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_526, temp0_436)
        int16_t temp0_528[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_e40_1, var_11c0_2)
        int16_t temp0_529[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_526, temp0_436)
        int16_t temp0_530[0x10] = _mm256_add_epi16(temp0_517, temp0_429)
        int16_t temp0_531[0x10] = _mm256_sub_epi16(temp0_528, temp0_443)
        int16_t temp0_532[0x10] = _mm256_add_epi16(temp0_528, temp0_443)
        arg4 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_445, temp0_449)
        arg5 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_445, temp0_449)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg5, data_1436005a0)
        zmm1 = _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(arg4, data_1436005a0), zmm5)
        zmm0 = _mm256_add_epi32(zmm2, zmm5)
        zmm4 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_446, temp0_448)
        zmm5 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_446, temp0_448)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_1436003a0)
        zmm3 = _mm256_srai_epi32(zmm1, 0xe)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_1436003a0)
        int16_t temp0_545[0x10] = _mm256_packs_epi32(zmm3, zmm1)
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_1435fff60)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm2, data_1435fff60)
        int16_t var_c60_1[0x10] = temp0_545
        zmm3 = _mm256_srai_epi32(zmm1, 0xe)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_143600480[0x20][0].32)
        int16_t var_a60_1[0x10] = _mm256_packs_epi32(zmm3, zmm1)
        zmm4 = data_1435fff60
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_143600480[0x20][0].32)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm4), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm4)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg5, data_143600280[0x20][0].32)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg4, data_143600280[0x20][0].32)
        int16_t temp0_559[0x10] = _mm256_packs_epi32(zmm3, zmm1)
        zmm1 = _mm256_add_epi32(zmm0, zmm4)
        zmm0 = _mm256_add_epi32(zmm2, zmm4)
        int16_t var_b60_1[0x10] = temp0_559
        int16_t temp0_564[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(zmm1, 0xe), _mm256_srai_epi32(zmm0, 0xe))
        int16_t temp0_565[0x10] = _mm256_sub_epi16(temp0_356, temp0_499)
        int16_t temp0_566[0x10] = _mm256_add_epi16(temp0_499, temp0_356)
        int16_t temp0_567[0x10] = _mm256_add_epi16(temp0_506, temp0_357)
        int16_t temp0_568[0x10] = _mm256_sub_epi16(temp0_357, temp0_506)
        int16_t temp0_569[0x10] = _mm256_sub_epi16(temp0_361, temp0_514)
        int16_t temp0_570[0x10] = _mm256_add_epi16(temp0_514, temp0_361)
        int16_t var_960_1[0x10] = temp0_564
        int16_t temp0_572[0x10] =
            __vpsubw_ymmqq_ymmqq_memqq(__vpaddw_ymmqq_ymmqq_memqq(var_d80_1, var_1140_2), temp0_394)
        arg7 = _mm256_unpacklo_epi16(temp0_572, temp0_531)
        zmm12 = _mm256_unpacklo_epi16(temp0_519, temp0_532)
        arg9 = _mm256_unpackhi_epi16(temp0_519, temp0_532)
        arg6 = _mm256_unpackhi_epi16(temp0_572, temp0_531)
        int16_t temp0_577[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_340, var_f20_3)
        arg8 = data_1435fff60
        arg5 = _mm256_unpacklo_epi16(temp0_577, temp0_524)
        arg4 = _mm256_unpackhi_epi16(temp0_577, temp0_524)
        int16_t temp0_580[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_340, var_f20_3)
        arg10 = data_143600480[0x20][0].32
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm12, data_143600280[0x20][0].32)
        zmm5 = _mm256_unpacklo_epi16(temp0_580, zmm14)
        zmm4 = _mm256_unpackhi_epi16(temp0_580, zmm14)
        zmm3 = _mm256_srai_epi32(
            _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(arg9, data_143600280[0x20][0].32), arg8), 
            0xe)
        zmm1 = _mm256_srai_epi32(_mm256_add_epi32(zmm2, arg8), 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg6, data_143600620)
        int16_t temp0_590[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg8), 0xe)
        int16_t temp0_596[0x10] = _mm256_packs_epi32(
            _mm256_srai_epi32(
                _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(arg7, data_143600620), arg8), 0xe), 
            zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(arg4, arg10), arg8), 0xe)
        zmm0 = _mm256_add_epi32(_mm256_madd_epi16(arg5, arg10), arg8)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_143600680)
        int16_t temp0_604[0x10] = _mm256_packs_epi32(_mm256_srai_epi32(zmm0, 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(
            _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_143600680), arg8), 0xe)
        int16_t temp0_610[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, arg8), 0xe), zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(_mm256_madd_epi16(zmm4, arg10), arg8), 0xe)
        zmm0 = _mm256_add_epi32(_mm256_madd_epi16(zmm5, arg10), arg8)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg5, data_1436003a0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg4, data_1436003a0)
        zmm14 = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg8), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, arg8)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg7, data_143600280[0x20][0].32)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg6, data_143600280[0x20][0].32)
        int16_t temp0_626[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg8), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, arg8)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm12, data_1436005a0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg9, data_1436005a0)
        int16_t temp0_633[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg8), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, arg8)
        arg4 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_565, temp0_568)
        arg5 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_565, temp0_568)
        int16_t temp0_640[0x10] = _mm256_packs_epi32(_mm256_srai_epi32(zmm0, 0xe), zmm3)
        int16_t temp0_641[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_353, temp0_493)
        arg7 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_641, temp0_569)
        arg6 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_641, temp0_569)
        int16_t temp0_644[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_353, temp0_493)
        zmm5 = __vpunpcklwd_ymmqq_ymmqq_memqq(temp0_566, temp0_567)
        zmm4 = __vpunpckhwd_ymmqq_ymmqq_memqq(temp0_566, temp0_567)
        arg9 = _mm256_unpacklo_epi16(temp0_644, temp0_570)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg9, data_1436005e0)
        arg8 = _mm256_unpackhi_epi16(temp0_644, temp0_570)
        zmm15 = data_1435fff60
        zmm3 = _mm256_srai_epi32(
            _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(arg8, data_1436005e0), zmm15), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm15)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg7, data_1436003e0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg6, data_1436003e0)
        int16_t var_ca0_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm15)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg5, data_1436004e0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg4, data_1436004e0)
        int16_t var_aa0_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm15)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_1436002e0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_1436002e0)
        int16_t var_ba0_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm15)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_143600560)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_143600560)
        int16_t var_9a0_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        int16_t var_c20_1[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm15), 0xe), zmm3)
        int32_t var_11c0_4[0x8] = zmm14
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg4, data_143600360)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg5, data_143600360)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm15)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg7, data_143600460)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg6, data_143600460)
        int16_t var_a20_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm15)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg9, data_143600260)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg8, data_143600260)
        int16_t var_b20_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm15), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm15)
        int16_t temp0_703[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_518, temp0_590)
        int16_t temp0_704[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_518, temp0_590)
        int16_t var_920_1[0x10] = _mm256_packs_epi32(_mm256_srai_epi32(zmm0, 0xe), zmm3)
        int16_t temp0_708[0x10] =
            __vpsubw_ymmqq_ymmqq_memqq(__vpaddw_ymmqq_ymmqq_memqq(var_de0_1, var_10e0_2), temp0_401)
        int16_t temp0_709[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_708, temp0_596)
        int16_t temp0_710[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_708, temp0_596)
        zmm15 = _mm256_sub_epi16(temp0_530, zmm14)
        int16_t temp0_712[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_527, temp0_633)
        int16_t temp0_713[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_527, temp0_633)
        zmm14 = _mm256_sub_epi16(temp0_525, temp0_626)
        temp0_715 = _mm256_add_epi16(temp0_626, temp0_525)
        int16_t temp0_716[0x10] = _mm256_sub_epi16(temp0_529, temp0_640)
        int16_t temp0_717[0x10] = _mm256_add_epi16(temp0_529, temp0_640)
        zmm12 = _mm256_unpacklo_epi16(temp0_703, temp0_717)
        arg9 = _mm256_unpackhi_epi16(temp0_703, temp0_717)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg9, data_143600600)
        arg8 = _mm256_unpacklo_epi16(temp0_704, temp0_716)
        arg7 = _mm256_unpackhi_epi16(temp0_704, temp0_716)
        zmm4 = _mm256_unpackhi_epi16(temp0_709, temp0_712)
        zmm5 = _mm256_unpacklo_epi16(temp0_709, temp0_712)
        arg5 = data_1435fff60
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg5), 0xe)
        arg6 = _mm256_unpacklo_epi16(temp0_710, temp0_713)
        arg4 = _mm256_unpackhi_epi16(temp0_710, temp0_713)
        zmm0 = _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(zmm12, data_143600600), arg5)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg8, data_143600400)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg7, data_143600400)
        int16_t var_cc0_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg5), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, arg5)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg6, data_143600500)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg4, data_143600500)
        int16_t temp0_741[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm1 = _mm256_add_epi32(zmm0, arg5)
        int16_t var_ac0_1[0x10] = temp0_741
        zmm0 = _mm256_add_epi32(zmm2, arg5)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_143600300)
        zmm3 = _mm256_srai_epi32(zmm1, 0xe)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_143600300)
        int16_t var_bc0_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg5), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, arg5)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_143600540)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_143600540)
        int16_t var_9c0_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg5), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, arg5)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg6, data_143600340)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg4, data_143600340)
        int16_t var_c00_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg5), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, arg5)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg8, data_143600440)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg7, data_143600440)
        int16_t var_a00_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg5), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, arg5)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm12, data_143600240)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg9, data_143600240)
        int16_t var_b00_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, arg5), 0xe)
        zmm1 = _mm256_srai_epi32(_mm256_add_epi32(zmm2, arg5), 0xe)
        int16_t temp0_781[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_520, temp0_604)
        int16_t temp0_782[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        int16_t temp0_783[0x10] = __vpaddw_ymmqq_ymmqq_memqq(temp0_521, temp0_610)
        arg9 = _mm256_unpacklo_epi16(temp0_781, temp0_715)
        arg8 = _mm256_unpackhi_epi16(temp0_781, temp0_715)
        int16_t temp0_786[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_520, temp0_604)
        arg7 = _mm256_unpacklo_epi16(temp0_786, zmm14)
        arg6 = _mm256_unpackhi_epi16(temp0_786, zmm14)
        zmm14 = data_1435fff60
        int16_t temp0_789[0x10] = __vpsubw_ymmqq_ymmqq_memqq(temp0_521, temp0_610)
        arg5 = _mm256_unpacklo_epi16(temp0_789, zmm15)
        arg4 = _mm256_unpackhi_epi16(temp0_789, zmm15)
        int16_t temp0_792[0x10] = __vpaddw_ymmqq_ymmqq_memqq(var_11c0_4, temp0_530)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg9, data_143600580)
        zmm5 = _mm256_unpacklo_epi16(temp0_783, temp0_792)
        zmm4 = _mm256_unpackhi_epi16(temp0_783, temp0_792)
        int16_t var_900_1[0x10] = temp0_782
        zmm3 = _mm256_srai_epi32(
            _mm256_add_epi32(__vpmaddwd_ymmqq_ymmqq_memqq(arg8, data_143600580), zmm14), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm14)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg7, data_143600380)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg6, data_143600380)
        int16_t var_c40_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm14), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm14)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg5, (*" &h3 &h3 &h3 &h3 &h3 &h3 &h3 &h3r")[0].32)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg4, (*" &h3 &h3 &h3 &h3 &h3 &h3 &h3 &h3r")[0].32)
        int16_t temp0_810[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm1 = _mm256_add_epi32(zmm0, zmm14)
        int16_t var_a40_1[0x10] = temp0_810
        zmm0 = _mm256_add_epi32(zmm2, zmm14)
        zmm2 =
            __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, (*"O?d\tO?d\tO?d\tO?d\tO?d\tO?d\tO?d\tO?d\t;")[0].32)
        zmm3 = _mm256_srai_epi32(zmm1, 0xe)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 =
            __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, (*"O?d\tO?d\tO?d\tO?d\tO?d\tO?d\tO?d\tO?d\t;")[0].32)
        int16_t var_b40_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm14), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm14)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm5, data_1436005c0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(zmm4, data_1436005c0)
        int16_t var_940_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm14), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm14)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg5, data_1436003c0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg4, data_1436003c0)
        int16_t temp0_831[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm1 = _mm256_add_epi32(zmm0, zmm14)
        int16_t var_c80[0x10] = temp0_831
        zmm3 = _mm256_srai_epi32(zmm1, 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm14)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg7, data_1436004c0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg6, data_1436004c0)
        int16_t var_a80_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm14), 0xe)
        zmm0 = _mm256_add_epi32(zmm2, zmm14)
        zmm2 = __vpmaddwd_ymmqq_ymmqq_memqq(arg9, data_1436002c0)
        zmm1 = _mm256_srai_epi32(zmm0, 0xe)
        zmm0 = __vpmaddwd_ymmqq_ymmqq_memqq(arg8, data_1436002c0)
        int16_t var_b80_1[0x10] = _mm256_packs_epi32(zmm1, zmm3)
        zmm3 = _mm256_srai_epi32(_mm256_add_epi32(zmm0, zmm14), 0xe)
        int16_t var_980_1[0x10] =
            _mm256_packs_epi32(_mm256_srai_epi32(_mm256_add_epi32(zmm2, zmm14), 0xe), zmm3)
        void* r8_5
        void* r9_2
        
        if (rsi != 0)
            r8_5 = r14_1 - 0x200
            r9_2 = r14_1
        else
            r8_5 = r13 - 0x200 + r14_1
            r9_2 = r14_1 + r13
        
        void* rdx_4 = r8_5 + 0x80
        void* rax_38 = r9_2 + 0x80
        int16_t (* rcx_7)[0x10] = &var_c80
        int64_t k_1 = 4
        int64_t k
        
        do
            zmm2 = rcx_7[-3]
            arg7 = __vpunpckhwd_ymmqq_ymmqq_memqq(zmm2, rcx_7[-2])
            zmm12 = __vpunpcklwd_ymmqq_ymmqq_memqq(zmm2, rcx_7[-2])
            zmm0 = rcx_7[-1]
            arg5 = __vpunpcklwd_ymmqq_ymmqq_memqq(zmm0, *rcx_7)
            arg6 = __vpunpckhwd_ymmqq_ymmqq_memqq(zmm0, *rcx_7)
            zmm2 = rcx_7[1]
            arg8 = __vpunpcklwd_ymmqq_ymmqq_memqq(zmm2, rcx_7[2])
            zmm0 = rcx_7[3]
            zmm1 = rcx_7[4]
            zmm3 = __vpunpckhwd_ymmqq_ymmqq_memqq(zmm2, rcx_7[2])
            zmm4 = _mm256_unpackhi_epi16(zmm0, zmm1)
            arg4 = _mm256_unpacklo_epi32(zmm12, arg5)
            arg9 = _mm256_unpacklo_epi32(arg7, arg6)
            zmm2 = _mm256_unpacklo_epi32(zmm3, zmm4)
            zmm5 = _mm256_unpacklo_epi16(zmm0, zmm1)
            zmm1 = _mm256_unpackhi_epi32(arg8, zmm5)
            zmm0 = _mm256_unpacklo_epi32(arg8, zmm5)
            zmm3 = _mm256_unpackhi_epi32(zmm3, zmm4)
            arg6 = _mm256_unpackhi_epi32(arg7, arg6)
            arg5 = _mm256_unpackhi_epi32(zmm12, arg5)
            zmm5 = _mm256_unpacklo_epi64(arg4, zmm0)
            zmm4 = _mm256_unpackhi_epi64(arg4, zmm0)
            arg7 = _mm256_unpacklo_epi64(arg9, zmm2)
            arg8 = _mm256_unpackhi_epi64(arg9, zmm2)
            arg4 = _mm256_unpacklo_epi64(arg5, zmm1)
            arg9 = _mm256_unpacklo_epi64(arg6, zmm3)
            arg5 = _mm256_unpackhi_epi64(arg5, zmm1)
            arg6 = _mm256_unpackhi_epi64(arg6, zmm3)
            zmm15[0].o = zx.o(0)
            
            if (rsi == 0)
                zmm3 = data_143600220
                zmm5 = _mm256_srai_epi16(
                    _mm256_add_epi16(_mm256_sub_epi16(zmm5, _mm256_cmpgt_epi16(zmm5, zmm15)), 
                        zmm3), 
                    2)
                zmm4 = _mm256_srai_epi16(
                    _mm256_add_epi16(_mm256_sub_epi16(zmm4, _mm256_cmpgt_epi16(zmm4, zmm15)), 
                        zmm3), 
                    2)
                arg4 = _mm256_srai_epi16(
                    _mm256_add_epi16(_mm256_sub_epi16(arg4, _mm256_cmpgt_epi16(arg4, zmm15)), 
                        zmm3), 
                    2)
                arg5 = _mm256_srai_epi16(
                    _mm256_add_epi16(_mm256_sub_epi16(arg5, _mm256_cmpgt_epi16(arg5, zmm15)), 
                        zmm3), 
                    2)
                int16_t temp0_893[0x10] =
                    _mm256_add_epi16(_mm256_sub_epi16(arg7, _mm256_cmpgt_epi16(arg7, zmm15)), zmm3)
                int16_t temp0_895[0x10] = _mm256_sub_epi16(arg8, _mm256_cmpgt_epi16(arg8, zmm15))
                arg7 = _mm256_srai_epi16(temp0_893, 2)
                int16_t temp0_897[0x10] = _mm256_add_epi16(temp0_895, zmm3)
                int16_t temp0_899[0x10] = _mm256_sub_epi16(arg9, _mm256_cmpgt_epi16(arg9, zmm15))
                arg8 = _mm256_srai_epi16(temp0_897, 2)
                int16_t temp0_901[0x10] = _mm256_add_epi16(temp0_899, zmm3)
                zmm0 = _mm256_cmpgt_epi16(arg6, zmm15)
                zmm1 = _mm256_sub_epi16(arg6, zmm0)
                arg9 = _mm256_srai_epi16(temp0_901, 2)
                arg6 = _mm256_srai_epi16(_mm256_add_epi16(zmm1, zmm3), 2)
            
            *(r8_5 - r9_2 - 0x80 + rax_38) = zmm5[0].o
            *(rdx_4 - 0x40) = zmm4[0].o
            *rdx_4 = arg4[0].o
            *(rdx_4 + 0x40) = arg5[0].o
            *(rdx_4 + 0x80) = arg7[0].o
            *(rdx_4 + 0xc0) = arg8[0].o
            *(rdx_4 + 0x100) = arg9[0].o
            *(rdx_4 + 0x140) = arg6[0].o
            zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            *(rax_38 - 0x80) = zmm1[0].o
            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            *(rax_38 - 0x40) = zmm0[0].o
            zmm1[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
            *rax_38 = zmm1[0].o
            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            *(rax_38 + 0x40) = zmm0[0].o
            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            *(rax_38 + 0x80) = zmm1[0].o
            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            *(rax_38 + 0xc0) = zmm0[0].o
            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            *(rax_38 + 0x100) = zmm1[0].o
            zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            *(rax_38 + 0x140) = zmm0[0].o
            rax_38 += 0x10
            rdx_4 += 0x10
            rcx_7 = &rcx_7[8]
            k = k_1
            k_1 -= 1
        while (k != 1)
        zmm12 = *"A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-A-"
        result = result_1
        r8 = (r15 * 2).d
        rdi_1 += 0x20
        r9 = r8 + r15.d
        r14_1 += 0x400
        j = j_1
        j_1 -= 1
    while (j != 1)
    rcx = var_e00
    r8 = (r15 * 2).d
    rsi += 1
    r9 = r8 + r15.d
    i = i_1
    i_1 -= 1
while (i != 1)
_mm256_zeroupper()
__security_check_cookie(rax_1 ^ &var_11f8)
arg4[0].o = var_38
arg5[0].o = var_48
arg6[0].o = var_58
arg7[0].o = var_68
arg8[0].o = var_78
arg9[0].o = var_88
temp0_715[0].o = var_a8
return result
