// 函数: sub_141b04ae0
// 地址: 0x141b04ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = arg2

if ((*(arg2 + 0x14) | arg2[1].d | *(arg2 + 0xc) | *(arg2 + 8)) == 0)
    return sub_141afdb20(rcx, arg1 + 8) __tailcall

uint128_t zmm0 = *arg2
int32_t rbx = *(arg2 + 0x18)
uint64_t arg_8 = arg2[1].q
sub_141afdb20(rcx, arg1 + 8)
*(arg2 + 0x38) = _mm_unpacklo_pd(zmm0, arg_8)
arg2[3].d = zmm0.d
char result = _mm_bsrli_si128(zmm0, 4).b
*(arg2 + 0x34) = result
*(arg2 + 0x48) = rbx
return result
