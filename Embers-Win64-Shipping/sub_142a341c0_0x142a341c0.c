// 函数: sub_142a341c0
// 地址: 0x142a341c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t zmm8[0x8]
uint16_t var_48[0x8] = zmm8
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t zmm15[0x4] = data_14360a1e0
int32_t zmm14[0x4] = data_1435ffa40
uint16_t zmm12[0x8] = _mm_slli_epi16(*arg1, 2)
uint16_t zmm11[0x8] = _mm_slli_epi16(*(arg1 + (sx.q(arg2.d) << 1)), 2)
uint16_t zmm13[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 * 2).d) << 1)), 2)
uint16_t zmm9[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 * 3).d) << 1)), 2)
uint16_t zmm6[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 << 2).d) << 1)), 2)
uint16_t zmm4[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 * 5).d) << 1)), 2)
uint16_t zmm7[0x8] = _mm_slli_epi16(*(arg1 + (sx.q((arg2 * 3).d * 2) << 1)), 2)
uint16_t var_188[0x8]
int128_t* var_108 = &var_188
uint16_t var_178[0x8]
int128_t* var_100 = &var_178
uint16_t var_168[0x8]
uint16_t (* var_f8)[0x8] = &var_168
uint16_t var_158[0x8]
int128_t* var_f0 = &var_158
uint16_t var_148[0x8]
int128_t* var_e8 = &var_148
uint16_t var_138[0x8]
uint16_t (* var_e0)[0x8] = &var_138
uint16_t var_128[0x8]
int128_t* var_d8 = &var_128
uint16_t var_118[0x8]
int128_t* var_d0 = &var_118
int64_t i_2 = 2
uint16_t zmm10[0x8] = _mm_slli_epi16(*(arg1 + (sx.q(arg2.d * 7) << 1)), 2)
uint16_t zmm0[0x8]
int16_t zmm1[0x8]
int32_t zmm2[0x4]
int32_t zmm3[0x4]
uint16_t zmm5[0x8]
int64_t i

