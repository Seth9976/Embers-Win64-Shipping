// 函数: sub_140d7ad40
// 地址: 0x140d7ad40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 0x38) u>> 1).b & 1) == 0)
    return 0x80040201

uint128_t zmm1 = zx.o(arg3[1])
int64_t* rcx = *(arg1 + 0x18)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*arg3))
zmm1 = _mm_cvtepi32_ps(zmm1)
int32_t arg_8 = zmm0.d
int32_t arg_c = zmm1.d
*arg4 = (*(*rcx + 0x40))(rcx, &arg_8)
return 0
