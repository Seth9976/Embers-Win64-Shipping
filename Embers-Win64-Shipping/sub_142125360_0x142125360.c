// 函数: sub_142125360
// 地址: 0x142125360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if ((*(arg1 + 0x5c) & 8) != 0)
    result.o = *(arg1 + 0x54)
    return result

int64_t* rcx = *(arg1 + 0xd0)

if (rcx != 0)
    jump(*(*rcx + 0x388))

result.o = 0x3f800000
return result