do
    zmm5 = _mm_add_epi16(zmm7, zmm11)
    zmm11 = _mm_sub_epi16(zmm11, zmm7)
    zmm2 = _mm_add_epi16(zmm6, zmm9)
    zmm9 = _mm_sub_epi16(zmm9, zmm6)
    int16_t temp0_12[0x8] = _mm_add_epi16(zmm4, zmm13)
    zmm13 = _mm_sub_epi16(zmm13, zmm4)
    zmm3 = _mm_add_epi16(zmm10, zmm12)
    zmm4 = _mm_add_epi16(zmm2, zmm3)
    zmm12 = _mm_sub_epi16(zmm12, zmm10)
    int32_t temp0_17[0x4] = _mm_sub_epi16(zmm3, zmm2)
    zmm0 = _mm_add_epi16(temp0_12, zmm5)
    zmm5 = _mm_sub_epi16(zmm5, temp0_12)
    zmm8 = _mm_unpacklo_epi16(zmm4, zmm0[0].q)
    zmm4 = _mm_unpackhi_epi16(zmm4, zmm0[0].q)
    zmm10 = __pmaddwd_xmmdq_memdq(zmm8, *"A-A-A-A-A-A-A-A-")
    zmm0 = __pmaddwd_xmmdq_memdq(zmm4, *"A-A-A-A-A-A-A-A-")
    zmm4 = __pmaddwd_xmmdq_memdq(zmm4, data_1435ffdc0)
    zmm8 = __pmaddwd_xmmdq_memdq(zmm8, data_1435ffdc0)
    zmm7 = _mm_unpacklo_epi16(zmm5, temp0_17[0].q)
    zmm5 = _mm_unpackhi_epi16(zmm5, temp0_17[0].q)
    zmm6 = __pmaddwd_xmmdq_memdq(zmm7, data_1435ffd20)
    zmm0 = _mm_add_epi32(zmm0, zmm14)
    zmm7 = __pmaddwd_xmmdq_memdq(zmm7, data_1435ffc20)
    zmm4 = _mm_add_epi32(zmm4, zmm14)
    zmm0 = _mm_srai_epi32(zmm0, 0xe)
    zmm10 = _mm_add_epi32(zmm10, zmm14)
    zmm4 = _mm_srai_epi32(zmm4, 0xe)
    zmm8 = _mm_add_epi32(zmm8, zmm14)
    zmm10 = _mm_packs_epi32(_mm_srai_epi32(zmm10, 0xe), zmm0)
    zmm6 = _mm_srai_epi32(_mm_add_epi32(zmm6, zmm14), 0xe)
    zmm0 = __pmaddwd_xmmdq_memdq(zmm5, data_1435ffd20)
    zmm7 = _mm_add_epi32(zmm7, zmm14)
    zmm5 = __pmaddwd_xmmdq_memdq(zmm5, data_1435ffc20)
    zmm8 = _mm_packs_epi32(_mm_srai_epi32(zmm8, 0xe), zmm4)
    zmm7 = _mm_srai_epi32(zmm7, 0xe)
    zmm0 = _mm_srai_epi32(_mm_add_epi32(zmm0, zmm14), 0xe)
    zmm5 = _mm_add_epi32(zmm5, zmm14)
    zmm6 = _mm_packs_epi32(zmm6, zmm0)
    zmm0 = _mm_sub_epi16(zmm11, zmm13)
    zmm5 = _mm_srai_epi32(zmm5, 0xe)
    zmm0 = _mm_mulhrs_epi16(zmm0, zmm15)
    zmm11 = _mm_mulhrs_epi16(_mm_add_epi16(zmm11, zmm13), zmm15)
    zmm7 = _mm_packs_epi32(zmm7, zmm5)
    int16_t temp0_56[0x8] = _mm_add_epi16(zmm0, zmm9)
    zmm9 = _mm_sub_epi16(zmm9, zmm0)
    zmm0 = _mm_sub_epi16(zmm12, zmm11)
    zmm11 = _mm_add_epi16(zmm11, zmm12)
    int32_t temp0_60[0x4] = _mm_unpacklo_epi16(zmm9, zmm0[0].q)
    zmm9 = _mm_unpackhi_epi16(zmm9, zmm0[0].q)
    zmm4 = _mm_unpacklo_epi16(temp0_56, zmm11[0].q)
    zmm1 = _mm_unpackhi_epi16(temp0_56, zmm11[0].q)
    zmm2 = __pmaddwd_xmmdq_memdq(zmm4, data_1435ffd60)
    zmm0 = __pmaddwd_xmmdq_memdq(zmm1, data_1435ffd60)
    int32_t temp0_66[0x4] = _mm_add_epi32(zmm2, zmm14)
    zmm0 = _mm_add_epi32(zmm0, zmm14)
    int32_t temp0_68[0x4] = _mm_srai_epi32(temp0_66, 0xe)
    zmm0 = _mm_srai_epi32(zmm0, 0xe)
    int16_t temp0_70[0x8] = __pmaddwd_xmmdq_memdq(zmm1, data_1435ffbd0[0x10][0].o)
    zmm4 = __pmaddwd_xmmdq_memdq(zmm4, data_1435ffbd0[0x10][0].o)
    int32_t temp0_72[0x4] = _mm_packs_epi32(temp0_68, zmm0)
    zmm0 = zmm9
    zmm9 = __pmaddwd_xmmdq_memdq(zmm9, data_1435ffcd0[0x10][0].o)
    zmm0 = __pmaddwd_xmmdq_memdq(zmm0, data_1435ffc60)
    zmm1 = _mm_srai_epi32(_mm_add_epi32(temp0_70, zmm14), 0xe)
    zmm4 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(zmm4, zmm14), 0xe), zmm1)
    zmm3 = __pmaddwd_xmmdq_memdq(temp0_60, data_1435ffcd0[0x10][0].o)
    zmm9 = _mm_add_epi32(zmm9, zmm14)
    int16_t temp0_82[0x8] = __pmaddwd_xmmdq_memdq(temp0_60, data_1435ffc60)
    zmm0 = _mm_add_epi32(zmm0, zmm14)
    zmm9 = _mm_srai_epi32(zmm9, 0xe)
    zmm0 = _mm_srai_epi32(zmm0, 0xe)
    int32_t temp0_87[0x4] = _mm_srai_epi32(_mm_add_epi32(zmm3, zmm14), 0xe)
    zmm1 = _mm_add_epi32(temp0_82, zmm14)
    int32_t temp0_89[0x4] = _mm_packs_epi32(temp0_87, zmm9)
    zmm9 = _mm_unpacklo_epi16(zmm10, temp0_72[0].q)
    zmm10 = _mm_unpackhi_epi16(zmm10, temp0_72[0].q)
    zmm2 = zmm7
    zmm7 = _mm_unpackhi_epi16(zmm7, zmm4[0].q)
    int32_t temp0_93[0x4] = _mm_unpacklo_epi16(zmm2, zmm4[0].q)
    zmm4 = zmm10
    zmm1 = _mm_packs_epi32(_mm_srai_epi32(zmm1, 0xe), zmm0)
    zmm0 = _mm_unpacklo_epi16(zmm6, temp0_89[0].q)
    zmm6 = _mm_unpackhi_epi16(zmm6, temp0_89[0].q)
    int32_t temp0_98[0x4] = _mm_unpacklo_epi16(zmm8, zmm1[0].q)
    zmm11 = _mm_unpacklo_epi32(zmm9, zmm0[0].q)
    zmm9 = _mm_unpackhi_epi32(zmm9, zmm0[0].q)
    zmm10 = _mm_unpackhi_epi32(zmm10, zmm6[0].q)
    zmm8 = _mm_unpackhi_epi16(zmm8, zmm1[0].q)
    zmm4 = _mm_unpacklo_epi32(zmm4, zmm6[0].q)
    zmm1 = _mm_unpacklo_epi32(zmm8, zmm7[0].q)
    zmm8 = _mm_unpackhi_epi32(zmm8, zmm7[0].q)
    zmm0 = _mm_unpacklo_epi32(temp0_98, temp0_93[0].q)
    int32_t temp0_107[0x4] = _mm_unpackhi_epi32(temp0_98, temp0_93[0].q)
    zmm12 = _mm_unpacklo_epi64(zmm11, zmm0[0].q)
    zmm11 = _mm_unpackhi_epi64(zmm11, zmm0[0].q)
    zmm6 = _mm_unpacklo_epi64(zmm4, zmm1[0].q)
    zmm7 = _mm_unpacklo_epi64(zmm10, zmm8[0].q)
    zmm13 = _mm_unpacklo_epi64(zmm9, temp0_107[0].q)
    zmm9 = _mm_unpackhi_epi64(zmm9, temp0_107[0].q)
    zmm4 = _mm_unpackhi_epi64(zmm4, zmm1[0].q)
    zmm10 = _mm_unpackhi_epi64(zmm10, zmm8[0].q)
    i = i_2
    i_2 -= 1
