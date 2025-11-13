// 函数: sub_14232b6d0
// 地址: 0x14232b6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x260
    int32_t i
    
    do
        *(rbx_1 - 0x38) = &data_142dd5bb0
        sub_14081d280(rbx_1)
        sub_14081c9d0(rbx_1 - 8)
        sub_140a1d5c0(rbx_1 - 0x20)
        *(rbx_1 - 0x28) = &data_142da7708
        sub_1419948a0(rbx_1 - 0x38)
        sub_1405d1550(rbx_1 - 0x50)
        sub_14081d2f0(rbx_1 - 0x250)
        rbx_1 += 0x2a0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
