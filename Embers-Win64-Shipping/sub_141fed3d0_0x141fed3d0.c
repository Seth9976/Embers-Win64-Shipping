// 函数: sub_141fed3d0
// 地址: 0x141fed3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_2 = sx.q(arg3) * 0x50 + *(arg1 + 0x10)

switch (arg2)
    case 0
        *(r8_2 + 4) = _mm_max_ss(*(r8_2 + 0x10), arg4)
    case 1
        *(r8_2 + 0x10) = _mm_min_ss(*(r8_2 + 4), arg4)
    case 2
        *(r8_2 + 8) = _mm_max_ss(*(r8_2 + 0x14), arg4)
    case 3
        *(r8_2 + 0x14) = _mm_min_ss(*(r8_2 + 8), arg4)
    case 4
        *(r8_2 + 0xc) = _mm_max_ss(*(r8_2 + 0x18), arg4)
    case 5
        *(r8_2 + 0x18) = _mm_min_ss(*(r8_2 + 0xc), arg4)

r8_2.b = 1
int64_t result = sub_141fdb820(arg1 + 0x10, zx.o(0), r8_2.b)
*(arg1 + 8) |= 2
return result
