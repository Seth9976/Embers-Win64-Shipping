// 函数: sub_140664480
// 地址: 0x140664480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 8)

if (rcx == 0)
    return 

int32_t rax = *(rcx + 0xc)
*(rcx + 0xc) -= 1

if (rax == 1)
    jump(*(*rcx + 8))