while (i != 1)
int64_t rcx_5 = arg4 * 2
int64_t rbx_1 = arg12 + rcx_5
int64_t r10_1 = arg8 + rcx_5
int64_t r11_1 = arg9 + rcx_5
zmm12 = _mm_srai_epi16(_mm_sub_epi16(zmm12, _mm_srai_epi16(zmm12, 0xf)), 1)
int64_t r9 = neg.q(arg4)
zmm11 = _mm_sub_epi16(zmm11, _mm_srai_epi16(zmm11, 0xf))
zmm13 = _mm_sub_epi16(zmm13, _mm_srai_epi16(zmm13, 0xf))
zmm9 = _mm_sub_epi16(zmm9, _mm_srai_epi16(zmm9, 0xf))
zmm6 = _mm_sub_epi16(zmm6, _mm_srai_epi16(zmm6, 0xf))
zmm4 = _mm_sub_epi16(zmm4, _mm_srai_epi16(zmm4, 0xf))
zmm7 = _mm_sub_epi16(zmm7, _mm_srai_epi16(zmm7, 0xf))
zmm4 = _mm_srai_epi16(zmm4, 1)
zmm10 = _mm_sub_epi16(zmm10, _mm_srai_epi16(zmm10, 0xf))
zmm11 = _mm_srai_epi16(zmm11, 1)
zmm10 = _mm_srai_epi16(zmm10, 1)
zmm13 = _mm_srai_epi16(zmm13, 1)
zmm9 = _mm_srai_epi16(zmm9, 1)
zmm6 = _mm_srai_epi16(zmm6, 1)
zmm7 = _mm_srai_epi16(zmm7, 1)
var_138 = zmm4
var_118 = zmm10
var_188 = zmm12
var_178 = zmm11
var_168 = zmm13
var_158 = zmm9
var_148 = zmm6
var_128 = zmm7
int16_t result

