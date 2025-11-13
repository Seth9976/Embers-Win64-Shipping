// 函数: sub_14038b4c2
// 地址: 0x14038b4c2
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_28[0x4] = zmm6
int64_t rdx = sx.q(arg4)
int64_t* rdi = arg2
int128_t* rsi_2 = arg1 - rdx * 2
int64_t i_1 = sx.q(arg5)
int512_t result
result.o = zx.o(0)
int32_t zmm7[0x4] = *u"@@@@@@@"
int64_t i

do
    int32_t temp0_1[0x4] = __pmullw_xmmdq_memdq(*rsi_2, *arg6)
    int32_t temp0_2[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + rdx), arg6[1])
    int32_t temp0_3[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + (rdx << 1)), arg6[2])
    int32_t temp0_4[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + (rdx << 2)), arg6[4])
    rsi_2 += rdx
    int32_t temp0_5[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + (rdx << 1)), arg6[3])
    int32_t temp0_6[0x4] = __pmullw_xmmdq_memdq(*(rsi_2 + (rdx << 2)), arg6[5])
    *rdi = _mm_packus_epi16(
        _mm_srai_epi16(
            _mm_adds_epi16(
                _mm_adds_epi16(
                    _mm_adds_epi16(
                        _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(temp0_2, temp0_4), temp0_3), 
                            temp0_1), 
                        temp0_5), 
                    temp0_6), 
                zmm7), 
            7), 
        zx.o(0))[0].q
    rdi += sx.q(arg3)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
