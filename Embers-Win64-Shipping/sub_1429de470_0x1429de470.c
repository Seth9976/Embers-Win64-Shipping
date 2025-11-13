// 函数: sub_1429de470
// 地址: 0x1429de470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3820) == 1 || *(arg1 + 0x1e68) == 0)
    return 0xffffffff

int64_t rax_1 = *(arg1 + 0x3818)
*(arg1 + 0x3820) = 1
*arg3 = rax_1
*arg4 = 0
return zx.q(sub_142a1dd90(arg1 + 0x12c0, arg2, arg5))
