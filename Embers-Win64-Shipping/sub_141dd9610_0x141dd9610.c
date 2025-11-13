// 函数: sub_141dd9610
// 地址: 0x141dd9610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x20)

if (*(arg1 + 0x24) != rdx)
    sub_1405a5310(arg1 + 0x18, rdx)

int32_t rdx_1 = *(arg1 + 0x30)

if (*(arg1 + 0x34) != rdx_1)
    sub_1408e7380(arg1 + 0x28, rdx_1)

int32_t rdx_2 = *(arg1 + 0x40)

if (*(arg1 + 0x44) == rdx_2)
    return 

return sub_1405a5310(arg1 + 0x38, rdx_2) __tailcall
