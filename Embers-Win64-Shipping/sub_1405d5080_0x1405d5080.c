// 函数: sub_1405d5080
// 地址: 0x1405d5080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d56f80
arg1[1] = *(arg2 + 8)
arg1[2].d = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x15) = *(arg2 + 0x15)
*(arg1 + 0x16) = *(arg2 + 0x16)
arg1[3] = *(arg2 + 0x18)
void* rax_6 = *(arg2 + 0x20)
arg1[4] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

*arg1 = &data_142d56ff0
arg1[5] = 0
uint64_t i_1 = *(arg2 + 0x30)
void* rbp = *(arg2 + 0x28)
arg1[6] = i_1

if (i_1 != 0)
    sub_1405dab00(&arg1[5], i_1, 0)
    int64_t* rcx_1 = arg1[5]
    void* rdx_1 = rbp + 4
    uint64_t i
    
    do
        *rcx_1 = 0
        rcx_1 = &rcx_1[1]
        int16_t rax_7 = *(rdx_1 - 4)
        rdx_1 += 8
        rcx_1[-1].w = rax_7
        *(rcx_1 - 6) = *(rdx_1 - 0xa)
        *(rcx_1 - 4) = *(rdx_1 - 8)
        *(rcx_1 - 2) = *(rdx_1 - 6)
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    arg1[7] = 0

return arg1