if (arg5 != i_2.d)
    int128_t* r11_4 = r11_1 - r10_1
    void* rax_14 = r10_1 + ((r9 + 8) << 1)
    int64_t temp2_1
    
    do
        temp2_1 = r9
        r9 += 0x10
        *(r11_4 + rax_14 - 0x10) = zx.o(0)
        *(r11_4 + rax_14) = zx.o(0)
        *(rax_14 - 0x10) = zx.o(0)
        *rax_14 = zx.o(0)
        rax_14 += 0x20
    while (temp2_1 + 0x10 s< 0)
    result = 0
else
    zmm9 = *arg6
    zmm10 = *arg7
    zmm8 = *arg10
    zmm0 = _mm_srai_epi16(zmm12, 0xf)
    int16_t temp0_141[0x8] = _mm_srai_epi16(zmm11, 0xf)
    int32_t temp0_143[0x4] = _mm_adds_epi16(_mm_sub_epi16(zmm0 ^ zmm12, zmm0), zmm9)
    int32_t temp0_144[0x4] = _mm_sub_epi16(temp0_141 ^ zmm11, temp0_141)
    zmm3 = _mm_mulhi_epi16(temp0_143, zmm10)
    zmm9 = _mm_unpackhi_epi64(zmm9, zmm9[0].q)
    int32_t temp0_147[0x4] = _mm_adds_epi16(temp0_144, zmm9)
    zmm10 = _mm_unpackhi_epi64(zmm10, zmm10[0].q)
    zmm2 = _mm_mulhi_epi16(temp0_147, zmm10)
    int32_t temp0_150[0x4] = _mm_sub_epi16(zmm3 ^ zmm0, zmm0)
    *(r10_1 + (r9 << 1)) = temp0_150
    int32_t temp0_151[0x4] = _mm_mullo_epi16(temp0_150, zmm8)
    int32_t temp0_152[0x4] = _mm_sub_epi16(zmm2 ^ temp0_141, temp0_141)
    zmm8 = _mm_unpackhi_epi64(zmm8, zmm8[0].q)
    *(r10_1 + (r9 << 1) + 0x10) = temp0_152
    int32_t temp0_154[0x4] = _mm_mullo_epi16(temp0_152, zmm8)
    zmm11 = _mm_srai_epi16(zmm8, 1)
    *(r11_1 + (r9 << 1)) = temp0_151
    zmm3 = _mm_cmpeq_epi16(_mm_cmpeq_epi16(temp0_151, zx.o(0)), zx.o(0))
    *(r11_1 + (r9 << 1) + 0x10) = temp0_154
    zmm2 = _mm_cmpeq_epi16(temp0_154, zx.o(0))
    zmm5 = *(rbx_1 + (r9 << 1))
    zmm2 = _mm_cmpeq_epi16(zmm2, zx.o(0))
    zmm5 = _mm_max_epi16(_mm_sub_epi16(zmm5, zmm3) & zmm3, 
        _mm_sub_epi16(*(rbx_1 + (r9 << 1) + 0x10), zmm2) & zmm2)
    
    if (r9 + 0x10 s< 0)
        int32_t (* r10_2)[0x4] = r10_1 - r11_1
        void* rax_12 = r11_1 + ((r9 + 0x18) << 1)
        uint16_t (** r8_1)[0x8] = &var_f8
        int64_t i_3 = ((-1 - (r9 + 0x10)) u>> 4) + 1
        int64_t i_1
        
        do
            zmm0 = **r8_1
            uint16_t (* rcx_7)[0x8] = r8_1[1]
            zmm6 = _mm_srai_epi16(zmm0, 0xf)
            zmm7 = *rcx_7
            int32_t temp0_164[0x4] = _mm_sub_epi16(zmm6 ^ zmm0, zmm6)
            zmm7 = _mm_srai_epi16(zmm7, 0xf)
            int16_t temp0_166[0x8] = _mm_cmpgt_epi16(temp0_164, zmm11)
            int32_t temp0_167[0x4] = _mm_sub_epi16(zmm7 ^ *rcx_7, zmm7)
            int16_t temp0_168 = _mm_movemask_epi8(temp0_166)
            
            if ((_mm_movemask_epi8(_mm_cmpgt_epi16(temp0_167, zmm11)) | temp0_168) == 0)
                *(r10_2 + rax_12 - 0x10) = zx.o(0)
                *(r10_2 + rax_12) = zx.o(0)
                *(rax_12 - 0x10) = zx.o(0)
                *rax_12 = zx.o(0)
            else
                int32_t temp0_171[0x4] = _mm_adds_epi16(temp0_164, zmm9)
                int32_t temp0_172[0x4] = _mm_adds_epi16(temp0_167, zmm9)
                zmm2 = _mm_mulhi_epi16(temp0_171, zmm10)
                zmm3 = _mm_mulhi_epi16(temp0_172, zmm10) ^ zmm7
                int32_t temp0_175[0x4] = _mm_sub_epi16(zmm2 ^ zmm6, zmm6)
                *(r10_2 + rax_12 - 0x10) = temp0_175
                int32_t temp0_176[0x4] = _mm_sub_epi16(zmm3, zmm7)
                *(r10_2 + rax_12) = temp0_176
                int32_t temp0_177[0x4] = _mm_mullo_epi16(temp0_175, zmm8)
                int32_t temp0_178[0x4] = _mm_mullo_epi16(temp0_176, zmm8)
                *(rax_12 - 0x10) = temp0_177
                zmm2 = _mm_cmpeq_epi16(temp0_177, zx.o(0))
                *rax_12 = temp0_178
                zmm2 = _mm_cmpeq_epi16(zmm2, zx.o(0))
                zmm1 = *(rbx_1 - r11_1 + rax_12 - 0x10)
                zmm3 = _mm_cmpeq_epi16(temp0_178, zx.o(0))
                zmm0 = *(-0x10 - r11_1 + rax_12 + rbx_1 + 0x10)
                zmm3 = _mm_cmpeq_epi16(zmm3, zx.o(0))
                zmm5 = _mm_max_epi16(zmm5, 
                    _mm_max_epi16(_mm_sub_epi16(zmm1, zmm2) & zmm2, 
                        _mm_sub_epi16(zmm0, zmm3) & zmm3))
            
            rax_12 += 0x20
            r8_1 = &r8_1[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    zmm5 = _mm_max_epi16(zmm5, _mm_shuffle_epi32(zmm5, 0xe))
    zmm5 = _mm_max_epi16(zmm5, _mm_shufflelo_epi16(zmm5, 0xe))
    result = _mm_extract_epi16(_mm_max_epi16(zmm5, _mm_shufflelo_epi16(zmm5, 1)), 1)

*arg11 = result
__security_check_cookie(rax_1 ^ &var_198)
return result
