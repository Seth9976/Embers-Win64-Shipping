// 函数: sub_140b2f9f0
// 地址: 0x140b2f9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x200)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0x208)

if (i_1 != 0)
    void* rbx_1 = rbx + 0x10
    int32_t i
    
    do
        sub_1405ec5c0(rbx_1)
        rbx_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x200)

if (rcx != 0)
    sub_140a74f90(rcx)
