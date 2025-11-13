// 函数: sub_14039f80c
// 地址: 0x14039f80c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2)
int64_t rdx = sx.q(arg4)
void* rsi_1 = arg1 + (rax << 1)
void* rdi_1 = arg3 + (rdx << 1)
uint128_t zmm1 = _mm_add_epi16(
    _mm_add_epi16(
        _mm_add_epi16(_mm_mpsadbw_epu8(_mm_unpacklo_epi64(zx.o(*arg3), arg3[1]), zx.o(*arg1), 0), 
            _mm_mpsadbw_epu8(_mm_unpacklo_epi64(zx.o(*(arg3 + rdx)), *(arg3 + rdx + 8)), 
                zx.o(*(arg1 + rax)), 0)), 
        _mm_mpsadbw_epu8(_mm_unpacklo_epi64(zx.o(*rdi_1), *(rdi_1 + 8)), zx.o(*rsi_1), 0)), 
    _mm_mpsadbw_epu8(_mm_unpacklo_epi64(zx.o(*(rdi_1 + rdx)), *(rdi_1 + rdx + 8)), 
    zx.o(*(rsi_1 + rax)), 0))
uint128_t zmm2 = zmm1
zmm1 = _mm_unpacklo_epi16(zmm1, 0)
zmm2 = _mm_unpackhi_epi16(zmm2, 0)
*arg5 = zmm1
arg5[1] = zmm2
return zx.o(0)
