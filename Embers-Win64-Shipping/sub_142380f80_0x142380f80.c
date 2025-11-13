// 函数: sub_142380f80
// 地址: 0x142380f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x100)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0x108)

if (i_1 != 0)
    int32_t i
    
    do
        sub_1408081b0(rbx)
        sub_1405ec8a0(rbx + 0x10)
        sub_1405d1550(rbx + 8)
        sub_1405d1550(rbx)
        rbx += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x100)

if (rcx != 0)
    sub_140a74f90(rcx)
