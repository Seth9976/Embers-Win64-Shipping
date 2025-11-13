// 函数: sub_140bc3700
// 地址: 0x140bc3700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)

if (*(rcx + 0x63) != 0)
    return 

*(rcx + 0x63) = 1
rcx[0xc].b = 1

if (*(rcx + 0x61) == 0)
    jump(*(*rcx + 0x10))
