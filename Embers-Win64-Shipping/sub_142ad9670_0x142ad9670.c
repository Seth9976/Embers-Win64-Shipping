// 函数: sub_142ad9670
// 地址: 0x142ad9670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x148)

if (rcx == 0)
    return 

char rax_2 = (*(*rcx + 0x160))(rcx)
*(arg1 + 0x350) = rax_2

if (rax_2 != 0)
    int64_t* rcx_1 = *(arg1 + 0x148)
    (*(*rcx_1 + 0x168))(rcx_1)
    int64_t* rcx_2 = *(arg1 + 0x148)
    *(arg1 + 0x310) = arg2
    *(arg1 + 0x31c) = (*(*rcx_2 + 0x170))(rcx_2)
    return 

*(arg1 + 0x31c) = 0xffffffff
*(arg1 + 0x310) = 0x10000000000000
