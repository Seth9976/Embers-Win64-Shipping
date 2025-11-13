// 函数: sub_14039f4de
// 地址: 0x14039f4de
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2)
int64_t rdx = sx.q(arg4)
uint128_t zmm0 = zx.o(*arg1)
uint128_t zmm1 = _mm_unpacklo_epi64(zx.o(*arg3), arg3[1])
zmm1 = _mm_add_epi16(_mm_mpsadbw_epu8(zmm1, zmm0, 0), _mm_mpsadbw_epu8(zmm1, zmm0, 5))
zmm0 = zx.o(*(arg1 + rax))
int32_t temp0_4[0x4] = _mm_unpacklo_epi64(zx.o(*(arg3 + rdx)), *(arg3 + rdx + 8))
void* rsi_1 = arg1 + (rax << 1)
void* rdi_1 = arg3 + (rdx << 1)
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_4, zmm0, 0), _mm_mpsadbw_epu8(temp0_4, zmm0, 5)))
zmm0 = zx.o(*rsi_1)
int32_t temp0_9[0x4] = _mm_unpacklo_epi64(zx.o(*rdi_1), *(rdi_1 + 8))
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_9, zmm0, 0), _mm_mpsadbw_epu8(temp0_9, zmm0, 5)))
zmm0 = zx.o(*(rsi_1 + rax))
int32_t temp0_14[0x4] = _mm_unpacklo_epi64(zx.o(*(rdi_1 + rdx)), *(rdi_1 + rdx + 8))
void* rsi_2 = rsi_1 + (rax << 1)
void* rdi_2 = rdi_1 + (rdx << 1)
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_14, zmm0, 0), _mm_mpsadbw_epu8(temp0_14, zmm0, 5)))
zmm0 = zx.o(*rsi_2)
int32_t temp0_19[0x4] = _mm_unpacklo_epi64(zx.o(*rdi_2), *(rdi_2 + 8))
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_19, zmm0, 0), _mm_mpsadbw_epu8(temp0_19, zmm0, 5)))
zmm0 = zx.o(*(rsi_2 + rax))
int32_t temp0_24[0x4] = _mm_unpacklo_epi64(zx.o(*(rdi_2 + rdx)), *(rdi_2 + rdx + 8))
void* rsi_3 = rsi_2 + (rax << 1)
void* rdi_3 = rdi_2 + (rdx << 1)
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_24, zmm0, 0), _mm_mpsadbw_epu8(temp0_24, zmm0, 5)))
zmm0 = zx.o(*rsi_3)
int32_t temp0_29[0x4] = _mm_unpacklo_epi64(zx.o(*rdi_3), *(rdi_3 + 8))
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_29, zmm0, 0), _mm_mpsadbw_epu8(temp0_29, zmm0, 5)))
zmm0 = zx.o(*(rsi_3 + rax))
int32_t temp0_34[0x4] = _mm_unpacklo_epi64(zx.o(*(rdi_3 + rdx)), *(rdi_3 + rdx + 8))
void* rsi_4 = rsi_3 + (rax << 1)
void* rdi_4 = rdi_3 + (rdx << 1)
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_34, zmm0, 0), _mm_mpsadbw_epu8(temp0_34, zmm0, 5)))
zmm0 = zx.o(*rsi_4)
int32_t temp0_39[0x4] = _mm_unpacklo_epi64(zx.o(*rdi_4), *(rdi_4 + 8))
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_39, zmm0, 0), _mm_mpsadbw_epu8(temp0_39, zmm0, 5)))
zmm0 = zx.o(*(rsi_4 + rax))
int32_t temp0_44[0x4] = _mm_unpacklo_epi64(zx.o(*(rdi_4 + rdx)), *(rdi_4 + rdx + 8))
void* rsi_5 = rsi_4 + (rax << 1)
void* rdi_5 = rdi_4 + (rdx << 1)
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_44, zmm0, 0), _mm_mpsadbw_epu8(temp0_44, zmm0, 5)))
zmm0 = zx.o(*rsi_5)
int32_t temp0_49[0x4] = _mm_unpacklo_epi64(zx.o(*rdi_5), *(rdi_5 + 8))
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_49, zmm0, 0), _mm_mpsadbw_epu8(temp0_49, zmm0, 5)))
zmm0 = zx.o(*(rsi_5 + rax))
int32_t temp0_54[0x4] = _mm_unpacklo_epi64(zx.o(*(rdi_5 + rdx)), *(rdi_5 + rdx + 8))
void* rsi_6 = rsi_5 + (rax << 1)
void* rdi_6 = rdi_5 + (rdx << 1)
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_54, zmm0, 0), _mm_mpsadbw_epu8(temp0_54, zmm0, 5)))
zmm0 = zx.o(*rsi_6)
int32_t temp0_59[0x4] = _mm_unpacklo_epi64(zx.o(*rdi_6), *(rdi_6 + 8))
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_59, zmm0, 0), _mm_mpsadbw_epu8(temp0_59, zmm0, 5)))
zmm0 = zx.o(*(rsi_6 + rax))
int32_t temp0_64[0x4] = _mm_unpacklo_epi64(zx.o(*(rdi_6 + rdx)), *(rdi_6 + rdx + 8))
void* rsi_7 = rsi_6 + (rax << 1)
void* rdi_7 = rdi_6 + (rdx << 1)
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_64, zmm0, 0), _mm_mpsadbw_epu8(temp0_64, zmm0, 5)))
zmm0 = zx.o(*rsi_7)
int32_t temp0_69[0x4] = _mm_unpacklo_epi64(zx.o(*rdi_7), *(rdi_7 + 8))
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_69, zmm0, 0), _mm_mpsadbw_epu8(temp0_69, zmm0, 5)))
zmm0 = zx.o(*(rsi_7 + rax))
int32_t temp0_74[0x4] = _mm_unpacklo_epi64(zx.o(*(rdi_7 + rdx)), *(rdi_7 + rdx + 8))
zmm1 = _mm_add_epi16(zmm1, 
    _mm_add_epi16(_mm_mpsadbw_epu8(temp0_74, zmm0, 0), _mm_mpsadbw_epu8(temp0_74, zmm0, 5)))
uint128_t zmm2 = zmm1
zmm1 = _mm_unpacklo_epi16(zmm1, 0)
zmm2 = _mm_unpackhi_epi16(zmm2, 0)
*arg5 = zmm1
arg5[1] = zmm2
return zx.o(0)
