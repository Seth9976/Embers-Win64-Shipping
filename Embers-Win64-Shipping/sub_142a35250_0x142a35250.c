// 函数: sub_142a35250
// 地址: 0x142a35250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg3 & 0xfffffff8

if (r8 s<= 0)
    return 

char zmm4[0x10] = data_14360a7a0
void* rax = arg1 + 4
char zmm5[0x10] = data_14360a7b0
int32_t zmm6[0x4] = *u"@@@@@@@"
uint64_t i_1 = zx.q(((r8 - 1) u>> 3) + 1)
uint64_t i

do
    int64_t zmm0 = *(rax - 1)
    uint128_t zmm3 = zx.o(*(rax - 2))
    uint128_t zmm1 = zx.o(*(rax - 4))
    int16_t zmm2[0x8] = zx.o(*(rax + 3))
    rax += 8
    zmm3 = _mm_unpacklo_epi8(zmm3, zmm0)
    zmm1 = _mm_unpacklo_epi8(zmm1, *(rax - 0xb))
    zmm0 = *(rax - 6)
    zmm3 = _mm_maddubs_epi16(zmm3, zmm5)
    zmm1 = _mm_maddubs_epi16(zmm1, zmm4)
    zmm2 = _mm_unpacklo_epi8(zmm2, zmm0)
    zmm0 = *(rax - 8)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm4)
    zmm3 = _mm_srai_epi16(
        _mm_adds_epi16(
            _mm_adds_epi16(_mm_add_epi16(zmm3, zmm1), 
                _mm_add_epi16(zmm2, 
                    _mm_maddubs_epi16(_mm_unpacklo_epi8(zx.o(*(rax - 7)), zmm0), zmm5))), 
            zmm6), 
        7)
    *(arg2 - arg1 - 4 + rax - 8) = _mm_packus_epi16(zmm3, zmm3).q
    i = i_1
    i_1 -= 1
while (i != 1)
