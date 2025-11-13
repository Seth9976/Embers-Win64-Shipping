// 函数: sub_142218460
// 地址: 0x142218460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0xa)
int512_t result

if (rax == 1)
    result.o = 0x3d4ccccd
    return result

if (rax != 2)
    result.o = 0x3f800000
    return result

result.o = *(arg1 + 0xc4)
return result
