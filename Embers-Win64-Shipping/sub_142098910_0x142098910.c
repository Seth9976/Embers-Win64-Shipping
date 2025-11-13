// 函数: sub_142098910
// 地址: 0x142098910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return 

uint64_t rax = (*(*rcx + 0x260))(rcx)

if (rax != 0)
    *(arg1 + 0x50) = sub_1421489d0(rax, *(arg2 + 0x80), arg1 + 0x58)
    sub_1420a4450(arg1, rax, arg2 + 0x80)
