// 函数: sub_1429ecf00
// 地址: 0x1429ecf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg5[0].o
int128_t var_28 = arg6[0].o
int16_t zmm8[0x10] = *u"@@@@@@@@@@@@@@@"
uint8_t zmm13[0x20] = data_1435ff880
uint8_t zmm14[0x20] = data_1435ff8a0
int16_t zmm0[0x10]
zmm0[0].o = *arg8
uint8_t zmm15[0x20] = data_1435ff8c0
zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
uint128_t var_200 = zmm0[0].o
uint8_t zmm1[0x20] = _mm_broadcastsi128_si256(var_200)
zmm0 = data_1435ff8e0
char zmm9[0x20] = __vpshufb_ymmqq_ymmqq_memqq(zmm1, data_1435ff920)
char zmm10[0x20] = __vpshufb_ymmqq_ymmqq_memqq(zmm1, data_1435ff940)
char zmm11[0x20] = __vpshufb_ymmqq_ymmqq_memqq(zmm1, data_1435ff960)
char zmm12[0x20] = __vpshufb_ymmqq_ymmqq_memqq(zmm1, data_1435ff980)
void* r10 = arg1
int32_t rcx = arg7
char var_180[0x10] = zmm9[0].o
char var_140[0x10] = zmm10[0].o
char var_100[0x10] = zmm11[0].o
char var_1c0[0x10] = zmm12[0].o
int16_t var_e0[0x8] = zmm8[0].o
uint8_t var_1a0[0x10] = zmm13[0].o
uint8_t var_160[0x10] = zmm14[0].o
uint8_t var_120[0x10] = zmm15[0].o
__builtin_memcpy(&var_200, 
    "\x06\x07\x07\x08\x08\x09\x09\x0a\x0a\x0b\x0b\x0c\x0c\x0d\x0d\x0e\x06\x07\x07\x08\x08\x09\x09\x0a\x"
"0a\x0b\x0b\x0c\x0c\x0d\x0d\x0e\x06\x07\x07\x08\x08\x09\x09\x0a\x0a\x0b\x0b\x0c\x0c\x0d\x0d\x
        0e", 
    0x30)
int16_t zmm2[0x10]
int16_t zmm3[0x10]
int16_t zmm4[0x10]
int16_t zmm5[0x10]

if (rcx u> 1)
    uint64_t i_1 = zx.q(((rcx - 2) u>> 1) + 1)
    uint64_t i
    
    do
        zmm1[0].o = *(r10 - 3)
        arg5 = __vinserti128_ymmqq_ymmqq_memdq_immb(zmm1, *(r10 + arg2 - 3), 1)
        zmm1 = _mm256_shuffle_epi8(arg5, zmm15)
        zmm3 = _mm256_maddubs_epi16(zmm1, zmm11)
        zmm1[0].o = *(r10 + 5)
        arg6 = __vinserti128_ymmqq_ymmqq_memdq_immb(zmm1, *(r10 + arg2 + 5), 1)
        zmm2 = _mm256_maddubs_epi16(__vpshufb_ymmqq_ymmqq_memqq(arg5, var_200.32), zmm12)
        zmm4 = _mm256_maddubs_epi16(_mm256_shuffle_epi8(arg5, zmm14), zmm10)
        zmm5 = _mm256_max_epi16(zmm4, zmm3)
        zmm4 = _mm256_min_epi16(zmm4, zmm3)
        arg5 = _mm256_adds_epi16(
            _mm256_adds_epi16(
                _mm256_adds_epi16(zmm2, 
                    _mm256_maddubs_epi16(_mm256_shuffle_epi8(arg5, zmm13), zmm9)), 
                zmm4), 
            zmm5)
        zmm2 = _mm256_maddubs_epi16(_mm256_shuffle_epi8(arg6, zmm14), zmm10)
        zmm0 = _mm256_maddubs_epi16(_mm256_shuffle_epi8(arg6, zmm15), zmm11)
        zmm1 = __vpshufb_ymmqq_ymmqq_memqq(arg6, var_200.32)
        zmm4 = _mm256_min_epi16(zmm2, zmm0)
        zmm5 = _mm256_max_epi16(zmm2, zmm0)
        zmm3 = _mm256_adds_epi16(
            _mm256_adds_epi16(_mm256_maddubs_epi16(zmm1, zmm12), 
                _mm256_maddubs_epi16(_mm256_shuffle_epi8(arg6, zmm13), zmm9)), 
            zmm4)
        zmm2 = _mm256_adds_epi16(_mm256_adds_epi16(zmm3, zmm5), zmm8)
        zmm0 = _mm256_adds_epi16(arg5, zmm8)
        zmm1 = _mm256_srai_epi16(zmm0, 7)
        zmm4 = _mm256_srai_epi16(zmm2, 7)
        zmm2 = _mm256_packus_epi16(zmm1, zmm4)
        *arg3 = zmm2[0].o
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        *(arg3 + arg4) = zmm0[0].o
        arg3 += arg4 * 2
        r10 += arg2 * 2
        rcx -= 2
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rcx != 0)
    zmm1[0].o = *(r10 - 3)
    zmm0[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm1[0].o, var_160)
    arg5[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, var_140)
    zmm0[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm1[0].o, var_120)
    zmm5[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, var_100)
    zmm0[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm1[0].o, var_1a0)
    zmm3[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, var_180)
    uint8_t var_1e0[0x10]
    zmm1[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm1[0].o, var_1e0)
    zmm2[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm1[0].o, var_1c0)
    zmm11[0].o = *(r10 + 5)
    zmm3[0].o = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
    zmm0[0].o = __vpminsw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    zmm4[0].o = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm0[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm11[0].o, var_160)
    zmm8[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, var_140)
    zmm1[0].o = __vpmaxsw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    zmm2[0].o = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
    zmm0[0].o = __vpaddsw_xmmdq_xmmdq_memdq(zmm2[0].o, var_e0)
    zmm1[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm11[0].o, var_120)
    zmm5[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm1[0].o, var_100)
    zmm1[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm11[0].o, var_1a0)
    zmm3[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm1[0].o, var_180)
    arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 7)
    zmm0[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm11[0].o, var_1e0)
    zmm2[0].o = __vpmaddubsw_xmmdq_xmmdq_memdq(zmm0[0].o, var_1c0)
    zmm3[0].o = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
    zmm1[0].o = __vpminsw_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm5[0].o)
    zmm4[0].o = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    zmm0[0].o = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm5[0].o)
    zmm2[0].o = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
    zmm1[0].o = __vpaddsw_xmmdq_xmmdq_memdq(zmm2[0].o, var_e0)
    zmm3[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 7)
    zmm0[0].o = __vpackuswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
    *arg3 = zmm0[0].o

_mm256_zeroupper()
arg5[0].o = var_18
arg6[0].o = var_28
return arg8
