// 函数: sub_142a339c0
// 地址: 0x142a339c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm8[0x8]
int16_t var_48[0x8] = zmm8
uint16_t var_188[0x8]
int64_t rax_1 = __security_cookie ^ &var_188
int16_t zmm15[0x8] = *"A-A-A-A-A-A-A-A-"
int32_t zmm14[0x4] = data_1435ffa40
uint16_t zmm12[0x8] = _mm_slli_epi16(*arg1, 2)
uint16_t zmm11[0x8] = _mm_slli_epi16(*(arg1 + (sx.q(arg2.d) << 1)), 2)
uint16_t zmm13[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 * 2).d) << 1)), 2)
uint16_t zmm9[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 * 3).d) << 1)), 2)
uint16_t zmm6[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 << 2).d) << 1)), 2)
int16_t zmm4[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 * 5).d) << 1)), 2)
uint16_t zmm7[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 * 3).d * 2) << 1)), 2)
int128_t* var_108 = &var_188
uint16_t var_178[0x8]
uint16_t (* var_100)[0x8] = &var_178
uint16_t var_168[0x8]
uint16_t (* var_f8)[0x8] = &var_168
uint16_t var_158[0x8]
int128_t* var_f0 = &var_158
uint16_t var_148[0x8]
uint16_t (* var_e8)[0x8] = &var_148
int16_t var_138[0x8]
int128_t* var_e0 = &var_138
uint16_t var_128[0x8]
int128_t* var_d8 = &var_128
uint16_t var_118[0x8]
int128_t* var_d0 = &var_118
int64_t i_2 = 2
uint16_t zmm10[0x8] = _mm_slli_epi16(*(arg1 + (sx.q(arg2.d * 7) << 1)), 2)
uint16_t zmm0[0x8]
int32_t zmm1[0x4]
uint16_t zmm2[0x8]
uint16_t zmm3[0x8]
int32_t zmm5[0x4]
int64_t i

