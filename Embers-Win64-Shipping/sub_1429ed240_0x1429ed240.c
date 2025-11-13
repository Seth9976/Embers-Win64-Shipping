// 函数: sub_1429ed240
// 地址: 0x1429ed240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3[0x2]
zmm3[0] = *(arg1 + arg2)
uint8_t zmm9[0x20]
zmm9[0].o = *(arg1 + (arg2 << 2))
uint128_t zmm5[0x2]
zmm5[0] = *(arg1 + (arg2 << 1))
int16_t zmm13[0x10] = *u"@@@@@@@@@@@@@@@"
uint128_t temp0[0x2] = _mm256_inserti128_si256(zmm3, zmm5[0], 1)
int128_t* r10 = arg1
uint8_t zmm0[0x20]
zmm0[0].o = *arg6
zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
uint128_t temp0_2[0x2] = _mm_broadcastsi128_si256(zmm0[0].o)
uint8_t temp0_3[0x20] = __vpshufb_ymmqq_ymmqq_memqq(temp0_2, data_1435ff940)
uint8_t temp0_4[0x20] = __vpshufb_ymmqq_ymmqq_memqq(temp0_2, data_1435ff980)
uint8_t temp0_5[0x20] = __vpshufb_ymmqq_ymmqq_memqq(temp0_2, data_1435ff920)
uint8_t zmm7[0x20]
zmm7[0].o = *(arg2 * 3 + arg1)
uint128_t zmm8[0x2]
zmm8[0] = *(arg2 * 5 + arg1)
zmm5 = _mm256_inserti128_si256(zmm5, zmm7[0].o, 1)
uint128_t var_240
var_240.32 = temp0_3
zmm0 = __vpshufb_ymmqq_ymmqq_memqq(temp0_2, data_1435ff960)
temp0_2[0] = *arg1
uint128_t zmm6[0x2] = _mm256_inserti128_si256(temp0_2, zmm3[0], 1)
zmm3 = _mm256_inserti128_si256(zmm9, zmm8[0], 1)
uint8_t zmm12[0x20] = _mm256_unpacklo_epi8(zmm6, temp0)
void* result = arg2 * 3
uint128_t zmm14[0x2]
zmm14[0] = *(arg1 + (result << 1))
int32_t rcx = arg5
uint128_t zmm1[0x2] = _mm256_inserti128_si256(zmm8, zmm14[0], 1)
uint8_t zmm2[0x20] = _mm256_inserti128_si256(zmm7, zmm9[0].o, 1)
uint128_t zmm4[0x2] = _mm256_unpackhi_epi8(zmm6, temp0)
uint8_t zmm10[0x20] = _mm256_unpacklo_epi8(zmm3, zmm1)
uint8_t zmm11[0x20] = _mm256_unpackhi_epi8(zmm3, zmm1)
zmm8 = _mm256_unpacklo_epi8(zmm5, zmm2)
zmm9 = _mm256_unpackhi_epi8(zmm5, zmm2)
uint128_t var_140 = zmm4[0]
uint128_t var_1c0 = zmm10[0].o
int128_t var_1a0 = zmm11[0].o
int16_t var_e0[0x8] = zmm13[0].o
char var_100[0x10] = temp0_5[0].o
char var_220[0x20] = zmm0
int128_t var_160 = zmm12[0].o
uint128_t var_200 = zmm8[0]
int128_t var_1e0 = zmm9[0].o

