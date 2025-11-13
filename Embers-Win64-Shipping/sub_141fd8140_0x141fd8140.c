// 函数: sub_141fd8140
// 地址: 0x141fd8140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)

if (rcx != 0)
    (**(rcx + 8))(rcx + 8, 1)

void* rcx_2 = *(arg1 + 8)

if (rcx_2 == 0)
    return 

jump(**(rcx_2 + 8))