do
    zmm5 = _mm_add_epi16(zmm7, zmm11)
    zmm1 = _mm_add_epi16(zmm4, zmm13)
    zmm11 = _mm_sub_epi16(zmm11, zmm7)
    zmm13 = _mm_sub_epi16(zmm13, zmm4)
    zmm2 = _mm_add_epi16(zmm6, zmm9)
    zmm3 = _mm_add_epi16(zmm10, zmm12)
    zmm9 = _mm_sub_epi16(zmm9, zmm6)
    int16_t temp0_15[0x8] = _mm_add_epi16(zmm2, zmm3)
    zmm0 = _mm_add_epi16(zmm1, zmm5)
    zmm3 = _mm_sub_epi16(zmm3, zmm2)
    int32_t temp0_18[0x4] = _mm_sub_epi16(zmm5, zmm1)
    zmm12 = _mm_sub_epi16(zmm12, zmm10)
    zmm8 = _mm_unpacklo_epi16(temp0_15, zmm0[0].q)
    zmm4 = _mm_unpackhi_epi16(temp0_15, zmm0[0].q)
    zmm7 = _mm_unpacklo_epi16(temp0_18, zmm3[0].q)
    zmm0 = _mm_madd_epi16(zmm4, zmm15)
    zmm6 = __pmaddwd_xmmdq_memdq(zmm7, data_1435ffd20)
    zmm7 = __pmaddwd_xmmdq_memdq(zmm7, data_1435ffc20)
    int32_t temp0_26[0x4] = _mm_unpackhi_epi16(temp0_18, zmm3[0].q)
    zmm3 = data_1435ffdc0
    zmm0 = _mm_add_epi32(zmm0, zmm14)
    zmm2 = _mm_unpacklo_epi16(zmm11, zmm13[0].q)
    zmm0 = _mm_srai_epi32(zmm0, 0xe)
    zmm1 = _mm_madd_epi16(zmm2, zmm3)
    zmm6 = _mm_add_epi32(zmm6, zmm14)
    int16_t temp0_32[0x8] = _mm_madd_epi16(zmm8, zmm3)
    zmm7 = _mm_add_epi32(zmm7, zmm14)
    zmm11 = _mm_unpackhi_epi16(zmm11, zmm13[0].q)
    int16_t temp0_35[0x8] = _mm_madd_epi16(zmm4, zmm3)
    zmm10 = _mm_madd_epi16(zmm8, zmm15)
    zmm2 = _mm_madd_epi16(zmm2, zmm15)
    int32_t temp0_38[0x4] = _mm_add_epi32(zmm1, zmm14)
    zmm8 = _mm_add_epi32(temp0_32, zmm14)
    zmm6 = _mm_srai_epi32(zmm6, 0xe)
    int32_t temp0_41[0x4] = _mm_srai_epi32(temp0_38, 0xe)
    zmm4 = _mm_add_epi32(temp0_35, zmm14)
    zmm8 = _mm_srai_epi32(zmm8, 0xe)
    zmm10 = _mm_add_epi32(zmm10, zmm14)
    zmm4 = _mm_srai_epi32(zmm4, 0xe)
    zmm2 = _mm_add_epi32(zmm2, zmm14)
    zmm10 = _mm_packs_epi32(_mm_srai_epi32(zmm10, 0xe), zmm0)
    zmm0 = __pmaddwd_xmmdq_memdq(temp0_26, data_1435ffd20)
    zmm5 = __pmaddwd_xmmdq_memdq(temp0_26, data_1435ffc20)
    zmm2 = _mm_srai_epi32(zmm2, 0xe)
    zmm7 = _mm_srai_epi32(zmm7, 0xe)
    zmm8 = _mm_packs_epi32(zmm8, zmm4)
    zmm0 = _mm_srai_epi32(_mm_add_epi32(zmm0, zmm14), 0xe)
    int32_t temp0_56[0x4] = _mm_add_epi32(zmm5, zmm14)
    zmm6 = _mm_packs_epi32(zmm6, zmm0)
    zmm0 = _mm_madd_epi16(zmm11, zmm3)
    zmm11 = _mm_madd_epi16(zmm11, zmm15)
    zmm7 = _mm_packs_epi32(zmm7, _mm_srai_epi32(temp0_56, 0xe))
    zmm0 = _mm_srai_epi32(_mm_add_epi32(zmm0, zmm14), 0xe)
    zmm11 = _mm_add_epi32(zmm11, zmm14)
    int32_t temp0_65[0x4] = _mm_packs_epi32(temp0_41, zmm0)
    zmm2 = _mm_packs_epi32(zmm2, _mm_srai_epi32(zmm11, 0xe))
    zmm3 = _mm_add_epi16(temp0_65, zmm9)
    zmm9 = _mm_sub_epi16(zmm9, temp0_65)
    zmm0 = _mm_sub_epi16(zmm12, zmm2)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm4 = _mm_unpacklo_epi16(zmm9, zmm0[0].q)
    zmm5 = zmm3
    zmm9 = _mm_unpackhi_epi16(zmm9, zmm0[0].q)
    int16_t temp0_74[0x8] = __pmaddwd_xmmdq_memdq(zmm4, data_1435ffcd0[0x10][0].o)
    zmm1 = __pmaddwd_xmmdq_memdq(zmm4, data_1435ffc60)
    zmm3 = _mm_unpackhi_epi16(zmm3, zmm2[0].q)
    int32_t temp0_77[0x4] = _mm_unpacklo_epi16(zmm5, zmm2[0].q)
    zmm0 = __pmaddwd_xmmdq_memdq(zmm3, data_1435ffd60)
    zmm2 = __pmaddwd_xmmdq_memdq(temp0_77, data_1435ffd60)
    zmm4 = _mm_add_epi32(temp0_74, zmm14)
    zmm3 = __pmaddwd_xmmdq_memdq(zmm3, data_1435ffbd0[0x10][0].o)
    int32_t temp0_82[0x4] = _mm_add_epi32(zmm1, zmm14)
    zmm5 = __pmaddwd_xmmdq_memdq(temp0_77, data_1435ffbd0[0x10][0].o)
    zmm4 = _mm_srai_epi32(zmm4, 0xe)
    int32_t temp0_85[0x4] = _mm_srai_epi32(temp0_82, 0xe)
    zmm0 = _mm_srai_epi32(_mm_add_epi32(zmm0, zmm14), 0xe)
    zmm2 = _mm_srai_epi32(_mm_add_epi32(zmm2, zmm14), 0xe)
    zmm3 = _mm_add_epi32(zmm3, zmm14)
    zmm2 = _mm_packs_epi32(zmm2, zmm0)
    zmm0 = zmm9
    zmm9 = __pmaddwd_xmmdq_memdq(zmm9, data_1435ffcd0[0x10][0].o)
    int32_t temp0_93[0x4] = _mm_add_epi32(zmm5, zmm14)
    zmm0 = __pmaddwd_xmmdq_memdq(zmm0, data_1435ffc60)
    zmm3 = _mm_srai_epi32(zmm3, 0xe)
    int32_t temp0_97[0x4] = _mm_packs_epi32(_mm_srai_epi32(temp0_93, 0xe), zmm3)
    zmm9 = _mm_srai_epi32(_mm_add_epi32(zmm9, zmm14), 0xe)
    zmm0 = _mm_add_epi32(zmm0, zmm14)
    zmm4 = _mm_packs_epi32(zmm4, zmm9)
    int32_t temp0_103[0x4] = _mm_packs_epi32(temp0_85, _mm_srai_epi32(zmm0, 0xe))
    zmm0 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
    zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
    zmm9 = _mm_unpacklo_epi16(zmm10, zmm2[0].q)
    zmm10 = _mm_unpackhi_epi16(zmm10, zmm2[0].q)
    zmm2 = zmm7
    zmm3 = _mm_unpacklo_epi16(zmm8, temp0_103[0].q)
    zmm11 = _mm_unpacklo_epi32(zmm9, zmm0[0].q)
    zmm4 = zmm10
    zmm7 = _mm_unpackhi_epi16(zmm7, temp0_97[0].q)
    zmm9 = _mm_unpackhi_epi32(zmm9, zmm0[0].q)
    zmm10 = _mm_unpackhi_epi32(zmm10, zmm6[0].q)
    zmm8 = _mm_unpackhi_epi16(zmm8, temp0_103[0].q)
    zmm4 = _mm_unpacklo_epi32(zmm4, zmm6[0].q)
    int32_t temp0_115[0x4] = _mm_unpacklo_epi32(zmm8, zmm7[0].q)
    zmm8 = _mm_unpackhi_epi32(zmm8, zmm7[0].q)
    zmm2 = _mm_unpacklo_epi16(zmm2, temp0_97[0].q)
    zmm0 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
    zmm3 = _mm_unpackhi_epi32(zmm3, zmm2[0].q)
    zmm12 = _mm_unpacklo_epi64(zmm11, zmm0[0].q)
    zmm11 = _mm_unpackhi_epi64(zmm11, zmm0[0].q)
    zmm13 = _mm_unpacklo_epi64(zmm9, zmm3[0].q)
    zmm9 = _mm_unpackhi_epi64(zmm9, zmm3[0].q)
    zmm6 = _mm_unpacklo_epi64(zmm4, temp0_115[0].q)
    zmm4 = _mm_unpackhi_epi64(zmm4, temp0_115[0].q)
    zmm7 = _mm_unpacklo_epi64(zmm10, zmm8[0].q)
    zmm10 = _mm_unpackhi_epi64(zmm10, zmm8[0].q)
    i = i_2
    i_2 -= 1