if (rcx u> 1)
    uint64_t i_1 = zx.q(((rcx - 2) u>> 1) + 1)
    uint8_t temp0_22[0x20]
    uint64_t i
    
    do
        zmm1[0] = *(arg2 * 7 + r10)
        zmm0 = __vpmaddubsw_ymmqq_ymmqq_memqq(zmm10, var_220)
        zmm2 = _mm256_inserti128_si256(zmm14, zmm1[0], 1)
        zmm14[0] = *(r10 + (arg2 << 3))
        uint128_t temp0_20[0x2] = _mm256_inserti128_si256(zmm1, zmm14[0], 1)
        zmm6 = _mm256_unpacklo_epi8(zmm2, temp0_20)
        temp0_22 = _mm256_unpackhi_epi8(zmm2, temp0_20)
        zmm2 = __vpmaddubsw_ymmqq_ymmqq_memqq(zmm8, var_240.32)
        zmm3 = _mm256_max_epi16(zmm0, zmm2)
        zmm2 = _mm256_min_epi16(zmm0, zmm2)
        zmm1 = _mm256_adds_epi16(__vpmaddubsw_ymmqq_ymmqq_memqq(zmm6, temp0_4), 
            _mm256_maddubs_epi16(zmm12, temp0_5))
        zmm0 = __vpmaddubsw_ymmqq_ymmqq_memqq(zmm11, var_220)
        zmm2 = _mm256_adds_epi16(zmm1, zmm2)
        zmm1 = __vpmaddubsw_ymmqq_ymmqq_memqq(zmm9, var_240.32)
        zmm5 = _mm256_adds_epi16(zmm2, zmm3)
        zmm3 = _mm256_max_epi16(zmm0, zmm1)
        zmm2 = _mm256_min_epi16(zmm0, zmm1)
        zmm0 = _mm256_adds_epi16(
            _mm256_adds_epi16(
                _mm256_adds_epi16(
                    _mm256_adds_epi16(__vpmaddubsw_ymmqq_ymmqq_memqq(temp0_22, temp0_4), 
                        _mm256_maddubs_epi16(zmm4, temp0_5)), 
                    zmm2), 
                zmm3), 
            zmm13)
        zmm4 = _mm256_srai_epi16(zmm0, 7)
        zmm1 = _mm256_adds_epi16(zmm5, zmm13)
        zmm2 = _mm256_srai_epi16(zmm1, 7)
        zmm3 = _mm256_packus_epi16(zmm2, zmm4)
        *arg3 = zmm3[0]
        zmm0[0].o = _mm256_extractf128_ps(zmm3[0], 1)
        *(arg3 + arg4) = zmm0[0].o
        arg3 += arg4 * 2
        r10 += arg2 * 2
        rcx -= 2
        zmm12 = zmm8
        zmm4 = zmm9
        zmm8 = zmm10
        zmm9 = zmm11
        zmm10 = zmm6
        zmm11 = temp0_22
        i = i_1
        i_1 -= 1
    while (i != 1)
    zmm14[0] = zmm14[0]
    var_200 = zmm8[0]
    var_1e0 = zmm9[0].o
    var_1c0 = zmm6[0]
    var_1a0 = temp0_22[0].o
    var_160 = zmm12[0].o
    var_140 = zmm4[0]

if (rcx != 0)
    zmm0[0].o = var_200
    zmm10[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, var_240)
    zmm1[0] = var_1e0
    zmm13[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm1[0], var_240)
    zmm0[0].o = var_1c0
    zmm5[0] = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, var_220[0].o)
    zmm1[0] = var_1a0
    zmm11[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm1[0], var_220[0].o)
    zmm1[0] = var_160
    zmm2[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm1[0], var_100)
    zmm1[0] = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm5[0])
    result = arg2 * 7
    zmm6[0] = zmm14[0]
    zmm0[0].o = __vpunpcklbw_xmmdq_xmmdq_memdq(zmm6[0], *(result + r10))
    zmm3[0] = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_4[0].o)
    zmm3[0] = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm3[0], zmm2[0].o)
    zmm0[0].o = __vpminsw_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm5[0])
    zmm4[0] = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm3[0], zmm0[0].o)
    zmm2[0].o = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm4[0], zmm1[0])
    zmm0[0].o = __vpaddsw_xmmdq_xmmdq_memdq(zmm2[0].o, var_e0)
    zmm1[0] = __vpunpckhbw_xmmdq_xmmdq_memdq(zmm6[0], *(result + r10))
    zmm3[0] = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm1[0], temp0_4[0].o)
    zmm5[0] = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 7)
    zmm0[0].o = var_140
    zmm2[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, var_100)
    zmm3[0] = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm3[0], zmm2[0].o)
    zmm1[0] = __vpminsw_xmmdq_xmmdq_xmmdq(zmm13[0].o, zmm11[0].o)
    zmm4[0] = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm3[0], zmm1[0])
    zmm0[0].o = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm13[0].o, zmm11[0].o)
    zmm2[0].o = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm4[0], zmm0[0].o)
    zmm1[0] = __vpaddsw_xmmdq_xmmdq_memdq(zmm2[0].o, var_e0)
    zmm3[0] = __vpsraw_xmmdq_xmmdq_immb(zmm1[0], 7)
    zmm0[0].o = __vpackuswb_xmmdq_xmmdq_xmmdq(zmm5[0], zmm3[0])
    *arg3 = zmm0[0].o

_mm256_zeroupper()
return result
