// 函数: sub_1403be0e9
// 地址: 0x1403be0e9
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = _mm_shufflelo_epi16(zx.o(arg5), 0)
zmm0 = _mm_unpacklo_epi64(zmm0, zmm0.q)
int32_t temp0_2[0x4] = _mm_sub_epi16(data_14427f110, zmm0)
int64_t* result = arg1
int64_t* rdx = arg3
int64_t i_1 = 8
int64_t i

do
    int32_t zmm2[0x4] = zx.o(*result)
    result += arg2
    *rdx = _mm_packus_epi16(
        _mm_srli_epi16(
            __paddw_xmmdq_memdq(
                _mm_add_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(zmm2, 0), zmm0), 
                    _mm_mullo_epi16(_mm_unpacklo_epi8(zx.o(*rdx), 0), temp0_2)), 
                data_14427f120), 
            4), 
        zx.o(0))[0].q
    rdx += arg4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
