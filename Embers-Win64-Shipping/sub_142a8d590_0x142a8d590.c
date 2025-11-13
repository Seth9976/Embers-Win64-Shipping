// 函数: sub_142a8d590
// 地址: 0x142a8d590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0xffff)
    jump(*(*arg1 + 0x10))

int64_t r8 = *arg1

if ((*(r8 + 0x10))(arg1, (arg2 s>> 0xa).w - 0x2840, r8) != 0
        && (*(*arg1 + 0x10))(arg1, (0x3ff & arg2.w) | 0xdc00) != 0)
    return 1

return 0
