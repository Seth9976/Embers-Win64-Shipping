// 函数: sub_1418be440
// 地址: 0x1418be440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(*(arg1 + 0x10) + 0x240)

if (*(rdi + 0x78) != 0)
    sub_1418c86c0(rdi, 0, 0)

void* rdx = *(rdi + 0x70)

if (*(rdx + 0x2c) == 2)
    sub_1418e06b0(*(arg1 + 0x10) + 0x248, rdx)

return sub_1418e9300(*(arg1 + 0x10)) __tailcall
