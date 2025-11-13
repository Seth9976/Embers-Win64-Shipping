// 函数: sub_14038b967
// 地址: 0x14038b967
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
int64_t* rsi = arg1
int64_t* rdi = arg3
int64_t i_1 = sx.q(arg5)
int64_t rdx = sx.q(arg2)
int32_t zmm7[0x4] = *u"@@@@@@@"
int64_t i

do
    uint128_t zmm1 = zx.o(*rsi)
    int32_t zmm2[0x4] = zx.o(*(rsi + rdx))
    uint128_t zmm3 = zx.o(*(rsi + (rdx << 1)))
    uint128_t zmm5 = zx.o(*(rsi + (rdx << 2)))
    rsi += rdx
    uint128_t zmm4 = zx.o(*(rsi + (rdx << 1)))
    zmm6 = zx.o(*(rsi + (rdx << 2)))
    zmm1 = __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zmm1, 0), *arg6)
    int32_t temp0_4[0x4] = __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zmm2, 0), arg6[1])
    zmm3 = __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zmm3, 0), arg6[2])
    zmm5 = __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zmm5, 0), arg6[4])
    zmm4 = __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zmm4, 0), arg6[3])
    zmm6 = __pmullw_xmmdq_memdq(_mm_unpacklo_epi8(zmm6, 0), arg6[5])
    *rdi = _mm_packus_epi16(
        _mm_srai_epi16(
            _mm_adds_epi16(
                _mm_adds_epi16(
                    _mm_adds_epi16(
                        _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_4, zmm5), zmm3), zmm1), 
                        zmm4), 
                    zmm6), 
                zmm7), 
            7), 
        zx.o(0))[0].q
    rdi += sx.q(arg4)
    i = i_1
    i_1 -= 1
while (i != 1)
return arg6
