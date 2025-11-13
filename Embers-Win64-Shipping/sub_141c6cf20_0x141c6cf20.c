// 函数: sub_141c6cf20
// 地址: 0x141c6cf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = (arg2 * arg3) << 2
*(arg1 + 0x200) = rdx_1
memset(arg1, 0, sx.q(rdx_1))
memset(arg1 + 0x100, 0, sx.q(*(arg1 + 0x200)))
*(arg1 + 0x204) = 0
*(arg1 + 0x218) = 0

if (*(arg1 + 0x21c) s<= 0xffffffff)
    sub_140775b10(arg1 + 0x210, 0)

int32_t result = arg3 * arg4 + *(arg1 + 0x218)
*(arg1 + 0x218) = result

if (result s<= *(arg1 + 0x21c))
    return result

return sub_140775270(arg1 + 0x210)
