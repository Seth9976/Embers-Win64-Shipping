// 函数: sub_141f58de0
// 地址: 0x141f58de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x410) = 0

if (*(arg1 + 0x414) s<= 0xffffffff)
    sub_141846c50(arg1 + 0x408, 0)

int32_t rax = *(arg1 + 0x42c)
*(arg1 + 0x428) = 0

if (rax s< 0 && rax != 0)
    sub_1405a5310(arg1 + 0x420, 0)

int32_t result = *(arg1 + 0x444)
*(arg1 + 0x440) = 0

if (result s< 0 && result != 0)
    result = sub_141846c50(arg1 + 0x438, 0)

if (arg2 == 0)
    return result

return sub_141f77550(arg1)
