// 函数: sub_141ac5e40
// 地址: 0x141ac5e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg2 + 0x160)
int64_t rdx = zmm1.q
int64_t r8 = _mm_bsrli_si128(zmm1, 8).q
int32_t r9_5 = ((r8 u>> 0x20).d ^ *(arg1 + 0x7c)) | ((rdx u>> 0x20).d ^ *(arg1 + 0x74))
    | (*(arg1 + 0x78) ^ r8.d) | (*(arg1 + 0x70) ^ rdx.d)
int32_t result

if (r9_5 == 0)
    zmm1 = *(arg2 + 0x170)
    int64_t rdx_1 = _mm_bsrli_si128(zmm1, 8).q
    int64_t rcx = zmm1.q
    int32_t r8_6 = ((rdx_1 u>> 0x20).d ^ *(arg1 + 0x8c)) | ((rcx u>> 0x20).d ^ *(arg1 + 0x84))
        | (*(arg1 + 0x88) ^ rdx_1.d) | (*(arg1 + 0x80) ^ rcx.d)
    
    if (r8_6 == 0)
        result.b = 0
        return result

result.b = 1
return result