while (i != 1)
int64_t rax_11 = arg4 * 2
int64_t rbx_1 = arg12 + rax_11
int64_t r11_1 = arg8 + rax_11
int64_t r10_1 = arg9 + rax_11
zmm12 = _mm_srai_epi16(_mm_sub_epi16(zmm12, _mm_srai_epi16(zmm12, 0xf)), 1)
int64_t r9 = neg.q(arg4)
zmm11 = _mm_srai_epi16(_mm_sub_epi16(zmm11, _mm_srai_epi16(zmm11, 0xf)), 1)
zmm13 = _mm_sub_epi16(zmm13, _mm_srai_epi16(zmm13, 0xf))
var_188 = zmm12
zmm13 = _mm_srai_epi16(zmm13, 1)
zmm9 = _mm_sub_epi16(zmm9, _mm_srai_epi16(zmm9, 0xf))
var_178 = zmm11
zmm9 = _mm_srai_epi16(zmm9, 1)
zmm6 = _mm_sub_epi16(zmm6, _mm_srai_epi16(zmm6, 0xf))
var_168 = zmm13
zmm6 = _mm_srai_epi16(zmm6, 1)
zmm4 = _mm_sub_epi16(zmm4, _mm_srai_epi16(zmm4, 0xf))
var_148 = zmm6
int16_t temp0_145[0x8] = _mm_srai_epi16(zmm4, 1)
zmm7 = _mm_sub_epi16(zmm7, _mm_srai_epi16(zmm7, 0xf))
var_158 = zmm9
zmm7 = _mm_srai_epi16(zmm7, 1)
zmm10 = _mm_sub_epi16(zmm10, _mm_srai_epi16(zmm10, 0xf))
var_138 = temp0_145
var_118 = _mm_srai_epi16(zmm10, 1)
var_128 = zmm7
int16_t result

