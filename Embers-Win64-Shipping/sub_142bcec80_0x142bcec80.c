// 函数: sub_142bcec80
// 地址: 0x142bcec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)

if (rdx == 0)
    return 

int128_t* rax = *(arg1 + 0x20)
*(rdx + 0x98) = *rax
*(rdx + 0xa8) = rax[1]
*(rdx + 0xb8) = rax[2].q
