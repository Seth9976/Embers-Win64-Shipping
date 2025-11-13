// 函数: sub_142ad1730
// 地址: 0x142ad1730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_142a72b80(arg1, arg2, arg3)
int32_t rcx_1 = *(arg1 + 0x58) - 0x777
*(arg1 + 0x80) = 1

if (rcx_1 s<= 0)
    *(arg1 + 0xc) = 0
    *(arg1 + 0x68) = 0x101
    *(arg1 + 0x10) = 1 - rcx_1
    *(arg1 + 0x84) = 1
    return 1 - rcx_1

*(arg1 + 0xc) = 1
*(arg1 + 0x68) = 0x101
*(arg1 + 0x10) = rcx_1
*(arg1 + 0x84) = 1
return result