if (arg5 != 0)
    int128_t* r10_2 = r10_1 - r11_1
    void* rax_15 = r11_1 + ((r9 + 8) << 1)
    int64_t temp2_1
    
    do
        temp2_1 = r9
        r9 += 0x10
        *(rax_15 + r10_2 - 0x10) = zx.o(0)
        *(r10_2 + rax_15) = zx.o(0)
        *(rax_15 - 0x10) = zx.o(0)
        *rax_15 = zx.o(0)
        rax_15 += 0x20
    while (temp2_1 + 0x10 s< 0)
    result = 0
else
    zmm8 = *arg6
    zmm9 = *arg7
    zmm10 = *arg10
    zmm0 = _mm_srai_epi16(zmm12, 0xf)
    zmm1 = _mm_srai_epi16(zmm11, 0xf)
    zmm3 = _mm_adds_epi16(_mm_sub_epi16(zmm0 ^ zmm12, zmm0), zmm8)
    zmm2 = _mm_sub_epi16(zmm1 ^ zmm11, zmm1)
    zmm3 = _mm_mulhi_epi16(zmm3, zmm9)
    zmm8 = _mm_unpackhi_epi64(zmm8, zmm8[0].q)
    zmm2 = _mm_adds_epi16(zmm2, zmm8)
    zmm9 = _mm_unpackhi_epi64(zmm9, zmm9[0].q)
    zmm2 = _mm_mulhi_epi16(zmm2, zmm9)
    zmm3 = _mm_sub_epi16(zmm3 ^ zmm0, zmm0)
    *(r11_1 + (r9 << 1)) = zmm3
    zmm3 = _mm_mullo_epi16(zmm3, zmm10)
    zmm2 = _mm_sub_epi16(zmm2 ^ zmm1, zmm1)
    zmm10 = _mm_unpackhi_epi64(zmm10, zmm10[0].q)
    *(r11_1 + (r9 << 1) + 0x10) = zmm2
    zmm2 = _mm_mullo_epi16(zmm2, zmm10)
    *(r10_1 + (r9 << 1)) = zmm3
    zmm3 = _mm_cmpeq_epi16(_mm_cmpeq_epi16(zmm3, zx.o(0)), zx.o(0))
    *(r10_1 + (r9 << 1) + 0x10) = zmm2
    zmm2 = _mm_cmpeq_epi16(zmm2, zx.o(0))
    zmm7 = *(rbx_1 + (r9 << 1))
    zmm2 = _mm_cmpeq_epi16(zmm2, zx.o(0))
    zmm7 = _mm_max_epi16(_mm_sub_epi16(zmm7, zmm3) & zmm3, 
        _mm_sub_epi16(*(rbx_1 + (r9 << 1) + 0x10), zmm2) & zmm2)
    
    if (r9 + 0x10 s< 0)
        uint16_t (** rdx)[0x8] = &var_f8
        void* rax_13 = r10_1 + ((r9 + 0x18) << 1)
        int64_t r11_2 = r11_1 - r10_1
        int64_t rbx_2 = rbx_1 - r10_1
        int64_t i_3 = ((-1 - (r9 + 0x10)) u>> 4) + 1
        int64_t i_1
        
        do
            uint16_t (* rcx_5)[0x8] = *rdx
            rax_13 += 0x20
            rdx = &rdx[2]
            zmm0 = *rcx_5
            uint16_t (* rcx_6)[0x8] = rdx[-1]
            zmm1 = _mm_srai_epi16(zmm0, 0xf)
            zmm3 = *rcx_6
            int32_t temp0_175[0x4] = _mm_sub_epi16(zmm1 ^ zmm0, zmm1)
            zmm3 = _mm_srai_epi16(zmm3, 0xf)
            zmm5 = _mm_mulhi_epi16(_mm_adds_epi16(temp0_175, zmm8), zmm9)
            int16_t temp0_181[0x8] =
                _mm_mulhi_epi16(_mm_adds_epi16(_mm_sub_epi16(zmm3 ^ *rcx_6, zmm3), zmm8), zmm9)
            int32_t temp0_182[0x4] = _mm_sub_epi16(zmm5 ^ zmm1, zmm1)
            *(r11_2 + rax_13 - 0x30) = temp0_182
            int32_t temp0_183[0x4] = _mm_mullo_epi16(temp0_182, zmm10)
            zmm4 = _mm_sub_epi16(temp0_181 ^ zmm3, zmm3)
            *(r11_2 + rax_13 - 0x20) = zmm4
            zmm4 = _mm_mullo_epi16(zmm4, zmm10)
            *(rax_13 - 0x30) = temp0_183
            zmm5 = _mm_cmpeq_epi16(_mm_cmpeq_epi16(temp0_183, zx.o(0)), zx.o(0))
            *(rax_13 - 0x20) = zmm4
            int16_t temp0_188[0x8] = _mm_cmpeq_epi16(zmm4, zx.o(0))
            zmm1 = *(rbx_2 + rax_13 - 0x30)
            int16_t temp0_189[0x8] = _mm_cmpeq_epi16(temp0_188, zx.o(0))
            zmm7 = _mm_max_epi16(zmm7, 
                _mm_max_epi16(_mm_sub_epi16(zmm1, zmm5) & zmm5, 
                    _mm_sub_epi16(*(rbx_2 + rax_13 - 0x20), temp0_189) & temp0_189))
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    zmm7 = _mm_max_epi16(zmm7, _mm_shuffle_epi32(zmm7, 0xe))
    zmm7 = _mm_max_epi16(zmm7, _mm_shufflelo_epi16(zmm7, 0xe))
    result = _mm_extract_epi16(_mm_max_epi16(zmm7, _mm_shufflelo_epi16(zmm7, 1)), 1)

*arg11 = result
__security_check_cookie(rax_1 ^ &var_188)
return result
