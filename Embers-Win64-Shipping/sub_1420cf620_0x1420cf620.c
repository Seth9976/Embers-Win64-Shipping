// 函数: sub_1420cf620
// 地址: 0x1420cf620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg3 + 4) * 0xbb38435 + 0x3619636b
*(arg3 + 4) = r9 * 0xbb38435 + 0x3619636b
arg1[1] = ((r9 u>> 9 | 0x3f800000) - 1f) * 360f
*arg1 = (((r9 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) * 360f

if (arg2 == 0)
    arg1[2] = 0
    return arg1

*(arg3 + 4) = (r9 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
arg1[2] =
    ((((r9 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) * 360f
return arg1
